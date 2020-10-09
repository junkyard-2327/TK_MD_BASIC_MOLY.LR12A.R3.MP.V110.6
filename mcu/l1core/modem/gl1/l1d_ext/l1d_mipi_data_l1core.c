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
 *   l1d_mipi_data_l1core.c
 *
 * Project:
 * --------
 *   MT6290
 *
 * Description:
 * ------------
 *   Definition of global data & tables used in L1D
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Revision:
 * $Modtime:
 * $Log:
 *
 *******************************************************************************/

#include  "l1d_cid.h"
#include  "l1d_reg.h"
#include  "l1d_data_l1core.h"
#include  "l1d_rf_l1core.h"

#if IS_MIPI_SUPPORT
#include  "l1d_mipi_data_l1core.h"
#include  "l1d_mipi_l1core.h"
#endif
/*===============================================================================================*/

#if IS_MIPI_SUPPORT

/* BSI Event Check */
   #if IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
      #if (GGE_MIPI_RTX_EVENT_NUM*(GGE_MIPI_RTX_EVENT_COUNT)+GGE_MIPI_TXMID_EVENT_NUM*(GGE_MIPI_TXMID_EVENT_COUNT)  > BSI_MIPI_EVENT_COUNT)
#error "BSI_RTX_EVENT_MIPI is exceed BSI_MIPI_EVENT_COUNT"
      #endif

      #if (GGE_MIPI_RTX_DATA_NUM*(GGE_MIPI_RTX_EVENT_COUNT)+GGE_MIPI_TXMID_DATA_NUM*(GGE_MIPI_TXMID_EVENT_COUNT)  > BSI_MIPI_DATA_COUNT)
#error "BSI_RTX_DATA_MIPI is exceed BSI_MIPI_DATA_COUNT"
      #endif
   #else
      #if (GGE_MIPI_RTX_EVENT_NUM*(GGE_MIPI_RTX_EVENT_COUNT)+GGE_MIPI_TXMID_EVENT_NUM*(GGE_MIPI_TXMID_EVENT_COUNT)+GGE_MIPI_RF_EVENT_COUNT  > BSI_EVENT_COUNT)
#error "BSI_RTX_EVENT_MIPI_PLUS_RF_ is exceed BSI_EVENT_COUNT"
      #endif
      
      #if (GGE_MIPI_RTX_DATA_NUM*(GGE_MIPI_RTX_EVENT_COUNT)+GGE_MIPI_TXMID_DATA_NUM*(GGE_MIPI_TXMID_EVENT_COUNT)+GGE_MIPI_RF_DATA_COUNT  > BSI_DATA_COUNT)
#error "BSI_RTX_DATA_MIPI_PLUS_RF_ is exceed BSI_DATA_COUNT"
      #endif
   #endif//IS_CHIP_MT6755 || IS_CHIP_MT6292


const volatile unsigned short* GGE_MIPI_RTX_REG_TABLE[GGE_MIPI_RTX_EVENT_COUNT][GGE_MIPI_RTX_EVENT_NUM] =
{
   {/*              CWIN0            */
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(0, 0) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(0, 1) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(0, 2) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(0, 3) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(0, 4) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(0, 5) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(0, 6) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(0, 7) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(0, 8) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(0, 9) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(0,10) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(0,11) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(0,12) ),
   },
   {/*              CWIN1            */
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(1, 0) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(1, 1) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(1, 2) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(1, 3) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(1, 4) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(1, 5) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(1, 6) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(1, 7) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(1, 8) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(1, 9) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(1,10) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(1,11) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(1,12) ),
   },
   {/*              CWIN2            */
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(2, 0) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(2, 1) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(2, 2) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(2, 3) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(2, 4) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(2, 5) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(2, 6) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(2, 7) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(2, 8) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(2, 9) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(2,10) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(2,11) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(2,12) ),
   },
   {/*              CWIN3            */
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(3, 0) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(3, 1) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(3, 2) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(3, 3) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(3, 4) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(3, 5) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(3, 6) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(3, 7) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(3, 8) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(3, 9) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(3,10) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(3,11) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(3,12) ),
   },
   {/*              CWIN4            */
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(4, 0) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(4, 1) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(4, 2) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(4, 3) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(4, 4) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(4, 5) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(4, 6) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(4, 7) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(4, 8) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(4, 9) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(4,10) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(4,11) ),
      TDMA_BSI( GGE_MIPI_RTX_TDMA_EVIDX(4,12) ),
   },
};

const volatile unsigned short* GGE_MIPI_TXMID_REG_TABLE[GGE_MIPI_TXMID_EVENT_COUNT][GGE_MIPI_TXMID_EVENT_NUM] =
{
   {/*               XWIN0            */
      TDMA_BSI( GGE_MIPI_TXMID_TDMA_EVIDX(0, 0) ),
      TDMA_BSI( GGE_MIPI_TXMID_TDMA_EVIDX(0, 1) ),
   },
   {/*               XWIN1           */
      TDMA_BSI( GGE_MIPI_TXMID_TDMA_EVIDX(1, 0) ),
      TDMA_BSI( GGE_MIPI_TXMID_TDMA_EVIDX(1, 1) ),
   },
   {/*               XWIN2            */
      TDMA_BSI( GGE_MIPI_TXMID_TDMA_EVIDX(2, 0) ),
      TDMA_BSI( GGE_MIPI_TXMID_TDMA_EVIDX(2, 1) ),
   },
   {/*               XWIN3            */
      TDMA_BSI( GGE_MIPI_TXMID_TDMA_EVIDX(3, 0) ),
      TDMA_BSI( GGE_MIPI_TXMID_TDMA_EVIDX(3, 1) ),
   },
};
const sGGE_MIPIEVENT L1D_TAS_MIPI_EVENT_NULL =
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0     , 0    }, GGE_MIPI_EVENT_NULL, 0                           };

const sGGE_MIPIDATA_SUBBAND L1D_TAS_MIPI_DATA_NULL =
   /* No.      elm type     , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{    {     GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {      GGE_NULL_ARFCN, 0x00, 0x00 }, {     GGE_NULL_ARFCN, 0x00, 0x00 }, } };

const sGGE_MIPIEVENT L1D_DAT_MIPI_EVENT_NULL =
   /* No.     elm type     , data idx       , evt_type           , evt_offset             */
   /*                        { start, stop },                      ( QB )                 */
   { /* 0  */ GGE_MIPI_NULL,{ 0     , 0    }, GGE_MIPI_EVENT_NULL, 0                           };

const sGGE_MIPIDATA_SUBBAND L1D_DAT_MIPI_DATA_NULL =
   /* No.      elm type     , port_sel          , data_seq      , USID             , {  { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, { subband arfcn, addr, data }, }  */
   { /* 0  */ GGE_MIPI_NULL, 0                 , 0             , 0    ,{    {     GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {    GGE_NULL_ARFCN, 0x00, 0x00 }, {      GGE_NULL_ARFCN, 0x00, 0x00 }, {     GGE_NULL_ARFCN, 0x00, 0x00 }, } };

#endif /* IS_MIPI_SUPPORT */

/*===============================================================================================*/

