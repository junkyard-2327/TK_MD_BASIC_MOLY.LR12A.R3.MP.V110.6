/*******************************************************************************
*  Modification Notice :
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


/*****************************************************************************
 *
 * Filename:
 * ---------
 * ul1d_rf_public.h
 *
 * Project:
 * --------
 *   3G Project Common File
 *
 * Description:
 * ------------
 *   Definition of some of customization setting not defined in ul1d_custom_rf.h
 *   And the stuff needs to be recognized by UL1D external module (wdata.c)
 *   Also some of data structure, global data, global function prototypes to be used
 *   by inter-category module (e.g. NVRAM)
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
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
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
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
 *
 * removed!
 * removed!
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef UL1D_RF_PUBLIC_H
#define UL1D_RF_PUBLIC_H


/*******************************************************************************
** Includes
*******************************************************************************/
#include "ul1d_rf_cid.h"
#include "hal_ul1_struct.h" //To use the band/freqToband common query functions
#include "ul1d_rf_cal_poc_data.h"
#include "mmrf_cc_global.h"
#include "mml1_rf_public.h"
#if IS_URF_MT6177L_RX_REFINE||IS_URF_MT6173_RX_REFINE
#include "wrdep.h"
#endif
#include "mml1_dpd_def.h"

#if IS_3G_ELNA_IDX_SUPPORT
#include "mml1_fe_public.h"
#endif

#if IS_3G_TAS_INHERIT_4G_ANT
#include "el1d_rf_public.h"
#endif

/*******************************************************************************
** Setting for specific RF
*******************************************************************************/
/* TX Timing */
#if IS_URF_MT6173
/*****************************************
MT6293 BSI Module clock: 75MHz
MT6293 BSI 4-wire clock: 150/2MHz = 75MHz, 1CW=17T
BSI Event Latency = {(BSI HW lentacy [46T]) + (4-wire CW length [17T])*CW_NUM + (IDLE_CNT [1T])*(CW_NUM-1)}/75MHz
******************************************/

//#define  UBSI_SEARCH_TIME        (0)   /*3G BSI search time: 0 for MT6293, no need to search event_idx in BSI data pool*/

#define  TX_CAL_SETTLING_TIME    (122) /*including STX setting time*/
#define  TX_BURST_SETTLING_TIME  (20)  /*including TX LDO setting time*/
#define  TX_SLEEP_ENTER_TIME     (1)   /*including RX LDO setting time*/
#define  TX_ST1_CW_SEND_TIME     (7)   /*26CWs. (46T + 17T*26CWs + 25T)/75MHz = 6.84*/
#define  TX_ST2_CW_SEND_TIME     (2)   /*2CWs.  (46T + 17T* 2CWs +  1T)/75MHz = 1.08*/

#define  TC_ST1   MICROSECOND_TO_CHIP( TX_CAL_SETTLING_TIME + TX_ST1_CW_SEND_TIME + TX_ST2_CW_SEND_TIME)
#define  TC_ST2   MICROSECOND_TO_CHIP( TX_BURST_SETTLING_TIME + TX_ST2_CW_SEND_TIME)
#define  TC_ST3   MICROSECOND_TO_CHIP( TX_SLEEP_ENTER_TIME )

#elif IS_URF_MT6177L
/*****************************************
MT6293 BSI Module clock: 75MHz
MT6293 BSI 4-wire clock: 150/2MHz = 75MHz, 1CW=17T
BSI Event Latency = {(BSI HW lentacy [46T]) + (4-wire CW length [17T])*CW_NUM + (IDLE_CNT [1T])*(CW_NUM-1)}/75MHz
******************************************/

//#define  UBSI_SEARCH_TIME        (0)   /*3G BSI search time: 0 for MT6293, no need to search event_idx in BSI data pool*/

#define  TX_CAL_SETTLING_TIME    (110) /*including STX setting time*/
#define  TX_BURST_SETTLING_TIME  (20)  /*including TX LDO setting time*/
#define  TX_SLEEP_ENTER_TIME     (1)   /*including RX LDO setting time*/
#define  TX_ST1_CW_SEND_TIME     (7)   /*23CWs. (46T + 17T*23CWs + 22T)/75MHz = 6.12*/
#define  TX_ST2_CW_SEND_TIME     (2)   /*2CWs.  (46T + 17T* 2CWs +  1T)/75MHz = 1.08*/

#define  TC_ST1   MICROSECOND_TO_CHIP( TX_CAL_SETTLING_TIME + TX_ST1_CW_SEND_TIME + TX_ST2_CW_SEND_TIME)
#define  TC_ST2   MICROSECOND_TO_CHIP( TX_BURST_SETTLING_TIME + TX_ST2_CW_SEND_TIME)
#define  TC_ST3   MICROSECOND_TO_CHIP( TX_SLEEP_ENTER_TIME )
#else
#define  UBSI_SEARCH_TIME        (6)   /*3G BSI search time for 472 CW depth at 80MHz CLK*/

#if defined(L1_SIM)
#define  TX_CAL_SETTLING_TIME    (102+10+10) /*including STX setting time, add 10us for xL1sim 0.5us/CW Usim handling*/
#else
#define  TX_CAL_SETTLING_TIME    (102) /*including STX setting time*/
#endif
#define  TX_BURST_SETTLING_TIME  (20)  /*including TX LDO setting time*/
#define  TX_SLEEP_ENTER_TIME     (1)   /*including RX LDO setting time*/
#define  TX_ST1_CW_SEND_TIME     (10)  /*22CWs. 0.41us/CW (include BSI_W to BSI_TOP time) over 5 wire BSI at 60.6MHz CLK (AP CLK)*/
#define  TX_ST2_CW_SEND_TIME     (3)   /*5CWs.  0.41us/CW (include BSI_W to BSI_TOP time) over 5 wire BSI at 60.6MHz CLK (AP CLK)*/

#define  TC_ST1   MICROSECOND_TO_CHIP( TX_CAL_SETTLING_TIME + TX_BURST_SETTLING_TIME + 2*UBSI_SEARCH_TIME + TX_ST1_CW_SEND_TIME + TX_ST2_CW_SEND_TIME)
#define  TC_ST2   MICROSECOND_TO_CHIP( TX_BURST_SETTLING_TIME + UBSI_SEARCH_TIME + TX_ST2_CW_SEND_TIME)
#define  TC_ST3   MICROSECOND_TO_CHIP( TX_SLEEP_ENTER_TIME )
#endif

#if IS_URF_MT6177L_RX
/* RX Timing */
#if IS_MT6177L_PHONE_CALL_RX
/*Use MT6179 timing*/
#define  RX_CAL_SETTLING_TIME    (140) /*including SRX setting time*/
#else
/*Use Table 1-6  FDD SRX settling time, in MT6177L_SRX_L1_Programming_Guide*/
#define  RX_CAL_SETTLING_TIME    (125) /*including SRX setting time*/
#endif

/*Use Figure 2-6 FDD/C2K Warm-up and Burst Mode, in MT6177L_E2MP_RX_L1_Programming_Guide*/
#define  RX_BURST_SETTLING_TIME  (20)  /*including RX LDO setting time*/
#define  RX_SLEEP_ENTER_TIME     (20)  /*including RX LDO setting time*/

#define  RX_SR1_CW_SEND_TIME     (5)   /*17CWs. (46T + 17T*17CWs + 16T)/75MHz = 4.68*/
#define  RX_SR2_CW_SEND_TIME     (1)   /*1CWs.  (46T + 17T* 1CWs +  0T)/75MHz = 0.840*/
#define  UBSI_PENDDING_STR1      (RX_SR1_CW_SEND_TIME)
#define  UBSI_PENDDING_STR2      (RX_SR2_CW_SEND_TIME + TX_ST2_CW_SEND_TIME)

#elif IS_URF_MT6173_RX
/* RX Timing */
#if IS_MT6173_PHONE_CALL_RX
/*Use MT6179 timing*/
#define  RX_CAL_SETTLING_TIME    (140) /*including SRX setting time*/
#else
/*Use Table 1-6  FDD SRX settling time, in MT6173_SRX_L1_Programming_Guide*/
#define  RX_CAL_SETTLING_TIME    (125) /*including SRX setting time*/
#endif

/*Use Figure 2-6 FDD/C2K Warm-up and Burst Mode, in MT6173_E2MP_RX_Digital_document_V0p2_B60829*/
#define  RX_BURST_SETTLING_TIME  (20)  /*including RX LDO setting time*/
#define  RX_SLEEP_ENTER_TIME     (20)  /*including RX LDO setting time*/

#define  RX_SR1_CW_SEND_TIME     (5)   /*16CWs. (46T + 17T*16CWs + 15T)/75MHz = 4.44*/
#define  RX_SR2_CW_SEND_TIME     (1)   /*1CWs.  (46T + 17T* 1CWs +  0T)/75MHz = 0.840*/
#define  UBSI_PENDDING_STR1      (RX_SR1_CW_SEND_TIME)
#define  UBSI_PENDDING_STR2      (RX_SR2_CW_SEND_TIME + TX_ST2_CW_SEND_TIME)

#else
/* RX Timing */

#define  RX_CAL_SETTLING_TIME    (125) /*including SRX setting time*/
#define  RX_BURST_SETTLING_TIME  (20)  /*including RX LDO setting time*/
#define  RX_SLEEP_ENTER_TIME     (20)  /*including RX LDO setting time*/

#define  RX_SR1_CW_SEND_TIME     (4)   /*14CWs. 0.26us/CW over 5 wire BSI at 60MHz CLK*/
#define  RX_SR2_CW_SEND_TIME     (2)   /*7CWs.  0.26us/CW over 5 wire BSI at 60MHz CLK*/
#define  UBSI_PENDDING_STR1      (2*(UBSI_SEARCH_TIME + RX_SR1_CW_SEND_TIME)) /*20us*/
#define  UBSI_PENDDING_STR2      (2*(UBSI_SEARCH_TIME + RX_SR2_CW_SEND_TIME) + (UBSI_SEARCH_TIME + TX_ST2_CW_SEND_TIME)) /*23us*/
#endif

#if IS_MT6177L_PHONE_CALL_RX || IS_MT6173_PHONE_CALL_RX
/*Use MT6179 timing*/
#define  TC_SR1   MICROSECOND_TO_CHIP( RX_CAL_SETTLING_TIME + RX_BURST_SETTLING_TIME + UBSI_PENDDING_STR1 + UBSI_PENDDING_STR2 )
#else
/*Remove RX_BURST_SETTLING_TIME from TC_SR1                                    */
/*Since in Table 1-6  FDD SRX settling time of MT6177L_SRX_L1_Programming_Guide*/
/*FDD SRX settling time Can be overlapped by Burst for FDD RX Warm-up mode     */
#define  TC_SR1   MICROSECOND_TO_CHIP( RX_CAL_SETTLING_TIME + UBSI_PENDDING_STR1 + UBSI_PENDDING_STR2 )
#endif

#define  TC_SR2   MICROSECOND_TO_CHIP( RX_BURST_SETTLING_TIME + UBSI_PENDDING_STR2 )
#define  TC_SR3   MICROSECOND_TO_CHIP( RX_SLEEP_ENTER_TIME )

/*MT6169*/
#define  END_BOUNDARY_OFFSET         (4*256)
/*MT6169*/ /* BSI Event timing RXCAL & TXCAL, [Paul] only use it in ORION_FDD*/
/*MT6169*/ #define  TC_SR1_CAL           MICROSECOND_TO_CHIP(610) // "RX cal timing"+"BSI send time length"+"reserved timing margin" =550us + 10us +10us + 40us (for RXDFE active wait + IQ settling time)
/*MT6169*/ #define  TC_SR2_CAL           MICROSECOND_TO_CHIP(10)  //"reserved BSI event send time(about for 10 events)"
/*MT6169*/ #define  TC_ST_CAL            MICROSECOND_TO_CHIP(0)  //"reserved BSI event send time(about for 10 events)"
/*MT6169*/
/*MT6169*/ #if MT6169_TO_DO /*to do, check DC, RXD timing*/
/*MT6169*/ /* BSI Event timing for Dual cell & RXD reconfig */
#define  TC_DC_SR1            (END_BOUNDARY_OFFSET) // Align FEC off time at symbol 1. MUST ahead to TC_DC_SR2.
/*MT6169*/ #define  TC_DC_SR2            (TC_SR1) //DC RX SRX on timing(SR1).
/*MT6169*/ #define  TC_DC_SR2B           (TC_SR2) //DC RX on timing(SR2).
/*MT6169*/
/*MT6169*/ #define  TC_RXD_SR1           MICROSECOND_TO_CHIP(25)  //doesn't matter, no RXD reconfiguration event @ MT6583
/*MT6169*/ #define  TC_RXD_SR3           MICROSECOND_TO_CHIP(20)  //doesn't matter, No RXD reconfiguration event @ MT6583
           #endif

/*--------------------------------------------------------*/
/*   TRX IO Setting Define                                */
/*--------------------------------------------------------*/
#define UL1_RX_LNA_PORT_SELECT_SHIFT                 (5)
#if IS_URF_MT6179||IS_URF_MT6177L_RX
#define UL1_RX_LNA_PORT_P0                           (0x1 << (UL1_RX_LNA_PORT_SELECT_SHIFT)) /*NonUsed*/
#define UL1_RX_LNA_PORT_P1                           (0x2 << (UL1_RX_LNA_PORT_SELECT_SHIFT))
#define UL1_RX_LNA_PORT_P2                           (0x3 << (UL1_RX_LNA_PORT_SELECT_SHIFT))
#define UL1_RX_LNA_PORT_P3                           (0x4 << (UL1_RX_LNA_PORT_SELECT_SHIFT))
#define UL1_RX_LNA_PORT_P4                           (0x5 << (UL1_RX_LNA_PORT_SELECT_SHIFT))
#define UL1_RX_LNA_PORT_P5                           (0x6 << (UL1_RX_LNA_PORT_SELECT_SHIFT))
#define UL1_RX_LNA_PORT_P6                           (0x7 << (UL1_RX_LNA_PORT_SELECT_SHIFT))
#define UL1_RX_LNA_PORT_P7                           (0x8 << (UL1_RX_LNA_PORT_SELECT_SHIFT))
#else // MT6176
#define UL1_RX_LNA_PORT_P0                           (0x1 << (UL1_RX_LNA_PORT_SELECT_SHIFT + 0)) /*NonUsed*/
#define UL1_RX_LNA_PORT_P1                           (0x1 << (UL1_RX_LNA_PORT_SELECT_SHIFT + 1))
#define UL1_RX_LNA_PORT_P2                           (0x1 << (UL1_RX_LNA_PORT_SELECT_SHIFT + 2))
#define UL1_RX_LNA_PORT_P3                           (0x1 << (UL1_RX_LNA_PORT_SELECT_SHIFT + 3))
#define UL1_RX_LNA_PORT_P4                           (0x1 << (UL1_RX_LNA_PORT_SELECT_SHIFT + 4))
#endif

#define UL1_RX_LNA_GROUP_SELECT_SHIFT                (0)
#define UL1_RX_LNA_GROUP_G1                          (0x1 << (UL1_RX_LNA_GROUP_SELECT_SHIFT + 0))
#define UL1_RX_LNA_GROUP_G2                          (0x1 << (UL1_RX_LNA_GROUP_SELECT_SHIFT + 1))
#define UL1_RX_LNA_GROUP_G3                          (0x1 << (UL1_RX_LNA_GROUP_SELECT_SHIFT + 2))
#define UL1_RX_LNA_GROUP_G4                          (0x1 << (UL1_RX_LNA_GROUP_SELECT_SHIFT + 3))

#if (!IS_URF_MT6179)
/** Tx Port selection */
#define UL1_TX_BSEL_LB_SHIFT                         (0)
#define UL1_TX_BSEL_MB_SHIFT                         (5)
#define UL1_TX_BSEL_HB_SHIFT                         (10)
#endif

#if IS_URF_MT6179||IS_URF_MT6177L_RX
#define M_UNPACK_LNA_PORT_VALUE(x)                   ((x >> UL1_RX_LNA_PORT_SELECT_SHIFT) & 0xF)
#else // MT6176
#define M_UNPACK_LNA_PORT_VALUE(x)                   ((x >> UL1_RX_LNA_PORT_SELECT_SHIFT) & 0x3F)
#endif

#define M_UNPACK_LNA_GROUP_VALUE(x)                  ((x >> UL1_RX_LNA_GROUP_SELECT_SHIFT) & 0xF)

#if 0
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

/** RF RX/RXD port setting */
#if IS_URF_MT6173_RX
/* RF RX IO port setting */
/* "Refer to  3.1.1 in "MT6173_E2_RX_3WirePG_V3p0.docx"*/
typedef enum
{
   LNA_PRX1,
   LNA_PRX2,
   LNA_PRX3,
   LNA_PRX4,
   LNA_PRX5,
   LNA_PRX6,
   LNA_PRX7,
   LNA_PRX8,
   LNA_PRX9,
   LNA_PRX10,
   LNA_MAIN_NONUSED,
}UL1_RF_RX_IO_E;

/* RF RXD IO port setting */
/* "Refer to  3.1.2 in "MT6173_E2_RX_3WirePG_V3p0.docx"*/
typedef enum
{
   LNA_DRX1,
   LNA_DRX2,
   LNA_DRX3,
   LNA_DRX4,
   LNA_DRX5,
   LNA_DRX6,
   LNA_DRX7,
   LNA_DRX8,
   LNA_DRX9,
   LNA_DRX10,
   LNA_RXD_NONUSED,
}UL1_RF_RXD_IO_E;

#define NON_USED_BAND                                (10)
#elif IS_URF_MT6177L_RX
// Move to Wrdep

typedef enum
{
   LNA_PRX1,
   LNA_PRX2,
   LNA_PRX3,
   LNA_PRX4,
   LNA_PRX5,
   LNA_PRX6,
   LNA_PRX7,
   LNA_PRX8,
   LNA_PRX9,
   LNA_PRX10,
   LNA_PRX11,
   LNA_PRX12,
   LNA_PRX13,
   LNA_PRX14,
   LNA_LAAP1,
   LNA_MAIN_NONUSED,
}UL1_RF_RX_IO_E;


typedef enum
{
   LNA_DRX1,
   LNA_DRX2,
   LNA_DRX3,
   LNA_DRX4,
   LNA_DRX5,
   LNA_DRX6,
   LNA_DRX7,
   LNA_DRX8,
   LNA_DRX9,
   LNA_DRX10,
   LNA_DRX11,
   LNA_DRX12,
   LNA_DRX13,
   LNA_DRX14,
   LNA_LAAD1,
   LNA_RXD_NONUSED,
}UL1_RF_RXD_IO_E;


#define NON_USED_BAND  (15)//(LNA_RXD_NONUSED)

#else

#define NON_USED_BAND  (0xFF)

typedef enum
{
#if (IS_URF_MT6179 || IS_URF_ORION_HPLUS)
   LNA_PRX1,
   LNA_PRX2,
   LNA_PRX3,
   LNA_PRX4,
   LNA_PRX5,
   LNA_PRX6,
   LNA_PRX7,
   LNA_PRX8,
   LNA_PRX9,
   LNA_PRX10,
   LNA_PRX11,
   LNA_PRX12,
   LNA_PRX13,
   LNA_PRX14,
   LNA_PRX15,
   LNA_PRX16,
   LNA_PRX17,
   LNA_PRX18,
   LNA_PRX19,
   LNA_PRX20,
   LNA_PRX21,
   LNA_PRX22,
#else // MT6176
   LNA_PRX1  = (UL1_RX_LNA_GROUP_G4 | UL1_RX_LNA_PORT_P1),
   LNA_PRX2  = (UL1_RX_LNA_GROUP_G4 | UL1_RX_LNA_PORT_P2),
   LNA_PRX3  = (UL1_RX_LNA_GROUP_G4 | UL1_RX_LNA_PORT_P3),

   LNA_PRX4  = (UL1_RX_LNA_GROUP_G3 | UL1_RX_LNA_PORT_P1),
   LNA_PRX5  = (UL1_RX_LNA_GROUP_G3 | UL1_RX_LNA_PORT_P2),
   LNA_PRX6  = (UL1_RX_LNA_GROUP_G3 | UL1_RX_LNA_PORT_P3),
   LNA_PRX7  = (UL1_RX_LNA_GROUP_G3 | UL1_RX_LNA_PORT_P4),

   LNA_PRX8  = (UL1_RX_LNA_GROUP_G2 | UL1_RX_LNA_PORT_P1),
   LNA_PRX9  = (UL1_RX_LNA_GROUP_G2 | UL1_RX_LNA_PORT_P2),
   LNA_PRX10 = (UL1_RX_LNA_GROUP_G2 | UL1_RX_LNA_PORT_P3),
   LNA_PRX11 = (UL1_RX_LNA_GROUP_G2 | UL1_RX_LNA_PORT_P4),

   LNA_PRX12 = (UL1_RX_LNA_GROUP_G1 | UL1_RX_LNA_PORT_P1),
   LNA_PRX13 = (UL1_RX_LNA_GROUP_G1 | UL1_RX_LNA_PORT_P2),
   LNA_PRX14 = (UL1_RX_LNA_GROUP_G1 | UL1_RX_LNA_PORT_P3),
#endif
   LNA_MAIN_NONUSED = NON_USED_BAND,
}UL1_RF_RX_IO_E;

typedef enum
{
#if (IS_URF_MT6179 || IS_URF_ORION_HPLUS)
   LNA_DRX1,
   LNA_DRX2,
   LNA_DRX3,
   LNA_DRX4,
   LNA_DRX5,
   LNA_DRX6,
   LNA_DRX7,
   LNA_DRX8,
   LNA_DRX9,
   LNA_DRX10,
   LNA_DRX11,
   LNA_DRX12,
   LNA_DRX13,
   LNA_DRX14,
   LNA_DRX15,
   LNA_DRX16,
   LNA_DRX17,
   LNA_DRX18,
   LNA_DRX19,
   LNA_DRX20,
   LNA_DRX21,
   LNA_DRX22,
#else // MT6176
   LNA_DRX1  = LNA_PRX1 ,
   LNA_DRX2  = LNA_PRX2 ,
   LNA_DRX3  = LNA_PRX3 ,

   LNA_DRX4  = LNA_PRX4 ,
   LNA_DRX5  = LNA_PRX5,
   LNA_DRX6  = LNA_PRX6 ,
   LNA_DRX7  = LNA_PRX7 ,

   LNA_DRX8  = LNA_PRX8 ,
   LNA_DRX9  = LNA_PRX9 ,
   LNA_DRX10 = LNA_PRX10,
   LNA_DRX11 = LNA_PRX11,

   LNA_DRX12 = LNA_PRX12,
   LNA_DRX13 = LNA_PRX13,
   LNA_DRX14 = LNA_PRX14,
#endif
   LNA_RXD_NONUSED = NON_USED_BAND,
}UL1_RF_RXD_IO_E;

#endif/*IS_URF_MT6177L_RX*/

/** Tx Port selection */
#if IS_URF_MT6173
typedef enum
{
   UL1_TX_LB1,
   UL1_TX_LB2,
   //UL1_TX_LB3,
   //UL1_TX_LB4,
   UL1_TX_MB1,
   UL1_TX_MB2,
   //UL1_TX_MB3,
   UL1_TX_HB1,
   UL1_TX_HB2,
   //UL1_TX_UHB,
   UL1_TX_IO_NONUSED,
}UL1_RF_TX_IO_E;

#elif IS_URF_MT6177L
typedef enum
{
   UL1_TX_LB1,
   UL1_TX_LB2,
   UL1_TX_LB3,
   UL1_TX_LB4,
   UL1_TX_MB1,
   UL1_TX_MB2,
   UL1_TX_MB3,
   UL1_TX_HB1,
   UL1_TX_HB2,
   UL1_TX_UHB,
   UL1_TX_IO_NONUSED,
}UL1_RF_TX_IO_E;

#elif (IS_URF_MT6179 || IS_URF_ORION_HPLUS)
typedef enum
{
   UL1_TX0_LB1,
   UL1_TX0_LB2,
   UL1_TX0_LB3,
   UL1_TX0_LB4,
   UL1_TX0_MB1,
   UL1_TX0_MB2,
   UL1_TX0_MB3,
   UL1_TX0_HB1,
   UL1_TX0_HB2,
   UL1_TX0_UHB,

   UL1_TX1_LB1,
   UL1_TX1_LB2,
   UL1_TX1_MB,
   UL1_TX1_HB,
   UL1_TX1_UHB,

   UL1_TX_IO_NONUSED,
}UL1_RF_TX_IO_E;
#else
typedef enum
{
   TX_HB1 = (0x1 << (UL1_TX_BSEL_HB_SHIFT + 0)),
   TX_HB2 = (0x1 << (UL1_TX_BSEL_HB_SHIFT + 1)),

   TX_MB1 = (0x1 << (UL1_TX_BSEL_MB_SHIFT + 0)),
   TX_MB2 = (0x1 << (UL1_TX_BSEL_MB_SHIFT + 1)),
   TX_MB3 = (0x1 << (UL1_TX_BSEL_MB_SHIFT + 2)),
   TX_MB4 = (0x1 << (UL1_TX_BSEL_MB_SHIFT + 3)),

   TX_LB1 = (0x1 << (UL1_TX_BSEL_LB_SHIFT + 0)),
   TX_LB2 = (0x1 << (UL1_TX_BSEL_LB_SHIFT + 1)),
   TX_LB3 = (0x1 << (UL1_TX_BSEL_LB_SHIFT + 2)),
   TX_LB4 = (0x1 << (UL1_TX_BSEL_LB_SHIFT + 3)),

   TX_IO_NONUSED = NON_USED_BAND,
}UL1_RF_TX_IO_E;
#endif //end of IS_URF_MT6179

/*MT6169*/ #define TX_NULL_BAND                 NON_USED_BAND

/** Tx DET Port selection */
typedef enum
{
   TX_DET_IO_PORT1 = 0,
   TX_DET_IO_PORT2 = 1,
   TX_DET_IO_NON_USED_PORT = 0xFFFF,
}UL1_RF_TX_DET_IO_E;

//MT6293: use MML1 definition
/** RFIC BSI ISB port definition*/
typedef enum
{
#if IS_3G_RFIC_BSI_PORT_SWTICH
   UL1D_RF_RFIC1   = 0x0002,
   UL1D_RF_PMIC    = 0x0001,
   UL1D_RF_RFIC2   = 0x0000,
#else
   UL1D_RF_RFIC1   = 0x0000,
   UL1D_RF_PMIC    = 0x0001,
   UL1D_RF_RFIC2   = 0x0002,
#endif
   UL1D_RF_PORT_CNT,
}UL1D_RF_BSI_PORT_T;

typedef enum
{
   RF_DBG_TRC_DISABLE,
   RF_DBG_TRC_ENABLE,
   RF_DBG_TRC_DUMP_IN_ST3,
   RF_DBG_TRC_DUMP_IN_SR3
} RF_DBG_TRC_E;

/** RFIC to ADC customization routing*/
#if IS_3G_RFIC_ADC_CUSTOM_ROUTE_ENABLE

#if IS_URF_MT6177L_RX
//TBC
#elif IS_URF_MT6176
#define UL1D_RFIC1_SRX1_ADC 1
#define UL1D_RFIC1_SRX2_ADC 2
#elif IS_URF_MT6179
#define UL1D_RFIC1_SRX1_ADC 0
#define UL1D_RFIC1_SRX2_ADC 1
#define UL1D_RFIC2_SRX1_ADC 0
#define UL1D_RFIC2_SRX2_ADC 2
#elif IS_URF_MT6173_RX
#else
  #error
#endif

#endif

/*MT6169*/ /*For RX LNA path mapping*/
/*MT6169*/ #define LNA_HB_1 (0)
/*MT6169*/ #define LNA_HB_2 (1)
/*MT6169*/ #define LNA_HB_3 (2)
/*MT6169*/ #define LNA_MB_1 (3)
/*MT6169*/ #define LNA_MB_2 (4)
/*MT6169*/ #define LNA_LB_1 (5)
/*MT6169*/ #define LNA_LB_2 (6)
/*MT6169*/ #define LNA_LB_3 (7)
/*MT6169*/ /*Start from MT6169, use 0xFF(max) to make all projects in the future aligned with the same value, for customer's comprehension*/
/*MT6169*/
/*MT6169*/ /*For RXD LNA path mapping*/
/*MT6169*/ #define LNA_RXD_HB_1 (0)
/*MT6169*/ #define LNA_RXD_HB_2 (1)
/*MT6169*/ #define LNA_RXD_HB_3 (2)
/*MT6169*/ #define LNA_RXD_MB_1 (3)
/*MT6169*/ #define LNA_RXD_MB_2 (4)
/*MT6169*/ #define LNA_RXD_LB_1 (5)
/*MT6169*/ #define LNA_RXD_LB_2 (6)
/*MT6169*/ #define LNA_RXD_LB_3 (7)
/*MT6169*/ #define LNA_RXD_NON_USED_BAND (NON_USED_BAND)
/*MT6169*/
 /*CW68: IOTX Table 11-5*/
#define TX_HB_1 (0)
#define TX_HB_2 (1)
#define TX_MB_1 (2)
#define TX_MB_2 (3)
#define TX_MB_3 (4)
#define TX_MB_4 (5)
#define TX_LB_1 (6)
#define TX_LB_2 (7)
#define TX_LB_3 (8)
#define TX_LB_4 (9)

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/*MT6169*/
/*MT6169*/ /* PA mode Setting */ /*MT6166 PORTING NOT READY*///(start)
/*MT6169*/ #define  NUMBER_OF_VGA_DAC           10
/*MT6169*/ #define  VM_H                        0
/*MT6169*/ #define  VM_M                        1
/*MT6169*/ #define  VM_L                        3
/*MT6169*/ #define  DC2DC_H                     1
/*MT6169*/ #define  DC2DC_M                     1
/*MT6169*/ #define  DC2DC_L                     0
/*MT6169*/ #define  NUMBER_OF_CALI_DATA_ELEMENT 4
/*MT6169*/  /*MT6167 PORTING NOT READY*///(End)
/*MT6169*/ /*--------------------------------------------------------*/
/*MT6169*/ /* Crystal solution parameter definition                  */
/*MT6169*/ /*--------------------------------------------------------*/
/*MT6169*/ #define  CRYSTAL_CAPID_MAX           255
/*MT6169*/
////////////////////////////////////////////////////////////////////////////////

/*===============================================================================================*/


/*******************************************************************************
** New BPI data type
*******************************************************************************/
typedef kal_uint32     BPI_data_type;

/*******************************************************************************
** META Factory Calibration and 3G RF tool usage
*******************************************************************************/
#if !defined(IS_R6_DCXO_SUPPORT)
#define IS_R6_DCXO_SUPPORT          0
#endif


/*******************************************************************************
** Constants
*******************************************************************************/
#define  UMTS_RF_AFC_NOFFSET        0x00000
#define  CAL_TEMP_SECTION            8
#define  CAL_UARFCN_SECTION         15
#define  CAL_PWR_DETECTOR_SECTION   32
#if IS_PATHLOSS_EXTENTION
#define  UL1_LNA_MODE_NUM           (7)
#endif

#define  UL1D_RF_CUSTOM_BAND (1+5)

#if !defined(NUMBER_OF_VGA_DAC)
#define  NUMBER_OF_VGA_DAC          96
#endif

#define UMTS_RF_CA_BAND_ROUTE_LUT_IDX_MAX   5
#define UMTS_RF_CA_BAND_ROUTE_LUT_IDX_NONE  0xFF
#define UMTS_RF_CA_OPT_FE_SET_LUT_IDX_MAX   5

#define MAX_SUPPORTED_BAND_INDEX (5)

#define  MAX_NUMBER_OF_RX_SUBBLOCK              (2) // for 3C-HSDPA case
#define  MAX_NUMBER_CARRIER_OF_A_RX_SUBBLOCK    (3) // for 3C-HSDPA case
#define  MAX_NUMBER_OF_TX_SUBBLOCK              (1) // for DC-HSUPA case
#define  MAX_NUMBER_CARRIER_OF_A_TX_SUBBLOCK    (2) // for DC-HSUPA case

#define  MAX_NUMBER_OF_RX_SYNTH                 (MAX_NUMBER_OF_RX_SUBBLOCK) //for DB-HSDPA case
#define  MAX_NUMBER_OF_TX_SYNTH                 (MAX_NUMBER_OF_TX_SUBBLOCK) //for DB-HSDPA case

#define UMTS_CA_1ST_SHIFT      (8)
#define UMTS_CA_BAND_MASK      (0xFF)
#define UMTS_CA_2ND_SHIFT      (0)

#define UMTS_RF_CA_FE_NUM_MAX        5
#define UMTS_RF_CA_BAND_NUM_MAX      (UMTS_RF_CA_FE_NUM_MAX * 2) /* 10 */
#define UMTS_RF_FRONT_END_NUM_MAX    (MAX_SUPPORTED_BAND_INDEX + UMTS_RF_CA_FE_NUM_MAX) /* 10 */

#define UMTS_USAGE_TBL_SIZE_MAX      (MAX_SUPPORTED_BAND_INDEX + UMTS_RF_CA_BAND_NUM_MAX) /* 15 */
#define UMTS_ROUTE_TBL_SIZE_MAX      (MAX_SUPPORTED_BAND_INDEX + 2*UMTS_RF_CA_BAND_NUM_MAX) /* 25 */

#define UMTS_RF_DC_TBL_SIZE          (UMTS_ROUTE_TBL_SIZE_MAX + 1)
#define UMTS_AGC_PATHLOSS_TBL_SIZE   (UMTS_ROUTE_TBL_SIZE_MAX + 1)
#define UMTS_MIPI_RX_TBL_SIZE        (UMTS_USAGE_TBL_SIZE_MAX + 1)

#define UMTS_FE_RXBASE_TBL_SIZE_MAX  (UMTS_USAGE_TBL_SIZE_MAX)
#define UMTS_FE_TXBASE_TBL_SIZE_MAX  (UMTS_RF_FRONT_END_NUM_MAX)

#define TBL_IDX_MIPI_DEFAULT   0xFFFF

#define TBL_IDX_FOR_RX_BAND_INDICATOR_0   0
#define TBL_IDX_FOR_RX_BAND_INDICATOR_1   1
#define TBL_IDX_FOR_RX_BAND_INDICATOR_2   2
#define TBL_IDX_FOR_RX_BAND_INDICATOR_3   3
#define TBL_IDX_FOR_RX_BAND_INDICATOR_4   4

#if(IS_3G_FDD_INTERFERENCE_CHECK_SUPPORT)
#define  FREQ_INVALID   0xFFFF
#endif

/*******************************************************************************
 * CA related
 ******************************************************************************/
#define UMTS_RF_CA_MAX_CC_NUM        3
#define UMTS_RF_CA_VCO_DIV_SET_NUM   3 // [0]: RxPCC; [1]: RxSCC [2]: TxPCC
#define UMTS_RF_CA_VCO_SET_RXPCC     0
#define UMTS_RF_CA_VCO_SET_RXSCC     1
#define UMTS_RF_CA_VCO_SET_TXPCC     2

#if IS_URF_MT6179||IS_URF_MT6177L_RX
#define UMTS_RF_RX_VCO_DIV_SET_NUM   1
#else
#define UMTS_RF_RX_VCO_DIV_SET_NUM   3
#endif
#define UMTS_RF_RX_VCO_DIV_SET_1ST   0
#define UMTS_RF_RX_VCO_DIV_SET_2ND   1
#define UMTS_RF_RX_VCO_DIV_SET_3RD   2

#define UMTS_RF_TX_VCO_DIV_SET_NUM   2
#define UMTS_RF_TX_VCO_DIV_SET_1ST   0
#define UMTS_RF_TX_VCO_DIV_SET_2ND   1

#define UMTS_RF_BAND_NUM_MAX         UMTSBandcount

#if IS_3G_DAT_UL1_CUSTOM_SUPPORT
/*******************************************************************************
 * TAS definition
 ******************************************************************************/
#define UMTS_DAT_SCENARIO_DEFAULT         (-1)
#define UMTS_DAT_MAX_STATE_NUM            8
#define UMTS_DAT_MAX_CAT_A_ROUTE_NUM      10
#define UMTS_DAT_MAX_CAT_B_ROUTE_NUM      40
#define UMTS_DAT_MAX_FE_ROUTE_NUM         MAX_SUPPORTED_BAND_INDEX
#define UMTS_DAT_MIPI_TABLE_NULL          (0xFF)
#define UMTS_DAT_FE_NULL                  (0xFF)

#define UMTSBandNone_DAT_STATE_NUM_SetDefault                       0
#define UMTSBandNone_DAT_STATE0_CAT_A_ROUTE_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE0_CAT_B_ROUTE_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE1_CAT_A_ROUTE_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE1_CAT_B_ROUTE_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE2_CAT_A_ROUTE_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE2_CAT_B_ROUTE_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE3_CAT_A_ROUTE_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE3_CAT_B_ROUTE_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE4_CAT_A_ROUTE_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE4_CAT_B_ROUTE_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE5_CAT_A_ROUTE_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE5_CAT_B_ROUTE_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE6_CAT_A_ROUTE_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE6_CAT_B_ROUTE_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE7_CAT_A_ROUTE_SetDefault              UMTS_DAT_FE_NULL
#define UMTSBandNone_DAT_STATE7_CAT_B_ROUTE_SetDefault              UMTS_DAT_FE_NULL

#define UMTS_DAT_FEATURE_ENABLE(s)                  UMTS_DAT_FEATURE_ENABLE_##s

#define UMTS_MIPI_DAT_EVENT(rt,s)                   UMTS_##rt##_MIPI_EVENT_##s
#define UMTS_MIPI_DAT_DATA(rt,s)                    UMTS_##rt##_MIPI_DATA_##s

#define M_UMTS_SB_FE_DAT_SETTING(b,s)                                                                                                     \
{                                                                                                                                         \
   b/*usage*/,                                                                                                                            \
   { /*split part1*/                                                                                                                         \
      { /*tas route state 0*/ b##_##DAT_STATE0_CAT_A_CONFIG##_##s, b##_##DAT_STATE0_CAT_B_CONFIG##_##s},  \
      { /*tas route state 1*/ b##_##DAT_STATE1_CAT_A_CONFIG##_##s, b##_##DAT_STATE1_CAT_B_CONFIG##_##s},  \
      { /*tas route state 2*/ b##_##DAT_STATE2_CAT_A_CONFIG##_##s, b##_##DAT_STATE2_CAT_B_CONFIG##_##s},  \
      { /*tas route state 3*/ b##_##DAT_STATE3_CAT_A_CONFIG##_##s, b##_##DAT_STATE3_CAT_B_CONFIG##_##s},  \
      { /*tas route state 4*/ b##_##DAT_STATE4_CAT_A_CONFIG##_##s, b##_##DAT_STATE4_CAT_B_CONFIG##_##s},  \
      { /*tas route state 5*/ b##_##DAT_STATE5_CAT_A_CONFIG##_##s, b##_##DAT_STATE5_CAT_B_CONFIG##_##s},  \
      { /*tas route state 6*/ b##_##DAT_STATE6_CAT_A_CONFIG##_##s, b##_##DAT_STATE6_CAT_B_CONFIG##_##s},  \
      { /*tas route state 7*/ b##_##DAT_STATE7_CAT_A_CONFIG##_##s, b##_##DAT_STATE7_CAT_B_CONFIG##_##s},  \
   },                                                                                                                                      \
}

#define UMTS_SB_DAT_CONFIGURE(band_ind,s)               M_UMTS_SB_FE_DAT_SETTING(band_ind,s)
#endif

#if IS_3G_TAS_UL1_CUSTOM_SUPPORT
/*******************************************************************************
 * TAS definition
 ******************************************************************************/
// Transmit Antenna Selection Feature
#define UMTS_RF_TAS_SET_NUM                15 //How many selection sets for each band
#define UMTS_RF_TAS_BAND_NUM              (UMTS_RF_CA_FE_NUM_MAX)
#define UMTS_RF_TAS_TOTAL_NUM             (UMTS_RF_TAS_BAND_NUM*UMTS_RF_TAS_SET_NUM)

#define UMTS_TAS_MAX_STATE_NUM            8
#define UMTS_TAS_MAX_CAT_A_ROUTE_NUM      10
#define UMTS_TAS_MAX_CAT_B_ROUTE_NUM      10
#define UMTS_TAS_MAX_CAT_C_ROUTE_NUM      10
#define UMTS_TAS_MAX_FE_ROUTE_NUM         MAX_SUPPORTED_BAND_INDEX

#define UMTS_TAS_DISBLE                   (UMTS_TAS_DISABLE)

#if IS_3G_TAS_INHERIT_4G_ANT
#define UMTS_TAS_INHERIT_LTE_BAND(band)   {band}
#define UMTS_TAS_INHERIT_LTE_BAND_END     {LTE_BandNone}
#define UMTS_TAS_INHERIT_LTE_BAND_MAX_NUM LTE_Band_Supported_Max //0xFF

#define UMTS_TAS_INHERIT_LTE_BAND_BITMAP_NUM  8 /* 256/32 = 8 words */

#define M_UMTS_TAS_INHERIT_LTE_ANT(b,s)                    UMTS_TAS_INHERIT_LTE_ANT_##b##_##s
#define UMTS_TAS_INHERIT_LTE_ANT_CONFIGURE(band_ind,s)     M_UMTS_TAS_INHERIT_LTE_ANT(band_ind,s)

#endif

#define UMTS_TAS_VERSION(s)                         UMTS_TAS_VERSION_##s
#define UMTS_TAS_FORCE_ENABLE(s)                    UMTS_TAS_FORCE_ENABLE_##s
#define UMTS_TAS_FORCE_INIT_SETTING(s)              UMTS_TAS_FORCE_INIT_SETTING_##s
#define UMTS_TAS_ICS_INIT_ANT_STATE(s)              UMTS_TAS_ICS_INIT_ANT_STATE_##s
#define UMTS_TAS_ENABLE_ON_REAL_SIM(s)              UMTS_TAS_ENABLE_ON_REAL_SIM_##s
#define UMTS_TAS_ENABLE_ON_TEST_SIM(s)              UMTS_TAS_ENABLE_ON_TEST_SIM_##s

#define UMTS_MIPI_TAS_EVENT(rt,s)                   UMTS_##rt##_MIPI_EVENT_##s
#define UMTS_MIPI_TAS_DATA(rt,s)                    UMTS_##rt##_MIPI_DATA_##s

#define M_UMTS_SB_FE_TAS_SETTING(b,s)                                                                                                     \
{                                                                                                                                         \
   b/*usage*/,                                                                                                                            \
   b##_##TAS_STATE_NUM##_##s,                                                                                                             \
   {                                                                                                                                      \
      { /*real sim*/    b##_##TAS_REAL_SIM_BY_ROUTE_TAS_ENABLE##_##s, b##_##TAS_REAL_SIM_BY_ROUTE_INIT_SETTING##_##s },                     \
      { /*test sim*/    b##_##TAS_TEST_SIM_BY_ROUTE_TAS_ENABLE##_##s, b##_##TAS_TEST_SIM_BY_ROUTE_INIT_SETTING##_##s },                    \
   },                                                                                                                                     \
   { /*split part1*/                                                                                                                         \
      { /*tas route state 0*/ b##_##TAS_STATE0_CAT_A_ROUTE##_##s, b##_##TAS_STATE0_CAT_B_ROUTE##_##s, b##_##TAS_STATE0_CAT_C_ROUTE##_##s },  \
      { /*tas route state 1*/ b##_##TAS_STATE1_CAT_A_ROUTE##_##s, b##_##TAS_STATE1_CAT_B_ROUTE##_##s, b##_##TAS_STATE1_CAT_C_ROUTE##_##s },  \
      { /*tas route state 2*/ b##_##TAS_STATE2_CAT_A_ROUTE##_##s, b##_##TAS_STATE2_CAT_B_ROUTE##_##s, b##_##TAS_STATE2_CAT_C_ROUTE##_##s },  \
      { /*tas route state 3*/ b##_##TAS_STATE3_CAT_A_ROUTE##_##s, b##_##TAS_STATE3_CAT_B_ROUTE##_##s, b##_##TAS_STATE3_CAT_C_ROUTE##_##s },  \
      { /*tas route state 4*/ b##_##TAS_STATE4_CAT_A_ROUTE##_##s, b##_##TAS_STATE4_CAT_B_ROUTE##_##s, b##_##TAS_STATE4_CAT_C_ROUTE##_##s },  \
      { /*tas route state 5*/ b##_##TAS_STATE5_CAT_A_ROUTE##_##s, b##_##TAS_STATE5_CAT_B_ROUTE##_##s, b##_##TAS_STATE5_CAT_C_ROUTE##_##s },  \
      { /*tas route state 6*/ b##_##TAS_STATE6_CAT_A_ROUTE##_##s, b##_##TAS_STATE6_CAT_B_ROUTE##_##s, b##_##TAS_STATE6_CAT_C_ROUTE##_##s },  \
      { /*tas route state 7*/ b##_##TAS_STATE7_CAT_A_ROUTE##_##s, b##_##TAS_STATE7_CAT_B_ROUTE##_##s, b##_##TAS_STATE7_CAT_C_ROUTE##_##s },  \
   },                                                                                                                                      \
}

#define UMTS_SB_TAS_CONFIGURE(band_ind,s)               M_UMTS_SB_FE_TAS_SETTING(band_ind,s)

#if IS_3G_TAS_TST_SUPPORT
#define UMTS_TAS_TST_ENABLE_BY_RAT(s)                   (UMTS_TAS_TST_CONFIG_ENABLE_##s)

#define M_UMTS_SB_FE_TAS_TST_SETTING(b,s)                                                                                                 \
{                                                                                                                                         \
   b/*usage*/,                                                                                                                            \
   b##_##TAS_TST_BY_ROUTE_ENABLE##_##s,                                                                                                   \
   ((b##_##TAS_TST_STATE0_ENABLE##_##s)<<UMTS_TAS_STATE0)|((b##_##TAS_TST_STATE1_ENABLE##_##s)<<UMTS_TAS_STATE1)|                         \
   ((b##_##TAS_TST_STATE2_ENABLE##_##s)<<UMTS_TAS_STATE2)|((b##_##TAS_TST_STATE3_ENABLE##_##s)<<UMTS_TAS_STATE3)|                         \
   ((b##_##TAS_TST_STATE4_ENABLE##_##s)<<UMTS_TAS_STATE4)|((b##_##TAS_TST_STATE5_ENABLE##_##s)<<UMTS_TAS_STATE5)|                         \
   ((b##_##TAS_TST_STATE6_ENABLE##_##s)<<UMTS_TAS_STATE6)|((b##_##TAS_TST_STATE7_ENABLE##_##s)<<UMTS_TAS_STATE7)                          \
}

#define UMTS_SB_TAS_TST_CONFIGURE(band_ind,s)               M_UMTS_SB_FE_TAS_TST_SETTING(band_ind,s)
#endif
#endif

/*******************************************************************************
 * DPD define
 ******************************************************************************/
#define UL1_DPD_MAX_PA_LEVEL_NUM           8
#define UL1_DPD_MAX_PGA_NUM_PER_PA         1
#define UL1_DPD_MAX_AM_LUT_GAIN_NUM        (UL1_DPD_MAX_PA_LEVEL_NUM * UL1_DPD_MAX_PGA_NUM_PER_PA) /* PA*PGA gain combination */
#define UL1_DPD_MAX_PM_LUT_GAIN_NUM        UL1_DPD_MAX_AM_LUT_GAIN_NUM /* Align AM */
#define UL1D_DPD_MAX_PA_MODE_NUM           3
#define UL1D_DPD_MAX_PA_HYST_NUM           (UL1D_DPD_MAX_PA_MODE_NUM - 1)

/*******************************************************************************
** Macro define
*******************************************************************************/
#define M_UMTS_AGC_PATHLOSS_DEFAULT(x)            &AGC_PATHLOSS_##x##_SetDefault
#define M_UMTS_RX_PATHLOSS_DEFAULT(x)             M_UMTS_AGC_PATHLOSS_DEFAULT(x)

#define M_UMTS_AGC_PATHLOSS_RXXD_DEFAULT(x)       &AGC_PATHLOSS_RXD_##x##_SetDefault
#define M_UMTS_RX_PATHLOSS_RXD_DEFAULT(x)         M_UMTS_AGC_PATHLOSS_RXXD_DEFAULT(x)

#define M_UMTS_RAMPDATA_DEFAULT(x)                &RampData_##x##_SetDefault
#define M_UMTS_TX_RAMPDATA_DEFAULT(x)             M_UMTS_RAMPDATA_DEFAULT(x)

#define M_UMTS_PA_OCTLEV_DATA_DEFAULT(x)          &PaOctLevData_##x##_SetDefault
#define M_UMTS_TX_PA_OCTLEV_DATA_DEFAULT(x)       M_UMTS_PA_OCTLEV_DATA_DEFAULT(x)

#define M_UMTS_PA_DRIFT_COMP_DATA_DEFAULT(x)      &PaDriftCompData_##x##_SetDefault
#define M_UMTS_TX_PA_DRIFT_COMP_DATA_DEFAULT(x)   M_UMTS_PA_DRIFT_COMP_DATA_DEFAULT(x)

#define M_UMTS_RACH_TEMP_COMP_DATA_DEFAULT(x)     &RACH_temperature_compensation_##x##_SetDefault
#define M_UMTS_TX_RACH_TEMP_COMP_DATA_DEFAULT(x)  M_UMTS_RACH_TEMP_COMP_DATA_DEFAULT(x)

#define M_UMTS_DPD_RAMPDATA_DEFAULT(x)            &DPD_RampData_##x##_SetDefault
#define M_UMTS_DPD_TX_RAMPDATA_DEFAULT(x)         M_UMTS_DPD_RAMPDATA_DEFAULT(x)

#define M_UMTS_DPD_PA_OCTLEV_DATA_DEFAULT(x)      &DPD_PaOctLevData_##x##_SetDefault
#define M_UMTS_DPD_TX_PA_OCTLEV_DATA_DEFAULT(x)   M_UMTS_DPD_PA_OCTLEV_DATA_DEFAULT(x)


/*********************************************************************************/
#define M_UMTS_AGC_PATHLOSS(x, sET)       &AGC_PATHLOSS_##x##_##sET
#define M_UMTS_RX_AGC_PATHLOSS(x, sET)    M_UMTS_AGC_PATHLOSS(x, sET)

#define M_UMTS_AGC_PATHLOSS_RXD(x,sET)        &AGC_PATHLOSS_RXD_##x##_##sET
#define M_UMTS_RX_AGC_PATHLOSS_RXD(x,sET)     M_UMTS_AGC_PATHLOSS_RXD(x,sET)

#define M_UMTS_RAMPDATA(x,sET)                &RampData_##x##_##sET
#define M_UMTS_TX_RAMPDATA(x,sET)             M_UMTS_RAMPDATA(x,sET)

#define M_UMTS_PA_OCTLEV_DATA(x,sET)          &PaOctLevData_##x##_##sET
#define M_UMTS_TX_PA_OCTLEV_DATA(x,sET)       M_UMTS_PA_OCTLEV_DATA(x,sET)

#define M_UMTS_PA_DRIFT_COMP_DATA(x,sET)      &PaDriftCompData_##x##_##sET
#define M_UMTS_TX_PA_DRIFT_COMP_DATA(x,sET)   M_UMTS_PA_DRIFT_COMP_DATA(x,sET)

#define M_UMTS_RACH_TEMP_COMP_DATA(x,sET)     &RACH_temperature_compensation_##x##_##sET
#define M_UMTS_TX_RACH_TEMP_COMP_DATA(x,sET)  M_UMTS_RACH_TEMP_COMP_DATA(x,sET)

#define UMTS_SB_DEFAULT      (0xFFFF)

#define M_UMTS_CA_BAND(x, y) ((x << UMTS_CA_1ST_SHIFT) | (y << UMTS_CA_2ND_SHIFT))

#define M_UMTS_DPD_RAMPDATA(x,sET)              &DPD_RampData_##x##_##sET
#define M_UMTS_DPD_TX_RAMPDATA(x,sET)           M_UMTS_DPD_RAMPDATA(x,sET)

#define M_UMTS_DPD_PA_OCTLEV_DATA(x,sET)        &DPD_PaOctLevData_##x##_##sET
#define M_UMTS_DPD_TX_PA_OCTLEV_DATA(x,sET)     M_UMTS_DPD_PA_OCTLEV_DATA(x,sET)

#define M_UMTS_DPD_COMMON_CTRL_DATA_TEMP(x,sET) &DPD_CommonCtrlData_##x##_##sET
#define M_UMTS_DPD_COMMON_CTRL_DATA(x,sET)      M_UMTS_DPD_COMMON_CTRL_DATA_TEMP(x,sET)

/*===============================================================================*/

#define M_UMTS_Band_PDATA_PR1(b)                    PDATA_##b##_PR1_##SetDefault
#define M_UMTS_PDATA_PR1(b)                         M_UMTS_Band_PDATA_PR1(b)

#define M_UMTS_Band_PDATA_PR2(b)                    PDATA_##b##_PR2_##SetDefault
#define M_UMTS_PDATA_PR2(b)                         M_UMTS_Band_PDATA_PR2(b)

#define M_UMTS_Band_PDATA_PR3(b)                    PDATA_##b##_PR3_##SetDefault
#define M_UMTS_PDATA_PR3(b)                         M_UMTS_Band_PDATA_PR3(b)

#if IS_3G_RXD_FE_CONTROL_SUPPORT
#define M_UMTS_Band_PDATA2_PR1(b)                   PDATA2_##b##_PR1_##SetDefault
#define M_UMTS_PDATA2_PR1(b)                        M_UMTS_Band_PDATA2_PR1(b)

#define M_UMTS_Band_PDATA2_PR2(b)                   PDATA2_##b##_PR2_##SetDefault
#define M_UMTS_PDATA2_PR2(b)                        M_UMTS_Band_PDATA2_PR2(b)

#define M_UMTS_Band_PDATA2_PR3(b)                   PDATA2_##b##_PR3_##SetDefault
#define M_UMTS_PDATA2_PR3(b)                        M_UMTS_Band_PDATA2_PR3(b)
#endif

#define M_UMTS_Band_PDATA_PT1(b)                    PDATA_##b##_PT1_##SetDefault
#define M_UMTS_PDATA_PT1(b)                         M_UMTS_Band_PDATA_PT1(b)

#define M_UMTS_Band_PDATA_PT2(b)                    PDATA_##b##_PT2_##SetDefault
#define M_UMTS_PDATA_PT2(b)                         M_UMTS_Band_PDATA_PT2(b)

#define M_UMTS_Band_PDATA_PT3(b)                    PDATA_##b##_PT3_##SetDefault
#define M_UMTS_PDATA_PT3(b)                         M_UMTS_Band_PDATA_PT3(b)

#define M_UMTS_Band_RX_IO(b)                        b##_CHANNEL_SEL_##SetDefault
#define M_UMTS_RX_IO(b)                             M_UMTS_Band_RX_IO(b)

#define M_UMTS_Band_RXD_IO(b)                       b##_CHANNEL2_SEL_##SetDefault
#define M_UMTS_RXD_IO(b)                            M_UMTS_Band_RXD_IO(b)

#define M_UMTS_Band_TX_IO(b)                        b##_OUTPUT_SEL_##SetDefault
#define M_UMTS_TX_IO(b)                             M_UMTS_Band_TX_IO(b)

#define M_UMTS_Band_TX_DET_IO(b)                    b##_OUTPUT_DET_SEL_##SetDefault
#define M_UMTS_TX_DET_IO(b)                         M_UMTS_Band_TX_DET_IO(b)
/*===============================================================================*/

#if IS_3G_RXD_FE_CONTROL_SUPPORT
#define M_UMTS_RF_RX_PDATABASE(b)                              \
{  b,                                                        \
   {M_UMTS_PDATA_PR1(b), M_UMTS_PDATA_PR2(b), M_UMTS_PDATA_PR2(b), M_UMTS_PDATA_PR3(b), M_UMTS_PDATA_PR3(b)\
   },                                                        \
   {M_UMTS_PDATA2_PR1(b), M_UMTS_PDATA2_PR2(b), M_UMTS_PDATA2_PR2(b), M_UMTS_PDATA2_PR3(b), M_UMTS_PDATA2_PR3(b)\
   }                                                         \
}
#else
#define M_UMTS_RF_RX_PDATABASE(b)                              \
{  b,                                                        \
   {M_UMTS_PDATA_PR1(b), M_UMTS_PDATA_PR2(b), M_UMTS_PDATA_PR2(b), M_UMTS_PDATA_PR3(b), M_UMTS_PDATA_PR3(b)\
   }                                                         \
}
#endif

#define M_UMTS_RF_TX_PDATABASE(b)                              \
{  b,                                                        \
   {M_UMTS_PDATA_PT1(b), M_UMTS_PDATA_PT2(b), M_UMTS_PDATA_PT2(b), M_UMTS_PDATA_PT3(b), M_UMTS_PDATA_PT3(b)\
   }                                                         \
}

#define M_UMTS_RF_RXIOBASE(b)                                  \
{ b, {(M_UMTS_RX_IO(b)), (M_UMTS_RXD_IO(b))}                      \
}

#define M_UMTS_RF_TXIOBASE(b)                                  \
{ b, {(M_UMTS_TX_IO(b)), (M_UMTS_TX_DET_IO(b))}                   \
}

/*===============================================================================*/
#if IS_URF_MT6177L || IS_URF_MT6173  // remove tx det io referenced in ul1d_custom_rf.c

#if IS_3G_RXD_FE_CONTROL_SUPPORT
#define UMTS_SB_FE_ROUTE_SETTING(x, y, z)                                           \
{  x, 1,                                                                         \
   {  { x,                                                                       \
         {                                                                       \
/*RX IO  */ {  x##_CHANNEL_SEL_##z, x##_CHANNEL2_SEL_##z  },                              \
/*RX BPI */ {  PDATA_##x##_PR1_##z, PDATA_##x##_PR2_##z, PDATA_##x##_PR2_##z, PDATA_##x##_PR3_##z, PDATA_##x##_PR3_##z }, \
/*RX2 BPI*/ {  PDATA2_##x##_PR1_##z, PDATA2_##x##_PR2_##z, PDATA2_##x##_PR2_##z, PDATA2_##x##_PR3_##z, PDATA2_##x##_PR3_##z }, \
/*RX MIPI*/    y                                                                  \
         },                                                                       \
         {                                                                        \
/*TX IO  */ {  x##_OUTPUT_SEL_##z, TX_DET_IO_NON_USED_PORT  },                                                  \
/*TX BPI */ {  PDATA_##x##_PT1_##z, PDATA_##x##_PT2_##z, PDATA_##x##_PT2_##z, PDATA_##x##_PT3_##z, PDATA_##x##_PT3_##z }, \
/*TX MIPI*/    y                                                                  \
         },                                                                       \
      },                                                                          \
      { UMTSBandNone, { {0,0}, {0,0,0}, {0,0,0}, 0 },                             \
                      { {0  }, {0,0,0}, 0 }                                       \
      }                                                                           \
   }                                                                              \
}
#else
#define UMTS_SB_FE_ROUTE_SETTING(x, y, z)                                           \
{  x, 1,                                                                         \
   {  { x,                                                                       \
         {                                                                       \
/*RX IO  */ {  x##_CHANNEL_SEL_##z, x##_CHANNEL2_SEL_##z  },                              \
/*RX BPI */ {  PDATA_##x##_PR1_##z, PDATA_##x##_PR2_##z, PDATA_##x##_PR2_##z, PDATA_##x##_PR3_##z, PDATA_##x##_PR3_##z }, \
/*RX MIPI*/    y                                                                  \
         },                                                                       \
         {                                                                        \
/*TX IO  */ {  x##_OUTPUT_SEL_##z, TX_DET_IO_NON_USED_PORT  },                                                  \
/*TX BPI */ {  PDATA_##x##_PT1_##z, PDATA_##x##_PT2_##z, PDATA_##x##_PT2_##z, PDATA_##x##_PT3_##z, PDATA_##x##_PT3_##z }, \
/*TX MIPI*/    y                                                                  \
         },                                                                       \
      },                                                                          \
      { UMTSBandNone, { {0,0}, {0,0,0}, 0 },                                      \
                      { {0  }, {0,0,0}, 0 }                                       \
      }                                                                           \
   }                                                                              \
}
#endif

#else
#define UMTS_SB_FE_ROUTE_SETTING(x, y, z)                                           \
{  x, 1,                                                                         \
   {  { x,                                                                       \
         {                                                                       \
/*RX IO  */ {  x##_CHANNEL_SEL_##z, x##_CHANNEL2_SEL_##z  },                              \
/*RX BPI */ {  PDATA_##x##_PR1_##z, PDATA_##x##_PR2_##z, PDATA_##x##_PR2_##z, PDATA_##x##_PR3_##z, PDATA_##x##_PR3_##z }, \
/*RX MIPI*/    y                                                                  \
         },                                                                       \
         {                                                                        \
/*TX IO  */ {  x##_OUTPUT_SEL_##z, x##_OUTPUT_DET_SEL_##z  },                                                  \
/*TX BPI */ {  PDATA_##x##_PT1_##z, PDATA_##x##_PT2_##z, PDATA_##x##_PT2_##z, PDATA_##x##_PT3_##z, PDATA_##x##_PT3_##z }, \
/*TX MIPI*/    y                                                                  \
         },                                                                       \
      },                                                                          \
      { UMTSBandNone, { {0,0}, {0,0,0}, 0 },                                      \
                      { {0  }, {0,0,0}, 0 }                                       \
      }                                                                           \
   }                                                                              \
}
#endif

#define UMTS_SB_FE_PRE_SETTING(x, y, z)                                              \
        UMTS_SB_FE_ROUTE_SETTING(x, y, z)
#define UMTS_SB_FE_SETTING(band_ind, sET)                                              \
        UMTS_SB_FE_PRE_SETTING(band_ind##_##sET, TBL_IDX_FOR_##band_ind, sET )

#if IS_3G_RXD_FE_CONTROL_SUPPORT
#define UMTS_CA_FE_ROUTE_SETTING(x, z)                                               \
{                                                                                 \
   x, x##_CCNUM_##z,                                                                  \
   {  {  x##_CC0_##z,                                                                 \
         {                                                                        \
/*RX IO  */ {  x##_CC0_CHANNEL_SEL_##z, x##_CC0_CHANNEL2_SEL_##z  },                       \
/*RX BPI */ {  x##_CC0_PDATA_PR1_##z, x##_CC0_PDATA_PR2_##z, x##_CC0_PDATA_PR2_##z, x##_CC0_PDATA_PR3_##z, x##_CC0_PDATA_PR3_##z }, \
/*RX2 BPI*/ {  x##_CC0_PDATA2_PR1_##z, x##_CC0_PDATA2_PR2_##z, x##_CC0_PDATA2_PR2_##z, x##_CC0_PDATA2_PR3_##z, x##_CC0_PDATA2_PR3_##z }, \
/*RX MIPI*/   x##_CC0_RX_MIPI_TBL_IDX_##z                                            \
         },                                                                       \
         {                                                                        \
/*TX IO  */ {  x##_CC0_OUTPUT_SEL_##z, x##_CC0_OUTPUT_DET_SEL_##z  },                                              \
/*TX BPI */ {  x##_CC0_PDATA_PT1_##z, x##_CC0_PDATA_PT2_##z, x##_CC0_PDATA_PT2_##z, x##_CC0_PDATA_PT3_##z, x##_CC0_PDATA_PT3_##z }, \
/*TX MIPI*/   x##_CC0_TX_MIPI_TBL_IDX_##z                                            \
         }                                                                        \
      },                                                                          \
      {  x##_CC1_##z,                                                                 \
         {                                                                        \
/*RX IO  */ {  x##_CC1_CHANNEL_SEL_##z, x##_CC1_CHANNEL2_SEL_##z  },                       \
/*RX BPI */ {  x##_CC1_PDATA_PR1_##z, x##_CC1_PDATA_PR2_##z, x##_CC1_PDATA_PR2_##z, x##_CC1_PDATA_PR3_##z, x##_CC1_PDATA_PR3_##z }, \
/*RX2 BPI*/ {  x##_CC1_PDATA2_PR1_##z, x##_CC1_PDATA2_PR2_##z, x##_CC1_PDATA2_PR2_##z, x##_CC1_PDATA2_PR3_##z, x##_CC1_PDATA2_PR3_##z }, \
/*RX MIPI*/   x##_CC1_RX_MIPI_TBL_IDX_##z                                             \
         },                                                                       \
         {                                                                        \
/*TX IO  */ {  x##_CC1_OUTPUT_SEL_##z, x##_CC1_OUTPUT_DET_SEL_##z  },                                              \
/*TX BPI */ {  x##_CC1_PDATA_PT1_##z,  x##_CC1_PDATA_PT2_##z, x##_CC1_PDATA_PT2_##z, x##_CC1_PDATA_PT3_##z, x##_CC1_PDATA_PT3_##z}, \
/*TX MIPI*/   x##_CC1_TX_MIPI_TBL_IDX_##z                                            \
         }                                                                        \
      }                                                                           \
   }                                                                              \
}
#else
#define UMTS_CA_FE_ROUTE_SETTING(x, z)                                               \
{                                                                                 \
   x, x##_CCNUM_##z,                                                                  \
   {  {  x##_CC0_##z,                                                                 \
         {                                                                        \
/*RX IO  */ {  x##_CC0_CHANNEL_SEL_##z, x##_CC0_CHANNEL2_SEL_##z  },                       \
/*RX BPI */ {  x##_CC0_PDATA_PR1_##z, x##_CC0_PDATA_PR2_##z, x##_CC0_PDATA_PR2_##z, x##_CC0_PDATA_PR3_##z, x##_CC0_PDATA_PR3_##z }, \
/*RX MIPI*/   x##_CC0_RX_MIPI_TBL_IDX_##z                                            \
         },                                                                       \
         {                                                                        \
/*TX IO  */ {  x##_CC0_OUTPUT_SEL_##z, x##_CC0_OUTPUT_DET_SEL_##z  },                                              \
/*TX BPI */ {  x##_CC0_PDATA_PT1_##z, x##_CC0_PDATA_PT2_##z, x##_CC0_PDATA_PT2_##z, x##_CC0_PDATA_PT3_##z, x##_CC0_PDATA_PT3_##z }, \
/*TX MIPI*/   x##_CC0_TX_MIPI_TBL_IDX_##z                                            \
         }                                                                        \
      },                                                                          \
      {  x##_CC1_##z,                                                                 \
         {                                                                        \
/*RX IO  */ {  x##_CC1_CHANNEL_SEL_##z, x##_CC1_CHANNEL2_SEL_##z  },                       \
/*RX BPI */ {  x##_CC1_PDATA_PR1_##z, x##_CC1_PDATA_PR2_##z, x##_CC1_PDATA_PR2_##z, x##_CC1_PDATA_PR3_##z, x##_CC1_PDATA_PR3_##z }, \
/*RX MIPI*/   x##_CC1_RX_MIPI_TBL_IDX_##z                                             \
         },                                                                       \
         {                                                                        \
/*TX IO  */ {  x##_CC1_OUTPUT_SEL_##z, x##_CC1_OUTPUT_DET_SEL_##z  },                                              \
/*TX BPI */ {  x##_CC1_PDATA_PT1_##z,  x##_CC1_PDATA_PT2_##z, x##_CC1_PDATA_PT2_##z, x##_CC1_PDATA_PT3_##z, x##_CC1_PDATA_PT3_##z}, \
/*TX MIPI*/   x##_CC1_TX_MIPI_TBL_IDX_##z                                            \
         }                                                                        \
      }                                                                           \
   }                                                                              \
}
#endif

#define UMTS_CA_FE_PRE_SETTING(x, z)                                              \
        UMTS_CA_FE_ROUTE_SETTING(x, z)
#define UMTS_CA_FE_SETTING(ca_band_ind, sET)                                              \
        UMTS_CA_FE_PRE_SETTING(ca_band_ind##_##sET, sET )

#if IS_3G_RXD_FE_CONTROL_SUPPORT
#define UMTS_CA_COMPARE_RX_FE_SETTING( src, dst )                                  \
   src->rx_cfg.rxIodata.rxio     == dst->rx_cfg.rxIodata.rxio     &&              \
   src->rx_cfg.rxIodata.rxdio    == dst->rx_cfg.rxIodata.rxdio    &&              \
   src->rx_cfg.rxPdata.pr1       == dst->rx_cfg.rxPdata.pr1       &&              \
   src->rx_cfg.rxPdata.pr2       == dst->rx_cfg.rxPdata.pr2       &&              \
   src->rx_cfg.rxPdata.pr2b      == dst->rx_cfg.rxPdata.pr2b      &&              \
   src->rx_cfg.rxPdata.pr3       == dst->rx_cfg.rxPdata.pr3       &&              \
   src->rx_cfg.rxPdata.pr3a      == dst->rx_cfg.rxPdata.pr3a      &&              \
   src->rx_cfg.rxPdata2.pr1      == dst->rx_cfg.rxPdata2.pr1      &&              \
   src->rx_cfg.rxPdata2.pr2      == dst->rx_cfg.rxPdata2.pr2      &&              \
   src->rx_cfg.rxPdata2.pr2b     == dst->rx_cfg.rxPdata2.pr2b     &&              \
   src->rx_cfg.rxPdata2.pr3      == dst->rx_cfg.rxPdata2.pr3      &&              \
   src->rx_cfg.rxPdata2.pr3a     == dst->rx_cfg.rxPdata2.pr3a     &&              \
   src->rx_cfg.rxMipiTblIdx      == dst->rx_cfg.rxMipiTblIdx
#else
#define UMTS_CA_COMPARE_RX_FE_SETTING( src, dst )                                  \
   src->rx_cfg.rxIodata.rxio     == dst->rx_cfg.rxIodata.rxio     &&              \
   src->rx_cfg.rxIodata.rxdio    == dst->rx_cfg.rxIodata.rxdio    &&              \
   src->rx_cfg.rxPdata.pr1       == dst->rx_cfg.rxPdata.pr1       &&              \
   src->rx_cfg.rxPdata.pr2       == dst->rx_cfg.rxPdata.pr2       &&              \
   src->rx_cfg.rxPdata.pr2b      == dst->rx_cfg.rxPdata.pr2b      &&              \
   src->rx_cfg.rxPdata.pr3       == dst->rx_cfg.rxPdata.pr3       &&              \
   src->rx_cfg.rxPdata.pr3a      == dst->rx_cfg.rxPdata.pr3a      &&              \
   src->rx_cfg.rxMipiTblIdx      == dst->rx_cfg.rxMipiTblIdx
#endif

#define UMTS_CA_COMPARE_TX_FE_SETTING( src, dst )                                  \
   src->tx_cfg.txIodata.txio    == dst->tx_cfg.txIodata.txio    &&                \
   src->tx_cfg.txPdata.pt1      == dst->tx_cfg.txPdata.pt1      &&                \
   src->tx_cfg.txPdata.pt2      == dst->tx_cfg.txPdata.pt2      &&                \
   src->tx_cfg.txPdata.pt2b     == dst->tx_cfg.txPdata.pt2b     &&                \
   src->tx_cfg.txPdata.pt3      == dst->tx_cfg.txPdata.pt3      &&                \
   src->tx_cfg.txPdata.pt3a     == dst->tx_cfg.txPdata.pt3a     &&                \
   src->tx_cfg.txMipiTblIdx     == dst->tx_cfg.txMipiTblIdx

#if (IS_3G_TAS_SUPPORT)
#define M_UMTS_TAS_BPI(value, mask, bpiData) (((value)&(mask))|(bpiData))

#define UL1D_TAS_BPI_PIN_GEN(var1, var2, var3, sET)   ( ((UMTS_TAS_BPI_PIN_1_##sET==UMTS_TAS_BPI_PIN_NULL_##sET)?0:((var1)<< UMTS_TAS_BPI_PIN_1_##sET))|\
                                                   ((UMTS_TAS_BPI_PIN_2_##sET==UMTS_TAS_BPI_PIN_NULL_##sET)?0:((var2)<< UMTS_TAS_BPI_PIN_2_##sET))|\
                                                   ((UMTS_TAS_BPI_PIN_3_##sET==UMTS_TAS_BPI_PIN_NULL_##sET)?0:((var3)<< UMTS_TAS_BPI_PIN_3_##sET)) )

#endif/*IS_3G_TAS_SUPPORT*/

// Power on CAL
#define UMTS_Band_PWRON_CAL_DATA(b)        b##_PWRON_CAL_DATA
#define UMTS_PWRON_CAL_DATA(b)             UMTS_Band_PWRON_CAL_DATA(b)

#if (IS_3G_TX_POWER_OFFSET_SUPPORT || IS_3G_SAR_TX_POWER_BACKOFF_SUPPORT)
#define TPO_3G_TABLE_NUM  TPO_MML1_TABLE_NUM
#define UMTS_Band_TX_PWR_OFFSET(b, sET)     &TxPowerOffsetData_##b##_##sET
#define M_UMTS_TX_PWR_OFFSET(b, sET)        UMTS_Band_TX_PWR_OFFSET(b, sET)
#endif

#if (IS_3G_RX_POWER_OFFSET_SUPPORT)
#define UMTS_Band_RX_PWR_OFFSET(b, sET)     &RxPowerOffsetData_##b##_##sET
#define M_UMTS_RX_PWR_OFFSET(b, sET)        UMTS_Band_RX_PWR_OFFSET(b,sET)
#endif

#if (IS_3G_VPA_SEL_BY_BAND_SUPPORT)
#define M_UMTS_VPA_SRC_SEL(x,sET)   &UMTS_VPA_SOURCE_##x##_##sET
#define M_UMTS_VPA_SRC(x,sET)       M_UMTS_VPA_SRC_SEL(x,sET)
#endif/*IS_3G_VPA_SEL_BY_BAND_SUPPORT*/

#if IS_3G_RFEQ_COEF_SUBBAND_SUPPORT
#define UMTS_Band_RFEQ_COEF(b, sET)     &UMTS_RFEQ_COEF_##b##_##sET
#define M_UMTS_RFEQ_COEF(b, sET)        UMTS_Band_RFEQ_COEF(b, sET)          
#endif

#if IS_3G_RFEQ_REAL_COEF_TEST
#define UMTS_Band_REAL_RFEQ_COEF(b, sET)     &UMTS_RFEQ_REAL_COEF_##b##_##sET
#define M_UMTS_REAL_RFEQ_COEF(b, sET)        UMTS_Band_REAL_RFEQ_COEF(b, sET)
#endif

/*******************************************************************************
** Typedefs
*******************************************************************************/
typedef struct {
   kal_uint32      capability;
   kal_uint32      band_support;
   kal_uint32      rxd_band_support;
   kal_uint32      padrift_band_support;
   kal_uint32      wcdma_dpd_band_support;
} UMTS_MsCapabilityEx;

typedef  struct
{
   kal_uint16 max_uarfcn;
#if IS_PATHLOSS_EXTENTION
   kal_int16   path_loss_HPM[UL1_LNA_MODE_NUM];
   kal_int16   path_loss_LPM[UL1_LNA_MODE_NUM];
#else
   kal_int8   path_loss_H;
   kal_int8   path_loss_M;
   kal_int8   path_loss_L;
   kal_int8   path_loss_LPM_offset;
#endif
}  U_sAGCGAINOFFSET;

typedef  struct
{
   kal_int8          temper_offset[CAL_TEMP_SECTION];
   U_sAGCGAINOFFSET  gain_of_uarfcn[CAL_UARFCN_SECTION];
}  U_sTEMPAGCOFFSET;

typedef  struct
{
   kal_uint16 level_0;
   kal_uint16 level_1;
} U_sDC2DC;

typedef  struct
{
   kal_uint16 start;
   kal_uint16 end;
} U_sHYSTERESISDATA;

typedef  struct
{
   kal_uint16 max_uarfcn;
   kal_int16  pwr_offset_dB; /* unit: 1/32 dB, range: -8 ~ +7 dB */
   kal_int16  pwr_offset_txdac;
}  U_sARFCN_SECTION;

#if IS_3G_FDD_RX_PATH_SELECTION_SUPPORT
typedef enum
{
   ANT_RX_MAIN_ONLY   = 0,
   ANT_RX_RXD_ONLY    = 1,
   ANT_RX_BOTH        = 2,
   ANT_RESUME_DEFAULT = 3
}ANT_SEL_TYPE;

typedef struct
{
   kal_bool       rx_path_selection_enable;
   ANT_SEL_TYPE   rx_path_type;
} U_sRxPathSelection;
#endif

typedef  struct
{
   kal_uint8  pwr_dt_thr;
   kal_uint8  pwr_dt_section;
   kal_uint16 pwr_dt_dac[ CAL_PWR_DETECTOR_SECTION ];
   kal_int16  pwr_dt_value[ CAL_PWR_DETECTOR_SECTION ]; //bit0~4 is used for fractions
   U_sARFCN_SECTION  pwr_dt_comp_by_subband[ CAL_UARFCN_SECTION ];
   kal_int16  pwr_dt_comp_by_temperature[8][2];  //[0]:slope, [1]:offset
}  U_sPWTDTDATA;

typedef  struct
{
   kal_uint16 dc2dc_level;
   kal_uint16 vbias_dac;
   kal_uint8  vm1;
   kal_uint8  vm2;
}  U_sPADATA;

typedef  struct
{
   U_sPADATA   pa_data;
   kal_uint16  vga_dac[NUMBER_OF_VGA_DAC];
   U_sARFCN_SECTION  vga_comp_by_subband[ CAL_UARFCN_SECTION ];
   kal_int16  vga_comp_by_temperature[8][2];  //[0]:slope, [1]:offset
} U_sTXPOWERDATA;

typedef struct
{
   kal_int16  vga_comp_by_temperature[8][2];  //[0]:slope, [1]:offset
} U_sRACHCOMP;


typedef struct
{
   U_sRACHCOMP  power_dac[3];
} U_sPARACHTMCOMPDATA;


typedef struct
{
   kal_uint16 initDac;
   kal_int32 slope;
} U_sAFCDACDATA;

typedef struct
{
   kal_int32 cap_id;
} U_sAFCCAPDATA;


typedef  struct
{
   U_sDC2DC pa_dc2dc;
   U_sTXPOWERDATA  power_dac[3];  //0:PA high mode, 1:PA mid mode, 2:PA low mode (use 0&1 if only 2 mode)
   U_sHYSTERESISDATA tx_hysteresis[2];
   U_sPWTDTDATA    pwr_dt_data;
} U_sRAMPDATA;

typedef  struct
{
   kal_uint8  pa_mode;   //  2 bits
   kal_int8   prf;       //  8 bits
   kal_uint8  dc2dc_lvl; //  5 bits // MT6589, MT6582: 6 bits
   kal_uint8  vm1;       //  1 bit
   kal_uint8  vm2;       //  1 bit
   kal_uint16 vbias_dac; // 10 bits
   kal_uint16 pa_gain;   //  9 bits
} U_sPMULEVHANDLE;

typedef  struct
{
   /* octlev_num_section accounts for recording the number of sections that defined by user
    * To keep the design simple, we only allow user to use consecutive regions
    *
    * The two control parameters pa_phase_compensation[] and pmu_level_handle[] belong to BB TX HW
    * funtionality and all relates to PA, though PA phase compensation only has three modes
    * PD coupler loss by PA modes stored in power_dac[]->vga_dac[9]
    */
   kal_uint8         octlev_num_section;
   kal_uint8         reserved_byte; // Use ARM compiler padding byte to store power backoff value configured by META user in Factory Mode calibration
   kal_uint32        pa_phase_compensation[3]; // 0: PA high mode, 1: PA mid mode
   U_sPMULEVHANDLE   pmu_level_handle[8];
   kal_uint16        pa_gain_g12a;
   kal_uint16        pa_gain_g12b;
} U_sPAOCTLVLSETTING;

typedef struct
{
  kal_uint8  lut[UL1_DPD_MAX_AM_LUT_GAIN_NUM][MMDPD_MAX_AM_LUT_PWR_NUM];

} U_sDPD_AMLUT_SUBBAND;

typedef struct
{
  MMDPD_AMLUT_SUBBAND_T  am_lut_subband[CAL_UARFCN_SECTION];    

} U_sDPD_AMLUT_PERBAND;

typedef struct
{
  kal_int8  lut[UL1_DPD_MAX_PM_LUT_GAIN_NUM][MMDPD_MAX_PM_LUT_PWR_NUM];

} U_sDPD_PMLUT_SUBBAND;

typedef struct
{
  MMDPD_PMLUT_SUBBAND_T  pm_lut_subband[CAL_UARFCN_SECTION];    

} U_sDPD_PMLUT_PERBAND;

typedef struct
{
   /*DPD Normal Mode enable Flag*/
   DPD_ENABLE_E dpd_normal_enable;
   /* The delta term add to pa_idx_th, value from custom file */   
   kal_int16 d_tar_th_dpd;
   
} U_sDPD_COMMON_CTRL;

typedef struct
{
   kal_uint32        reserved0;   
}U_PCFE_CUSTOM_PARA_T;

typedef struct
{
   kal_int16        dpd_apt_temperature_th_by_rfic[2]; // for 2 RFIC
}U_DPD_OTFC_CUSTOM_PARA_T;

typedef struct
{
    U_DPD_OTFC_CUSTOM_PARA_T     dpd_otfc_custom;
    U_PCFE_CUSTOM_PARA_T         pcfe_custom;

   /* PCFE power threshold form DPD mode to linear mode*/
   kal_int16 pcfe_mode_th_d2l;  

   /* PCFE power threshold form linear mode to DPD mode*/
   kal_int16 pcfe_mode_th_l2d;
   
}U_UL1D_PCFE_DPD_OTFC_CUSTOM_PARA_T;

typedef enum
{
   ET_SW_MODE=0,
   DPD_SW_MODE=1,
   APT_SW_MODE=2,
   PCFE_OP_MODE_CNT
} SW_MODE_E;

typedef struct
{ 
   kal_bool         op_mode_force_en;      
   SW_MODE_E        op_mode_force_mode;            
}U_PCFE_NONCUSTOM_PARA_T;

typedef struct
{
   kal_bool         en_dpd_am_track;
   kal_bool         en_dpd_pm_track;
   kal_bool         en_force_dpd_default_lut;
   kal_bool         en_dpd_coarse_tde;
   kal_bool         en_dpd_fine_tde;
}U_DPD_OTFC_NONCUSTOM_PARA_T;

typedef struct
{
   U_DPD_OTFC_NONCUSTOM_PARA_T     dpd_otfc;
   U_PCFE_NONCUSTOM_PARA_T         pcfe;   
}U_Ul1D_PCFE_DPD_OTFC_NONCUSTOM_PARA_T;

typedef struct
{
   /* This flag will be set to TRUE if DPD PA and DPD factory cal done */   
   kal_bool  dpd_cal_done;

   /* PA index selction threshold */
   kal_int16 pa_idx_th[CAL_UARFCN_SECTION][UL1_DPD_MAX_PA_LEVEL_NUM];

   /* From DPD FXP, for gain norm calculation */
   kal_int16 f_db[CAL_UARFCN_SECTION][UL1_DPD_MAX_PA_LEVEL_NUM];

   /* This value comes from DPD lab calibration */
   kal_int16 dpd_tr[CAL_UARFCN_SECTION];

   /* The temperature during DPD factory calibration */
   kal_int8  tempe_fc[CAL_UARFCN_SECTION];

} U_sDPD_COMMON_CAL;

typedef struct
{
   U_sRAMPDATA          wcdma_dpd_ramp_data;
   U_sPAOCTLVLSETTING   wcdma_dpd_pa_oct_lev_tbl;   
   U_sDPD_COMMON_CAL    wcdma_dpd_common_cal;
   U_sDPD_AMLUT_PERBAND wcdma_dpd_am_lut_perband;
   U_sDPD_PMLUT_PERBAND wcdma_dpd_pm_lut_perband;

} U_sDPD_GROUP_CAL;

typedef struct
{
   U_sDPD_COMMON_CTRL   wcdma_dpd_common_ctrl;
   U_sDPD_GROUP_CAL     wcdma_dpd_group_cal;   

} U_sDPD_GROUP_ALL;

typedef struct
{
   U_sRAMPDATA          *p_wcdma_dpd_ramp_data;
   U_sPAOCTLVLSETTING   *p_wcdma_dpd_pa_oct_lev_tbl;
   U_sDPD_COMMON_CTRL   *p_wcdma_dpd_common_ctrl;
   U_sDPD_COMMON_CAL    *p_wcdma_dpd_common_cal;
   U_sDPD_AMLUT_PERBAND *p_wcdma_dpd_am_lut_perband;
   U_sDPD_PMLUT_PERBAND *p_wcdma_dpd_pm_lut_perband;

} U_sDPD_GROUP_ADDR;

// Start for ADAPT IOT AMR workaround
typedef struct
{
   kal_bool ADAPT_Customized;
   kal_bool reserved1;
   kal_bool reserved2;
   kal_bool reserved3;
} U_sUl1IotCustomSupportStruct;
// End for ADAPT IOT AMR workaround

#if IS_HSPA_HWTPC
   #ifdef __HSDPA_SUPPORT__
typedef struct
{
   kal_uint8  pseudo_hscch[5];
   kal_uint8  pseudo_hdsch[5];
   kal_uint16 beta_hs_p[15];
   kal_uint16 beta_hs_q[15];
} META_HWTPC_HSDPA_FRAME_INFO;
   #endif

   #ifdef __HSUPA_SUPPORT__
typedef struct
{
   kal_uint8  edch_enable[5];
   kal_uint8  is_new_tx[5];
   kal_uint8  etfci[5];
   kal_uint8  beta_ed_num[5];
   kal_uint16 beta_ed0_sf[5];
   kal_uint16 beta_ed1_sf[5];
   kal_uint16 beta_ed2_sf[5];
   kal_uint16 beta_ed3_sf[5];
   kal_uint16 beta_ec[5];
   kal_uint16 beta_ed_x_beta_c_0[5];
   kal_uint16 beta_ed_x_beta_c_1[5];
   kal_uint16 beta_ed_x_beta_c_2[5];
   kal_uint16 beta_ed_x_beta_c_3[5];
   kal_uint8  delta_harq[5];
} META_HWTPC_HSUPA_FRAME_INFO;
   #endif
#endif // #if IS_HSPA_HWTPC

typedef struct
{
   /*input*/
   kal_uint8 tpc_step;
   kal_uint8 itp;
   kal_uint8 rpp;
   kal_uint8 fmt_idx;
   kal_uint8 dl_frame_type;
   kal_uint16 slot_mask;
   kal_int8   tpc_cmd[15];
   kal_uint8  beta_c;
   kal_uint8  beta_d;
#if IS_HSPA_HWTPC
   // Above is R99 original used
   kal_uint32 normcon;
   kal_int16  net_maxpow;
   kal_int16  net_minpow;

   #ifdef __HSDPA_SUPPORT__
   META_HWTPC_HSDPA_FRAME_INFO hsdpa;
   #endif
   #ifdef __HSUPA_SUPPORT__
   META_HWTPC_HSUPA_FRAME_INFO hsupa;
   #endif
#endif // #if IS_HSPA_HWTPC
}  META_HWTPC_FRAME_INFO;

typedef  struct
{
   kal_int16 pa_drift_comp_w_table[6][2];
   kal_int16 pa_drift_comp_h_table[6][4];
} U_sPADRIFTSETTING;

typedef enum
{
   MPRSetting0 = 0,
   MPRSetting1 = 1,
   MPRSetting2 = 2,
   MPRSetting3 = 3,
   MPRSetting4 = 4,
   MPRSettingCount
}  MPR_Setting;


#if IS_3G_MPR_EXTEND_SUPPORT
typedef enum
{
   MPRSetting_SUB_0 = 0,
   MPRSetting_SUB_1 = 1,
   MPRSetting_SUB_2 = 2,
   MPRSetting_SUB_3 = 3,
   MPRSetting_SUB_4 = 4,
   MPRSetting_SUB_5 = 5,
   MPRSetting_SUB_6 = 6,
   MPRSetting_SUB_7 = 7,
   MPRSetting_SUB_8 = 8,
   MPRSetting_SUB_Count
}  MPR_Setting_SUB;
#endif

typedef enum
{
   UL1D_DATABASE_RXIO     = 0,
   UL1D_DATABASE_TXIO     = 1,
   UL1D_DATABASE_RX_PDATA = 2,
   UL1D_DATABASE_TX_PDATA = 3,
   UL1D_DATABASE_CONUT,
   UL1D_DATABASE_INVALID = 0xFFFE,
} UL1D_DATABASE_TYPE_E;

/* CA Band definition */
typedef enum
{
   UMTS_CA_BANDNONE =  M_UMTS_CA_BAND(UMTSBandNone, UMTSBandNone),
   UMTS_CA_B1_B5    =  M_UMTS_CA_BAND(UMTSBand1, UMTSBand5),
   UMTS_CA_B1_B8    =  M_UMTS_CA_BAND(UMTSBand1, UMTSBand8),
   UMTS_CA_B1_B11   =  M_UMTS_CA_BAND(UMTSBand1, UMTSBand11),
   UMTS_CA_B2_B4    =  M_UMTS_CA_BAND(UMTSBand2, UMTSBand4),
   UMTS_CA_B2_B5    =  M_UMTS_CA_BAND(UMTSBand2, UMTSBand5),
   /* Switch PCC and SCC*/
   UMTS_CA_B5_B1    =  M_UMTS_CA_BAND(UMTSBand5, UMTSBand1),
   UMTS_CA_B8_B1    =  M_UMTS_CA_BAND(UMTSBand8, UMTSBand1),
   UMTS_CA_B11_B1   =  M_UMTS_CA_BAND(UMTSBand11, UMTSBand1),
   UMTS_CA_B4_B2    =  M_UMTS_CA_BAND(UMTSBand4, UMTSBand2),
   UMTS_CA_B5_B2    =  M_UMTS_CA_BAND(UMTSBand5, UMTSBand2),
}UMTSCaBand;

typedef enum
{
   UMTS_Route0    = 0,
   UMTS_Route1    = 1,
   UMTS_Route2    = 2,
   UMTS_Route3    = 3,
   UMTS_Route4    = 4,
   UMTS_Route5    = 5,
   UMTS_Route6    = 6,
   UMTS_Route7    = 7,
   UMTS_Route8    = 8,
   UMTS_Route9    = 9,
   UMTS_Route10   = 10,
   UMTS_Route11   = 11,
   UMTS_Route12   = 12,
   UMTS_Route13   = 13,
   UMTS_Route14   = 14,
   UMTS_Route15   = 15,
   UMTS_Route16   = 16,
   UMTS_Route17   = 17,
   UMTS_Route18   = 18,
   UMTS_Route19   = 19,
   UMTS_Route20   = 20,
   UMTS_Route21   = 21,
   UMTS_Route22   = 22,
   UMTS_Route23   = 23,
   UMTS_Route24   = 24,
   UMTS_Routecount,
   UMTS_RouteMax  = 0xFF,
}  UMTS_Route;

typedef struct
{
   kal_uint32 single_band_ca_list;
   kal_uint32 dual_band_ca_list;
} CA_RF_BAND_CAPABILITY_T;

#if IS_3G_RX_POWER_OFFSET_SUPPORT
typedef struct
{
   kal_bool RPO_enable;
   kal_bool RPO_meta_enable;
}U_sUl1dMetaRxPowerOffsetSetting;

typedef struct
{
   kal_uint16 max_uarfcn;
   kal_int16  pwr_offset_dB[2]; /*index0:Main, index1:Div*/
} U_sSUBBAND_SECTION_RPO;

typedef struct
{
   U_sSUBBAND_SECTION_RPO   subband_power_offset[CAL_UARFCN_SECTION];
} U_sRXPOWEROFFSETDATA;
#endif


#if (IS_3G_VPA_SEL_BY_BAND_SUPPORT)
/* from mml1_rf_public.h
#define VPA_SOURCE_NOT_SUPPORTED    0
#define VPA_SOURCE_HW_VAPC          1
#define VPA_SOURCE_HW_PMIC          2  //PMIC VPA1
#define VPA_SOURCE_HW_ETM_SW_APT    3
#define VPA_SOURCE_HW_ETM_SW_ET     4
#define VPA_SOURCE_HW_PMIC2         5  //PMIC VPA2
#define VPA_SOURCE_HW_V_BATTERY     6
#define VPA_SOURCE_HW_EXT_VPA       7  // external VPA
*/
#define VPA_SOURCE_HW_PMIC_ETM_APT  8  //reserve for ET debug

typedef enum
{
    UMTS_VPA_SOURCE_INVALID       = VPA_SOURCE_NOT_SUPPORTED,
    UMTS_VPA_SOURCE_HW_VAPC       = VPA_SOURCE_HW_VAPC,
    UMTS_VPA_SOURCE_HW_PMIC       = VPA_SOURCE_HW_PMIC,
    UMTS_VPA_SOURCE_HW_ETM_SW_APT = VPA_SOURCE_HW_ETM_SW_APT,
    UMTS_VPA_SOURCE_HW_ETM_SW_ET  = VPA_SOURCE_HW_ETM_SW_ET,
    UMTS_VPA_SOURCE_HW_PMIC2      = VPA_SOURCE_HW_PMIC2,
    UMTS_VPA_SOURCE_HW_VBAT       = VPA_SOURCE_HW_V_BATTERY,
#if IS_3G_HPUE_SUPPORT
    UMTS_VPA_SOURCE_HW_EXT_VPA    = VPA_SOURCE_HW_EXT_VPA,
#endif
    UMTS_VPA_SOURCEHW_PMIC_ETM_APT  = VPA_SOURCE_HW_PMIC_ETM_APT
}
UMTS_VPA_SOURCE_TYPE;

typedef struct
{
   UMTS_VPA_SOURCE_TYPE vpaSel;
}
ul1vpa_sel_T;

#endif/*IS_3G_VPA_SEL_BY_BAND_SUPPORT*/

#if IS_3G_ELNA_SUPPORT
typedef enum
{
   UMTS_ELNA_OFF,
   UMTS_ELNA_ON
}  ELNA_Setting_E;
#endif

#if IS_3G_RFEQ_COEF_SUBBAND_SUPPORT
#define RFEQ_SUBBAND_NUM   15
#define RFEQ_ANT_NUM       2
#define RFEQ_MAX_TAP_NUM   7

typedef struct
{
   kal_uint16  max_uarfcn;
   kal_bool    rfeq_enable[RFEQ_ANT_NUM];
   kal_int16   rfeq_coef_real[RFEQ_ANT_NUM][RFEQ_MAX_TAP_NUM];
   kal_int16   rfeq_coef_imag[RFEQ_ANT_NUM][RFEQ_MAX_TAP_NUM];
} hs_dsch_rfeq_info_T;

typedef struct
{
   hs_dsch_rfeq_info_T rfeq_coef_subband[RFEQ_SUBBAND_NUM];   //16 subband
} hs_dsch_rfeq_info_band_T;
#endif

#if IS_3G_RFEQ_REAL_COEF_TEST
#define REAL_RFEQ_SUBBAND_NUM   15
#define REAL_RFEQ_ANT_NUM       2
#define REAL_RFEQ_MAX_TAP_NUM   14

typedef struct
{
   kal_uint16  max_uarfcn;
   kal_bool    real_rfeq_custom_enable[REAL_RFEQ_ANT_NUM];
   kal_int32   filter_taps[REAL_RFEQ_ANT_NUM][REAL_RFEQ_MAX_TAP_NUM]; ///< s8
} URXDFE_REAL_RFEQ_CUSTOM_T;

typedef struct
{
   URXDFE_REAL_RFEQ_CUSTOM_T real_rfeq_band[REAL_RFEQ_SUBBAND_NUM];
} URXDFE_REAL_RFEQ_CUSTOM_BAND_T;
#endif

/*******************************************************************************
** RF Customization usage
*******************************************************************************/

/*******************************************************************************
** Macros and constants
*******************************************************************************/
#if defined(__UMTS_R8__)
   //For R8 project use internal definition.
#else
#define CAL_RX_ACT_DLY                5 //CAL_RX_ACT_DLY*64 samples = CAL_RX_ACT_DLY*38 chips
#define CAL_RX_DC_LEN                 4 //0~7, 1<<(4+CAL_RX_DC_LEN) samples = (1<<(4+CAL_RX_DC_LEN))*0.6 chips
#define CAL_RX_DC_STL_TIME            30 //CAL_RX_DC_STL_TIME asmples = CAL_RX_DC_STL_TIME/2 chips
#define CAL_RX_IQ_LEN                 7 //0~8, 1<<(4+CAL_RX_IQ_LEN) samples = 1<<(3+CAL_RX_IQ_LEN) chips

//Sample to Chip = Samples * (3.84MHz/6.5MHz=0.59077)
#define CAL_RX_IDLE_IN_CHIP           1      //chips
#define CAL_RX_ACT_DLY_IN_CHIP        190    //CAL_RX_ACT_DLY*(64)*0.59077 chips
#define CAL_RX_DC_LEN_IN_CHIP         152    //(1<<(4+CAL_RX_DC_LEN))*0.59077 chips
#define CAL_RX_DC_STL_TIME_IN_CHIP    18     //CAL_RX_DC_STL_TIME*0.59077 chips
#define CAL_RX_IQ_LEN_IN_CHIP         1210   //(1<<(4+CAL_RX_IQ_LEN))*0.59077 chips

#define RXCAL_TTG_DIS_GUARD_TIME      30 //Chips ~=7.8us
#define RXCAL_MODE_CHANGE_GUARD_TIME  20 //Chips ~=5.2us
#define RXCAL_TOTAL_TIME              (CAL_RX_IDLE_IN_CHIP + CAL_RX_ACT_DLY_IN_CHIP + CAL_RX_DC_LEN_IN_CHIP + CAL_RX_DC_STL_TIME_IN_CHIP + CAL_RX_IQ_LEN_IN_CHIP + RXCAL_TTG_DIS_GUARD_TIME)
#define RXCAL_EVENT_SHIFT_TIME0       (RXCAL_TOTAL_TIME+RXCAL_MODE_CHANGE_GUARD_TIME+RXCAL_TOTAL_TIME+TC_SR2B)
#define RXCAL_EVENT_SHIFT_TIME1       (RXCAL_TOTAL_TIME+TC_SR2B)

#define RXCAL_EVENT_SHIFT_TIME       (RXCAL_TOTAL_TIME+RXCAL_MODE_CHANGE_GUARD_TIME+RXCAL_TOTAL_TIME+TC_SR2B)
#endif //__UMTS_R8__

#if 1//MT6293 format update
#define  U_PWRRES                   32 // resolution 1/32, 0.03125 dB
#define  U_GAINLOSS( n )           ((kal_int16)((n)*U_PWRRES))
#else
/* under construction !*/
/* under construction !*/
#endif

#define  UMTS_TABLE_END             0 // Use this value ater the end of UARFCN weight
#define  MICROSECOND_TO_CHIP(x)    ((kal_int32)((x)*3.84))

#if !defined(UMTS_RF_TYPE)
#define  UMTS_RF_TYPE  2
#endif

#if defined(__UMTS_R8__)
#define UMTS_RF_MAX_PA_SECTIONS                (3)
#define UMTS_RF_RX_START_TIMING_ARRAY_LENGTH   (6)
#define UMTS_RF_RX_END_TIMING_ARRAY_LENGTH     (3)
#define UMTS_RF_TX_START_TIMING_ARRAY_LENGTH   (7)
#define UMTS_RF_TX_END_TIMING_ARRAY_LENGTH     (3)
#define UMTS_RF_BPI_DATA_TABLE_NUM_OF_BANDS   (11)
#define UMTS_RF_BPI_DATA_TABLE_NUM_OF_WINDOWS  (2)
#define UMTS_RF_BPI_DATA_TABLE_NUM_OF_EVENTS   (5)
#define UMTS_RF_BPI_DATA2_TABLE_NUM_OF_EVENTS  (5)
#else
#define UMTS_RF_MAX_PA_SECTIONS                (3)
#define UMTS_RF_RX_START_TIMING_ARRAY_LENGTH   (6)
#define UMTS_RF_RX_END_TIMING_ARRAY_LENGTH     (3)
#define UMTS_RF_TX_START_TIMING_ARRAY_LENGTH   (8)
#define UMTS_RF_TX_END_TIMING_ARRAY_LENGTH     (5)
#define UMTS_RF_BPI_DATA_TABLE_NUM_OF_BANDS   (11)
#define UMTS_RF_BPI_DATA_TABLE_NUM_OF_WINDOWS  (2)
#define UMTS_RF_BPI_DATA_TABLE_NUM_OF_EVENTS   (5)
#endif

/*******************************************************************************
** Typedefs
*******************************************************************************/
typedef struct
{
   kal_uint16 maxOffset;
   kal_uint16 vmOffset;
   kal_uint16 vbiasOffset;
   kal_uint16 dc2dcOffset;
   kal_uint16 vgaOffset;
}U_sUl1dRfPaControlTiming;

typedef struct
{
   /* RX window start timing */
   kal_int16 xTC_PR1;
   kal_int16 xTC_PR2;
   kal_int16 xTC_PR2B;

   /* RX window end timing */
   kal_int16 xTC_PR3;
   kal_int16 xTC_PR3A;

   /* TX window start timing */
   kal_int16 xTC_PT1;
   kal_int16 xTC_PT2;
   kal_int16 xTC_PT2B;

   /* TX window end timing */
   kal_int16 xTC_PT3;
   kal_int16 xTC_PT3A;
}U_sUl1dRfBsiBpiTiming;

typedef struct
{
   UL1_RF_RX_IO_E  rxio;
   UL1_RF_RXD_IO_E rxdio;
}UMTS_RX_IODATA_T;

typedef struct
{
   BPI_data_type pr1;
   BPI_data_type pr2;
   BPI_data_type pr2b;
   BPI_data_type pr3;
   BPI_data_type pr3a;
}UMTS_RX_PDATA_T;

typedef struct
{
   UL1_RF_TX_IO_E txio;
   UL1_RF_TX_DET_IO_E txdetio;
}UMTS_TX_IODATA_T;

typedef struct
{
   BPI_data_type pt1;
   BPI_data_type pt2;
   BPI_data_type pt2b;
   BPI_data_type pt3;
   BPI_data_type pt3a;
}UMTS_TX_PDATA_T;

typedef struct
{
   UMTSBand bandIdx;
   UMTS_RX_PDATA_T rxPdata;
   #if IS_3G_RXD_FE_CONTROL_SUPPORT
   UMTS_RX_PDATA_T rxPdata2;
   #endif   
}UMTS_RX_PDATABASE_T;

typedef struct
{
   UMTSBand bandIdx;
   UMTS_TX_PDATA_T txPdata;
}UMTS_TX_PDATABASE_T;

typedef struct
{
   UMTSBand bandIdx;
   UMTS_RX_IODATA_T rxIodata;
}UMTS_RXIOBASE_T;

typedef struct
{
   UMTSBand bandIdx;
   UMTS_TX_IODATA_T txIodata;
}UMTS_TXIOBASE_T;

typedef struct
{
   UMTS_RX_PDATABASE_T rxBpi[UMTS_FE_RXBASE_TBL_SIZE_MAX];
   UMTS_TX_PDATABASE_T txBpi[UMTS_FE_TXBASE_TBL_SIZE_MAX];
}U_sUl1dRfBpiData;

#if IS_3G_TAS_SUPPORT
typedef struct
{
   /* Band 1 TAS BPI data */
   BPI_data_type xPDATA_BAND1_TAS1;
   BPI_data_type xPDATA_BAND1_TAS2;
   BPI_data_type xPDATA_BAND1_TAS3;

   /* Band 2 TAS BPI data */
   BPI_data_type xPDATA_BAND2_TAS1;
   BPI_data_type xPDATA_BAND2_TAS2;
   BPI_data_type xPDATA_BAND2_TAS3;

   /* Band 3 TAS BPI data */
   BPI_data_type xPDATA_BAND3_TAS1;
   BPI_data_type xPDATA_BAND3_TAS2;
   BPI_data_type xPDATA_BAND3_TAS3;

   /* Band 4 TAS BPI data */
   BPI_data_type xPDATA_BAND4_TAS1;
   BPI_data_type xPDATA_BAND4_TAS2;
   BPI_data_type xPDATA_BAND4_TAS3;

   /* Band 5 TAS BPI data */
   BPI_data_type xPDATA_BAND5_TAS1;
   BPI_data_type xPDATA_BAND5_TAS2;
   BPI_data_type xPDATA_BAND5_TAS3;

   /* Band 6 TAS BPI data */
   BPI_data_type xPDATA_BAND6_TAS1;
   BPI_data_type xPDATA_BAND6_TAS2;
   BPI_data_type xPDATA_BAND6_TAS3;

   /* Band 7 TAS BPI data */
   BPI_data_type xPDATA_BAND7_TAS1;
   BPI_data_type xPDATA_BAND7_TAS2;
   BPI_data_type xPDATA_BAND7_TAS3;

   /* Band 8 TAS BPI data */
   BPI_data_type xPDATA_BAND8_TAS1;
   BPI_data_type xPDATA_BAND8_TAS2;
   BPI_data_type xPDATA_BAND8_TAS3;

   /* Band 9 TAS BPI data */
   BPI_data_type xPDATA_BAND9_TAS1;
   BPI_data_type xPDATA_BAND9_TAS2;
   BPI_data_type xPDATA_BAND9_TAS3;

   /* Band 10 TAS BPI data */
   BPI_data_type xPDATA_BAND10_TAS1;
   BPI_data_type xPDATA_BAND10_TAS2;
   BPI_data_type xPDATA_BAND10_TAS3;

   /* Band 11 TAS BPI data */
   BPI_data_type xPDATA_BAND11_TAS1;
   BPI_data_type xPDATA_BAND11_TAS2;
   BPI_data_type xPDATA_BAND11_TAS3;

   /* Band 19 TAS BPI data */
   BPI_data_type xPDATA_BAND19_TAS1;
   BPI_data_type xPDATA_BAND19_TAS2;
   BPI_data_type xPDATA_BAND19_TAS3;
}U_sUl1dRfTasBpiData;

typedef struct
{
   BPI_data_type       umtsTasMask;
   U_sUl1dRfTasBpiData umtsTasPdata;
}U_sUl1dRfTasData;

typedef enum
{
   TAS_TYPE_0,    /* TAS Disable */
   TAS_TYPE_1,    /* TAS with Rx Diversity support */
   TAS_TYPE_2,    /* TAS WITHOUT Rx Diversity support */
} ul1_tas_type_E;

typedef enum
{
   BY_BAND_TAS_TYPE_0 = TAS_TYPE_0,/* TAS Disable */
   BY_BAND_TAS_TYPE_1 = TAS_TYPE_1,/* TAS with Rx Diversity support */
   BY_BAND_TAS_TYPE_2 = TAS_TYPE_2,/* TAS WITHOUT Rx Diversity support */
   BY_BAND_TAS_TYPE_Default        /* Set TAS type as tas_default_type for each band */
} ul1_tas_type_by_band_E;

typedef enum
{
   UL1_ANTENNA_0,     /* Main antenna */
   UL1_ANTENNA_1,     /* Diversity antenna */
   UL1_ANTENNA_2,     /* Auxiliary antenna */
   UL1_ANTENNA_NUM
}
ul1_antenna_idx_E;

typedef struct
{
   kal_int16           rscp_diff_thd_po;           /* RSCP difference threshold */
   kal_int16           rscp_diff_thd_cb;           /* Diversity to main RSCP difference threshold J2 (RSCP CB)  */
   kal_int16           rscp_diff_thd_txp;          /* Diversity to main RSCP difference threshold J3 (TXP)  */
   kal_int16           rscp_cb_thd;                /* RSCP drop threshold */
   kal_int8            txp_cb_thd;                 /* Transmit power increase threshold during check-back */
   kal_uint8           n_ms_cb;                    /* Check-back period for RSCP, TXP (in measurement slots, MS) */
   kal_int8            u_htp;                      /* High transmit power offset */
   kal_uint8           htp_thd;                    /* High transmit power ratio threshold (in percentage, %) */
   kal_int8            tpc_inc_thd;                /* Transmit power increase threshold */
   kal_uint8           n_ms_sb;                    /* Monitoring duration for switch-back check (in measurement slots, MS) */
   kal_int16           rscp_inc_thd;               /* Increase received power threshold after CAS performed */
   kal_int16           rscp_sda_thd;               /* The increased amount for RSCP check-back threshold duer to user sda */
   kal_int8            txp_sda_thd;                /* The increased amount for TXP check-back threshold duer to user sda */
   kal_int16           rscp_periodic_cb_thd;       /* RSCP threshold for counting the active timer under worse channel */
} UMTS_TAS_Type1_Params_T;

typedef struct
{
   //kal_uint16          t_thd1_j;                   /* Periodic check timer threshold (in frames) */
   kal_int16           rscp_abs_thd_cb;            /* RSCP abs cb threshold */
   kal_int16           rscp_abs_thd_txp;           /* RSCP abs txp threshold */
   kal_int16           rscp_cb_thd;                /* RSCP drop threshold */
   kal_int8            txp_cb_thd;                 /* Transmit power increase threshold during check-back */
   kal_uint8           n_ms_cb;                    /* Check-back period for RSCP, TXP (in measurement slots, MS) */
   kal_int8            u_htp;                      /* High transmit power offset */
   kal_uint8           htp_thd;                    /* High transmit power ratio threshold (in percentage, %) */
   kal_int16           rscp_inc_thd;               /* RSCP inc  threshold for dedicated mode */
   kal_int8            tpc_inc_thd;                /* Transmit power increase threshold */
   kal_uint8           n_ms_sb;                    /* Monitoring duration for switch-back check (in measurement slots, MS) */
   kal_int16           rscp_thd_idle;              /* RSCP threshold for IDLE mode */
   kal_int16           rscp_inc_thd_idle;          /* RSCP inc  threshold for IDLE mode */
   kal_int16           ecno_thd;                   /* EcNo threshold */
} UMTS_TAS_Type2_Params_T;

typedef struct {
   ul1_tas_type_by_band_E      xBand1_TAS_TYPE;
   ul1_tas_type_by_band_E      xBand2_TAS_TYPE;
   ul1_tas_type_by_band_E      xBand3_TAS_TYPE;
   ul1_tas_type_by_band_E      xBand4_TAS_TYPE;
   ul1_tas_type_by_band_E      xBand5_TAS_TYPE;
   ul1_tas_type_by_band_E      xBand6_TAS_TYPE;
   ul1_tas_type_by_band_E      xBand8_TAS_TYPE;
   ul1_tas_type_by_band_E      xBand9_TAS_TYPE;
   ul1_tas_type_by_band_E      xBand10_TAS_TYPE;
   ul1_tas_type_by_band_E      xBand11_TAS_TYPE;
   ul1_tas_type_by_band_E      xBand19_TAS_TYPE;
} UMTS_TAS_Type_By_Band_T;

typedef struct
{
   kal_bool                   umts_tas_enable;
   kal_bool                   umts_tas_support_on_test_sim;
   ul1_antenna_idx_E          umts_tas_default_main_antenna;
   ul1_tas_type_E             umts_tas_default_type;
   UMTS_TAS_Type_By_Band_T    umts_tas_type_by_band;
#if IS_3G_FORCE_TX_ANT_SUPPORT
   kal_bool                   umts_tas_force_tx_ant_enable;
   ul1_antenna_idx_E          umts_tas_force_tx_ant_index;
#endif/* IS_3G_FORCE_TX_ANT_SUPPORT */
} UMTS_TAS_Configuration_T;

#if IS_3G_TAS_UL1_CUSTOM_SUPPORT
typedef struct
{
   kal_uint16 TASEna;
   kal_uint16 TASWithTestSimEna;
   kal_uint32 TASMask;  //0~31
   kal_uint16 TASInitAnt;
   kal_uint16 ForceAntEna;
   kal_uint16 ForceAntIndex;
   UMTSBand   TASBand[UMTS_RF_TAS_BAND_NUM];
}UMTS_RF_TAS_BAND_IND_T;

//TAS feature
typedef struct
{
   kal_int16 ENB_SM;                  //  Enable of antenna-switch metric function
   kal_int16 N_MS_j_hys;              //      MS,   Hysteresis duration control for leaving normal state
   kal_int16 N_MS_SM_fadeout;         //      MS,   The timer duration for antenna-switching metric fadeout protection
   kal_int16 PHI_bound;               //      dB,   Up/low bound for applying antenna-switching metric as threshold
   kal_int16 PHI_01_default;          //      dB,   Antenna-switching metric default value from ant. 0 to ant. 1
   kal_int16 PHI_10_default;          //      dB,   Antenna-switching metric default value from ant. 1 to ant. 0
   kal_int16 ENB_DB;                  // Enable of dynamic barrier control function
   kal_int16 DELTA_DB_fail_step_RSRP; //      dB,   The increased amount for RSRP barrier for a fail pre-switch
   kal_int16 DELTA_DB_fail_step_TXP;  //      dB,   The increased amount for TX power barrier for a fail pre-switch
   kal_int16 N_MS_DB_relax;           //      MS,   The timer duration to relax the dynamic barrier
   kal_int16 DELTA_DB_TO_step;        //      dB,   RSRP/TXP: The decreased barrier when per timer is reached
   kal_int16 DELTA_DB_bound_RSRP;     //      dB,   The upper bound of the extra-threshold Delta_RSRP_DB
   kal_int16 DELTA_DB_bound_TXP;      //      dB,   The upper bound of the extra-threshold Delta_TXP_DB
   //        Naming for customer,       Naming for MTK internal, Unit, Description
   kal_int16 RSRP_diff_thd;           //RSRP_diff_thd_PO,        dB,   RSRP difference threshold to trigger TAS, defined as the RSRP value difference from diversity to main antennas
   kal_int16 RSRP_diff_thd_TXP;
   kal_int16 RSRP_diff_thd_CB;
   kal_int16 RSRP_thd_connect_EN;     // RSRP_diff_thd_xxx are connected or not
   kal_int16 RSRP_cb_drop_thd;        // RSRP_CB_thd,       dB,   RSRP drop threshold to trigger TAS when check back, defined as the RSRP value difference from current value to its previous one
   kal_int16 TXP_cb_inc_thd;          // TXP_CB_thd,         dB,   Transmit power (TXP) increase threshold to trigger TAS when check back, defined as the TXP value difference from current value to its previous one
   kal_int16 nMS_cb;                  // N_MS_CB,             MS,   The look/check back period (for RSRP and TXP change monitoring), using measurement slot (MS) as the unit
   kal_int16 HTP_level;               // M_THP,                 dB,   The high transmit power (HTP) level, defined as the ratio (in dB) to UE's maximum transmit power
   kal_int16 HTP_ratio_thd;           // HTP_thd,              %,    A HTP is recognized when the percentage using TXP (within a measurement slot) greater than HTP_level is higher than the ratio threshold
   kal_int16 TXP_inc_thd_sb;          // TPC_inc_thd1,      dB,   TXP increase threshold when switch to the diversity antenna, for which exceeding the threshold would be recognized as a fail antenna switch
   kal_int16 nMS_sb;                  // N_MS_SB,             MS,   The monitoring duration for switch-back check, using measurement slot (MS) as the unit

}UMTS_RF_TAS_OTHER;

typedef struct
{
   UMTS_RF_TAS_BAND_IND_T TASBandInd;
   kal_uint32             TASRfDatabase[UMTS_RF_TAS_TOTAL_NUM];
}UMTS_RF_TAS_PARAMETER;

typedef enum
{
   UMTS_TAS_VER_1_0 = 0,
   UMTS_TAS_VER_1_5 = 1,
   UMTS_TAS_VER_2_0 = 2,
   UMTS_MAX_TAS_VER_NUM,
}UMTS_CUSTOM_TAS_VER_E;

typedef enum
{
   UMTS_TAS_ANT_NA  = 0,
   UMTS_TAS_ANT1    = 1,
   UMTS_TAS_ANT2    = 2,
   UMTS_TAS_ANT3    = 3,
   UMTS_TAS_ANT4    = 4,
   UMTS_MAX_TAS_ANT_NUM,
}UMTS_CUSTOM_TAS_ANT_E;

typedef enum
{
   UMTS_TAS_DPDT_NA  = 0,
   UMTS_TAS_DPDT1    = 1,
   UMTS_TAS_DPDT2    = 2,
   UMTS_MAX_TAS_DPDT_NUM,
}UMTS_CUSTOM_TAS_DPDT_E;

typedef enum
{
   UMTS_TAS_MIPI_TABLE_ROUTE0,
   UMTS_TAS_MIPI_TABLE_ROUTE1,
   UMTS_TAS_MIPI_TABLE_ROUTE2,
   UMTS_TAS_MIPI_TABLE_ROUTE3,
   UMTS_TAS_MIPI_TABLE_ROUTE4,
   UMTS_TAS_MIPI_TABLE_ROUTE5,
   UMTS_TAS_MIPI_TABLE_ROUTE6,
   UMTS_TAS_MIPI_TABLE_ROUTE7,
   UMTS_TAS_MIPI_TABLE_ROUTE8,
   UMTS_TAS_MIPI_TABLE_ROUTE9,
   UMTS_TAS_MIPI_TABLE_NULL,
}UMTS_CUSTOM_TAS_MIPI_TBL_IDX_E;

typedef enum
{
   UMTS_TAS_FE_ROUTE0,
   UMTS_TAS_FE_ROUTE1,
   UMTS_TAS_FE_ROUTE2,
   UMTS_TAS_FE_ROUTE3,
   UMTS_TAS_FE_ROUTE4,
   UMTS_TAS_FE_ROUTE5,
   UMTS_TAS_FE_ROUTE6,
   UMTS_TAS_FE_ROUTE7,
   UMTS_TAS_FE_ROUTE8,
   UMTS_TAS_FE_ROUTE9,
   UMTS_TAS_FE_NULL,
}UMTS_CUSTOM_TAS_FE_ROUTE_IDX_E;

typedef enum
{
   UMTS_TAS_DISABLE,
   UMTS_TAS_ENABLE,
}UMTS_CUSTOM_TAS_SWITCH_E;

typedef enum
{
   UMTS_TAS_STATE0,
   UMTS_TAS_STATE1,
   UMTS_TAS_STATE2,
   UMTS_TAS_STATE3,
   UMTS_TAS_STATE4,
   UMTS_TAS_STATE5,
   UMTS_TAS_STATE6,
   UMTS_TAS_STATE7,
   UMTS_TAS_STATE_NULL,
}UMTS_CUSTOM_TAS_STATE_E;

#if IS_3G_TAS_INHERIT_4G_ANT
typedef struct
{
   LTE_Band inherit_lte_band;
}UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_T;

typedef struct
{
   kal_uint32 inherit_lte_band_bitmap[UMTS_TAS_INHERIT_LTE_BAND_BITMAP_NUM];
}UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_T;

typedef struct
{
   UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_T inherit_lte_band_bitmap_route[UMTS_TAS_MAX_FE_ROUTE_NUM];
}UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T;
#endif

typedef struct
{
   UMTS_CUSTOM_TAS_SWITCH_E  tas_enable;
   UMTS_CUSTOM_TAS_STATE_E   tas_state;
}UMTS_CUSTOM_TAS_FEATURE_OPTION_T;

typedef struct
{
   kal_uint32   cat_a_route_num;
   kal_uint32   cat_b_route_num;
   kal_uint32   cat_c_route_num;
}UMTS_CUSTOM_TAS_FE_ROUTE_MAP_T;

typedef struct
{
   UMTS_CUSTOM_TAS_VER_E              tas_version;
   UMTS_CUSTOM_TAS_FEATURE_OPTION_T   force_mode_tas_feature;
   UMTS_CUSTOM_TAS_STATE_E            tas_ics_init_ant_state;
   UMTS_CUSTOM_TAS_SWITCH_E           tas_enable_on_real_sim;
   UMTS_CUSTOM_TAS_SWITCH_E           tas_enable_on_test_sim;
}UMTS_CUSTOM_TAS_FEATURE_BY_RAT_T;

typedef struct
{
   UMTS_CUSTOM_TAS_FEATURE_OPTION_T   real_sim_tas_feature;
   UMTS_CUSTOM_TAS_FEATURE_OPTION_T   test_sim_tas_feature;
}UMTS_CUSTOM_TAS_FEATURE_ENABLE_T;

typedef struct
{
   UMTSBand                           usage;
   kal_uint32                         tas_state_num;
   UMTS_CUSTOM_TAS_FEATURE_ENABLE_T   tas_feature_enable;
   UMTS_CUSTOM_TAS_FE_ROUTE_MAP_T     tas_fe_setting[UMTS_TAS_MAX_STATE_NUM];
}UMTS_CUSTOM_SB_TAS_SETTING_T;

typedef struct
{
   UMTSBand                           usage;
   kal_uint32                         tas_state_num;
   UMTS_CUSTOM_TAS_FEATURE_ENABLE_T   tas_feature_enable;
   UMTS_CUSTOM_TAS_FE_ROUTE_MAP_T     tas_fe_setting[UMTS_TAS_MAX_STATE_NUM];
}UMTS_CUSTOM_SPLIT_TAS_SETTING_T;

typedef struct
{
   kal_bool                           is_tas_real_sim_en;
   kal_bool                           is_tas_test_sim_en;
}UMTS_CUSTOM_TAS_SIM_EN_T;

typedef struct
{
   UMTS_CUSTOM_SPLIT_TAS_SETTING_T    UMTS_tas_fe_route_db[UMTS_TAS_MAX_FE_ROUTE_NUM];
}UMTS_CUSTOM_TAS_FE_ROUTE_DATABASE_T;

typedef struct
{
   kal_uint32                     bpi_mask;
   kal_uint32                     bpi_value;
   UMTS_CUSTOM_TAS_MIPI_TBL_IDX_E tas_mipi_table_index;
}UMTS_CUSTOM_TAS_FE_SETTING_T;

typedef struct
{
   UMTS_CUSTOM_TAS_FE_SETTING_T   tas_cat_a_fe_route[UMTS_TAS_MAX_CAT_A_ROUTE_NUM];
}UMTS_CUSTOM_TAS_FE_CAT_A_T;

typedef struct
{
   UMTS_CUSTOM_TAS_FE_SETTING_T   tas_cat_b_fe_route[UMTS_TAS_MAX_CAT_B_ROUTE_NUM];
}UMTS_CUSTOM_TAS_FE_CAT_B_T;

typedef struct
{
   UMTS_CUSTOM_TAS_FE_SETTING_T   tas_cat_c_fe_route[UMTS_TAS_MAX_CAT_C_ROUTE_NUM];
}UMTS_CUSTOM_TAS_FE_CAT_C_T;

typedef struct
{
   UMTS_CUSTOM_TAS_FE_CAT_A_T   tas_cat_a_fe_db;
   UMTS_CUSTOM_TAS_FE_CAT_B_T   tas_cat_b_fe_db;
   UMTS_CUSTOM_TAS_FE_CAT_C_T   tas_cat_c_fe_db;
}UMTS_CUSTOM_TAS_FE_DATABASE_T;

#endif

#if IS_3G_TAS_TST_SUPPORT
typedef enum
{
   UMTS_TAS_VER_1_0_STATE_MAX = 2,  // only DPDT swap for non UL-CA case
   UMTS_TAS_VER_1_5_STATE_MAX = 4,  // only DPDT swap(take dual DPDT into consideration for UL-CA case)
   UMTS_TAS_VER_2_0_STATE_MAX = 4,  // DPDT swap and M/M' swap for non UL-CA case
   UMTS_TAS_VER_2_5_STATE_MAX = 8,  // DPDT swap and M/M' swap for UL-CA case
}UMTS_CUSTOM_TAS_STATE_MAX_E;

typedef enum
{
   UMTS_TAS_TST_DISABLE,
   UMTS_TAS_TST_ENABLE,
}UMTS_CUSTOM_TAS_ST_SWITCH_E;

typedef struct
{
   UMTSBand                           usage;
   UMTS_CUSTOM_TAS_ST_SWITCH_E        tas_tst_enable_by_route;
   kal_uint16                         tas_tst_state_status;
}UMTS_CUSTOM_SPLIT_TAS_TST_SETTING_T;

typedef struct
{
   UMTS_CUSTOM_TAS_ST_SWITCH_E            tas_tst_enable;
   UMTS_CUSTOM_SPLIT_TAS_TST_SETTING_T    UMTS_tas_tst_fe_route_db[UMTS_TAS_MAX_FE_ROUTE_NUM];
}UMTS_CUSTOM_TAS_TST_FE_ROUTE_DATABASE_T;
#endif/*IS_3G_TAS_TST_SUPPORT*/
#endif/*IS_3G_TAS_SUPPORT*/

#if (IS_3G_TX_POWER_OFFSET_SUPPORT || IS_3G_SAR_TX_POWER_BACKOFF_SUPPORT)
typedef  struct
{
   kal_uint16 max_uarfcn;
   kal_int16  pwr_offset_dB[UL1_ANTENNA_NUM][3];    /* [Ant Dimension][Mode 0/1/2 R99/HSDPA/HSUPA] ; unit: 1/8 dB, range: -8 ~ +7 dB */ 
}  U_sSUBBAND_SECTION;

typedef struct
{
   U_sSUBBAND_SECTION  subband_power_offset[CAL_UARFCN_SECTION];
} U_sTXPOWEROFFSETTABLE;

typedef struct
{
   U_sTXPOWEROFFSETTABLE  table[TPO_3G_TABLE_NUM];
} U_sTXPOWEROFFSETDATA;
#endif /* IS_3G_TX_POWER_OFFSET_SUPPORT */


#if (IS_3G_TAS_ANTENNA_IDX_ON_TEST_SIM)
typedef struct {
   ul1_antenna_idx_E         xBand1_TAS_ANT_IDX;
   ul1_antenna_idx_E         xBand2_TAS_ANT_IDX;
   ul1_antenna_idx_E         xBand3_TAS_ANT_IDX;
   ul1_antenna_idx_E         xBand4_TAS_ANT_IDX;
   ul1_antenna_idx_E         xBand5_TAS_ANT_IDX;
   ul1_antenna_idx_E         xBand6_TAS_ANT_IDX;
   ul1_antenna_idx_E         xBand8_TAS_ANT_IDX;
   ul1_antenna_idx_E         xBand9_TAS_ANT_IDX;
   ul1_antenna_idx_E         xBand10_TAS_ANT_IDX;
   ul1_antenna_idx_E         xBand11_TAS_ANT_IDX;
   ul1_antenna_idx_E         xBand19_TAS_ANT_IDX;
} UMTS_TAS_ANT_IDX_T;
#endif

#if (IS_3G_DAT_UL1_CUSTOM_SUPPORT || IS_3G_TAS_UL1_CUSTOM_SUPPORT)
typedef enum
{
   CAT_A = 0,
   CAT_B = 1,
   CAT_C = 2,
   CAT_CNT,
}UMTS_CUSTOM_TAS_CAT_E;
#endif

#if IS_3G_DAT_UL1_CUSTOM_SUPPORT
typedef enum
{
   UMTS_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX0,
   UMTS_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX1,
   UMTS_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX2,
   UMTS_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX3,
   UMTS_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX4,
   UMTS_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX5,
   UMTS_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX6,
   UMTS_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX7,
   UMTS_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX8,
   UMTS_DAT_CAT_A_MIPI_TABLE_CONFIG_IDX9,
   UMTS_DAT_CAT_A_MIPI_TABLE_NULL = UMTS_DAT_MIPI_TABLE_NULL,
}UMTS_CUSTOM_DAT_CAT_A_MIPI_TBL_IDX_E;


typedef enum
{
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX0,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX1,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX2,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX3,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX4,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX5,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX6,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX7,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX8,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX9,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX10,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX11,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX12,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX13,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX14,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX15,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX16,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX17,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX18,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX19,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX20,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX21,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX22,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX23,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX24,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX25,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX26,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX27,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX28,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX29,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX30,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX31,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX32,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX33,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX34,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX35,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX36,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX37,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX38,
   UMTS_DAT_CAT_B_MIPI_TABLE_CONFIG_IDX39,
   UMTS_DAT_CAT_B_MIPI_TABLE_NULL = UMTS_DAT_MIPI_TABLE_NULL,
}UMTS_CUSTOM_DAT_CAT_B_MIPI_TBL_IDX_E;

typedef enum
{
   UMTS_DAT_CAT_A_CONFIG_IDX0,
   UMTS_DAT_CAT_A_CONFIG_IDX1,
   UMTS_DAT_CAT_A_CONFIG_IDX2,
   UMTS_DAT_CAT_A_CONFIG_IDX3,
   UMTS_DAT_CAT_A_CONFIG_IDX4,
   UMTS_DAT_CAT_A_CONFIG_IDX5,
   UMTS_DAT_CAT_A_CONFIG_IDX6,
   UMTS_DAT_CAT_A_CONFIG_IDX7,
   UMTS_DAT_CAT_A_CONFIG_IDX8,
   UMTS_DAT_CAT_A_CONFIG_IDX9,
   UMTS_DAT_CAT_A_NULL = UMTS_DAT_FE_NULL,
}UMTS_CUSTOM_DAT_CAT_A_IDX_E;

typedef enum
{
   UMTS_DAT_CAT_B_CONFIG_IDX0,
   UMTS_DAT_CAT_B_CONFIG_IDX1,
   UMTS_DAT_CAT_B_CONFIG_IDX2,
   UMTS_DAT_CAT_B_CONFIG_IDX3,
   UMTS_DAT_CAT_B_CONFIG_IDX4,
   UMTS_DAT_CAT_B_CONFIG_IDX5,
   UMTS_DAT_CAT_B_CONFIG_IDX6,
   UMTS_DAT_CAT_B_CONFIG_IDX7,
   UMTS_DAT_CAT_B_CONFIG_IDX8,
   UMTS_DAT_CAT_B_CONFIG_IDX9,
   UMTS_DAT_CAT_B_CONFIG_IDX10,
   UMTS_DAT_CAT_B_CONFIG_IDX11,
   UMTS_DAT_CAT_B_CONFIG_IDX12,
   UMTS_DAT_CAT_B_CONFIG_IDX13,
   UMTS_DAT_CAT_B_CONFIG_IDX14,
   UMTS_DAT_CAT_B_CONFIG_IDX15,
   UMTS_DAT_CAT_B_CONFIG_IDX16,
   UMTS_DAT_CAT_B_CONFIG_IDX17,
   UMTS_DAT_CAT_B_CONFIG_IDX18,
   UMTS_DAT_CAT_B_CONFIG_IDX19,
   UMTS_DAT_CAT_B_CONFIG_IDX20,
   UMTS_DAT_CAT_B_CONFIG_IDX21,
   UMTS_DAT_CAT_B_CONFIG_IDX22,
   UMTS_DAT_CAT_B_CONFIG_IDX23,
   UMTS_DAT_CAT_B_CONFIG_IDX24,
   UMTS_DAT_CAT_B_CONFIG_IDX25,
   UMTS_DAT_CAT_B_CONFIG_IDX26,
   UMTS_DAT_CAT_B_CONFIG_IDX27,
   UMTS_DAT_CAT_B_CONFIG_IDX28,
   UMTS_DAT_CAT_B_CONFIG_IDX29,
   UMTS_DAT_CAT_B_CONFIG_IDX30,
   UMTS_DAT_CAT_B_CONFIG_IDX31,
   UMTS_DAT_CAT_B_CONFIG_IDX32,
   UMTS_DAT_CAT_B_CONFIG_IDX33,
   UMTS_DAT_CAT_B_CONFIG_IDX34,
   UMTS_DAT_CAT_B_CONFIG_IDX35,
   UMTS_DAT_CAT_B_CONFIG_IDX36,
   UMTS_DAT_CAT_B_CONFIG_IDX37,
   UMTS_DAT_CAT_B_CONFIG_IDX38,
   UMTS_DAT_CAT_B_CONFIG_IDX39,
   UMTS_DAT_CAT_B_NULL = UMTS_DAT_FE_NULL,
}UMTS_CUSTOM_DAT_CAT_B_IDX_E;


typedef enum
{
   UMTS_DAT_STATE0,
   UMTS_DAT_STATE1,
   UMTS_DAT_STATE2,
   UMTS_DAT_STATE3,
   UMTS_DAT_STATE4,
   UMTS_DAT_STATE5,
   UMTS_DAT_STATE6,
   UMTS_DAT_STATE7,
   UMTS_DAT_STATE_NULL,
}UMTS_CUSTOM_DAT_STATE_E;
   
typedef struct
{
   kal_uint32   cat_a_route_num;
   kal_uint32   cat_b_route_num;
}UMTS_CUSTOM_DAT_FE_ROUTE_MAP_T;

typedef struct
{  
   kal_bool   feature_enable;
   kal_int16  ap_scenario;
}UMTS_CUSTOM_DAT_FEATURE_BY_RAT_T;

typedef struct
{
   UMTSBand                           usage;
   UMTS_CUSTOM_DAT_FE_ROUTE_MAP_T     dat_fe_setting[UMTS_DAT_MAX_STATE_NUM];
}UMTS_CUSTOM_DAT_ROUTE_SETTING_T;   

typedef struct
{
   UMTS_CUSTOM_DAT_ROUTE_SETTING_T    UMTS_dat_fe_route_db[UMTS_DAT_MAX_FE_ROUTE_NUM];
}UMTS_CUSTOM_DAT_FE_ROUTE_DATABASE_T;   

typedef struct
{
   kal_uint32                     bpi_mask;
   kal_uint32                     bpi_value;
   UMTS_CUSTOM_DAT_CAT_A_MIPI_TBL_IDX_E dat_mipi_table_index;
}UMTS_CUSTOM_DAT_CAT_A_FE_SETTING_T;

typedef struct
{
   kal_uint32                     bpi_mask;
   kal_uint32                     bpi_value;
   UMTS_CUSTOM_DAT_CAT_B_MIPI_TBL_IDX_E dat_mipi_table_index;
}UMTS_CUSTOM_DAT_CAT_B_FE_SETTING_T;

typedef struct
{
   UMTS_CUSTOM_DAT_CAT_A_FE_SETTING_T   dat_cat_a_fe_route[UMTS_DAT_MAX_CAT_A_ROUTE_NUM];
}UMTS_CUSTOM_DAT_FE_CAT_A_T;

typedef struct
{
   UMTS_CUSTOM_DAT_CAT_B_FE_SETTING_T   dat_cat_b_fe_route[UMTS_DAT_MAX_CAT_B_ROUTE_NUM];
}UMTS_CUSTOM_DAT_FE_CAT_B_T;


typedef struct
{
   UMTS_CUSTOM_DAT_FE_CAT_A_T   dat_cat_a_fe_db;
   UMTS_CUSTOM_DAT_FE_CAT_B_T   dat_cat_b_fe_db;
}UMTS_CUSTOM_DAT_FE_DATABASE_T;
#endif

typedef struct
{
   UMTSBand HB1;
   UMTSBand HB2;
   UMTSBand HB3;
   UMTSBand LB1;
   UMTSBand LB2;
}U_sUl1dRfBandIndicator;

typedef struct
{
   UMTS_RXIOBASE_T rxLnaSel[UMTS_FE_RXBASE_TBL_SIZE_MAX];
}U_sUl1dRfRxLnaPortSel;

typedef struct
{
   UMTS_TXIOBASE_T txPathSel[UMTS_FE_TXBASE_TBL_SIZE_MAX];
}U_sUl1dRfTxPathSel;

typedef struct
{
   kal_uint32 Rx_Main_Path_Onoff;
   kal_uint32 Rx_Diversity_Path_Onoff;
}U_sUl1dRxdPathSetting;

#if defined (__UL1_HS_PLUS_PLATFORM__)
typedef struct
{
   MPR_Setting HSDPA_MprBackOff[20];
   MPR_Setting HSUPA_MprBackOff[20];
   #if IS_3G_MPR_EXTEND_SUPPORT
   MPR_Setting_SUB HSUPA_MprBackOff_SUB[20][5];
   kal_bool        isR6MprSubEn;
   #endif
}U_sUl1dMprBackOff;
#endif

#if IS_3G_MIPI_SUPPORT
typedef struct
{
   kal_bool   is3gMipiEn;
   kal_uint16 mipiOffset;
}U_sUl1dRfMipiSetting;
#endif

#if IS_3G_ELNA_SUPPORT
typedef struct
{
   ELNA_Setting_E isRxElnaOn[20];
   ELNA_Setting_E isRxDElnaOn[20];
}U_sUl1DElnaSetting;
#endif

typedef struct
{
   /* PCFE and DPD OTFC non-custom parameters  */
   U_Ul1D_PCFE_DPD_OTFC_NONCUSTOM_PARA_T pcfe_dpdotfc_noncustom_para;

   /* PCFE and DPD OTFC custom parameters  */   
   U_UL1D_PCFE_DPD_OTFC_CUSTOM_PARA_T  pcfe_dpdotfc_custom_para;

} U_sUl1dDpdCustomInputData;

#if IS_3G_ELNA_IDX_SUPPORT
typedef struct
{
   MML1_FE_ELNA_ROUTE_E RxElnaIdx[20];
   MML1_FE_ELNA_ROUTE_E RxdElnaIdx[20];
}UMTS_CUSTOM_ELNA_IDX_T;

typedef struct
{
   MML1_FE_ELNA_ROUTE_E elna_idx_main;
   MML1_FE_ELNA_ROUTE_E elna_idx_div;
}UMTS_ELNA_IDX_T;

#endif

#if IS_3G_FDD_INTERFERENCE_CHECK_SUPPORT
typedef struct
{
   kal_uint16 interference_freq_start;
   kal_uint16 interference_freq_end;
}UMTS_RF_INTERFERENCE_FREQUENCY_SET_T;

typedef struct
{
   UMTS_RF_INTERFERENCE_FREQUENCY_SET_T interference_freq_groupA[8];
   UMTS_RF_INTERFERENCE_FREQUENCY_SET_T interference_freq_groupB[8];
}UMTS_RF_INTERFERENCE_FREQUENCY_T;
#endif

/********************************************************************
**       CA structure declaration
*********************************************************************/

typedef struct
{
   UMTSCaBand CA_IND_0;
   UMTSCaBand CA_IND_1;
   UMTSCaBand CA_IND_2;
   UMTSCaBand CA_IND_3;
   UMTSCaBand CA_IND_4;
}U_sUl1dRfCaBandIndicator;

typedef struct
{
   kal_uint16           cc_cnt;
   UMTSBand             cc_band[MAX_NUMBER_OF_RX_SUBBLOCK];
}UMTS_CA_CFG_T;

typedef struct
{
   UMTS_RX_IODATA_T    rxIodata;
   UMTS_RX_PDATA_T     rxPdata;
   #if IS_3G_RXD_FE_CONTROL_SUPPORT
   UMTS_RX_PDATA_T     rxPdata2;
   #endif   
   UMTS_Route          rxMipiTblIdx;
}UMTS_FE_RX_ROUTE_T;

typedef struct
{
   UMTS_TX_IODATA_T     txIodata;
   UMTS_TX_PDATA_T      txPdata;
   UMTS_Route           txMipiTblIdx;
}UMTS_FE_TX_ROUTE_T;

typedef struct
{
   UMTSBand            band;
   UMTS_FE_RX_ROUTE_T  rx_cfg;
   UMTS_FE_TX_ROUTE_T  tx_cfg;
}U_sUl1dRfFeRouteSetting;

typedef struct
{
   kal_uint32 band; //TBD: how about CA_BAND_IND?
   kal_uint8  cc_cnt;
   U_sUl1dRfFeRouteSetting  cc_fe_route[MAX_NUMBER_OF_RX_SUBBLOCK];
}UMTS_FE_ROUTE_TABLE_T;

typedef struct
{
   UMTS_Route         rx_tbl_idx[MAX_NUMBER_OF_RX_SUBBLOCK];
   UMTS_Route         tx_tbl_idx[MAX_NUMBER_OF_TX_SUBBLOCK];
}UMTS_USAGE_ELM_T;

typedef union
{
   UMTS_RXIOBASE_T  rxio;
   UMTS_TXIOBASE_T  txio;
   UMTS_RX_PDATABASE_T  rxbpi;
   UMTS_TX_PDATABASE_T  txbpi;
}UMTS_DATABASE_U;

typedef struct
{
   UMTS_CA_CFG_T      usage;
   UMTS_USAGE_ELM_T   iobase;
   UMTS_USAGE_ELM_T   pdatabase;
   UMTS_USAGE_ELM_T   mipibase;
}UMTS_FE_USAGE_T;

typedef struct
{
   void        *database_ptr;
   kal_uint16   database_elm_size;
   kal_uint16   database_ttl_size;
   kal_uint16 (*database_handler)( kal_uint16 handle, void *src, void *dst );
} UL1D_DATABASE_HANDLER_T;

typedef struct
{
   /* Start pattern to be recognized by Modem Bin Update Tool */
   kal_uint32 startPattern;

   /* RF and parameter structure version */
   kal_uint8 structVersion; // record structure version for tool once we add more parameters to be customized in the future
   kal_uint8 rfType; // needed? To distinguish O3, OH and furhter 3G RF chips
   kal_uint8 isDataUpdate; // default FALSE, will be update to be TRUE after tool update parameters
   #if defined (__UL1_HS_PLUS_PLATFORM__)
   kal_bool  umtsRfSettingByNVRAM; // default True. if the value is False, than Single SW for Multiple HW scheme will be applied.
   #endif

   /* Timing of PA control */
   U_sUl1dRfPaControlTiming umtsRfPaControlTimingOffset;

   /* RF T/RX timing offset */
   U_sUl1dRfBsiBpiTiming umtsBsiBpiTiming;

   /* BPI data allocation */
   U_sUl1dRfBpiData umtsPdata;

   /* RF Hign-band and Low-band indicator */
   U_sUl1dRfBandIndicator umtsBandIndicator;

   /* RX LNA port selection */
   U_sUl1dRfRxLnaPortSel umtsRxLnaPortSel;

   /* TX output path selection */
   U_sUl1dRfTxPathSel umtsTxPathSel;

   /* PMU VPA control disable/enable */
   kal_bool xPMU_PA_CONTROL;

#if defined (__UL1_HS_PLUS_PLATFORM__)
   /* PMU VPA control disable/enable */
   U_sUl1dMprBackOff umtsMprBackOff;
#endif

   /* RxD support bit map*/
   kal_bool umtsRxDAlwaysOn;

   /* Tx PA dirft compensation bit map*/
   kal_uint32 umtsPADriftCompensation;

   /*MT6320, Vrf18 Bulk=>LOD solution*/
   kal_bool ultra_low_cost_solution;

   /*MT6167, temperature measurement enable*/
   kal_bool customer_TM_enable;

   /* Baseband Idle Mode RXD Feature enable */
   kal_bool umtsIdleModeRxDOn;

   /* End pattern to be recognized by Modem Bin Update Tool */

   /* VPA Mode Setting */
   kal_bool vpa_fpwm_mode;

   /* PA Section */
   kal_uint8 pa_section;

#if IS_3G_MIPI_SUPPORT
   U_sUl1dRfMipiSetting umtsRfMipiSetting;
#endif

   /* RF CA Band indicator */
   U_sUl1dRfCaBandIndicator umtsCaBandIndicator;

   /* CA RF FE usage table */
   UMTS_FE_USAGE_T umtsCaFrontEndUsageLut[UMTS_RF_FRONT_END_NUM_MAX];

#if IS_3G_FDD_RX_PATH_SELECTION_SUPPORT
   U_sRxPathSelection umtsRxPathSelection;
#endif

#if IS_3G_ELNA_SUPPORT
   U_sUl1DElnaSetting umtsRxElnaSetting;
#endif

   kal_bool band5_and_band6_indicator;
#if  IS_3G_B5_AND_B19_INDICATOR_SUPPORT     
   kal_bool band5_and_band19_indicator;
   kal_bool disable_band5_indicator;
#endif

#if IS_3G_RX_POWER_OFFSET_SUPPORT
        U_sUl1dMetaRxPowerOffsetSetting umtsRxPowerOffsetSetting;
#endif

   /* End pattern to be recognized by Modem Bin Update Tool */
   kal_uint32 endPattern;

}U_sUl1dRfCustomInputData;

/*=========================================================*/
//
//   CA Route Table SETTING
//
/*=========================================================*/
/** UMTS RF Rx VCO-Divider set element template */
typedef struct
{
   kal_uint8 vco;          ///< VCO index: 1: VCO1; 2: VCO2; 3: VCO31 or VCO32, and NULL (0xFF). DCO index: 0:DCOH, 1:DCOL
   kal_uint8 div;          ///< Divider: 2, 4, 6, 8, 10, 3, and NULL (0xFF)
} UMTS_RF_VCO_DIV_SEL_T;

/** UMTS RF Rx VCO-Divider selection table */
typedef struct
{
   UMTSBand                band;
   UMTS_RF_VCO_DIV_SEL_T   vco_div_set[UMTS_RF_RX_VCO_DIV_SET_NUM];
} UMTS_RF_RX_VCO_DIV_TABLE_T;

/** UMTS RF Tx VCO-Divider selection table
 */
typedef struct
{
   UMTSBand                band;
   UMTS_RF_VCO_DIV_SEL_T   vco_div_set[UMTS_RF_TX_VCO_DIV_SET_NUM];
} UMTS_RF_TX_VCO_DIV_TABLE_T;

/** UMTS RF CA VCO-Divider selection table
 */
typedef struct
{
   UMTSBand                band[UMTS_RF_CA_MAX_CC_NUM];              // 0:   PCC, 1: SCC
   UMTS_RF_VCO_DIV_SEL_T   vco_div_set[UMTS_RF_CA_VCO_DIV_SET_NUM];  // 0: RxPCC, 1: RxSCC, 2: TxPCC
} UMTS_RF_CA_VCO_DIV_TABLE_T;

typedef struct
{
   UMTSBand              band;
   UMTS_FE_RX_ROUTE_T    rx_cfg;
   UMTS_RF_VCO_DIV_SEL_T rx_vco_div;
   kal_uint8             srx;
   UMTS_Route            comp_rroute;
   kal_uint8             rx_irr_comp_idx;
   kal_uint8             rx_dc_comp_idx;
   kal_uint8             rx_rfic_sel;
}UMTS_RX_ROUTE_TABLE_T;

typedef struct
{
   UMTSBand              band;
   UMTS_FE_TX_ROUTE_T    tx_cfg;
   UMTS_RF_VCO_DIV_SEL_T tx_vco_div;
   kal_uint8             stx;
   UMTS_Route            comp_troute;
   kal_uint8             tx_rfic_sel;
}UMTS_TX_ROUTE_TABLE_T;

typedef struct
{
   UMTS_CA_CFG_T        usage;
   UMTS_Route           rx_cc_route_idx[MAX_NUMBER_OF_RX_SUBBLOCK];
   UMTS_Route           tx_cc_route_idx;
   kal_uint8            rx_iip2_comp_idx[MAX_NUMBER_OF_RX_SUBBLOCK];
}UMTS_USAGE_DES_T;

typedef  UMTS_Route     UMTS_RX_COMP_ROUTE_TABLE_T;
typedef  UMTS_Route     UMTS_TX_COMP_ROUTE_TABLE_T;

typedef struct
{
   UMTS_FE_ROUTE_TABLE_T       *fe_rt;
   UMTS_RX_ROUTE_TABLE_T       *rx_rt;
   UMTS_TX_ROUTE_TABLE_T       *tx_rt;
   UMTS_RX_COMP_ROUTE_TABLE_T  *rcmp_rt;
   UMTS_TX_COMP_ROUTE_TABLE_T  *tcmp_rt;
   UMTS_USAGE_DES_T            *ug_rt;
}UMTS_TBL_MAP_T;

#if UMTS_POC_RECAL_ENABLE
typedef struct
{
   UMTS_RF_POC_RECAL_DATA_T umts_debug_result_recal[MAX_SUPPORTED_BAND_INDEX];
}UMTS_RECAL_DEBUG_T;

typedef struct
{
   kal_bool   isTxDetRecal;
   kal_uint32 txDetRecalIdx;
}UMTS_RECAL_TXDET_INFO_T;
#endif
/******************************
* R/Tx/DET POC cal data
*******************************/
typedef struct
{
   kal_uint32 verno[MAX_SUPPORTED_BAND_INDEX];
   UMTS_RF_POC_RX_COMP_DATA_T   umts_rx_comp[MAX_SUPPORTED_BAND_INDEX];
   UMTS_RF_POC_DET_COMP_DATA_T  umts_det_comp[MAX_SUPPORTED_BAND_INDEX];
   UMTS_RF_POC_TX_COMP_DATA_T   umts_tx_comp[MAX_SUPPORTED_BAND_INDEX];
} UMTS_RF_POWER_ON_CAL_DATA_T;

/** FEC AGC DC Table
 */
#define SRAM_BYTE_128_ALIGN                    (128)
#define SRAM_PADDIND_TO_128_ALIGN(x)           ((((x)%SRAM_BYTE_128_ALIGN)==0)?SRAM_BYTE_128_ALIGN:(SRAM_BYTE_128_ALIGN - ((x)%SRAM_BYTE_128_ALIGN)))

typedef struct
{
   UMTS_RF_POC_RX_DC_HPM_COMP_T  rx_rf_dc_hpm[MMRFC_ANT_NUM]; //RF DC for HPM
   UMTS_RF_POC_RX_DC_LPM_COMP_T  rx_rf_dc_lpm[MMRFC_ANT_NUM]; //RF DC for LPM
   UMTS_RF_POC_RX_DC_HPM_COMP_T  rx_dig_dc_hpm[MMRFC_ANT_NUM]; //Digital DC for HPM
   UMTS_RF_POC_RX_DC_LPM_COMP_T  rx_dig_dc_lpm[MMRFC_ANT_NUM]; //Digital DC for LPM
}UL1D_RXAGC_RF_POC_RX_DC_COMP_PER_ROUTE_T;

typedef struct
{
   UL1D_RXAGC_RF_POC_RX_DC_COMP_PER_ROUTE_T dc_part;
   kal_uint8 ready_bit; // for FEC/L1core do checksum
}UL1D_RF_RXAGC_DC_TABLE_T;

//calibration data for a CC
typedef struct
{
   UL1D_RF_RXAGC_DC_TABLE_T dc_table;
   kal_uint8 padding_to_128_bytes[SRAM_PADDIND_TO_128_ALIGN(sizeof(UL1D_RF_RXAGC_DC_TABLE_T))];
}UL1D_RF_RXAGC_DC_TABLE_L1_EMI_T;

/*******************************************************************************
** Global data for RF customization and META Factory Calibration
*******************************************************************************/
extern U_sUl1dRfCustomInputData *UMTS_RF_CUSTOM_INPUT_DATA_ptr;
extern U_sAFCDACDATA            *U_AFC_DAC_ptr;
extern U_sAFCCAPDATA            *U_AFC_CAP_ptr;
extern kal_uint16               *U_TEMP_DAC_ptr;

#if IS_3G_ELNA_IDX_SUPPORT
extern UMTS_CUSTOM_ELNA_IDX_T *UMTS_ELNA_IDX_LUT_ptr;
extern UMTS_CUSTOM_ELNA_IDX_T UMTS_ELNA_IDX_LUT_PCORE;
#endif

#if (IS_3G_TAS_ANTENNA_IDX_ON_TEST_SIM)
extern UMTS_TAS_ANT_IDX_T* UMTS_TAS_ANT_IDX_ptr;
extern UMTS_TAS_ANT_IDX_T  UMTS_TAS_ANT_IDX_by_band;
#endif

#if (IS_3G_TX_POWER_OFFSET_SUPPORT || IS_3G_SAR_TX_POWER_BACKOFF_SUPPORT)
extern U_sTXPOWEROFFSETDATA* UMTS_TX_POWER_OFFSET_TABLE[UL1D_RF_CUSTOM_BAND];
#endif

#if (IS_3G_RX_POWER_OFFSET_SUPPORT)
extern U_sRXPOWEROFFSETDATA* UMTS_RX_POWER_OFFSET_TABLE[UL1D_RF_CUSTOM_BAND];
#endif


#if (IS_3G_VPA_SEL_BY_BAND_SUPPORT)
extern UMTS_VPA_SOURCE_TYPE* UMTS_VPA_SRC_SEL_TABLE[UL1D_RF_CUSTOM_BAND];
#endif

#if IS_3G_RFEQ_COEF_SUBBAND_SUPPORT
extern hs_dsch_rfeq_info_band_T* UMTS_RFEQ_COEF_TABLE[UL1D_RF_CUSTOM_BAND];
#endif

#if IS_3G_RFEQ_REAL_COEF_TEST
extern URXDFE_REAL_RFEQ_CUSTOM_BAND_T* UMTS_RFEQ_REAL_COEF_TABLE[UL1D_RF_CUSTOM_BAND];
#endif

#if IS_3G_RF_NCCA_SUPPORT
extern U_sTEMPAGCOFFSET         *U_AGC_PATHLOSS_TABLE[UMTS_AGC_PATHLOSS_TBL_SIZE];
#else
extern U_sTEMPAGCOFFSET         *U_AGC_PATHLOSS_TABLE[UL1D_RF_CUSTOM_BAND];
#endif
extern U_sRAMPDATA              *UMTS_RampData[UL1D_RF_CUSTOM_BAND];
extern U_sPAOCTLVLSETTING       *U_PA_OCTLEV_TABLE[UL1D_RF_CUSTOM_BAND];
extern U_sPARACHTMCOMPDATA      *U_PA_RACH_COMP_TABLE[UL1D_RF_CUSTOM_BAND];
#if IS_3G_RF_NCCA_SUPPORT
extern U_sTEMPAGCOFFSET         *U_AGC_PATHLOSS_RXD_TABLE[UMTS_AGC_PATHLOSS_TBL_SIZE]; //RXD path loss
#else
extern U_sTEMPAGCOFFSET         *U_AGC_PATHLOSS_RXD_TABLE[UL1D_RF_CUSTOM_BAND]; //RXD path loss
#endif
extern U_sPADRIFTSETTING        *U_PA_DRIFT_TABLE[];

extern UMTS_RF_POWER_ON_CAL_DATA_T   *U_POC_CAL_DATA_ptr;

#if __IS_UL1D_DPD_SUPPORT__
extern U_sDPD_GROUP_ALL          *p_U_DPD_GROUP_TABLE[UL1D_RF_CUSTOM_BAND];
extern U_sDPD_GROUP_ALL*          U_DPD_GROUP_PCORE_TABLE[UL1D_RF_CUSTOM_BAND];
extern U_sUl1dDpdCustomInputData *UMTS_DPD_CUSTOM_INPUT_DATA_ptr;
extern U_sUl1dDpdCustomInputData *UMTS_DPD_CUSTOM_INPUT_DATA_PCORE_ptr;
extern U_sUl1dDpdCustomInputData  UMTS_DPD_CUSTOM_INPUT_DATA_PCORE;
extern DPD_ENABLE_E              *UMTS_DPD_ENABLE_ptr;
extern DPD_ENABLE_E              *UMTS_DPD_ENABLE_PCORE_ptr;
extern DPD_ENABLE_E               UMTS_DPD_ENABLE_PCORE;
#endif

extern const U_sDPD_COMMON_CTRL*  UMTS_DPD_CommonCtrlData_SetDefault[UL1D_RF_CUSTOM_BAND];
extern const U_UL1D_PCFE_DPD_OTFC_CUSTOM_PARA_T  ul1d_pcfe_dpd_otfc_custom_para_SetDefault;

#if IS_URF_PCORE
extern kal_bool is_band5_and_band6_indicator;
#if IS_3G_B5_AND_B19_INDICATOR_SUPPORT
extern kal_bool is_band5_and_band19_indicator;
extern kal_bool is_disable_band5_indicator;
#endif
extern kal_uint8 ul1d_BandInfo[MAX_SUPPORTED_BAND_INDEX];
extern kal_uint32 ul1d_CaBandInfo[UMTS_RF_CA_FE_NUM_MAX];
extern UMTS_FE_ROUTE_TABLE_T UMTS_FE_ROUTE_TBL[UMTS_RF_FRONT_END_NUM_MAX];

/*this may move to Pcore interface head file*/
extern U_sUl1dRfCustomInputData *UMTS_RF_CUSTOM_INPUT_DATA_PCORE_ptr;
extern U_sUl1dRfCustomInputData UMTS_RF_CUSTOM_INPUT_DATA_PCORE;

/* const variable as default calibration data in Pcore */
#if IS_3G_RF_NCCA_SUPPORT
extern const U_sTEMPAGCOFFSET*      const U_AGC_PATHLOSS_TABLE_SetDefault[UMTS_AGC_PATHLOSS_TBL_SIZE];
#else
extern const U_sTEMPAGCOFFSET*      const U_AGC_PATHLOSS_TABLE_SetDefault[UL1D_RF_CUSTOM_BAND];
#endif
extern const U_sRAMPDATA*           const UMTS_RampData_SetDefault[UL1D_RF_CUSTOM_BAND];
extern const U_sPAOCTLVLSETTING*    const U_PA_OCTLEV_TABLE_SetDefault[UL1D_RF_CUSTOM_BAND];
extern const U_sPARACHTMCOMPDATA*   const U_PA_RACH_COMP_TABLE_SetDefault[UL1D_RF_CUSTOM_BAND];
#if IS_3G_RF_NCCA_SUPPORT
extern const U_sTEMPAGCOFFSET*      const U_AGC_PATHLOSS_RXD_TABLE_SetDefault[UMTS_AGC_PATHLOSS_TBL_SIZE]; //RXD path loss
#else
extern const U_sTEMPAGCOFFSET*      const U_AGC_PATHLOSS_RXD_TABLE_SetDefault[UL1D_RF_CUSTOM_BAND]; //RXD path loss
#endif
extern const U_sPADRIFTSETTING*     const U_PA_DRIFT_TABLE_SetDefault[];
extern const U_sAFCDACDATA        U_AFC_DAC_SetDefault;
extern const U_sAFCCAPDATA        U_AFC_CAP_SetDefault;
extern const kal_uint16           U_TEMP_DAC_SetDefault[CAL_TEMP_SECTION];
extern const UMTS_FE_ROUTE_TABLE_T      UMTS_FE_ROUTE_TBL_SetDefault[UMTS_RF_FRONT_END_NUM_MAX];
#if IS_3G_TAS_SUPPORT
extern UMTS_TAS_Configuration_T UMTS_TAS_Configuration_Table_SetDefault;
#endif/*IS_3G_TAS_SUPPORT*/

#if (IS_3G_TAS_ANTENNA_IDX_ON_TEST_SIM)
extern UMTS_TAS_ANT_IDX_T       *UMTS_TAS_ANT_IDX_PCORE_ptr;
#endif

#if (IS_3G_TX_POWER_OFFSET_SUPPORT || IS_3G_SAR_TX_POWER_BACKOFF_SUPPORT)
extern const U_sTXPOWEROFFSETDATA* const U_TX_POWER_OFFSET_TABLE_SetDefault[];
extern U_sTXPOWEROFFSETDATA* UMTS_TX_POWER_OFFSET_PCORE_TABLE[UL1D_RF_CUSTOM_BAND];
#endif

#if(IS_3G_RX_POWER_OFFSET_SUPPORT)
extern const U_sRXPOWEROFFSETDATA* const U_RX_POWER_OFFSET_TABLE_SetDefault[];
extern U_sRXPOWEROFFSETDATA* UMTS_RX_POWER_OFFSET_PCORE_TABLE[UL1D_RF_CUSTOM_BAND];
#endif

#if (IS_3G_VPA_SEL_BY_BAND_SUPPORT)
extern const UMTS_VPA_SOURCE_TYPE* const UMTS_VPA_SRC_SEL_TABLE_SetDefault[];
extern UMTS_VPA_SOURCE_TYPE* UMTS_VPA_SRC_SEL_PCORE_TABLE[UL1D_RF_CUSTOM_BAND];
#endif

#if IS_3G_RFEQ_COEF_SUBBAND_SUPPORT
extern const hs_dsch_rfeq_info_band_T* const UMTS_RFEQ_COEF_TABLE_SetDefault[];
extern hs_dsch_rfeq_info_band_T* UMTS_RFEQ_COEF_PCORE_TABLE[UL1D_RF_CUSTOM_BAND];
#endif

#if IS_3G_RFEQ_REAL_COEF_TEST
extern const URXDFE_REAL_RFEQ_CUSTOM_BAND_T* const UMTS_RFEQ_REAL_COEF_TABLE_SetDefault[];
extern URXDFE_REAL_RFEQ_CUSTOM_BAND_T* UMTS_RFEQ_REAL_COEF_PCORE_TABLE[UL1D_RF_CUSTOM_BAND];
#endif

/* Pcore global table pointer extern */
#if IS_3G_RF_NCCA_SUPPORT
extern U_sTEMPAGCOFFSET    *U_AGC_PATHLOSS_PCORE_TABLE[UMTS_AGC_PATHLOSS_TBL_SIZE];
extern U_sTEMPAGCOFFSET    *U_AGC_PATHLOSS_RXD_PCORE_TABLE[UMTS_AGC_PATHLOSS_TBL_SIZE];
#else
extern U_sTEMPAGCOFFSET    *U_AGC_PATHLOSS_PCORE_TABLE[UL1D_RF_CUSTOM_BAND];
extern U_sTEMPAGCOFFSET    *U_AGC_PATHLOSS_RXD_PCORE_TABLE[UL1D_RF_CUSTOM_BAND];
#endif
extern U_sRAMPDATA         *UMTS_RampData_PCORE_TABLE[UL1D_RF_CUSTOM_BAND];
extern U_sPAOCTLVLSETTING  *U_PA_OCTLEV_PCORE_TABLE[UL1D_RF_CUSTOM_BAND];
extern U_sPARACHTMCOMPDATA *U_PA_RACH_COMP_PCORE_TABLE[UL1D_RF_CUSTOM_BAND];
extern U_sPADRIFTSETTING   *U_PA_DRIFT_PCORE_TABLE[UL1D_RF_CUSTOM_BAND];
extern U_sAFCDACDATA       *U_AFC_DAC_PCORE_ptr;
extern U_sAFCCAPDATA       *U_AFC_CAP_PCORE_ptr;
extern kal_uint16          *U_TEMP_DAC_PCORE_TABLE;
extern UMTS_RF_POWER_ON_CAL_DATA_T  *U_POC_CAL_DATA_PCORE_ptr;
extern const UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T *UMTS_PWRON_CAL_DATA_PTR[UL1D_RF_CUSTOM_BAND];
#endif //IS_URF_PCORE

// Start for ADAPT IOT AMR workaround
//extern kal_bool UL1_IS_ADAPT_IOT_CUSTOMIZATION; //remove for gcc build error
// End for ADAPT IOT AMR workaround
extern kal_uint32 UL1D_DCXO_CAPID;
extern kal_bool   UL1D_Set_CAPID;

/*******************************************************************************
** Global Function Prototypes for RF customization and META Factory Calibration
*******************************************************************************/
// for RAC and L4 to recognize this FDD HW band support query API
extern void UL1D_UeBandCapability(kal_uint16 *ue_cap);
extern void UL1D_UeBandCapabilityEx(kal_uint32 *ue_cap);
extern void UL1D_UeCaBandCapability(CA_RF_BAND_CAPABILITY_T *ue_cap, kal_uint8 report_index);
extern void UL1TST_MsCapability(UMTS_MsCapabilityEx *ms_cap);
extern void UL1D_RF_SetTempDac(void* table);
extern void UL1D_RF_SetPathLossTable(UMTSBand rf_band, void* table);
extern void UL1D_RF_SetTxDacData(UMTSBand rf_band, void* table );
extern void UL1D_RF_SetPaApcDac(UMTSBand rf_band, kal_uint16 idx, kal_uint8 pa_mode, kal_uint8 vm1, kal_uint8 vm2, kal_uint16 dc2dc_level, kal_uint16 vbias_dac, kal_uint16 apc_dac);
extern void UL1D_RF_SetImmediateBSI(kal_uint32 bsidata);
extern void UL1D_RF_GetImmediateBSI(kal_uint32 bsi_isb_port, kal_uint32 bsi_addr, kal_uint32 *bsi_data);
extern void UL1D_RF_SetTxPaOctLevData(UMTSBand rf_band, void* table);
extern void UL1D_RF_GetPwrDetMeas(kal_uint16 txpwr_set_idx, kal_int16 *txpwr_meas);
extern void UL1D_RF_SetTxPrachTmCompData(UMTSBand rf_band, void* table);
extern void UL1D_RF_SetAfcDac(void* table);
extern void UL1D_RF_SetAfcCap(void* table);
extern UMTSBand L1_RxUARFCNToFrequencyBand( kal_uint16 uarfcn, kal_bool is_band6_considered );
extern kal_bool FDD_UL1D_RxMultiCarrier_Check(kal_uint16 *uarfcn_list, kal_uint8 num_uarfcn);
extern kal_bool FDD_UL1D_TxMultiCarrier_Check(kal_uint16 *uarfcn_list, kal_uint8 num_uarfcn);
extern kal_uint8 UL1D_RF_CalDataGetBand(UMTSBand rf_band_in_question, kal_bool nvram_init);
extern kal_uint8 UL1D_RF_UMTSBandToHLB(UMTSBand rf_band);

#if __IS_UL1D_DPD_SUPPORT__
extern kal_uint32 UL1D_RF_GET_DPD_SUPPORT_BAND( void );
#endif

#if defined(__UMTS_R8__)

extern void UL1D_RF_SetPathLossRxdTable( UMTSBand rf_band, void* table );
extern kal_uint8 UL1D_RF_GetCurrRxDLnaStatus(void);
extern void UL1D_RF_SetTxPaDriftData(UMTSBand rf_band, void* table);
extern void UL1D_RF_SetRxBandwidth(kal_bool is_5mhz);

//just for META link, UL1 define this function as dummy macro
#define UL1D_RF_SetPwrCtrlMode(x)
#else
extern void UL1D_RF_SetPwrCtrlMode(kal_uint8 mode);
#endif

#if !IS_HSPA_HWTPC
extern void UL1D_Meta_HWTPC_Config(kal_uint8 pc_algo, kal_uint8 tpc_used_frame, kal_int16 pini, META_HWTPC_FRAME_INFO* info);
#else
extern void UL1D_Meta_HWTPC_Config(META_HWTPC_INFO *info, META_HWTPC_FRAME_INFO* f_info);
#endif
extern kal_bool UL1TST_GET_BIT_COUNT(kal_uint32* total_bits, kal_uint32* error_bits);
extern kal_int8 UL1D_RF_Replace_Gain_Table_for_Cal(kal_uint32 action);
extern kal_uint8 UL1D_RF_GetCurrRxLnaStatus(void);
extern kal_uint32 UL1D_RF_GetID(void);
extern kal_uint32 UL1TST_CAPID_MAX(void);
extern void UL1D_RF_SetCrystalCap(kal_uint32 cap_no);

extern void UL1T_InitCustomInputData(void);
extern void UL1T_InitPowerOnCalData(void);
extern unsigned long UL1D_RF_GetRxDCOC_CW151(void);

extern void UL1D_RF_UpdateNVRAMToSHM(UMTS_RF_POWER_ON_CAL_DATA_T* p_poc_shm,kal_uint8 band_idx,UMTS_RF_POWER_ON_CAL_DATA_PER_BAND_T* table);

extern void UL1D_RF_CA_CustomData_Update( U_sUl1dRfCustomInputData *dst );
extern void UL1D_RF_DynamicSetRfBandSupport( U_sUl1dRfCustomInputData *dst );
extern void UL1D_RF_UpdateDatabaseTable( void );
extern void UL1T_InitCalibrationData( void );
extern void nvram_init_uL1_mipiData(void);
extern void UL1D_RF_SetPowerOnCalData_ByDefaultCustom( UMTSBand rf_band, const void* table );

#if IS_3G_FDD_INTERFERENCE_CHECK_SUPPORT
extern void UL1D_RF_Get_Interference_Freq_Table(UMTS_RF_INTERFERENCE_FREQUENCY_T *ul1d_interference_frequency_table);
#endif

#if IS_3G_FDD_RX_PATH_SELECTION_SUPPORT
extern U_sUl1dRfCustomInputData* UL1D_RF_ANT_SEL(ANT_SEL_TYPE antsel );
extern ANT_SEL_TYPE UL1D_RF_ANT_QUERY(void);
#endif

#if (IS_3G_TX_POWER_OFFSET_SUPPORT || IS_3G_SAR_TX_POWER_BACKOFF_SUPPORT)
extern void UL1D_RF_SetTpoData(kal_uint32 LID, kal_uint8 *buffer );
extern void nvram_init_uL1_TpoData(void);
#endif

#if IS_3G_RX_POWER_OFFSET_SUPPORT
extern void nvram_init_uL1_RpoData(void);
#endif

#if (IS_3G_VPA_SEL_BY_BAND_SUPPORT)
extern void nvram_init_uL1_vpaSrcSel(void);
#endif/*IS_3G_VPA_SEL_BY_BAND_SUPPORT*/

#if IS_3G_DAT_UL1_CUSTOM_SUPPORT
extern void nvram_init_uL1_datFeatureByRat(void);
extern void nvram_init_uL1_datFeatureByRoute(void);
extern void nvram_init_uL1_datFeDb(void);
extern void nvram_init_uL1_mipiDatAEvent(void);
extern void nvram_init_uL1_mipiDatAData(void);
extern void nvram_init_uL1_mipiDatBEvent(void);
extern void nvram_init_uL1_mipiDatBData(void);

extern const UMTS_CUSTOM_DAT_FE_CAT_A_T UMTS_DAT_CAT_A_DATABASE_SetDefault;
extern const UMTS_CUSTOM_DAT_FE_CAT_B_T UMTS_DAT_CAT_B_DATABASE_SetDefault;
extern UMTS_CUSTOM_DAT_FE_DATABASE_T UMTS_DAT_FE_DATABASE_SetDefault;
extern const UMTS_CUSTOM_DAT_FE_ROUTE_DATABASE_T UMTS_DAT_FE_ROUTE_DATABASE_SetDefault;
extern UMTS_CUSTOM_DAT_FEATURE_BY_RAT_T UMTS_DAT_FEATURE_BY_RAT_SetDefault;

extern UMTS_CUSTOM_DAT_FE_DATABASE_T       *UMTS_DAT_FE_DATABASE_TABLE_ptr;
extern UMTS_CUSTOM_DAT_FE_ROUTE_DATABASE_T *UMTS_DAT_FE_ROUTE_TABLE_ptr;
extern UMTS_CUSTOM_DAT_FEATURE_BY_RAT_T    *UMTS_DAT_FEATURE_BY_RAT_ptr;

extern UMTS_CUSTOM_DAT_FE_DATABASE_T       *UMTS_DAT_FE_DATABASE_PCORE_ptr;
extern UMTS_CUSTOM_DAT_FE_ROUTE_DATABASE_T *UMTS_DAT_FE_ROUTE_DATABASE_PCORE_ptr;
extern UMTS_CUSTOM_DAT_FEATURE_BY_RAT_T    *UMTS_DAT_FEATURE_BY_RAT_PCORE_ptr;
#endif

#if IS_3G_TAS_UL1_CUSTOM_SUPPORT
extern void nvram_init_uL1_tasFeatureByRat(void);
extern void nvram_init_uL1_tasFeatureByRoute(void);
extern void nvram_init_uL1_tasFeDb(void);
extern void nvram_init_uL1_mipiTasAEvent(void);
extern void nvram_init_uL1_mipiTasAData(void);
extern void nvram_init_uL1_mipiTasBEvent(void);
extern void nvram_init_uL1_mipiTasBData(void);
extern void nvram_init_uL1_mipiTasCEvent(void);
extern void nvram_init_uL1_mipiTasCData(void);

extern const UMTS_CUSTOM_TAS_FE_CAT_A_T UMTS_TAS_CAT_A_DATABASE_SetDefault;
extern const UMTS_CUSTOM_TAS_FE_CAT_B_T UMTS_TAS_CAT_B_DATABASE_SetDefault;
extern const UMTS_CUSTOM_TAS_FE_CAT_C_T UMTS_TAS_CAT_C_DATABASE_SetDefault;
extern UMTS_CUSTOM_TAS_FE_DATABASE_T UMTS_TAS_FE_DATABASE_SetDefault;
extern const UMTS_CUSTOM_TAS_FE_ROUTE_DATABASE_T UMTS_TAS_FE_ROUTE_DATABASE_SetDefault;
extern UMTS_CUSTOM_TAS_FEATURE_BY_RAT_T UMTS_TAS_FEATURE_BY_RAT_SetDefault;

extern UMTS_CUSTOM_TAS_FE_DATABASE_T       *UMTS_TAS_FE_DATABASE_TABLE_ptr;
extern UMTS_CUSTOM_TAS_FE_ROUTE_DATABASE_T *UMTS_TAS_FE_ROUTE_TABLE_ptr;
extern UMTS_CUSTOM_TAS_FEATURE_BY_RAT_T    *UMTS_TAS_FEATURE_BY_RAT_ptr;

extern UMTS_CUSTOM_TAS_FE_DATABASE_T       *UMTS_TAS_FE_DATABASE_PCORE_ptr;
extern UMTS_CUSTOM_TAS_FE_ROUTE_DATABASE_T *UMTS_TAS_FE_ROUTE_DATABASE_PCORE_ptr;
extern UMTS_CUSTOM_TAS_FEATURE_BY_RAT_T    *UMTS_TAS_FEATURE_BY_RAT_PCORE_ptr;
#if IS_3G_TAS_TST_SUPPORT
extern const UMTS_CUSTOM_TAS_TST_FE_ROUTE_DATABASE_T UMTS_TAS_TST_FE_ROUTE_DATABASE_SetDefault;
extern UMTS_CUSTOM_TAS_TST_FE_ROUTE_DATABASE_T UMTS_TAS_TST_FE_ROUTE_DATABASE_PCORE;
extern UMTS_CUSTOM_TAS_TST_FE_ROUTE_DATABASE_T *UMTS_TAS_TST_FE_ROUTE_DATABASE_PCORE_ptr;
extern UMTS_CUSTOM_TAS_TST_FE_ROUTE_DATABASE_T *UMTS_TAS_TST_FE_ROUTE_DATABASE_ptr;
#endif
#if IS_3G_TAS_INHERIT_4G_ANT
kal_bool UL1D_RF_TAS_QUERY_INHERIT_LTE_ANT(LTE_Band lteBand, UMTSBand wcdmaBand, UMTS_CUSTOM_TAS_STATE_E tasState);

extern void nvram_init_uL1_tasInheritLteAnt(void);
extern void ul1d_rf_tas_inherit_lte_transform_bitmap(const UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_T *src_p, UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_T *dst_p);

extern const UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_T* const UMTS_TAS_INHERIT_LTE_ANT_TABLE_SetDefault[];
extern UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T *UMTS_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_PCORE_ptr;

extern UMTS_CUSTOM_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_T *UMTS_TAS_INHERIT_LTE_BAND_BITMAP_TABLE_ptr;
#endif
#endif
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBandNone_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand1_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand2_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand3_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand4_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand5_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand6_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand7_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand8_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand9_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand10_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand11_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_UMTSBand19_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBandNone_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand1_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand2_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand3_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand4_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand5_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand6_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand7_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand8_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand9_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand10_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand11_SetDefault;
extern const U_sTEMPAGCOFFSET AGC_PATHLOSS_RXD_UMTSBand19_SetDefault;
extern const U_sRAMPDATA  RampData_UMTSBandNone_SetDefault;
extern const U_sRAMPDATA  RampData_UMTSBand1_SetDefault;
extern const U_sRAMPDATA  RampData_UMTSBand2_SetDefault;
extern const U_sRAMPDATA  RampData_UMTSBand3_SetDefault;
extern const U_sRAMPDATA  RampData_UMTSBand4_SetDefault;
extern const U_sRAMPDATA  RampData_UMTSBand5_SetDefault;
extern const U_sRAMPDATA  RampData_UMTSBand6_SetDefault;
extern const U_sRAMPDATA  RampData_UMTSBand7_SetDefault;
extern const U_sRAMPDATA  RampData_UMTSBand8_SetDefault;
extern const U_sRAMPDATA  RampData_UMTSBand9_SetDefault;
extern const U_sRAMPDATA  RampData_UMTSBand10_SetDefault;
extern const U_sRAMPDATA  RampData_UMTSBand11_SetDefault;
extern const U_sRAMPDATA  RampData_UMTSBand19_SetDefault;
extern const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBandNone_SetDefault;
extern const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand1_SetDefault;
extern const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand2_SetDefault;
extern const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand3_SetDefault;
extern const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand4_SetDefault;
extern const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand5_SetDefault;
extern const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand6_SetDefault;
extern const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand7_SetDefault;
extern const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand8_SetDefault;
extern const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand9_SetDefault;
extern const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand10_SetDefault;
extern const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand11_SetDefault;
extern const U_sPAOCTLVLSETTING  PaOctLevData_UMTSBand19_SetDefault;
extern const U_sPADRIFTSETTING  PaDriftCompData_UMTSBandNone_SetDefault;
extern const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand1_SetDefault;
extern const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand2_SetDefault;
extern const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand3_SetDefault;
extern const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand4_SetDefault;
extern const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand5_SetDefault;
extern const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand6_SetDefault;
extern const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand7_SetDefault;
extern const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand8_SetDefault;
extern const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand9_SetDefault;
extern const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand10_SetDefault;
extern const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand11_SetDefault;
extern const U_sPADRIFTSETTING  PaDriftCompData_UMTSBand19_SetDefault;
extern const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBandNone_SetDefault;
extern const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand1_SetDefault;
extern const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand2_SetDefault;
extern const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand3_SetDefault;
extern const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand4_SetDefault;
extern const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand5_SetDefault;
extern const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand6_SetDefault;
extern const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand7_SetDefault;
extern const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand8_SetDefault;
extern const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand9_SetDefault;
extern const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand10_SetDefault;
extern const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand11_SetDefault;
extern const U_sPARACHTMCOMPDATA RACH_temperature_compensation_UMTSBand19_SetDefault;

#if IS_3G_FDD_INTERFERENCE_CHECK_SUPPORT
extern UMTS_RF_INTERFERENCE_FREQUENCY_T UMTS_RF_INTERFERENCE_FREQUENCY_PCORE;
extern UMTS_RF_INTERFERENCE_FREQUENCY_T *UMTS_RF_INTERFERENCE_FREQUENCY_PCORE_ptr;
extern UMTS_RF_INTERFERENCE_FREQUENCY_T *UMTS_RF_INTERFERENCE_FREQUENCY_ptr;
#endif

#if IS_3G_RF_FPGA_L1S_BRINGUP
extern void UL1D_MMRF_PcoreUpdate2SHM_ByDefaultCustom(void);
extern void UL1D_MMRF_PCoreSHMDataInit(void);
#endif

extern const U_sRAMPDATA  DPD_RampData_UMTSBandNone_SetDefault;
extern const U_sRAMPDATA  DPD_RampData_UMTSBand1_SetDefault;
extern const U_sRAMPDATA  DPD_RampData_UMTSBand2_SetDefault;
extern const U_sRAMPDATA  DPD_RampData_UMTSBand3_SetDefault;
extern const U_sRAMPDATA  DPD_RampData_UMTSBand4_SetDefault;
extern const U_sRAMPDATA  DPD_RampData_UMTSBand5_SetDefault;
extern const U_sRAMPDATA  DPD_RampData_UMTSBand6_SetDefault;
extern const U_sRAMPDATA  DPD_RampData_UMTSBand7_SetDefault;
extern const U_sRAMPDATA  DPD_RampData_UMTSBand8_SetDefault;
extern const U_sRAMPDATA  DPD_RampData_UMTSBand9_SetDefault;
extern const U_sRAMPDATA  DPD_RampData_UMTSBand10_SetDefault;
extern const U_sRAMPDATA  DPD_RampData_UMTSBand11_SetDefault;
extern const U_sRAMPDATA  DPD_RampData_UMTSBand19_SetDefault;
extern const U_sPAOCTLVLSETTING  DPD_PaOctLevData_UMTSBandNone_SetDefault;
extern const U_sPAOCTLVLSETTING  DPD_PaOctLevData_UMTSBand1_SetDefault;
extern const U_sPAOCTLVLSETTING  DPD_PaOctLevData_UMTSBand2_SetDefault;
extern const U_sPAOCTLVLSETTING  DPD_PaOctLevData_UMTSBand3_SetDefault;
extern const U_sPAOCTLVLSETTING  DPD_PaOctLevData_UMTSBand4_SetDefault;
extern const U_sPAOCTLVLSETTING  DPD_PaOctLevData_UMTSBand5_SetDefault;
extern const U_sPAOCTLVLSETTING  DPD_PaOctLevData_UMTSBand6_SetDefault;
extern const U_sPAOCTLVLSETTING  DPD_PaOctLevData_UMTSBand7_SetDefault;
extern const U_sPAOCTLVLSETTING  DPD_PaOctLevData_UMTSBand8_SetDefault;
extern const U_sPAOCTLVLSETTING  DPD_PaOctLevData_UMTSBand9_SetDefault;
extern const U_sPAOCTLVLSETTING  DPD_PaOctLevData_UMTSBand10_SetDefault;
extern const U_sPAOCTLVLSETTING  DPD_PaOctLevData_UMTSBand11_SetDefault;
extern const U_sPAOCTLVLSETTING  DPD_PaOctLevData_UMTSBand19_SetDefault;
extern const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBandNone_SetDefault;
extern const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand1_SetDefault;
extern const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand2_SetDefault;
extern const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand3_SetDefault;
extern const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand4_SetDefault;
extern const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand5_SetDefault;
extern const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand6_SetDefault;
extern const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand7_SetDefault;
extern const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand8_SetDefault;
extern const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand9_SetDefault;
extern const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand10_SetDefault;
extern const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand11_SetDefault;
extern const U_sDPD_COMMON_CTRL DPD_CommonCtrlData_UMTSBand19_SetDefault;
#if __IS_UL1D_DPD_SUPPORT__
void nvram_init_uL1_dpdData(void);
#endif

#if IS_3G_RFEQ_COEF_SUBBAND_SUPPORT
extern void nvram_init_uL1_rfeqCoefData(void);
#endif

#if (IS_3G_RFEQ_REAL_COEF_TEST)
extern void nvram_init_uL1_rfeqRealCoefCustom(void);
#endif

#endif /* End of #ifndef UL1D_RF_PUBLIC_H */

