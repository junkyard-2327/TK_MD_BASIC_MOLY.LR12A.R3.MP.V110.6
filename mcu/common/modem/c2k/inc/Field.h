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
 * Module:     field.h - Message Field Width Definitions
 *
 * Purpose:    Header file containing Message field width definitions
 *
 ****************************************************************************
 *
 *                          PVCS Header Information
 *
 *  $Revision: 1.11 $
 *    $Author: vsethuraman $
 *
 *       $Log: field.h $
 *
 *       05 14 2019 yanfeng.xu
 *       [MOLY00406223] [Cervino][MT6762][P0][MP2][Sprint][FT_REG][Chicago][SI2][C2K][C2K_Perfromance_FT_06]Mobile Station Reject Order decode error
 *       Revision 1.11  2006/03/03 13:41:03  vsethuraman
 *       CR7207 :- PN310 CSS and ERI changes.
 *       Revision 1.10  2005/03/18 11:47:03  hans
 *       Merged code changes from CBP4.05 revision 2.02 to CBP4.05 revision 4.21.
 *       Revision 1.9  2004/10/07 12:42:29  blee
 *       Added DDW and REXMIT_DELAY
 *       Revision 1.8  2004/10/05 16:44:25  asharma
 *       Fixed CR5104 & CR5228 for LGE Rel-C compliance.
 *       Revision 1.7  2004/09/28 16:57:08  hans
 *       Changes from CBP6.0 merged.
 *       Revision 1.4  2004/04/23 10:49:58  asharma
 *       CBP6.1 (Phase-1) DV Data and Voice Call Setup changes.
 *       Revision 1.3.1.2  2004/04/14 15:19:53  asharma
 *       Revision 1.3  2004/04/06 14:02:06  dstecker
 *       CBP6.1 release 1
 *       Revision 1.2  2004/03/25 12:08:48  fpeng
 *       Updated from 6.0 CP 2.5.0
 *       Revision 1.2  2003/08/28 11:18:06  bcolford
 *       Update for merge.
 *       Revision 1.30  2003/05/21 17:10:35  byang
 *       CR#570: Replace compiler flag with IS2000A with IS2000_REV_0.
 *       Revision 1.29  2002/12/30 19:03:20  akayvan
 *       Per CR570, Cosmetic changes for replacement of
 *       IS2000A with either IS2000_REV_A or IS2000_REV_0.
 *       Revision 1.28  2002/12/26 11:46:52  hans
 *       Conditional compile flag IS2000A replaced with IS_2000_REV_A and IS_2000_REV_0 for rev A and Rev 0 specific code.
 *       Revision 1.27  2002/10/22 09:58:52  mclee
 *       Add new #define CP_RESERVED_2_WIDTH
 *       Revision 1.26  2002/10/21 12:02:44  hans
 *       CR1445, RC_MAP_WIDTH fields corrected to 3 bit
 *       Revision 1.25  2002/09/05 18:58:19  hans
 *       CP_BAND_CLASS_BIT_FIELD_WIDTH added for CR1203
 *       Revision 1.24  2002/08/27 17:04:27  byang
 *       Add field width definition for SCH information in UHDM.
 *       Revision 1.23  2002/08/19 10:15:41  dstecker
 *       Added candidate frequency fields
 *       Revision 1.22  2002/07/15 13:12:14  chinh
 *       Removed compile switch CBP3_MERGE (CR598).
 *       Revision 1.21  2002/06/06 13:12:16  chinh
 *       Changed and Added Copyright
 *       Revision 1.20  2002/05/08 16:47:44  byang
 *       Add field width for F-SCH PMRM.
 *       Revision 1.19  2002/02/19 14:35:18  akayvan
 *       RPC Mods.  Added bit field widths for RPC fileds of PCNM.
 *       Revision 1.18  2002/02/14 16:15:18  byang
 *       Removed obsolete constant definitions.
 *       Revision 1.17  2001/11/16 10:58:21  dstecker
 *       Handoff fixes and reverse power control additions
 *       Revision 1.16  2001/10/01 17:27:49  ameya
 *       Added #define for DTMF digit length
 *       Revision 1.15  2001/09/25 16:35:59  mclee
 *       Changed CP_CH_IND_WIDTH from 3 to 2
 *       Revision 1.14  2001/09/20 13:06:32  dstecker
 *       Fixed traffic handoff bugs
 *       Revision 1.13  2001/09/07 18:02:34  akayvan
 *       Added bit field widths for the PCNM, and OLRM per FPC.
 *       Revision 1.12  2001/08/30 14:53:33  byang
 *       Added new field width definitions for ESCAM, RAM, ERM,
 *       RRM, ERRM, and RRRM.
 *       Revision 1.11  2001/08/03 15:14:38  dstecker
 *       Modifications for IS2000 handoffs
 *       Revision 1.10  2001/07/18 15:09:24  chinh
 *       cbp3 porting for Idle and Access
 *       Revision 1.9  2001/06/29 10:44:13  hans
 *       Width definitions for new message field added for new field defined in Ms Cap Db used in IS2000 status request / response message
 *       Revision 1.8  2001/06/18 15:23:12  chinh
 *       Add new constants for information record in FNM and AWIM.
 *       Revision 1.7  2001/04/27 16:29:31  byang
 *       Update processing of EGSRM & ECCLM for IS-2000 Rev.0.
 *       Revision 1.6  2001/04/18 11:01:15  chinh
 *       Fixed ORM problem
 *       Revision 1.5  2001/04/11 16:21:07Z  akayvan
 *       Changed the value of CP_RTC_SERV_CON_SEQ_WIDTH from 4 to 3.  Added CP_IS2K_REV0_RESERVED_WIDTH,
 *       CP_FOR_SCH_CC_INCL_WIDTH, and CP_REV_SCH_CC_INCL_WIDTH per IS2K Rev0 compliance.
 *       Revision 1.4  2001/03/28 16:16:26  akayvan
 *       Intoduced CP_IS2000_SERVICE_CONNECT_RSVD_WIDTH,
 *       and CP_IS95_SERVICE_CONNECT_RSVD_WIDTH instead
 *       of CP_SERVICE_CONNECT_RSVD_WIDTH.
 *       Revision 1.3  2001/03/16 11:29:58  akayvan
 *       Traffic code phase1 added.
 *       Revision 1.2  2001/01/29 18:13:20  hans
 *       New field added for (IS2000.rev.a) auxililary powere measurement channels
 *       Revision 1.1  2001/01/17 18:58:35Z  plabarbe
 *       Initial revision
 *       Revision 1.6  2000/12/05 17:44:21  byang
 *       Idle mode - IS2000A Addendum modifications.
 *       Revision 1.5  2000/11/27 11:58:04  chinh
 *       Added new fields for Origination and Registration messages.
 *       Added fields for LAC on dsch.
 *       Revision 1.4  2000/11/14 01:04:03Z  byang
 *       IS-2000A Idle Mode and LAC integration - Initial Release.
 *       Revision 1.2  2000/11/13 22:24:31Z  byang
 *       IS-2000A Idle Mode and LAC intergration - Initial Release.
 *       Revision 1.1  2000/10/24 21:11:12Z  fpeng
 *       Initial revision
 *       Revision 1.5  2000/09/20 20:16:00Z  RSATTARI
 *       Corrected CP_NGHBR_SRCH_MODE_WIDTH to 2.
 *       Revision 1.4  2000/09/08 23:59:01Z  RSATTARI
 *       Added capability information record field width.
 *       Revision 1.3  2000/08/23 22:06:41Z  RSATTARI
 *       Isotel release 2.8 plus LSI applicable IS-95B changes.
 *       Revision 1.21  2000/02/22 16:56:53  scotvold
 *       Changed CP_BURST_ADDR_LEN_WIDTH from 8 to 4.
 *       Added CP_EXT_SYS_PAR_RSVD_WIDTH to enable check for P_REV > 3
 *       fields in the Extended System Parameters message.
 *
 *       Revision 1.2  2000/03/01 18:06:30Z  rsattari
 *       Isotel release 2.3 updates.
 *       Revision 1.20  2000/01/17 22:27:19  scotvold
 *       TC Backward Compatibility changes.
 *
 *       Revision 1.19  1999/10/19 23:58:31  gfrye
 *       Added field definitions for the two page messages that were made
 *       obsolete in IS-95B.
 *
 *       Revision 1.18  1999/09/02 20:04:06  gfrye
 *       Added more field width definitions for rev 3+ originations and
 *       page responses.
 *
 *       Revision 1.17  1999/06/04 23:27:26  scotvold
 *       New Message Transmitter.
 *
 *       Revision 1.16  1999/05/19 20:17:58  mhayduk
 *       Added defines for MAX_NUM_ALT_SO and EC_THRESH.
 *
 *       Revision 1.15  1999/05/19 16:56:26  mhayduk
 *       Added new field width definitions for origination/page
 *       response messages.
 *
 *       Revision 1.14  1999/04/12 13:31:46  scotvold
 *       Added T53 HSPD support.
 *       Added 95B SCAM support.
 *       Added 95B GHDM support and consolidated with EHDM.
 *
 *       Revision 1.13  1999/01/26 18:50:08  scotvold
 *       R1.2 API changes.
 *
 *       Revision 1.12  1998/12/02 00:06:12  scotvold
 *       Added CP_SYS_TIME_REMAINDER_WIDTH field.
 *
 *       Revision 1.11  1998/11/02 22:04:48  scotvold
 *       Added record field width defn.
 *
 *       Revision 1.10  1998/10/23 19:54:34  mhayduk
 *       Changed NUM_INFO_REC_WIDTH to 4 from 3 for new IS-95B rev.
 *
 *       Revision 1.9  1998/10/20 23:58:23  mhayduk
 *       Added T53 support.
 *
 *       Revision 1.8  1998/08/29 01:21:45  mhayduk
 *       Corrected AUTHR size to be 18 instead of 26.
 *
 *       Revision 1.7  1998/07/29 23:48:57  mhayduk
 *       Added accessor to overflow status.
 *
 *       Revision 1.6  1998/07/18 00:40:13  scotvold
 *       Fixed Service Configuration record field defn.
 *
 *       Revision 1.5  1998/05/28 15:03:07  mhayduk
 *       Added new defintions for num pilots width for extended channel
 *       assignments.
 *
 * Revision 1.4  1998/05/27  17:16:28  scotvold
 * Updated for Release 0.05.
 *
 * Revision 1.3  1998/05/01  18:13:54  scotvold
 * Update for release 0.04
 *
 * Revision 1.2  1998/03/30  23:26:03  mhayduk
 * Release 0.03.
 *
 *
 *
 ****************************************************************************
 ****************************************************************************/


#ifndef _FIELD_H

  #define _FIELD_H 1


/****************************************************************************
 * Common field width definitions
 ****************************************************************************/

/* Basic field width definitions */
#define CP_UINT8_WIDTH          8
#define CP_MSG_LENGTH_OFFSET    0

/* Common field width definitions */
#define CP_MSG_LEN_WIDTH        8
#define CP_MSG_TYPE_WIDTH       8
#define CP_CRC_16_WIDTH         16
#define CP_CRC_30_WIDTH         30
#define CP_ACK_SEQ_WIDTH        3
#define CP_MSG_SEQ_WIDTH        3
#define CP_ACK_REQ_WIDTH        1
#define CP_ENCRYPTION_WIDTH     2
#define CP_VALID_ACK_WIDTH      1
#define CP_ACK_TYPE_WIDTH       3
#define CP_ADDR_TYPE_WIDTH      3  /* Address type                         */
#define CP_ADDR_LEN_WIDTH       4  /* Address length                       */
#define CP_CONFIG_MSG_SEQ_WIDTH 6  /* Config message sequence number       */

#define CP_ARQ_FIELDS_WIDTH     (CP_ACK_SEQ_WIDTH+CP_MSG_SEQ_WIDTH+CP_ACK_REQ_WIDTH+CP_VALID_ACK_WIDTH)
#define CP_ADDR_FIELDS_WIDTH    (CP_ADDR_TYPE_WIDTH+CP_ADDR_LEN_WIDTH+(CP_ADDR_LEN_WIDTH*8) )
#define CP_RESERVED_1_WIDTH         1
#define CP_RESERVED_2_WIDTH			2
#define CP_ADD_RECORD_LEN_WIDTH_8   8

/**********************************************************/
/*   P_REV_IN_USE >= 7 specific field width definitions   */
/**********************************************************/

#define CP_EXT_MSG_LEN_WIDTH        16
#define CP_ENC_FIELDS_INCL_WIDTH    1
#define CP_SIG_ENCRYPT_MODE_WIDTH   3
#define CP_MACI_INCL_WIDTH_IDLE     2
#define CP_MACI_INCL_WIDTH_TRAFFIC  1
#define CP_ENC_SEQ_WIDTH            8

#define CP_EXT_MSG_LEN_INCL_WIDTH   1
#define CP_8BIT_EXT_MSG_LEN_WIDTH   8
#define CP_7BIT_MSG_LEN_WIDTH       7
#define CP_15BIT_MSG_LEN_WIDTH      15

#define CP_COMMON_FIELD_WIDTH \
                            (CP_MSG_LEN_WIDTH +  \
                             CP_MSG_TYPE_WIDTH + \
                             CP_ACK_SEQ_WIDTH +  \
                             CP_MSG_SEQ_WIDTH +  \
                 CP_ACK_REQ_WIDTH +  \
                 CP_ENCRYPTION_WIDTH)

#define CP_MAX_TC_L3_MSG_WIDTH_NO_CRC    2024
#define CP_MAX_TC_L3_MSG_BODY_WIDTH      2016
#define CP_MAX_TC_L3_MSG_CONTENT_WIDTH      \
          (CP_MAX_TC_L3_MSG_BODY_WIDTH -    \
           CP_COMMON_FIELD_WIDTH)


#define CP_ACK_SEQ_OFFSET_WIDTH \
                            (CP_MSG_LEN_WIDTH + \
                             CP_MSG_TYPE_WIDTH)

#define CP_RECORD_TYPE_WIDTH    8
#define CP_RECORD_LEN_WIDTH     8
#define CP_RECORD_HEADER_WIDTH  16

#define CP_USE_TIME_WIDTH       1
#define CP_ACTION_TIME_WIDTH    6

#define CP_ORDER_WIDTH          6
#define CP_ADD_RECORD_LEN_WIDTH 3
#define CP_ORDQ_WIDTH           8
#define CP_RETRY_TYPE_WIDTH     3


#define CP_P_REV_WIDTH          8  /* Protocol revision */

#define CP_SYS_TIME_REMAINDER_WIDTH   4

#define CP_BCN_WIDTH			3
#define CP_TIME_OFFSET_WIDTH  	10
#define CP_REPEAT_TIME_OFFSET_WIDTH  	5
#define	CP_MAX_EXT_BCAST_SDU_LEN		16


/************************************************/
/* Common Authentication field width definitions */
/************************************************/
#define CP_AUTH_MODE_WIDTH    2
#define CP_RANDC_WIDTH        8
#define CP_AUTHR_WIDTH        18
#define CP_AUTHU_WIDTH        18
#define CP_COUNT_WIDTH        6
#define CP_RANDU_WIDTH        24   /* Random challenge data                */
#define CP_RAND_WIDTH         32
#define CP_RANDBS_WIDTH       32

/************************************************/
/* Common Registration field width definitions */
/************************************************/
#define CP_SID_WIDTH            15  /* Home system ID                       */
#define CP_NID_WIDTH            16  /* Network ID                           */
#define CP_REG_ZONE_WIDTH       12  /* Registration zone                    */
#define CP_TOTAL_ZONES_WIDTH     3  /* Total zones                          */
#define CP_ZONE_TIMER_WIDTH      3  /* Zone Timer                           */
#define CP_MULT_SIDS_WIDTH       1  /* Multiple SIDS                        */
#define CP_MULT_NIDS_WIDTH       1  /* Multiple NIDS                        */
#define CP_BASE_ID_WIDTH        16  /* Base station identification          */
#define CP_BASE_CLASS_WIDTH      4  /* Base station class                   */
#define CP_PAGE_CHAN_WIDTH       3  /* Number of paging channels            */
#define CP_MAX_SLOT_CYCLE_WIDTH  3  /* Maximium slot cycle index            */
#define CP_HOME_REG_WIDTH        1  /* Home registration indicator          */
#define CP_FOR_SID_REG_WIDTH     1  /* SID roamer registration indicator    */
#define CP_FOR_NID_REG_WIDTH     1  /* NID roamer registration indicator    */
#define CP_POWER_UP_REG_WIDTH    1  /* Powerup registration indicator       */
#define CP_POWER_DOWN_REG_WIDTH  1  /* Powerdown registration indicator     */
#define CP_PARAMETER_REG_WIDTH   1  /* Parameter change registration indicator */
#define CP_REG_PRD_WIDTH         7  /* Registration period                  */
#define CP_BASE_LAT_WIDTH       22  /* Base station latitude                */
#define CP_BASE_LONG_WIDTH      23  /* Base station longitude               */
#define CP_REG_DIST_WIDTH       11  /* Registration distance                */


#define CP_QPCH_SUPPORTED_WIDTH	    1
#define CP_ENHANCED_RC_WIDTH	    1
#define CP_UZID_INCL_WIDTH		    1
#define CP_UZID_WIDTH			    16
#define CP_GEO_LOC_INCL_WIDTH	    1
#define CP_GEO_LOC_TYPE_WIDTH	    3
#define CP_OTD_SUPPORTED_WIDTH	    1
#define CP_STS_SUPPORTED_WIDTH	    1
#define CP_3X_CCH_SUPPORTED_WIDTH	1
#define CP_WLL_INCL_WIDTH			1
#define CP_WLL_DEVICE_TYPE_WIDTH	3
#define CP_HOOK_STATUS_WIDTH		4
#define CP_ENC_INFO_INCL_WIDTH		1
#define CP_SIG_ENCRYPT_SUP_WIDTH	8
#define CP_SIG_ENCRYPT_REQ_WIDTH	1
#define CP_KEY_SEQ_NEW_INCL_WIDTH	1
#define CP_KEY_SEQ_NEW_WIDTH		4
#define CP_ENC_SEQ_H_WIDTH			24
#define CP_ENC_SEQ_H_SIG_WIDTH		8
#define CP_UI_ENCRYPT_SUP_WIDTH		8

#define CP_MSG_INT_INFO_INCL_WIDTH  1
#define CP_FOR_PDCH_SUPPORTED_WIDTH 1

/************************************************/
/* Common Handoff field width definitions */
/************************************************/
#define CP_SRCH_WIN_A_WIDTH      4  /* Active/Candidate search window size  */
#define CP_SRCH_WIN_N_WIDTH      4  /* Neighbor search window size          */
#define CP_SRCH_WIN_R_WIDTH      4  /* Remaining search window size         */
#define CP_NGHBR_MAX_AGE_WIDTH   4  /* Neighbor set maximum age             */
#define CP_RESCAN_WIDTH          1  /* Rescan indicator                     */
#define CP_T_ADD_WIDTH           6  /* Pilot detection threshold            */
#define CP_T_DROP_WIDTH          6  /* Pilot drop threshold                 */
#define CP_T_COMP_WIDTH          4  /* Active vs Cand. set comp. threshold  */
#define CP_T_TDROP_WIDTH         4  /* Drop timer value                     */
#define CP_T_TDROP_RANGE_WIDTH   4  /* Drop timer range value               */
#define CP_NUM_OPT_MSG_BITS_WIDTH     4
#define CP_APPIM_PERIOD_INDEX_WIDTH   3
#define CP_GEN_OVHD_CYCLE_INDEX_WIDTH 3
#define CP_ATIM_CYCLE_INDEX_WIDTH     3
#define CP_LOC_UNC_H_WIDTH            4
#define CP_HEIGHT_WIDTH              14
#define CP_LOC_UNC_V_WIDTH            4
#define CP_HDM_SEQ_WIDTH         2
#define CP_PARM_INCL_WIDTH       1
#define CP_SOFT_SLOPE_WIDTH      6
#define CP_ADD_INTERCEPT_WIDTH   6
#define CP_DROP_INTERCEPT_WIDTH  6
#define CP_SCH_INCL_WIDTH        1
#define CP_HOCM_NUM_PILOTS_WIDTH 4

/************************************************/
/* Common Neighbor field width definitions */
/************************************************/
#define CP_PILOT_INC_WIDTH       4   /* Pilot Inc                            */
#define CP_NGHBR_CONFIG_WIDTH    3   /* Neighbor Config                      */

/*R.Sattari, 7/5/00 */
#define CP_NGHBR_CONFIG_PN_INCL_WIDTH  1
#define CP_FREQ_FIELDS_INCL_WIDTH      1

#define CP_NGHBR_PN_WIDTH        9   /* Neighbor PN                          */
#define CP_SEARCH_PRIORITY_WIDTH 2   /* Search Priority                      */
#define CP_FREQ_INCL_WIDTH       1   /* Frequency Included indicator         */
#define CP_NGHBR_BAND_WIDTH      5   /* Neighbor band                        */
#define CP_NGHBR_FREQ_WIDTH      11  /* Neighbor frequency                   */
#define CP_FREQ_INCL_OFFSET_WIDTH 14 /* Offset from start of rec to FREQ_INCL */

/* R. Sattari, 9/20/00, changed from 3 to 2 */
#define CP_NGHBR_SRCH_MODE_WIDTH   2

/* R.Sattari, 6/30/00, added hopping pilot defenitions */
#define CP_USE_TIMING_WIDTH         1
#define CP_GLOBAL_TIMING_INCL_WIDTH 1
#define CP_GLOBAL_TX_DURATION_WIDTH 4
#define CP_GLOBAL_TX_PERIOD_WIDTH   7
#define CP_TIMING_INCL_WIDTH        1
#define CP_NGHBR_TX_OFFSET_WIDTH    7
#define CP_NGHBR_TX_DURATION_WIDTH  4
#define CP_NGHBR_TX_PERIOD_WIDTH    7

#define CP_SRCH_OFFSET_INCL_WIDTH     1
#define CP_ADD_PILOT_REC_INCL_WIDTH   1
#define CP_NGHBR_PILOT_REC_TYPE_WIDTH 3
#define CP_NGHBR_PILOT_REC_LEN_WIDTH  3
#define CP_OTD_POWER_LEVEL_WIDTH      2
#define CP_SRCH_OFFSET_NGHBR_WIDTH    3

/* General Neighbor List Message (GNLM) fields */
#define CP_RESQ_DELAY_TIME            6
#define CP_RESQ_ALLOWED_TIME          6
#define CP_RESQ_ATTEMPT_TIME          6
#define CP_RESQ_CODE_CHAN             11
#define CP_RESQ_QOF                   2
#define CP_RESQ_MIN_PERIOD            5
#define CP_RESQ_NUM_TOT_TRANS_20MS    4
#define CP_RESQ_NUM_TOT_TRANS_5MS     4
#define CP_RESQ_NUM_PREAMBLE_RC1_RC2  3
#define CP_RESQ_NUM_PREAMBLE          3
#define CP_RESQ_POWER_DELTA           3

/* R.Sattari 6/29/00, changed from 5 */
#define CP_NUM_NGHBR_WIDTH         6

#define CP_SRCH_WIN_NGHBR_WIDTH    4
#define CP_NGHBR_LIST_UPDATE_FIXED_FIELD_WIDTH \
                        (CP_COMMON_FIELD_WIDTH + \
                         CP_PILOT_INC_WIDTH)

/* Neighbor List Update Message */
#define CP_SEARCH_WIN_NGHBR_WIDTH  4

/* Universal Neighbor List Message */
#define CP_NUM_RADIO_INTERFACE     4
#define CP_RADIO_INTERFACE_TYPE    4
#define CP_RADIO_INTERFACE_LEN     8
#define CP_NGHBR_PILOT_REC_TYPE    3
#define CP_NGHBR_PILOT_REC_TYPE_000_RESERVE 4
#define CP_QOF                     2
#define CP_WALSH_LENGTH            3
#define CP_AUX_PILOT_WALSH         6
#define CP_SRCH_OFFSET_NGHBR       3
#define CP_NGHBR_PILOT_REC_LEN     3
/************************************************/
/* Common CDMA physical field width definitions */
/************************************************/
#define CP_CDMA_FREQ_WIDTH   11      /* CDMA frequency                       */
#define CP_PILOT_PN_WIDTH    9       /* Pilot PN                             */
#define CP_LC_STATE_WIDTH    42      /* Long code state                      */
#define CP_CODE_CHAN_WIDTH   8       /* Code Channel                         */
#define CP_SLOT_CYCLE_INDEX_WIDTH  3
#define CP_RETURN_CAUSE_WIDTH      4
#define CP_SCM_WIDTH               8

/************************************************/
/* Common Analog physical field width definitions */
/************************************************/
#define CP_ANALOG_SYS_WIDTH     1    /* System indicator                     */
#define CP_USE_ANALOG_SYS_WIDTH 1    /* Use analog system indicator          */
#define CP_VMAC_WIDTH           3    /* Voice MS Attenuation Code            */
#define CP_ANALOG_CHAN_WIDTH    11   /* Voice Channel Number                 */
#define CP_SCC_WIDTH            2    /* SAT Color Code                       */
#define CP_MEM_WIDTH            1    /* Message Encryption Mode              */
#define CP_AN_CHAN_TYPE_WIDTH   2    /* Analog Voice Channel type            */
#define CP_DSCC_MSB_WIDTH       1    /* Digital sup. color code              */
#define CP_BAND_CLASS_WIDTH     5
/*For unfAHDM */
#define CP_CON_REF_INCL_WIDTH   1

/*R.Sattari, 7/5/00 */
#define CP_NUM_ANALOG_NGHBR_WIDTH 3
#define CP_ANALOG_BAND_CLASS_WIDTH 5
#define CP_SYS_A_B_WIDTH        2

/************************************************/
/* Common Pilot Measurement field width definitions */
/************************************************/
#define CP_ACTIVE_PILOT_STRENGTH_WIDTH 6
#define CP_FIRST_IS_ACTIVE_WIDTH 1
#define CP_FIRST_IS_PTA_WIDTH    1
#define CP_NUM_ADD_PILOTS_WIDTH 3
#define CP_PILOT_STRENGTH_WIDTH 6
#define CP_PILOT_PN_PHASE_WIDTH 15


/************************************************/
/* Common Address field width definitions */
/************************************************/
#define CP_DELETE_FOR_TMSI_WIDTH     1  /* Delete foreign TMSI               */
#define CP_USE_TMSI_WIDTH            1  /* Use TMSI indicator                */
#define CP_PREF_MSID_TYPE_WIDTH      2  /* Preferred MSID Type               */
#define CP_PREF_MSID_TYPE_P3_WIDTH   4  /* Preferred MSID for P_REV < 3      */
#define CP_TMSI_ZONE_LEN_WIDTH       4  /* TMSI zone length                  */
#define CP_TMSI_CODE_WIDTH           32 /* TMSI code                         */
#define CP_TMSI_CODE_24_WIDTH        24 /* TMSI code - least 24 bits         */
#define CP_TMSI_CODE_16_WIDTH        16 /* TMSI code - least 16 bits         */
#define CP_TMSI_EXP_TIME_WIDTH       24 /* TMSI expiration time              */
#define CP_MSID_TYPE_WIDTH           3
#define CP_MSID_LEN_WIDTH            4
#define CP_ESN_WIDTH                 32
#define CP_IMSI_ADDRNUM_WIDTH        3
#define CP_IMSI_ADDR_TYPE_WIDTH      3
#define CP_IMSI_ADD_LEN_WIDTH        4
#define CP_IMSI_S2_WIDTH             10
#define CP_IMSI_S1_WIDTH             24
#define CP_IMSI_S_WIDTH              34
#define CP_MCC_WIDTH                 10  /* Mobile country code              */
#define CP_IMSI_11_12_WIDTH          7   /* 11th and 12th digits of IMSI     */
#define CP_IMSI_CLASS_WIDTH          1
#define CP_IMSI_CLASS0_TYPE_WIDTH    2
#define CP_IMSI_CLASS1_TYPE_WIDTH    1
#define CP_UIM_ID_WIDTH                        32

/*************************************************/
/* Common Feature Notification width definitions */
/*************************************************/
#define CP_RELEASE_WIDTH             1  /* release indicator width           */
#define CP_AUTO_MSG_INTERVAL         3
#define CP_BROADCAST_GPS_ASST        1
#define CP_CS_SUPPORTED              1
#define CP_SIG_ENCRYPT_SUP           8
#define CP_UI_ENCRYPT_SUP            8
#define CP_STORE_KEY                 1
#define CP_MS_INIT_POS_LOC_SUP_IND   1
#define CP_MSG_INTEGRITY_SUP         1
#define CP_SIG_INTEGRITY_SUP_INCL    1
#define CP_SIG_INTEGRITY_SUP         8

/************************************************/
/* Common Service Redirection field width definitions */
/************************************************/
#define CP_RETURN_IF_FAIL_WIDTH            1
#define CP_DELETE_TMSI_WIDTH               1
#define CP_REDIRECT_TYPE_WIDTH             1
#define CP_SERVICE_REDIRECTION_RSVD_WIDTH  4

/* Service Redirection Analog Record */
#define CP_EXPECTED_SID_WIDTH              15
#define CP_IGNORE_CDMA_WIDTH               1
#define CP_SYS_ORDERING_WIDTH              3
#define CP_MAX_REDIRECT_DELAY_WIDTH        5       /* Maximum delay upon redirection      */

#define CP_SRD_REDIRECTION_ANALOG_RECORD_WIDTH \
                (CP_EXPECTED_SID_WIDTH + \
                 CP_IGNORE_CDMA_WIDTH  + \
                 CP_SYS_ORDERING_WIDTH + \
                 CP_MAX_REDIRECT_DELAY_WIDTH)

#if ((CP_SRD_REDIRECTION_ANALOG_RECORD_WIDTH%8) != 0)
#error "CP_SRD_REDIRECTION_ANALOG_RECORD_WIDTH \
        not an integral number of octets"
#endif

/* Service Redirection CDMA Record   */
#define CP_EXPECTED_NID_WIDTH              16
#define CP_SRD_CDMA_REC_RSVD_WIDTH         4
#define CP_NUM_CHANS_WIDTH                 4
#define CP_CDMA_CHAN_WIDTH                 11
#define CP_SRD_REDIRECTION_CDMA_FIXED_RECORD_WIDTH \
                (CP_BAND_CLASS_WIDTH         + \
                 CP_EXPECTED_SID_WIDTH       + \
                 CP_EXPECTED_NID_WIDTH       + \
                 CP_SRD_CDMA_REC_RSVD_WIDTH  + \
                 CP_NUM_CHANS_WIDTH)
#define CP_REDIRECT_ACCOLC_WIDTH   16 /* Access overload classes             */

/* Extend Global Service Redirect Message */
#define CP_REDIRECT_P_MIN                  8
#define CP_REDIRECT_P_MAX                  8
#define CP_REC_TYPE_2_RESERVED             4
/************************************************/
/* Common DTMF field width definitions */
/************************************************/
#define CP_NUM_DIGITS_WIDTH                8
#define CP_DTMF_ON_LENGTH_WIDTH            3
#define CP_DTMF_OFF_LENGTH_WIDTH           3
#define CP_BURST_DTMF_DIGIT_WIDTH          4
#define CP_RTC_STATUS_RSVD_WIDTH           7

/************************************************/
/* Common FTC Power Control field width definitions */
/************************************************/
#define CP_PWR_REP_THRESH_WIDTH            5
#define CP_PWR_REP_FRAMES_WIDTH            4
#define CP_PWR_THRESH_ENABLE_WIDTH         1
#define CP_PWR_PERIOD_ENABLE_WIDTH         1
#define CP_PWR_REP_DELAY_WIDTH             5

/************************************************/
/* Common Service Negotiation field width definitions */
/************************************************/
/* Service Request Message */
#define CP_SERV_REQ_SEQ_WIDTH              3
#define CP_REQ_PURPOSE_WIDTH               4

/* Service Response Message */
#define CP_RESP_PURPOSE_WIDTH              4
#define CP_BAND_SUB_CLASS_WIDTH            8

/* Service Connect Message */
#define CP_FTC_SERV_CON_SEQ_WIDTH          3
#define CP_FTC_SERV_CONNECT_MSG_RSVD_WIDTH      5

#define CP_CC_INFO_INCL_WIDTH              1
#define CP_NUM_CALLS_ASSIGN_WIDTH          8
#define CP_RESPONSE_IND_WIDTH              1
#define CP_TAG_WIDTH                       4
#define CP_STATUS_RESPONSE_RSVD_WIDTH      4

/* Service Option Control Message */
#define CP_SERV_OPT_CTL_REC_LEN_WIDTH      8
/* Service Option Control Type Specific Fields  */
#define CP_SO_CTL_REC_VOICE_LEN            1
#define CP_SO_CTL_RATE_REDUC_WIDTH         3
#define CP_SO_CTL_TYPE_SPECIFIC_RSVD_WIDTH 3
#define CP_SO_CTL_MOB_TO_MOB_WIDTH         1
#define CP_SO_CTL_INIT_CODEC_WIDTH         1

/* Service Connect Completion Message */
#define CP_RTC_SERV_CON_SEQ_WIDTH                 3
#define CP_SERVICE_CON_COMPLETION_RSVD1_WIDTH      1
#define CP_SERVICE_CON_COMPLETION_RSVD_WIDTH       3


/* Service Option Control Message */
#define CP_SERV_OPT_CTL_RSVD_WIDTH                7

/* Radio Configuration Parameter Message */

#define CP_FTC_FOR_FCH_ACK_MASK_RL_BLANKING_WIDTH           16
#define CP_FTC_FOR_FCH_ACK_MASK_NO_RL_BLANKING_WIDTH        16

#define CP_FTC_REV_FCH_ACK_MASK_WIDTH                       16

#define CP_FTC_FOR_SCH_ACK_MASK_RL_BLANKING_WIDTH           16
#define CP_FTC_FOR_SCH_ACK_MASK_NO_RL_BLANKING_WIDTH        16
#define CP_REV_SCH_ACK_MASK_WIDTH                           16

#define CP_FTC_FOR_N2M_IND_WIDTH                            3
#define CP_FTC_FPC_MODE_WIDTH                               3
#define CP_FTC_RPC_MODE_WIDTH                               2
#define CP_FTC_POWER_CNTL_STEP_WIDTH                        3
#define CP_FTC_FOR_FCH_BLANKING_DUTYCYCLE_WIDTH             3
#define CP_FTC_REV_FCH_BLANKING_DUTYCYCLE_WIDTH             3
#define CP_FTC_REV_ACKCH_GAIN_ADJ_ACS1_WIDTH                7
#define CP_FTC_REV_ACKCH_GAIN_ADJ_ACS2PLUS_WIDTH            7

#define CP_NUM_RC_PARAM_RECORDS_WIDTH                       3
#define CP_QOF_SET_IN_USE_WIDTH                             3
#define CP_REV_SCH0_ACK_CH_WALSH_WIDTH                      7
#define CP_REV_SCH0_ACK_BIT_WIDTH                           5
#define CP_REV_SCH1_ACK_BIT_WALSH_WIDTH                     7
#define CP_REV_SCH1_ACK_BIT_WIDTH                           5

/*#define CP_FOR_FCH_CCSH_INTERLEAVER_TYPE_WIDTH              1 */


/************************************************/
/* PDCH field width definitions 				*/
/************************************************/
#define CP_SRID_RESTORE_WIDTH	3
#define CP_PLCM_TYPE_WIDTH		4
#define CP_EXT_CH_IND_WIDTH		5
#define CP_FULL_CI_FEEDBACK_IND 1
#define CP_REV_CQICH_FRAME_OFFSET_WIDTH 4
#define CP_REV_CQICH_REPS_WIDTH 2
#define CP_REV_ACKCH_REPS_WIDTH 2
#define CP_PDCH_RC_WIDTH		5
#define CP_PDCH_GROUP_IND_INCL	1
#define CP_FOR_PDCH_PARAMS_INCL 1
#define CP_NUM_SOFT_SWITCHING_FRAMES_WIDTH 4
#define CP_NUM_SOFTER_SWITCHING_FRAMES_WIDTH 4
#define CP_NUM_SOFT_SWITCHING_FRAMES_CHM_WIDTH 4
#define CP_NUM_SOFTER_SWITCHING_FRAMES_CHM_WIDTH 4
#define CP_NUM_SOFT_SWITCHING_SLOTS_WIDTH 2
#define CP_NUM_SOFTER_SWITCHING_SLOTS_WIDTH 2
#define CP_NUM_SOFT_SWITCHING_SLOTS_CHM_WIDTH 2
#define CP_NUM_SOFTER_SWITCHING_SLOTS_CHM_WIDTH 2
#define CP_PDCH_SOFT_SWITCHING_DELAY_WIDTH 8
#define CP_PDCH_SOFTER_SWITCHING_DELAY_WIDTH 8
#define CP_FOR_PDCH_INCL				1
#define CP_WALSH_TABLE_ID_WIDTH 		3
#define CP_NUM_PDCCH_WIDTH				3
#define CP_FOR_PDCCH_WALSH_WIDTH 		6
#define CP_MAC_ID_WIDTH					8
#define CP_REV_CQICH_COVER_WIDTH 		3
#define CP_FOR_CPCCH_WALSH_WIDTH 		7
#define CP_FOR_CPCSCH_WIDTH				5
#define CP_PDCH_GROUP_IND				1
#define CP_CQICH_ATT_ADJ_GAIN_WIDTH		8
#define CP_RLGAIN_ACKCQICH_PILOT_WIDTH	6



/************************************************/
/* Sync Channel Message field width definitions */
/************************************************/
#define CP_SYS_TIME_WIDTH   36      /* System time                          */
#define CP_LP_SEC_WIDTH     8       /* Leap seconds                         */
#define CP_LTM_OFF_WIDTH    6       /* Local time offset                    */
#define CP_DAYLT_WIDTH      1       /* Daylight savings time indicator      */
#define CP_PRAT_WIDTH       2       /* Page channel rate                    */
/* BCY 11/15/00 */
#define CP_EXT_CDMA_FREQ            11
#define CP_SR1_CDMA_FREQ_NON_TD     11
#define CP_SR1_BRAT_NON_TD          2
#define CP_SR1_CRAT_NON_TD          1
#define CP_BCCH_CODE_CHAN_NON_TD    6
#define CP_SR1_CDMA_FREQ_TD         11
#define CP_SR1_BRAT_TD              2
#define CP_SR1_CRAT_TD              1
#define CP_BCCH_CODE_CHAN_TD        6
#define CP_SR1_TD_MODE              2
#define CP_SR1_TD_POWER_LEVEL       2
#define CP_SR3_CENTER_FREQ          11
#define CP_SR3_BRAT                 2
#define CP_SR3_BCCH_CODE_CHAN       7
#define CP_SR3_PRIMARY_PILOT        2
#define CP_SR3_PILOT_POWER1         3
#define CP_SR3_PILOT_POWER2         3
#define CP_DS_BLOB                  24



/************************************************/
/* Page Channel Message field width definitions */
/************************************************/

    /* Offsets into messages */
#define CP_PILOT_PN_OFFSET    \
                            (CP_MSG_LEN_WIDTH + \
                             CP_MSG_TYPE_WIDTH )
                             /* bit offset to PILOT_PN of overhead msgs */
#define CP_CONFIG_MSG_SEQ_OFFSET \
                            (CP_PILOT_PN_OFFSET + \
                             CP_PILOT_PN_WIDTH )
                             /* bit offset to CONFIG_MSG_SEQ of overhead msgs */
#define CP_ACC_MSG_SEQ_OFFSET \
                            (CP_PILOT_PN_OFFSET + \
                             CP_PILOT_PN_WIDTH )
                             /* bit offset to ACC_MSG_SEQ of access par msgs */
#define CP_IDLE_REC_OFFSET   \
                            (CP_CONFIG_MSG_SEQ_OFFSET + \
                             CP_CONFIG_MSG_SEQ_WIDTH + \
                             CP_PILOT_INC )
                             /* bit offset to Idle record in Nghbr msg */
#define CP_CDMA_FREQ_OFFSET \
                            (CP_CONFIG_MSG_SEQ_OFFSET + \
                             CP_CONFIG_MSG_SEQ_WIDTH )
                             /* bit offset to CDMA_FREQ of CDMA Ch List */


    /* Fields contained in System Parameters Message */
#define CP_EXT_SYS_PARAMETER_WIDTH 1 /* Ext. System Pars Message indicator  */
#define CP_EXT_NGHBR_LIST_WIDTH    1 /* Ext. Neighbor List Message indicator*/
#define CP_GEN_NGHBR_LIST_WIDTH    1 /* Gen. Neighbor List Message indicator*/
#define CP_GLOBAL_REDIRECT_WIDTH   1 /* Global Svc Redirect Message indicator*/

    /* Fields contained in Access Parameters Message */
#define CP_ACC_MSG_SEQ_WIDTH     6   /* Access sequence number               */
#define CP_ACC_CHAN_WIDTH        5   /* Number of access channels            */
#define CP_NOM_PWR_WIDTH         4   /* Nominal transmit power offset        */
#define CP_INIT_PWR_WIDTH        5   /* Initial power offset for access      */
#define CP_PWR_STEP_WIDTH        3   /* Power increment                      */
#define CP_NUM_STEP_WIDTH        4   /* Number of access probes              */
#define CP_MAX_CAP_SZ_WIDTH      3   /* Max access ch message capsule size   */
#define CP_PAM_SZ_WIDTH          4   /* Access Channel preamble length       */
#define CP_PSIST_09_WIDTH        6   /* Persistence val for access ovld 0-9  */
#define CP_PSIST_10_WIDTH        3   /* Persistence val for access ovld 10   */
#define CP_PSIST_11_WIDTH        3   /* Persistence val for access ovld 11   */
#define CP_PSIST_12_WIDTH        3   /* Persistence val for access ovld 12   */
#define CP_PSIST_13_WIDTH        3   /* Persistence val for access ovld 12   */
#define CP_PSIST_14_WIDTH        3   /* Persistence val for access ovld 13   */
#define CP_PSIST_15_WIDTH        3   /* Persistence val for access ovld 14   */
#define CP_MSG_PSIST_WIDTH       3   /* Persistence modifier for message tx  */
#define CP_REG_PSIST_WIDTH       3   /* Persistence modifier for non-reg tx  */
#define CP_PROBE_PN_RAN_WIDTH    4   /* Time randomization for probes        */
#define CP_ACC_TMO_WIDTH         4   /* Acknowledgement timeout              */
#define CP_PROBE_BKOFF_WIDTH     4   /* Probe backoff range                  */
#define CP_BKOFF_WIDTH           4   /* Probe sequence backoff range         */
#define CP_MAX_REQ_SEQ_WIDTH     4   /* Max access probe seqs for req attempt*/
#define CP_MAX_RSP_SEQ_WIDTH     4   /* Max access probe seqs for rsp attempt*/
#define CP_NOM_PWR_EXT_WIDTH     1   /* Extended nominal transmit power      */


/**************************************************/
/* FCCCH and BCCH Message field width definitions */
/**************************************************/

/* Offsets into FCCCH and BCCH messages, when EXT_MSG_LENGTH_IND field is set.   */

#define CP_ACK_SEQ_EXT_OFFSET_WIDTH \
                            (CP_EXT_MSG_LEN_WIDTH + \
                             CP_MSG_TYPE_WIDTH)

#define CP_PILOT_PN_EXT_OFFSET    \
                            (CP_EXT_MSG_LEN_WIDTH + \
                             CP_MSG_TYPE_WIDTH )
                             /* bit offset to PILOT_PN of overhead msgs */

#define CP_CONFIG_MSG_SEQ_EXT_OFFSET \
                            (CP_PILOT_PN_EXT_OFFSET + \
                             CP_PILOT_PN_WIDTH )
                             /* bit offset to CONFIG_MSG_SEQ of overhead msgs */


/* Enhanced Access Parameters Message (EAPM) */
#define CP_PSIST_PARMS_LEN       5
#define CP_PSIST_EMG             3
#define CP_MSG_PSIST_EACH        3
#define CP_REG_PSIST_EACH        3
#define CP_EAPM_RESERVED         7
#define CP_LAC_PARMS_LEN         4
#define CP_EAPM_ACC_TMO          6
#define CP_NUM_MODE_SELECTION_ENTRIES 3
#define CP_ACCESS_MODE           3
#define CP_ACCESS_MODE_MIN_DURATION 10
#define CP_ACCESS_MODE_MAX_DURATION 10

#define CP_RLGAIN_COMMON_PILOT   6
#define CP_IC_THRESH             4
#define CP_IC_MAX                4
#define CP_NUM_MODE_PARM_REC     3

#define CP_EACH_PARM_REC_LEN     4
#define CP_APPLICABLE_MODES      8
#define CP_EACH_NOM_PWR          5
#define CP_EACH_INIT_PWR         5
#define CP_EACH_PWR_STEP         3
#define CP_EACH_NUM_STEP         4

#define CP_EACH_PREAMBLE_NUM_FRAC       4
#define CP_EACH_PREAMBLE_FRAC_DURATION  4
#define CP_EACH_PREAMBLE_OFF_DURATION   4
#define CP_EACH_PREAMBLE_ADD_DURATION   4
#define CP_EACH_ACCESS_THRESH           6
#define CP_EACH_PROBE_BKOFF             4
#define CP_EACH_BKOFF                   4
#define CP_EACH_SLOT                    6
#define CP_EACH_SLOT_OFFSET1            6
#define CP_EACH_SLOT_OFFSET2            6

#define CP_BA_PARMS_LEN                 3
#define CP_NUM_EACH_BA                  5
#define CP_EACH_BA_RATES_SUPPORTED      8

#define CP_RA_PARMS_LEN                 5
#define CP_NUM_EACH_RA                  5
#define CP_NUM_CACH                     3
#define CP_CACH_CODE_RATE               1

#define CP_CACH_CODE_CHAN               8

#define CP_NUM_RCCCH                    5
#define CP_RCCCH_RATES_SUPPORTED        8
#define CP_RCCCH_PREAMBLE_NUM_FRAC      4
#define CP_RCCCH_PREAMBLE_FRAC_DURATION 4
#define CP_RCCCH_PREAMBLE_OFF_DURATION  4
#define CP_RCCCH_PREAMBLE_ADD_DURATION  4
#define CP_RCCCH_SLOT                   6
#define CP_RCCCH_SLOT_OFFSET1           6
#define CP_RCCCH_SLOT_OFFSET2           6
#define CP_RCCCH_NOM_PWR                5
#define CP_RCCCH_INIT_PWR               5
#define CP_RA_PC_DELAY                  5
#define CP_EACAM_CACH_DELAY             4
#define CP_RCCCH_HO_THRESH              4
#define CP_EACAM_PCCAM_DELAY            5
#define CP_NUM_CPCCH                    2
#define CP_CPCCH_RATE                   2
#define CP_CPCCH_CODE_CHAN              8
#define CP_NUM_PCSCH_RA                 7

#define CP_RA_CPCCH_STEP_UP             2   /* Only for PREV7 */
#define CP_RA_CPCCH_STEP_DN				2	/* Only for PREV7 */

#define CP_NUM_ACCT_SO                  4
#define CP_ACCT_AOC_BITMAP1             5
#define CP_ACCT_SO                      16
#define CP_NUM_ACCT_SO_GRP              3
#define CP_ACCT_AOC_BITMAP2             5
#define CP_ACCT_SO_GRP                  5

/* Fields contained in (Extended) Channel Assignment Message */
#define CP_ASSIGN_MODE_WIDTH    3    /* Assignment Mode                      */
#define CP_ADD_REC_LEN_WIDTH    8    /* Additional record length             */
#define CP_RESPOND_WIDTH        1    /* Respond on ACC indicator             */
#define CP_DEFAULT_CONFIG_WIDTH 3    /* Default Configuration                */
#define CP_BYPASS_ALERT_ANSWER_WIDTH 1   /* Bypass Indicator                 */
#define CP_GRANTED_MODE_WIDTH   2    /* Granted Mode                         */
#define CP_FRAME_OFFSET_WIDTH   4    /* Traffic Channel frame offset         */
#define CP_EXT_TC_NUM_PILOTS_WIDTH 3 /* Number of Pilots width               */

/* R.Sattari 6/28/00, changed from 5 */
#define CP_EXT_PC_NUM_PILOTS_WIDTH 6 /* Number of Pilots width               */

#define CP_EXT_TC_NUM_PILOTS    8    /* Number of Pilots in TC Assignment    */

/* R.Sattari 6/28/00, changed from 32 */
#define CP_EXT_PCH_NUM_PILOTS   64   /* Number of Pilots in PCH Assignment   */

#define CP_FOR_RC               5
#define CP_REV_RC               5
#define CP_FPC_INIT_SETPT       8
#define CP_FPC_SUBCHAN_GAIN     5
#define CP_RLGAIN_ADJ           4
#define CP_FPC_FER              5
#define CP_FPC_MIN_SETPT        8
#define CP_FPC_MAX_SETPT        8
#define CP_REV_FCH_GATING_MODE  1
#define CP_REV_PWR_CNTL_DELAY_INCL  1
#define CP_REV_PWR_CNTL_DELAY   2
#define CP_SIG_ENCRYPT_MODE     3
#define CP_KEY_SIZE             3
#define CP_USE_NEW_KEY          1
#define CP_KEY_SEQ              4
#define CP_CH_IND               2
#define CP_CH_RECORD_LEN        5
#define CP_PILOT_RECORD_TYPE    3
#define CP_CH_IND_01_REC_LEN    3
#define CP_CODE_CHAN_FCH        11
#define CP_QOF_MASK_ID_FCH      2
#define CP_FPC_PRI_CHAN         1
#define CP_1XRL_FREQ_OFFSET     2
#define CP_C_SIG_ENCRYPT_MODE_INCL_WIDTH   1
#define CP_CHANGE_KEYS_WIDTH    1
#define CP_USE_UAK_WIDTH        1

#define CP_PLCM_TYPE_INCL       1
#define CP_PLCM_TYPE            4
#define CP_PLCM_39              39

/* Fields contained in TMSI Assignment Message */
#define CP_TMSI_RSVD_WIDTH      5

/* General Page Message field IE widths contained in records */
#define CP_SPECIAL_SERVICE_WIDTH  1
#define CP_CLASS_WIDTH            2
#define CP_SUBCLASS_WIDTH         2
#define CP_SERVICE_OPTION_WIDTH  16
#define CP_DONE_FIELD_WIDTH       1
#define CP_SUBCLASS_EXT_WIDTH     2
/* Field definitions for Page Message and
 * Slotted Page Message
 * (NOTE: These messages obsolete in IS-95B
 */
#define CP_PAGE_REC_OFFSET          28
#define CP_MORE_PAGES_WIDTH          1
#define CP_EXT_ADDR_WIDTH            1

/* Bit offsets into General Page Message */
#define CP_GP_CFG_MSG_SEQ_OFFSET    16
#define CP_GP_ACC_MSG_SEQ_OFFSET    22
#define CP_CLASS_0_DONE_OFFSET      28
#define CP_CLASS_1_DONE_OFFSET      29
#define CP_TMSI_DONE_OFFSET         30
#define CP_ORDERED_TMSIS_OFFSET     31
#define CP_BROADCAST_DONE_OFFSET    32
#define CP_ADD_LENGTH_OFFSET        37
#define CP_GP_REC_OFFSET            40
/* EXT msg length will make offset 8 bits longer*/
#define CP_GP_CFG_MSG_SEQ_EXT_OFFSET  CP_GP_CFG_MSG_SEQ_OFFSET + 8

/* Fields contained in Extended System Parameters Message */
#define CP_BCAST_INDEX_WIDTH        3
#define CP_IMSI_T_SUPPORTED_WIDTH   1
#define CP_PACKET_ZONE_ID_WIDTH     8
#define CP_MAX_NUM_ALT_SO_WIDTH     3
#define CP_EC_THRESH_WIDTH          5
#define CP_EC_IO_THRESH_WIDTH       5
#define CP_INDICATION_WIDTH         1
#define CP_MAX_NUM_PROBE_HO_WIDTH   3
#define CP_EXT_SYS_PAR_RSVD_WIDTH   7

/* R.Sattari 6/28/00, changed from 5 */
#define CP_NGHBR_SET_SIZE_WIDTH     6
#define CP_BROADCAT_GPS_ASST        1

/* FCCCH Parameters */
#define CP_NUM_FCCCH                           3
#define CP_FCCCH_RATE                          3
#define CP_FCCCH_CODE_RATE                     1
#define CP_FCCCH_CODE_CHAN                     8

/* Broadcast Index Parameters */
#define CP_BCAST_INDEX                         3
#define CP_NUM_BCCH_BCAST                      3
#define CP_BCCH_CODE_CHAN                      7
#define CP_BRAT                                2
#define CP_BCCH_CODE_RATE                      1

/* Quick Paging Channel Parameters */
#define CP_NUM_QPCH                            2
#define CP_QPCH_RATE                           1
#define CP_QPCH_POWER_LEVEL_PAGE               3
#define CP_QPCH_CCI_SUPPORTED                  1
#define CP_QPCH_POWER_LEVEL_CONFIG             3
#define CP_QPCH_CODE_CHAN                      8
#define CP_QPCH_POWER_LEVEL_BCAST              3

/* Reverse Power Control Parameters */
#define CP_RLGAIN_TRAFFIC_PILOT                6
#define CP_REV_POWER_CNTRL_DELAY               2
#define CP_NUM_OPT_MSG                         4

#define CP_ALT_BAND_CLASS                      5
#define CP_CDMA_OFF_TIME_REP_THRESHOLD_UNIT    1
#define CP_CDMA_OFF_TIME_REP_THRESHOLD         3
/* Extended CDMA Channel List Parameters */
#define CP_RC_QPCH_HASH_IND                    1
#define CP_TD_MODE                             2
#define CP_TD_HASH_IND                         1
#define CP_TD_POWER_LEVEL                      2

/**************************************************/
/* Access Channel Message field width definitions */
/**************************************************/

/* fields used in general */
#define CP_REG_TYPE_WIDTH               4
#define CP_MOB_TERM_WIDTH               1
#define CP_PILOTS_RESERVED_WIDTH        1
#define CP_LAC_LENGTH_WIDTH             5

#define CP_QOF_WIDTH                    2
#define CP_WALSH_LENGTH_WIDTH           3



/* Fields used by Origination message */
#define CP_REQUEST_MODE_WIDTH           3
#define CP_PM_WIDTH                     1
#define CP_NAR_AN_CAP_WIDTH             1
#define CP_DIGIT_MODE_WIDTH             1
#define CP_NUMBER_TYPE_WIDTH            3
#define CP_NUMBER_PLAN_WIDTH            4
#define CP_MORE_FIELDS_WIDTH            1
#define CP_NUM_ORIG_FIELDS_WIDTH        8
#define CP_CHARI_4_WIDTH                4
#define CP_CHARI_8_WIDTH                8
#define CP_PACA_REORIG_WIDTH            1
#define CP_MORE_RECORDS_WIDTH           1
#define CP_ENCRYPTION_SUPPORTED_WIDTH   4
#define CP_NUM_DIGITS_FIELDS_WIDTH      8
#define CP_PACA_SUPPORTED_WIDTH         1
#define CP_NUM_ALT_SO_WIDTH             3

#define CP_DRS_WIDTH				    1
#define CP_CH_IND_WIDTH				    2
#define CP_SR_ID_WIDTH				    3
#define CP_FOR_RC_PREF_WIDTH			5
#define CP_REV_RC_PREF_WIDTH			5
#define CP_FCH_SUPPORTED_WIDTH		    1
#define CP_FCH_FRAME_SIZE_WIDTH		    1

#define CP_RC_MAP_WIDTH                 3
#define CP_RC_MAP_LEN_WIDTH             3

#define CP_FOR_FCH_LEN_WIDTH			CP_RC_MAP_LEN_WIDTH
#define CP_FOR_FCH_RC_MAP_WIDTH		    CP_RC_MAP_WIDTH
#define CP_REV_FCH_LEN_WIDTH			CP_RC_MAP_LEN_WIDTH
#define CP_REV_FCH_RC_MAP_WIDTH		    CP_RC_MAP_WIDTH

#define CP_DCCH_SUPPORTED_WIDTH		    1
#define CP_DCCH_FRAME_SIZE_WIDTH		2
#define CP_FOR_DCCH_LEN_WIDTH			3
#define CP_FOR_DCCH_RC_MAP_WIDTH	3
#define CP_REV_DCCH_LEN_WIDTH			3
#define CP_REV_DCCH_RC_MAP_WIDTH	3

#define CP_REV_FCH_GATING_REQ_WIDTH		1
#define CP_ORIG_REASON_WIDTH			1
#define CP_ORIG_COUNT_WIDTH			    2
#define CP_GLOBAL_EMERGENCY_CALL_WIDTH	1
#define CP_MS_INIT_POS_LOC_IND_WIDTH 1
#define CP_QOS_PARMS_INCL_WIDTH		    1
#define CP_QOS_PARMS_LEN_WIDTH		    5
#define CP_QOS_RESERVED_WIDTH			7
#define CP_UI_ENCRYPT_REG_WIDTH		    1
#define CP_SYNC_ID_INCL_WIDTH			1
#define CP_SYNC_ID_WIDTH				16
#define CP_PREV_SID_INCL_WIDTH			1
#define CP_PREV_SID_WIDTH				15
#define CP_PREV_NID_INCL_WIDTH			1
#define CP_PREV_NID_WIDTH				16
#define CP_PREV_PZID_INCL_WIDTH			1
#define CP_PREV_PZID_WIDTH			    8
#define CP_SO_BITMAP_IND_WIDTH			2
#define CP_SO_GROUP_NUM_WIDTH			5
#define CP_SO_BITMAP_WIDTH			    8
#define CP_MSG_INTEGRITY_SUP_INCL_WIDTH   1
#define CP_NUM_AUX_PILOTS_WIDTH     3

#define CP_SDB_DESIRED_ONLY_WIDTH 1
#define CP_ALT_BAND_CLASS_SUP_WIDTH 1

#define CP_ACK_DELAY_WIDTH 1
#define CP_NUM_ARQ_CHAN_WIDTH 2
#define CP_FOR_PDCH_LEN_WIDTH 2
#define CP_FOR_PDCH_RC_MAP_WIDTH 3
#define CP_CH_CONFIG_SUP_MAP_LEN_WIDTH 2
#define CP_CH_CONFIG_SUP_MAP_WIDTH 6

/**************************************************/
/*    Access Channel Message field definitions    */
/**************************************************/

#define MSG_TYPE_PD_00            0x00
#define MSG_TYPE_PD_01            0x40
    #define  MSG_TYPE_PD_10       0x80


/************************************************/
/*  General Extension message field definitions */
/************************************************/
#define CP_NUM_GE_REC_WIDTH           8
#define CP_GE_REC_TYPE_WIDTH          8
#define CP_GE_REC_LEN_WIDTH           8

#define CP_FOR_SCH_DELAYED_ACK_MASK_WIDTH            3
#define CP_REV_SCH_DELAYED_ACK_MASK_WIDTH            3

/***********************************************************/
/* Forward Traffic Channel Message field width definitions */
/***********************************************************/


/* Data Burst Message */
#define CP_BURST_ADDR_LEN_WIDTH            4
#define CP_MSG_NUMBER_WIDTH                8
#define CP_BURST_TYPE_WIDTH                6
#define CP_NUM_MSGS_WIDTH                  8
#define CP_DATA_BURST_NUM_FIELDS_WIDTH     8
#define CP_DATA_BURST_CHAR_WIDTH           8


/* In-Traffic System Parameters Message */
#define CP_EXTENSION_WIDTH                 1



/* Retrieve Parameters Message */
#define CP_PARAMETER_ID_WIDTH              16
#define CP_RP_RSVD_FIELD_WIDTH             7
#define CP_RETRIEVE_PARAMETERS_FIXED_FIELD_WIDTH \
                        (CP_COMMON_FIELD_WIDTH + \
             CP_RP_RSVD_FIELD_WIDTH)


/* SSD Update Message */
#define CP_RANDSSD_LEN                     7

/* Status Request Message */
#define CP_QUAL_INFO_TYPE_WIDTH            8
#define CP_QUAL_INFO_LEN_WIDTH             3
#define CP_OP_MODE_WIDTH                   8
#define CP_SR_RSVD_FIELD_WIDTH             3
#define CP_NUM_FIELDS_WIDTH                4

/* Extended Handoff Direction Message */
#define CP_SEARCH_INCLUDED_WIDTH           1
#define CP_HARD_INCLUDED_WIDTH             1
#define CP_PRIVATE_LCM_WIDTH               1
#define CP_RESET_L2_WIDTH                  1
#define CP_RESET_FPC_WIDTH                 1
#define CP_SERV_NEG_TYPE_WIDTH             1
#define CP_NUM_PREAMBLE_WIDTH              3
#define CP_EXT_HO_DIR_ADD_LENGTH_WIDTH     3
#define CP_PWR_COMB_IND_WIDTH              1
#define CP_FOR_FUND_CODE_CHAN_WIDTH        8

/* Global Handoff Direction Message */
/* see also Extended Handoff Direction Message */
#define CP_EXTRA_PARAMETERS_WIDTH          1
#define CP_COMPLETE_SEARCH_WIDTH           1
#define CP_PERIODIC_SEARCH_WIDTH           1
#define CP_FOR_INCLUDED_WIDTH              1
#define CP_FOR_SUP_CONFIG_WIDTH            2
#define CP_NUM_FOR_SUP_WIDTH               3
#define CP_USE_FOR_DURATION_WIDTH          1
#define CP_FOR_DURATION_WIDTH              8
#define CP_REV_INCLUDED_WIDTH              1
#define CP_CLEAR_RETRY_DELAY_WIDTH         1
#define CP_USE_REV_DURATION_WIDTH          1
#define CP_REV_DURATION_WIDTH              8
#define CP_NUM_REV_CODES_WIDTH             3
#define CP_USE_T_ADD_ABORT_WIDTH           1
#define CP_REV_PARMS_INCLUDED_WIDTH        1
#define CP_T_MULCHAN_WIDTH                 3
#define CP_BEGIN_PREAMBLE_WIDTH            3
#define CP_RESUME_PREAMBLE_WIDTH           3

#define CP_FPC_SUBCHAN_GAIN_WIDTH          5
#define CP_USE_PC_TIME_WIDTH               1
#define CP_PC_ACTION_TIME_WIDTH            6
#define CP_RLGAIN_TRAFFIC_PILOT_WIDTH      6
#define CP_DEFAULT_RLAG_WIDTH              1
#define CP_NNSCR_INCLUDED_WIDTH            1
#define CP_REV_FCH_GATING_MODE_WIDTH       1
#define CP_REV_PWR_CNTL_DELAY_INCL_WIDTH   1
#define CP_REV_PWR_CNTL_DELAY_WIDTH        2
/* Universal Handoff Direction Message */
/* see also Global Handoff Direction Message */
#define CP_PARMS_INCL_WIDTH                1
#define CP_NUM_FOR_ASSIGN_WIDTH            2
#define CP_FOR_SCH_DURATION_WIDTH          4
#define CP_FOR_START_TIME_INCL_WIDTH       1
#define CP_SCCL_INDEX_WIDTH                4
#define CP_NUM_REV_ASSIGN_WIDTH            2
#define CP_REV_SCH_DURATION_WIDTH          4
#define CP_REV_START_TIME_INCL_WIDTH       1
#define CP_REV_SCH_RATE_WIDTH              4
#define CP_UN_HO_DIR_NUM_PILOTS_WIDTH      3
#define CP_ACTIVE_SET_REC_LEN_WIDTH        8
#define CP_FOR_SCH_RATE_WIDTH              4
#define CP_WALSH_ID_WIDTH                  1
#define CP_SRCH_OFFSET_WIDTH               3
#define CP_ADD_PILOT_REC_TYPE_WIDTH        3
#define CP_ADD_PILOT_REC_LEN_WIDTH         3
#define CP_CODE_CHAN_FCH_WIDTH             11
#define CP_QOF_MASK_ID_FCH_WIDTH           2
#define CP_CODE_CHAN_DCH_WIDTH             11
#define CP_QOF_MASK_ID_DCH_WIDTH           2
#define CP_NUM_SCH_WIDTH                   5
#define CP_PILOT_INCL_WIDTH                1
#define CP_CODE_CHAN_SCH_WIDTH             11
#define CP_QOF_MASK_ID_SCH_WIDTH           2
#define CP_NUM_HOD_FOR_SCH_WIDTH           5
#define CP_NUM_HOD_REV_SCH_WIDTH           5
#define CP_HOD_CH_IND_WIDTH                3
#define CP_UHDM_NUM_FOR_SCH_WIDTH          5
#define CP_UHDM_NUM_REV_SCH_WIDTH          5
#define CP_UHDM_FOR_SCH_ID_WIDTH           1
#define CP_UHDM_REV_SCH_ID_WIDTH           1

#define CP_T_SLOTTED_INCL_WIDTH            1
#define CP_T_SLOTTED_WIDTH                 8
#define CP_ENC_SUPPORTED_WIDTH             1

#define CP_SERVICE_INCLUDED_WIDTH          1
#define CP_SERV_CON_SEQ_WIDTH              3
#define CP_SUP_CHAN_PARMS_INCLUDED_WIDTH   1
#define CP_USE_PWR_CNTL_STEP_WIDTH         1
#define CP_PWR_CNTL_STEP_WIDTH             3
#define CP_GEN_HO_DIR_NUM_PILOTS_WIDTH     3
#define CP_FPC_SEC_CHAN_WIDTH           1
#define CP_NUM_SUP_CH_WIDTH             2
#define CP_FPC_SCH_FER_WIDTH            5
#define CP_FPC_SCH_MIN_SETPT_WIDTH      8
#define CP_FPC_SCH_MAX_SETPT_WIDTH      8
#define CP_FPC_THRESH_INCL_WIDTH        1
#define CP_FPC_SETPT_THRESH_WIDTH       8
#define CP_FPC_THRESH_SCH_INCL_WIDTH    1
#define CP_FPC_SETPT_THRESH_SCH_WIDTH   8
#define CP_1_BIT_WIDTH                  1
#define CP_2_BITS_WIDTH                 2
#define CP_3_BITS_WIDTH                 3
#define CP_4_BITS_WIDTH                 4
#define CP_5_BITS_WIDTH                 5
#define CP_6_BITS_WIDTH                 6
#define CP_7_BITS_WIDTH                 7
#define CP_8_BITS_WIDTH                 8
#define CP_FOR_SUP_INCLUDED_WIDTH          1
#define CP_EXPL_CODE_CHAN_WIDTH            1
#define CP_BASE_CODE_CHAN_WIDTH            8
#define CP_FOR_SUP_CODE_CHAN_WIDTH         8

#define CP_MUHDM_PLCM_TYPE_INCL_WIDTH   1
#define CP_MUHDM_PLCM_TYPE_WIDTH        4
#define CP_MUHDM_PLCM_39_WIDTH          39

/* Supplemental Channel Assignment Message */
#define CP_USE_RETRY_DELAY_WIDTH           1
#define CP_RETRY_DELAY_WIDTH               8
#define CP_REV_DTX_DURATION_WIDTH          4
#define CP_EXPL_REV_START_TIME_WIDTH       1
#define CP_REV_START_TIME_WIDTH            6
#define CP_USE_REV_HDM_SEQ_WIDTH           1
#define CP_REV_LINKED_HDM_SEQ_WIDTH        2
#define CP_USE_SCRM_SEQ_NUM_WIDTH          1
#define CP_SCRM_SEQ_NUM_WIDTH              4
#define CP_EXPL_FOR_START_TIME_WIDTH       1
#define CP_FOR_START_TIME_WIDTH            6
#define CP_USE_FOR_HDM_SEQ_WIDTH           1
#define CP_FOR_LINKED_HDM_SEQ_WIDTH        2
#define CP_NUM_SUP_PILOTS_WIDTH            3
#define CP_NUM_SUP_WIDTH                   3
#define CP_SUP_CODE_CHAN_WIDTH             8

/* Extended Supplemental Channel Assignment Message */
#define CP_START_TIME_UNIT_WIDTH           3
#define CP_REV_SCH_DTX_DURATION_WIDTH      4

#define CP_NUM_REV_CFG_RECS_WIDTH          5

#define CP_ESCAM_REV_SCH_ID_WIDTH          1
#define CP_REV_WALSH_ID_WIDTH              1
#define CP_REV_SCH_START_TIME_WIDTH        5

#define CP_FOR_SCH_FER_REP_WIDTH           1
#define CP_NUM_FOR_CFG_RECS_WIDTH          5

#define CP_ESCAM_FOR_SCH_ID_WIDTH          1
#define CP_FOR_SCH_RATE                    4
#define CP_NUM_SUP_SHO_WIDTH               3

#define CP_ACTIVE_PILOT_REC_TYPE_WIDTH     3
#define CP_PILOT_RECORD_LEN_WIDTH          3
#define CP_FOR_SCH_CC_INDEX_WIDTH          11

#define CP_FOR_SCH_START_TIME_WIDTH        5

#define CP_FPC_MODE_SCH_WIDTH              3
#define CP_FPC_SCH_INIT_SETPT_OP_WIDTH     1

#define CP_ESCAM_NUM_SUP_WIDTH             2

#define CP_FPC_SCH_INIT_SETPT_WIDTH        8

#define CP_RPC_NUM_SUP_WIDTH               1

#define CP_RLGAIN_SCH_PILOT_WIDTH          6

/* BCY 03/15/01 */
/* Extended Release Message */
#define CP_TRAFFIC_CH_IND_WIDTH            3


#ifdef MTK_DEV_C2K_IRAT
/* Alternative Technologies Information Message*/
#define CP_NUM_RADIO_INTERFACE_WIDTH                 4
#define CP_RADIO_INTERFACE_TYPE_WIDTH                4
#define CP_RADIO_INTERFACE_LEN_WIDTH                 10
#define CP_PRIORITY_INCL_WIDTH                       1
#define CP_SERVING_PRIORITY_WIDTH                    3
#define CP_THRESH_SERVING_WIDTH                      6
#define CP_PER_EARFCN_PARM_INCL_WIDTH                1
#define CP_RX_LEV_MIN_EUTRA_COMMON_WIDTH             7
#define CP_PE_MAX_COMMON_WIDTH                       6
#define CP_RX_LEV_MIN_EUTRA_OFFSET_COMMON_INCL_WIDTH 1
#define CP_RX_LEV_MIN_EUTRA_OFFSET_COMMON_WIDTH      3
#define CP_MAX_RESEL_TIMER_INCL_WIDTH                1
#define CP_MAX_RESEL_TIMER_WIDTH                     4
#define CP_SRCH_BACKOFF_TIMER_INCL_WIDTH             1
#define CP_MIN_MEAS_BACKOFF_WIDTH                    4
#define CP_MAX_MAES_BACKOFF_WIDTH                    4
#define CP_PLMINID_INCL_WIDTH                        1
#define CP_NUM_EUTRA_FREQ_WIDTH                      3
#define CP_EARFCN_WIDTH                              16
#define CP_EARFCN_PRI_WIDTH                          3
#define CP_THRESHX_WIDTH                             5
#define CP_RX_LEV_MIN_EUTRA_WIDTH                    7
#define CP_PE_MAX_WIDTH                              6
#define CP_RX_REV_MIN_EUTRA_OFFSET_INCL_WIDTH        1
#define CP_RX_REV_MIN_EUTRA_OFFSET_WIDTH             3
#define CP_MEAS_BANDWIDTH_WIDTH                      3
#define CP_PLMN_SAME_AS_PREVIOUS_CH_WIDTH            1
#define CP_NUM_PLMNID_WIDTH                          3
#define CP_PLMNID_WIDTH                              24
#endif /* MTK_DEV_C2K_IRAT */

/* Power Control Message */

/* Candidate Frequency Search Request Message */
#define CP_CAND_FREQ_SEARCH_REQ_RSVD1_WIDTH       4
#define CP_CFSRM_SEQ_WIDTH                        2
#define CP_SEARCH_TYPE_WIDTH                      2
#define CP_SEARCH_PERIOD_WIDTH                    4
#define CP_SEARCH_MODE_WIDTH                      4
#define CP_MODE_SPECIFIC_LEN_WIDTH                8
#define CP_ALIGN_TIMING_WIDTH                     1
#define CP_SEARCH_OFFSET_WIDTH                    6
/* Candidate Frequency Search Mode - Multiple CDMA Pilots  */
#define CP_SF_SF_TOTAL_EC_THRESH_WIDTH            5
#define CP_SF_SF_TOTAL_EC_IO_THRESH_WIDTH         5
#define CP_DIFF_RX_PWR_THRESH_WIDTH               5
#define CP_MIN_TOTAL_PILOT_EC_IO_WIDTH            5
#define CP_CF_T_ADD_WIDTH                         6
#define CP_CF_WAIT_TIME_WIDTH                     4
#define CP_CAND_FREQ_SEARCH_REQ_RSVD2_WIDTH       5
#define CP_PILOT_UPDATE_WIDTH                     1
#define CP_CF_SRCH_MULT_CDMA_PILOTS_FIXED_WIDTH         \
                (CP_BAND_CLASS_WIDTH                  + \
                 CP_CDMA_FREQ_WIDTH                   + \
                 CP_SF_RX_PWR_THRESH_WIDTH            + \
                 CP_DIFF_RX_PWR_THRESH_WIDTH          + \
                 CP_MIN_TOTAL_PILOT_EC_IO_WIDTH       + \
                 CP_CF_T_ADD_WIDTH                    + \
                 CP_CF_WAIT_TIME_WIDTH                + \
                 CP_PILOT_INC_WIDTH                + \
                 CP_SRCH_WIN_N_WIDTH               + \
                 CP_SRCH_WIN_R_WIDTH               + \
                 CP_CAND_FREQ_SEARCH_REQ_RSVD2_WIDTH  + \
                 CP_PILOT_UPDATE_WIDTH)
#define CP_CFSR_NUM_PILOTS_WIDTH                  6
#define CP_CF_NGHBR_SRCH_MODE_WIDTH               2
#define CP_SEARCH_SET_WIDTH                       1
#define CP_CF_PILOT_REC_WIDTH                           \
                (CP_NGHBR_PN_WIDTH                    + \
                 CP_SEARCH_SET_WIDTH                  + \
                 CP_SEARCH_PRIORITY_WIDTH             + \
                 CP_SRCH_WIN_NGHBR_WIDTH)
#define CP_CF_SRCH_OFFSET_INCL_WIDTH              1
/* Candidate Frequency Search Mode - Analog Channels on Multiple frequencies */
#define CP_CAND_FREQ_SEARCH_REQ_RSVD4_WIDTH       3
#define CP_NUM_ANALOG_FREQS_WIDTH                 3
#define CP_CF_SRCH_MULT_ANALOG_CHANS_FIXED_WIDTH        \
                (CP_BAND_CLASS_WIDTH                  + \
                 CP_SF_RX_PWR_THRESH_WIDTH            + \
                 CP_CAND_FREQ_SEARCH_REQ_RSVD4_WIDTH  + \
                 CP_NUM_ANALOG_FREQS_WIDTH)

/* Candidate Frequency Search Control Message */
#define CP_CFSCM_SEQ_WIDTH                 2


/* Power Up Function Message */
#define CP_ACTION_TIME_FRAME_WIDTH         2
#define CP_PUF_SETUP_SIZE_WIDTH            6
#define CP_PUF_PULSE_SIZE_WIDTH            7
#define CP_PUF_INTERVAL_WIDTH              10
#define CP_PUF_INIT_PWR_WIDTH              6
#define CP_PUF_PWR_STEP_WIDTH              5
#define CP_TOTAL_PUF_PROBES_WIDTH          4
#define CP_MAX_PWR_PUF_WIDTH               4
#define CP_PUF_FREQ_INCL_WIDTH             1

/* Power Up Function Completion Message */
#define CP_PWR_UP_FUNC_COMP_RSVD_WIDTH     6
#define CP_LOC_IND_WIDTH                   1
#define CP_PWR_UP_FUNC_COMP_RSVD1_WIDTH    3
#define CP_MS_LAT_WIDTH                    22
#define CP_MS_LONG_WIDTH                   23
#define CP_MS_LOC_TSTAMP                   24

/***************************************************************************/
/********* Reverse Traffic Channel Message field width definitions *********/
/***************************************************************************/
/* RTC Order Message */
#define CP_RTC_ORDER_RSVD_WIDTH            6

#define CP_RTC_CON_REF_INCL_WIDTH          1
#define CP_RTC_CON_REF_WIDTH               8

#define CP_RTC_ORDER_FIXED_FIELD_WIDTH \
                    (CP_COMMON_FIELD_WIDTH + \
             CP_ORDER_WIDTH + \
             CP_ADD_RECORD_LEN_WIDTH)

#define CP_TC_ACK_ORDER_LENGTH_BYTES       7

/* Base Station Challenge Order */
#define BS_CHALLENGE_ADD_REC_LEN           5

/* Service Option Request/Response Order */
#define CP_SERVICE_OPTION_ADD_REC_LEN             3

/* Mobile Station Reject Order */
#define CP_REJECTED_TYPE_WIDTH                    8
#define CP_REJECTED_ORDER_WIDTH                   8
#define CP_REJECTED_ODRQ_WIDTH                    8
#define CP_REJECTED_PARAM_ID_WIDTH                16
#define CP_REJECTED_RECORD_WIDTH                  8
#define CP_REJECTED_TAG_WIDTH                     4
#define CP_REJECTED_PDU_TYPE_WIDTH                2
#define CP_MS_REJECT_REJ_CON_REF_REC_LEN          3
#define CP_MS_REJECT_REJ_TAG_REC_LEN              4
#define CP_MS_REJECT_REJ_MSG_ADD_REC_LEN          3
#define CP_MS_REJECT_REJ_ORDER_ADD_REC_LEN        5
#define CP_MS_REJECT_REJ_PARAM_ADD_REC_LEN        5
#define CP_MS_REJECT_REJ_RECORD_ADD_REC_LEN       3

/* Authentication Challenge Response Message */
#define CP_AUTH_CHAL_RESP_RSVD_WIDTH              5


/* Flash With Info Message */
#define CP_RTC_FLASH_WITH_INFO_RSVD_WIDTH         7


/* Data Burst Message */
#define CP_DATA_BURST_RSVD_WIDTH                  1


/* Pilot Strength Measurement Message */
#define CP_KEEP_WIDTH                             1


/* Power Measurement Report Message */
#define CP_ERRORS_DETECTED_WIDTH                  5
#define CP_PWR_MEAS_FRAMES_WIDTH                  10
#define CP_LAST_HDM_SEQ_WIDTH                     2
#define CP_SF_RX_PWR_THRESH_WIDTH                 5
#define CP_PWR_MEAS_REP_NUM_PILOTS_WIDTH          4
#define CP_DCCH_PWR_MEAS_INCL_WIDTH               1
#define CP_DCCH_PWR_MEAS_FRAMES_WIDTH             10
#define CP_DCCH_ERRORS_DETECTED_WIDTH             5
#define CP_PMRM_SCH_PWR_MEAS_INCL_WIDTH           1
#define CP_PMRM_SCH_ID_WIDTH                      1
#define CP_SCH_ERRORS_DETECTED_WIDTH              10
#define CP_SCH_PWR_MEAS_FRAMES_WIDTH              16
#define CP_PILOT_REC_INCL_WIDTH                                         1
#define CP_SETPT_INCL_WIDTH                                                 1
#define CP_REF_PILOT_REC_INCL_WIDTH                                 1
#define CP_RESQ_IND_INCL_WIDTH                                          1

#define CP_FCH_INCL_WIDTH                         1
#define CP_FPC_FCH_CURR_SETPT_WIDTH               8
#define CP_DCCH_INCL_WIDTH                        1
#define CP_FPC_DCCH_CURR_SETPT_WIDTH              8
#define CP_FPC_SCH_CURR_SETPT_WIDTH               8

/* Origination Continuation Message */
#define CP_ASCII_DTMF_DIGIT_WIDTH                 8
/* A. Kulkarni. 09/25/01. */
#define CP_DTMF_DIGIT_WIDTH                       4
/* A. Kulkarni. End. */

/* Parameters Response Message */
#define CP_PARAMETER_LEN_WIDTH                    10

/* Status Response Message */
#define CP_SR_QIT_NONE_LENGTH                     0
#define CP_SR_QIT_BAND_CLASS_LENGTH               1
#define CP_SR_QIT_BAND_CLASS_AND_OP_MODE_LENGTH   2
#define CP_SR_RESERVED_WIDTH                      3
#define CP_TC_SR_RESERVED_WIDTH                   4
#define CP_NUM_INFO_RECORDS_WIDTH                 4
#define CP_BAND_CLASS_BIT_FIELD_WIDTH             1


/* Capability Information Record                 */
#define CP_GATING_RATE_SET_WIDTH                  2
#define CP_RLP_CAP_BLOP_LEN_WIDTH                 3
#define CP_MAX_MS_NAK_ROUNDS_FWD_WIDTH            3
#define CP_MAX_MS_NAK_ROUNDS_REV_WIDTH            3

/* Ch Configuration Capability Information Record*/
#define CP_FOR_SCH_LEN                            3
#define CP_FOR_SCH_RC_MAP                         3
#define CP_FOR_SCH_NUM                            2
#define CP_REV_SCH_LEN                            3
#define CP_REV_SCH_RC_MAP                         3
#define CP_REV_SCH_NUM                            2
#define CP_MAX_TURBO_BLOCK_SIZE_WIDTH             4
#define CP_MAX_CONV_BLOCK_SIZE_WIDTH              4
#define CP_FOR_MAX_RATE_WIDTH                     4
#define CP_FOR_MAX_RATE                           4
#define CP_REV_MAX_RATE_WIDTH                     4
#define CP_REV_MAX_RATE                           4

/* Extended Multiplex Option Information Record  */
#define CP_NUM_MO_FCH_WIDTH                       4
#define CP_MO_FCH_WIDTH                          16
#define CP_RATES_FCH_WIDTH                        8

#define CP_NUM_MO_DCCH_WIDTH                      4
#define CP_MO_DCCH_WIDTH                         16

#define CP_NUM_MO_SCH_WIDTH                       4
#define CP_SCH_ID_WIDTH                           1
#define CP_MO_SCH_WIDTH                          16
#define CP_GEO_LOC_WIDTH                          3

#define CP_NUM_MO_FOR_PDCH_WIDTH                  4
#define CP_NUM_MO_FOR_PDCH                        1
#define CP_MO_PDCH_WIDTH                         16

/* TMSI Assignment Completion Message */
#define CP_TMSI_ASSIGN_COMP_RSVD_WIDTH            7


/* Supplemental Channel Request Message */
#define CP_SIZE_OF_REQ_BLOB_WIDTH                 4
#define CP_DURATION_UNIT_WIDTH                    3
#define CP_NUM_REQ_WIDTH                          3
#define CP_SCRM_RESERVED_WIDTH                    2
#define CP_PREFERRED_RATE_WIDTH                   4
#define CP_DURATION_WIDTH                         9
#define CP_REF_PN_WIDTH                           9
#define CP_NUM_ACT_PN_WIDTH                       3
#define CP_ACT_PN_PHASE_WIDTH                     15
#define CP_ACT_PILOT_STRENGTH_WIDTH               6
#define CP_NUM_NGHBR_PN_WIDTH                     3
#define CP_PILOT_REC_TYPE_WIDTH                   3

/* Candidate Frequency Search Response Message */
#define CP_TOTAL_OFF_TIME_FWD_WIDTH               6
#define CP_MAX_OFF_TIME_FWD_WIDTH                 6
#define CP_TOTAL_OFF_TIME_REV_WIDTH               6
#define CP_MAX_OFF_TIME_REV_WIDTH                 6
#define CP_PCG_OFF_TIMES_WIDTH                    1
#define CP_ALIGN_TIMING_USED_WIDTH                1
#define CP_MAX_NUM_VISITS_WIDTH                   5

/* Candidate Frequency Search Report Message */
#define CP_LAST_SRCH_MSG_WIDTH                    1
#define CP_CAND_FREQ_SRCH_REPORT_FIXED_FIELD_WIDTH  \
                (CP_COMMON_FIELD_WIDTH  + \
                         CP_LAST_SRCH_MSG_WIDTH + \
                 CP_CFSRM_SEQ_WIDTH     + \
                 CP_SEARCH_MODE_WIDTH   + \
                         CP_MODE_SPECIFIC_LEN_WIDTH)
#if ((CP_CAND_FREQ_SRCH_REPORT_FIXED_FIELD_WIDTH%8) != 0)
#error "CAND_FREQ_SRCH_REPORT_FIXED_FIELD_WIDTH \
        not an integral number of octets"
#endif
/* Candidate Frequency Search Mode - Multiple CDMA Pilots  */
#define CP_SF_TOTAL_RX_PWR_WIDTH                  5
#define CP_CF_TOTAL_RX_PWR_WIDTH                  5
#define CP_CAND_FREQ_SRCH_REPORT_RSVD1_WIDTH      1
#define CP_CAND_FREQ_SRCH_REPORT_RSVD2_WIDTH      3
/* Candidate Frequency Search Mode - Analog Channels on Multiple frequencies */
#define CP_CAND_FREQ_SRCH_REPORT_RSVD3_WIDTH      5
#define CP_SIGNAL_STRENGTH_WIDTH                  6

/* Resource Release Request Message */
#define CP_GATING_DISCONNECT_IND_WIDTH            1


/****************************************************************************/
/*  (FCCCH) Forward Common Control Channel Message field width definitions  */
/****************************************************************************/
#define CP_FCCCH_PD_WIDTH        2
#define CP_FCCCH_MSG_ID_WIDTH     6
#define CP_FCCCH_MSG_TYPE_WIDTH  CP_FCCCH_PD_WIDTH +  CP_FCCCH_MSG_ID_WIDTH /* MSG_TYPE = PD 2 bit and MSG_ID 6 bit */



/****************************************************************************/
/*  (BCCH) Forward Common Control Channel Message field width definitions   */
/****************************************************************************/
#define CP_BCCH_PD_WIDTH         2
#define CP_BCCH_MSG_ID_WIDTH     6
#define CP_BCCH_MSG_TYPE_WIDTH   CP_BCCH_PD_WIDTH +  CP_BCCH_MSG_ID_WIDTH /* MSG_TYPE = PD 2 bit and MSG_ID 6 bit */



/****************************************************************************/
/********************************* Orders ***********************************/
/****************************************************************************/

/* FTC Base Station Challenge Confirmation Order */
#define CP_AUTHBS_OFFSET \
                      (CP_COMMON_FIELD_WIDTH    + \
                       CP_USE_TIME_WIDTH        + \
                       CP_ACTION_TIME_WIDTH     + \
                               CP_ORDER_WIDTH           + \
                               CP_ADD_RECORD_LEN_WIDTH  + \
                       CP_ORDQ_WIDTH)
#define CP_BS_CHALLENGE_CONF_ORDER_RSVD_WIDTH     6

/* FTC Service Option Request Order */
/* FTC Service Option Response Order */
#define CP_SERVICE_OPTION_OFFSET \
                      (CP_COMMON_FIELD_WIDTH    + \
                       CP_USE_TIME_WIDTH        + \
                       CP_ACTION_TIME_WIDTH     + \
                               CP_ORDER_WIDTH           + \
                               CP_ADD_RECORD_LEN_WIDTH  + \
                       CP_ORDQ_WIDTH)

/* FTC Retry Order */
#define CP_RETRY_ORDER_OFFSET \
                      (CP_USE_TIME_WIDTH        + \
                       CP_ACTION_TIME_WIDTH     + \
                       CP_ORDER_WIDTH           + \
                       CP_ADD_RECORD_LEN_WIDTH  + \
                       CP_ORDQ_WIDTH)

/****************************************************************************/
/********************************* Records **********************************/
/****************************************************************************/

/* Forward Record field width definitions */

/* Called Party Number Record */
#define CP_CALLED_PARTY_NUMBER_REC_RSVD_FIELD_WIDTH     1

#define CP_CALLED_PARTY_NUMBER_REC_FIXED_FIELD_WIDTH \
                (CP_NUMBER_TYPE_WIDTH + \
         CP_NUMBER_PLAN_WIDTH + \
                 CP_CALLED_PARTY_NUMBER_REC_RSVD_FIELD_WIDTH)
#if ((CP_CALLED_PARTY_NUMBER_REC_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_CALLED_PARTY_NUMBER_REC_FIXED_FIELD_WIDTH \
        not an integral number of octets"
#endif


/* Calling Party Number Record */
#define CP_PI_WIDTH  2
#define CP_SI_WIDTH  2
#define CP_CALLING_PARTY_NUMBER_REC_RSVD_FIELD_WIDTH     5

#define CP_CALLING_PARTY_NUMBER_REC_FIXED_FIELD_WIDTH \
                (CP_NUMBER_TYPE_WIDTH + \
         CP_NUMBER_PLAN_WIDTH + \
                 CP_PI_WIDTH + \
                 CP_SI_WIDTH + \
                 CP_CALLING_PARTY_NUMBER_REC_RSVD_FIELD_WIDTH)
#if ((CP_CALLING_PARTY_NUMBER_REC_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_CALLING_PARTY_NUMBER_REC_FIXED_FIELD_WIDTH \
        not an integral number of octets"
#endif


/* Signal Record */
#define CP_SIGNAL_TYPE_WIDTH               2
#define CP_SIGNAL_PITCH_WIDTH              2
#define CP_SIGNAL_SIGNAL_WIDTH             6
#define CP_SIGNAL_REC_RSVD_FIELD_WIDTH     6

#define CP_SIGNAL_REC_FIXED_FIELD_WIDTH \
                (CP_SIGNAL_TYPE_WIDTH + \
                 CP_SIGNAL_PITCH_WIDTH + \
                 CP_SIGNAL_SIGNAL_WIDTH + \
                 CP_SIGNAL_REC_RSVD_FIELD_WIDTH)
#if ((CP_SIGNAL_REC_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_SIGNAL_REC_FIXED_FIELD_WIDTH \
        not an integral number of octets"
#endif

/* Signal Record */
#define CP_MSG_COUNT_WIDTH  8

/* Service Configuration Record */
#define CP_FOR_MUX_OPTION_WIDTH                 16
#define CP_REV_MUX_OPTION_WIDTH                 16
#define CP_FOR_NUM_BITS_WIDTH                   8
#define CP_REV_NUM_BITS_WIDTH                   8

/* Forward Fundamental Channel */
#define CP_FPC_INCL_WIDTH                       1
#define CP_FPC_PRI_CHAN_WIDTH                   1
#define CP_FPC_MODE_WIDTH                       3
#define CP_FPC_OLPC_FCH_INCL_WIDTH              1
#define CP_FPC_FCH_FER_WIDTH                    5
#define CP_FPC_FCH_MIN_SET_PT_WIDTH             8
#define CP_FPC_FCH_MAX_SET_PT_WIDTH             8
#define CP_GATING_RATE_INCL_WIDTH               1
#define CP_PILOT_GATING_RATE_WIDTH              2

#define CP_FOR_SCH_INCL_WIDTH                   1
#define CP_NUM_FOR_SCH_WIDTH                    2
#define CP_FOR_SCH_ID_WIDTH                     2
#define CP_FOR_SCH_FRAME_OFFSET_WIDTH           2
#define CP_REV_SCH_INCL_WIDTH                   1
#define CP_NUM_REV_SCH_WIDTH                    2
#define CP_REV_SCH_ID_WIDTH                     2
#define CP_REV_SCH_FRAME_OFFSET_WIDTH           2
#define CP_LOGICAL_RESOURCE_WIDTH               4
#define CP_PHYSICAL_RESOURCE_WIDTH              4
#define CP_FORWARD_FLAG_WIDTH                   1
#define CP_REVERSE_FLAG_WIDTH                   1
#define CP_PRIORITY_WIDTH                       4
#define CP_LPM_IND_WIDTH                        2
#define CP_NUM_LPM_ENTRIES_WIDTH                4
#define CP_IS2K_REV0_RESERVED_WIDTH             2

#define CP_FCH_CC_INCL_WIDTH                    1

#define CP_FOR_FCH_RC_WIDTH                     5
#define CP_REV_FCH_RC_WIDTH                     5

/* Dedicated Control Channel */
#define CP_DCCH_CC_INCL_WIDTH                   1
#define CP_FOR_SCH_CC_INCL_WIDTH                1
#define CP_REV_SCH_CC_INCL_WIDTH                1

#define CP_DCCH_FCH_RC_WIDTH                    5
#define CP_DCCH_REV_RC_WIDTH                    5

#define CP_FPC_OLPC_DCCH_INCL_WIDTH             1
#define CP_FPC_DCCH_FER_WIDTH                   5
#define CP_FPC_DCCH_MIN_SET_PT_WIDTH            8
#define CP_FPC_DCCH_MAX_SET_PT_WIDTH            8
#define CP_FOR_RATES_WIDTH                      8
#define CP_REV_RATES_WIDTH                      8
#define CP_NUM_CON_REC_WIDTH                    8
#define CP_SERVICE_CONNECTION_RECORD_LEN_WIDTH  8
#define CP_UI_ENCRYPT_MODE_WIDTH                3
#define CP_RLP_INFO_INCL_WIDTH	                1
#define CP_RLP_BLOB_LEN_WIDTH	                4
#define CP_CON_REF_WIDTH                        8
#define CP_FOR_TRAFFIC_WIDTH                    4
#define CP_REV_TRAFFIC_WIDTH                    4
#define CP_FOR_DCCH_RC_WIDTH                    5
#define CP_REV_DCCH_RC_WIDTH                    5

#define CP_SERVICE_CONFIGURATION_REC_FIXED_FIELD_WIDTH \
                (CP_FOR_MUX_OPTION_WIDTH + \
                 CP_REV_MUX_OPTION_WIDTH + \
                 CP_FOR_RATES_WIDTH + \
                 CP_REV_RATES_WIDTH + \
                 CP_NUM_CON_REC_WIDTH)
#if ((CP_SERVICE_CONFIGURATION_REC_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_SERVICE_CONFIGURATION_REC_FIXED_FIELD_WIDTH \
        not an integral number of octets"
#endif

/* T53 National Supplementary Services */
#define CP_NSS_RECORD_SUBTYPE_WIDTH 6
#define CP_NSS_REC_FIXED_FIELD_WIDTH \
                (CP_MCC_WIDTH + \
                 CP_NSS_RECORD_SUBTYPE_WIDTH)
#if ((CP_NSS_REC_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_NSS_REC_FIXED_FIELD_WIDTH \
        not an integral number of octets"
#endif

#define CP_NSS_CLIR_CAUSE_WIDTH 8
#define CP_NSS_CLIR_REC_FIXED_FIELD_WIDTH \
              (CP_NSS_REC_FIXED_FIELD_WIDTH + \
               CP_NSS_CLIR_CAUSE_WIDTH)
#if ((CP_NSS_CLIR_REC_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_NSS_CLIR_REC_FIXED_FIELD_WIDTH \
        not an integral number of octets"
#endif

#define CP_NSS_AUDIO_CONTROL_WIDTH         2
#define CP_AUDIO_CONTROL_RSVD_FIELD_WIDTH  4
#define CP_NSS_AUDIO_CONTROL_REC_FIXED_FIELD_WIDTH \
              (CP_NSS_REC_FIXED_FIELD_WIDTH + \
               CP_NSS_AUDIO_CONTROL_WIDTH   + \
               CP_NSS_AUDIO_CONTROL_WIDTH   + \
               CP_AUDIO_CONTROL_RSVD_FIELD_WIDTH)
#if ((CP_NSS_AUDIO_CONTROL_REC_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_NSS_AUDIO_CONTROL_REC_FIXED_FIELD_WIDTH \
        not an integral number of octets"
#endif

/* Reverse Record field width definitions */
/* BCY 04/30/01 */
/* Supplemental Channel Type-specific fields */
#define CP_SCH_REC_LEN_WIDTH                   4
#define CP_SCH_RC_WIDTH                        5
#define CP_CODING_WIDTH                        1
#define CP_SCH_REC_RESERVED_WIDTH              6
#define CP_FOR_SCH_MUX_WIDTH                   16
#define CP_REV_SCH_MUX_WIDTH                   16

/* RLP BLOB fields */
#define CP_RLP_BLOB_TYPE_WIDTH                 3
#define CP_RLP_VERSION_WIDTH                   3
#define CP_RLP_RTT_WIDTH                       4
#define CP_RLP_INIT_VAR_WIDTH                  1
#define CP_RLP_BS_EXT_SEQ_M_WIDTH              18
#define CP_RLP_MS_EXT_SEQ_M_WIDTH              18
#define CP_RLP_MAX_MS_NAK_ROUNDS_FWD_WIDTH     3
#define CP_RLP_MAX_MS_NAK_ROUNDS_REV_WIDTH     3
#define CP_RLP_NAK_ROUNDS_FWD_WIDTH            3
#define CP_RLP_NAK_ROUNDS_REV_WIDTH            3
#define CP_RLP_NAK_PER_ROUND_FWD_WIDTH         3
#define CP_RLP_NAK_PER_ROUND_REV_WIDTH         3
#define CP_RLP_NAK_DDW_WIDTH                          8
#define CP_RLP_NAK_REXMIT_TIMER_WIDTH            8


/* Meter Pulses Record */
#define CP_PULSE_FREQUENCY_WIDTH              11
#define CP_PULSE_ON_OFF_TIME_WIDTH            8
#define CP_PULSE_COUNT_WIDTH                  4
#define CP_METER_PULSES_REC_RSVD_FIELD_WIDTH  1
#define CP_METER_PULSES_REC_FIXED_FIELD_WIDTH \
          ( CP_PULSE_FREQUENCY_WIDTH + \
            CP_PULSE_ON_OFF_TIME_WIDTH + \
            CP_PULSE_ON_OFF_TIME_WIDTH + \
            CP_PULSE_COUNT_WIDTH + \
            CP_METER_PULSES_REC_RSVD_FIELD_WIDTH )


/* Parametric Alerting Record */
#define CP_CADENCE_COUNT_WIDTH                8
#define CP_NUM_GROUPS_WIDTH                   4
#define CP_AMPLITUDE_WIDTH                    8
#define CP_FREQ_WIDTH                         10
#define CP_ON_OFF_TIME_WIDTH                  8
#define CP_REPEAT_WIDTH                       4
#define CP_DELAY_WIDTH                        8
#define CP_PARAMETRIC_ALERTING_REC_RSVD_FIELD_WIDTH  4
#define CP_PARAMETRIC_ALERTING_REC_FIXED_FIELD_WIDTH \
          ( CP_CADENCE_COUNT_WIDTH + \
            CP_NUM_GROUPS_WIDTH + \
            CP_PARAMETRIC_ALERTING_REC_RSVD_FIELD_WIDTH )

/* Line Control Record */
#define CP_POLARITY_INCLUDED_WIDTH            1
#define CP_TOGGLE_MODE_WIDTH                  1
#define CP_REVERSE_POLARITY_WIDTH             1
#define CP_POWER_DENIAL_TIME_WIDTH            8
#define CP_LINE_CONTROL_REC_FIXED_FIELD_WIDTH \
          ( CP_POLARITY_INCLUDED_WIDTH + \
            CP_POWER_DENIAL_TIME_WIDTH + \
            7 )    /* RESERVED */        /* minimum size of the record */

/* Extended Display Record */
#define CP_EXT_DISPLAY_IND_WIDTH              1
#define CP_DISPLAY_TYPE_WIDTH                 7
#define CP_DISPLAY_TAG_WIDTH                  8
#define CP_DISPLAY_LEN_WIDTH                  8
#define CP_EXTENDED_DISPLAY_REC_FIXED_FIELD_WIDTH \
          ( CP_EXT_DISPLAY_IND_WIDTH + \
            CP_DISPLAY_TYPE_WIDTH + \
            CP_DISPLAY_TAG_WIDTH + \
            CP_DISPLAY_LEN_WIDTH )       /* minimum size of the record */


/* Redirecting Number Record */
#define CP_EXTENSION_BIT_1_WIDTH              1
                            /* CP_NUMBER_TYPE_WIDTH and CP_NUMBER_PLAN_WIDTH */
                            /* declared in Origination Message */
#define CP_EXTENSION_BIT_2_WIDTH              1
                            /* CP_PI_WIDTH and CP_SI_WIDTH declared in */
                            /* Calling Party Number Record */
#define CP_REDIRECTING_NUMBER_RSVD_1_WIDTH    3
#define CP_EXTENSION_BIT_3_WIDTH              1
#define CP_REDIRECTING_NUMBER_RSVD_2_WIDTH    3
#define CP_REDIRECTION_REASON_WIDTH           4
#define CP_REDIRECTING_NUMBER_REC_FIXED_FIELD_WIDTH \
          ( CP_EXTENSION_BIT_1_WIDTH + \
            CP_NUMBER_TYPE_WIDTH + \
            CP_NUMBER_PLAN_WIDTH )       /* minimum size of the record */



/* Reverse Record field width definitions */

/* Feature Indicator Record */
#define CP_FEATURE_WIDTH                       4
#define CP_FEATURE_INDICATOR_REC_RSVD_WIDTH    4

#define CP_FEATURE_INDICATOR_REC_FIXED_FIELD_WIDTH \
                               (CP_FEATURE_WIDTH + \
                CP_FEATURE_INDICATOR_REC_RSVD_WIDTH)
#if ((CP_FEATURE_INDICATOR_REC_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_FEATURE_INDICATOR_REC_FIXED_FIELD_WIDTH \
        not an integral number of octets"
#endif

/* Keypad Facility Record */

/* Called Party Number Record */
  /* See Forward records */

/* Calling Party Number Record */
  /* See Forward records */

/* Call Mode Record */
#define CP_ORIG_MODE_WIDTH                     1
#define CP_CALL_MODE_REC_RSVD_FIELD_WIDTH      7
#define CP_CALL_MODE_REC_FIXED_FIELD_WIDTH      \
                 (CP_ORIG_MODE_WIDTH          + \
                  CP_SERVICE_OPTION_WIDTH     + \
                  CP_SERVICE_OPTION_WIDTH     + \
          CP_CALL_MODE_REC_RSVD_FIELD_WIDTH)
#if ((CP_CALL_MODE_REC_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_CALL_MODE_REC_FIXED_FIELD_WIDTH \
        not an integral number of octets"
#endif

/* Terminal Information Record */
#define CP_MOB_MFG_CODE_WIDTH                  8
#define CP_MOB_MODEL_WIDTH                     8
#define CP_MOB_FIRM_REV_WIDTH                  16
#define CP_MOB_LOCAL_CTRL_WIDTH                1
#define CP_MOB_SLOT_CYCLE_INDEX_WIDTH          3
#define CP_TERMINAL_INFO_RSVD_WIDTH            4
#define CP_TERMINAL_INFO_REC_FIXED_FIELD_WIDTH     \
                 (CP_P_REV_WIDTH                 + \
                  CP_MOB_MFG_CODE_WIDTH          + \
                  CP_MOB_MODEL_WIDTH             + \
                  CP_MOB_FIRM_REV_WIDTH          + \
                  CP_SCM_WIDTH                   + \
                  CP_MOB_LOCAL_CTRL_WIDTH        + \
                  CP_MOB_SLOT_CYCLE_INDEX_WIDTH  + \
          CP_TERMINAL_INFO_RSVD_WIDTH)
#if ((CP_TERMINAL_INFO_REC_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_TERMINAL_INFO_REC_FIXED_FIELD_WIDTH  \
        not an integral number of octets"
#endif

/* Security Status Record */
#define CP_ENCRYPT_MODE_WIDTH                    2
#define CP_SECURITY_STATUS_REC_RSVD_FIELD_WIDTH  3
#define CP_SECURITY_STATUS_REC_FIXED_FIELD_WIDTH   \
                 (CP_AUTH_MODE_WIDTH             + \
                  CP_ENCRYPT_MODE_WIDTH          + \
                  CP_PRIVATE_LCM_WIDTH           + \
          CP_SECURITY_STATUS_REC_RSVD_FIELD_WIDTH)
#if ((CP_TERMINAL_INFO_REC_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_TERMINAL_INFO_REC_FIXED_FIELD_WIDTH  \
        not an integral number of octets"
#endif

/* Power Class Information Record */
#define CP_MAX_EIRP_WIDTH                      8

/* Call Waiting Indicator Record*/
#define CP_CALL_WAITING_INDICATOR_WIDTH      1
#define CP_CALL_WAITING_INDICATOR_REC_RSVD_WIDTH    7
#define CP_CALL_WAITING_INDICATOR_REC_FIXED_FIELD_WIDTH \
                               (CP_CALL_WAITING_INDICATOR_WIDTH + \
                CP_CALL_WAITING_INDICATOR_REC_RSVD_WIDTH)
#if ((CP_CALL_WAITING_INDICATOR_REC_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_CALL_WAITING_INDICATOR_WIDTH \
        not an integral number of octets"
#endif

/* Service Option Information Record */
#define CP_SERV_OPT_INFO_RSVD_WIDTH            6
#define CP_SERV_OPT_SUPPORT_WIDTH              1
#define CP_SERV_OPTION_INFO_REC_FIXED_FIELD_WIDTH \
                 (CP_SERV_OPT_INFO_RSVD_WIDTH        + \
                  CP_SERV_OPT_SUPPORT_WIDTH          + \
          CP_SERV_OPT_SUPPORT_WIDTH          + \
          CP_SERVICE_OPTION_WIDTH)
#if ((CP_SERV_OPTION_INFO_REC_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_SERV_OPTION_INFO_REC_FIXED_FIELD_WIDTH \
        not an integral number of octets"
#endif

/* Multiplex Option Information Record */
#define CP_MULTIPLEX_OPTION_WIDTH             16
#define CP_MUX_OPTION_INFO_REC_FIXED_FIELD_WIDTH \
                 (CP_MULTIPLEX_OPTION_WIDTH          + \
                  CP_FOR_RATES_WIDTH                 + \
          CP_REV_RATES_WIDTH)
#if ((CP_MUX_OPTION_INFO_REC_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_MUX_OPTION_INFO_REC_FIXED_FIELD_WIDTH \
        not an integral number of octets"
#endif


/* Service Configuration Record */
#define CP_SERV_CFG_HEADER_FIXED_FIELD_WIDTH \
                           (CP_FOR_MUX_OPTION_WIDTH   + \
                CP_REV_MUX_OPTION_WIDTH   + \
                CP_FOR_RATES_WIDTH        + \
                CP_REV_RATES_WIDTH        + \
                CP_NUM_CON_REC_WIDTH)
#if ((CP_SERV_CFG_HEADER_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_SERV_CFG_HEADER_FIXED_FIELD_WIDTH \
        not an integral number of octets"
#endif

#define CP_SERV_CFG_CON_REC_FIXED_FIELD_WIDTH \
                 (CP_SERVICE_CONNECTION_RECORD_LEN_WIDTH  + \
                  CP_CON_REF_WIDTH                        + \
          CP_SERVICE_OPTION_WIDTH                 + \
          CP_FOR_TRAFFIC_WIDTH                    + \
          CP_REV_TRAFFIC_WIDTH)
#if ((CP_SERV_CFG_CON_REC_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_SERV_CFG_CON_REC_FIXED_FIELD_WIDTH \
        not an integral number of octets"
#endif

/* Subaddress Record */
#define CP_EXTENSION_BIT_WIDTH                 1
#define CP_SUBADDRESS_TYPE_WIDTH               3
#define CP_ODD_EVEN_INDICATOR_WIDTH            1
#define CP_SUBADDRESS_RSVD_WIDTH               3
#define CP_SUBADDRESS_REC_FIXED_FIELD_WIDTH \
       (CP_EXTENSION_BIT_WIDTH            + \
        CP_SUBADDRESS_TYPE_WIDTH          + \
          CP_ODD_EVEN_INDICATOR_WIDTH       + \
          CP_SUBADDRESS_RSVD_WIDTH)
#if ((CP_SUBADDRESS_REC_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_SUBADDRESS_REC_FIXED_FIELD_WIDTH \
        not an integral number of octets"
#endif

/* Power Control Information Record */
#define CP_MIN_PWR_CNTL_STEP_WIDTH             3
#define CP_PWR_CNTL_INFO_RSVD_WIDTH            5
#define CP_PWR_CNTL_INFO_FIXED_FIELD_WIDTH \
       (CP_MIN_PWR_CNTL_STEP_WIDTH       + \
          CP_PWR_CNTL_INFO_RSVD_WIDTH)
#if ((CP_PWR_CNTL_INFO_FIXED_FIELD_WIDTH%8) != 0)
#error "CP_PWR_CNTL_INFO_FIXED_FIELD_WIDTH \
        not an integral number of octets"
#endif



/* Roaming Information */
#define CP_ROAMING_ACCOLC_WIDTH           4
#define CP_MOB_TERM_HOME_WIDTH            1
#define CP_MOB_TERM_FOR_SID_WIDTH         1
#define CP_MOB_TERM_FOR_NID_WIDTH         1

/* Enhanced Roaming Indicators (ERI) */
#define CP_ERI_VERSION_WIDTH              16
#define CP_ERI_NUM_ENTRIES_WIDTH           6
#define CP_ERI_TYPE_WIDTH                  3
#define CP_NUM_ICON_IMAGES_WIDTH           4
#define CP_ICON_IMAGE_TYPE_WIDTH           3
#define CP_ERI_INDICATOR_ID_WIDTH          8
#define CP_ERI_ICON_IMAGE_ID_WIDTH         4
#define CP_ERI_ICON_MODE_WIDTH             2
#define CP_ERI_CALL_PROMPT_ID_WIDTH        2
#define CP_ERI_ALERT_CALL_COUNTER_ID_WIDTH 3
#define CP_ERI_CHAR_ENCODING_TYPE_WIDTH    5
#define CP_ERI_TEXT_LENGTH_WIDTH           8
#define CP_ERI_RESERVED_FOR_CALL_PROMPT_TABLE_WIDTH 96

/* MEID record */
#define CP_MEID_LENGTH_WIDTH               4
#define CP_MEID_WIDTH                      56
#define CP_MEID_ME_LENGTH_WIDTH            4
#define CP_MEID_ME_WIDTH                   56

/* Global Emergence Call  */
#define CP_NUM_INCL_WIDTH                     1
#define CP_MS_ORIG_POS_LOC_IND_WIDTH                 1
#define CP_NUM_CHAR_WIDTH                                 8

/* Extended Keypad Facility  */
#define CP_NUMBER_INFO_INCL_WIDTH                     1
#define CP_NUM_FIELDES_WIDTH                                 6
/* Record type header width definitions */
#define REV_INFO_IMSI_WIDTH                   7
#define REV_INFO_POWER_CLASS_WIDTH            1
#define REV_INFO_OPERATING_MODE_WIDTH         1
#define REV_INFO_ROAMING_WIDTH                5

/* R.Sattari, 9/6/00, added for capability information record */
#define REV_INFO_CAPABILITY_INFORMATION_WIDTH 1

/* Page Response */
#define CP_CMEA_WIDTH 1
#define CP_ECMEA_WIDTH 1
#define CP_REA_WIDTH 1


/*****************************************************************************
 * Order Information
 ****************************************************************************/
#define CP_AUTHBS_WIDTH          18
#define CP_ROAM_INDI_WIDTH        8

/*****************************************************************************
 * Prototypes
 ****************************************************************************/

kal_uint8  cpGetField8    (kal_uint8* buffer, kal_uint16* index, kal_uint8 width);
kal_uint16 cpGetField16   (kal_uint8* buffer, kal_uint16* index, kal_uint8 width);
kal_uint32 cpGetField32   (kal_uint8* buffer, kal_uint16* index, kal_uint8 width);
kal_uint8  cpGetByteArray (kal_uint8* dest, kal_uint16* index, kal_uint8* src, kal_uint8 len,
                       kal_uint8 maxLen, kal_bool appendNull);
kal_uint8  cpGetBitArray  (kal_uint8* dest, kal_uint8* src, kal_uint16* index, kal_uint8 len);

void   cpPutReset     (kal_uint16 bufferLength);
kal_bool   __cpPutField8    (kal_uint8* buffer, kal_uint16* index, kal_uint8 width, kal_uint8 field, kal_uint16 bufferLength);
kal_bool   __cpPutField16   (kal_uint8* buffer, kal_uint16* index, kal_uint8 width, kal_uint16 field, kal_uint16 bufferLength);
kal_bool   __cpPutField32   (kal_uint8* buffer, kal_uint16* index, kal_uint8 width, kal_uint32 field,  kal_uint16 bufferLength);
void   cpPutByteArray (kal_uint8* dest, kal_uint16* index, kal_uint8* src, kal_uint8 len);
kal_bool   cpGetOverflow  (void);

#define CP_ONE_BIT_WIDTH            1
#define CP_TWO_BIT_WIDTH            2
#define CP_THREE_BIT_WIDTH          3
#define CP_FOUR_BIT_WIDTH           4
#define CP_FIVE_BIT_WIDTH           5
#define CP_SIX_BIT_WIDTH            6
#define CP_SEVEN_BIT_WIDTH          7
#define CP_EIGHT_BIT_WIDTH          8
#define CP_NINE_BIT_WIDTH           9
#define CP_TEN_BIT_WIDTH           10
#define CP_ELEVEN_BIT_WIDTH        11
#define CP_TWELVE_BIT_WIDTH        12
#define CP_THIRTEEN_BIT_WIDTH      13
#define CP_FOURTEEN_BIT_WIDTH      14
#define CP_FIFTEEN_BIT_WIDTH       15
#define CP_SIXTEEN_BIT_WIDTH       16
#define CP_THIRTY_TWO_BIT_WIDTH    32
#define CP_MAX_PUTFIELD_BUFFER_SIZE 65535
#define CP_LOCAL_MAX_PUTFIELD_BUFFER_SIZE 65535
#define cpPutField8(buffer,index,width,value)\
	    __cpPutField8(buffer,index,width,value,CP_LOCAL_MAX_PUTFIELD_BUFFER_SIZE)
#define cpPutField16(buffer,index,width,value)\
	    __cpPutField16(buffer,index,width,value,CP_LOCAL_MAX_PUTFIELD_BUFFER_SIZE)
#define cpPutField32(buffer,index,width,value)\
	    __cpPutField32(buffer,index,width,value,CP_LOCAL_MAX_PUTFIELD_BUFFER_SIZE)
#endif  /* _FIELD_H */







/**Log information: \main\CBP80\cbp80_gdeng_scbp10099\1 2012-07-27 09:00:26 GMT gdeng
** SCBP#10099 **/
/**Log information: \main\Trophy_SO73\1 2013-07-09 05:02:28 GMT gdeng
** HREF#0000 see scbp11634**/
/**Log information: \main\Trophy\1 2013-07-17 08:11:42 GMT cshen
** href#2222**/

