/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
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
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *   lte_custom_rf_ca.h
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   MT6177L LTE ALTERNATE ROUTE MACRO DEFINE
 *
 * Author:
 * -------
 * -------
 *
 *   Tool Version : LTE Parsing Tool Gen93_v0.7_171208
 *   Excel Version : Gen93_6177L_1748_v1.0
 *
 *******************************************************************************/


#ifndef  _LTE_CUSTOM_RF_CA_Set3_H_
#define  _LTE_CUSTOM_RF_CA_Set3_H_
/* ------------------------------------------------------------------------- */

#include "lte_custom_rf.h"


/*------------------------------------------------------*/
/*  Rx Alternate FE route                               */
/*------------------------------------------------------*/
#define  LTE_FE_RX_Route25_Set3                            LTE_Band2
#define  LTE_FE_RX_Route25_RX_IO_SEL_Set3                  RX_IO_PRX8
#define  LTE_FE_RX_Route25_RXD_IO_SEL_Set3                 RX_IO_DRX8
#define  PDATA_LTE_FE_RX_Route25_PR1_Set3                  0x00000100
#define  PDATA_LTE_FE_RX_Route25_PR2_Set3                  0x00000100
#define  PDATA_LTE_FE_RX_Route25_PR3_Set3                  LTE_PDATA_OFF
#define  LTE_FE_RX_Route25_RX_eLNAIDX_Set3                 MML1_FE_ELNA_NONE
#define  LTE_FE_RX_Route25_RXD_eLNAIDX_Set3                MML1_FE_ELNA_NONE
#define  LTE_FE_RX_Route25_MIPI_TBL_IDX_Set3               TBL_IDX25

#define  LTE_FE_RX_Route26_Set3                            LTE_Band25
#define  LTE_FE_RX_Route26_RX_IO_SEL_Set3                  RX_IO_PRX8
#define  LTE_FE_RX_Route26_RXD_IO_SEL_Set3                 RX_IO_DRX8
#define  PDATA_LTE_FE_RX_Route26_PR1_Set3                  0x00000100
#define  PDATA_LTE_FE_RX_Route26_PR2_Set3                  0x00000100
#define  PDATA_LTE_FE_RX_Route26_PR3_Set3                  LTE_PDATA_OFF
#define  LTE_FE_RX_Route26_RX_eLNAIDX_Set3                 MML1_FE_ELNA_NONE
#define  LTE_FE_RX_Route26_RXD_eLNAIDX_Set3                MML1_FE_ELNA_NONE
#define  LTE_FE_RX_Route26_MIPI_TBL_IDX_Set3               TBL_IDX26


/*------------------------------------------------------*/
/*  Tx Alternate FE route                               */
/*------------------------------------------------------*/
#define  LTE_FE_TX_Route25_Set3                            LTE_Band2
#define  LTE_FE_TX_Route25_TX_IO_SEL_Set3                  TX_IO_MB2
#define  PDATA_LTE_FE_TX_Route25_PT1_Set3                  0x00000100
#define  PDATA_LTE_FE_TX_Route25_PT2_Set3                  0x00000100
#define  PDATA_LTE_FE_TX_Route25_PT3_Set3                  LTE_PDATA_OFF
#define  PDATA_LTE_FE_TX_Route25_VM0_Set3                  {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_FE_TX_Route25_VM1_Set3                  {0,0,0,0,0,0,0,0}
#define  LTE_FE_TX_Route25_MIPI_TBL_IDX_Set3               TBL_IDX25

#define  LTE_FE_TX_Route26_Set3                            LTE_Band25
#define  LTE_FE_TX_Route26_TX_IO_SEL_Set3                  TX_IO_MB2
#define  PDATA_LTE_FE_TX_Route26_PT1_Set3                  0x00000100
#define  PDATA_LTE_FE_TX_Route26_PT2_Set3                  0x00000100
#define  PDATA_LTE_FE_TX_Route26_PT3_Set3                  LTE_PDATA_OFF
#define  PDATA_LTE_FE_TX_Route26_VM0_Set3                  {0,0,0,0,0,0,0,0}
#define  PDATA_LTE_FE_TX_Route26_VM1_Set3                  {0,0,0,0,0,0,0,0}
#define  LTE_FE_TX_Route26_MIPI_TBL_IDX_Set3               TBL_IDX26










/* ------------------------------------------------------------------------- */
#endif
