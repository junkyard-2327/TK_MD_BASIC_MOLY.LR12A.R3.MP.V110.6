/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.
*
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
*
* Copyright (c) 1999-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/****************************************************************************
 *
 * Module:     cptimer.h
 *
 * Purpose:    Definitions for Call Processing Timer Services.
 *
 ****************************************************************************
 *
 *                          PVCS Header Information
 *
 *  $Revision: 1.7 $
 *  $Author: mclee $
 *
 *  $Log: cptimer.h $
 *
 *  09 07 2017 tina.ma
 *  [MOLY00275192] [Merge from MP5.TC10]after airplane mode,DUT register network slowly than REF
 *  	
 *  	merge from MP5.TC10 to UMOLYA
 *
 *  08 25 2017 danny.dai
 *  [MOLY00273514] Expends 180ms Idle HO delay timer length to 200ms
 *  	
 *  	Trunk: Expends 180ms Idle HO delay timer length to 200ms
 *
 *  06 29 2017 sue.zhong
 *  [MOLY00259241] [6293][C2K]Replace with KAL data type
 *  ::KAL type - folder inc
 *
 *  05 18 2017 gavin.zhang
 *  [MOLY00247455] [6293][C2K][PS]Change KAL timer API to event scheduler API
 *
 *  	PSW timer change.
 *
 *  02 28 2017 scott.song
 *  [MOLY00223502] [93m][RTT][FL]merge T0 to Trunk 3322251 3322920 3325989 3326264 3328096 3328437 3331529 3332165 3334136
 *
 *  	.
 *
 *  02 24 2017 yanfeng.xu
 *  [MOLY00232146] SIXTH00016529 merge to UMOLYA TRUNK
 *
 *  12 01 2016 sue.zhong
 *  [MOLY00213777] [6293][C2K]Sync C2K code to UMOLYA TRUNK(W1648)
 *  Update C2K source
 *  Revision 1.7  2006/03/16 11:55:46  mclee
 *  - Reorder Timer enum in order to keep consistent with ETS.
 *  Revision 1.6  2005/05/06 18:09:11  hans
 *  Test mode sleep delay for Slotted
 *  Revision 1.5  2005/03/18 11:43:05  hans
 *  Merged code changes from CBP4.05 revision 2.02 to CBP4.05 revision 4.21.
 *  Revision 1.4  2004/09/28 16:25:30  hans
 *  Changes from CBP6.0 merged.
 *  Revision 1.3  2004/04/06 14:02:01  dstecker
 *  CBP6.1 release 1
 *  Revision 1.2  2004/03/25 12:09:23  fpeng
 *  Updated from 6.0 CP 2.5.0
 *  Revision 1.3  2004/02/10 12:50:40  bcolford
 *  Merged CBP4.0 Release 8.05.0 changes.
 *  Revision 1.21  2003/12/12 09:55:36  mclee
 *     - Add SLOTTED_IDLE_HO_DELAY 100L
 *     - Add CP_SLOTTED_IDLE_HO_DELAY_TIMER to CPTimerId enum.
 *  Revision 1.20  2003/11/06 11:37:19  ameya
 *  Added the CP_CSS_REDIR_END_TIMER and CP_CSS_MORE_PREF_SCAN_TIMER to the timer enum.
 *  Revision 1.19  2003/09/05 10:17:34  mclee
 *  Add Silent Retry Reset Timer
 *  Revision 1.18  2003/08/22 16:34:12  mclee
 *  Fix CR2554 to properly decrement reg zone timers
 *  Revision 1.17  2003/08/22 11:43:50  mclee
 *  Uim Feature Introduction in SW Base
 *  Revision 1.16  2003/08/12 16:20:43  bcolford
 *  Change the value of the macro ALERT_TIMEOUT back to
 *  the original value of 65sec. See CR No. 2461 for details.
 *  Revision 1.15  2003/07/22 14:10:24  robertk
 *  CR 2461: Changed the value of the AMPS ALERT_TIMEOUT to
 *  get it closer to the specified 65sec.
 *  Revision 1.14  2003/02/19 18:55:06  hans
 *  Absolut timer added for RETRY_DELAY order msg used by RC
 *  Revision 1.13  2002/11/26 19:37:31  hans
 *  1 sec timer added to time 1 sec between each SCRM msg
 *  with no reply from BS
 *  Revision 1.12  2002/08/27 17:00:44  byang
 *  Add timer ID for ping timer: CP_TC_DCCH_ONLY_PING_TIMER.
 *  Revision 1.11  2002/08/08 14:56:31  mclee
 *  Add LocServ AGPS & LocServ General Timers
 *  Revision 1.10  2002/06/06 13:11:17  chinh
 *  Changed and Added Copyright
 *  Revision 1.9  2002/04/18 09:49:55  mclee
 *  Add Loc Serv timers
 *  Revision 1.8  2002/04/03 16:03:42  chinh
 *  Removed compile option ifdefIS2000A for T72m and T40m.
 *  Revision 1.7  2002/02/25 08:48:29  AMALA
 *  Corrected SS Re-Scan errors.
 *  Revision 1.6  2002/02/06 11:36:30  mclee
 *  Move PSMM and Hard Handoff timers to Traffic CH timer block.
 *  Revision 1.5  2002/01/17 17:14:29  akayvan
 *  Slotted Mode Mods.
 *  Revision 1.4  2001/08/03 15:14:29  dstecker
 *  Modifications for IS2000 handoffs
 *  Revision 1.3  2001/07/18 15:02:05  chinh
 *  cbp3 porting for Idle and Access
 *  Revision 1.2  2001/01/29 18:20:51  dstecker
 *  new access probe architecture
 *  Revision 1.1  2001/01/17 10:58:17  plabarbe
 *  Initial revision
 *  Revision 1.3  2000/11/27 11:55:58  chinh
 *  Changed T40m and added T72m
 *  Revision 1.2  2000/11/13 22:25:21Z  byang
 *  IS-2000A Idle Mode and LAC intergration - Initial Release.
 *  Revision 1.1  2000/10/24 21:11:06Z  fpeng
 *  Initial revision
 *  Revision 1.4  2000/08/31 23:41:47Z  bcolford
 *  Replaced AMPS_SUPPORTED with SYS_OPTION_AMPS.
 *  Revision 1.3  2000/08/23 22:05:21Z  RSATTARI
 *  Isotel release 2.8 plus LSI applicable IS-95B changes
 *  Revision 1.18  2000/02/25 01:13:11  gfrye
 *  Added analog SMS re-assembly timer.
 *
 *  Revision 1.17  2000/02/19 00:01:10  gfrye
 *  Added new defined timeouts for the order timer when an
 *  Alert With Info SMS order is received.
 *  see IS-91, section 2.6.4.3.1.
 *
 *  Revision 1.16  1999/12/10 22:12:11  gfrye
 *  Removed null character.
 *
 *  Revision 1.15  1999/12/09 21:49:06  gfrye
 *   Added timer for Out Of Service.
 *
 *  Revision 1.14  1999/06/23 22:46:06  gfrye
 *  New timer CP_SLEEP_WAKEUP_TIMER to guard if ENG_IND_WAKEUP is lost.
 *
 *  Revision 1.12  1999/06/04 23:27:26  scotvold
 *  New Message Transmitter.
 *
 *  Revision 1.11  1999/03/02 00:56:20  dfischer
 *  Added sysdet delay timer
 *
 *  Revision 1.10  1998/10/20 23:58:23  mhayduk
 *  Added T53 support.
 *
 *  Revision 1.9  1998/09/22 18:44:57  tdaly
 *  Added IS-95 analog mode support.
 *
 *  Revision 1.8  1998/08/19 15:10:34  mhayduk
 *  Changed to just include stype.h instead of tracemac.h.
 *
 *  Revision 1.7  1998/07/03 16:57:30  dfischer
 *  New load
 *
 *  Revision 1.6  1998/06/08 21:48:25  scotvold
 *  Updated for Release 0.06
 *
 * Revision 1.5  1998/05/27  17:16:28  scotvold
 * Updated for Release 0.05.
 *
 * Revision 1.4  1998/05/01  18:13:54  scotvold
 * Update for release 0.04
 *
 * Revision 1.3  1998/03/30  23:26:03  mhayduk
 * Release 0.03.
 *
 * Revision 1.1  1997/11/06  17:49:24  mhayduk
 * Initial revision
 *
 *
 ****************************************************************************
 ****************************************************************************/


#ifndef _CPTIMER_H_

  #define _CPTIMER_H_ 1

#include "sysdefs.h"

/*****************************************************************************
 * Includes
 ****************************************************************************/

/*****************************************************************************
 * CMDA Definitions
 ****************************************************************************/
  #define ACTION_TIME_NOW           0L
  #define ACTION_TIME_MULT          80L

  /* Defined Timer Constant values - in milliseconds */
  #define T1m                       400L     /* Max time MS waits for ACK     */
  #define T2m                       200L     /* Max time MS to send ACK       */
  #define T3m                       320L     /* TC duplicate message timeout  */
  #define T4m                       2200L    /* PCH duplicate message timeout */
  #define T5m                       5000L    /* FTC fade timeout              */
  #define T20m                      15000L   /* pilot acquistion timeout      */
  #define T21m                      1000L    /* time to receive sync msg      */
  #define T30m                      3000L    /* PCH monitor timeout           */
  #define T31m                      600000L  /* Config. Parameters timeout    */
  #define T40m                      3000L    /* PCH timeout for access        */
  #define T41m                      4000L    /* time to rx updated ovhd msgs  */
  #define T42m                      12000L   /* time to rx page/orig response */
  #define T50m                      1000L    /* time to rx N5m good TC frames */
  #define T51m                      2000L    /* time to rx BS Ack Order       */
  #define T52m                      5000L    /* Waiting for Order timeout     */
  #define T53m                      65000L   /* Waiting for Answer timeout    */
  #define T55m                      2000L    /* Release timeout               */
  #define T56m                      200L     /* time to rx FTC msg or order   */
#ifdef MTK_PLT_ON_PC_IT
  #define T57m                      1000L   /* Registration initialization   */
#else
  #define T57m                      20000L   /* Registration initialization   */
#endif
  #define T59m                      5000L    /* Response to Service Req/Resp  */
  #define T64m                      10000L   /* SSD Update Procedure          */
  #define T65m                      5000L    /* Waiting For Service Connect   */
  #define T66m                      200000L  /* TMSI_EXP_TIME timer           */
  #define T68m                      5000L    /* Waiting For Service Req/Resp  */
  #define T69m                      24000L   /* Full TMSI Timer base period   */
  #define T70m                      800L     /* time btween meas and CRSRM    */
  #define T71m                      40L      /* send CFSRM after srch         */
  #define T72m                      1000L    /* Timeout for access in ho   */
  #define T78m                      30000L   /* Timeout for TCH ping timer    */

/* Frame based counters */
  #define N1m                       13   /* Maximum IS2000 retransmissions */
  #define N2m                       12
  #define N3m                       2
  #define N5m                       2
  #define N6m                       6
  #define N7m                       10
  #define N8m                       40
  #define N9m                       7    /* max size of Zone List */
  #define N10m                      4    /* max size of Sid Nid List */
  #define N11m                      1
  #define N12m                      10   /* Number of frames over which the mobile station      *
                                          * maintains a running average of the total rcvd power */
  #define N13m                      6    /* max number of pilots in Access HO List */

/*****************************************************************************
 * PS Implementation Definitions
 ****************************************************************************/
  #define CP_1_SECOND               1000L    /* generic 1 second interval     */
  #define CP_100_MSEC               100L     /* generic 100 ms interval       */
  #define ENG_SLEEP_WAKEUP_TIMEOUT  800L     /* time to expect wakeup         */

/*****************************************************************************
 * AMPS Definitions
 ****************************************************************************/

  /* AMPS Timer Constant values - in milliseconds (as per EIA/TIA-553) */
  #define MESSAGE_TIMEOUT    3000L    /* Default wait for FOCC messages     */
  #define RCF_0_TIMEOUT       400L    /* Wait for Message if RCFs = 0       */
  #define RCF_1_TIMEOUT      1000L    /* Wait for CFiller if RCFs = 1       */
  #define WFOM_TIMEOUT       1500L    /* Wait for OMT before Access         */
  #define REGCONF_TIMEOUT    5000L    /* Wait for Registration Confirmation */
  #define WAITMSG_TIMEOUT    5000L    /* Timeout in Await Message state     */
  #define ORDER_TIMEOUT      5000L    /* Order Timer value                  */
  #define ALERT_TIMEOUT     65000L    /* Alert Timer value                  */
  #define FADE_TIMEOUT       5000L    /* SAT Fade Timer value               */
  #define RLSDELAY_TIMEOUT    500L    /* Delay if Termination Status set    */
  #define FLASH_TIMEOUT     10000L    /* Valid HookFlash window             */
  #define BSCHALL_TIMEOUT    5000L    /* Base Station Challenge window      */
  #define TIMING_CHANGE_TIMEOUT 2000L /* Timing Change substate timeout     */

  /* IS-91 defines special timers for waiting for order if an
   * Alert with Info SMS is received, see IS-91, section 2.6.4.3.1 */
  #define ORDER_TMO_SHORT   600L
  #define ORDER_TMO_LONG  10000L
  #define SMS_SEGMENT_TMO  2000L

  /* Max time (ms) we'll sit in IDLE state before we decide to rescan */
  #define MAX_REDIRECT_DELAY  31000L

  /* Signaling Tone Guard Delay (ms) - for ST Burst separation on Release */
  #define GUARD_DELAY         250L

  /* Signaling Tone Burst Durations (ms) */
  #define FLASH_BURST         400L    /* HookFlash                          */
  #define HANDOFF_BURST        50L    /* Handoff                            */
  #define RELEASE_BURST      1800L    /* Release                            */

  /* Timer Values (ms) for Discontinuous Transmission (DTX) */
  #define DTX_SHORT_DELAY    1500L    /* Short Delay fot DTX-High           */
  #define DTX_LONG_DELAY     5000L    /* Long delay for DTX-High (Audits)   */
  #define DTX_HILO_INTERVAL   300L    /* Hi -> Lo Transition Interval       */
  #define DTX_LOHI_WAIT       200L    /* Wait after forced Lo -> High       */

/* IS801 Location Services Timers */
  #define LOC_T1_TIMEOUT 2000L   /* Pilot Phase Measurement PREF_RESP_QUAL = 000 */
  #define LOC_T2_TIMEOUT 4000L    /* Pilot Phase Measurement PREF_RESP_QUAL = 001 */
  #define LOC_T3_TIMEOUT 8000L   /* Pilot Phase Measurement PREF_RESP_QUAL = 010 */
  #define LOC_T4_TIMEOUT 16000L  /* Pilot Phase Measurement PREF_RESP_QUAL = 011 */
  #define LOC_T5_TIMEOUT 32000L  /* Pilot Phase Measurement PREF_RESP_QUAL = 100 */
  #define LOC_T6_TIMEOUT 64000L  /* Pilot Phase Measurement PREF_RESP_QUAL = 101 */
  #define LOC_T7_TIMEOUT 128000L /* Pilot Phase Measurement PREF_RESP_QUAL = 110 */
  #define LOC_T8_TIMEOUT 256000L /* Pilot Phase Measurement PREF_RESP_QUAL = 111 */
  #define LOC_T9_TIMEOUT 35000L  /* Outstanding Response Timeout */
  #define LOC_GENERAL_TIMEOUT 300000L /* General Session Keep Alive Time */

  /* From Gen93, the low layer shall report the first frame to PSW after 40ms from PCH wakeup.
   * Corresponding, which time is 20ms from PCH wakeup before Gen93 projects. */
  #define SLOTTED_IDLE_HO_DELAY 200L /* There exist PCH message (.e.g Data Burst) large than 4 frames in Sprint.
                                      *   and paging record maybe located after 200ms from PCH wakeup in Vzw.
                                      * Expand this timer length for all network, as it is has not risk. */

  #define E911_ACCESS_RESCAN_TIMEOUT 16000L  /* Continuous time for E911 access
                                                before triggering a rescan */
  #define MO_BKOFF_TIMEOUT 2000   /* time out before an 1X MO call can be made. */
  #define CP_1X_ANTENNA_GRANT_TIMEOUT     15*CP_1_SECOND
  #define CP_BS_RLO_DELAY_TIMEOUT 60L /* Number of ms to wait before releasing TCH
                                       * after Lmd TC Msg Sent Ind is processed for BS RLO.
                                       */

  #define T1M_FRAME                 T1m/20   /* T1m (in frames)         */
  #define T2M_FRAME                 T2m/20   /* T2m (in frames)         */
  #define T4M_FRAMES                T4m/20   /* T4m value in frames     */
  #define T5M_FRAME                 T5m/20   /* T5m in frames */
  #define T31M_FRAMES               T31m/20  /* T31m value in frames    */
  #define ENG_100MSEC_COUNT         CP_100_MSEC/20 /* 5 frames to 100 msec */
  #define ENG_ONESEC_COUNT          CP_1_SECOND/20  /* 50 frames in 1 sec */

#ifdef MTK_DEV_C2K_IRAT
  #define C2K_LTE_CSFB_TIMEOUT      500L     /* timer to wait CSFB confirm from MD1 */
  #define C2K_REPORT_NO_SVC_AFTER_RESUME_TIMEOUT   5000L    /* timer to wait report no service to VAL */
  #define PS_PROTECT_DELAY_TIMEOUT      500L     /* PS protection delay for receiving ECAM after valod Ack */
  #define CP_C2K_POWERDOWN_IN_SUSPEND_TIMEOUT   5000L   /* timer expired to disabled*/
#endif

#ifdef MTK_CBP_ENCRYPT_VOICE
  #define ENCRYPT_VOICE_PROTECT_TIMEOUT 8000L   /* encrypt voice fail after timer expired */
  #define ENCRYPT_RANDOM_NUMBER_TIMEOUT 1L      /* encrypt random number generate timer expired */
#endif
  #define CP_IMPROVE_SYNC_PRIO_TIMEOUT 10000L   /* when exit flight mode, improve 1x priority when sync acquire*/
  /* Absolute Timers */
  typedef enum
  {
    CP_PILOT_ACQUIRE_TIMER,           /* 0 pilot acquisition timer            */
    CP_SYNC_ACQUIRE_TIMER,            /* 1 sync acquisition timer             */
    CP_RADIO_TUNE_TIMER,              /* 2 radio tune timer                   */
    /* BCY 08/25/00: renamed from CP_PCH_MONITOR_TIMER */
    CP_FCSCH_MONITOR_TIMER,             /* 3 new page channel msg timer         */
    CP_SYSTEM_ACCESS_STATE_TIMER,     /* 4 System Access State timer          */
    CP_TA_TIMER,                      /* 5 Access timer                       */
    CP_SILENT_RETRY_TIMER,            /* 6 Silent retry timer                 */

    /* KEEP TC TIMERS CONTIGUOUS - remember to update FIRST and LAST TIMER *
     *                             definitions in eng_tc.c                 */
    CP_TC_N5M_GOOD_FRAMES_TIMER,          /* 7 N5m Good TC Frames (TC_INIT)   */
    CP_TC_BS_ACK_TIMER,                   /* 8 BS Ack Order (TC_INIT)         */
    CP_TC_WAITING_FOR_ORDER_STATE_TIMER,  /* 9 Waiting for Order State        */
    CP_TC_WAITING_FOR_ANSWER_STATE_TIMER, /* 10 Waiting for Answer State       */
    CP_TC_RELEASE_STATE_TIMER,            /* 11 Release State                 */
    CP_TC_FADE_TIMER,                     /* 12 FTC Supervision Fade          */
    CP_TC_SERV_NEG_SUBFUNCTION_TIMER,     /* 13 Service Negotiation Subfnc    */
    CP_TC_CF_PERIODIC_SEARCH_TIMER,       /* 14 Cand Freq Periodic Search     */
    CP_TC_PSMM_PERIODIC_TIMER,            /* 15 Periodic PSMM timer           */
    CP_TC_HARD_HANDOFF_TIMER,             /* 16 HHO w return on fail timer    */
    CP_TC_PING_TIMER,                     /* 17 CPCCH timer                   */

    /* KEEP TC TIMERS CONTIGUOUS */
    CP_TMSI_EXP_TIMER = 19,           /* 19 TMSI expiration timer             */
    CP_REG_INIT_TIMER,                /* 20 Registration Initialization timer */
    CP_SSD_UPDATE_TIMER,              /* 21 SSD Update Procedure timer        */
    CP_FULL_TMSI_TIMER,               /* 22 Full TMSI timer                   */
    CP_IDLE_HO_TIMER,                 /* 23 Idle Handoff timer                */
    CP_SLEEP_WAKEUP_TIMER,            /* 24 Sleep wakeup timer                */
    CP_WAIT_FOR_SRCH_RSLTS_TIMER,     /* 25 Waiting for search rslts in access entry */
    CP_EC_IO_TIMER,                   /* 26 Eo/Io Enhanced Access timer       */
    CP_DELAYED_ORIG_WAITING_TIMER,    /* 27 Waiting to do delayed orig timer  */
    CP_EMERGENCY_CALLBACK_MODE_TIMER, /* 28 leave emergency call back mode    */
    CP_SLOTTED_TIMER,                 /* 29 slotted timer       */
    CP_UNUSED_TIMER,                  /* 30 UNUSED/AVAILABLE TIMER ID         */

    CP_LOC_REQ_TIMER0,                /* 31 Location Services Outstanding Request Timer #1 */
    CP_LOC_REQ_TIMER1,                /* 32 Loc Timer #2 */
    CP_LOC_REQ_TIMER2,                /* 33 Loc Timer #3 */
    CP_LOC_PPM_BTWEEN_FIX_TIMER0,     /* 34 Pilot Phase Meas Between Fix timer 0 */
    CP_LOC_PPM_BTWEEN_FIX_TIMER1,     /* 35 Pilot PHase Meas Between Fix timer 1 */
    CP_LOC_PPM_PREF_RESP_QUAL_TIMER0, /* 36 Time window to respond to PPM Request Timer 0*/
    CP_LOC_PPM_PREF_RESP_QUAL_TIMER1, /* 37 Time window to respond to PPM Request Timer 1*/
    CP_LOC_GEN_TIMER0,                /* 38 General Keep Alive Session Timer */
    CP_LOC_GEN_TIMER1,                /* 39 */
    CP_LOC_GEN_TIMER2,                /* 40 */
    CP_LOC_PRM_BTWEEN_FIX_TIMER,      /* 41 PseudoRange Meas Between Fix Timer */
    CP_LOC_ACQ_ASST_FRESH_TIMER,      /* 42 Acquisition Assist Refresh Timer */
    CP_LOC_BS_ALM_FRESH_TIMER,        /* 43 BS Almanac Refresh Timer */
    CP_PE_RC_RETRY_DELAY_TIMER,       /* 44 rev sch retry delay order received from BS */
    CP_PE_RC_RSR_REQ_TIMER,           /* 45 1 sec ESCAM timer for resource control */
    CP_SILENT_RETRY_RESET_TIMER,      /* 46 Silent Retry Reset Timer          */
    CP_CSS_REDIR_END_TIMER,           /* 47 Redirection End timer */
    CP_CSS_MORE_PREF_SCAN_TIMER,      /* 48 When not most pref sys acq, rescan for better serv */
    CP_SLOTTED_IDLE_HO_DELAY_TIMER,   /* 49 Slotted Idle HO Delay Timer */
    CP_CDMA_TO_AMPS_ACQ_DELAY_TIMER,  /* 50 CDMA to AMPS system selection delay timer */
    CP_RETRY_ORIG_DELAY_TIMER,	      /* 51 Orig should not be allowed */
    CP_TC_SLOTTED_DELAY_TIMER,        /* 52 Slotted Paging sleep delay */
    CP_UNUSED_2_TIMER,                /* 53 UNUSED/AVAILABLE TIMER ID  */
    CP_IDLE_STATE_TIMER,              /* 54 Slotted Paging sleep delay */
                                      /* 55: AVAILABLE  */
    CP_REG_THROTTLING_TIMER = 56,     /* 56 Timer for Unsuccessful Registration */
    CP_CSS_EPRL_ESPM_WAIT_TIMER,      /* 57 Time to wait for ESPM to validate
                                            System Selection */
    CP_E911_ACCESS_FAIL_TIMER,        /* 58  Rescan after E911_ACCESS_RESCAN_TIMEOUT
                                       * of continuous E911 probing */
    CP_1XMO_BKOFF_TIMER,              /* 59 Back off timer before origination request is sent. */
    CP_NO_SERVICE_TIME,               /* 60 SMS timer for no svc */
    CP_1X_ANTENNA_GRANT_TIMER,        /* 61 No Pilot Acq Rsp from L1d */
    CP_TIMING_CHANGE_TIMER,           /* 62 Timing Change substate timer */
    CP_BS_RELEASE_DELAY_TIMER,        /* 63 TCH Release delay for BS RLO */

    CP_LOC_PREEMPTION_TIMER,
#if defined(MTK_CBP) && defined(MTK_DEV_ENGINEER_MODE)
    CP_TMSI_DURATION_TIMER,           /* 65 TMIS duration TIMER from TSAM */
#endif
#ifdef MTK_DEV_C2K_IRAT
    CP_C2K_LTE_CSFB_TIMER,            /* 66 C2K LTE CSFB TIMER */
    CP_C2K_REPORT_NO_SVC_AFTER_RESUME_TIMER,    /* 67 wait for report nosvc timer */
    CP_PS_PROTECT_DELAY_TIMER,        /* 68 PS Protection Delay after Valid Ack */
    CP_C2K_POWERDOWN_IN_SUSPEND_TIMER,   /*69 receive power down in suspend delay timer*/
    CP_IMPROVE_SYNC_PRIO,              /* 70 when exit flight mode, improve 1x priority when sync acquire*/             
#endif
#ifdef MTK_CBP_ENCRYPT_VOICE
    CP_ENCRYPT_VOICE_TIMER,           /* 71 encrypt voice fail after timer expired */
    CP_ENCRYPT_RANDOM_NUMBER_TIMER,   /* 72 encrypt random number generate timer */
#endif
    NUM_TIMERS                        /* This one MUST be last!!           */
  }
CPTimerId;


/* NOTE: If this enum is changed, please update ets enum PETimerId in ps_trace.txt */


  /* Frame Based Timers */
  typedef enum
  {
    CP_TC_SERVICE_ACTION_FRAME_TIMER, /*  Service Action timer             */
    NUM_FRAME_TIMERS                  /*  This one MUST be last!!          */
  }
CPFrameTimerId;




  /* Call Processing Absolute Timer structure */
  typedef struct
  {
    kal_int16 id;                 /* Timer ID   - for WBIOS         */
    kal_uint32     value;              /* Timer Value                        */
  } CPTimer;


  /* Call Processing Frame Based Timer structure */
  typedef struct
  {
    kal_bool        active;           /* Frame timer state                  */
    kal_uint32       frameCount;       /* Current frame count                */
#ifdef TRACEON
    const char  *name;            /* Frame Timer Name - for TRACE etc.  */
#endif
  } CPFrameTimer;


/*****************************************************************************
 * Timer function prototypes
 ****************************************************************************/

  void cpInitTimers (void);
  kal_bool cpStartTimer (CPTimerId timer, kal_uint32 interval);
  void cpStopTimer (CPTimerId timer);
  void cpStopAllTimers(void);
  kal_bool cpIsTimerActive(CPTimerId timer);
  kal_bool cpLocateTimer(kal_int16 id, CPTimerId *timer);

#endif  /* _CPTIMER_H_ */


