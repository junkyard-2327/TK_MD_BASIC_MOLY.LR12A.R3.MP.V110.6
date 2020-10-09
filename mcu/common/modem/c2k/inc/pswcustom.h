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
* Copyright (c) 1997-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef _PSWCUSTOM_H_
#define _PSWCUSTOM_H_

#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "kal_general_types.h"

/****************************************************************************
 *
 * Module:    pswcustom.h
 *
 * Purpose:   Customer specified compile switches
 *
* HISTORY     :
*     See Log at end of file
*
***************************************************************************/

/*****************************************************************************
 * ------- Code-Build Options ... comment/uncomment as required -------      *
 ****************************************************************************/


#define IS2000_REV_0 1 /* Activate all IS2000 Rev.0 SW */
#define IS2000_REV_A 1 /* Activate all IS2000 Rev.0 SW */
#define DSCH_NEW     1

/* Release A and beyond functionality remains supported in the CBP6
 * baseline SW as indicated by IS2000_REV_A and DSCH_NEW both being defined.
 * This decision stems from a mixing Rel0 and Rel > A logic that has not been
 * clearly separated using the above #defines.  However, CBP6 solution has
 * not been verified on RelA networks and thus cannot be truly RelA compliant.
 * Some of the RelA SW must be cleaned up in order for the SW to be optimized
 * for Rel0 solutions.  The REMOVE_IS2000_REL_A #define was created for this
 * purpose.  In the case where the CBP6 solution is targeted for a RelA system,
 * REMOVE_IS2000_REL_A must be deleted or set to 0.
 */
#define REMOVE_IS2000_REL_A 1

#ifdef IS95A
#define T53_OR_IS95A 1
#else /* !IS95A */
#define T53_PLUS_OR_95B 1
#endif

/*****************************************************************************
 * ------- Tune parameters - adjust as required                              *
 ****************************************************************************/

#ifdef MTK_PLT_ON_PC_UT
/* Set default CCI to enabled in UT. */
#define CP_QPCH_CCI_ENABLED_DEFAULT   KAL_TRUE
#else
#define CP_QPCH_CCI_ENABLED_DEFAULT   KAL_FALSE
#endif

/* Sim QPCH feature: when enabled, QPCH-like wake may occur before PCH wake
   in networks where QPCH is disabled. QPCH PI is ignore, the QPCH wake is
   only used for best PN selection before PCH wake. This is the default init
   value. It can be changed at run-time and it is stored in PSW Misc DBM */
#if defined(KDDI_EXTENSIONS)
#define CP_SIM_QPCH_ENABLED_DEFAULT   KAL_TRUE
#else
#define CP_SIM_QPCH_ENABLED_DEFAULT   KAL_FALSE
#endif
/* dynamic QPCH enable/disable based on Pilot Ec/Io thresholds */
#if defined(KDDI_EXTENSIONS)
#define CP_QPCH_DYNAMIC_CTRL_ENABLED_DEFAULT   KAL_TRUE
#else
#define CP_QPCH_DYNAMIC_CTRL_ENABLED_DEFAULT   KAL_FALSE
#endif
#define CP_QPCH_DYNAMIC_CTRL_ECIO_THRESH_LOW    2609 /* -14 dB */
#define CP_QPCH_DYNAMIC_CTRL_ECIO_THRESH_HIGH   5205 /* -11 dB */

/* DFS EcIo Threshhold. DFS not started until active EcIo is weaker than threshhold */
#if defined(KDDI_EXTENSIONS)
#define CP_DEFAULT_DFS_ECIO_THRESH         24  /* -12.0 dB, Units -0.5dB  */
#else /* always do DFS */
#define CP_DEFAULT_DFS_ECIO_THRESH          0
#endif

#define CP_IC_MODE_DEFAULT  IC_NORMAL

/* Min # of frames chipset must rx the action in advance of the action time */
#if defined (MTK_CBP)
#define CC_MIN_FRAMES_BEFORE_ACTION_TIME    1
#else
#define CC_MIN_FRAMES_BEFORE_ACTION_TIME    3
#endif
#define TC_MIN_FRAMES_BEFORE_ACTION_TIME    2

/* Better service rescan after redirection in 5 minutes */
#define REDIRECTION_END_TIME    300000L   /* 300 seconds */

/* default 1x Adv Enabled */
#define CP_1XADV_ENABLED_DEFAULT      KAL_TRUE
/* default SO73 Control  */
#define CP_SO73_ENABLED_DEFAULT       KAL_TRUE
#define CP_SO73_WBENABLED_DEFAULT     KAL_TRUE

/**********************************************************************/
/***************** END CUSTOM SYSTEM SELECTION ************************/
/**********************************************************************/

/* PCH Layer 2 */
/* Increased to 6.2 seconds  */
#define ENG_MAX_BAD_PAGE_FRAME  310 /* 310 * 20 msec = 6.2 sec, for the access followed by idle supervsion 3 sec + 3 sec */

/* this sets number of base stations for which
 *     overhead info is stored
 */
#define MAX_HISTORY_RECS        7

/* new Idle Handoff Parameters */
#define THR_SLOPE_RES       2  /* Q-precision resolution of specified line slopes.
                                  (2^-THR_SLOPE_RES)*(SPEC integer slope in dB(thresh)
                                  /dB(Active pwr)). */
#define THR_SLOPE_MID       2  /* (2^THR_SLOPE_RES)/2 used for slope rounding. */

#define MIN_ACT_IMMED      34  /* -17.0 dB active power below the "instant" test
                                  threshold is THR_MIN_IMMED. */

#define THR_SLOPE_IMMED     1  /* Slope of instant threshold above active power
                                  MIN_ACT_IMMED in units of dB(thresh)/dB(Active pwr)/
                                  2^THR_SLOPE_RES. */
#define THR_MIN_IMMED       4  /* Minimum value of the "instant" test threshold.
                                  Units -0.5dB. */
#define MIN_ACT_DELAYED    34  /* Minimum value of the "persistance" test threshold.
                                  Units -0.5dB. */
#define THR_SLOPE_DELAYED   1  /* Active power below which the "persistance" test
                                  threshold is THR_MIN_DELAYED. */
#define THR_MIN_DELAYED     1  /* Slope of the instant threshold above active power of
                                  MIN_ACT_DELAYED, in units of dB(thresh)/dB(active pwr)
                                  /2^THR_SLOPE_RES. */
#define HO_DELAYED_IHO_COUNT 2 /* Persistence test for delayed HO
                                  ( default: 2 consecutive search results) */
#define NOISE_THRESHOLD    50  /* Threshold below which no neighbor pilot will be
                                  considered a valid target for handoff, units -0.5dB */
#define MIN_NGHBR_THR      36  /* Idle Handoff Candidates must be atleast -18.0 dB . */

#if defined(MTK_CBP)
/* Access Entry HO Parameters */
#define CP_ACCESS_ENTRY_HO_WEAK_PILOT_STRENGTH  24  /* -12 dB */
#else
/* Access Entry HO Parameters */
#define CP_ACCESS_ENTRY_HO_WEAK_PILOT_STRENGTH  14  /* -7 dB */
#endif

/* Max # of Access Slots to delay due to persistence before transmit msg */
#define ENG_MAX_PSIST_ACCESS_SLOTS          6


/* Default Service Option */

#define CP_CUSTOM_DEFAULT_SERVICE_OPTION   3   /* Rate set 1, EVRC  */
#define CP_CUSTOM_DEFAULT_HOME_MO_SO       3
#define CP_CUSTOM_DEFAULT_ROAM_MO_SO       3
#define CP_CUSTOM_DEFAULT_HOME_MT_SO       3

/* Service Configuration - Maximum Number of Service Option Connections */
#define CP_MAX_SERV_OPT_CONN_REC           2

/* Maximum Service Option Control Message Record Length */
#define MAX_SERV_OPT_CNTL_RECORD_LEN       128

/* Maximum Mobile Station Supported Supplemental Code Channels */
#define CP_MAX_SUP_CODE_CHANNELS  7

/* Maximum Sizes for Messaging Elements */
#define CP_MAX_CALLED_PARTY_NUMBER_SIZE    32  /* Called Party # record   */
#ifdef MTK_CBP
#define CP_MAX_CALLING_PARTY_NUMBER_SIZE   50  /* Calling Party # record  */
#else
#define CP_MAX_CALLING_PARTY_NUMBER_SIZE   32  /* Calling Party # record  */
#endif
#define CP_MAX_REDIRECTING_NUMBER_SIZE     32  /* Redirecting # record    */
#define CP_MAX_EXTENDED_DISPLAY_SIZE       82  /* Extended Display record */
#define CP_MAX_DISPLAY_SIZE                82  /* Display record          */
#define CP_MAX_KEYPAD_FACILITY_SIZE        32  /* Keypad Facility record  */
#ifdef MTK_CBP
#define CP_MAX_SUBADDRESS_SIZE             50  /* Subaddress record       */
#else
#define CP_MAX_SUBADDRESS_SIZE             32  /* Subaddress record       */
#endif
#define CP_MAX_BURST_DTMF_DIGITS           255 /* Burst DTMF msg          */
#define CP_MAX_DATA_BURST_CHAR             249 /* Data Burst msg          */
                                                 /* 255 - Data Burst header */
#define CP_MAX_CADENCE_GROUPS_REC          16
#define CP_MAX_EXTENDED_DISPLAY_REC        3

/* Traffic Channel Message Transmitter (tc_mtx.c) */

/* TC Transmitter Queue Sizes */
#define ACKQ_SIZE        8           /* TC Ack Queue Size          */
#define MSGQ_SIZE        8           /* TC Msg Queue Size          */

/* Traffic Channel Transmit Window Size */
#define TC_TX_WINDOW_SIZE                  4
#if ((TC_TX_WINDOW_SIZE == 0) || (TC_TX_WINDOW_SIZE > 4))
#error "Bad TC Transmit Window Size!"
#endif

/* Minimum backoff time in frames from T2m to transmit an ACK */
/*                                                                 **
**       Have to take into account potential queuing delay of      **
**       1 frame, message passing, and one frame for insurance.    **
**       Note: An Acknowledgement Message should fit in one frame: **
**       MSG_LENGTH + MSG_TYPE + ACK_FIELDS + ORDER +              **
**       ADD_REC_LEN + RESERVED + CRC = 56 bits = 7 bytes          **
**                                                                 **
**       Mux 1 9600  bps 1/2 rate  - 88  signalling bits           **
**       Mux 2 14400 bps 1/2 rate  - 138 signalling bits           **
**                                                                 */
#define TC_TX_PIGGYBACK_BACKOFF    5
#if ((TC_TX_PIGGYBACK_BACKOFF < 3) || (TC_TX_PIGGYBACK_BACKOFF > 10))
#error "Bad TC Transmit Piggyback Backoff!"
#endif

/* Minimum Signaling Bits Per Frame */
/* MUX OPTION 1 (RATE SET 1) 9600 bps, 1/2 rate, Dim & Burst */
#define TC_TX_MIN_MUX1_SIG_BITS_PER_FRAME  88
/* MUX OPTION 2 (RATE SET 2)   14400 bps, 1/2 rate, Dim & Burst */
#define TC_TX_MIN_MUX2_SIG_BITS_PER_FRAME  138

/* Minimum Closed Loop Power Control Step Size */
#define CP_MIN_PWR_CNTL_STEP               2

/* Traffic Channel Pilot Set Maintenance */
#define CP_T_DROP_COUNT   1

/* Amount of time to inhibit Registration after a failure */
#define CP_REG_DELAY_AFTER_FAIL 5000 /* msec */

#define ACCESS_FAIL_COUNT 5
#define DELAYED_ORIG_WAITING_TIME 70000/* time wait before abort orig attempt */
                                       /* 70sec (similar to silent retry)     */
/* SNR SR - Silent Retry defines. */
#define MAX_SILENT_RETRIES     15          /* Max no of sub-attempt permitted */
#define SILENT_RETRY_TIMEOUT   20L         /* 20ms -> 1 frame delay before Reorig */
#define SILENT_RETRY_RESET_TIMEOUT 30000L  /* 45 Sec Failsafe Timeout to reset SR
                                            * upon expiration.
                                            */

#ifndef OTA_MAX_MDN_DIGITS
#define OTA_MAX_MDN_DIGITS 15
#endif

/* MAX_BCASTS is the number of broadcast messages that can be
 *   checked for duplicates.
 * If more than MAX_BCASTS distinct messages are received within
 *   four broadcast cycles, messages will not be lost but duplicates
 *   may be reported.
 */
#define MAX_BCASTS      10

/* MAX_SINGLE_AWI_SMS_WORDS is the maximum size of a
 * SMS message that can be received in a single
 * ALERT_WITH_INFO_SMS message. It is in units of FVC words
 * (each of which has 3 bytes of user data)
 * NOTE: This must not be greater than 127 !
 */
#define MAX_SINGLE_AWI_SMS_WORDS 64

/* MAX_ALERT_WITH_INFO_SMS_SIZE is the maximum size of an
 * SMS message that can be received via a series of
 * ALERT_WITH_INFO_SMS messages.
 */
#define MAX_ALERT_WITH_INFO_SMS_SIZE 256

/* R.Sattari, 9/6/00, added defines for capability fields of the capability */
/* information record.  Set to 1 for enabled, and to 0 for disabled */
/* CR 6254
   These macros are no longer needed. They are replaced by enums in
   Ms_cap_db.h

#define CP_ACCESS_ENTRY_HO_ENABLED  1
#define CP_ACCESS_PROBE_HO_ENABLED  1
#define CP_ANALOG_SEARCH_ENABLED    0
#define CP_HOPPING_BEACON_ENABLED   0
#define CP_MAHHO_ENABLED            0
#define CP_PUF_ENABLED              0
#define CP_ANALOG_553A_ENABLED      0
*/

/* PDCH params */
#define CP_MAX_PDCCH_CH             8

/* Default Customer Preferred Service Option */
#define PSW_DEFAULT_LSD_SO_PREF    SERVICE_OPTION_15
#define PSW_DEFAULT_MSD_SO_PREF    SERVICE_OPTION_33
#define PSW_DEFAULT_ASYNC_SO       SERVICE_OPTION_12
#define PSW_DEFAULT_FAX_SO         SERVICE_OPTION_13
#define PSW_DEFAULT_IS126_SO       SERVICE_OPTION_2
#define PSW_DEFAULT_MARKOV_SO      SERVICE_OPTION_32798
#define PSW_DEFAULT_SUPL_LPBK_SO   SERVICE_OPTION_30
#if defined(MTK_CBP) || defined(SMARTFREN_EXTENSIONS)
#define PSW_DEFAULT_SMS_SO         SERVICE_OPTION_6
#else
#define PSW_DEFAULT_SMS_SO         SERVICE_OPTION_14
#endif
#define PSW_DEFAULT_OTASP_SO       SERVICE_OPTION_19
#define PSW_DEFAULT_CSC_SO         SERVICE_OPTION_35
#define PSW_DEFAULT_VOICE_SO       CP_CUSTOM_DEFAULT_SERVICE_OPTION


#define PSW_OTAPA_NAM_LOCK_DEFAULT            OTAPA_NAM_LOCK_KEEP_BS_SETTING
#define PSW_OTASP_POWERUP_MODE_DEFAULT        OTASP_COMPLETE_PSW_AUTO_POWERCYCLE

/*****************************************************************************
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
*
 * removed!
 * removed!
*****************************************************************************/

/*****************************************************************************
* End of File
*****************************************************************************/
#endif  /* _CUSTOM_H_ */
/**Log information: \main\CBP80\cbp80_cshen_scbp10283\cbp80_gdeng_scbp10309\1 2012-09-13 09:10:44 GMT gdeng
** scbp10309**/
/**Log information: \main\SMART\1 2013-04-23 06:23:00 GMT yxma
** HREF#22166 , add default custom service option to SMARTFREN
|
|**/
/**Log information: \main\SMART\2 2013-04-24 09:44:37 GMT yxma
** HREF#22179,modify default smartfren sms option
|**/
/**Log information: \main\SMART\3 2013-04-27 08:09:18 GMT yxma
** HREF#22188  , modify smartfren primary voice so**/
/**Log information: \main\Trophy\Trophy_gdeng_href22222\1 2013-06-08 01:22:06 GMT gdeng
** HREF#22222**/
/**Log information: \main\Trophy\2 2013-06-08 01:27:18 GMT cshen
** href#22222**/
/**Log information: \main\Trophy\Trophy_SO73\1 2013-07-09 05:09:38 GMT gdeng
** HREF#0000 **/
/**Log information: \main\Trophy\Trophy_SO73\2 2013-07-18 05:11:58 GMT gdeng
** HREF#0000 enable wb 73**/
/**Log information: \main\Trophy\4 2013-07-18 05:32:44 GMT cshen
** href#22222**/

