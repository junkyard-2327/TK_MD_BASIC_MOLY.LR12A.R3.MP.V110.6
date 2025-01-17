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
 *   l1d_loc_def.h
 *
 * Project:
 * --------
 *   MT6280
 *
 * Description:
 * ------------
 *   Compile option definitoin (for L1D local use only)
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Revision: $
 * $Modtime:  $
 * $Log:      $
 *
 * 01 06 2017 shriram.krishnamurthy
 * [MOLY00223254] [L1D]Bianco BB RF Driver check in 1st wave.
 *
 * 03 11 2016 aman.singh
 * [MOLY00168767] [2GL1D]Elbrus BB porting
 *
 * 07 13 2015 yi-ying.lin
 * [MOLY00127539] [L1D][Modify] Check in the L1D co-TSX modification
 * 	.
 *
 * 06 18 2015 prakash.chaudhary
 * [MOLY00122406] [L1D][modify]Check in BB driver for Jade BB porting
 * 	.
 *
 * 02 10 2015 yi-ying.lin
 * [MOLY00095496] [L1D][Modify] TK6291 CC NVRAM and custom data modification L1D part
 * 	.
 *
 * 01 28 2015 th.yeh
 * [MOLY00085815] [L1D][Modify] TK6291 BB driver porting
 * .
 *
 * 05 29 2014 yi-ying.lin
 * [MOLY00067365] [L1D][Modify] MT6752 L1D driver developement.
 *
 * 12 16 2013 hosen.chen
 * [MOLY00046159] [L1D][Modify] Check in code of MT6595 2G modem driver modification
 * 	.
 *
 * 08 21 2013 yi-ying.lin
 * [MOLY00031276] [L1D][Modify] Fix 2G send AFC DAC as other rats are in dedicated mode
 * 	.
 *
 * 08 14 2013 yi-ying.lin
 * [MOLY00028415] [82LTE.SMT.DEV] 6166/6169 2G calibration feature development
 * .
 *
 * 03 28 2013 hosen.chen
 * [MOLY00012945] [L1D][Modify] Check in code of MT6290
 * .
 *
 * 07 02 2012 samuel.yang
 * [MOLY00000210] [L1D][Modify] Remove the include path of "m12197.h include l1_rf.h" for MSBB2 modification
 * .
 *
 * 07 02 2012 samuel.yang
 * [MOLY00000188] [L1D][Modify] Rename the compile option of AFC_VCXO from custom folder
 * .
 *
 * 06 22 2012 samuel.yang
 * removed!
 * .
 *
 *******************************************************************************/

#ifndef  _L1D_LOC_DEF_H_
#define  _L1D_LOC_DEF_H_

/*===================================================================*/
/* AFC_VCXO related settings                                         */
/*===================================================================*/

/* -------------------- *\
|* Moved from l1d_cid.h *|
\* ------------------------------------------------------------------------------- */
#if IS_RF_MT6280RF
#define IS_MT6162_6163_DCXO_SUPPORT                0
#define IS_AFC_TRIGGER_BSI_SUPPORT                 1
#elif IS_RF_MT6162 || IS_RF_MT6163
   #if  defined(AFC_VCXO) || defined(AFC_VCXO_2G)
      #if IS_FDD_DUAL_MODE_SUPPORT                   /* NOTE: IS_MT6162_6163_DCXO_SUPPORT and IS_AFC_TRIGGER_BSI_SUPPORT */
#define IS_MT6162_6163_DCXO_SUPPORT                0 /*       can NOT be 1 at the same time                              */
#define IS_AFC_TRIGGER_BSI_SUPPORT                 1 /* use the AFC module to trigger BSI to send AFCDAC values to RF    */
      #else
#define IS_MT6162_6163_DCXO_SUPPORT                1 /* use the BSI module directly to send AFCDAC values to RF          */
#define IS_AFC_TRIGGER_BSI_SUPPORT                 0
      #endif
   #else
#define IS_MT6162_6163_DCXO_SUPPORT                0
#define IS_AFC_TRIGGER_BSI_SUPPORT                 0
   #endif
#else
#define IS_MT6162_6163_DCXO_SUPPORT                0
#define IS_AFC_TRIGGER_BSI_SUPPORT                 0
#endif

#if defined(L1_SIM) || IS_CHIP_TK6280 /* TK6280 FPGA not support the following feature */
#undef  IS_MT6162_6163_DCXO_SUPPORT
#undef  IS_AFC_TRIGGER_BSI_SUPPORT
#define IS_MT6162_6163_DCXO_SUPPORT                0
#define IS_AFC_TRIGGER_BSI_SUPPORT                 0
#endif

/* IS_AFC_EVENT_ENABLE: decide if the chip enables and uses the AFC event register                  */
/* IS_DCXO_ENABLE     : decide if the chip enables and uses the way of sending AFCDAC values by BSI */
/* IS_AFC_EVENT_ENABLE and IS_DCXO_ENABLE can NOT be 1 at the same time                             */
#if IS_AST_B2S_SUPPORT || IS_CHIP_MT6280 || IS_CHIP_MT6583_MD1
#define IS_AFC_EVENT_ENABLE                        1
#define IS_DCXO_ENABLE                             0
#elif IS_CHIP_MT6583_MD2
   #if IS_MT6162_6163_DCXO_SUPPORT
#define IS_AFC_EVENT_ENABLE                        0
#define IS_DCXO_ENABLE                             1
   #else
#define IS_AFC_EVENT_ENABLE                        1
#define IS_DCXO_ENABLE                             0
   #endif
#elif IS_SOC_CHIP || IS_MT6162_6163_DCXO_SUPPORT || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
#define IS_AFC_EVENT_ENABLE                        0
#define IS_DCXO_ENABLE                             1
#else
#define IS_AFC_EVENT_ENABLE                        1
#define IS_DCXO_ENABLE                             0
#endif

#if IS_DCXO_ENABLE
   #if IS_SOC_CHIP || IS_MT6162_6163_DCXO_SUPPORT || IS_CHIP_MT6572 || IS_CHIP_MT6290 || IS_CHIP_MT6595 || IS_CHIP_MT6752_MD1 || IS_CHIP_MT6752_MD2 || IS_CHIP_TK6291 || IS_CHIP_MT6755 || IS_CHIP_MT6292 || IS_CHIP_MT6293
#define IS_BSI_AFC_ACTIVE_SWITCH                   1
   #else 
#error "If other rats are in dedicated mode, 2G can not sending AFCDAC values by BSI"
   #endif
#endif
/* ------------------------------------------------------------------------------- */

/* --------------------- *\
|* Moved from l1d_data_l1core.h *|
\* ------------------------------------------------------------------------------- */
/* For L1C may extend frame to 8 slot, 13>(4+8=12) */
#define  TQ_AFC_IDLE_LEN_VCXO                      (13*(TQ_WRAP_COUNT/8))
/* For BT/WiFi to co-use 26MHz, keep AFC to always power on */
#define  TQ_AFC_IDLE_LEN_VCTCXO                    (TQ_AFC_READY+TQ_SLOT_LEN)

/* ------------------------------------------------------------------------------- */


/*===================================================================*/
/* PS R5/R6/R7/R8 Related Settings                                   */
/*===================================================================*/

/* -------------------- *\
|* Moved from l1d_cid.h *|
\* ------------------------------------------------------------------------------- */
#if defined(__NEW_TBF_ARCH__)
#define IS_NEW_TBF_ARCH_SUPPORT                    1
#else
#define IS_NEW_TBF_ARCH_SUPPORT                    0
#endif

#if IS_CHIP_MT6268 // support to force only one TBF in DSP without patch
   #if defined(__FLAVOR_R5R6DEV_R5R6__) || defined(__FLAVOR_2GR5R6__)
#define IS_CHIP_MT6268_EDGE_MTBF_PSHO_SUPPORT      1
   #else
#define IS_CHIP_MT6268_EDGE_MTBF_PSHO_SUPPORT      0
   #endif
#else
#define IS_CHIP_MT6268_EDGE_MTBF_PSHO_SUPPORT      0
#endif

#if IS_NEW_TBF_ARCH_SUPPORT
   #if IS_EDGE_MTBF_PSHO_CHIP || IS_CHIP_MT6268_EDGE_MTBF_PSHO_SUPPORT
#define IS_NEW_TBF_ARCH_NEW_CHIP_SUPPORT           1
   #else
#define IS_NEW_TBF_ARCH_NEW_CHIP_SUPPORT           0
   #endif
#else
#define IS_NEW_TBF_ARCH_NEW_CHIP_SUPPORT           0
#endif

#if IS_GPRS && defined(__MTBF__)
#define IS_NEW_TBF_ARCH_MTBF_SUPPORT               1
#else
#define IS_NEW_TBF_ARCH_MTBF_SUPPORT               0
#endif

#if IS_EGPRS && IS_EDGE_SAIC_CHIP_MT6270A_AND_LATTER_VERSION
#define IS_EDGE_MTBF_CONFIG_TIMESLOTS_SUPPORT      1
#else
#define IS_EDGE_MTBF_CONFIG_TIMESLOTS_SUPPORT      0
#endif

#if IS_EGPRS && defined(__PS_HO__)
#define IS_PS_HO_EDGE_SUPPORT                      1
#else
#define IS_PS_HO_EDGE_SUPPORT                      0
#endif

#if IS_NEW_TBF_ARCH_NEW_CHIP_SUPPORT && IS_FD216_DSP_CHIP
#define IS_PS_HO_EDGE_VQ_BACKUP_BY_IRDMA_CHIP      1
#else
#define IS_PS_HO_EDGE_VQ_BACKUP_BY_IRDMA_CHIP      0
#endif

#if IS_EGPRS && defined(__GERAN_RTTI__)
#define IS_RTTI_EDGE_SUPPORT                       1
//#define __2G_R7_DEV__
#else
#define IS_RTTI_EDGE_SUPPORT                       0
#endif

#if IS_EGPRS && defined(__GERAN_FANR__)
#define IS_FANR_EDGE_SUPPORT                       1
#else
#define IS_FANR_EDGE_SUPPORT                       0
#endif
/* ------------------------------------------------------------------------------- */

#endif

