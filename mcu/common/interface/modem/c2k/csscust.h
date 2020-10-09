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
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSKAL_TRUED IN ACCORDANCE
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
* Copyright (c) 2009-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef _CSSCUST_H_
#define _CSSCUST_H_

/****************************************************************************
 *
 * Module:    csscust.h
 *
 * Purpose:   CSS Customizations
 *
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************
***************************************************************************/

/*****************************************************************************
 * CSS Customizations                                                        *
 ****************************************************************************/

/*-----------------------------------------------------------------------------*/
/* Roaming indicator for Non-PRL system that is found in NAM Home SID/NID list */
/* and Home and International Roam ERI definitions                             */
/*-----------------------------------------------------------------------------*/
/* Roaming Indicators */
#define ROAMING_IND_ON                      0
#define ROAMING_IND_OFF                     1
#define ROAMING_IND_FLASHING                2
#define ROAMING_IND_OUT_OF_NEIGHBORHOOD     3
#define ROAMING_IND_OUT_OF_BUILDING         4
#define ROAMING_IND_PREFERRED_SYSTEM        5
#define ROAMING_IND_AVAILABLE_SYSTEM        6
#define ROAMING_IND_ALLIANCE_PARTNER        7
#define ROAMING_IND_PREMIUM_PARTNER         8
#define ROAMING_IND_FULL_SERV_FUNC          9
#define ROAMING_IND_PART_SERV_FUNC          10
#define ROAMING_IND_BANNER_ON               11
#define ROAMING_IND_BANNER_OFF              12
#define ROAM_IND_UNKNOWN                    255

#define NON_STANDARD_ENHANCED_ROAMING_IND_START  64

#ifndef MTK_CBP
#ifdef VERIZON_EXTENSIONS
#define ROAM_IND_FOR_NON_PRL_SYS_BUT_HOME_IN_NAM     ROAMING_IND_FLASHING
static const kal_uint16 Home_eriValues[] = {1, 64, 65, 76, 77, 78, 79, 80, 81, 82, 83};
static const kal_uint16 International_eriValues[] = {65535}; /* i.e. none */

#elif (defined(SPRINT_EXTENSIONS))
#define ROAM_IND_FOR_NON_PRL_SYS_BUT_HOME_IN_NAM     ROAMING_IND_OFF
static const kal_uint16 Home_eriValues[] = {1};
static const kal_uint16 International_eriValues[] = {74,
                                                 124, 125, 126,
                                                 157, 158, 159,
                                                 193, 194, 195, 196, 197, 198,
                                                 228, 229, 230, 231, 232, 233, 234, 235};

#else
#define ROAM_IND_FOR_NON_PRL_SYS_BUT_HOME_IN_NAM     ROAMING_IND_OFF
static const kal_uint16 Home_eriValues[] = {1};
static const kal_uint16 International_eriValues[] = {65535}; /* i.e. none */
#endif
#endif

/*-----------------------------------------------------------------------------*/
/* Better service rescan timers (in seconds)                                   */
/*-----------------------------------------------------------------------------*/
#if 0 /* defined(VERIZON_EXTENSIONS) */
#ifdef MTK_DEV_C2K_IRAT
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /* MTK_DEV_C2K_IRAT */
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#if (defined(KDDI_EXTENSIONS))
#define CSS_1X_T_BSR_1_DEFAULT         1800 /* 30 min */
#define CSS_1X_T_BSR_2_DEFAULT         1800 /* 30 min */
#define CSS_1X_T_BSR_NEWSYS_DEFAULT     125 /* 2 min 5 s */
#define CSS_1X_T_BSR_CALL_DEFAULT       125 /* 2 min 5 s */
#define CSS_1X_T_BSR_REDIR_DEFAULT    86340 /* 23 h 59 min */

#define CSS_DO_T_BSR_1_DEFAULT         3600
#define CSS_DO_T_BSR_2_DEFAULT          120
#define CSS_DO_T_BSR_REDIR_DEFAULT        5
#define CSS_DO_T_BSR_CALL_DEFAULT       190
#define CSS_DO_T_BSR_HYBRID_DEFAULT     600
#define CSS_DO_T_BSR_HOLD_DEFAULT        30

#else // default (no carrier extension defined)
#define CSS_1X_T_BSR_1_DEFAULT          180
#ifdef MTK_DEV_C2K_IRAT
#define CSS_1X_T_BSR_1_DEFAULT_VZW      120
#else
#define CSS_1X_T_BSR_1_DEFAULT_VZW      CSS_1X_T_BSR_1_DEFAULT
#endif
#define CSS_1X_T_BSR_2_DEFAULT          180
#ifdef MTK_DEV_C2K_IRAT
#define CSS_1X_T_BSR_2_DEFAULT_VZW      120
#else
#define CSS_1X_T_BSR_2_DEFAULT_VZW      CSS_1X_T_BSR_2_DEFAULT
#endif
#define CSS_1X_T_BSR_HOLD_DEFAULT        15 /*old MPSS_ADDITIONAL_TIME, default is 15s*/


#define CSS_1X_T_BSR_1_DEFAULT_SPRINT           60
#define CSS_1X_T_BSR_2_DEFAULT_SPRINT          120
#define CSS_1X_T_BSR_NEWSYS_DEFAULT_SPRINT       5
#define CSS_1X_T_BSR_CALL_DEFAULT_SPRINT         5
#define CSS_1X_T_BSR_REDIR_DEFAULT_SPRINT        5
#define CSS_1X_T_BSR_HOLD_DEFAULT_SPRINT         5

#define CSS_DO_T_BSR_1_DEFAULT_SPRINT           60
#define CSS_DO_T_BSR_2_DEFAULT_SPRINT          120
#define CSS_DO_T_BSR_REDIR_DEFAULT_SPRINT        5
#define CSS_DO_T_BSR_CALL_DEFAULT_SPRINT        30
#define CSS_DO_T_BSR_HYBRID_DEFAULT_SPRINT     600
#define CSS_DO_T_BSR_HOLD_DEFAULT_SPRINT        30



#define CSS_1X_T_BSR_NEWSYS_DEFAULT       1
#define CSS_1X_T_BSR_NEWSYS_DEFAULT_VZW   5
#define CSS_1X_T_BSR_CALL_DEFAULT         5
#define CSS_1X_T_BSR_REDIR_DEFAULT      180
#define CSS_1X_T_BSR_REDIR_DEFAULT_VZW    5

#define CSS_DO_T_BSR_1_DEFAULT          120
#define CSS_DO_T_BSR_2_DEFAULT          120
#define CSS_DO_T_BSR_REDIR_DEFAULT        5
#define CSS_DO_T_BSR_CALL_DEFAULT        30
#define CSS_DO_T_BSR_HYBRID_DEFAULT     600
#define CSS_DO_T_BSR_HOLD_DEFAULT        30
#define CSS_1X_HOME_MAPE_AVOIDANCE_DURATION_DEFAULT_SPRINT 600          /* default HOME Systeme Avoidance of Sprint is 10min */
#endif

#if (defined(KDDI_EXTENSIONS))
#define CSS_1X_MPSS_PILOT_STRENGTH_THRESH_DEFAULT 4135 /* -12 dB*/
#else
#define CSS_1X_MPSS_PILOT_STRENGTH_THRESH_DEFAULT 0    /* no threshold */
#endif

#define CSS_1X_PS_DELAY_DEFAULT   22  /* in seconds */
/*-----------------------------------------------------------------------------*/
/* 1x Avoidance customization (timers in seconds)                              */
/*-----------------------------------------------------------------------------*/
#define CSS_1X_REDIR_AVOIDANCE_DURATION_DEFAULT      30   /* Avoidance time of system from which the MS was redirected */
#if defined (KDDI_EXTENSIONS)
#define CSS_1X_HOME_MAPE_AVOIDANCE_DURATION_DEFAULT  60          /* HOME Systeme Avoidance */
#define MULTI_MAPE_EXIT  2
#else
#define CSS_1X_HOME_MAPE_AVOIDANCE_DURATION_DEFAULT 900          /* HOME Systeme Avoidance */
#define MULTI_MAPE_EXIT  4
#endif
#define MULTI_REG_REJ_EXIT  3
#define MAX_REG_REJ_TIME  (4 * 180000)
#define MULTI_RELEASE_REJ_EXIT  9
#define MAX_RELEASE_REJ_TIME  (4 * 180000)
#define MAX_RELEASE_REJ_BLOCK_TIME  (2 *180000)

#define MAX_MAPE_TIME  (MULTI_MAPE_EXIT * 180000)  /* Max Time (in ms) during which consecutive MAPE must occur, starting at first failure */

/*-----------------------------------------------------------------------------*/
/* Lost channel Ping frequency                                                 */
/*-----------------------------------------------------------------------------*/

#if 0 /* #ifdef SPRINT_EXTENSIONS system lost algorithm of Sprient is waived, obsolete it*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#define DEFAULT_CSS_GEO_SCAN_PING_FREQUENCY       5
#define DEFAULT_CSS_NON_GEO_SCAN_PING_FREQUENCY   5
#define DEFAULT_CSS_1X_LOSS_DO_CONN_SCAN_PING_FREQUENCY 3

/*-----------------------------------------------------------------------------*/
/* Emergency mode system lost scan time                                        */
/*-----------------------------------------------------------------------------*/
#define CSS_1X_EMERGENCY_SYS_LOST_SCAN_TIME     200L /* 200 ms; short so that MS will scan last channel only 1 time */
#define CSS_1X_EMERGENCY_SYS_LOST_SCAN_TIME_VZW 15000L /* Will dwell on last channel for 15 seconds. */

#define MAX_CYCLE 255 /*means from then on(including this phase), always keep the same scannign scheme and do fast acq for power saving*/
/*#define SYS_OPTION_COMMIT_1XMRU 0 */


/*-----------------------------------------------------------------------------*/
/* 1x lost while DO connected scan parameters                                  */
/*-----------------------------------------------------------------------------*/
/* Initial interval between scans if 1X system is lost while DO is connected.  Units of mili-sec. */
#ifdef MTK_CBP
/*Shorten the timer to 1s to accelerate 1x system recovery.*/
#define CPSM_1X_LOST_WHILE_DO_CONN_SCAN_TIME_INIT 1000
#else
#define CPSM_1X_LOST_WHILE_DO_CONN_SCAN_TIME_INIT 5000
#endif
/* Prolonged scan interval if initial 1X lost while DO connected scan is unsuccessful. Units of mili-sec */
#define CPSM_1X_LOST_WHILE_DO_CONN_SCAN_TIME_DELAY 10000
/* Number of channels to scan before transitioning from initial scan interval to prolonged scan interval. */
#define CPSM_1X_LOST_WHILE_DO_CONN_NUM_INIT_CHANNELS 4


/*-----------------------------------------------------------------------------*/
/* 1x OOSA Parameter customization                                             */
/*-----------------------------------------------------------------------------*/
#if 0 /*#ifdef SPRINT_EXTENSIONS*/
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

#if defined(LGT_EXTENSIONS)

/*-----------------------------------*/
/* LGT Power Up OOSA Scan pattern */
/*-----------------------------------*/
#define CPSM_1X_OOSA_POWER_UP_NUMPHASES 3

#define CPSM_1X_OOSA_POWER_UP_PHASE0_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE0_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE0_CYCLE 2  /*Scan twice, with no delay between scans*/
#define CPSM_1X_OOSA_POWER_UP_PHASE0_DELAY 0

#define CPSM_1X_OOSA_POWER_UP_PHASE1_SCANMETHOD CPSM_OOSA_SCAN_TIMER
#define CPSM_1X_OOSA_POWER_UP_PHASE1_SCANTIME 180 /*3 Minutes in seconds*/
#define CPSM_1X_OOSA_POWER_UP_PHASE1_CYCLE 1
#define CPSM_1X_OOSA_POWER_UP_PHASE1_DELAY 60   /*Sleep for 1 minutes*/

#define CPSM_1X_OOSA_POWER_UP_PHASE2_SCANMETHOD CPSM_OOSA_SCAN_LIST /*Scan once*/
#define CPSM_1X_OOSA_POWER_UP_PHASE2_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE2_CYCLE 100
#define CPSM_1X_OOSA_POWER_UP_PHASE2_DELAY 60 /*Sleep for 1 minutes*/

#define CPSM_1X_OOSA_POWER_UP_PHASE3_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE3_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE3_CYCLE 0
#define CPSM_1X_OOSA_POWER_UP_PHASE3_DELAY 0

#define CPSM_1X_OOSA_POWER_UP_PHASE4_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE4_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE4_CYCLE 0
#define CPSM_1X_OOSA_POWER_UP_PHASE4_DELAY 0

#define CPSM_1X_OOSA_POWER_UP_PHASE5_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE5_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE5_CYCLE 0
#define CPSM_1X_OOSA_POWER_UP_PHASE5_DELAY 0

#define CPSM_1X_OOSA_POWER_UP_PHASE6_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE6_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE6_CYCLE 0
#define CPSM_1X_OOSA_POWER_UP_PHASE6_DELAY 0

#define CPSM_1X_OOSA_POWER_UP_PHASE7_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE7_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE7_CYCLE 0
#define CPSM_1X_OOSA_POWER_UP_PHASE7_DELAY 0

#define CPSM_1X_OOSA_POWER_UP_PHASE8_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE8_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE8_CYCLE 0
#define CPSM_1X_OOSA_POWER_UP_PHASE8_DELAY 0

#define CPSM_1X_OOSA_POWER_UP_PHASE9_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE9_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE9_CYCLE 0
#define CPSM_1X_OOSA_POWER_UP_PHASE9_DELAY 0

/*------------------------------------*/
/* LGT Sys Lost OOSA Scan pattern */
/*------------------------------------*/
#define CPSM_1X_OOSA_SYSTEM_LOST_NUMPHASES 3

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE0_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE0_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE0_CYCLE 1         /*Scan once, with no delay before time-based scan*/
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE0_DELAY 0

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE1_SCANMETHOD CPSM_OOSA_SCAN_TIMER
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE1_SCANTIME 180 /*Scan for 3 Minutes in seconds*/
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE1_CYCLE 1
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE1_DELAY 60    /*Sleep for 1 minutes */

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE2_SCANMETHOD CPSM_OOSA_SCAN_LIST /*Scan the list once*/
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE2_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE2_CYCLE 3
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE2_DELAY 60   /*Sleep for 1 minutes */

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE3_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE3_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE3_CYCLE 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE3_DELAY 0

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE4_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE4_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE4_CYCLE 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE4_DELAY 0

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE5_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE5_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE5_CYCLE 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE5_DELAY 0

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE6_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE6_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE6_CYCLE 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE6_DELAY 0

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE7_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE7_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE7_CYCLE 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE7_DELAY 0

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE8_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE8_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE8_CYCLE 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE8_DELAY 0

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE9_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE9_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE9_CYCLE 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE9_DELAY 0

#else
/*-----------------------------------*/
/* Default Power Up OOSA Scan pattern */
/*-----------------------------------*/
#ifdef MTK_DEV_C2K_IRAT
#define CPSM_1X_OOSA_POWER_UP_NUMPHASES 8

#define CPSM_1X_OOSA_POWER_UP_PHASE0_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE0_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE0_CYCLE 4  /*Scan twice, with no delay between scans*/
#define CPSM_1X_OOSA_POWER_UP_PHASE0_DELAY 2

#define CPSM_1X_OOSA_POWER_UP_PHASE1_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE1_SCANTIME 0 /*15 Minutes in seconds*/
#define CPSM_1X_OOSA_POWER_UP_PHASE1_CYCLE 4
#define CPSM_1X_OOSA_POWER_UP_PHASE1_DELAY 4   /*Sleep for 3 minutes*/

#define CPSM_1X_OOSA_POWER_UP_PHASE2_SCANMETHOD CPSM_OOSA_SCAN_LIST /*Scan once*/
#define CPSM_1X_OOSA_POWER_UP_PHASE2_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE2_CYCLE 4
#define CPSM_1X_OOSA_POWER_UP_PHASE2_DELAY 8 /*Sleep for 3 minutes*/

#define CPSM_1X_OOSA_POWER_UP_PHASE3_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE3_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE3_CYCLE 4
#define CPSM_1X_OOSA_POWER_UP_PHASE3_DELAY 10

#define CPSM_1X_OOSA_POWER_UP_PHASE4_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE4_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE4_CYCLE 2
#define CPSM_1X_OOSA_POWER_UP_PHASE4_DELAY 20

#define CPSM_1X_OOSA_POWER_UP_PHASE5_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE5_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE5_CYCLE 2
#define CPSM_1X_OOSA_POWER_UP_PHASE5_DELAY 30

#define CPSM_1X_OOSA_POWER_UP_PHASE6_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE6_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE6_CYCLE 30
#define CPSM_1X_OOSA_POWER_UP_PHASE6_DELAY 50

#define CPSM_1X_OOSA_POWER_UP_PHASE7_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE7_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE7_CYCLE 100
#define CPSM_1X_OOSA_POWER_UP_PHASE7_DELAY 180

#define CPSM_1X_OOSA_POWER_UP_PHASE8_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE8_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE8_CYCLE 0
#define CPSM_1X_OOSA_POWER_UP_PHASE8_DELAY 0

#define CPSM_1X_OOSA_POWER_UP_PHASE9_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE9_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE9_CYCLE 0
#define CPSM_1X_OOSA_POWER_UP_PHASE9_DELAY 0

/*------------------------------------*/
/* Default Sys Lost OOSA Scan pattern */
/*------------------------------------*/
#define CPSM_1X_OOSA_SYSTEM_LOST_NUMPHASES 8

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE0_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE0_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE0_CYCLE 4         /*Scan once, with no delay before time-based scan*/
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE0_DELAY 2

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE1_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE1_SCANTIME 0 /*Scan for 15 Minutes in seconds*/
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE1_CYCLE 4
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE1_DELAY 4    /*Sleep for 3 minutes */

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE2_SCANMETHOD CPSM_OOSA_SCAN_LIST /*Scan the list once*/
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE2_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE2_CYCLE 4
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE2_DELAY 8   /*Sleep for 3 minutes */

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE3_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE3_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE3_CYCLE 4
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE3_DELAY 10

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE4_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE4_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE4_CYCLE 2
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE4_DELAY 20

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE5_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE5_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE5_CYCLE 2
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE5_DELAY 30

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE6_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE6_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE6_CYCLE 100
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE6_DELAY 180

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE7_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE7_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE7_CYCLE 100
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE7_DELAY 180

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE8_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE8_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE8_CYCLE 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE8_DELAY 0

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE9_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE9_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE9_CYCLE 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE9_DELAY 0

#else /* if (defined(MTK_DEV_C2K_IRAT) && defined(MTK_DEV_C2K_SRLTE)) */
#define CPSM_1X_OOSA_POWER_UP_NUMPHASES 2

#define CPSM_1X_OOSA_POWER_UP_PHASE0_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE0_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE0_CYCLE 15  /*Scan twice, with no delay between scans*/
#define CPSM_1X_OOSA_POWER_UP_PHASE0_DELAY 2

#define CPSM_1X_OOSA_POWER_UP_PHASE1_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE1_SCANTIME 0 /*15 Minutes in seconds*/
#define CPSM_1X_OOSA_POWER_UP_PHASE1_CYCLE 100
#define CPSM_1X_OOSA_POWER_UP_PHASE1_DELAY 180   /*Sleep for 3 minutes*/

#define CPSM_1X_OOSA_POWER_UP_PHASE2_SCANMETHOD CPSM_OOSA_SCAN_LIST /*Scan once*/
#define CPSM_1X_OOSA_POWER_UP_PHASE2_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE2_CYCLE 0
#define CPSM_1X_OOSA_POWER_UP_PHASE2_DELAY 0 /*Sleep for 3 minutes*/

#define CPSM_1X_OOSA_POWER_UP_PHASE3_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE3_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE3_CYCLE 0
#define CPSM_1X_OOSA_POWER_UP_PHASE3_DELAY 0

#define CPSM_1X_OOSA_POWER_UP_PHASE4_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE4_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE4_CYCLE 0
#define CPSM_1X_OOSA_POWER_UP_PHASE4_DELAY 0

#define CPSM_1X_OOSA_POWER_UP_PHASE5_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE5_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE5_CYCLE 0
#define CPSM_1X_OOSA_POWER_UP_PHASE5_DELAY 0

#define CPSM_1X_OOSA_POWER_UP_PHASE6_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE6_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE6_CYCLE 0
#define CPSM_1X_OOSA_POWER_UP_PHASE6_DELAY 0

#define CPSM_1X_OOSA_POWER_UP_PHASE7_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE7_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE7_CYCLE 0
#define CPSM_1X_OOSA_POWER_UP_PHASE7_DELAY 0

#define CPSM_1X_OOSA_POWER_UP_PHASE8_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE8_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE8_CYCLE 0
#define CPSM_1X_OOSA_POWER_UP_PHASE8_DELAY 0

#define CPSM_1X_OOSA_POWER_UP_PHASE9_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_POWER_UP_PHASE9_SCANTIME 0
#define CPSM_1X_OOSA_POWER_UP_PHASE9_CYCLE 0
#define CPSM_1X_OOSA_POWER_UP_PHASE9_DELAY 0

/*------------------------------------*/
/* Default Sys Lost OOSA Scan pattern */
/*------------------------------------*/
#define CPSM_1X_OOSA_SYSTEM_LOST_NUMPHASES 2

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE0_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE0_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE0_CYCLE 15         /*Scan once, with no delay before time-based scan*/
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE0_DELAY 2

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE1_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE1_SCANTIME 0 /*Scan for 15 Minutes in seconds*/
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE1_CYCLE 100
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE1_DELAY 180    /*Sleep for 3 minutes */

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE2_SCANMETHOD CPSM_OOSA_SCAN_LIST /*Scan the list once*/
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE2_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE2_CYCLE 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE2_DELAY 0   /*Sleep for 3 minutes */

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE3_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE3_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE3_CYCLE 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE3_DELAY 0

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE4_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE4_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE4_CYCLE 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE4_DELAY 0

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE5_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE5_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE5_CYCLE 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE5_DELAY 0

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE6_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE6_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE6_CYCLE 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE6_DELAY 0

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE7_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE7_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE7_CYCLE 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE7_DELAY 0

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE8_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE8_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE8_CYCLE 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE8_DELAY 0

#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE9_SCANMETHOD CPSM_OOSA_SCAN_LIST
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE9_SCANTIME 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE9_CYCLE 0
#define CPSM_1X_OOSA_SYSTEM_LOST_PHASE9_DELAY 0
#endif /*#if ( defined(MTK_DEV_C2K_IRAT) && defined(MTK_DEV_C2K_SRLTE))*/

#endif


/*-----------------------------------------------------------------------------*/
/* DO OOSA Parameter customization                                             */
/*-----------------------------------------------------------------------------*/
#ifdef MTK_DEV_C2K_IRAT
/*begin: DO OOSA Scanning parameter while IxInit&DOInit*/
#define CURRENT_DO_POWERUP_OOSA_PHASES     7

#define CP_DO_SELECTION_PHASE0_DELAY         2     /* delay between phase 1 attempts, time = DELAY * TIME_SCALE */
#define CP_DO_SELECTION_PHASE1_DELAY         4     /* delay between phase 2 attempts */
#define CP_DO_SELECTION_PHASE2_DELAY         8     /* delay between phase 3 attempts */
#define CP_DO_SELECTION_PHASE3_DELAY         10    /* delay between phase 4 attempts */
#define CP_DO_SELECTION_PHASE4_DELAY         30    /* delay between phase 5 attempts */
#define CP_DO_SELECTION_PHASE5_DELAY         60    /* delay between phase 6 attempts */
#define CP_DO_SELECTION_PHASE6_DELAY         300   /* delay between phase 7 attempts */

#define CP_DO_SELECTION_PHASE0_SCANTIME       0   /* Phase 1 time to scan per cycle, time = SCANTIME * TIME_SCALE */
#define CP_DO_SELECTION_PHASE1_SCANTIME       0   /* Phase 2 scan time */
#define CP_DO_SELECTION_PHASE2_SCANTIME       0   /* Phase 3 scan time */
#define CP_DO_SELECTION_PHASE3_SCANTIME       0   /* Phase 4 scan time */
#define CP_DO_SELECTION_PHASE4_SCANTIME       0   /* Phase 4 scan time */
#define CP_DO_SELECTION_PHASE5_SCANTIME       0   /* Phase 4 scan time */
#define CP_DO_SELECTION_PHASE6_SCANTIME      30   /* Phase 4 scan time */

#define CP_DO_SELECTION_PHASE0_CYCLE        1   /* # of phase 1 tries which */
#define CP_DO_SELECTION_PHASE1_CYCLE        3   /* # of phase 2 tries which */
#define CP_DO_SELECTION_PHASE2_CYCLE        4   /* # of phase 3 tries which */
#define CP_DO_SELECTION_PHASE3_CYCLE        4   /* # of phase 3 tries which */
#define CP_DO_SELECTION_PHASE4_CYCLE        4   /* # of phase 3 tries which */
#define CP_DO_SELECTION_PHASE5_CYCLE        4   /* # of phase 3 tries which */
#define CP_DO_SELECTION_PHASE6_CYCLE        MAX_CYCLE   /* # of phase 3 tries which */

#define CP_DO_SELECTION_PHASE0_METHOD CPSM_OOSA_SCAN_LIST
#define CP_DO_SELECTION_PHASE1_METHOD CPSM_OOSA_SCAN_LIST
#define CP_DO_SELECTION_PHASE2_METHOD CPSM_OOSA_SCAN_LIST
#define CP_DO_SELECTION_PHASE3_METHOD CPSM_OOSA_SCAN_LIST
#define CP_DO_SELECTION_PHASE4_METHOD CPSM_OOSA_SCAN_LIST
#define CP_DO_SELECTION_PHASE5_METHOD CPSM_OOSA_SCAN_LIST
#define CP_DO_SELECTION_PHASE6_METHOD CPSM_OOSA_SCAN_LIST

/*end: DO OOSA Scanning parameter while IxInit&DOInit*/

#else/*#if ( defined(MTK_DEV_C2K_IRAT) && defined(MTK_DEV_C2K_SRLTE))*/

/*begin: DO OOSA Scanning parameter while IxInit&DOInit*/
#define CURRENT_DO_POWERUP_OOSA_PHASES     5

#define CP_DO_SELECTION_PHASE0_DELAY         480     /* delay between phase 1 attempts, time = DELAY * TIME_SCALE */
#define CP_DO_SELECTION_PHASE1_DELAY         10     /* delay between phase 2 attempts */
#define CP_DO_SELECTION_PHASE2_DELAY         30   /* delay between phase 3 attempts */
#define CP_DO_SELECTION_PHASE3_DELAY         60   /* delay between phase 4 attempts */
#define CP_DO_SELECTION_PHASE4_DELAY         300   /* delay between phase 4 attempts */

#define CP_DO_SELECTION_PHASE0_SCANTIME      120   /* Phase 1 time to scan per cycle, time = SCANTIME * TIME_SCALE */
#define CP_DO_SELECTION_PHASE1_SCANTIME       30   /* Phase 2 scan time */
#define CP_DO_SELECTION_PHASE2_SCANTIME       30   /* Phase 3 scan time */
#define CP_DO_SELECTION_PHASE3_SCANTIME       30   /* Phase 4 scan time */
#define CP_DO_SELECTION_PHASE4_SCANTIME       30   /* Phase 4 scan time */


#define CP_DO_SELECTION_PHASE0_CYCLE         1   /* # of phase 1 tries which */
#define CP_DO_SELECTION_PHASE1_CYCLE        3   /* # of phase 2 tries which */
#define CP_DO_SELECTION_PHASE2_CYCLE        4   /* # of phase 3 tries which */
#define CP_DO_SELECTION_PHASE3_CYCLE        4   /* # of phase 3 tries which */
#define CP_DO_SELECTION_PHASE4_CYCLE        MAX_CYCLE   /* # of phase 3 tries which */

#define CP_DO_SELECTION_PHASE0_METHOD CPSM_OOSA_SCAN_TIMER
#define CP_DO_SELECTION_PHASE1_METHOD CPSM_OOSA_SCAN_LIST
#define CP_DO_SELECTION_PHASE2_METHOD CPSM_OOSA_SCAN_LIST
#define CP_DO_SELECTION_PHASE3_METHOD CPSM_OOSA_SCAN_LIST
#define CP_DO_SELECTION_PHASE4_METHOD CPSM_OOSA_SCAN_LIST
/*end: DO OOSA Scanning parameter while IxInit&DOInit*/
#endif /*#if ( defined(MTK_DEV_C2K_IRAT) && defined(MTK_DEV_C2K_SRLTE))*/



#if 0 /*#ifdef SPRINT_EXTENSIONS*/
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
/*begin: DO OOSA Scanning parameter while IxIdle&DOInit*/
#define CURRENT_DO_LOST_OOSA_PHASES     7

#define CP_DO_LOST_SELECTION_PHASE0_DELAY         0     /* delay between phase 1 attempts, time = DELAY * TIME_SCALE */
#define CP_DO_LOST_SELECTION_PHASE1_DELAY         2     /* delay between phase 2 attempts */
#define CP_DO_LOST_SELECTION_PHASE2_DELAY         4     /* delay between phase 3 attempts */
#define CP_DO_LOST_SELECTION_PHASE3_DELAY         10    /* delay between phase 4 attempts */
#define CP_DO_LOST_SELECTION_PHASE4_DELAY         30    /* delay between phase 4 attempts */
#define CP_DO_LOST_SELECTION_PHASE5_DELAY         60    /* delay between phase 4 attempts */
#define CP_DO_LOST_SELECTION_PHASE6_DELAY         300   /* delay between phase 4 attempts */

#define CP_DO_LOST_SELECTION_PHASE0_SCANTIME      90   /* Phase 1 time to scan per cycle, time = SCANTIME * TIME_SCALE */
#define CP_DO_LOST_SELECTION_PHASE1_SCANTIME       0   /* Phase 2 scan time */
#define CP_DO_LOST_SELECTION_PHASE2_SCANTIME       0   /* Phase 3 scan time */
#define CP_DO_LOST_SELECTION_PHASE3_SCANTIME       0   /* Phase 4 scan time */
#define CP_DO_LOST_SELECTION_PHASE4_SCANTIME       0   /* Phase 4 scan time */
#define CP_DO_LOST_SELECTION_PHASE5_SCANTIME       0   /* Phase 4 scan time */
#define CP_DO_LOST_SELECTION_PHASE6_SCANTIME      30   /* Phase 4 scan time */


#define CP_DO_LOST_SELECTION_PHASE0_CYCLE        1   /* # of phase 1 tries which */
#define CP_DO_LOST_SELECTION_PHASE1_CYCLE        1   /* # of phase 2 tries which */
#define CP_DO_LOST_SELECTION_PHASE2_CYCLE        1   /* # of phase 3 tries which */
#define CP_DO_LOST_SELECTION_PHASE3_CYCLE        4   /* # of phase 3 tries which */
#define CP_DO_LOST_SELECTION_PHASE4_CYCLE        4   /* # of phase 3 tries which */
#define CP_DO_LOST_SELECTION_PHASE5_CYCLE        4   /* # of phase 3 tries which */
#define CP_DO_LOST_SELECTION_PHASE6_CYCLE        MAX_CYCLE   /* # of phase 3 tries which */

#define CP_DO_LOST_SELECTION_PHASE0_CYCLE_SPRINT        1   /* # of phase 1 tries which */
#define CP_DO_LOST_SELECTION_PHASE1_CYCLE_SPRINT        3   /* # of phase 2 tries which */
#define CP_DO_LOST_SELECTION_PHASE2_CYCLE_SPRINT        3   /* # of phase 3 tries which */
#define CP_DO_LOST_SELECTION_PHASE6_CYCLE_SPRINT        MAX_CYCLE   /* # of phase 3 tries which */

#define CP_DO_LOST_SELECTION_PHASE1_DELAY_SPRINT         20 
#define CP_DO_LOST_SELECTION_PHASE2_DELAY_SPRINT         60 




#define CP_DO_LOST_SELECTION_PHASE0_METHOD CPSM_OOSA_SCAN_LIST
#define CP_DO_LOST_SELECTION_PHASE1_METHOD CPSM_OOSA_SCAN_LIST
#define CP_DO_LOST_SELECTION_PHASE2_METHOD CPSM_OOSA_SCAN_LIST
#define CP_DO_LOST_SELECTION_PHASE3_METHOD CPSM_OOSA_SCAN_LIST
#define CP_DO_LOST_SELECTION_PHASE4_METHOD CPSM_OOSA_SCAN_LIST
#define CP_DO_LOST_SELECTION_PHASE5_METHOD CPSM_OOSA_SCAN_LIST
#define CP_DO_LOST_SELECTION_PHASE6_METHOD CPSM_OOSA_SCAN_LIST
/*end: DO OOSA Scanning parameter while IxIdle&DOInit*/


#endif
/**Log information: \main\CBP80\cbp8_gdeng_scbp10126\1 2012-08-09 06:02:39 GMT gdeng
** HREF#10126**/
/**Log information: \main\Trophy\Trophy_yni_href22337\1 2013-12-23 02:56:20 GMT yni
** HREF#22337 adjust OOSA strategy **/
/**Log information: \main\Trophy\1 2013-12-23 03:08:19 GMT jzwang
** href#22337**/

