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
 *   l1_interface.h
 *
 * Project:
 * --------
 *
 *
 * Description:
 * ------------
 *   Interface for system service.
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Revision:     $
 * $Modtime:      $
 * $Log:   //mtkvs01/vmdata/Maui_sw/archives/mcu/interface/l1interface/l1_interface.h-arc  $
 *
 * 01 06 2017 shriram.krishnamurthy
 * [MOLY00223254] [L1D]Bianco BB RF Driver check in 1st wave.
 *
 * 11 08 2016 yw.lee
 * [MOLY00212008] [L1D][Modify] remove RegSimSimulateWriteMoniter for PAE
 * .
 *
 * 10 12 2016 yi-ying.lin
 * [MOLY00207262] [MMRF] modify HW write option __EL1_ESL__ for PAE
 * .
 *
 * 03 11 2016 aman.singh
 * [MOLY00168767] [2GL1D]Elbrus BB porting
 *
 * 10 30 2015 umesh.donta
 * [MOLY00147593] [L1D][Modify][6292] Remove L1Core Related Dependence 
 * 	Support for SMP Arch
 *
 * 09 10 2015 aman.singh
 * [MOLY00141235] [L1D][Modify] Check in Freq aiding flow for AGPS
 *
 * 08 05 2015 yi-ying.lin
 * [MOLY00125231] [L1D][Modify] Fix MT6291PLUS.PRE_SB.W1517.DEV build error
 * 	.
 *
 * 06 18 2015 prakash.chaudhary
 * [MOLY00122406] [L1D][modify]Check in BB driver for Jade BB porting
 * 	.
 *
 * 05 12 2015 yi-ying.lin
 * [MOLY00113121] [L1D][Modify] modify the define of RegSimSimulateRead
 * 	.
 *
 * 02 03 2015 th.yeh
 * [MOLY00094515] [L1D][Modify] header files in common folder do not include header files in l1core folder
 * .
 *
 * 01 28 2015 th.yeh
 * [MOLY00085815] [L1D][Modify] TK6291 BB driver porting
 * .
 *
 * 12 04 2014 th.yeh
 * [MOLY00084637] [L1D][Modify] GL1D l1core extend to pcore API elimination
 * .
 *
 * 12 04 2014 th.yeh
 * [MOLY00084637] [L1D][Modify] GL1D l1core extend to pcore API elimination
 * .
 *
 * 11 28 2014 th.yeh
 * [MOLY00084800] [U4G] Move L1_ASSERT_BYPASS to shared buffer
 * .
 *
 * 11 18 2014 th.yeh
 * [MOLY00084800] [U4G] Move L1_ASSERT_BYPASS to shared buffer
 * .
 *
 * 11 17 2014 th.yeh
 * [MOLY00084637] [L1D][Modify] GL1D l1core extend to pcore API elimination
 * .
 *
 * 11 04 2014 th.yeh
 * [MOLY00083271] [L1D][Modify] Sync GL1D driver code from MOLY trunk
 * .
 *
 * 09 15 2014 yi-ying.lin
 * [MOLY00078730] [L1D][Modify] Modify L1 TDMA init timing margin for K2
 * 	.
 *
 * 06 11 2014 sherman.chung
 * [MOLY00069147] [MT6290][L1D] Add 2G DRDI feature
 * .
 *
 * 05 29 2014 yi-ying.lin
 * [MOLY00067365] [L1D][Modify] MT6752 L1D driver developement.
 *
 * 05 29 2014 yi-ying.lin
 * [MOLY00067365] [L1D][Modify] MT6752 L1D driver developement
 * 	.
 *
 * 05 21 2014 samuel.yang
 * [MOLY00064830] [EPHY] Check-in feature of calibration Data Download Check (CDDC) to MOLY
 * .
 *
 * 04 01 2014 sean.yang
 * [MOLY00061450] [MT6290] Check in feature of "SAW filter path switchable" for scenario of Wifi/LTE co-existence
 * 	.
 *
 * 12 16 2013 hosen.chen
 * [MOLY00046159] [L1D][Modify] Check in code of MT6595 2G modem driver modification
 * 	.
 *
 * 08 14 2013 yi-ying.lin
 * [MOLY00028415] [82LTE.SMT.DEV] 6166/6169 2G calibration feature development
 * .
 *
 * 06 24 2013 sean.yang
 * [MOLY00026625] [eSIM] check in change for eSIM migrate to MOLY
 * .
 *
 * 06 24 2013 sy.yeh
 * [MOLY00026625] [eSIM] check in change for eSIM migrate to MOLY
 * .
 *
 * 05 13 2013 hosen.chen
 * [MOLY00022274] [L1D][Modify] Add MT6290 TDMA IRQ timing margin and turn on timing check bypass
 * .
 *
 * 03 18 2013 hosen.chen
 * [MOLY00009022] [L1D][Modify] Modify MT6589 TDMA interrupt wake up timing setting
 * .
 * 
 * 08 31 2012 samuel.yang
 * [MOLY00002781] [L1D][Modify] Revise MSBB2 coding
 * .
 *
 * 06 22 2012 samuel.yang
 * removed!
 * .
 *
 * 05 25 2012 yi-ying.lin
 * removed!
 * .
 *
 * 05 10 2012 hosen.chen
 * removed!
 * .
 *
 * 05 08 2012 samuel.yang
 * removed!
 * .
 *
 * 03 30 2012 terence.chen
 * removed!
 * .
 *
 * 03 19 2012 weining.chien
 * removed!
 * .
 *
 * 03 16 2012 weining.chien
 * removed!
 * .
 *
 * 03 13 2012 weining.chien
 * removed!
 * .
 *
 * 11 08 2011 jason.lai
 * removed!
 * .
 *
 * 11 02 2011 sean.yang
 * removed!
 * .
 *
 * 11 01 2011 sean.yang
 * removed!
 * .
 *
 * 09 09 2011 duncan.cheng
 * removed!
 * .
 *
 * 08 11 2011 sean.yang
 * removed!
 * .
 *
 * 02 01 2011 jason.lai
 * removed!
 * .
 *
 * 12 15 2010 chang-kuan.lin
 * removed!
 * .
 *
 * 12 06 2010 jason.lai
 * removed!
 * .
 *
 * 12 01 2010 yr.chiang
 * removed!
 * .
 *
 * 07 31 2010 samuel.yang
 * removed!
 * .
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
 * Let L1D_FH_FM_TurnOn()/L1D_FH_FM_SetFreq() always as function
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 * Update HW_tdma_auxev_time_setup() as macro
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
 * Add declaration of HW_wait_32k_start
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 *******************************************************************************/

#ifndef  _L1_INTERFACE_H_
#define  _L1_INTERFACE_H_
/* ------------------------------------------------------------------------- */

#include "kal_general_types.h"

/* ------------------------------------------------------------------------- */
/* --- Simulation Compile Option-------------------------------------------- */
/* ------------------------------------------------------------------------- */
#if defined (__UE_SIMULATOR__)
#define MD_DRV_SIMULATION_SUPPORT   1
#define MD_DRV_HARDWARE_SIMULATION  1
#else
   #if !defined(ESIM_BUILD_CONFIG) || (ESIM_BUILD_CONFIG == ESIM_MULTI_MODE_ON_FIBERS) || (ESIM_BUILD_CONFIG == ESIM_SINGLE_MODE_ON_FIBERS)
      #if !defined(__MTK_TARGET__) && !defined(__UL1_ON_MNT__) && !defined(GEN_FOR_PC) && defined(L1_SIM)
#define MD_DRV_SIMULATION_SUPPORT   1
#define MD_DRV_HARDWARE_SIMULATION  1
      #else
#define MD_DRV_SIMULATION_SUPPORT   0
#define MD_DRV_HARDWARE_SIMULATION  0
      #endif /* __MTK_TARGET__ */
   #endif /* __ESIM_BUILD_CONFIG__ */
#endif /* __UE_SIMULATOR__ */

/* ------------------------------------------------------------------------- */
/* --- hardware access ----------------------------------------------------- */
/* ------------------------------------------------------------------------- */
#if defined(L1_SIM) || defined(__UE_SIMULATOR__)
   #if MD_DRV_HARDWARE_SIMULATION == 1
void RegSimSimulateWrite( int adr, int data, int size, const char* file, int line );
int  RegSimSimulateRead(int adr, int size, const char* cur_file, int line, int cosim_flag);

#define HW_WRITE(ptr,data) RegSimSimulateWrite( (int)(ptr), (data), sizeof(*(ptr)), __FILE__, __LINE__ )
#define HW_READ(ptr)       RegSimSimulateRead( (int)(ptr), sizeof(*(ptr)), __FILE__, __LINE__, 0 )
   #else
#define  HW_WRITE(ptr,data)         (*(ptr) = (data))
#define  HW_READ(ptr)               (*(ptr))
   #endif
#else /* defined(L1_SIM) || defined(__UE_SIMULATOR__) */
#define  HW_WRITE(ptr,data)         (*(ptr) = (data))
#define  HW_READ(ptr)               (*(ptr))
#endif /* defined(L1_SIM) || defined(__UE_SIMULATOR__) */

/* ------------------------------------------------------------------------- */
/* --- Processor Simulation Time ------------------------------------------- */
/* ------------------------------------------------------------------------- */
#if !defined(__GET_CATCHER_DB__)
   #if MD_DRV_SIMULATION_SUPPORT
      #ifdef INTEGER_SIM_TIME
   void  ProcSimConsumeProcessorTime2(kal_uint64 tts);
#define  LET_SIM_TIME_RUN_A_BIT()    ProcSimConsumeProcessorTime2(10000000000000)// 13 MHz : Raymond, changed from 768000000000 to 10000000000000 (1us)
#define  LET_SIM_TIME_RUN_N_QBIT(n)  ProcSimConsumeProcessorTime2(9216000000000*n)
      #else // INTEGER_SIM_TIME
   void  ProcSimConsumeProcessorTime(double seconds);
#define  LET_SIM_TIME_RUN_A_BIT()    ProcSimConsumeProcessorTime(0.077e-6)     // 13 MHz
#define  LET_SIM_TIME_RUN_N_QBIT(n)  ProcSimConsumeProcessorTime2((0.077e-6)*12*n)
      #endif // INTEGER_SIM_TIME
   #else /* SIMULATION_SUPPORT */
#define  LET_SIM_TIME_RUN_A_BIT()
#define  LET_SIM_TIME_RUN_N_QBIT(n)
   #endif /* SIMULATION_SUPPORT */
#endif /* __GET_CATCHER_DB__ */
/* ------------------------------------------------------------------------- */

DECLARE_SHARED_VAR( kal_uint16, L1_ASSERT_BYPASS )

extern void          L1D_HW_TDMA_AUX_TIME_SETUP( kal_uint16 event0, kal_uint16 event1 );
extern kal_uint16    L1D_TDMA_GET_TQCNT( void );
extern kal_uint16    L1D_HW_TDMA_GET_TQWRAP( void );
extern unsigned char L1D_Get_RX_Status( void );
extern unsigned char L1D_Get_BandCapability( void );

/*************************************************************************
 * API provided for other modules
 *************************************************************************/

#if (defined L1_NOT_PRESENT)
#define  L1_CHECK_ASSERT_BYPASS()           (0)
#define  L1D_GET_GGE_RX_STATUS()            (0)
#else
#define  L1_CHECK_ASSERT_BYPASS()           (SHARED_VAR(L1_ASSERT_BYPASS) & 0x3)
#define  L1D_GET_GGE_RX_STATUS()            L1D_Get_RX_Status()
#endif

void  HW_TDMA_Start(void);         /* power on TDMA module               */
void  HW_TDMA_Enable_CTIRQ1(void); /* enable TDMA module CTIRQ1          */

#define  HW_tdma_auxev_time_setup(event0,event1)  L1D_HW_TDMA_AUX_TIME_SETUP(event0, event1)

#define  HW_TDMA_GET_TQCNT()        L1D_TDMA_GET_TQCNT()
#define  HW_TDMA_GET_TQWRAP()       L1D_HW_TDMA_GET_TQWRAP()

/* APIs for audio */
extern kal_uint16 L1D_Get_Win_TQ_WRAP( void );
extern kal_int8   L1D_GetT2( void );
extern void       L1D_ENABLE_DTIRQ( void );
extern void       L1D_CCCDReset( void );
extern kal_bool   L1D_Get_Speech_Re_Sync_Flag( void );
/* ------------------------------------------------------------------------- */

extern void MD_DRV_L1D_Exit( void );
/* ------------------------------------------------------------------------- */

#if MD_DRV_IS_CHIP_MT6583_MD1 || MD_DRV_IS_CHIP_MT6583_MD2 || MD_DRV_IS_CHIP_MT6572 || MD_DRV_IS_CHIP_MT6290 || MD_DRV_IS_CHIP_MT6595 || MD_DRV_IS_CHIP_MT6752_MD1 || MD_DRV_IS_CHIP_TK6291 || MD_DRV_IS_CHIP_MT6755 || MD_DRV_IS_CHIP_MT6292 || MD_DRV_IS_CHIP_MT6293
   #if IS_DUAL_TALK_SUPPORT
#define L1D_WAKEUP_MARGIN                   (1300)
   #else
#define L1D_WAKEUP_MARGIN                   (1050)
   #endif
#define L1C_WAKEUP_MARGIN                   (660)
#elif MD_DRV_IS_CHIP_MT6752_MD2
#define L1D_WAKEUP_MARGIN                   (660)
#define L1C_WAKEUP_MARGIN                   (1050)
#endif
/* ------------------------------------------------------------------------- */
#if defined(ESIM_BUILD_CONFIG) && (ESIM_BUILD_CONFIG == ESIM_MULTI_MODE_ON_FIBERS)
#define L1D_WAKEUP_MARGIN                   (1050)
#define L1C_WAKEUP_MARGIN                   (660)
#endif
/* ------------------------------------------------------------------------- */

/*************************************************************************
 * API provided for GPS to query current Freq. offset
 *************************************************************************/
kal_int32 L1D_GPS_Query_Frequency_Offset(void);

#endif

