/*******************************************************************************
*  Modification Notice:
*  --------------------------
*  This software is modified by MediaTek Inc. and the information contained
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
*******************************************************************************/


 /*******************************************************************************
 * Filename:
 * ---------
 *   l1_const.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   Layer1 global constants
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Revision:   1.10  $
 * $Modtime:   May 16 2005 23:14:06  $
 * $Log:   //mtkvs01/vmdata/Maui_sw/archives/mcu/l1/common/l1_const.h-arc  $
 *
 * 03 02 2016 vineet.g
 * [MOLY00167038] TAS1.1 feature
 *
 * 05 29 2015 rick.wu
 * [MOLY00116464] [UMOLY] 2G L1 TAS Check in
 * .
 *
 * 02 11 2015 yi-ying.lin
 * [MOLY00095496] [L1D][Modify] TK6291 CC NVRAM and custom data modification L1D part
 * 	.
 *
 * 02 10 2015 jeff.lee
 * [MOLY00095436] Modem sleep mode header file renaming
 * header file renaming.
 *
 * 02 10 2015 yi-ying.lin
 * [MOLY00095496] [L1D][Modify] TK6291 CC NVRAM and custom data modification L1D part
 * 	.
 *
 * 11 04 2014 th.yeh
 * [MOLY00083271] [L1D][Modify] Sync GL1D driver code from MOLY trunk
 * .
 *
 * 10 23 2014 th.yeh
 * [MOLY00070170] [4G Gemini][L1D][Modify] Inform L1C when FB window will be closed in FB report - bug fixed.
 * .
 *
 * 01 22 2014 hsin-chun.chen
 * [MOLY00054353] Mapping GAS_n to GL1_n in SGLTE and SGLTE DSDS in accordance with MM.GEMINI check in
 * 	<saved by Perforce>
 *
 * 01 22 2014 rick.wu
 * [MOLY00054324] [4G Gemini][Merge] MOLY.MM.GEMINI.DEV Merge back to MOLY
 * .
 *
 * 05 22 2013 hsin-chun.chen
 * [MOLY00023372] [MT6290][NW-UE SIM] UESIM MOLY Migration - UESIM related changes submission
 * .
 *
 * 03 08 2013 hsin-chun.chen
 * [MOLY00011276] [L1C] Merge code from WR8+PLUS to MOLY
 *
 * 03 08 2013 hsin-chun.chen
 * Merge WR8+PLUS to MOLY.
 *
 * 02 06 2013 hsin-chun.chen
 * [MOLY00009928] 3G Gemini2.0+ Check-in
 * .
 *
 * 02 01 2013 cs.wu
 * [MOLY00009715] [MT6589][WG+G][EE]Externel (EE),0,0,99,/data/core/,1,modem,md2:[ASSERT] file:m12100.c line:14412
 * .
 * 
 * 08 16 2012 sy.yeh
 * [MOLY00002161] Sync Maximum Sleep Duration between Sleep Mode and (U)L1
 * .
 *
 * 05 14 2012 terence.chen
 * removed!
 * .
 *
 * 01 16 2012 weining.chien
 * removed!
 * .
 *
 * 06 08 2011 sy.yeh
 * removed!
 * 
 * .
 *
 * 12 08 2010 chuwei.lo
 * removed!
 * .
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * Merge new TBF architecture
 *
 * removed!
 * removed!
 * 
 *
 * removed!
 * removed!
 * Revise for Simulation Environment Catcher output
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * add to source control recursely
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * AFC using the whole burst SNR
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * remove compile option: remove WIN32 from l1_const.h
 *
 * removed!
 * removed!
 *
 *
 *    Rev 1.10   May 17 2005 00:33:10   BM_Trunk
 * Karlos:
 * add copyright and disclaimer statement
 *
 *    Rev 1.9   Jan 18 2005 00:37:10   BM
 * append new line in W05.04
 *
 *    Rev 1.8   May 02 2004 21:24:40   mtk00240
 * Add comment to remind programmers updating  synchronously the type copy in m12194.c
 * Resolution for 5221: [L1D] Copy type definition in m12194.c to avoid including L1 private header files
 *
 *    Rev 1.7   Feb 13 2004 23:50:58   mtk00489
 * [L1D][Enhanced]1.adjust L1D DL DTX threshold to improve DTX detection rate 2.enhanced Dummy burst detection rate 3.change RX ADC to 2.24V for MT61xx 4.modify LP2 code to pass MT6218BECO3 validation 5.modify new interface for dll(CHIP_VER)
 * Resolution for 3912: [L1D][Enhanced]1.adjust L1D DL DTX threshold to improve DTX detection rate 2.enhanced Dummy burst detection rate 3.change RX ADC to 2.24V for MT61xx 4.modify LP2 code to pass MT6218BECO3 validation 5.modify new interface for dll(CHIP_VER)
 *
 *    Rev 1.6   Oct 25 2003 16:07:34   mtk00240
 * Add DSP Magic Value setting for mt6218B
 * Resolution for 3196: [L1D][Enhance] Add code to support mt6218B
 *
 *    Rev 1.5   Sep 15 2003 09:32:48   mtk00240
 * change DSP Magic value from -93.5 to -99.5
 * Resolution for 2830: [L1D][Fix Bug] Fix the bug that the input voltage and DSP set point dismatch on mt6218
 *
 *    Rev 1.4   Aug 30 2003 19:55:24   mtk00248
 * Add C_VALUE_RESOLUTION_BITS definition.
 * Resolution for 2705: [L1C][Update] Modify the calculation of C value.
 *
 *    Rev 1.3   Jun 26 2003 15:23:50   mtk00240
 * Add magic value for MT6218
 * Resolution for 2116: [L1D][Enhance] L1D modify some code to support MT6218
 *
 *    Rev 1.2   Apr 25 2003 16:11:18   mtk00274
 * Upper layer may request L1 to do NC measurement when SI13 indicates NC mode is not NC0.
 * Resolution for 1656: [L1]Although PBCCH doestn't exist, upper layer may request L1 to do NC measurement when SI13 indicates NC mode is not NC0.
 *
 *    Rev 1.1   27 Mar 2003 15:06:40   mtk00248
 * move TimingAdvance_INVALID definition to mph_cnst.h.
 * Resolution for 1386: Add a new parameter, TA value, to mpal_uplink_transfer callback function.
 *
 *    Rev 1.0   Nov 30 2002 19:50:14   admin
 * Initial revision.
 *
 *    Rev 1.3   29 Oct 2002 17:50:08   mtk00243
 * move define of USF_and USF_INVALID from l1_const.h yo mph_const.h
 *
 *    Rev 1.2   27 Sep 2002 10:59:58   mtk00274
 * Add REPORT_RESOLUTION_BITS for reporting to upper layer
 *
 *    Rev 1.1   11 Sep 2002 20:49:24   mtk00248
 * Change compile option MTK_GPRS_ENABLE to __PS_SERVICE__.
 *
 *    Rev 1.0   Sep 06 2002 11:18:58   admin
 * Initial revision.
 *
 *    Rev 1.14   29 Jun 2002 15:18:34   mtk00245
 * update files for label MT6208.W02.22.FTA.ALL.EXCEPT.14.1.1.1
 * Resolution for SCR 444
 *
 *    Rev 1.13   29 Jun 2002 15:12:48   mtk00245
 * update files for label MT6208.W02.22.FTA.ALL.EXCEPT.14.1.1.1
 *
 *    Rev 1.12   May 08 2002 23:47:46   mtk00210
 * Extract code for GSM only release
 *
 *    Rev 1.11   Apr 05 2002 22:49:42   mtk00210
 * Keep the same DSP magic value for RAM chip and FPGA board
 *
 *    Rev 1.10   Apr 03 2002 19:36:28   mtk00210
 * add DSP_MAGIC_VALUE used for L1C AGC and L1D power calculation
 *
 *    Rev 1.9   Mar 06 2002 23:49:54   mtk00210
 * RSSI Compensation at low received condition
 *
 *    Rev 1.8   Jan 30 2002 22:32:08   mtk00210
 * Change back the resolution bits to 3, and change the define of RSSI_MAGIC_VALUE, which is independent of RSSI_RESOLUTION_BITS
 *
 *    Rev 1.7   Jan 30 2002 14:31:50   mtk00210
 * Reduce resolution bits from 3 to 2bits
 *
 *    Rev 1.6   Jan 30 2002 12:46:44   mtk00210
 * Add constant to define RSSI reslotion bit and its associated magic value
 *
 *    Rev 1.5   Jan 17 2002 17:32:42   mtk00210
 * move the SNR_THRESHOLD from m12168.c to l1_const.h, this value is used for AGC amd AFC
 *
 *    Rev 1.4   Jan 05 2002 19:41:32   mtk00245
 * move ARFCH related definition to gsm_cnst.h
 * Resolution for 177: Software integration check-in
 *
 *    Rev 1.3   Jan 05 2002 19:05:16   mtk00245
 * Check in to reflect new header file structure
 * Resolution for 177: Software integration check-in
 *
 *    Rev 1.2   Jan 03 2002 11:52:28   mtk00210
 * merge the branch B.L1.20011225
 *
 *    Rev 1.1.1.3   Dec 28 2001 21:39:00   mtk00210
 * update Power_MAX and Power_MIN for high resolution RSSI
 *
 *    Rev 1.1.1.2   Dec 27 2001 10:52:48   mtk00210
 * correct author
 *
 *    Rev 1.1.1.1   Dec 25 2001 16:26:10   mtk00210
 * update L1 for RSSI, multiband AFC, new L1C/L1D interface, and new CBCH L1A/L1C interface
 *
 *    Rev 1.1   Dec 21 2001 12:17:40   admin
 * add copyright
 *
 *
 *******************************************************************************/

/******************************************************************************
 *
 *  File:            /home/gprs/l1/generic/SCCS/s.l1_const.h
 *  -----
 *
 *  SCCS Version:    2.11
 *  -------------
 *
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of Communications Consultants Worldwide Limited (C) 2001
 *
 *  Project:
 *  --------
 *
 *  Software Unit:  Layer1 global constants.
 *  --------------
 *
 *  Description:
 *  ------------
 *
 *
 *  Modification History:
 *  ---------------------
 *  Date       Vers  Auth  Details
 *  ----       ----  ----  -------
 *  28-Mar-01  2.1   VKL   Initial version.
 *  21-May-01  2.2   VKL   added ifdef WIN32 to disable warnings and define
 *                          _strdup
 *                         added comments
 *                         changed to multi band for testing (GSM+DCS)
 *                         added USF_FREE and USF_INVALID
 *  15-Jul-01  2.3   VKL   Added TimingAdvance_INVALID
 *                         Added frequence band and ARFCN range macros
 *                         Changed ARFCN macros for proper multiband support
 *  02-Sep-01  2.4   VKL   Add constants Power_INVALID, TX_POWER_MAX and TX_POWER_MIN
 *  12-Sep-01  2.5   VKL   Add #define MULTIBAND_SUPPORT, change values of Power_INVALID,
 *                         Power_EQUNDERFLOW and Power_EQOVERFLOW,remove AGC constants
 *  13-Sep-01  2.5   SGB   Remove #def MULTIBAND_SUPPORT - compiler option
 *  26-Sep-01  2.6   VKL   Added TimingAdvance_SAME_AS_BEFORE
 *  28-Sep-01  2.7   VKL   Added TFI_INVALID
 *  03-Oct-01  2.8   VKL   Change values of Power_INVALID, Power_EQUNDERFLOW
 *                         and Power_EQOVERFLOW to fit within byte
 *  11-Oct-01  2.9    SY      L1_AVAILABLE_BANDS to support EGSM and Change Power_MAX
 *  26-Oct-01  2.10  VKL   Add POWER_IS_INVALID macro
 *                         Change value of L1_SURROUND_MIN_EBIT_SB_TCH
 *  09-Oct-01  2.11  VKL   Change L1_SURROUND_MAX_CELLS from 32 to 65
 *
 *****************************************************************************/

#ifndef l1_generic_l1_const_h
#define l1_generic_l1_const_h

#include "gl1_option.h"
#include "l1d_cid.h"
#include "mph_types.h"

#ifdef __PS_SERVICE__
#define INVALID_TBF_TID                   0
#endif

/* --- global flags --------------------------------------------------------- */
#if defined (__UE_SIMULATOR__)
#define SIMULATION_SUPPORT                1
#define TRACING_SUPPORT                   1
#define HARDWARE_SIMULATION               1
#else
#if !defined(ESIM_BUILD_CONFIG) || (ESIM_BUILD_CONFIG == ESIM_MULTI_MODE_ON_FIBERS) || (ESIM_BUILD_CONFIG == ESIM_SINGLE_MODE_ON_FIBERS)
#if !defined(__MTK_TARGET__) && !defined(__UL1_ON_MNT__) && !defined(GEN_FOR_PC) && defined(L1_SIM)
#define SIMULATION_SUPPORT                1
#define TRACING_SUPPORT                   1
#define SCRIPTING_SUPPORT                 1
#define HARDWARE_SIMULATION               1
#else
#define SIMULATION_SUPPORT                0
#define TRACING_SUPPORT                   0
#define SCRIPTING_SUPPORT                 0
#define HARDWARE_SIMULATION               0
#endif /* __MTK_TARGET__ */
#endif /* __ESIM_BUILD_CONFIG__ */
#endif /* __UE_SIMULATOR__ */

/* --- ARFCN --------------------------------------------------------------- */

#define ARFCN_INVALID                     32767
#if defined ( __GL1_MULTI_MODE__ ) && defined ( __GL1_GEMINI__ ) 
#define ARFCN_STANDBY                     32766
#endif


/* --- transmit power of this mobile --------------------------------------- */
#ifdef __GERAN_R6__ 
#define TX_POWER_MAX 43
#define TX_POWER_MIN  -6
#else
#define TX_POWER_MAX                      39
#define TX_POWER_MIN                      0
#endif  /*__GERAN_R6__ */

/* --- power (in dB) ------------------------------------------------------- */
   /* !!important: please update the copy in l1d_public.h */
#define REPORT_RESOLUTION_BITS            2 /* 0.25 dB resolution */ 
#define RSSI_RESOLUTION_BITS              3 /* 0.125 dB resolution */

#if REPORT_RESOLUTION_BITS > RSSI_RESOLUTION_BITS
#error "RSSI_RESOLUTION_BITS should be greater or equal to REPORT_RESOLUTION_BITS"
#endif
   /* !!important: please update the copy in l1d_public.c */
#define RSSI_FACTOR                       (1<<RSSI_RESOLUTION_BITS)
#define RSSI_MAGIC_VALUE                  6550
#define RSSI_MAGIC_VALUE_SC               110000*3
#define RSSI_MAGIC_SAMPLE_NUM             6

#define Power_MIN                         (-111*RSSI_FACTOR)
#define Power_MAX                         (-10*RSSI_FACTOR)

#define Power_INVALID                     1
#define Power_EQUNDERFLOW                 2
#define Power_EQOVERFLOW                  3
#define Power_HWUnavailable               4


#define POWER_IS_INVALID(power)           ((power)>=0)

/* --- frame numbers ------------------------------------------------------- */

#define HYPERFRAMES                       (26L*51L*2048L)

/* --- FCCH related ---------------------------------------------------------- */
/* L1D shall inform FB win off delay with different values.                    */
/* If L1D return default value, it means L1C will handle FB win off on its own */
#define FB_WIN_OFF_DELAY_DEFAULT          255
#define FB_WIN_OFF_ALREADY                0
#define FB_WIN_OFF_DELAY_ONE_FRAME        1

/* ------------------------------------------------------------------------- */

#define TFI_INVALID                       -1

/* ------------------------------------------------------------------------- */

#define L1_SURROUND_MAX_CELLS             33
#define L1_SURROUND_MIN_EBIT_SB_TCH       8125  /* window opens in middle of timeslot 6 */

/* -------------------------- threshold for AGC and AFC -------------------- */
#if IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION

   #if IS_EDGE_SAIC_CHIP_MT6256_AND_LATTER_VERSION

#define SNR_THRESHOLD_AGC_GMSK_SAIC_ON    (29)  /* Threshold of TSC_SINR after SAIC */
#define SNR_THRESHOLD_AGC_GMSK_SAIC_OFF   (6)

#define SNR_THRESHOLD_AFC_GMSK_SAIC_ON    (29)  /* Threshold of TSC_SINR  after SAIC */
#define SNR_THRESHOLD_AFC_GMSK_SAIC_OFF   (6)

#define MLFOE_FOE_SNR_THR                 (40)
#define MLFOE_FOE_CVALUE_THR              (4)

      #if IS_EGPRS
#define SNR_THRESHOLD_AGC_EPSK            (13)  /* Threshold of C value */
#define SNR_THRESHOLD_AFC_EPSK            (13)  /* Threshold of C value */
      #endif

   #elif IS_SAIC_CHIP_MT6223_AND_LATTER_VERSION

#define SNR_THRESHOLD_AGC_GMSK_SAIC_ON    (28)  /* Threshold of TSC_SINR after SAIC */
#define SNR_THRESHOLD_AGC_GMSK_SAIC_OFF   (6)

#define SNR_THRESHOLD_AFC_GMSK_SAIC_ON    (28)  /* Threshold of TSC_SINR  after SAIC */
#define SNR_THRESHOLD_AFC_GMSK_SAIC_OFF   (6)

#define MLFOE_FOE_SNR_THR                 (40)
#define MLFOE_FOE_CVALUE_THR              (4)

      #if IS_EGPRS
#define SNR_THRESHOLD_AGC_EPSK            (13)  /* Threshold of C value */
#define SNR_THRESHOLD_AFC_EPSK            (13)  /* Threshold of C value */
      #endif

   #else
#define SNR_THRESHOLD                     4     /* Threshold of WSNR */
#define SNR_THRESHOLD_DTX                 6
   #endif /* End of "IS_SAIC_CHIP_MT6223_AND_LATTER_VERSION" */

#else

#define SNR_THRESHOLD                     20
#define SNR_THRESHOLD_DTX                 12

#endif /*End of "IS_EDGE_CHIP_MT6229_AND_LATTER_VERSION"*/

/* --- C Value-------------------------------------------------------------- */

#define C_VALUE_RESOLUTION_BITS           16

#if RSSI_RESOLUTION_BITS > C_VALUE_RESOLUTION_BITS
#error "C_VALUE_RESOLUTION_BITS should be greater or equal to RSSI_RESOLUTION_BITS"
#endif

#endif


