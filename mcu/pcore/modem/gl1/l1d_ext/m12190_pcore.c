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
 *   m12190_pcore.c
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   Initialize RF components
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 *
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *******************************************************************************/

#include  "l1cal.h"
#include  "m12190_pcore.h"
#include  "l1d_public.h"
#include  "mmrf_kal.h"
#include  "l1d_shm_data.h"
#ifdef __MTK_TARGET__
#include "nvram_struct.h"
#include "custom_nvram_extra.h"
#include "nvram_interface.h"
#endif
#include "nvram_data_items.h"
#include "l1d_rf_common.h"
#include "l1_kal.h"
#include "l1d_data_pcore.h"
#include "l1d_interface_pcore.h"

intx  afc_inv_slope   = C_PSI_STA;
int16 afc_dac_default = PSI_EE;

#ifndef  Custom_RF_XO_CapID_SetDefault
long XO_CapID = 31;
#else
long XO_CapID = Custom_RF_XO_CapID_SetDefault;
#endif

#if IS_32K_CRYSTAL_REMOVAL_SUPPORT
int CLoad_FreqOffset = CUSTOM_CLOAD_FREQ_OFFSET_SetDefault;
#endif

static BandSupportSource bandsupportsource = BandSupportFromNull;

sRFSpecialCoef RFSpecialCoef;
#if IS_2G_RXD_SUPPORT 
l1cal_wcoef_T RFSpecial_wcoef_rxd;
#endif

MMRFC_GSM_RESULT_T rfc_data;
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Init_SpecialCoef( void )
 {
#if IS_DUAL_LOOP_AFC_CONTROL_SUPPORT
   //Fix AFC Enable Setting move to MMRF after UMOLY/TK6291.
#else
   #if IS_MPLL_FH_SUPPORT || IS_MT6276E1_TEMP_MPLL_FH_SUPPORT
   /* borrowed for mpll_fh chip, should not have rf rx_coff */
   RFSpecialCoef.rx.mpll_fh.fixed_mpll_clk    = 0;
   RFSpecialCoef.rx.mpll_fh.mpll_freq_idx     = 0;
   #endif
 
   #if IS_SPLL_FH_SUPPORT
   /* borrowed for spll_fh chip, should not have rf rx_coff */
   RFSpecialCoef.rx.mpll_fh.fixed_mpll_clk    = 0;
   RFSpecialCoef.rx.mpll_fh.mpll_freq_idx     = 0;
   #endif
#endif

#if IS_MD2G_LOGGER_SUPPORT
   /* borrowed for 2g logger chip, should not have rf rx_coff */

   RFSpecialCoef.rx.md2g_log.is_md2g_log_on   = 0;

#endif

#if IS_RF_MT6139B || IS_RF_MT6139C  || IS_RF_MT6140A || IS_RF_MT6140B

   RFSpecialCoef.rx.mt6139ip2.data[0].acode   = 0;
   RFSpecialCoef.rx.mt6139ip2.data[0].amcode  = 0;
   RFSpecialCoef.rx.mt6139ip2.data[1].acode   = ACODE850;
   RFSpecialCoef.rx.mt6139ip2.data[1].amcode  = AMCODE850;
   RFSpecialCoef.rx.mt6139ip2.data[2].acode   = ACODE900;
   RFSpecialCoef.rx.mt6139ip2.data[2].amcode  = AMCODE900;
   RFSpecialCoef.rx.mt6139ip2.data[3].acode   = ACODE1800;
   RFSpecialCoef.rx.mt6139ip2.data[3].amcode  = AMCODE1800;
   RFSpecialCoef.rx.mt6139ip2.data[4].acode   = ACODE1900;
   RFSpecialCoef.rx.mt6139ip2.data[4].amcode  = AMCODE1900;
   RFSpecialCoef.rx.mt6139ip2.rxamcalmode     = 2; //normal mode

#elif IS_RF_MT6139E
   {
      extern unsigned char dcs_tx_gain_setting;
      extern unsigned char pcs_tx_gain_setting;
      extern unsigned long CW11_RF[5];

      if     (dcs_tx_gain_setting == 1)
         CW11_RF[3]=0x0B4D7FB; /* TXDIVGC:00; TXMODGAIN: 010 (0.5dB and 40kHz) */
      else if(dcs_tx_gain_setting == 2)
         CW11_RF[3]=0x0B4E7FB; /* TXDIVGC:00; TXMODGAIN: 100 (1.5dB and 40kHz) */
      else
         CW11_RF[3]=0x1B4E7FB; /* TXDIVGC:01; TXMODGAIN: 100                   */

      if     (pcs_tx_gain_setting == 1)
         CW11_RF[4]=0x0B4D7FB; /* TXDIVGC:00; TXMODGAIN: 010 (0.5dB and 40kHz) */
      else if(pcs_tx_gain_setting == 2)
         CW11_RF[4]=0x0B4E7FB; /* TXDIVGC:00; TXMODGAIN: 100 (1.5dB and 40kHz) */
      else
         CW11_RF[4]=0x1B4E7FB; /* TXDIVGC:01; TXMODGAIN: 100                   */
   }
#elif IS_RF_MT6140D

   RFSpecialCoef.tx.mt6140tx.data.GSM850_pa_vbias[0].pcl_index=6;
   RFSpecialCoef.tx.mt6140tx.data.GSM850_pa_vbias[0].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.GSM850_pa_vbias[1].pcl_index=8;
   RFSpecialCoef.tx.mt6140tx.data.GSM850_pa_vbias[1].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.GSM850_pa_vbias[2].pcl_index=10;
   RFSpecialCoef.tx.mt6140tx.data.GSM850_pa_vbias[2].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.GSM850_pa_vbias[3].pcl_index=12;
   RFSpecialCoef.tx.mt6140tx.data.GSM850_pa_vbias[3].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.GSM850_pa_vbias[4].pcl_index=14;
   RFSpecialCoef.tx.mt6140tx.data.GSM850_pa_vbias[4].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.GSM850_pa_vbias[5].pcl_index=16;
   RFSpecialCoef.tx.mt6140tx.data.GSM850_pa_vbias[5].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.GSM850_pa_vbias[6].pcl_index=18;
   RFSpecialCoef.tx.mt6140tx.data.GSM850_pa_vbias[6].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.GSM850_pa_vbias[7].pcl_index=19;
   RFSpecialCoef.tx.mt6140tx.data.GSM850_pa_vbias[7].pa_vbias=7;

   RFSpecialCoef.tx.mt6140tx.data.GSM900_pa_vbias[0].pcl_index=6;
   RFSpecialCoef.tx.mt6140tx.data.GSM900_pa_vbias[0].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.GSM900_pa_vbias[1].pcl_index=8;
   RFSpecialCoef.tx.mt6140tx.data.GSM900_pa_vbias[1].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.GSM900_pa_vbias[2].pcl_index=10;
   RFSpecialCoef.tx.mt6140tx.data.GSM900_pa_vbias[2].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.GSM900_pa_vbias[3].pcl_index=12;
   RFSpecialCoef.tx.mt6140tx.data.GSM900_pa_vbias[3].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.GSM900_pa_vbias[4].pcl_index=14;
   RFSpecialCoef.tx.mt6140tx.data.GSM900_pa_vbias[4].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.GSM900_pa_vbias[5].pcl_index=16;
   RFSpecialCoef.tx.mt6140tx.data.GSM900_pa_vbias[5].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.GSM900_pa_vbias[6].pcl_index=18;
   RFSpecialCoef.tx.mt6140tx.data.GSM900_pa_vbias[6].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.GSM900_pa_vbias[7].pcl_index=19;
   RFSpecialCoef.tx.mt6140tx.data.GSM900_pa_vbias[7].pa_vbias=7;

   RFSpecialCoef.tx.mt6140tx.data.DCS1800_pa_vbias[0].pcl_index=2;
   RFSpecialCoef.tx.mt6140tx.data.DCS1800_pa_vbias[0].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.DCS1800_pa_vbias[1].pcl_index=4;
   RFSpecialCoef.tx.mt6140tx.data.DCS1800_pa_vbias[1].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.DCS1800_pa_vbias[2].pcl_index=6;
   RFSpecialCoef.tx.mt6140tx.data.DCS1800_pa_vbias[2].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.DCS1800_pa_vbias[3].pcl_index=8;
   RFSpecialCoef.tx.mt6140tx.data.DCS1800_pa_vbias[3].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.DCS1800_pa_vbias[4].pcl_index=10;
   RFSpecialCoef.tx.mt6140tx.data.DCS1800_pa_vbias[4].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.DCS1800_pa_vbias[5].pcl_index=12;
   RFSpecialCoef.tx.mt6140tx.data.DCS1800_pa_vbias[5].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.DCS1800_pa_vbias[6].pcl_index=14;
   RFSpecialCoef.tx.mt6140tx.data.DCS1800_pa_vbias[6].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.DCS1800_pa_vbias[7].pcl_index=15;
   RFSpecialCoef.tx.mt6140tx.data.DCS1800_pa_vbias[7].pa_vbias=7;

   RFSpecialCoef.tx.mt6140tx.data.PCS1900_pa_vbias[0].pcl_index=2;
   RFSpecialCoef.tx.mt6140tx.data.PCS1900_pa_vbias[0].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.PCS1900_pa_vbias[1].pcl_index=4;
   RFSpecialCoef.tx.mt6140tx.data.PCS1900_pa_vbias[1].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.PCS1900_pa_vbias[2].pcl_index=6;
   RFSpecialCoef.tx.mt6140tx.data.PCS1900_pa_vbias[2].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.PCS1900_pa_vbias[3].pcl_index=8;
   RFSpecialCoef.tx.mt6140tx.data.PCS1900_pa_vbias[3].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.PCS1900_pa_vbias[4].pcl_index=10;
   RFSpecialCoef.tx.mt6140tx.data.PCS1900_pa_vbias[4].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.PCS1900_pa_vbias[5].pcl_index=12;
   RFSpecialCoef.tx.mt6140tx.data.PCS1900_pa_vbias[5].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.PCS1900_pa_vbias[6].pcl_index=14;
   RFSpecialCoef.tx.mt6140tx.data.PCS1900_pa_vbias[6].pa_vbias=7;
   RFSpecialCoef.tx.mt6140tx.data.PCS1900_pa_vbias[7].pcl_index=15;
   RFSpecialCoef.tx.mt6140tx.data.PCS1900_pa_vbias[7].pa_vbias=7;
#elif IS_ORION_RF_SERIES
   {  
   #if 1 // Initialization from custom folder
      kal_mem_cpy(&(RFSpecialCoef.tx.orionRFtx.data), &pa_data, sizeof(orionRFtx_pa_vbias));
   #else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
   #endif
   }
#elif IS_RF_MT6162 || IS_RF_MT6163
   {  int i;

      for( i = 0; i < 16; i++ )
      {
         RFSpecialCoef.rx.mt6162_gain_rf.gain_rf_table[0].map[i] = TX_GAINRF_MAPPING[0][i];
         RFSpecialCoef.rx.mt6162_gain_rf.gain_rf_table[1].map[i] = TX_GAINRF_MAPPING[1][i];
         RFSpecialCoef.rx.mt6162_gain_rf.gain_rf_table[2].map[i] = TX_GAINRF_MAPPING[2][i];
         RFSpecialCoef.rx.mt6162_gain_rf.gain_rf_table[3].map[i] = TX_GAINRF_MAPPING[3][i];
      }

      for( i = 0; i < 8; i++ )
      {
         RFSpecialCoef.tx.mt6162tx.data.GSM850_pa_vbias[i].pcl_index  = i*2 + 7;
         RFSpecialCoef.tx.mt6162tx.data.GSM850_pa_vbias[i].pa_vbias   = 4; /* pcl_index[i-1]< PCL <= pcl_index[i], assign PA_Vbias[i]*184+APC_DC_OFFSET into APC_DAC*/

         RFSpecialCoef.tx.mt6162tx.data.GSM900_pa_vbias[i].pcl_index  = i*2 + 7;
         RFSpecialCoef.tx.mt6162tx.data.GSM900_pa_vbias[i].pa_vbias   = 4;

         RFSpecialCoef.tx.mt6162tx.data.DCS1800_pa_vbias[i].pcl_index = i*2 + 2;
         RFSpecialCoef.tx.mt6162tx.data.DCS1800_pa_vbias[i].pa_vbias  = 4;

         RFSpecialCoef.tx.mt6162tx.data.PCS1900_pa_vbias[i].pcl_index = i*2 + 2;
         RFSpecialCoef.tx.mt6162tx.data.PCS1900_pa_vbias[i].pa_vbias  = 4;
      }
   }
#elif IS_RF_MT6256RF

   {  int i;

      for( i = 0; i < 8; i++ )
      {
         // pcl_index[i-1]< PCL <= pcl_index[i], assign PA_Vbias[i]*128 into APC_DAC
         RFSpecialCoef.tx.mt6256tx.data.GSM850_pa_vbias[i].pcl_index  = i*2 + 7;
         RFSpecialCoef.tx.mt6256tx.data.GSM850_pa_vbias[i].pa_vbias   = 5;
         RFSpecialCoef.tx.mt6256tx.data.GSM900_pa_vbias[i].pcl_index  = i*2 + 7;
         RFSpecialCoef.tx.mt6256tx.data.GSM900_pa_vbias[i].pa_vbias   = 5;
         RFSpecialCoef.tx.mt6256tx.data.DCS1800_pa_vbias[i].pcl_index = i*2 + 2;
         RFSpecialCoef.tx.mt6256tx.data.DCS1800_pa_vbias[i].pa_vbias  = 5;
         RFSpecialCoef.tx.mt6256tx.data.PCS1900_pa_vbias[i].pcl_index = i*2 + 2;
         RFSpecialCoef.tx.mt6256tx.data.PCS1900_pa_vbias[i].pa_vbias  = 5;
      }
   }

#elif IS_RF_CMOSEDGE

   RFSpecialCoef.tx.CMOSEDGEtx.ref_temp=16;
   RFSpecialCoef.tx.CMOSEDGEtx.LB_GMSK_TX_PGA_GC=90;
   RFSpecialCoef.tx.CMOSEDGEtx.HB_GMSK_TX_PGA_GC=92;
   RFSpecialCoef.tx.CMOSEDGEtx.isDCXO=1;

#elif IS_RF_SKY74117 || IS_RF_SKY74400

   RFSpecialCoef.rx.sky117ip2.data[0].icorrection = 0;
   RFSpecialCoef.rx.sky117ip2.data[0].qcorrection = 0;
   RFSpecialCoef.rx.sky117ip2.data[1].icorrection = IP2I850;
   RFSpecialCoef.rx.sky117ip2.data[1].qcorrection = IP2Q850;
   RFSpecialCoef.rx.sky117ip2.data[2].icorrection = IP2I900;
   RFSpecialCoef.rx.sky117ip2.data[2].qcorrection = IP2Q900;
   RFSpecialCoef.rx.sky117ip2.data[3].icorrection = IP2I1800;
   RFSpecialCoef.rx.sky117ip2.data[3].qcorrection = IP2Q1800;
   RFSpecialCoef.rx.sky117ip2.data[4].icorrection = IP2I1900;
   RFSpecialCoef.rx.sky117ip2.data[4].qcorrection = IP2Q1900;

   RFSpecialCoef.rx.sky117ip2.pol[0].ipol = 0;
   RFSpecialCoef.rx.sky117ip2.pol[0].qpol = 0;
   RFSpecialCoef.rx.sky117ip2.pol[1].ipol = IP2I850_POL;
   RFSpecialCoef.rx.sky117ip2.pol[1].qpol = IP2Q850_POL;
   RFSpecialCoef.rx.sky117ip2.pol[2].ipol = IP2I900_POL;
   RFSpecialCoef.rx.sky117ip2.pol[2].qpol = IP2Q900_POL;
   RFSpecialCoef.rx.sky117ip2.pol[3].ipol = IP2I1800_POL;
   RFSpecialCoef.rx.sky117ip2.pol[3].qpol = IP2Q1800_POL;
   RFSpecialCoef.rx.sky117ip2.pol[4].ipol = IP2I1900_POL;
   RFSpecialCoef.rx.sky117ip2.pol[4].qpol = IP2Q1900_POL;

#elif IS_RF_SKY74045

   RFSpecialCoef.rx.skyip2.data[0].icorrection = 0;
   RFSpecialCoef.rx.skyip2.data[0].qcorrection = 0;
   RFSpecialCoef.rx.skyip2.data[1].icorrection = IP2I850;
   RFSpecialCoef.rx.skyip2.data[1].qcorrection = IP2Q850;
   RFSpecialCoef.rx.skyip2.data[2].icorrection = IP2I900;
   RFSpecialCoef.rx.skyip2.data[2].qcorrection = IP2Q900;
   RFSpecialCoef.rx.skyip2.data[3].icorrection = IP2I1800;
   RFSpecialCoef.rx.skyip2.data[3].qcorrection = IP2Q1800;
   RFSpecialCoef.rx.skyip2.data[4].icorrection = IP2I1900;
   RFSpecialCoef.rx.skyip2.data[4].qcorrection = IP2Q1900;

#elif IS_RF_BRIGHT5P

   RFSpecialCoef.tx.b5ptx.data.word6_4_0 = WORD6_4_0;
   RFSpecialCoef.tx.b5ptx.data.word6_5_0 = WORD6_5_0;
   RFSpecialCoef.tx.b5ptx.data.word6_6_0 = WORD6_6_0;
   RFSpecialCoef.tx.b5ptx.data.word6_7_0 = WORD6_7_0;
   RFSpecialCoef.tx.b5ptx.data.bvmode    = BVMODE;
   RFSpecialCoef.tx.b5ptx.data.c3mode    = C3MODE;
   RFSpecialCoef.tx.b5ptx.data.wordC3    = WORD3_C3MODE;

#elif IS_RF_AD6546

   RFSpecialCoef.tx.ad6546tx.CalData[0].REFDET_SLOPE_SKEW= 0x00;  /*GSM850*/
   RFSpecialCoef.tx.ad6546tx.CalData[0].AM_FB_DAC= 0x00;          /*GSM850*/
   RFSpecialCoef.tx.ad6546tx.CalData[1].REFDET_SLOPE_SKEW= 0x00;  /*GSM900*/
   RFSpecialCoef.tx.ad6546tx.CalData[1].AM_FB_DAC= 0x00;          /*GSM900*/
   RFSpecialCoef.tx.ad6546tx.CalData[2].REFDET_SLOPE_SKEW= 0x00;  /*DCS1800*/
   RFSpecialCoef.tx.ad6546tx.CalData[2].AM_FB_DAC= 0x00;          /*DCS1800*/
   RFSpecialCoef.tx.ad6546tx.CalData[3].REFDET_SLOPE_SKEW= 0x00;  /*PCS1900*/
   RFSpecialCoef.tx.ad6546tx.CalData[3].AM_FB_DAC= 0x00;          /*PCS1900*/

   #if IS_HW_DISABLE_EPSK_TX_SUPPORT
   RFSpecialCoef.tx.ad6546tx.CalData[0].AM_FB_DAC= 0x08;          /*GSM850*/
   RFSpecialCoef.tx.ad6546tx.CalData[1].AM_FB_DAC= 0x08;          /*GSM900*/
   RFSpecialCoef.tx.ad6546tx.CalData[2].AM_FB_DAC= 0x08;          /*DCS1800*/
   RFSpecialCoef.tx.ad6546tx.CalData[3].AM_FB_DAC= 0x08;          /*PCS1900*/
   RFSpecialCoef.tx.ad6546tx.Reg8_default[0] = 0x00800008;
   RFSpecialCoef.tx.ad6546tx.Reg8_default[1] = 0x00800008;
   RFSpecialCoef.tx.ad6546tx.Reg8_default[2] = 0x00800008;
   RFSpecialCoef.tx.ad6546tx.Reg8_default[3] = 0x00800008;
   #elif defined(QB_ASM_TQM7M5008)
   RFSpecialCoef.tx.ad6546tx.Reg8_default[0] = 0x00009808;
   RFSpecialCoef.tx.ad6546tx.Reg8_default[1] = 0x00009808;
   RFSpecialCoef.tx.ad6546tx.Reg8_default[2] = 0x00009608;
   RFSpecialCoef.tx.ad6546tx.Reg8_default[3] = 0x00009608;
   #elif defined(FEM_SKY77523)
   RFSpecialCoef.tx.ad6546tx.Reg8_default[0] = 0x00009C08;
   RFSpecialCoef.tx.ad6546tx.Reg8_default[1] = 0x00009C08;
   RFSpecialCoef.tx.ad6546tx.Reg8_default[2] = 0x00009688;
   RFSpecialCoef.tx.ad6546tx.Reg8_default[3] = 0x00009708;
   #else
   RFSpecialCoef.tx.ad6546tx.Reg8_default[0] = 0x00009808;
   RFSpecialCoef.tx.ad6546tx.Reg8_default[1] = 0x00009808;
   RFSpecialCoef.tx.ad6546tx.Reg8_default[2] = 0x00009688;
   RFSpecialCoef.tx.ad6546tx.Reg8_default[3] = 0x00009688;
   #endif

   RFSpecialCoef.tx.ad6546tx.AMLoopDelta.MID_DELTA_APC_CAP    =  0;
   RFSpecialCoef.tx.ad6546tx.AMLoopDelta.MID_DELTA_SLOPE_SKEW = -2;
   RFSpecialCoef.tx.ad6546tx.AMLoopDelta.MID_GAMA_THRESHOLD   = 11;
   RFSpecialCoef.tx.ad6546tx.AMLoopDelta.LOW_DELTA_APC_CAP    =  0;
   RFSpecialCoef.tx.ad6546tx.AMLoopDelta.LOW_DELTA_SLOPE_SKEW = -7;
   RFSpecialCoef.tx.ad6546tx.AMLoopDelta.LOW_GAMA_THRESHOLD   = 15;

#endif
   kal_mem_cpy(&(RFSpecialCoef.rx.mt6256_51rf.w_data), &w_coef_data, (sizeof(w_coef) * WCTABLE_SIZE));
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_2G_RXD_SUPPORT 
void L1D_RF_Init_Wcoef_RXD( void )
{
   kal_mem_cpy(&(RFSpecial_wcoef_rxd.Wcoef_data), &w_coef_rxd_data, (sizeof(w_coef) * WCTABLE_SIZE));
}
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


void L1D_RF_RFCData_Init_Pcore( void )
{
#if IS_2G_MMPOC_SUPPORT
   int band, i, j;

   //int Sim_pga_gain_step=0;
   
   #if IS_RF_MT6177M
   const signed    int Sim_tx_dnl_lin_pga_a[MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM+1] = { -18,  -20, -20, -22, -25, -26, -29,  -33,  -37,  -43,  -51,  -62,  -80, -112,  -38, -42, -51, -62, -80, -113, -193, 
                                                                                  -138, -192, -192, -192, -192, -192, -192, -192 };  // last value is used for PGA-A/B gain step init
   //const signed    int Sim_tx_dnl_lin_pga_b[MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM] = { -80, -112, -38, -42, -51, -62, -80, -113, -192, -192, -192, -192, -192, -192, -192, -192 };
   const unsigned  int Sim_cap_tuning_pga_a[4]= { 0x11, 0xD, 0x17, 0xF }; //CW795
   const unsigned  int Sim_cap_tuning_pga_b[4]= { 0x11, 0xD, 0x17, 0xF }; //CW796
   const unsigned  int Sim_lf_fine[4]= {  0, 7, 5, 7 };                                 //CW521
   const unsigned  int Sim_det_coarse_dcoc_cw807 = 0, Sim_det_coarse_dcoc_cw808 = 0;    //CW807 / CW808
   const unsigned  int Sim_tx_rc_lpf[4] = {  0x1A, 0x1A, 0x1A, 0x1A  };                 //CW787
   const unsigned  int Sim_tx_rc_rcf[4] = {  0x1F, 0x1F, 0x1F, 0x1F  };                 //CW793
   const unsigned long Sim_tx_lo[4]  = { 0x925CE, 0x8A58C, 0x94DEF, 0x8BD8C };          //CW714
   #elif IS_RF_MT6177L
   const signed    int Sim_tx_dnl_lin_pga_a[MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM] = { -18,  -20, -20, -22, -25, -26, -29,  -33,  -37,  -43,  -51,  -62,  -80, -112,  -38, -42, -51, -62, -80, -113, -192 };  // last value is used for PGA-A/B gain step init
   const signed    int Sim_tx_dnl_lin_pga_b[MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM] = { -80, -112, -38, -42, -51, -62, -80, -113, -192, -192, -192, -192, -192, -192, -192, -192 };
   const unsigned  int Sim_cap_tuning_pga_a[4]= {  0x9, 0x5,  0xE, 0x8 };             //CW795
   const unsigned  int Sim_cap_tuning_pga_b[4]= {  0xA, 0x7, 0x13, 0x0 };             //CW796
   const unsigned  int Sim_lf_fine[4]= {  0, 7, 5, 7 };                                //CW521
   const unsigned  int Sim_det_coarse_dcoc_cw807 = 0, Sim_det_coarse_dcoc_cw808 = 0;   //CW807 / CW808
   const unsigned  int Sim_tx_rc_lpf[4] = {  0xAC, 0xAC, 0xAC, 0xAC  };                //CW787
   const unsigned  int Sim_tx_rc_rcf[4] = {  0x10, 0x10, 0x10, 0x10  };                //CW793
   const unsigned long Sim_tx_lo[4]  = { 0x4A618, 0x24618, 0xA275D, 0x688A2 };         //CW714
   #elif IS_RF_MT6179
   const signed    int Sim_tx_dnl_lin_pga_a[MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM+1] = { -18,  -20, -20, -22, -25, -26, -29,  -33,  -37,  -43,  -51,  -62,  -80, -112,  -38, -42, -51, -62, -80, -113, -192 };  // last value is used for PGA-A/B gain step init
   const signed    int Sim_tx_dnl_lin_pga_b[MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM] = { -80, -112, -38, -42, -51, -62, -80, -113, -192, -192, -192, -192, -192, -192, -192, -192 };
   const unsigned  int Sim_cap_tuning_pga_a[4]= {  0x9, 0x7, 0x12, 0xA  };             //CW795
   const unsigned  int Sim_cap_tuning_pga_b[4]= {  0xA, 0x9, 0x18, 0x11 };             //CW796
   const unsigned  int Sim_lf_fine[4]= {  0, 7, 5, 7 };                                //CW521
   const unsigned  int Sim_det_coarse_dcoc_cw807 = 0, Sim_det_coarse_dcoc_cw808 = 0;   //CW807 / CW808
   const unsigned  int Sim_tx_rc_lpf[4] = {  0xAC, 0xAC, 0xAC, 0xAC  };                //CW787
   const unsigned  int Sim_tx_rc_rcf[4] = {  0x10, 0x10, 0x10, 0x10  };                //CW793
   const unsigned long Sim_tx_lo[4]  = { 0x7D3CF, 0x51410, 0x212CB, 0x824D3 };         //CW714
   #elif IS_RF_MT6176
   const signed    int Sim_tx_dnl_lin_pga_a[MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM+1] = { -18,  -20, -20, -22, -25, -26, -29,  -33,  -37,  -43,  -51,  -62,  -80, -112,  -38, -42, -51, -62, -80, -113, -192 };  // last value is used for PGA-A/B gain step init
   const signed    int Sim_tx_dnl_lin_pga_b[MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM] = { -80, -112, -38, -42, -51, -62, -80, -113, -192, -192, -192, -192, -192, -192, -192, -192 };
   const unsigned  int Sim_cap_tuning_pga_a[4]= {  0x9, 0x6, 0x11, 0x9  };             //CW795
   const unsigned  int Sim_cap_tuning_pga_b[4]= {  0xA, 0x8, 0x17, 0x10 };             //CW796
   const unsigned  int Sim_lf_fine[4]= {  0, 7, 5, 7 };                                //CW521
   const unsigned  int Sim_det_coarse_dcoc_cw807 = 0, Sim_det_coarse_dcoc_cw808 = 0;   //CW807 / CW808
   const unsigned  int Sim_tx_rc_lpf[4] = {  0xA0, 0xA0, 0xA0, 0xA0  };                //CW787
   const unsigned  int Sim_tx_rc_rcf[4] = {  0x1F, 0x1F, 0x1F, 0x1F  };                //CW793
   const unsigned long Sim_tx_lo[4]  = { 0x15DCE, 0x0CDCE, 0x0356B, 0x1E18C };         //CW714
   #endif

  
//   const signed int Sim_pga_gain_step_subband[4][MMRFC_GSM_TX_PGA_GAIN_STEP_SUBBAND_NUM]=
//   {  /* 12 Subband per Band */
//      {  /* FrequencyBand850 */
//         132, 142, 153, 163, 173, 184, 194, 205, 215, 225, 236, 246
//      },
//      {  /* FrequencyBand900 */  /*This subband arfcn is not the regular order for l1core */
//          981,  995,  1010,  1,  15,  30,  44, 59, 73, 88, 113, 117
//      },
//      {  /* FrequencyBand1800 */
//         526, 558, 589, 620, 651, 683, 714, 745, 776, 808, 839, 870 
//      },
//      {  /* FrequencyBand1900 */
//         523, 548, 573, 598, 623, 648, 673, 698, 723, 748, 773, 798
//      }
//   }; 


   for( band=0; band<4; band++ )
   {
//    Sim_pga_gain_step = 0;
      

      for( i=0; i<MMRFC_GSM_TX_DNL_PGA_A_SEQ_NUM; i++ )
      {  rfc_data.g_result[band].tx_dnl_lin_pga_a[i]=Sim_tx_dnl_lin_pga_a[i];  }

	  #if IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L
         for( i=0; i<MMRFC_GSM_TX_DNL_PGA_B_SEQ_NUM; i++ )
         {  rfc_data.g_result[band].tx_dnl_lin_pga_b[i]=Sim_tx_dnl_lin_pga_b[i];  }   // MT6177 don't use PGA B
	  #endif
	  
      for( j=0; j<MMRFC_GSM_TX_PGA_SLICE_NUM+1; j++ )
      {
         rfc_data.g_result[band].tx_iqdc_lin[j].dc_est_i=0;
         rfc_data.g_result[band].tx_iqdc_lin[j].dc_est_q=0;
         rfc_data.g_result[band].tx_iqdc_lin[j].gain_est=0;
         rfc_data.g_result[band].tx_iqdc_lin[j].phase_est=0;
      }

      rfc_data.g_result[band].cap_tuning_pga_a=Sim_cap_tuning_pga_a[band];
      rfc_data.g_result[band].cap_tuning_pga_b=Sim_cap_tuning_pga_b[band];
      rfc_data.g_result[band].det_coarse_dcoc_cw807=Sim_det_coarse_dcoc_cw807;
      rfc_data.g_result[band].det_coarse_dcoc_cw808=Sim_det_coarse_dcoc_cw808;
      rfc_data.g_result[band].tx_rc_lpf=Sim_tx_rc_lpf[band];
      rfc_data.g_result[band].tx_rc_rcf=Sim_tx_rc_rcf[band];
      rfc_data.g_result[band].tx_lo=Sim_tx_lo[band];

      rfc_data.lf_fine[band]=Sim_lf_fine[band];
   }

   /*Only execute L1D_RF_Gainrf_Init() at L1core*/
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


void L1D_RF_InitEmptyRampData( int rf_band, int is_epsk )
{
#if defined(__SLIM_CALIBRATION_DATA__)
   sRAMPDATA* p;
   const sRAMPDATA_DEFAULT* p_d;
   unsigned char *dst, *src;
   unsigned short *dst_s;
   int i,j;

   #if IS_EPSK_TX_SUPPORT
   if( is_epsk )
   {
      p   = RampData_EPSK[rf_band];
      p_d = &RampData_Default_EPSK;
   }
   else
   #endif
   {
      p   = RampData[rf_band];
      p_d = &RampData_Default;
   }

   /*Ramp table is empty. Need init*/

   if( p->power[8] == 0 )
   {
      /*Init lowest power & power level*/
      dst = (unsigned char*)(p);
      src = (unsigned char*)(p_d);
      for( i = 0; i<(sizeof(RampData_Default.lowest_power) + sizeof(RampData_Default.power)); i++ )
      {  *dst++ = *src++;  }
      if( rf_band < FrequencyBand1800 )
      { p->lowest_power |= 0x5; }
      else
      { p->lowest_power &= ~0x7; }


      /*Init ramping profile*/
      for( i = 0; i<sizeof(p->ramp)/sizeof(RampData_Default.ramp); i++ )
      {
         dst = (unsigned char*)(&p->ramp[i] );
         src = (unsigned char*)(&p_d->ramp );
         for( j = 0; j<sizeof(RampData_Default.ramp); j++ )
         {  *dst++ = *src++;  }
      }

      /*Init sub-band weight*/
      /*dst = (unsigned char*)(&p->arfcn_weight );
      src = (unsigned char*)(&p_d->arfcn_weight );
      for( i = 0; i<sizeof(RampData_Default.arfcn_weight); i++ )
      {  *dst++ = *src++;  }*/

      switch( rf_band )
      {
         case FrequencyBand850:
         { i = 251; break; }
         case FrequencyBand900:
         { i = 1023; break; }
         case FrequencyBand1800:
         { i = 885; break; }
         case FrequencyBand1900:
         { i = 810; break; }
         default:
         { break; }
      }
      p->arfcn_weight[0].max_arfcn = i;
      p->arfcn_weight[0].mid_level = 21;
   #if IS_RF_MT6162 && IS_BSI_CLOSED_LOOP_TXPC_ON
       if( is_epsk )
       {  p->arfcn_weight[0].hi_weight = ((0)+(1<<12));  }
       else
   #endif
       {  p->arfcn_weight[0].hi_weight = WEIGHT(1.000);  }

      p->arfcn_weight[0].low_weight= WEIGHT(1.000);
      p->arfcn_weight[1].max_arfcn = TABLE_END;

      /*Init battery weight*/
      dst_s = (unsigned short*)(&p->battery_compensate );
      for( i = 0; i < (sizeof(p->battery_compensate)/sizeof(short)); i++ )
      {  *dst_s++ = WEIGHT(1.000);  }
   }
#endif
   (void)(is_epsk);(void)(rf_band);
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_InitEmptyInterRampData( void *inter_ramp )
{
#if defined(__SLIM_CALIBRATION_DATA__)
   int i;
   unsigned char *p;
   p = (unsigned char*) inter_ramp;
   if( *p == 0 )
   {
      for( i = 0; i < sizeof(sMIDRAMPDATA); i++ )
      {  *p++ = 255;  }
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_GetAFCData( void *data_buffer )
{
   l1cal_afcData_T *afc = (l1cal_afcData_T *)data_buffer;
#if 0//defined(__2G_RF_CUSTOM_TOOL_SUPPORT__)
/* under construction !*/
/* under construction !*/
#else
   afc->dacValue = afc_crystal_data_dac_slop.dacValue;
   afc->slopeInv = afc_crystal_data_dac_slop.slopeInv;
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#if 0
/* under construction !*/
/* under construction !*/
#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#elif IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if 0
/* under construction !*/
/* under construction !*/
#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#elif IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_TXPC_GET_L1_SETTING( sTXPC_L1CAL *buff, int is_EPSK )
{
#if IS_TX_POWER_CONTROL_SUPPORT
   L1D_RF_TXPC_GET_FLAG( buff );
   L1D_RF_TXPC_CL_GET_ALL_ADC( buff, is_EPSK );
   L1D_RF_TXPC_OL_GET_TEMPERATURE( buff );
   L1D_RF_TXPC_CL_GET_ALL_TEMP( buff, is_EPSK );
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_GetLnaPathLossTable( sLNAPATHLOSS_L1CAL *table )
{  /* for the RX LNA middle/low modes use */
#if IS_RF_MT6162 || IS_RF_MT6163 || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   unsigned char *src, *dst;
   int  i, n;

   for( i=0; i<FrequencyBandCount; i++ )
   {
      dst = (unsigned char*)table->lnaPathLoss[i];
      #if defined(__MTK_TARGET__)
      src = (unsigned char*)(LNA_PATHLOSS_TABLE[i]);
      #else //For xL1Sim using
      src = (unsigned char*)(LNA_PATHLOSS_TABLE_SetDefault[i]);
      #endif
      if( dst!=0 && src!=0 )
      {
         for( n=sizeof(sLNAGAINOFFSET)*PLTABLE_SIZE; n>0; n--)
         {  *dst++ = *src++;  }
      }
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#if IS_2G_RXD_SUPPORT
void L1D_RF_GetLnaPathLossTable_RXD( sLNAPATHLOSS_L1CAL *table )
{  /* for the RX LNA middle/low modes use */
   #if IS_RF_MT6162 || IS_RF_MT6163 || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   unsigned char *src, *dst;
   int  i, n;

   for( i=0; i<FrequencyBandCount; i++ )
   {
      dst = (unsigned char*)table->lnaPathLoss[i];
      #if defined(__MTK_TARGET__)
      src = (unsigned char*)(LNA_PATHLOSS_RXD_TABLE[i]);
      #else //For xL1Sim using
      src = (unsigned char*)(LNA_PATHLOSS_RXD_TABLE_SetDefault[i]);
      #endif
      if( dst!=0 && src!=0 )
      {
         for( n=sizeof(sLNAGAINOFFSET)*PLTABLE_SIZE; n>0; n--)
         {  *dst++ = *src++;  }
      }
   }
   #endif
}
#endif  /*#if IS_2G_RXD_SUPPORT*/
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#if IS_2G_RXD_SUPPORT
void L1D_RF_GetPathLossTable( int rf_band, void *table )
{  unsigned char *src, *dst;
   //int  n;

   dst = (unsigned char*)table;
   #if defined(__MTK_TARGET__)
   src = (unsigned char*)(AGC_PATHLOSS_TABLE[rf_band]);
   #else //For xL1Sim using
   src = (unsigned char*)(AGC_PATHLOSS_TABLE_SetDefault[rf_band]);
   #endif
   if(src==0)  return;
   //for( n=sizeof(sAGCGAINOFFSET)*PLTABLE_SIZE; n>0; n--)
   //{  *dst++ = *src++;
   //}
   kal_mem_cpy( dst, src, (sizeof(sAGCGAINOFFSET) * PLTABLE_SIZE));
}
#endif  /*#if IS_2G_RXD_SUPPORT*/
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_2G_RXD_SUPPORT
void L1D_RF_GetPathLossTable_RXD( int rf_band, void *table )
{  unsigned char *src, *dst;
   //int  n;

   dst = (unsigned char*)table;
   #if defined(__MTK_TARGET__)
   src = (unsigned char*)(AGC_PATHLOSS_RXD_TABLE[rf_band]);
   #else //For xL1Sim using
   src = (unsigned char*)(AGC_PATHLOSS_RXD_TABLE_SetDefault[rf_band]);
   #endif
   if(src==0)  return;
   //for( n=sizeof(sAGCGAINOFFSET)*PLTABLE_SIZE; n>0; n--)
   //{  *dst++ = *src++;
   //}
   kal_mem_cpy( dst, src, (sizeof(sAGCGAINOFFSET) * PLTABLE_SIZE));
}
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_RX_POWER_OFFSET_SUPPORT
void L1D_RF_GetPathLoss_Offset_Table( int rf_band, void *table )
{
   unsigned char *src, *dst;
   dst = (unsigned char*)table;
   #if defined(__MTK_TARGET__)
   src = (unsigned char*)(AGCLNA_PATHLOSS_OFFSET[rf_band]);
   #else //For xL1Sim using
   src = (unsigned char*)(AGCLNA_PATHLOSS_OFFSET_TABLE_SetDefault[rf_band]);
   #endif
   if(src==0)  return;
   kal_mem_cpy( dst, src, (sizeof(sAGCLNAGAINOFFSET)*PLTABLE_SIZE));
}
#endif/*IS_RX_POWER_OFFSET_SUPPORT*/
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#if IS_2G_RXD_SUPPORT
   #if IS_RX_POWER_OFFSET_SUPPORT
void L1D_RF_GetPathLoss_Offset_Table_RXD( int rf_band, void *table )
{
   unsigned char *src, *dst;
   dst = (unsigned char*)table;
   #if defined(__MTK_TARGET__)
   src = (unsigned char*)(AGCLNA_PATHLOSS_RXD_OFFSET[rf_band]);
   #else //For xL1Sim using
   src = (unsigned char*)(AGCLNA_PATHLOSS_RXD_OFFSET_TABLE_SetDefault[rf_band]);
   #endif
   if(src==0)  return;
   kal_mem_cpy( dst, src, (sizeof(sAGCLNAGAINOFFSET)*PLTABLE_SIZE));
}
   #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
#endif /*#if IS_2G_RXD_SUPPORT*/
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


#if IS_TX_POWER_CONTROL_SUPPORT
void L1D_RF_TXPC_Get_Temp_ADC( sTEMPERATURE_ADC_L1CAL *buff )
{  /* For NVRAM to get L1 Default values for 1st boot-up */
   int i;

   for( i=0; i<8; i++ )
   {  buff->data[i] = TXTEMP_Data[0]->data[i];  }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
#else
// just for load building
void L1D_RF_TXPC_Get_Temp_ADC( sTEMPERATURE_ADC_L1CAL *buff )
{  /* For NVRAM to get L1 Default values for 1st boot-up */
   int i;

   for( i=0; i<8; i++ )
   {  buff->data[i] = i*100;  }
}
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_GetGainRF( l1cal_gainrf_T *buff )
{
#if IS_TX_GAIN_RF_CALIBRATION_SUPPORT
   const signed char *src;
         signed char *dst;
   int  n,i;

   for ( i = 0; i < FrequencyBandCount; i++ )
   {
      src = (signed char*)GAIN_RF_TABLE[i];
      if( src != 0 )
      {  dst = (signed char*)(buff->gain_rf[i]);
         for( n=sizeof(sTXGAIN_RFDATA); n>0; n--)
         {  *dst++ = *src++;
         }
      }
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

/* define pcore pointer to SHM   */
sAGCGAINOFFSET*  AGC_PATHLOSS_PCORE_TABLE[FrequencyBandCount];
sLNAGAINOFFSET*  LNA_PATHLOSS_PCORE_TABLE[FrequencyBandCount];
sRAMPDATA*       RampData_Pcore[FrequencyBandCount];
#if IS_EPSK_TX_SUPPORT
sMIDRAMPDATA** EPSK_InterRampData_Pcore[FrequencyBandCount];
sMIDRAMPDATA*  InterRampData_Pcore[FrequencyBandCount];
#elif   (IS_GPRS || IS_MULTISLOT_TX_SUPPORT)
sMIDRAMPDATA*  InterRampData_Pcore[FrequencyBandCount];
#else
sMIDRAMPDATA*  InterRampData_Pcore[FrequencyBandCount];
#endif
#if IS_EPSK_TX_SUPPORT
sRAMPDATA*  RampData_EPSK_Pcore[FrequencyBandCount];
#endif
#if IS_TX_POWER_CONTROL_SUPPORT
l1cal_txpc_T *GMSK_TXPC_PCORE_ptr;
   #if IS_EPSK_TX_SUPPORT
l1cal_txpc_T *EPSK_TXPC_PCORE_ptr;
   #endif
#endif
#if IS_TX_POWER_CONTROL_SUPPORT
l1cal_temperatureADC_T *TEMPERATURE_ADC_PCORE_ptr;
#endif
#if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
sTX_POWER_OFFSET*  Tx_Power_Offset_GMSK_Pcore[FrequencyBandCount];
   #if IS_EPSK_TX_SUPPORT
sTX_POWER_OFFSET*  Tx_Power_Offset_EPSK_Pcore[FrequencyBandCount];
   #endif   /* IS_EPSK_TX_SUPPORT */
#endif   /* IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT */

#if IS_RX_POWER_OFFSET_SUPPORT
s2G_RF_RX_PARAMETER_EXT*  AGCLNA_PL_OFFSET_SETTING_Pcore;
sAGCLNAGAINOFFSET*  AGCLNA_PATHLOSS_OFFSET_Pcore[FrequencyBandCount];
#endif/*IS_RX_POWER_OFFSET_SUPPORT*/


#if IS_GPRS
sTX_POWER_ROLLBACK* TX_POWER_ROLLBACK_GMSK_TABLE_Pcore[FrequencyBandCount];
#endif
#if IS_EGPRS
sTX_POWER_ROLLBACK* TX_POWER_ROLLBACK_EPSK_TABLE_Pcore[FrequencyBandCount];
#endif
#if IS_TX_GAIN_RF_CALIBRATION_SUPPORT
sTXGAIN_RFDATA* GAIN_RF_TABLE_Pcore[FrequencyBandCount];
#endif
l1cal_afcData_T* AFC_DATA_PCORE_ptr;
l1cal_crystalCapData_T* CAP_DATA_PCORE_ptr;
sBBTXParameters* TXIQ_PCORE_ptr;
sRFSpecialCoef* RFSPECIALCOEF_PCORE_ptr;
MMRFC_GSM_RESULT_T* RFC_DATA_PCORE_ptr;
int *CLOAD_FREQ_OFFSET_PCORE_ptr;
#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
sL1D_RF_CUSTOM_INPUT_DATA* RF_CUSTOM_INPUT_DATA_PCORE_ptr;
#endif
#if IS_MIPI_SUPPORT
sGGE_MIPI_CTRL_TABLE_BAND* GGE_MIPI_CTRL_TABLE_Pcore[FrequencyBandCount];
#endif
#if IS_2G_TAS_SUPPORT
L1D_CUSTOM_TAS_NVRAM_T*    TAS_CUSTOM_PARAMS_PCORE_ptr;
L1D_CUSTOM_TAS_FE_NVRAM_T* TAS_CUSTOM_PARAMS_FE_PCORE_ptr;
L1D_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T* L1_TAS_CUSTOM_INHERIT_LTE_ANT_TABLE_PCORE_ptr;
L1D_CUSTOM_TAS_TST_T*      TAS_CUSTOM_PARAMS_TST_PCORE_ptr;
#endif

#if IS_2G_DAT_SUPPORT
L1D_CUSTOM_DAT_FE_ROUTE_NVRAM_T*   DAT_CUSTOM_PARAMS_FE_ROUTE_PPCORE_ptr;
L1D_CUSTOM_DAT_FE_CAT_A_NVRAM_T*   DAT_CUSTOM_PARAMS_FE_CAT_A_PPCORE_ptr;
L1D_CUSTOM_DAT_FE_CAT_B_NVRAM_T*   DAT_CUSTOM_PARAMS_FE_CAT_B_PPCORE_ptr;
#endif
#if IS_ANT_RXPWR_OFFSET_SUPPORT
sL1D_ANT_RxPWR_Offset_v2_T*   ANT_RXPWR_OFFSET_PARAMS_PCORE_ptr;
#endif
#if IS_EPSK_SW_DRDI_SWITCH_SUPPORT
unsigned char*                EPSK_SW_DRDI_SWITCH_PCORE_ptr;
#endif
//#if IS_2G_DYNAMIC_DISPLAY_MIPI_CLOCK_SUPPORT
L1D_CUSTOM_DISPLAY_MIPI_CLK_NVRAM_T*   CUSTOM_DISPLAY_PARAMS_MIPI_CLK_PCORE_ptr;
//#endif

#if IS_2G_RXD_SUPPORT
   #if IS_RX_POWER_OFFSET_SUPPORT
sAGCLNAGAINOFFSET*      AGCLNA_PATHLOSS_RXD_OFFSET_Pcore[FrequencyBandCount];
   #endif
sAGCGAINOFFSET*         AGC_PATHLOSS_RXD_PCORE_TABLE[FrequencyBandCount];
sLNAGAINOFFSET*         LNA_PATHLOSS_RXD_PCORE_TABLE[FrequencyBandCount];
l1cal_wcoef_T*          WCOEF_RXD_PCORE_ptr;
L1D_CUSTOM_RAS_NVRAM_T* RAS_CUSTOM_PARAMS_PCORE_ptr;
#endif

sl1CustomBandSupport*  l1d_custom_band_support_PCORE_ptr;

#if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
L1D_CUSTOM_SAR_TX_BACKOFF_DB_NVRAM_T*   CUSTOM_SAR_TX_BACKOFF_dB_PCORE_ptr;
#endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetPathLossTable_Pcore( int rf_band, void *table )
{  unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)(AGC_PATHLOSS_PCORE_TABLE[rf_band]);
   if(dst==0)  return;
   for( n=sizeof(sAGCGAINOFFSET)*PLTABLE_SIZE; n>0; n--)
   {  *dst++ = *src++;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_2G_RXD_SUPPORT
void L1D_RF_SetPathLossTable_RXD_Pcore( int rf_band, void *table )
{  unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)(AGC_PATHLOSS_RXD_PCORE_TABLE[rf_band]);
   if(dst==0)  return;
   for( n=sizeof(sAGCGAINOFFSET)*PLTABLE_SIZE; n>0; n--)
   {  *dst++ = *src++;
   }
}
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetRampTable_Pcore( int rf_band, void *table )
{  unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)(RampData_Pcore[rf_band]);

   if(dst==0)  return;

   for( n=sizeof(sRAMPDATA); n>0; n--)
   {  *dst++ = *src++;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_EPSK_TX_SUPPORT
/*EPSK*/ void L1D_RF_SetRampTableEPSK_Pcore( int rf_band, void *table )
/*EPSK*/ {  unsigned char *src, *dst;
/*EPSK*/    int  n;
/*EPSK*/
/*EPSK*/    src = (unsigned char*)table;
/*EPSK*/    dst = (unsigned char*)(RampData_EPSK_Pcore[rf_band]);
/*EPSK*/
/*EPSK*/    if(dst==0)  return;
/*EPSK*/
/*EPSK*/    for( n=sizeof(sRAMPDATA); n>0; n--)
/*EPSK*/    {  *dst++ = *src++;
/*EPSK*/    }
/*EPSK*/ }
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_SetAFcData_Pcore( int16 calibrated_dac_default, intx calibrated_int_slope )
{
   AFC_DATA_PCORE_ptr->slopeInv = calibrated_int_slope;
   AFC_DATA_PCORE_ptr->dacValue = calibrated_dac_default;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetBBTXParameters_Pcore( void *table )
{  unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)TXIQ_PCORE_ptr;

   for( n=sizeof(sBBTXParameters); n>0; n--)
   {  *dst++ = *src++;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetRFSpecialCoef_Pcore( void *table )
{
   unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)RFSPECIALCOEF_PCORE_ptr;
   for( n=sizeof(sRFSpecialCoef); n>0; n--)
   {  *dst++ = *src++;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_2G_RXD_SUPPORT 
void L1D_RF_SetWCoef_RXD_Pcore( void *table )
{
   unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)WCOEF_RXD_PCORE_ptr;
   for( n=sizeof(l1cal_wcoef_T); n>0; n--)
   {  *dst++ = *src++;
   }
}
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetInterSlotRampTable_Pcore( int rf_band, void *table )
{
#if IS_GPRS || IS_MULTISLOT_TX_SUPPORT
/*GPRS*/ unsigned char *src, *dst;
/*GPRS*/ int  n;
/*GPRS*/
/*GPRS*/ src = (unsigned char*)table;
/*GPRS*/ dst = (unsigned char*)(InterRampData_Pcore[rf_band]);
/*GPRS*/
/*GPRS*/ if(dst==0)  return;
/*GPRS*/
/*GPRS*/ for( n=16; n>0; n--)
/*GPRS*/ {  *dst++ = *src++;
/*GPRS*/ }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_EPSK_TX_SUPPORT
void L1D_RF_EPSK_SetInterSlotRampTable_Pcore( int rf_band, int _8G_mode, void *table )
{
   #if IS_GPRS
/*GPRS*/ unsigned char *src, *dst;
/*GPRS*/ int  n;
/*GPRS*/
/*GPRS*/ src = (unsigned char*)table;
/*GPRS*/ dst = (unsigned char*)(*(EPSK_InterRampData_Pcore[rf_band])[_8G_mode]);
/*GPRS*/
/*GPRS*/ if(dst==0)  return;
/*GPRS*/
/*GPRS*/ for( n=16; n>0; n--)
/*GPRS*/ {   *dst++ = *src++;
/*GPRS*/ }
   #endif
}
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetCapID_Pcore( int cap_no )
{
   CAP_DATA_PCORE_ptr->cap_id = cap_no;
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_GPRS
void L1D_RF_SetTxPowerRollbackData_Pcore( int rf_band, void *table )
{  signed char *src, *dst;
   int  n;

   src = (signed char*)table;
   dst = (signed char*)(TX_POWER_ROLLBACK_GMSK_TABLE_Pcore[rf_band]);

   if(dst==0)  return;

   for( n=sizeof(sTX_POWER_ROLLBACK); n>0; n--)
   {  *dst++ = *src++;
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

   #if IS_EGPRS
void L1D_RF_SetTxPowerRollbackData_EPSK_Pcore( int rf_band, void *table )
{  signed char *src, *dst;
   int  n;

   src = (signed char*)table;
   dst = (signed char*)(TX_POWER_ROLLBACK_EPSK_TABLE_Pcore[rf_band]);

   if(dst==0)  return;

   for( n=sizeof(sTX_POWER_ROLLBACK); n>0; n--)
   {  *dst++ = *src++;
   }
}
   #endif
#endif
   
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetLnaPathLossTable_Pcore( int rf_band, void *table  )
{  /* for the RX LNA middle/low modes use */
#if IS_RF_MT6162 || IS_RF_MT6163 || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)(LNA_PATHLOSS_PCORE_TABLE[rf_band]);
   if(dst==0)  return;
   for( n=sizeof(sLNAGAINOFFSET)*PLTABLE_SIZE; n>0; n--)
   {  *dst++ = *src++;
   }
 #endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_2G_RXD_SUPPORT
void L1D_RF_SetLnaPathLossTable_RXD_Pcore( int rf_band, void *table  )
{  /* for the RX LNA middle/low modes use */
   #if IS_RF_MT6162 || IS_RF_MT6163 || IS_RF_MT6280RF || IS_RF_MT6169 || IS_RF_MT6166 || IS_RF_MT6165 || IS_RF_MT6176 || IS_RF_MT6179 || IS_RF_MT6177L || IS_RF_MT6177M
   unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)(LNA_PATHLOSS_RXD_PCORE_TABLE[rf_band]);
   if(dst==0)  return;
   for( n=sizeof(sLNAGAINOFFSET)*PLTABLE_SIZE; n>0; n--)
   {  *dst++ = *src++;
   }
   #endif
}
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


void L1D_RF_TXPC_Set_Temp_ADC_Pcore( sTEMPERATURE_ADC_L1CAL *temp_adc )
{  /* For L1D to get NVRAM calibration data at boot-up */
#if IS_TX_POWER_CONTROL_SUPPORT
   int i;
   for( i=0; i<8; i++ )
   {  TEMPERATURE_ADC_PCORE_ptr->data[i]= temp_adc->data[i];  }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_32K_CRYSTAL_REMOVAL_SUPPORT
void L1D_RF_SetCLoadFreqOffset_Pcore( int *freq_offset )
{
   *CLOAD_FREQ_OFFSET_PCORE_ptr = *freq_offset;
}
#endif
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetGainRF_Pcore(  int rf_band, void *table )
{
#if IS_TX_GAIN_RF_CALIBRATION_SUPPORT
   unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)(GAIN_RF_TABLE_Pcore[rf_band]);
   if(dst==0)  return;
   for( n=sizeof(sTXGAIN_RFDATA); n>0; n--)
   {  *dst++ = *src++;
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Set_RFC_Result_Pcore( MMRFC_GSM_RESULT_T *buff )
{
#if IS_2G_MMPOC_SUPPORT
   const signed char *src;
         signed char *dst;
   int  n;

   dst = (signed char*)(RFC_DATA_PCORE_ptr);
   if( dst != 0 )
   {  src = (signed char*)buff;
      for( n=sizeof(MMRFC_GSM_RESULT_T); n>0; n--)
      {  *dst++ = *src++;  }
   }
   
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_Get_RFC_Result( MMRFC_GSM_RESULT_T *buff )
{
#if IS_2G_MMPOC_SUPPORT
// Set MMPOC Default Value, here.  Expected Original Data comes from m12193.c (RO Data is fine, no DRDI needed)
   const signed char *src;
         signed char *dst;
   int  n;

   src = (signed char*)(&rfc_data);
   if( src != 0 )
   {  dst = (signed char*)buff;
      for( n=sizeof(MMRFC_GSM_RESULT_T); n>0; n--)
      {  *dst++ = *src++;  }
   }
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
void L1D_RF_SetTxPowerOffsetData_GMSK_Pcore( int rf_band, void *table )
{  signed char *src, *dst;
   int  n;

   src = (signed char*)table;
   dst = (signed char*)(Tx_Power_Offset_GMSK_Pcore[rf_band]);

   if(dst==0)  return;

   for( n=sizeof(sTX_POWER_OFFSET); n>0; n--)
   {  *dst++ = *src++;
   }

}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_RF_SetTxPowerOffsetData_EPSK_Pcore( int rf_band, void *table )
{  signed char *src, *dst;
   int  n;

   src = (signed char*)table;
   dst = (signed char*)(Tx_Power_Offset_EPSK_Pcore[rf_band]);

   if(dst==0)  return;

   for( n=sizeof(sTX_POWER_OFFSET); n>0; n--)
   {  *dst++ = *src++;
   }
}
#endif   // IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


#if IS_RX_POWER_OFFSET_SUPPORT
void L1D_RF_SetPathLoss_Offset_Table_Pcore( int rf_band, void *table )
{  unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)(AGCLNA_PATHLOSS_OFFSET_Pcore[rf_band]);
   if(dst==0)  return;
   for( n=sizeof(sAGCLNAGAINOFFSET)*PLTABLE_SIZE; n>0; n--)
   {  *dst++ = *src++;
   }
}

    #if IS_2G_RXD_SUPPORT
void L1D_RF_SetPathLoss_Offset_Table_RXD_Pcore( int rf_band, void *table )
{  unsigned char *src, *dst;
   int  n;

   src = (unsigned char*)table;
   dst = (unsigned char*)(AGCLNA_PATHLOSS_RXD_OFFSET_Pcore[rf_band]);
   if(dst==0)  return;
   for( n=sizeof(sAGCLNAGAINOFFSET)*PLTABLE_SIZE; n>0; n--)
   {  *dst++ = *src++;
   }
}
    #endif /*IS_2G_RXD_SUPPORT*/
#endif/*IS_RX_POWER_OFFSET_SUPPORT*/

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */


#if IS_MIPI_SUPPORT
void L1D_RF_SetMIPITable_Pcore( int rf_band, void *table )
{  signed char *src, *dst;
   int  n;

   src = (signed char*)table;
   dst = (signed char*)(GGE_MIPI_CTRL_TABLE_Pcore[rf_band]);

   if(dst==0)  return;

   for( n=sizeof(sGGE_MIPI_CTRL_TABLE_BAND); n>0; n--)
   {  *dst++ = *src++;
   }
}
#endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

kal_uint32 L1D_GetBandSupport_PCore( void )
{
   /* For partial-source load, L1D only supports BAND_SUPPORT setting downgrade in project make file.
      Abnormal BAND_SUPPORT setting upgrade would cause link errors in this function */

   unsigned long band_support = 0;

#if defined(__MTK_TARGET__) && !defined(L1_NOT_PRESENT)
   /*For IS_PCORE_BRINGUP_PHONECALL_TEMPLOAD_ENABLE = 1 , MMRF code flow as below , if NVRAM not ready , it will have proble to nvram_external_read_data
      L1D_MMRF_PcoreUpdate2SHM_ByDefaultCustom => L1D_PcoreUpdate2SHM_ByDefaultCustom =>L1D_GetBandSupport_PCore
      Uisng the bandsupportsource flag to avoid the nvram_external_read_data problem during phone call stage.
   */
   if(bandsupportsource==BandSupportFromPcoreNvram)
   {
      /* handle race condition caused by default and DRDI band setting         */
      /* block the queried function until DRDI is done   or time out(1s)       */
      static char l1d_band_support_nvram_read_done=0;
      unsigned short       timeout_count = 0;
      static sl1CustomBandSupport bandsupport = {0} ;
      kal_bool error_no = KAL_FALSE;
      while ((error_no==KAL_FALSE) && (l1d_band_support_nvram_read_done==0))/*2G DRDI not done*/
      {
         if(timeout_count<=KAL_TICKS_1_SEC)
         {
            kal_sleep_task(KAL_TICKS_10_MSEC);
         }
         else
         {
            ASSERT(0);
            break;
         }
         //Read Band Support from NVRAM 
         error_no = nvram_external_read_data(NVRAM_EF_L1_CUSTOM_BAND_SUPPORT_LID, 1, (kal_uint8 *)(&bandsupport), sizeof( l1cal_l1CustomBandSupport_T ) );
         timeout_count += KAL_TICKS_10_MSEC;
      } 
                        /* Band 850                                                  Band 900                                                      Band 1800                                                       Band 1900 */
      band_support  = (bandsupport.bandsupport_gsm850<<l1d_support_band850)|(bandsupport.bandsupport_gsm900<<l1d_support_band900)|(bandsupport.bandsupport_dcs1800<<l1d_support_band1800)|(bandsupport.bandsupport_pcs1900<<l1d_support_band1900);
      l1d_band_support_nvram_read_done = 1;
   }
   else
   {
      band_support  = (1<<l1d_support_band850)|(1<<l1d_support_band900)|(1<<l1d_support_band1800)|(1<<l1d_support_band1900);
   }
#else
      band_support  = (1<<l1d_support_band850)|(1<<l1d_support_band900)|(1<<l1d_support_band1800)|(1<<l1d_support_band1900);
#endif
     
   return band_support;
}


#if defined(__MTK_TARGET__) && !defined(L1_NOT_PRESENT)

kal_uint32 L1D_UeBandCapability(void)
{
   unsigned long band_support = 0;
	band_support = L1D_GetBandSupport_PCore();
   band_support  = (((band_support&0x02)>>l1d_support_band850)<<7)|(((band_support&0x04)>>l1d_support_band900)<<1)|(((band_support&0x08)>>l1d_support_band1800)<<3)|(((band_support&0x10)>>l1d_support_band1900)<<4);
   return band_support;  
}

#endif

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_MMRF_PCoreSHMDataInit(void)
{
   int i;

   for(i=1; i<FrequencyBandCount; i++) // start from pointer not equal to zero
   {
      /* AGC PATHLOSS pointer table re-assign*/
      AGC_PATHLOSS_PCORE_TABLE[i] = MMRF_CUSTOM_SHARED_ARRAY(AGC_PATHLOSS_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(AGC_PATHLOSS_PCORE_TABLE[i], (sizeof(sAGCGAINOFFSET)*PLTABLE_SIZE));

      /* LNA PATHLOSS pointer table re-assign*/
      LNA_PATHLOSS_PCORE_TABLE[i] = MMRF_CUSTOM_SHARED_ARRAY(LNA_PATHLOSS_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(LNA_PATHLOSS_PCORE_TABLE[i], (sizeof(sLNAGAINOFFSET)*PLTABLE_SIZE));

      /* RampData pointer table re-assign*/
      RampData_Pcore[i] = MMRF_CUSTOM_SHARED_ARRAY(RampData_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(RampData_Pcore[i], (sizeof(sRAMPDATA)));

#if IS_RX_POWER_OFFSET_SUPPORT
      /* AGC LNA Gain Offset pointer table re-assign*/
      AGCLNA_PATHLOSS_OFFSET_Pcore[i] = MMRF_CUSTOM_SHARED_ARRAY(AGCLNA_GAIN_OFFSET_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(AGCLNA_PATHLOSS_OFFSET_Pcore[i], (sizeof(sAGCLNAGAINOFFSET)*PLTABLE_SIZE));
#endif/*IS_RX_POWER_OFFSET_SUPPORT*/

#if IS_EPSK_TX_SUPPORT
      /* EPSK RampData pointer table re-assign*/
      RampData_EPSK_Pcore[i] = MMRF_CUSTOM_SHARED_ARRAY(RampData_EPSK_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(RampData_EPSK_Pcore[i], (sizeof(sRAMPDATA)));
#endif

#if IS_EPSK_TX_SUPPORT
      /* EPSK InterRampData  pointer table re-assign*/
      EPSK_InterRampData_Pcore[i] = MMRF_CUSTOM_SHARED_ARRAY(InterRampData_EPSK_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(*(EPSK_InterRampData_Pcore[i]), (sizeof(sMIDRAMPDATA)*InterRampData_count));
#elif   (IS_GPRS || IS_MULTISLOT_TX_SUPPORT)
      /* InterRampData pointer table re-assign*/
      InterRampData_Pcore[i] = MMRF_CUSTOM_SHARED_ARRAY(InterRampData_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(InterRampData_Pcore[i], (sizeof(sMIDRAMPDATA)));
#endif

#if IS_GPRS
      /*  GMSK TX POWER ROLLBACK pointer table re-assign*/
      TX_POWER_ROLLBACK_GMSK_TABLE_Pcore[i] = MMRF_CUSTOM_SHARED_ARRAY(TX_POWER_ROLLBACK_GMSK_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(TX_POWER_ROLLBACK_GMSK_TABLE_Pcore[i], (sizeof(sTX_POWER_ROLLBACK)));
#endif

#if IS_EGPRS
      /*  EPSK TX POWER ROLLBACK pointer table re-assign*/
      TX_POWER_ROLLBACK_EPSK_TABLE_Pcore[i] = MMRF_CUSTOM_SHARED_ARRAY(TX_POWER_ROLLBACK_EPSK_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(TX_POWER_ROLLBACK_EPSK_TABLE_Pcore[i], (sizeof(sTX_POWER_ROLLBACK)));
#endif

#if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
      /*   GMSK TX POWER OFFSET pointer table re-assign*/
      Tx_Power_Offset_GMSK_Pcore[i] = MMRF_CUSTOM_SHARED_ARRAY(TX_Power_Offset_GMSK_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(Tx_Power_Offset_GMSK_Pcore[i], (sizeof(sTX_POWER_OFFSET)));
   #if IS_EPSK_TX_SUPPORT
      /*   EPSK TX POWER OFFSET pointer table re-assign*/
      Tx_Power_Offset_EPSK_Pcore[i] = MMRF_CUSTOM_SHARED_ARRAY(TX_Power_Offset_EPSK_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(Tx_Power_Offset_EPSK_Pcore[i], (sizeof(sTX_POWER_OFFSET)));	
   #endif
#endif

#if IS_TX_GAIN_RF_CALIBRATION_SUPPORT
      /* GAIN RF pointer table re-assign*/
      GAIN_RF_TABLE_Pcore[i] = MMRF_CUSTOM_SHARED_ARRAY(GAIN_RF_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(GAIN_RF_TABLE_Pcore[i], (sizeof(sTXGAIN_RFDATA)));
#endif

#if IS_MIPI_SUPPORT
      /* MIPI CTRL TABLE pointer table re-assign*/
      GGE_MIPI_CTRL_TABLE_Pcore[i] = MMRF_CUSTOM_SHARED_ARRAY(GGE_MIPI_CTRL_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(GGE_MIPI_CTRL_TABLE_Pcore[i], (sizeof(sGGE_MIPI_CTRL_TABLE_BAND)));
#endif
   }

#if IS_RX_POWER_OFFSET_SUPPORT
    AGCLNA_PL_OFFSET_SETTING_Pcore = MMRF_CUSTOM_SHARED_pVAR(AGCLNA_PL_OFFSET_SETTING_SHM_TABLE);
    MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(AGCLNA_PL_OFFSET_SETTING_Pcore, (sizeof(s2G_RF_RX_PARAMETER_EXT)));
#endif//IS_RX_POWER_OFFSET_SUPPORT

#if IS_TX_POWER_CONTROL_SUPPORT
   /* GMSK TXPC  pointer re-assign*/
   GMSK_TXPC_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(GMSK_TXPC_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(GMSK_TXPC_PCORE_ptr, (sizeof(l1cal_txpc_T)));
   #if IS_EPSK_TX_SUPPORT
   /* EPSK TXPC pointer re-assign*/
   EPSK_TXPC_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(EPSK_TXPC_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(EPSK_TXPC_PCORE_ptr, (sizeof(l1cal_txpc_T)));
   #endif
#endif

#if IS_TX_POWER_CONTROL_SUPPORT
   /* TEMPERATURE ADC pointer re-assign*/
   TEMPERATURE_ADC_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(TEMPERATURE_ADC_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(TEMPERATURE_ADC_PCORE_ptr, (sizeof(l1cal_temperatureADC_T)));
#endif

#if IS_2G_MMPOC_SUPPORT
   /* RFC_DATA pointer re-assign*/
   RFC_DATA_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(MMRFC_GSM_RESULT_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(RFC_DATA_PCORE_ptr, (sizeof(MMRFC_GSM_RESULT_T)));
#endif

   /* AFC DATA pointer re-assign*/
   AFC_DATA_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(AFC_DATA_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(AFC_DATA_PCORE_ptr, (sizeof(l1cal_afcData_T)));

   /* CAP DATA pointer re-assign*/
   CAP_DATA_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(CAP_DATA_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(CAP_DATA_PCORE_ptr, (sizeof(l1cal_crystalCapData_T)));

   /* TXIQ pointer re-assign*/
   TXIQ_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(TXIQ_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(TXIQ_PCORE_ptr, (sizeof(sBBTXParameters)));

   /* RFSPECIALCOEF pointer re-assign*/
   RFSPECIALCOEF_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(RFSPECIALCOEF_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(RFSPECIALCOEF_PCORE_ptr, (sizeof(sRFSpecialCoef)));

#if IS_32K_CRYSTAL_REMOVAL_SUPPORT
   /* CLOAD FREQ OFFSET pointer re-assign*/
   CLOAD_FREQ_OFFSET_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(CLOAD_FREQ_OFFSET_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(CLOAD_FREQ_OFFSET_PCORE_ptr, (sizeof(int)));
#endif

#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
   /* RF CUSTOM INPUT DATA pointer re-assign*/
   RF_CUSTOM_INPUT_DATA_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(RF_CUSTOM_INPUT_DATA_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(RF_CUSTOM_INPUT_DATA_PCORE_ptr, (sizeof(sL1D_RF_CUSTOM_INPUT_DATA)));
#endif

#if IS_2G_TAS_SUPPORT
   /* TAS CUSTOM PARAMES pointer re-assign*/
   TAS_CUSTOM_PARAMS_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(TAS_CUSTOM_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(TAS_CUSTOM_PARAMS_PCORE_ptr, (sizeof(L1D_CUSTOM_TAS_NVRAM_T)));
   
   TAS_CUSTOM_PARAMS_FE_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(TAS_CUSTOM_FE_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(TAS_CUSTOM_PARAMS_FE_PCORE_ptr, (sizeof(L1D_CUSTOM_TAS_FE_NVRAM_T)));   
   
   #if IS_2G_TAS_INHERIT_4G_ANT
   L1_TAS_CUSTOM_INHERIT_LTE_ANT_TABLE_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(L1D_CUSTOM_TAS_INHERIT_LTE_BAND_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(L1_TAS_CUSTOM_INHERIT_LTE_ANT_TABLE_PCORE_ptr, (sizeof(L1D_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T)));
   #endif

   TAS_CUSTOM_PARAMS_TST_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(TAS_CUSTOM_TST_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(TAS_CUSTOM_PARAMS_TST_PCORE_ptr, (sizeof(L1D_CUSTOM_TAS_TST_T)));   
#endif
#if IS_2G_DAT_SUPPORT
   /* DAT CUSTOM PARAMES pointer re-assign*/       

   DAT_CUSTOM_PARAMS_FE_ROUTE_PPCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(DAT_CUSTOM_FE_ROUTE_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(DAT_CUSTOM_PARAMS_FE_ROUTE_PPCORE_ptr, (sizeof(L1D_CUSTOM_DAT_FE_ROUTE_NVRAM_T)));   

   DAT_CUSTOM_PARAMS_FE_CAT_A_PPCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(DAT_CUSTOM_FE_CAT_A_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(DAT_CUSTOM_PARAMS_FE_CAT_A_PPCORE_ptr, (sizeof(L1D_CUSTOM_DAT_FE_CAT_A_NVRAM_T)));    

   DAT_CUSTOM_PARAMS_FE_CAT_B_PPCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(DAT_CUSTOM_FE_CAT_B_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(DAT_CUSTOM_PARAMS_FE_CAT_B_PPCORE_ptr, (sizeof(L1D_CUSTOM_DAT_FE_CAT_B_NVRAM_T)));   
#endif

#if IS_ANT_RXPWR_OFFSET_SUPPORT
   ANT_RXPWR_OFFSET_PARAMS_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(ANT_RXPWR_OFFSET_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(ANT_RXPWR_OFFSET_PARAMS_PCORE_ptr, (sizeof(sL1D_ANT_RxPWR_Offset_v2_T)));
#endif

#if IS_EPSK_SW_DRDI_SWITCH_SUPPORT
   EPSK_SW_DRDI_SWITCH_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(EPSK_SW_DRDI_SWITCH_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(EPSK_SW_DRDI_SWITCH_PCORE_ptr, (sizeof(unsigned char)));
#endif

//#if IS_2G_DYNAMIC_DISPLAY_MIPI_CLOCK_SUPPORT
   CUSTOM_DISPLAY_PARAMS_MIPI_CLK_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(CUSTOM_DISPLAY_MIPI_CLK_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(CUSTOM_DISPLAY_PARAMS_MIPI_CLK_PCORE_ptr, (sizeof(L1D_CUSTOM_DISPLAY_MIPI_CLK_NVRAM_T)));
//#endif

   /*TAS LIB PARAMES pointer re-assign*/
   l1d_custom_band_support_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(CUSTOM_BAND_SUPPORT_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(l1d_custom_band_support_PCORE_ptr, (sizeof(sl1CustomBandSupport)));

#if IS_2G_RXD_SUPPORT   
   for(i=1; i<FrequencyBandCount; i++) // start from pointer not equal to zero
   {
   #if IS_RX_POWER_OFFSET_SUPPORT
      /* RXD AGC LNA Gain Offset pointer table re-assign*/
      AGCLNA_PATHLOSS_RXD_OFFSET_Pcore[i] = MMRF_CUSTOM_SHARED_ARRAY(AGCLNA_GAIN_OFFSET_RXD_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(AGCLNA_PATHLOSS_RXD_OFFSET_Pcore[i], (sizeof(sAGCLNAGAINOFFSET)*PLTABLE_SIZE));
   #endif

      /* RXD AGC PATHLOSS pointer table re-assign*/
      AGC_PATHLOSS_RXD_PCORE_TABLE[i] = MMRF_CUSTOM_SHARED_ARRAY(AGC_PATHLOSS_RXD_SHM_TABLE[i]);   
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(AGC_PATHLOSS_RXD_PCORE_TABLE[i], (sizeof(sAGCGAINOFFSET)*PLTABLE_SIZE));

      /* RXD LNA PATHLOSS pointer table re-assign*/
      LNA_PATHLOSS_RXD_PCORE_TABLE[i] = MMRF_CUSTOM_SHARED_ARRAY(LNA_PATHLOSS_RXD_SHM_TABLE[i]);
      MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(LNA_PATHLOSS_RXD_PCORE_TABLE[i], (sizeof(sLNAGAINOFFSET)*PLTABLE_SIZE));
   }
   /* RXD WCOEF RXD pointer re-assign*/
   WCOEF_RXD_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(WCOEF_RXD_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(WCOEF_RXD_PCORE_ptr, (sizeof(l1cal_wcoef_T)));
   
   /* RAS CUSTOM PARAMES pointer re-assign*/
   RAS_CUSTOM_PARAMS_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(RAS_CUSTOM_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(RAS_CUSTOM_PARAMS_PCORE_ptr, (sizeof(L1D_CUSTOM_RAS_NVRAM_T)));
#endif

#if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
   CUSTOM_SAR_TX_BACKOFF_dB_PCORE_ptr = MMRF_CUSTOM_SHARED_pVAR(CUSTOM_SAR_TX_BACKOFF_NVRAM_SHM);
   MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(CUSTOM_SAR_TX_BACKOFF_dB_PCORE_ptr, (sizeof(L1D_CUSTOM_SAR_TX_BACKOFF_DB_NVRAM_T)));
#endif

}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_PcoreNvramUpdate2SHM( kal_uint32 cal_lid )
{
#ifdef __MTK_TARGET__
#ifndef NVRAM_NOT_PRESENT
   bandsupportsource = BandSupportFromPcoreNvram;
   switch ( (nvram_lid_enum)cal_lid )
   {
      case NVRAM_EF_L1_AGCPATHLOSS_LID:
      {
         l1cal_agcPathLoss_T *agc = (l1cal_agcPathLoss_T *)L1_ALLOC_BUF( sizeof( l1cal_agcPathLoss_T ) );
         kal_int8 i;
         kal_bool error_no;
         error_no = nvram_external_read_data(NVRAM_EF_L1_AGCPATHLOSS_LID, 1, (kal_uint8 *)agc, sizeof( l1cal_agcPathLoss_T ) );
         ASSERT(error_no == KAL_TRUE);

         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            L1D_RF_SetPathLossTable_Pcore( i,  agc->agcPathLoss[i] );
         }

         L1_FREE_BUF( agc );
      }
      break;

      case NVRAM_EF_L1_AGCPATHLOSS_RXD_LID:
      {   
      #if IS_2G_RXD_SUPPORT
         l1cal_agcPathLoss_T *agc = (l1cal_agcPathLoss_T *)L1_ALLOC_BUF( sizeof( l1cal_agcPathLoss_T ) );
         kal_int8 i;
         kal_bool error_no;
         error_no = nvram_external_read_data(NVRAM_EF_L1_AGCPATHLOSS_RXD_LID, 1, (kal_uint8 *)agc, sizeof( l1cal_agcPathLoss_T ) );
         ASSERT(error_no == KAL_TRUE);

         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            L1D_RF_SetPathLossTable_RXD_Pcore( i,  agc->agcPathLoss[i] );
         }

         L1_FREE_BUF( agc );
      #endif
      }
      break;

#if IS_RX_POWER_OFFSET_SUPPORT
      case NVRAM_EF_L1_2G_RF_RX_PARAMETER_EXT_LID:
      {
        s2G_RF_RX_PARAMETER_EXT *setting = (s2G_RF_RX_PARAMETER_EXT *)L1_ALLOC_BUF( sizeof( s2G_RF_RX_PARAMETER_EXT ) );
        kal_bool error_no;
        error_no = nvram_external_read_data(NVRAM_EF_L1_2G_RF_RX_PARAMETER_EXT_LID, 1, (kal_uint8 *)setting, sizeof( s2G_RF_RX_PARAMETER_EXT ) );
        ASSERT(error_no == KAL_TRUE);
        kal_mem_cpy(AGCLNA_PL_OFFSET_SETTING_Pcore,setting,sizeof(s2G_RF_RX_PARAMETER_EXT));
      }
      break;

      case NVRAM_EF_L1_AGCPATHLOSS_OFFSET_LID:
      {
         l1cal_agclnaPathLoss_T *agc = (l1cal_agclnaPathLoss_T *)L1_ALLOC_BUF( sizeof( l1cal_agclnaPathLoss_T ) );
         kal_int8 i;
         kal_bool error_no;
         error_no = nvram_external_read_data(NVRAM_EF_L1_AGCPATHLOSS_OFFSET_LID, 1, (kal_uint8 *)agc, sizeof( l1cal_agclnaPathLoss_T ) );
         ASSERT(error_no == KAL_TRUE);

         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            L1D_RF_SetPathLoss_Offset_Table_Pcore( i,  agc->agcPathLoss[i] );
         }

         L1_FREE_BUF( agc );
      }
      break;

      case NVRAM_EF_L1_AGCPATHLOSS_OFFSET_RXD_LID:
      {
      #if IS_2G_RXD_SUPPORT
         l1cal_agclnaPathLoss_T *agc = (l1cal_agclnaPathLoss_T *)L1_ALLOC_BUF( sizeof( l1cal_agclnaPathLoss_T ) );
         kal_int8 i;
         kal_bool error_no;
         error_no = nvram_external_read_data(NVRAM_EF_L1_AGCPATHLOSS_OFFSET_RXD_LID, 1, (kal_uint8 *)agc, sizeof( l1cal_agclnaPathLoss_T ) );
         ASSERT(error_no == KAL_TRUE);

         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            L1D_RF_SetPathLoss_Offset_Table_RXD_Pcore( i,  agc->agcPathLoss[i] );
         }
         
         L1_FREE_BUF( agc );
      #endif
      }
      break;
#endif/*IS_RX_POWER_OFFSET_SUPPORT*/

      case NVRAM_EF_L1_RAMPTABLE_GSM850_LID:
      {
   #ifdef __GSM850__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand850) )
         {
            l1cal_rampTable_T *apc = (l1cal_rampTable_T *)L1_ALLOC_BUF( sizeof( l1cal_rampTable_T ) );
            kal_bool error_no;
            error_no = nvram_external_read_data(NVRAM_EF_L1_RAMPTABLE_GSM850_LID, 1, (kal_uint8 *)apc, sizeof( l1cal_rampTable_T ) );
            ASSERT(error_no == KAL_TRUE);

            L1D_RF_SetRampTable_Pcore( FrequencyBand850, &apc->rampData );

            L1_FREE_BUF( apc );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_RAMPTABLE_GSM900_LID:
      {
   #ifdef __EGSM900__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand900) )
         {
            l1cal_rampTable_T *apc = (l1cal_rampTable_T *)L1_ALLOC_BUF( sizeof( l1cal_rampTable_T ) );
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_RAMPTABLE_GSM900_LID, 1, (kal_uint8 *)apc, sizeof( l1cal_rampTable_T ) );
            ASSERT(error_no == KAL_TRUE);

            L1D_RF_SetRampTable_Pcore( FrequencyBand900, &apc->rampData );

            L1_FREE_BUF( apc );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_RAMPTABLE_DCS1800_LID:
      {
   #ifdef __DCS1800__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand1800) )
         {
            l1cal_rampTable_T *apc = (l1cal_rampTable_T *)L1_ALLOC_BUF( sizeof( l1cal_rampTable_T ) );
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_RAMPTABLE_DCS1800_LID, 1, (kal_uint8 *)apc, sizeof( l1cal_rampTable_T ) );
            ASSERT(error_no == KAL_TRUE);

            L1D_RF_SetRampTable_Pcore( FrequencyBand1800, &apc->rampData );

            L1_FREE_BUF( apc );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_RAMPTABLE_PCS1900_LID:
      {
   #ifdef __PCS1900__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand1900) )
         {
            l1cal_rampTable_T *apc = (l1cal_rampTable_T *)L1_ALLOC_BUF( sizeof( l1cal_rampTable_T ) );
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_RAMPTABLE_PCS1900_LID, 1, (kal_uint8 *)apc, sizeof( l1cal_rampTable_T ) );
            ASSERT(error_no == KAL_TRUE);

            L1D_RF_SetRampTable_Pcore( FrequencyBand1900, &apc->rampData );

            L1_FREE_BUF( apc );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_RAMPTABLE_GSM850_LID:
      {
   #if IS_EPSK_TX_SUPPORT
      #ifdef __GSM850__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand850) )
         {
            l1cal_rampTable_T *apc = (l1cal_rampTable_T *)L1_ALLOC_BUF( sizeof( l1cal_rampTable_T ) );
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_EPSK_RAMPTABLE_GSM850_LID, 1, (kal_uint8 *)apc, sizeof( l1cal_rampTable_T ) );
            ASSERT(error_no == KAL_TRUE);

            L1D_RF_SetRampTableEPSK_Pcore( FrequencyBand850, &apc->rampData );

            L1_FREE_BUF( apc );
         }
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_RAMPTABLE_GSM900_LID:
      {
   #if IS_EPSK_TX_SUPPORT
      #ifdef __EGSM900__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand900) )
         {
            l1cal_rampTable_T *apc = (l1cal_rampTable_T *)L1_ALLOC_BUF( sizeof( l1cal_rampTable_T ) );
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_EPSK_RAMPTABLE_GSM900_LID, 1, (kal_uint8 *)apc, sizeof( l1cal_rampTable_T ) );
            ASSERT(error_no == KAL_TRUE);

            L1D_RF_SetRampTableEPSK_Pcore( FrequencyBand900, &apc->rampData );

            L1_FREE_BUF( apc );
         }
         #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_RAMPTABLE_DCS1800_LID:
      {
   #if IS_EPSK_TX_SUPPORT
      #ifdef __DCS1800__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand1800) )
         {
            l1cal_rampTable_T *apc = (l1cal_rampTable_T *)L1_ALLOC_BUF( sizeof( l1cal_rampTable_T ) );
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_EPSK_RAMPTABLE_DCS1800_LID, 1, (kal_uint8 *)apc, sizeof( l1cal_rampTable_T ) );
            ASSERT(error_no == KAL_TRUE);

            L1D_RF_SetRampTableEPSK_Pcore( FrequencyBand1800, &apc->rampData );

            L1_FREE_BUF( apc );
         }
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_RAMPTABLE_PCS1900_LID:
      {
   #if IS_EPSK_TX_SUPPORT
      #ifdef __PCS1900__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand1900) )
         {
            l1cal_rampTable_T *apc = (l1cal_rampTable_T *)L1_ALLOC_BUF( sizeof( l1cal_rampTable_T ) );
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_EPSK_RAMPTABLE_PCS1900_LID, 1, (kal_uint8 *)apc, sizeof( l1cal_rampTable_T ) );
            ASSERT(error_no == KAL_TRUE);

            L1D_RF_SetRampTableEPSK_Pcore( FrequencyBand1900, &apc->rampData );

            L1_FREE_BUF( apc );
         }
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_AFCDATA_LID:
      {
         l1cal_afcData_T *afc = (l1cal_afcData_T *)L1_ALLOC_BUF( sizeof( l1cal_afcData_T ) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_AFCDATA_LID, 1, (kal_uint8 *)afc, sizeof( l1cal_afcData_T ) );
         ASSERT(error_no == KAL_TRUE);

         L1D_SetAFcData_Pcore( afc->dacValue, afc->slopeInv );

         L1_FREE_BUF( afc );
      }
      break;

      case NVRAM_EF_L1_TXIQ_LID:
      {
         l1cal_txiq_T *txiq = (l1cal_txiq_T *)L1_ALLOC_BUF( sizeof(l1cal_txiq_T) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_TXIQ_LID, 1, (kal_uint8 *)txiq, sizeof(l1cal_txiq_T) );
         ASSERT(error_no == KAL_TRUE);

         L1D_RF_SetBBTXParameters_Pcore( txiq );

         L1_FREE_BUF( txiq );
      }
      break;

      case NVRAM_EF_L1_RFSPECIALCOEF_LID:
      {
         l1cal_rfspecialcoef_T *rfspecialcoef = (l1cal_rfspecialcoef_T *)L1_ALLOC_BUF( sizeof(l1cal_rfspecialcoef_T) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_RFSPECIALCOEF_LID, 1, (kal_uint8 *)rfspecialcoef, sizeof(l1cal_rfspecialcoef_T) );
         ASSERT(error_no == KAL_TRUE);

         L1D_RF_SetRFSpecialCoef_Pcore( rfspecialcoef );

         L1_FREE_BUF( rfspecialcoef );
      }
      break;

      case NVRAM_EF_L1_WCOEF_RXD_LID:
      {
         #if IS_2G_RXD_SUPPORT 
         l1cal_wcoef_T *local_wcoef_rxd = (l1cal_wcoef_T *)L1_ALLOC_BUF( sizeof(l1cal_wcoef_T) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_WCOEF_RXD_LID, 1, (kal_uint8 *)local_wcoef_rxd, sizeof(l1cal_wcoef_T) );
         ASSERT(error_no == KAL_TRUE);

         L1D_RF_SetWCoef_RXD_Pcore( local_wcoef_rxd );

         L1_FREE_BUF( local_wcoef_rxd );
         #endif
      }
      break;

      case NVRAM_EF_L1_RAS_CUSTOM_PARAMES_LID:
         {
         #if IS_2G_RXD_SUPPORT 
            L1D_CUSTOM_RAS_NVRAM_T* buffer = (L1D_CUSTOM_RAS_NVRAM_T *)L1_ALLOC_BUF( sizeof(L1D_CUSTOM_RAS_NVRAM_T) );
            kal_bool error_no;
         
            error_no = nvram_external_read_data(NVRAM_EF_L1_RAS_CUSTOM_PARAMES_LID, 1, (kal_uint8 *)buffer, sizeof(L1D_CUSTOM_RAS_NVRAM_T) );
            ASSERT(error_no == KAL_TRUE);
         
            kal_mem_cpy(RAS_CUSTOM_PARAMS_PCORE_ptr, buffer , sizeof(L1D_CUSTOM_RAS_NVRAM_T));
         
            L1_FREE_BUF( buffer );
         #endif
         }
         break;

      case NVRAM_EF_L1_INTERSLOT_RAMP_GSM850_LID:
      {
   #ifdef __GSM850__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand850) )
         {
            l1cal_interRampData_T *apc = (l1cal_interRampData_T *)L1_ALLOC_BUF( sizeof( l1cal_interRampData_T ) );
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_INTERSLOT_RAMP_GSM850_LID, 1, (kal_uint8 *)apc, sizeof( l1cal_interRampData_T ) );
            ASSERT(error_no == KAL_TRUE);

            L1D_RF_SetInterSlotRampTable_Pcore( FrequencyBand850, &apc->interRampData );

            L1_FREE_BUF( apc );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_INTERSLOT_RAMP_GSM900_LID:
      {
   #ifdef __EGSM900__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand900) )
         {
            l1cal_interRampData_T *apc = (l1cal_interRampData_T *)L1_ALLOC_BUF( sizeof( l1cal_interRampData_T ) );
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_INTERSLOT_RAMP_GSM900_LID, 1, (kal_uint8 *)apc, sizeof( l1cal_interRampData_T ) );
            ASSERT(error_no == KAL_TRUE);

            L1D_RF_SetInterSlotRampTable_Pcore( FrequencyBand900, &apc->interRampData );

            L1_FREE_BUF( apc );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_INTERSLOT_RAMP_DCS1800_LID:
      {
   #ifdef __DCS1800__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand1800) )
         {
            l1cal_interRampData_T *apc = (l1cal_interRampData_T *)L1_ALLOC_BUF( sizeof( l1cal_interRampData_T ) );
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_INTERSLOT_RAMP_DCS1800_LID, 1, (kal_uint8 *)apc, sizeof( l1cal_interRampData_T ) );
            ASSERT(error_no == KAL_TRUE);

            L1D_RF_SetInterSlotRampTable_Pcore( FrequencyBand1800, &apc->interRampData );

            L1_FREE_BUF( apc );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_INTERSLOT_RAMP_PCS1900_LID:
      {
   #ifdef __PCS1900__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand1900) )
         {
            l1cal_interRampData_T *apc = (l1cal_interRampData_T *)L1_ALLOC_BUF( sizeof( l1cal_interRampData_T ) );
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_INTERSLOT_RAMP_PCS1900_LID, 1, (kal_uint8 *)apc, sizeof( l1cal_interRampData_T ) );
            ASSERT(error_no == KAL_TRUE);

            L1D_RF_SetInterSlotRampTable_Pcore( FrequencyBand1900, &apc->interRampData );

            L1_FREE_BUF( apc );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM850_LID:
      {
   #if IS_EPSK_TX_SUPPORT
      #ifdef __GSM850__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand850) )
         {
            l1cal_EPSK_interRampData_T *apc = (l1cal_EPSK_interRampData_T *)L1_ALLOC_BUF( sizeof( l1cal_EPSK_interRampData_T ) );
            kal_int8 i;
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM850_LID, 1, (kal_uint8 *)apc,  sizeof( l1cal_EPSK_interRampData_T ) );
            ASSERT(error_no == KAL_TRUE);

            for ( i = 0; i < 4; i++ )
            {
               L1D_RF_EPSK_SetInterSlotRampTable_Pcore( FrequencyBand850, i, apc->EPSK_interRampData[i] );
            }

            L1_FREE_BUF( apc );
         }
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM900_LID:
      {
   #if IS_EPSK_TX_SUPPORT
      #ifdef __EGSM900__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand900) )
         {
            l1cal_EPSK_interRampData_T *apc = (l1cal_EPSK_interRampData_T *)L1_ALLOC_BUF( sizeof( l1cal_EPSK_interRampData_T ) );
            kal_int8 i;
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM900_LID, 1, (kal_uint8 *)apc,  sizeof( l1cal_EPSK_interRampData_T ) );
            ASSERT(error_no == KAL_TRUE);

            for ( i = 0; i < 4; i++ )
            {
               L1D_RF_EPSK_SetInterSlotRampTable_Pcore( FrequencyBand900, i, apc->EPSK_interRampData[i] );
            }

            L1_FREE_BUF( apc );
         }
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_DCS1800_LID:
      {
   #if IS_EPSK_TX_SUPPORT
      #ifdef __DCS1800__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand1800) )
         {
            l1cal_EPSK_interRampData_T *apc = (l1cal_EPSK_interRampData_T *)L1_ALLOC_BUF( sizeof( l1cal_EPSK_interRampData_T ) );
            kal_int8 i;
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_DCS1800_LID, 1, (kal_uint8 *)apc,  sizeof( l1cal_EPSK_interRampData_T ) );
            ASSERT(error_no == KAL_TRUE);

            for ( i = 0; i < 4; i++ )
            {
               L1D_RF_EPSK_SetInterSlotRampTable_Pcore( FrequencyBand1800, i, apc->EPSK_interRampData[i] );
            }

            L1_FREE_BUF( apc );
         }
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_PCS1900_LID:
      {
   #if IS_EPSK_TX_SUPPORT
      #ifdef __PCS1900__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand1900) )
         {
            l1cal_EPSK_interRampData_T *apc = (l1cal_EPSK_interRampData_T *)L1_ALLOC_BUF( sizeof( l1cal_EPSK_interRampData_T ) );
            kal_int8 i;
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_PCS1900_LID, 1, (kal_uint8 *)apc,  sizeof( l1cal_EPSK_interRampData_T ) );
            ASSERT(error_no == KAL_TRUE);

            for ( i = 0; i < 4; i++ )
            {
               L1D_RF_EPSK_SetInterSlotRampTable_Pcore( FrequencyBand1900, i, apc->EPSK_interRampData[i] );
            }

            L1_FREE_BUF( apc );
         }
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_CRYSTAL_CAPDATA_LID:
      {
         l1cal_crystalCapData_T *xo_cap = (l1cal_crystalCapData_T *)L1_ALLOC_BUF( sizeof( l1cal_crystalCapData_T ) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_CRYSTAL_CAPDATA_LID, 1, (kal_uint8 *)xo_cap,  sizeof( l1cal_crystalCapData_T ) );
         ASSERT(error_no == KAL_TRUE);

         L1D_RF_SetCapID_Pcore( xo_cap->cap_id );

         L1_FREE_BUF( xo_cap );
      }
      break;

      case NVRAM_EF_L1_GMSK_TX_POWER_ROLLBACK_TABLE_LID:
      {
   #if IS_GPRS
         l1cal_tx_power_rollback_T *tx_power_rollback = (l1cal_tx_power_rollback_T *)L1_ALLOC_BUF( sizeof( l1cal_tx_power_rollback_T ) );
         kal_int8 i;
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_GMSK_TX_POWER_ROLLBACK_TABLE_LID, 1, (kal_uint8 *)tx_power_rollback,  sizeof( l1cal_tx_power_rollback_T ) );
         ASSERT(error_no == KAL_TRUE);

         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            L1D_RF_SetTxPowerRollbackData_Pcore( i,  &tx_power_rollback->rollback_data[i] );
         }

         L1_FREE_BUF( tx_power_rollback );
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_TX_POWER_ROLLBACK_TABLE_LID:
      {
   #if IS_GPRS
      #if IS_EGPRS
         l1cal_tx_power_rollback_T *tx_power_rollback = (l1cal_tx_power_rollback_T *)L1_ALLOC_BUF( sizeof( l1cal_tx_power_rollback_T ) );
         kal_int8 i;
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_EPSK_TX_POWER_ROLLBACK_TABLE_LID, 1, (kal_uint8 *)tx_power_rollback,  sizeof( l1cal_tx_power_rollback_T ) );
         ASSERT(error_no == KAL_TRUE);

         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            L1D_RF_SetTxPowerRollbackData_EPSK_Pcore( i,  &tx_power_rollback->rollback_data[i] );
         }

         L1_FREE_BUF( tx_power_rollback );
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_GMSK_TXPC_LID:
      {
   #if IS_TX_POWER_CONTROL_SUPPORT
         l1cal_txpc_T *txpc = (l1cal_txpc_T *)L1_ALLOC_BUF( sizeof( l1cal_txpc_T ) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_GMSK_TXPC_LID, 1, (kal_uint8 *)txpc,   sizeof( l1cal_txpc_T ) );
         ASSERT(error_no == KAL_TRUE);
         kal_mem_cpy(GMSK_TXPC_PCORE_ptr, txpc , sizeof(l1cal_txpc_T) );
         L1_FREE_BUF( txpc );
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_TXPC_LID:
      {
   #if IS_TX_POWER_CONTROL_SUPPORT
      #if IS_EPSK_TX_SUPPORT
         l1cal_txpc_T *txpc = (l1cal_txpc_T *)L1_ALLOC_BUF( sizeof( l1cal_txpc_T ) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_EPSK_TXPC_LID, 1, (kal_uint8 *)txpc,   sizeof( l1cal_txpc_T ) );
         ASSERT(error_no == KAL_TRUE);
         kal_mem_cpy(EPSK_TXPC_PCORE_ptr, txpc , sizeof(l1cal_txpc_T) );
         L1_FREE_BUF( txpc );
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_LNAPATHLOSS_LID:
      {
   #if IS_MULTI_LNA_MODE_CALIBRATION_SUPPORT
         l1cal_lnaPathLoss_T *lna = (l1cal_lnaPathLoss_T *)L1_ALLOC_BUF( sizeof( l1cal_lnaPathLoss_T ) );
         kal_int8 i;
         kal_bool error_no;
         error_no = nvram_external_read_data(NVRAM_EF_L1_LNAPATHLOSS_LID, 1, (kal_uint8 *)lna,   sizeof( l1cal_lnaPathLoss_T ) );
         ASSERT(error_no == KAL_TRUE);
         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            L1D_RF_SetLnaPathLossTable_Pcore( i,  lna->lnaPathLoss[i] );
         }
         L1_FREE_BUF( lna );
   #endif
      }
      break;

      case NVRAM_EF_L1_LNAPATHLOSS_RXD_LID:
      {
   #if IS_2G_RXD_SUPPORT      
      #if IS_MULTI_LNA_MODE_CALIBRATION_SUPPORT
         l1cal_lnaPathLoss_T *lna = (l1cal_lnaPathLoss_T *)L1_ALLOC_BUF( sizeof( l1cal_lnaPathLoss_T ) );
         kal_int8 i;
         kal_bool error_no;
         error_no = nvram_external_read_data(NVRAM_EF_L1_LNAPATHLOSS_RXD_LID, 1, (kal_uint8 *)lna,   sizeof( l1cal_lnaPathLoss_T ) );
         ASSERT(error_no == KAL_TRUE);
         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            L1D_RF_SetLnaPathLossTable_RXD_Pcore( i,  lna->lnaPathLoss[i] );
         }
         L1_FREE_BUF( lna );
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_TEMPERATURE_ADC_LID:
      {
   #if IS_TX_POWER_CONTROL_SUPPORT
      #if !defined(__GL1_MULTI_MODE__) || !defined(__MTK_UL1_FDD__) || IS_MULTI_RAT_TADC_SHARE_SUPPORT
         l1cal_temperatureADC_T *temp_adc = (l1cal_temperatureADC_T *)L1_ALLOC_BUF( sizeof( l1cal_temperatureADC_T ) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_TEMPERATURE_ADC_LID, 1, (kal_uint8 *)temp_adc,   sizeof( l1cal_temperatureADC_T ) );
         ASSERT(error_no == KAL_TRUE);
         L1D_RF_TXPC_Set_Temp_ADC_Pcore( (sTEMPERATURE_ADC_L1CAL*)temp_adc );
         L1_FREE_BUF( temp_adc );
      #endif /*!defined(__GL1_MULTI_MODE__) || !defined(__MTK_UL1_FDD__)|| IS_MULTI_RAT_TADC_SHARE_SUPPORT*/
   #endif /* IS_TX_POWER_CONTROL_SUPPORT */
      }
      break;

      case NVRAM_EF_L1_2G_RF_PARAMETER_LID:
      {
   #if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
         l1d_rf_custom_input_data_T *buffer = (l1d_rf_custom_input_data_T *)L1_ALLOC_BUF( sizeof(l1d_rf_custom_input_data_T) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_2G_RF_PARAMETER_LID, 1, (kal_uint8 *)buffer, sizeof(l1d_rf_custom_input_data_T));
         ASSERT(error_no == KAL_TRUE);

         kal_mem_cpy(RF_CUSTOM_INPUT_DATA_PCORE_ptr, buffer , sizeof(l1d_rf_custom_input_data_T) );
         L1_FREE_BUF( buffer );
   #endif
      }
      break;

      case NVRAM_EF_L1_CLOAD_FREQ_OFFSET_LID:
      {
   #if IS_32K_CRYSTAL_REMOVAL_SUPPORT
         l1cal_cload_freq_offset_T *freq_offset = (l1cal_cload_freq_offset_T *)L1_ALLOC_BUF( sizeof( l1cal_cload_freq_offset_T ) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_CLOAD_FREQ_OFFSET_LID, 1, (kal_uint8 *)freq_offset,   sizeof( l1cal_cload_freq_offset_T ) );
         ASSERT(error_no == KAL_TRUE);
         L1D_RF_SetCLoadFreqOffset_Pcore( (kal_int32*)freq_offset );
         L1_FREE_BUF( freq_offset );
   #endif /*IS_32K_CRYSTAL_REMOVAL_SUPPORT*/
      }
      break;

      case NVRAM_EF_L1_GAINRF_LID:
      {
   #if IS_TX_GAIN_RF_CALIBRATION_SUPPORT
         l1cal_gainrf_T *gain = (l1cal_gainrf_T *)L1_ALLOC_BUF( sizeof( l1cal_gainrf_T ) );
         kal_int8 i;
         kal_bool error_no;
         error_no = nvram_external_read_data(NVRAM_EF_L1_GAINRF_LID, 1, (kal_uint8 *)gain,   sizeof( l1cal_gainrf_T ) );
         ASSERT(error_no == KAL_TRUE);

         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            L1D_RF_SetGainRF_Pcore( i, gain->gain_rf[i] );
         }

         L1_FREE_BUF( gain );
   #endif
      }
      break;

      case NVRAM_EF_L1_RFC_LID:
      {
   #if IS_2G_MMPOC_SUPPORT
         l1cal_mmrfc_result_T *rfc_result = (l1cal_mmrfc_result_T *)L1_ALLOC_BUF( sizeof( l1cal_mmrfc_result_T ) );
         kal_bool error_no;
         error_no = nvram_external_read_data(NVRAM_EF_L1_RFC_LID, 1, (kal_uint8 *)rfc_result,   sizeof( l1cal_mmrfc_result_T ) );
         ASSERT(error_no == KAL_TRUE);

         L1D_RF_Set_RFC_Result_Pcore( rfc_result );
         L1_FREE_BUF( rfc_result );
   #endif
      }
      break;

         
      case NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM850_LID:
      {
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         tx_power_offset_t *tx_power_offset = (tx_power_offset_t *)L1_ALLOC_BUF( sizeof( tx_power_offset_t ) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM850_LID, 1, (kal_uint8 *)tx_power_offset,  sizeof( tx_power_offset_t ) );
         ASSERT(error_no == KAL_TRUE);
         L1D_RF_SetTxPowerOffsetData_GMSK_Pcore( FrequencyBand850,  (tx_power_offset_t*)tx_power_offset);
         L1_FREE_BUF( tx_power_offset );
   #endif
      }
      break;

      case NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM900_LID:
      {
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         tx_power_offset_t *tx_power_offset = (tx_power_offset_t *)L1_ALLOC_BUF( sizeof( tx_power_offset_t ) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM900_LID, 1, (kal_uint8 *)tx_power_offset,  sizeof( tx_power_offset_t ) );
         ASSERT(error_no == KAL_TRUE);
         L1D_RF_SetTxPowerOffsetData_GMSK_Pcore( FrequencyBand900,  (tx_power_offset_t*)tx_power_offset);
         L1_FREE_BUF( tx_power_offset );
   #endif
      }
      break;

      case NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_DCS_LID:
      {
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         tx_power_offset_t *tx_power_offset = (tx_power_offset_t *)L1_ALLOC_BUF( sizeof( tx_power_offset_t ) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_DCS_LID, 1, (kal_uint8 *)tx_power_offset,  sizeof( tx_power_offset_t ) );
         ASSERT(error_no == KAL_TRUE);
         L1D_RF_SetTxPowerOffsetData_GMSK_Pcore( FrequencyBand1800,  (tx_power_offset_t*)tx_power_offset);
         L1_FREE_BUF( tx_power_offset );
   #endif
      }
      break;

      case NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_PCS_LID:
      {
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         tx_power_offset_t *tx_power_offset = (tx_power_offset_t *)L1_ALLOC_BUF( sizeof( tx_power_offset_t ) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_PCS_LID, 1, (kal_uint8 *)tx_power_offset,  sizeof( tx_power_offset_t ) );
         ASSERT(error_no == KAL_TRUE);
         L1D_RF_SetTxPowerOffsetData_GMSK_Pcore( FrequencyBand1900,  (tx_power_offset_t*)tx_power_offset);
         L1_FREE_BUF( tx_power_offset );
   #endif
	  }
      break;

      case NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM850_LID:
      {
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT

         tx_power_offset_t *tx_power_offset = (tx_power_offset_t *)L1_ALLOC_BUF( sizeof( tx_power_offset_t ) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM850_LID, 1, (kal_uint8 *)tx_power_offset,  sizeof( tx_power_offset_t ) );
         ASSERT(error_no == KAL_TRUE);
         L1D_RF_SetTxPowerOffsetData_EPSK_Pcore( FrequencyBand850,  (tx_power_offset_t*)tx_power_offset);
         L1_FREE_BUF( tx_power_offset );
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM900_LID:
      {
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         tx_power_offset_t *tx_power_offset = (tx_power_offset_t *)L1_ALLOC_BUF( sizeof( tx_power_offset_t ) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM900_LID, 1, (kal_uint8 *)tx_power_offset,  sizeof( tx_power_offset_t ) );
         ASSERT(error_no == KAL_TRUE);
         L1D_RF_SetTxPowerOffsetData_EPSK_Pcore( FrequencyBand900,  (tx_power_offset_t*)tx_power_offset);
         L1_FREE_BUF( tx_power_offset );
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_DCS_LID:
      {
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         tx_power_offset_t *tx_power_offset = (tx_power_offset_t *)L1_ALLOC_BUF( sizeof( tx_power_offset_t ) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_DCS_LID, 1, (kal_uint8 *)tx_power_offset,  sizeof( tx_power_offset_t ) );
         ASSERT(error_no == KAL_TRUE);
         L1D_RF_SetTxPowerOffsetData_EPSK_Pcore( FrequencyBand1800,  (tx_power_offset_t*)tx_power_offset);
         L1_FREE_BUF( tx_power_offset );
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_PCS_LID:
      {
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         tx_power_offset_t *tx_power_offset = (tx_power_offset_t *)L1_ALLOC_BUF( sizeof( tx_power_offset_t ) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_PCS_LID, 1, (kal_uint8 *)tx_power_offset,  sizeof( tx_power_offset_t ) );
         ASSERT(error_no == KAL_TRUE);
         L1D_RF_SetTxPowerOffsetData_EPSK_Pcore( FrequencyBand1900,  (tx_power_offset_t*)tx_power_offset);
         L1_FREE_BUF( tx_power_offset );
   #endif
      }
      break;

      case NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM850_LID:
         {
   #if IS_MIPI_SUPPORT
      #ifdef __GSM850__
            l1cal_mipi_ctrl_table_band_T *table = (l1cal_mipi_ctrl_table_band_T *)L1_ALLOC_BUF( sizeof(l1cal_mipi_ctrl_table_band_T) );
            kal_bool error_no;

            error_no = nvram_external_read_data( NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM850_LID, 1, (kal_uint8 *)table,  sizeof(l1cal_mipi_ctrl_table_band_T) );
            ASSERT(error_no == KAL_TRUE);
            L1D_RF_SetMIPITable_Pcore( FrequencyBand850, (l1cal_mipi_ctrl_table_band_T *)table );
            L1_FREE_BUF( table );         
      #endif
   #endif
         }
         break;

         case NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM900_LID:
         {
   #if IS_MIPI_SUPPORT
      #ifdef __EGSM900__
            l1cal_mipi_ctrl_table_band_T *table = (l1cal_mipi_ctrl_table_band_T *)L1_ALLOC_BUF( sizeof(l1cal_mipi_ctrl_table_band_T) );
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM900_LID, 1, (kal_uint8 *)table,   sizeof( l1cal_mipi_ctrl_table_band_T ) );
            ASSERT(error_no == KAL_TRUE);
            L1D_RF_SetMIPITable_Pcore( FrequencyBand900, (l1cal_mipi_ctrl_table_band_T *)table );
            L1_FREE_BUF( table );
      #endif
   #endif
         }
         break;

         case NVRAM_EF_L1_MIPI_CTRL_TABLE_DCS1800_LID:
         {
   #if IS_MIPI_SUPPORT
      #ifdef __DCS1800__
            l1cal_mipi_ctrl_table_band_T *table = (l1cal_mipi_ctrl_table_band_T *)L1_ALLOC_BUF( sizeof(l1cal_mipi_ctrl_table_band_T) );
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_MIPI_CTRL_TABLE_DCS1800_LID, 1, (kal_uint8 *)table,   sizeof( l1cal_mipi_ctrl_table_band_T ) );
            ASSERT(error_no == KAL_TRUE);
            L1D_RF_SetMIPITable_Pcore( FrequencyBand1800, (l1cal_mipi_ctrl_table_band_T *)table );
            L1_FREE_BUF( table );
      #endif
   #endif
         }
         break;

         case NVRAM_EF_L1_MIPI_CTRL_TABLE_PCS1900_LID:
         {
   #if IS_MIPI_SUPPORT
      #ifdef __PCS1900__

            l1cal_mipi_ctrl_table_band_T *table = (l1cal_mipi_ctrl_table_band_T *)L1_ALLOC_BUF( sizeof(l1cal_mipi_ctrl_table_band_T) );
            kal_bool error_no;

            error_no = nvram_external_read_data(NVRAM_EF_L1_MIPI_CTRL_TABLE_PCS1900_LID, 1, (kal_uint8 *)table,   sizeof( l1cal_mipi_ctrl_table_band_T ) );
            ASSERT(error_no == KAL_TRUE);
            L1D_RF_SetMIPITable_Pcore( FrequencyBand1900, (l1cal_mipi_ctrl_table_band_T *)table );
            L1_FREE_BUF( table );
      #endif
   #endif
         }
         break;

      case NVRAM_EF_L1_TAS_CUSTOM_PARAMES_LID:
      {
   #if IS_2G_TAS_SUPPORT
         L1D_CUSTOM_TAS_NVRAM_T* buffer = ( L1D_CUSTOM_TAS_NVRAM_T*)L1_ALLOC_BUF( sizeof(L1D_CUSTOM_TAS_NVRAM_T) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_TAS_CUSTOM_PARAMES_LID, 1, (kal_uint8 *)buffer, sizeof(L1D_CUSTOM_TAS_NVRAM_T));
         ASSERT(error_no == KAL_TRUE);

         kal_mem_cpy(TAS_CUSTOM_PARAMS_PCORE_ptr, buffer , sizeof(L1D_CUSTOM_TAS_NVRAM_T) );
         L1_FREE_BUF( buffer );
   #endif
      }
      break;
      case NVRAM_EF_L1_TAS_CUSTOM_FE_PARAMS_LID:
      {
   #if IS_2G_TAS_SUPPORT
         L1D_CUSTOM_TAS_FE_NVRAM_T* buffer = ( L1D_CUSTOM_TAS_FE_NVRAM_T*)L1_ALLOC_BUF( sizeof(L1D_CUSTOM_TAS_FE_NVRAM_T) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_TAS_CUSTOM_FE_PARAMS_LID, 1, (kal_uint8 *)buffer, sizeof(L1D_CUSTOM_TAS_FE_NVRAM_T));
         ASSERT(error_no == KAL_TRUE);

         kal_mem_cpy(TAS_CUSTOM_PARAMS_FE_PCORE_ptr, buffer , sizeof(L1D_CUSTOM_TAS_FE_NVRAM_T) );
         L1_FREE_BUF( buffer );
   #endif
      }
      break;
      case NVRAM_EF_L1_TAS_CUSTOM_INHERIT_LTE_BAND_LID:
      {
   #if IS_2G_TAS_INHERIT_4G_ANT
         L1D_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T* buffer = ( L1D_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T*)L1_ALLOC_BUF( sizeof(L1D_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_TAS_CUSTOM_INHERIT_LTE_BAND_LID, 1, (kal_uint8 *)buffer, sizeof(L1D_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T));
         ASSERT(error_no == KAL_TRUE);

         kal_mem_cpy(L1_TAS_CUSTOM_INHERIT_LTE_ANT_TABLE_PCORE_ptr, buffer , sizeof(L1D_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T) );
         L1_FREE_BUF( buffer );
   #endif
      }
      break;
      
      case NVRAM_EF_L1_DAT_CUSTOM_FE_ROUTE_PARAMES_LID:
      {
   #if IS_2G_DAT_SUPPORT
         L1D_CUSTOM_DAT_FE_ROUTE_NVRAM_T* buffer = ( L1D_CUSTOM_DAT_FE_ROUTE_NVRAM_T*)L1_ALLOC_BUF( sizeof(L1D_CUSTOM_DAT_FE_ROUTE_NVRAM_T) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_DAT_CUSTOM_FE_ROUTE_PARAMES_LID, 1, (kal_uint8 *)buffer, sizeof(L1D_CUSTOM_DAT_FE_ROUTE_NVRAM_T));
         ASSERT(error_no == KAL_TRUE);

         kal_mem_cpy(DAT_CUSTOM_PARAMS_FE_ROUTE_PPCORE_ptr, buffer , sizeof(L1D_CUSTOM_DAT_FE_ROUTE_NVRAM_T) );
         L1_FREE_BUF( buffer );
   #endif
      }
      break;
      case NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_A_PARAMES_LID:
      {
   #if IS_2G_DAT_SUPPORT
         L1D_CUSTOM_DAT_FE_CAT_A_NVRAM_T* buffer = ( L1D_CUSTOM_DAT_FE_CAT_A_NVRAM_T*)L1_ALLOC_BUF( sizeof(L1D_CUSTOM_DAT_FE_CAT_A_NVRAM_T) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_A_PARAMES_LID, 1, (kal_uint8 *)buffer, sizeof(L1D_CUSTOM_DAT_FE_CAT_A_NVRAM_T));
         ASSERT(error_no == KAL_TRUE);

         kal_mem_cpy(DAT_CUSTOM_PARAMS_FE_CAT_A_PPCORE_ptr, buffer , sizeof(L1D_CUSTOM_DAT_FE_CAT_A_NVRAM_T) );
         L1_FREE_BUF( buffer );
   #endif
      }
      break;      
      case NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_B_PARAMES_LID:
      {
   #if IS_2G_DAT_SUPPORT
         L1D_CUSTOM_DAT_FE_CAT_B_NVRAM_T* buffer = ( L1D_CUSTOM_DAT_FE_CAT_B_NVRAM_T*)L1_ALLOC_BUF( sizeof(L1D_CUSTOM_DAT_FE_CAT_B_NVRAM_T) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_B_PARAMES_LID, 1, (kal_uint8 *)buffer, sizeof(L1D_CUSTOM_DAT_FE_CAT_B_NVRAM_T));
         ASSERT(error_no == KAL_TRUE);

         kal_mem_cpy(DAT_CUSTOM_PARAMS_FE_CAT_B_PPCORE_ptr, buffer , sizeof(L1D_CUSTOM_DAT_FE_CAT_B_NVRAM_T) );
         L1_FREE_BUF( buffer );
   #endif
      }
      break;
      case NVRAM_EF_L1_ANT_RXPWR_OFFSET_LID:
      {
   #if IS_ANT_RXPWR_OFFSET_SUPPORT
         sL1D_ANT_RxPWR_Offset_v2_T* buffer = (sL1D_ANT_RxPWR_Offset_v2_T*)L1_ALLOC_BUF(sizeof(sL1D_ANT_RxPWR_Offset_v2_T));
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_ANT_RXPWR_OFFSET_LID, 1, (kal_uint8 *)buffer, sizeof(sL1D_ANT_RxPWR_Offset_v2_T));
         ASSERT(error_no == KAL_TRUE);

         kal_mem_cpy(ANT_RXPWR_OFFSET_PARAMS_PCORE_ptr, buffer , sizeof(sL1D_ANT_RxPWR_Offset_v2_T));
         L1_FREE_BUF( buffer );
   #endif
      }
      break;
      case NVRAM_EF_L1_CUSTOM_BAND_SUPPORT_LID:
      {
         sl1CustomBandSupport* buffer = ( sl1CustomBandSupport*)L1_ALLOC_BUF( sizeof(sl1CustomBandSupport) );
         kal_bool error_no;
   
         error_no = nvram_external_read_data(NVRAM_EF_L1_CUSTOM_BAND_SUPPORT_LID, 1, (kal_uint8 *)buffer, sizeof(sl1CustomBandSupport));
         ASSERT(error_no == KAL_TRUE);
   
         kal_mem_cpy(l1d_custom_band_support_PCORE_ptr, buffer , sizeof(sl1CustomBandSupport) );
         L1_FREE_BUF( buffer );
      }
      break;
      case NVRAM_EF_L1_SAR_TX_BACKOFF_DB_CUSTOM_PARAMES_LID:
      {
   #if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
         L1D_CUSTOM_SAR_TX_BACKOFF_DB_NVRAM_T* buffer = (L1D_CUSTOM_SAR_TX_BACKOFF_DB_NVRAM_T *)L1_ALLOC_BUF( sizeof(L1D_CUSTOM_SAR_TX_BACKOFF_DB_NVRAM_T) );
         kal_bool error_no;

         error_no = nvram_external_read_data(NVRAM_EF_L1_SAR_TX_BACKOFF_DB_CUSTOM_PARAMES_LID, 1, (kal_uint8 *)buffer, sizeof(L1D_CUSTOM_SAR_TX_BACKOFF_DB_NVRAM_T) );
         ASSERT(error_no == KAL_TRUE);

         kal_mem_cpy(CUSTOM_SAR_TX_BACKOFF_dB_PCORE_ptr, buffer , sizeof(L1D_CUSTOM_SAR_TX_BACKOFF_DB_NVRAM_T));

         L1_FREE_BUF( buffer );
   #endif
      }
      break;
      default:
         //ASSERT( KAL_FALSE );
         break;
   } /* End of switch ( initCal ) */

#endif /* __MTK_TARGET__ */
#endif /* NVRAM_NOT_PRESENT */
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_PcoreUpdate2SHM_ByDefaultCustom( kal_uint32 cal_lid  )
{
   switch ( (nvram_lid_enum)cal_lid )
   {
      case NVRAM_EF_L1_AGCPATHLOSS_LID:
      {
         int i;
         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            L1D_RF_SetPathLossTable_Pcore( i,  (void*)AGC_PATHLOSS_TABLE_SetDefault[i] );
         }
      }
      break;

      case NVRAM_EF_L1_AGCPATHLOSS_RXD_LID:
      {
      #if IS_2G_RXD_SUPPORT

         int i;
         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            L1D_RF_SetPathLossTable_RXD_Pcore( i,  (void*)AGC_PATHLOSS_RXD_TABLE_SetDefault[i] );
         }
      #endif
      }
      break;

      case NVRAM_EF_L1_2G_RF_RX_PARAMETER_EXT_LID:
      {
      #if IS_RX_POWER_OFFSET_SUPPORT
        kal_mem_cpy(AGCLNA_PL_OFFSET_SETTING_Pcore,&AGCLNA_PL_OFFSET_SETTING_SetDefault,sizeof(s2G_RF_RX_PARAMETER_EXT));
      #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
      }
      break;

      case NVRAM_EF_L1_AGCPATHLOSS_OFFSET_LID:
      {
      #if IS_RX_POWER_OFFSET_SUPPORT
         int i;
         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            L1D_RF_SetPathLoss_Offset_Table_Pcore( i,  (void*)AGCLNA_PATHLOSS_OFFSET_TABLE_SetDefault[i] );
         }
      #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
      }

      break;

      case NVRAM_EF_L1_AGCPATHLOSS_OFFSET_RXD_LID:
      {
      #if IS_2G_RXD_SUPPORT
         #if IS_RX_POWER_OFFSET_SUPPORT
         int i;
         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            L1D_RF_SetPathLoss_Offset_Table_RXD_Pcore( i,  (void*)AGCLNA_PATHLOSS_RXD_OFFSET_TABLE_SetDefault[i] );
         }
         #endif/*IS_RX_POWER_OFFSET_SUPPORT*/
      #endif /*IS_2G_RXD_SUPPORT*/
      }
      break;


      case NVRAM_EF_L1_RAMPTABLE_GSM850_LID:
      {
   #ifdef __GSM850__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand850) )
         {
            L1D_RF_SetRampTable_Pcore( FrequencyBand850, (void*)RampData_SetDefault[FrequencyBand850] );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_RAMPTABLE_GSM900_LID:
      {
   #ifdef __EGSM900__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand900) )
         {
            L1D_RF_SetRampTable_Pcore( FrequencyBand900, (void*)RampData_SetDefault[FrequencyBand900] );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_RAMPTABLE_DCS1800_LID:
      {
   #ifdef __DCS1800__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand1800) )
         {
            L1D_RF_SetRampTable_Pcore( FrequencyBand1800, (void*)RampData_SetDefault[FrequencyBand1800] );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_RAMPTABLE_PCS1900_LID:
      {
   #ifdef __PCS1900__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand1900) )
         {
            L1D_RF_SetRampTable_Pcore( FrequencyBand1900, (void*)RampData_SetDefault[FrequencyBand1900] );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_RAMPTABLE_GSM850_LID:
      {
   #if IS_EPSK_TX_SUPPORT
      #ifdef __GSM850__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand850) )
         {
            L1D_RF_SetRampTableEPSK_Pcore( FrequencyBand850, (void*)RampData_EPSK_SetDefault[FrequencyBand850] );
         }
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_RAMPTABLE_GSM900_LID:
      {
   #if IS_EPSK_TX_SUPPORT
      #ifdef __EGSM900__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand900) )
         {
            L1D_RF_SetRampTableEPSK_Pcore( FrequencyBand900, (void*)RampData_EPSK_SetDefault[FrequencyBand900] );
         }
         #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_RAMPTABLE_DCS1800_LID:
      {
   #if IS_EPSK_TX_SUPPORT
      #ifdef __DCS1800__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand1800) )
         {
            L1D_RF_SetRampTableEPSK_Pcore( FrequencyBand1800, (void*)RampData_EPSK_SetDefault[FrequencyBand1800] );
         }
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_RAMPTABLE_PCS1900_LID:
      {
   #if IS_EPSK_TX_SUPPORT
      #ifdef __PCS1900__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand1900) )
         {
            L1D_RF_SetRampTableEPSK_Pcore( FrequencyBand1900, (void*)RampData_EPSK_SetDefault[FrequencyBand1900] );
         }
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_AFCDATA_LID:
      {
         L1D_SetAFcData_Pcore( afc_dac_default, afc_inv_slope );
      }
      break;

      case NVRAM_EF_L1_TXIQ_LID:
      {
         L1D_RF_SetBBTXParameters_Pcore( (void*)&BBTXParameters );
      }
      break;

      case NVRAM_EF_L1_RFSPECIALCOEF_LID:
      {
         L1D_RF_SetRFSpecialCoef_Pcore( &RFSpecialCoef );
      }
      break;

      case NVRAM_EF_L1_WCOEF_RXD_LID:
      {      
   #if IS_2G_RXD_SUPPORT
         L1D_RF_SetWCoef_RXD_Pcore( &RFSpecial_wcoef_rxd );
   #endif
      }
      break;

      case NVRAM_EF_L1_RAS_CUSTOM_PARAMES_LID:
      {
   #if IS_2G_RXD_SUPPORT
         kal_mem_cpy(RAS_CUSTOM_PARAMS_PCORE_ptr, &L1_RAS_Custom_NVRAM_SetDefault , sizeof(L1D_CUSTOM_RAS_NVRAM_T) );
   #endif
      }
      break;

      case NVRAM_EF_L1_INTERSLOT_RAMP_GSM850_LID:
      {
   #ifdef __GSM850__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand850) )
         {
            L1D_RF_SetInterSlotRampTable_Pcore( FrequencyBand850, InterRampData_SetDefault[FrequencyBand850] );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_INTERSLOT_RAMP_GSM900_LID:
      {
   #ifdef __EGSM900__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand900) )
         {
            L1D_RF_SetInterSlotRampTable_Pcore( FrequencyBand900, InterRampData_SetDefault[FrequencyBand900] );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_INTERSLOT_RAMP_DCS1800_LID:
      {
   #ifdef __DCS1800__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand1800) )
         {
             L1D_RF_SetInterSlotRampTable_Pcore( FrequencyBand1800, InterRampData_SetDefault[FrequencyBand1800] );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_INTERSLOT_RAMP_PCS1900_LID:
      {
   #ifdef __PCS1900__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand1900) )
         {
            L1D_RF_SetInterSlotRampTable_Pcore( FrequencyBand1900, InterRampData_SetDefault[FrequencyBand1900] );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM850_LID:
      {
   #if IS_EPSK_TX_SUPPORT
      #ifdef __GSM850__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand850) )
         {  kal_int8 i;
            for ( i = 0; i < 4; i++ )
            {
               L1D_RF_EPSK_SetInterSlotRampTable_Pcore( FrequencyBand850, i,  (void*)*(EPSK_InterRampData_SetDefault[FrequencyBand850])[i] );
            }
         }
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_GSM900_LID:
      {
   #if IS_EPSK_TX_SUPPORT
      #ifdef __EGSM900__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand900) )
         {  kal_int8 i;
            for ( i = 0; i < 4; i++ )
            {
               L1D_RF_EPSK_SetInterSlotRampTable_Pcore( FrequencyBand900, i,  (void*)*(EPSK_InterRampData_SetDefault[FrequencyBand900])[i] );
            }
         }
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_DCS1800_LID:
      {
   #if IS_EPSK_TX_SUPPORT
      #ifdef __DCS1800__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand1800) )
         {  kal_int8 i;
            for ( i = 0; i < 4; i++ )
            {
               L1D_RF_EPSK_SetInterSlotRampTable_Pcore( FrequencyBand1800, i, (void*)*(EPSK_InterRampData_SetDefault[FrequencyBand1800])[i] );
            }
         }
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_INTERSLOT_RAMP_PCS1900_LID:
      {
   #if IS_EPSK_TX_SUPPORT
      #ifdef __PCS1900__
         kal_uint32  l1d_band_support = L1D_GetBandSupport_PCore();
         if( l1d_band_support & (1<<FrequencyBand1900) )
         {  kal_int8 i;
            for ( i = 0; i < 4; i++ )
            {
               L1D_RF_EPSK_SetInterSlotRampTable_Pcore( FrequencyBand1900, i, (void*)*(EPSK_InterRampData_SetDefault[FrequencyBand1900])[i] );
            }
         }
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_CRYSTAL_CAPDATA_LID:
      {
         L1D_RF_SetCapID_Pcore( XO_CapID);
      }
      break;

      case NVRAM_EF_L1_GMSK_TX_POWER_ROLLBACK_TABLE_LID:
      {
   #if IS_GPRS
         kal_int8 i;
         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            L1D_RF_SetTxPowerRollbackData_Pcore( i,  (void*)tx_power_rollback_gmsk_SetDefault[i] );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_TX_POWER_ROLLBACK_TABLE_LID:
      {
   #if IS_GPRS
      #if IS_EGPRS
         kal_int8 i;
         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            L1D_RF_SetTxPowerRollbackData_EPSK_Pcore( i, (void*)tx_power_rollback_epsk_SetDefault[i] );
         }
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_GMSK_TXPC_LID:
      {
   #if IS_TX_POWER_CONTROL_SUPPORT
         l1cal_txpc_T txpc = {0};
         kal_int8 i;

         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            if(TXADC_Data_SetDefault[i]==0) 
               continue;
            txpc.adc[i]  = *TXADC_Data_SetDefault[i];
         }
         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            txpc.temp[i] = *TXTEMP_Data_SetDefault[i];
         }
         txpc.temperature = ref_temperature;
         txpc.is_calibrated = is_txpc_calibrated;

         kal_mem_cpy(GMSK_TXPC_PCORE_ptr, &txpc , sizeof(l1cal_txpc_T) );
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_TXPC_LID:
      {
   #if IS_TX_POWER_CONTROL_SUPPORT
      #if IS_EPSK_TX_SUPPORT
         l1cal_txpc_T txpc = {0};
         kal_int8 i;

         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            if(TXADC_Data_EPSK_SetDefault[i]==0) 
               continue;
            txpc.adc[i]  = *TXADC_Data_EPSK_SetDefault[i];
            txpc.temp[i] = *TXTEMP_Data_EPSK_SetDefault[i];
         }
         txpc.temperature = ref_temperature;
         txpc.is_calibrated = is_txpc_calibrated;

         kal_mem_cpy(EPSK_TXPC_PCORE_ptr, &txpc , sizeof(l1cal_txpc_T) );
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_LNAPATHLOSS_LID:
      {
   #if IS_MULTI_LNA_MODE_CALIBRATION_SUPPORT
         int i;
         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            L1D_RF_SetLnaPathLossTable_Pcore( i,  (void*)LNA_PATHLOSS_TABLE_SetDefault[i] );
         }
   #endif
      }
      break;

      case NVRAM_EF_L1_LNAPATHLOSS_RXD_LID:
      {      
   #if IS_2G_RXD_SUPPORT
      #if IS_MULTI_LNA_MODE_CALIBRATION_SUPPORT
         int i;
         for ( i = 0; i < FrequencyBandCount; i++ )
         {
            L1D_RF_SetLnaPathLossTable_RXD_Pcore( i,  (void*)LNA_PATHLOSS_RXD_TABLE_SetDefault[i] );
         }
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_TEMPERATURE_ADC_LID:
      {
   #if IS_TX_POWER_CONTROL_SUPPORT
      #if !defined(__GL1_MULTI_MODE__) || !defined(__MTK_UL1_FDD__) || IS_MULTI_RAT_TADC_SHARE_SUPPORT
         L1D_RF_TXPC_Set_Temp_ADC_Pcore( (sTEMPERATURE_ADC_L1CAL*)(&TEMP_DAC_SetDefault));
      #endif /*!defined(__GL1_MULTI_MODE__) || !defined(__MTK_UL1_FDD__)|| IS_MULTI_RAT_TADC_SHARE_SUPPORT*/
   #endif /* IS_TX_POWER_CONTROL_SUPPORT */
      }
      break;

      case NVRAM_EF_L1_2G_RF_PARAMETER_LID:
      {
   #if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
         kal_mem_cpy(RF_CUSTOM_INPUT_DATA_PCORE_ptr, &l1d_rf_custom_input_data_SetDefault , sizeof(l1d_rf_custom_input_data_T) );
   #endif
      }
      break;

      case NVRAM_EF_L1_CLOAD_FREQ_OFFSET_LID:
      {
   #if IS_32K_CRYSTAL_REMOVAL_SUPPORT
         L1D_RF_SetCLoadFreqOffset_Pcore((int *)&CLoad_FreqOffset);
   #endif /*IS_32K_CRYSTAL_REMOVAL_SUPPORT*/
      }
      break;

      case NVRAM_EF_L1_GAINRF_LID:
      {
   #if IS_TX_GAIN_RF_CALIBRATION_SUPPORT
         kal_int8 i;
         for ( i = 0; i < FrequencyBandCount; i++ )
         { L1D_RF_SetGainRF_Pcore(  i, (void*)GAIN_RF_TABLE[i] ); }
   #endif
      }
      break;

      case NVRAM_EF_L1_RFC_LID:
      {
   #if IS_2G_MMPOC_SUPPORT
         L1D_RF_Set_RFC_Result_Pcore( &rfc_data);
   #endif
      }
      break;

      case NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM850_LID:
      {
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         L1D_RF_SetTxPowerOffsetData_GMSK_Pcore( FrequencyBand850,  (tx_power_offset_t*)Tx_Power_Offset_GMSK_SetDefault[FrequencyBand850]);
   #endif
      }
      break;

      case NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_GSM900_LID:
      {
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         L1D_RF_SetTxPowerOffsetData_GMSK_Pcore( FrequencyBand900,  (tx_power_offset_t*)Tx_Power_Offset_GMSK_SetDefault[FrequencyBand900]);
   #endif
      }
      break;

      case NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_DCS_LID:
      {
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         L1D_RF_SetTxPowerOffsetData_GMSK_Pcore( FrequencyBand1800,  (tx_power_offset_t*)Tx_Power_Offset_GMSK_SetDefault[FrequencyBand1800]);
   #endif
      }
      break;

      case NVRAM_EF_L1_GMSK_TX_POWER_OFFSET_PCS_LID:
      {
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         L1D_RF_SetTxPowerOffsetData_GMSK_Pcore( FrequencyBand1900,  (tx_power_offset_t*)Tx_Power_Offset_GMSK_SetDefault[FrequencyBand1900]);
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM850_LID:
      {
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         L1D_RF_SetTxPowerOffsetData_EPSK_Pcore( FrequencyBand850,  (tx_power_offset_t*)Tx_Power_Offset_EPSK_SetDefault[FrequencyBand850]);
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_GSM900_LID:
      {
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         L1D_RF_SetTxPowerOffsetData_EPSK_Pcore( FrequencyBand900,  (tx_power_offset_t*)Tx_Power_Offset_EPSK_SetDefault[FrequencyBand900]);
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_DCS_LID:
      {
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         L1D_RF_SetTxPowerOffsetData_EPSK_Pcore( FrequencyBand1800,  (tx_power_offset_t*)Tx_Power_Offset_EPSK_SetDefault[FrequencyBand1800]);
   #endif
      }
      break;

      case NVRAM_EF_L1_EPSK_TX_POWER_OFFSET_PCS_LID:
      {
   #if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
         L1D_RF_SetTxPowerOffsetData_EPSK_Pcore( FrequencyBand1900,  (tx_power_offset_t*)Tx_Power_Offset_EPSK_SetDefault[FrequencyBand1900]);
   #endif
      }
      break;

      case NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM850_LID:
      {
   #if IS_MIPI_SUPPORT
      #ifdef __GSM850__
         L1D_RF_SetMIPITable_Pcore( FrequencyBand850, (l1cal_mipi_ctrl_table_band_T *)GGE_MIPI_CTRL_TABLE_SetDefault[FrequencyBand850]);
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_MIPI_CTRL_TABLE_GSM900_LID:
      {
   #if IS_MIPI_SUPPORT
      #ifdef __EGSM900__
         L1D_RF_SetMIPITable_Pcore( FrequencyBand900, (l1cal_mipi_ctrl_table_band_T *)GGE_MIPI_CTRL_TABLE_SetDefault[FrequencyBand900]);
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_MIPI_CTRL_TABLE_DCS1800_LID:
      {
   #if IS_MIPI_SUPPORT
      #ifdef __DCS1800__
         L1D_RF_SetMIPITable_Pcore( FrequencyBand1800, (l1cal_mipi_ctrl_table_band_T *)GGE_MIPI_CTRL_TABLE_SetDefault[FrequencyBand1800]);
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_MIPI_CTRL_TABLE_PCS1900_LID:
      {
   #if IS_MIPI_SUPPORT
      #ifdef __PCS1900__
         L1D_RF_SetMIPITable_Pcore( FrequencyBand1900, (l1cal_mipi_ctrl_table_band_T *)GGE_MIPI_CTRL_TABLE_SetDefault[FrequencyBand1900]);
      #endif
   #endif
      }
      break;

      case NVRAM_EF_L1_TAS_CUSTOM_PARAMES_LID:
      {
#if IS_2G_TAS_SUPPORT
         kal_mem_cpy(TAS_CUSTOM_PARAMS_PCORE_ptr, &L1_TAS_Custom_NVRAM_SetDefault, sizeof(L1D_CUSTOM_TAS_NVRAM_T) );
#endif
      }
      break;
      
      case NVRAM_EF_L1_TAS_CUSTOM_FE_PARAMS_LID:
      {
#if IS_2G_TAS_SUPPORT
         kal_mem_cpy(TAS_CUSTOM_PARAMS_FE_PCORE_ptr, &L1_TAS_Custom_FE_NVRAM_SetDefault, sizeof(L1D_CUSTOM_TAS_FE_NVRAM_T) );
#endif
      }
      break;
      
      case NVRAM_EF_L1_TAS_CUSTOM_INHERIT_LTE_BAND_LID:
      {
   #if IS_2G_TAS_INHERIT_4G_ANT
         kal_mem_cpy(L1_TAS_CUSTOM_INHERIT_LTE_ANT_TABLE_PCORE_ptr, &L1_TAS_Custom_InheritLteAntTable_SetDefault, sizeof(L1D_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T) );
   #endif
      }
      break;
      case NVRAM_EF_L1_DAT_CUSTOM_FE_ROUTE_PARAMES_LID:
      {
#if IS_2G_DAT_SUPPORT
         kal_mem_cpy(DAT_CUSTOM_PARAMS_FE_ROUTE_PPCORE_ptr, &L1_DAT_Custom_FE_ROUTE_NVRAM_SetDefault, sizeof(L1D_CUSTOM_DAT_FE_ROUTE_NVRAM_T) );
#endif
      }
      break;     
      case NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_A_PARAMES_LID:
      {
#if IS_2G_DAT_SUPPORT
         kal_mem_cpy(DAT_CUSTOM_PARAMS_FE_CAT_A_PPCORE_ptr, &L1_DAT_Custom_FE_CAT_A_NVRAM_SetDefault, sizeof(L1D_CUSTOM_DAT_FE_CAT_A_NVRAM_T) );
#endif
      }
      break;     
      case NVRAM_EF_L1_DAT_CUSTOM_FE_CAT_B_PARAMES_LID:
      {
#if IS_2G_DAT_SUPPORT
         kal_mem_cpy(DAT_CUSTOM_PARAMS_FE_CAT_B_PPCORE_ptr, &L1_DAT_Custom_FE_CAT_B_NVRAM_SetDefault, sizeof(L1D_CUSTOM_DAT_FE_CAT_B_NVRAM_T) );
#endif
      }
      break;
      case NVRAM_EF_L1_ANT_RXPWR_OFFSET_LID:
      {
#if IS_ANT_RXPWR_OFFSET_SUPPORT
         kal_mem_cpy(ANT_RXPWR_OFFSET_PARAMS_PCORE_ptr, &L1D_ANT_RxPWR_Offset_v2_NVRAM_SetDefault, sizeof(sL1D_ANT_RxPWR_Offset_v2_T) );
#endif
      }
      break;
      case NVRAM_EF_L1_CUSTOM_BAND_SUPPORT_LID:
      {
         kal_mem_cpy(l1d_custom_band_support_PCORE_ptr, &l1d_custom_band_support_SetDefault, sizeof(l1cal_l1CustomBandSupport_T));

      }
      break;

      case NVRAM_EF_L1_SAR_TX_BACKOFF_DB_CUSTOM_PARAMES_LID:
      {
#if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
         kal_mem_cpy(CUSTOM_SAR_TX_BACKOFF_dB_PCORE_ptr, &L1_Custom_SAR_TX_BACKOFF_dB_SetDefault , sizeof(L1D_CUSTOM_SAR_TX_BACKOFF_DB_NVRAM_T) );
#endif
      }
      break;
      default:
       //ASSERT( KAL_FALSE );
         break;
   } /* End of switch ( initCal ) */
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_MMRF_PcoreNvramUpdate2SHM(void)
{
#ifdef __MTK_TARGET__
   #ifndef NVRAM_NOT_PRESENT
   kal_uint32  initCal = 0;
   L1D_RF_Init_SpecialCoef();   // for special coefficient init before moving data from Pcore to L1core
   #if IS_2G_RXD_SUPPORT 
   L1D_RF_Init_Wcoef_RXD();  // for Wcoef RXD part init before moving data from Pcore to L1core
   #endif
   L1D_RF_RFCData_Init_Pcore(); // for 2G RFC Data init before moving data from Pcore to L1core
   for ( initCal = NVRAM_EF_L1_START; initCal <= NVRAM_EF_L1_END; initCal++ )
   {
      L1D_PcoreNvramUpdate2SHM( initCal );
   }
   #endif
#endif
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_MMRF_PcoreUpdate2SHM_ByDefaultCustom(void)
{
   kal_uint32 initCal = 0;
   bandsupportsource = BandSupportFromDefaultCustom;
   L1D_RF_Init_SpecialCoef();   // for special coefficient init before moving data from Pcore to L1core
   #if IS_2G_RXD_SUPPORT 
   L1D_RF_Init_Wcoef_RXD();  // for Wcoef RXD part init before moving data from Pcore to L1core
   #endif
   L1D_RF_RFCData_Init_Pcore(); // for 2G RFC Data init before moving data from Pcore to L1core
   for ( initCal = NVRAM_EF_L1_START; initCal <= NVRAM_EF_L1_END; initCal++ )
   {
      L1D_PcoreUpdate2SHM_ByDefaultCustom( initCal );
   }
}
/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_MMRF_PCoreSHMDataCacheFlush(void)
{   
   int i;

   for(i=1; i<FrequencyBandCount; i++) // start from pointer not equal to zero
   {
      MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(AGC_PATHLOSS_PCORE_TABLE[i], (sizeof(sAGCGAINOFFSET)*PLTABLE_SIZE));
      MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(LNA_PATHLOSS_PCORE_TABLE[i], (sizeof(sLNAGAINOFFSET)*PLTABLE_SIZE));
      MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(RampData_Pcore[i], (sizeof(sRAMPDATA)));

#if IS_RX_POWER_OFFSET_SUPPORT
      MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(AGCLNA_PL_OFFSET_SETTING_Pcore, (sizeof(s2G_RF_RX_PARAMETER_EXT)));
      MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(AGCLNA_PATHLOSS_OFFSET_Pcore[i], (sizeof(sAGCLNAGAINOFFSET)*PLTABLE_SIZE));
#endif/*IS_RX_POWER_OFFSET_SUPPORT*/

#if IS_EPSK_TX_SUPPORT
      MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(RampData_EPSK_Pcore[i], (sizeof(sRAMPDATA)));
#endif
#if IS_EPSK_TX_SUPPORT
      MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(*(EPSK_InterRampData_Pcore[i]), (sizeof(sMIDRAMPDATA)*InterRampData_count));
#elif   (IS_GPRS || IS_MULTISLOT_TX_SUPPORT)
      MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(InterRampData_Pcore[i], (sizeof(sMIDRAMPDATA)));
#endif

#if IS_GPRS
      MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(TX_POWER_ROLLBACK_GMSK_TABLE_Pcore[i], (sizeof(sTX_POWER_ROLLBACK)));
#endif
#if IS_EGPRS
      MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(TX_POWER_ROLLBACK_EPSK_TABLE_Pcore[i], (sizeof(sTX_POWER_ROLLBACK)));
#endif
#if IS_TX_POWER_OFFSET_SUPPORT || IS_SAR_TX_POWER_BACKOFF_SUPPORT
      MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(Tx_Power_Offset_GMSK_Pcore[i], (sizeof(sTX_POWER_OFFSET)));
   #if IS_EPSK_TX_SUPPORT
      MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(Tx_Power_Offset_EPSK_Pcore[i], (sizeof(sTX_POWER_OFFSET)));	
   #endif
#endif
#if IS_TX_GAIN_RF_CALIBRATION_SUPPORT
      MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(GAIN_RF_TABLE_Pcore[i], (sizeof(sTXGAIN_RFDATA)));
#endif
#if IS_MIPI_SUPPORT
      MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(GGE_MIPI_CTRL_TABLE_Pcore[i], (sizeof(sGGE_MIPI_CTRL_TABLE_BAND)));
#endif
   }

#if IS_TX_POWER_CONTROL_SUPPORT
   /* TXPC CALIBRATED pointer re-assign*/
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(GMSK_TXPC_PCORE_ptr, (sizeof(l1cal_txpc_T)));
#endif

#if IS_TX_POWER_CONTROL_SUPPORT
   /* TXPC CALIBRATED pointer re-assign*/
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(EPSK_TXPC_PCORE_ptr, (sizeof(l1cal_txpc_T)));
#endif

#if IS_TX_POWER_CONTROL_SUPPORT
   /* TXPC CALIBRATED pointer re-assign*/
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(TEMPERATURE_ADC_PCORE_ptr, (sizeof(l1cal_temperatureADC_T)));
#endif

#if IS_2G_MMPOC_SUPPORT
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(RFC_DATA_PCORE_ptr, (sizeof(MMRFC_GSM_RESULT_T)));
#endif

   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(AFC_DATA_PCORE_ptr, (sizeof(l1cal_afcData_T)));
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(CAP_DATA_PCORE_ptr, (sizeof(l1cal_crystalCapData_T)));
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(TXIQ_PCORE_ptr, (sizeof(sBBTXParameters)));
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(RFSPECIALCOEF_PCORE_ptr, (sizeof(sRFSpecialCoef)));
#if IS_32K_CRYSTAL_REMOVAL_SUPPORT
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(CLOAD_FREQ_OFFSET_PCORE_ptr, (sizeof(int)));
#endif
#if IS_RF_TOOL_CUSTOMIZATION_SUPPORT_V2
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(RF_CUSTOM_INPUT_DATA_PCORE_ptr, (sizeof(sL1D_RF_CUSTOM_INPUT_DATA)));
#endif
#if IS_2G_TAS_SUPPORT
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(TAS_CUSTOM_PARAMS_PCORE_ptr, (sizeof(L1D_CUSTOM_TAS_NVRAM_T)));
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(TAS_CUSTOM_PARAMS_FE_PCORE_ptr, (sizeof(L1D_CUSTOM_TAS_FE_NVRAM_T)));
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(TAS_CUSTOM_PARAMS_TST_PCORE_ptr, (sizeof(L1D_CUSTOM_TAS_TST_T)));
   #if IS_2G_TAS_INHERIT_4G_ANT
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(L1_TAS_CUSTOM_INHERIT_LTE_ANT_TABLE_PCORE_ptr, (sizeof(L1D_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T)));
   #endif
   
#endif
#if IS_2G_DAT_SUPPORT 
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(DAT_CUSTOM_PARAMS_FE_ROUTE_PPCORE_ptr, (sizeof(L1D_CUSTOM_DAT_FE_ROUTE_NVRAM_T)));
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(DAT_CUSTOM_PARAMS_FE_CAT_A_PPCORE_ptr, (sizeof(L1D_CUSTOM_DAT_FE_CAT_A_NVRAM_T)));   
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(DAT_CUSTOM_PARAMS_FE_CAT_B_PPCORE_ptr, (sizeof(L1D_CUSTOM_DAT_FE_CAT_B_NVRAM_T)));
#endif
#if IS_ANT_RXPWR_OFFSET_SUPPORT
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(ANT_RXPWR_OFFSET_PARAMS_PCORE_ptr, (sizeof(sL1D_ANT_RxPWR_Offset_v2_T)));
#endif
#if IS_EPSK_SW_DRDI_SWITCH_SUPPORT
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(EPSK_SW_DRDI_SWITCH_PCORE_ptr, (sizeof(unsigned char)));
#endif

//#if IS_2G_DYNAMIC_DISPLAY_MIPI_CLOCK_SUPPORT
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(CUSTOM_DISPLAY_PARAMS_MIPI_CLK_PCORE_ptr, (sizeof(L1D_CUSTOM_DISPLAY_MIPI_CLK_NVRAM_T)));
//#endif

   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(l1d_custom_band_support_PCORE_ptr, (sizeof(sl1CustomBandSupport)));

#if IS_2G_RXD_SUPPORT
   #if IS_RX_POWER_OFFSET_SUPPORT
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(AGCLNA_PATHLOSS_RXD_OFFSET_Pcore[i], (sizeof(sAGCLNAGAINOFFSET)*PLTABLE_SIZE));
   #endif
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(LNA_PATHLOSS_RXD_PCORE_TABLE[i], (sizeof(sAGCGAINOFFSET)*PLTABLE_SIZE));
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(AGC_PATHLOSS_RXD_PCORE_TABLE[i], (sizeof(sAGCGAINOFFSET)*PLTABLE_SIZE));
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(WCOEF_RXD_PCORE_ptr, (sizeof(l1cal_wcoef_T)));
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(RAS_CUSTOM_PARAMS_PCORE_ptr, (sizeof(L1D_CUSTOM_RAS_NVRAM_T)));
#endif

#if IS_SAR_TX_POWER_BACKOFF_DB_SUPPORT
   MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(CUSTOM_SAR_TX_BACKOFF_dB_PCORE_ptr, (sizeof(L1D_CUSTOM_SAR_TX_BACKOFF_NVRAM_T)));
#endif
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

void L1D_MMRF_PCoreCUSTOMDynamicInit(void)
{
#ifdef __MTK_TARGET__
   kal_uint16 l1d_Drdi_SetIndex;
   l1d_Drdi_SetIndex = MML1_RF_DRDI_Dynamic_GetParamAddr_FromLocalParams(MML1_RF_2G);
   
   #if IS_2G_TAS_SUPPORT
   kal_mem_cpy(TAS_CUSTOM_PARAMS_TST_PCORE_ptr, l1d_front_end_data[l1d_Drdi_SetIndex].L1_TAS_Custom_TST, sizeof(L1D_CUSTOM_TAS_TST_T) );
   #endif

   #if IS_EPSK_SW_DRDI_SWITCH_SUPPORT
   kal_mem_cpy(EPSK_SW_DRDI_SWITCH_PCORE_ptr, l1d_feature_data[l1d_Drdi_SetIndex].L1D_EPSK_SW_DRDI_enable, sizeof(unsigned char) );
   #endif

   //# IS_2G_DYNAMIC_DISPLAY_MIPI_CLOCK_SUPPORT
   kal_mem_cpy(CUSTOM_DISPLAY_PARAMS_MIPI_CLK_PCORE_ptr, l1d_front_end_data[l1d_Drdi_SetIndex].L1_Custom_DISPLAY_MIPI_CLK_NVRAM, sizeof(L1D_CUSTOM_DISPLAY_MIPI_CLK_NVRAM_T) );
   //#endif

#else //xl1sim
   #if IS_2G_TAS_SUPPORT
   kal_mem_cpy(TAS_CUSTOM_PARAMS_TST_PCORE_ptr, &L1_TAS_Custom_TST_SetDefault, sizeof(L1D_CUSTOM_TAS_TST_T) );
   #endif

   #if IS_EPSK_SW_DRDI_SWITCH_SUPPORT
   kal_mem_cpy(EPSK_SW_DRDI_SWITCH_PCORE_ptr, &L1D_EPSK_SW_DRDI_enable_SetDefault, sizeof(unsigned char) );
   #endif
   
   //# IS_2G_DYNAMIC_DISPLAY_MIPI_CLOCK_SUPPORT
   kal_mem_cpy(CUSTOM_DISPLAY_PARAMS_MIPI_CLK_PCORE_ptr, &L1_DISPLAY_Custom_MIPI_CLK_SetDefault, sizeof(L1D_CUSTOM_DISPLAY_MIPI_CLK_NVRAM_T) );
   //#endif

#endif
}

