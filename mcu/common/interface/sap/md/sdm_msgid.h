/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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

/*****************************************************************************
 * Filename:
 * ------------
 *   sdm_msgid.h
 *
 * Project:
 * ------------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file defines the identities of the messages received by SDM.
 * 
 *
 * Author:
 * -----------
 * -------
 *
 *===========================================================
 * $Log$
 *
 * 03 16 2020 yulong.chang
 * [MOLY00504486] [Gen93][Orange][SDM] Provide CS service is_cs_allowed function for IMS_CALL_60 and IMS_CALL_65
 * 	
 * 	Orange feature - cs_availability query patch back to GEN93 (SDM)
 *
 * 02 20 2019 hsuanchang.chen
 * [MOLY00376426] [US_DEV][VzW][Gen93][Gen95] SMS to 911 and SCBM feature - SDM part
 * 	
 * 	. T911 (SDM part) interface
 *
 * 01 03 2019 hsuanchang.chen
 * [MOLY00376426] [VzW][Gen93][Gen95] SMS to 911 and SCBM feature - SDM part
 * . T911 SDM code
 *
 * 04 05 2017 hsuanchang.chen
 * [MOLY00237411] [6293][PreIT] UTK/STK SMS Flow Merge
 * 	
 * 	. interface
 *
 * 04 05 2017 hsuanchang.chen
 * [MOLY00232032] [SDM] [MT SMS AT Merge] merge +CMT/+EIMSCMT and +CDS/+EIMSCDS
 * 	
 * 	. ATP and interface
 *
 * 04 05 2017 hsuanchang.chen
 * [MOLY00229182] [MT6293] EIMSCFG for SDM (SDM replace WFC enable to vowifi enable)
 * .
 *
 * 03 24 2017 hsuanchang.chen
 * [MOLY00228407] [SDM] Internal Re-arch
 * . add +ECFGSET/+ECFGGET for SDM Profile
 *
 * 03 20 2017 hsuanchang.chen
 * [MOLY00228407] [SDM] Internal Re-arch
 * . [SDM Re-arch#8] add SCM for CMSS SMS
 *
 * 01 11 2017 hsuanchang.chen
 * [MOLY00220510] [93 PREIT_DEV][UMOLYA] Rename IMSP interface/context/API to ATP and reorg folder layout
 * 	
 * 	. SDM part
 *
 * 10 31 2016 hsuanchang.chen
 * [MOLY00208821] [SDM] UMOLY to UMOLYA sync
 * 	
 * 	.[UMOLY to UMOLYA] [MOLY00204308] [??][Jade][CT][VoLTE]SDM will not select CS domain for SMS when CS is unregistered in LTE
 *
 * 10 31 2016 hsuanchang.chen
 * [MOLY00208821] [SDM] UMOLY to UMOLYA sync
 * . Rollback [MOLY00204308][??][Jade][CT][VoLTE]SDM will not select CS domain for SMS when CS is unregistered in LTE
 *
 * 09 26 2016 hsuanchang.chen
 * [MOLY00205107] [SDM] Cross core integration merge back to UMOLYA
 * 	
 * 	.
 *
 * 09 26 2016 hsuanchang.chen
 * [MOLY00203894] [SDM] UMOLYA.PS.DEV merge back UMOLYA
 * 	
 * 	.
 *
 * 03 15 2016 ian-yw.chen
 * [MOLY00169015] [COPY CR][VzW][MT6735][Pre-LC][AT command][2.51]  case fail at AT+CMSS=1, shows error
 * SDM part
 *
 * 03 02 2016 ian-yw.chen
 * [MOLY00163894] [SMS][TC01] 3GPP2 SMS over IMS
 * [MT/PP download/STK] interface
 *
 * 03 02 2016 ian-yw.chen
 * [MOLY00163894] [SMS][TC01] 3GPP2 SMS over IMS
 *  [MO] interfaces
 *
 * 03 01 2016 ian-yw.chen
 * [MOLY00147454] VZW 3GPP2 SMS over IMS
 *  SDM and interfaces
 *
 * 09 18 2015 mika.leinonen
 * [MOLY00141364] [WWFT][MT6755][Jade][EU][Telefonica][VoLTE][Germany][FT] SMS must be sent over SGs in Telefonica Germany networks
 * 	Integration change for UMOLY TRUNK.
 * 	Dynamic framework implemented to configure MO SMS domain preferences in 4G per operator country variant.
 * 	Review SDM: http://mtksap20:8080/go?page=ReviewDisplay&reviewid=213739
 * 	Review IMSP: http://mtksap20:8080/go?page=ReviewDisplay&reviewid=213748
 *
 * 07 30 2015 chinte.chen
 * [MOLY00132834] [COPY_CR][TMO][EM] Enable/Disable SMS over SGs through EM for TMO requirement 58071
 * .
 *
 * 07 09 2015 nick.wang
 * [MOLY00127009] WFC Patch back to UMOLY- interface part
 * .moly wfc interface patch
 *
 * 07 09 2015 nick.wang
 * [MOLY00127009] WFC Patch back to UMOLY- interface part
 * 	.jade interface sync
 *
 * 05 08 2015 chinte.chen
 * [MOLY00110919] [SAT] Support STK SMS over IP
 * .
 *
 * 11 22 2013 chinte.chen
 * [MOLY00047460] [MT6582LTE][IMS][VoLTE][Basic IT][IT3-045] Memory status reporting re-enable of SMSoIP
 * .
 *
 * 09 30 2013 chinte.chen
 * [MOLY00038966] [6290E1][VoLTE][IT][BringUp] Unable to complete RAT mode config
 * .
 *****************************************************************************/

#ifndef SDM_MSGID_H
#define SDM_MSGID_H

#include "module_msg_range.h"


MODULE_MSG_BEGIN( MSG_ID_SDM_CODE_BEGIN )

/****************************************************************************
 *                          ATP -> SDM
 ****************************************************************************/
MSG_ID_SDM_ATP_CMD_SEND_SMS_IND                    = MSG_ID_SDM_CODE_BEGIN,
MSG_ID_SDM_ATP_CMD_SEND_DELIVER_REPORT_IND,
MSG_ID_SDM_ATP_CMD_SEND_MEM_AVL_NOTIF_IND,
MSG_ID_SDM_ATP_CMD_WFC_PROFILE_IND,
MSG_ID_SDM_ATP_CMD_WFC_SWITCH_IND,
MSG_ID_SDM_ATP_CS_SMS_SUBMIT_REPORT_ACK,
MSG_ID_SDM_ATP_CS_SMS_SUBMIT_REPORT_NACK,
MSG_ID_SDM_ATP_CMD_STK_SMS_IND,
MSG_ID_SDM_ATP_STK_SMS_QUERY_CNF,
MSG_ID_SDM_ATP_CS_STK_SMS_CNF,
MSG_ID_SDM_ATP_IMSI_GET_CNF,

MSG_ID_SDM_ATP_CMD_SEND_COMMAND_IND,
MSG_ID_SDM_ATP_SMS_OVER_IP_CONFIG_IND,
MSG_ID_SDM_ATP_IMS_REG_STATUS_IND,
MSG_ID_SDM_ATP_SMS_OVER_SGS_CONFIG_IND,
MSG_ID_SDM_ATP_NAS_PS_REG_STATUS_IND,
MSG_ID_SDM_ATP_NAS_CS_REG_STATUS_IND,
MSG_ID_SDM_ATP_CMD_SEND_C2K_SMS_IND,
MSG_ID_SDM_ATP_CMD_SEND_C2K_ACKNOWLEDGE_IND,
MSG_ID_SDM_ATP_CMD_SEND_CMSS_IND,
MSG_ID_SDM_ATP_CMSS_IMS_CNF,
MSG_ID_SDM_ATP_CMSS_CS_CNF,
MSG_ID_SDM_ATP_UPDATE_MSG_BOX_CNF,
MSG_ID_SDM_ATP_CMD_SEND_SMS_DELIVER_IND,
MSG_ID_SDM_ATP_CMD_SEND_C2K_SMS_DELIVER_IND,
MSG_ID_SDM_ATP_CMD_SEND_STATUS_REPORT_IND,
MSG_ID_SDM_ATP_CMD_EIMSCFG_IND,
MSG_ID_SDM_ATP_IMS_NORMAL_SMS_SMART_CONGESTION_START_CNF,
MSG_ID_SDM_ATP_IMS_STK_SMS_SMART_CONGESTION_START_CNF,
MSG_ID_SDM_ATP_IMS_CMSS_SMS_SMART_CONGESTION_START_CNF,
MSG_ID_SDM_ATP_IMS_C2K_SMS_SMART_CONGESTION_START_CNF,
MSG_ID_SDM_ATP_IMS_UTK_SMS_SMART_CONGESTION_START_CNF,
MSG_ID_SDM_ATP_IMS_SMS_SMART_CONGESTION_STOP_CNF,
MSG_ID_SDM_ATP_ECFG_SET_REQ,
MSG_ID_SDM_ATP_ECFG_GET_REQ,
MSG_ID_SDM_ATP_CMD_EXIT_SCBM_IND,
MSG_ID_SDM_ATP_FDN_ECC_CHECK_CNF,


/****************************************************************************
 *                          IMCSMS -> SDM
 ****************************************************************************/
MSG_ID_SDM_IMCSMS_SUBMIT_REPORT_ACK,
MSG_ID_SDM_IMCSMS_SUBMIT_REPORT_NACK,
MSG_ID_SDM_IMCSMS_STK_SUBMIT_REPORT_ACK,
MSG_ID_SDM_IMCSMS_STK_SUBMIT_REPORT_NACK,
MSG_ID_SDM_IMCSMS_DELIVER,
MSG_ID_SDM_IMCSMS_C2K_SUBMIT_REPORT_ACK,
MSG_ID_SDM_IMCSMS_C2K_SUBMIT_REPORT_NACK,
MSG_ID_SDM_IMCSMS_UTK_SUBMIT_REPORT_ACK,
MSG_ID_SDM_IMCSMS_UTK_SUBMIT_REPORT_NACK,
MSG_ID_SDM_IMCSMS_C2K_DELIVER,
MSG_ID_SDM_IMCSMS_STATUS_REPORT,
MSG_ID_SDM_IMCSMS_CMSS_SUBMIT_REPORT_ACK,
MSG_ID_SDM_IMCSMS_CMSS_SUBMIT_REPORT_NACK,
MSG_ID_SDM_IMCSMS_MEM_AVL_NOTIF_CNF,
MSG_ID_SDM_IMCSMS_RCV_MSG_IND,
MSG_ID_SDM_IMCSMS_IS_CS_ALLOWED_REQ,

/****************************************************************************
 *                          CVAL -> SDM
 ****************************************************************************/
MSG_ID_SDM_CVAL_C2K_SMS_SEND_CNF,
MSG_ID_SDM_CVAL_C2K_SMS_IND,

/****************************************************************************
 *                          EXTERNAL -> SDM
 ****************************************************************************/
MSG_ID_SDM_EXTERNAL_EXIT_SCBM_IND,
MSG_ID_SDM_UT_CONFIG,


MODULE_MSG_END( MSG_ID_SDM_CODE_TAIL )


#endif // SDM_MSGID_H

