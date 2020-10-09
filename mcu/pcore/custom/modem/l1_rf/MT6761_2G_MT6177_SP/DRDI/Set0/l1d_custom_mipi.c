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
 *   l1d_custom_mipi.c
 *
 * Project:
 * --------
 *   MT6177L
 *
 * Description:
 * ------------
 *   MT6177L MIPI Table
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 *
 *******************************************************************************/

#include "l1d_cid.h"
#include "m12190_pcore.h"
#include "l1d_mipi_data_pcore.h"
#include "l1d_mipi_data_common.h"
#include "l1d_custom_mipi.h"
#include "l1d_mipi_pcore.h"
#include "mml1_custom_mipi.h"
#include "mml1_drdi.h"

/*===============================================================================================*/
#if IS_MIPI_SUPPORT

/*----------------------------------------*/
/* MIPI Control Table for Qual Band       */
/*----------------------------------------*/
const sGGE_MIPI_CTRL_TABLE_BAND GGE_MIPI_CTRL_TABLE_GSM850_Set0=
{
   {  
      /* GGE_MIPI_CTRL_TABLE_GSM850.mipi_rx_ctrl_table.mipi_rxctrl_event[] */
      {  /*            element       data idx       event type       ,  event timing  */
         /*    No.      type   ,  { start, stop },                         ( QB )     */
         {  /*  0 */  GGE_MIPI_ASM ,  {   0  ,  2   },  GGE_MIPI_TRX_ON      ,   QB_MIPI_RX_ON0_Set0   },
         {  /*  1 */  GGE_MIPI_ASM ,  {   3  ,  3   },  GGE_MIPI_TRX_ON      ,   QB_MIPI_RX_ON1_Set0   },
         {  /*  2 */  GGE_MIPI_ASM ,  {   4  ,  4   },  GGE_MIPI_TRX_OFF     ,   QB_MIPI_RX_OFF0_Set0  },
         {  /*  3 */  GGE_MIPI_ASM_RXD ,  {   5  ,  5   },  GGE_MIPI_TRX_ON  ,   QB_MIPI_RX_ON0_Set0   },
         {  /*  4 */  GGE_MIPI_ASM_RXD ,  {   6  ,  6   },  GGE_MIPI_TRX_OFF ,   QB_MIPI_RX_OFF0_Set0  },
         {  /*  5 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /*  6 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /*  7 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /*  8 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /*  9 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /* 10 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /* 11 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /* 12 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
      },
      /* GGE_MIPI_CTRL_TABLE_GSM850.mipi_rx_ctrl_table.mipi_rxctrl_data[] */
      {  	/*    No.    elm type  ,  port select    	   ,  data format      	        ,usid		      ,{  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data },   */
         {  /*  0 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  ,{  {    251           , 0x1C, 0x38 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  1 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  ,{  {    251           , 0x05, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  2 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  ,{  {    251           , 0x03, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  3 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  ,{  {    251           , 0x02, 0x06 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  4 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W_EXT_1ST    ,MIPI_USID_ASM0_Set0  ,{  {    251           , 0x23, 0x80 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  5 */  GGE_MIPI_ASM_RXD ,  GGE_MIPI_PORT2 ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM1_Set0  ,{  {    251           , 0x01, 0x03 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  6 */  GGE_MIPI_ASM_RXD ,  GGE_MIPI_PORT2 ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM1_Set0  ,{  {    251           , 0x01, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  7 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  8 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  9 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 10 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 11 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 12 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 13 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 14 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 15 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 16 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 17 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 18 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 19 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 20 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 21 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 22 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 23 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 24 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 25 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 26 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 27 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 28 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 29 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
      }
   },
   {  
      /* GGE_MIPI_CTRL_TABLE_GSM850.mipi_tx_ctrl_table.mipi_txctrl_event[] */
      {  /*            element       data idx       event type       ,  event timing  */
         /*    No.      type   ,  { start, stop },                         ( QB )     */
         {  /*  0 */  GGE_MIPI_ASM ,  {   0  ,  2   },  GGE_MIPI_TRX_ON      ,   QB_MIPI_TX_ON1_Set0   },
         {  /*  1 */  GGE_MIPI_PA  ,  {   3  ,  5   },  GGE_MIPI_TRX_ON      ,   QB_MIPI_TX_ON2_Set0   },
         {  /*  2 */  GGE_MIPI_ASM ,  {   6  ,  6   },  GGE_MIPI_TRX_OFF     ,   QB_MIPI_TX_OFF1_Set0  },
         {  /*  3 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  4 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  5 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  6 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  7 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  8 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  9 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /* 10 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /* 11 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /* 12 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
      },
      /* GGE_MIPI_CTRL_TABLE_GSM850.mipi_tx_ctrl_table.mipi_txctrl_data[] */
      {     /* No.       elm type  ,  port select        ,  data format                 ,usid		   , {  { subband arfcn    , addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data },   */
         {  /*  0 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    251           , 0x1C, 0x38 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  1 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    251           , 0x05, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  2 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    251           , 0x03, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  3 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    251           , 0x01, 0xF7 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  4 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    251           , 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, GGE_MIPI_PA_G8 }, }  },
         {  /*  5 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    251           , 0x02, 0x0F }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  6 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W_EXT_1ST    ,MIPI_USID_ASM0_Set0  , {  {    251           , 0x23, 0x80 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  7 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  8 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  9 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 10 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 11 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 12 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 13 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 14 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 15 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 16 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 17 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 18 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 19 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 20 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 21 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 22 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 23 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 24 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 25 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 26 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 27 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 28 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 29 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
      },
      /* GGE_MIPI_CTRL_TABLE_GSM850.mipi_tx_ctrl_table.mipi_txctrl_pa_data */
      {  /* GMSK Data */
         /* subband0 data , subband1 data , subband2 data , subband3 data , subband4 data  */
         {
            {    0x8A        ,   0x8A        ,   0x8A        ,   0x8A        ,   0x8A           },
         },
         /* 8PSK Data */
         /* subband0 data , subband1 data , subband2 data , subband3 data , subband4 data  */
         {
            {    0x8B        ,   0x8B        ,   0x8B        ,   0x8B        ,   0x8B           },
         }
      },
   },
   {
      /* GGE_MIPI_CTRL_TABLE_GSM850.mipi_txmid_ctrl_table.mipi_txmidctrl_event[][] */
      {  
         ///////////////////////////////////////////////////////////////////////////////////
         /* Only the "element type", "data idx", "event type" in GMSK->GMSK,              */
         /* and "event timing" in GMSK->GMSK, 8PSK->8PSK, 8PSK->GMSK, GMSK->8PSK are used.*/
         ///////////////////////////////////////////////////////////////////////////////////
         /* GMSK->GMSK */
         {  /*            element       data idx       event type       ,  event timing  */
            /*    No.      type   ,  { start, stop },                         ( QB )     */
            {  /*  0 */  GGE_MIPI_PA  ,  {   0  ,  0   },  GGE_MIPI_TXMID       ,  QB_MIPI_TXMID0_GG_Set0 },
            {  /*  1 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         },
         /* 8PSK->8PSK */
         {  /*            element       data idx       event type       ,  event timing  */
            /*    No.      type   ,  { start, stop },                         ( QB )     */
            {  /*  0 */  GGE_MIPI_PA  ,  {   0  ,  0   },  GGE_MIPI_TXMID       ,  QB_MIPI_TXMID0_88_Set0 },
            {  /*  1 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         },
         /* 8PSK->GMSK */
         {  /*            element       data idx       event type       ,  event timing  */
            /*    No.      type   ,  { start, stop },                         ( QB )     */
            {  /*  0 */  GGE_MIPI_PA  ,  {   0  ,  0   },  GGE_MIPI_TXMID       ,  QB_MIPI_TXMID0_8G_Set0 },
            {  /*  1 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         },
         /* GMSK->8PSK */
         {  /*            element       data idx       event type       ,  event timing  */
            /*    No.      type   ,  { start, stop },                         ( QB )     */
            {  /*  0 */  GGE_MIPI_PA  ,  {   0  ,  0   },  GGE_MIPI_TXMID       ,  QB_MIPI_TXMID0_G8_Set0 },
            {  /*  1 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         },
      },
      /* GGE_MIPI_CTRL_TABLE_GSM850.mipi_txmid_ctrl_table.mipi_txmidctrl_data[] */
      {  /* No.       elm type  ,  port select        ,  data format                 ,usid		   , {  { subband arfcn    , addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data },   */
         {  /*  0 */  GGE_MIPI_PA  ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    251           , 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  1 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
      }
   }
};

const sGGE_MIPI_CTRL_TABLE_BAND GGE_MIPI_CTRL_TABLE_GSM900_Set0=
{
   {
      /* GGE_MIPI_CTRL_TABLE_GSM900.mipi_rx_ctrl_table.mipi_rxctrl_event[] */
      {  /*            element       data idx       event type       ,  event timing  */
         /*    No.      type   ,  { start, stop },                         ( QB )     */
         {  /*  0 */  GGE_MIPI_ASM ,  {   0  ,  2   },  GGE_MIPI_TRX_ON      ,   QB_MIPI_RX_ON0_Set0   },
         {  /*  1 */  GGE_MIPI_ASM ,  {   3  ,  3   },  GGE_MIPI_TRX_ON      ,   QB_MIPI_RX_ON1_Set0   },
         {  /*  2 */  GGE_MIPI_ASM ,  {   4  ,  4   },  GGE_MIPI_TRX_OFF     ,   QB_MIPI_RX_OFF0_Set0  },
         {  /*  3 */  GGE_MIPI_ASM_RXD ,  {   5  ,  5   },  GGE_MIPI_TRX_ON  ,   QB_MIPI_RX_ON0_Set0   },
         {  /*  4 */  GGE_MIPI_ASM_RXD ,  {   6  ,  6   },  GGE_MIPI_TRX_OFF ,   QB_MIPI_RX_OFF0_Set0  },
         {  /*  5 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /*  6 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /*  7 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /*  8 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /*  9 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /* 10 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /* 11 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /* 12 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
      },
      /* GGE_MIPI_CTRL_TABLE_GSM900.mipi_rx_ctrl_table.mipi_rxctrl_data[] */
      {  	/*    No.    elm type  ,  port select    	   ,  data format      	        ,usid		      ,{  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data },   */
         {  /*  0 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  ,{  {    124           , 0x1C, 0x38 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  1 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  ,{  {    124           , 0x05, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  2 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  ,{  {    124           , 0x03, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  3 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  ,{  {    124           , 0x02, 0x02 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  4 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W_EXT_1ST    ,MIPI_USID_ASM0_Set0  ,{  {    124           , 0x23, 0x80 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  5 */  GGE_MIPI_ASM_RXD ,  GGE_MIPI_PORT2     ,  GGE_MIPI_REG_W        ,MIPI_USID_ASM1_Set0  ,{  {    124           , 0x01, 0x02 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  6 */  GGE_MIPI_ASM_RXD ,  GGE_MIPI_PORT2     ,  GGE_MIPI_REG_W        ,MIPI_USID_ASM1_Set0  ,{  {    124           , 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  7 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  8 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  9 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 10 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 11 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 12 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 13 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 14 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 15 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 16 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 17 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 18 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 19 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 20 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 21 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 22 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 23 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 24 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 25 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 26 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 27 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 28 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 29 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
      }
   },
   {
      /* GGE_MIPI_CTRL_TABLE_GSM900.mipi_tx_ctrl_table.mipi_txctrl_event[] */
      {  /*            element       data idx       event type       ,  event timing  */
         /*    No.      type   ,  { start, stop },                         ( QB )     */
         {  /*  0 */  GGE_MIPI_ASM ,  {   0  ,  2   },  GGE_MIPI_TRX_ON      ,   QB_MIPI_TX_ON1_Set0   },
         {  /*  1 */  GGE_MIPI_PA  ,  {   3  ,  5   },  GGE_MIPI_TRX_ON      ,   QB_MIPI_TX_ON2_Set0   },
         {  /*  2 */  GGE_MIPI_ASM ,  {   6  ,  6   },  GGE_MIPI_TRX_OFF     ,   QB_MIPI_TX_OFF1_Set0  },
         {  /*  3 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  4 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  5 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  6 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  7 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  8 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  9 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /* 10 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /* 11 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /* 12 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
      },
      /* GGE_MIPI_CTRL_TABLE_GSM900.mipi_tx_ctrl_table.mipi_txctrl_data[] */
      {     /* No.       elm type  ,  port select        ,  data format                 ,usid		  , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data },   */
         {  /*  0 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    124           , 0x1C, 0x38 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  1 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    124           , 0x05, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  2 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    124           , 0x03, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  3 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    124           , 0x01, 0xF7 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  4 */  GGE_MIPI_PA  ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    124           , 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, GGE_MIPI_PA_G8 }, }  },
         {  /*  5 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    124           , 0x02, 0x0F }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  6 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W_EXT_1ST    ,MIPI_USID_ASM0_Set0  , {  {    124           , 0x23, 0x80 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  7 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  8 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  9 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 10 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 11 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 12 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 13 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 14 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 15 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 16 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 17 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 18 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 19 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 20 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 21 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 22 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 23 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 24 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 25 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 26 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 27 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 28 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 29 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
      },
      /* GGE_MIPI_CTRL_TABLE_GSM900.mipi_tx_ctrl_table.mipi_txctrl_pa_data */
      {  /* GMSK Data */
         /* subband0 data , subband1 data , subband2 data , subband3 data , subband4 data  */
         {
            {    0x8A        ,   0x8A        ,   0x8A        ,   0x8A        ,   0x8A           },
         },
         /* 8PSK Data */
         /* subband0 data , subband1 data , subband2 data , subband3 data , subband4 data  */
         {
            {    0x8B        ,   0x8B        ,   0x8B        ,   0x8B        ,   0x8B           },
         }
      }
   },
   {
      /* GGE_MIPI_CTRL_TABLE_GSM900.mipi_txmid_ctrl_table.mipi_txmidctrl_event[][] */
      {  
         ///////////////////////////////////////////////////////////////////////////////////
         /* Only the "element type", "data idx", "event type" in GMSK->GMSK,              */
         /* and "event timing" in GMSK->GMSK, 8PSK->8PSK, 8PSK->GMSK, GMSK->8PSK are used.*/
         ///////////////////////////////////////////////////////////////////////////////////      
         /* GMSK->GMSK */
         {  /*            element       data idx       event type       ,  event timing  */
            /*    No.      type   ,  { start, stop },                         ( QB )     */
            {  /*  0 */  GGE_MIPI_PA  ,  {   0  ,  0   },  GGE_MIPI_TXMID       ,  QB_MIPI_TXMID0_GG_Set0 },
            {  /*  1 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         },
         /* 8PSK->8PSK */
         {  /*            element       data idx       event type       ,  event timing  */
            /*    No.      type   ,  { start, stop },                         ( QB )     */
            {  /*  0 */  GGE_MIPI_PA  ,  {   0  ,  0   },  GGE_MIPI_TXMID       ,  QB_MIPI_TXMID0_88_Set0 },
            {  /*  1 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         },
          /* 8PSK->GMSK */
         {  /*            element       data idx       event type       ,  event timing  */
            /*    No.      type   ,  { start, stop },                         ( QB )     */
            {  /*  0 */  GGE_MIPI_PA  ,  {   0  ,  0   },  GGE_MIPI_TXMID       ,  QB_MIPI_TXMID0_8G_Set0 },
            {  /*  1 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         },
         /* GMSK->8PSK */
         {  /*            element       data idx       event type       ,  event timing  */
            /*    No.      type   ,  { start, stop },                         ( QB )     */
            {  /*  0 */  GGE_MIPI_PA  ,  {   0  ,  0   },  GGE_MIPI_TXMID       ,  QB_MIPI_TXMID0_G8_Set0 },
            {  /*  1 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         },
      },
      /* GGE_MIPI_CTRL_TABLE_GSM900.mipi_txmid_ctrl_table.mipi_txmidctrl_data[] */
      {     /* No.       elm type  ,  port select        ,  data format                 ,usid		  , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data },   */
         {  /*  0 */  GGE_MIPI_PA  ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    124           , 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  1 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
      }
   }
};


const sGGE_MIPI_CTRL_TABLE_BAND GGE_MIPI_CTRL_TABLE_DCS1800_Set0=
{
   {
      /* GGE_MIPI_CTRL_TABLE_DCS1800.mipi_rx_ctrl_table.mipi_rxctrl_event[] */
      {  /*            element       data idx       event type       ,  event timing  */
         /*    No.      type   ,  { start, stop },                         ( QB )     */
         {  /*  0 */  GGE_MIPI_ASM ,  {   0  ,  2   },  GGE_MIPI_TRX_ON      ,   QB_MIPI_RX_ON0_Set0   },
         {  /*  1 */  GGE_MIPI_ASM ,  {   3  ,  3   },  GGE_MIPI_TRX_ON      ,   QB_MIPI_RX_ON1_Set0   },
         {  /*  2 */  GGE_MIPI_ASM ,  {   4  ,  4   },  GGE_MIPI_TRX_OFF     ,   QB_MIPI_RX_OFF0_Set0  },
         {  /*  3 */  GGE_MIPI_ASM_RXD ,  {   5  ,  5   },  GGE_MIPI_TRX_ON  ,   QB_MIPI_RX_ON0_Set0   },
         {  /*  4 */  GGE_MIPI_ASM_RXD ,  {   6  ,  6   },  GGE_MIPI_TRX_OFF ,   QB_MIPI_RX_OFF0_Set0  },
         {  /*  5 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /*  6 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /*  7 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /*  8 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /*  9 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /* 10 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /* 11 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /* 12 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
      },
      /* GGE_MIPI_CTRL_TABLE_DCS1800.mipi_rx_ctrl_table.mipi_rxctrl_data[] */
      {  	/*    No.    elm type  ,  port select    	   ,  data format      	        ,usid		      ,{  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data },   */
         {  /*  0 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  ,{  {    885           , 0x1C, 0x38 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  1 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  ,{  {    885           , 0x02, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  2 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  ,{  {    885           , 0x03, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  3 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  ,{  {    885           , 0x05, 0x01 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  4 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W_EXT_1ST    ,MIPI_USID_ASM0_Set0  ,{  {    885           , 0x23, 0x80 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  5 */  GGE_MIPI_ASM_RXD ,  GGE_MIPI_PORT2 ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM1_Set0  ,{  {    885           , 0x00, 0x04 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  6 */  GGE_MIPI_ASM_RXD ,  GGE_MIPI_PORT2 ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM1_Set0  ,{  {    885           , 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  7 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  8 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  9 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 10 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 11 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 12 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 13 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 14 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 15 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 16 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 17 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 18 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 19 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 20 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 21 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 22 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 23 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 24 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 25 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 26 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 27 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 28 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 29 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
      }
   },
   {
      /* GGE_MIPI_CTRL_TABLE_DCS1800.mipi_tx_ctrl_table.mipi_txctrl_event[] */
      {  /*            element       data idx       event type       ,  event timing  */
         /*    No.      type   ,  { start, stop },                         ( QB )     */
         {  /*  0 */  GGE_MIPI_ASM ,  {   0  ,  2   },  GGE_MIPI_TRX_ON      ,   QB_MIPI_TX_ON1_Set0   },
         {  /*  1 */  GGE_MIPI_PA  ,  {   3  ,  5   },  GGE_MIPI_TRX_ON      ,   QB_MIPI_TX_ON3_Set0   },
         {  /*  2 */  GGE_MIPI_ASM ,  {   6  ,  6   },  GGE_MIPI_TRX_OFF     ,   QB_MIPI_TX_OFF1_Set0  },
         {  /*  3 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  4 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  5 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  6 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  7 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  8 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  9 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /* 10 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /* 11 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /* 12 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
      },
      /* GGE_MIPI_CTRL_TABLE_DCS1800.mipi_tx_ctrl_table.mipi_txctrl_data[] */
      {     /* No.       elm type  ,  port select        ,  data format                 ,usid		  , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data },   */
         {  /*  0 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    885           , 0x1C, 0x38 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  1 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    885           , 0x02, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  2 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    885           , 0x03, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  3 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    885           , 0x01, 0xCD }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  4 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    885           , 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, GGE_MIPI_PA_G8 }, }  },
         {  /*  5 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    885           , 0x05, 0x0F }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  6 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W_EXT_1ST    ,MIPI_USID_ASM0_Set0  , {  {    885           , 0x23, 0x80 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  7 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  8 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  9 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 10 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 11 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 12 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 13 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 14 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 15 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 16 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 17 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 18 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 19 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 20 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 21 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 22 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 23 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 24 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 25 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 26 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 27 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 28 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 29 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
      },
      /* GGE_MIPI_CTRL_TABLE_DCS1800.mipi_tx_ctrl_table.mipi_txctrl_pa_data */
      {  /* GMSK Data */
         /* subband0 data , subband1 data , subband2 data , subband3 data , subband4 data  */
         {
            {    0x8E        ,   0x8E        ,   0x8E        ,   0x8E        ,   0x8E           },
         },
         /* 8PSK Data */
         /* subband0 data , subband1 data , subband2 data , subband3 data , subband4 data  */
         {
            {    0x8F        ,   0x8F        ,   0x8F        ,   0x8F        ,   0x8F           },
         }
      }
   },
   {
      /* GGE_MIPI_CTRL_TABLE_DCS1800.mipi_txmid_ctrl_table.mipi_txmidctrl_event[][] */
      {  
         ///////////////////////////////////////////////////////////////////////////////////
         /* Only the "element type", "data idx", "event type" in GMSK->GMSK,              */
         /* and "event timing" in GMSK->GMSK, 8PSK->8PSK, 8PSK->GMSK, GMSK->8PSK are used.*/
         ///////////////////////////////////////////////////////////////////////////////////      
         /* GMSK->GMSK */
         {  /*            element       data idx       event type       ,  event timing  */
            /*    No.      type   ,  { start, stop },                         ( QB )     */
            {  /*  0 */  GGE_MIPI_PA  ,  {   0  ,  0   },  GGE_MIPI_TXMID       ,  QB_MIPI_TXMID0_GG_Set0 },
            {  /*  1 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         },
         /* 8PSK->8PSK */
         {  /*            element       data idx       event type       ,  event timing  */
            /*    No.      type   ,  { start, stop },                         ( QB )     */
            {  /*  0 */  GGE_MIPI_PA  ,  {   0  ,  0   },  GGE_MIPI_TXMID       ,  QB_MIPI_TXMID0_88_Set0 },
            {  /*  1 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         },
         /* 8PSK->GMSK */
         {  /*            element       data idx       event type       ,  event timing  */
            /*    No.      type   ,  { start, stop },                         ( QB )     */
            {  /*  0 */  GGE_MIPI_PA  ,  {   0  ,  0   },  GGE_MIPI_TXMID       ,  QB_MIPI_TXMID0_8G_Set0 },
            {  /*  1 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         },
         /* GMSK->8PSK */
         {  /*            element       data idx       event type       ,  event timing  */
            /*    No.      type   ,  { start, stop },                         ( QB )     */
            {  /*  0 */  GGE_MIPI_PA  ,  {   0  ,  0   },  GGE_MIPI_TXMID       ,  QB_MIPI_TXMID0_G8_Set0},
            {  /*  1 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         },
      },
      /* GGE_MIPI_CTRL_TABLE_DCS1800.mipi_txmid_ctrl_table.mipi_txmidctrl_data[] */
      {     /* No.       elm type  ,  port select        ,  data format                 ,usid		  , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data },   */
         {  /*  0 */  GGE_MIPI_PA  ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    885           , 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  1 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
      }
   }
};


const sGGE_MIPI_CTRL_TABLE_BAND GGE_MIPI_CTRL_TABLE_PCS1900_Set0=
{
   {
      /* GGE_MIPI_CTRL_TABLE_PCS1900.mipi_rx_ctrl_table.mipi_rxctrl_event[] */
      {  /*            element       data idx       event type       ,  event timing  */
         /*    No.      type   ,  { start, stop },                         ( QB )     */
         {  /*  0 */  GGE_MIPI_ASM ,  {   0  ,  2   },  GGE_MIPI_TRX_ON      ,   QB_MIPI_RX_ON0_Set0   },
         {  /*  1 */  GGE_MIPI_ASM ,  {   3  ,  3   },  GGE_MIPI_TRX_ON      ,   QB_MIPI_RX_ON1_Set0   },
         {  /*  2 */  GGE_MIPI_ASM ,  {   4  ,  4   },  GGE_MIPI_TRX_OFF     ,   QB_MIPI_RX_OFF0_Set0  },
         {  /*  3 */  GGE_MIPI_ASM_RXD ,  {   5  ,  5   },  GGE_MIPI_TRX_ON  ,   QB_MIPI_RX_ON0_Set0   },
         {  /*  4 */  GGE_MIPI_ASM_RXD ,  {   6  ,  6   },  GGE_MIPI_TRX_OFF ,   QB_MIPI_RX_OFF0_Set0  },
         {  /*  5 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /*  6 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /*  7 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /*  8 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /*  9 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /* 10 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /* 11 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
         {  /* 12 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0       },
      },
      /* GGE_MIPI_CTRL_TABLE_PCS1900.mipi_rx_ctrl_table.mipi_rxctrl_data[] */
      {  	/*    No.    elm type  ,  port select    	   ,  data format      	        ,usid		      ,{  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data },   */
         {  /*  0 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  ,{  {    810           , 0x1C, 0x38 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  1 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  ,{  {    810           , 0x02, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  2 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  ,{  {    810           , 0x03, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  3 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  ,{  {    810           , 0x05, 0x01 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  4 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W_EXT_1ST    ,MIPI_USID_ASM0_Set0  ,{  {    810           , 0x23, 0x80 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  5 */  GGE_MIPI_ASM_RXD ,  GGE_MIPI_PORT2 ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM1_Set0  ,{  {    810           , 0x00, 0x05 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  6 */  GGE_MIPI_ASM_RXD ,  GGE_MIPI_PORT2 ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM1_Set0  ,{  {    810           , 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  7 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  8 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  9 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 10 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 11 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 12 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 13 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 14 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 15 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 16 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 17 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 18 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 19 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 20 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 21 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 22 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 23 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 24 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 25 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 26 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 27 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 28 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 29 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0,{  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
      }
   },
   {
      /* GGE_MIPI_CTRL_TABLE_PCS1900.mipi_tx_ctrl_table.mipi_txctrl_event[] */
      {  /*            element       data idx       event type       ,  event timing  */
         /*    No.      type   ,  { start, stop },                         ( QB )     */
         {  /*  0 */  GGE_MIPI_ASM ,  {   0  ,  2   },  GGE_MIPI_TRX_ON      ,   QB_MIPI_TX_ON1_Set0   },
         {  /*  1 */  GGE_MIPI_PA  ,  {   3  ,  5   },  GGE_MIPI_TRX_ON      ,   QB_MIPI_TX_ON3_Set0   },
         {  /*  2 */  GGE_MIPI_ASM ,  {   6  ,  6   },  GGE_MIPI_TRX_OFF     ,   QB_MIPI_TX_OFF1_Set0  },
         {  /*  3 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  4 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  5 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  6 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  7 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  8 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /*  9 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /* 10 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /* 11 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         {  /* 12 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
      },
      /* GGE_MIPI_CTRL_TABLE_PCS1900.mipi_tx_ctrl_table.mipi_txctrl_data[] */
      {     /* No.       elm type  ,  port select        ,  data format                 ,usid		  , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data },   */
         {  /*  0 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    810           , 0x1C, 0x38 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  1 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    810           , 0x02, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  2 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    810           , 0x03, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  3 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    810           , 0x01, 0xCD }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  4 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    810           , 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, GGE_MIPI_PA_G8 }, }  },
         {  /*  5 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    810           , 0x05, 0x0F }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  6 */  GGE_MIPI_ASM ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W_EXT_1ST    ,MIPI_USID_ASM0_Set0  , {  {    810           , 0x23, 0x80 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  7 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  8 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  9 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 10 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 11 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 12 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 13 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 14 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 15 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 16 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 17 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 18 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 19 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 20 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 21 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 22 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 23 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 24 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 25 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 26 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 27 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 28 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /* 29 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
      },
      /* GGE_MIPI_CTRL_TABLE_PCS1900.mipi_tx_ctrl_table.mipi_txctrl_pa_data */
      {  /* GMSK Data */
         /* subband0 data , subband1 data , subband2 data , subband3 data , subband4 data  */
         {
            {    0x8E        ,   0x8E        ,   0x8E        ,   0x8E        ,   0x8E           },
         },
         /* 8PSK Data */
         /* subband0 data , subband1 data , subband2 data , subband3 data , subband4 data  */
         {
            {    0x8F        ,   0x8F        ,   0x8F        ,   0x8F        ,   0x8F           },
         }
      }       
   },
   {
      /* GGE_MIPI_CTRL_TABLE_PCS1900.mipi_txmid_ctrl_table.mipi_txmidctrl_event[][] */
      {  
         ///////////////////////////////////////////////////////////////////////////////////
         /* Only the "element type", "data idx", "event type" in GMSK->GMSK,              */
         /* and "event timing" in GMSK->GMSK, 8PSK->8PSK, 8PSK->GMSK, GMSK->8PSK are used.*/
         ///////////////////////////////////////////////////////////////////////////////////      
         /* GMSK->GMSK */
         {  /*            element       data idx       event type       ,  event timing  */
            /*    No.      type   ,  { start, stop },                         ( QB )     */
            {  /*  0 */  GGE_MIPI_PA  ,  {   0  ,  0   },  GGE_MIPI_TXMID       ,  QB_MIPI_TXMID0_GG_Set0 },
            {  /*  1 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         },
         /* 8PSK->8PSK */
         {  /*            element       data idx       event type       ,  event timing  */
            /*    No.      type   ,  { start, stop },                         ( QB )     */
            {  /*  0 */  GGE_MIPI_PA  ,  {   0  ,  0   },  GGE_MIPI_TXMID       ,  QB_MIPI_TXMID0_88_Set0 },
            {  /*  1 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         },
         /* 8PSK->GMSK */
         {  /*            element       data idx       event type       ,  event timing  */
            /*    No.      type   ,  { start, stop },                         ( QB )     */
            {  /*  0 */  GGE_MIPI_PA  ,  {   0  ,  0   },  GGE_MIPI_TXMID       ,  QB_MIPI_TXMID0_8G_Set0 },
            {  /*  1 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         },
         /* GMSK->8PSK */
         {  /*            element       data idx       event type       ,  event timing  */
            /*    No.      type   ,  { start, stop },                         ( QB )     */
            {  /*  0 */  GGE_MIPI_PA  ,  {   0  ,  0   },  GGE_MIPI_TXMID       ,  QB_MIPI_TXMID0_G8_Set0 },
            {  /*  1 */  GGE_MIPI_NULL,  {   0  ,  0   },  GGE_MIPI_EVENT_NULL  ,        0           },
         },
      },
      /* GGE_MIPI_CTRL_TABLE_PCS1900.mipi_txmid_ctrl_table.mipi_txmidctrl_data[] */
      {     /* No.       elm type  ,  port select        ,  data format                 ,usid		  , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data },   */
         {  /*  0 */  GGE_MIPI_PA  ,  GGE_MIPI_PORT0     ,  GGE_MIPI_REG_W            ,MIPI_USID_ASM0_Set0  , {  {    810           , 0x00, GGE_MIPI_PA_G8 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
         {  /*  1 */  GGE_MIPI_NULL,  GGE_MIPI_DATA_NULL ,  GGE_MIPI_REG_W_NULL       ,MIPI_USID_INIT0_Set0, {  {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, }  },
      }
   }
};

   
const sGGE_MIPI_CTRL_TABLE_BAND* GGE_MIPI_CTRL_TABLE_Set0[]=
   {
      0,                                              /* FrequencyBand400  */
      &GGE_MIPI_CTRL_TABLE_GSM850_Set0,                    /* FrequencyBand850  */
      &GGE_MIPI_CTRL_TABLE_GSM900_Set0,                    /* FrequencyBand900  */
      &GGE_MIPI_CTRL_TABLE_DCS1800_Set0,                   /* FrequencyBand1800 */
      &GGE_MIPI_CTRL_TABLE_PCS1900_Set0,                   /* FrequencyBand1900 */
   };

#endif /* IS_MIPI_SUPPORT */

/*=========================================================================================*/

