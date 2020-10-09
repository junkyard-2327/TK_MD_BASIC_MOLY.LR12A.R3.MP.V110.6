/******************************************************************************
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
*******************************************************************************/

/******************************************************************************
 * Filename:
 * --------------------------------------------------------
 *   lpp_msgid.h
 *
 * Project:
 * --------------------------------------------------------
 *   LTE project
 *
 * Description:
 * --------------------------------------------------------
 *    LTE Positioning Protocol related message identity definition
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 09 20 2017 jie-yu.wang
 * [MOLY00278366] LPP OTDOA new procedure architecture development
 * [UMOLYA] Gen93 OTDOA refectoring.
 *
 * 07 07 2017 jie-yu.wang
 * [MOLY00261827] [UMOYLA] LPPe development
 * [LPP] LPPe code change check-in.
 *
 * 06 27 2016 jie-yu.wang
 * [MOLY00183642] new task EL1_MPC definition for 6293
 * (LPP) UMOLYA MessageID change.
 *
 * 01 13 2015 roland.li
 * [MOLY00092193] [UMOLY][LPP]LPP R10R11 feature checkin
 * 	.
 *
 * 08 22 2014 doug.shih
 * [MOLY00075997] [LPP] OTDOA RESET_UE_STORED_POS_INFO flow enhancement over CP and UP
 * .
 *
 * 08 04 2014 doug.shih
 * [MOLY00073990] [LPP CP] LPP code check-in for OTDOA feature
 * .
 *
 *
 ****************************************************************************/
#include "module_msg_range.h"

#ifndef _LPP_MSGID_H
#define _LPP_MSGID_H

MODULE_MSG_BEGIN( MSG_ID_LPP_CODE_BEGIN )

/****************************************************************************
 *                          LPP <-> LBS
 ****************************************************************************/
/* LPP -> LBS */
MSG_ID_LPP_LBS_SESSION_START_IND = MSG_ID_LPP_CODE_BEGIN,
MSG_ID_LPP_LBS_SESSION_END_IND,
MSG_ID_LPP_LBS_POS_METHOD_IND,
//For LPPe, move to gps_msgid.h

/* LBS -> LPP */
MSG_ID_LPP_LBS_SESSION_END_REQ,
MSG_ID_LPP_LBS_CAPABILITY_UPDATE_REQ,
MSG_ID_LPP_LBS_RESET_UE_STORED_POS_INFO_REQ,

MSG_ID_LPP_LBS_EXT_WLAN_CAPABILITY_IND,
MSG_ID_LPP_LBS_EXT_BT_CAPABILITY_IND,
MSG_ID_LPP_LBS_EXT_SENSOR_CAPABILITY_IND,
MSG_ID_LPP_LBS_EXT_NETWORK_CAPABILITY_IND,
MSG_ID_LPP_LBS_EXT_IPADDRESS_CAPABILITY_IND,

MSG_ID_LPP_LBS_EXT_WLAN_POS_ASSIST_DATA_REQUEST_IND,
MSG_ID_LPP_LBS_EXT_BT_POS_ASSIST_DATA_REQUEST_IND,
MSG_ID_LPP_LBS_EXT_SENSOR_POS_ASSIST_DATA_REQUEST_IND,

MSG_ID_LPP_LBS_EXT_WLAN_MEAS_QUERY_CNF,
MSG_ID_LPP_LBS_EXT_BT_MEAS_QUERY_CNF,
MSG_ID_LPP_LBS_EXT_SENSOR_MEAS_QUERY_CNF,
MSG_ID_LPP_LBS_EXT_NETWORK_MEAS_QUERY_CNF,
MSG_ID_LPP_LBS_EXT_IPADDRESS_MEAS_QUERY_CNF,

/****************************************************************************
 *                          LPP <-> ERRC (EL1)
 ****************************************************************************/
/* LPP -> ERRC */
//move to errc_msgid.h

/* LPP -> EL1 */
//move to el1_msgid.h

/* ERRC -> LPP */
MSG_ID_LPP_ERRC_ECID_MEAS_CNF,
MSG_ID_LPP_ERRC_SRB_STATUS_IND,
MSG_ID_LPP_ERRC_OTDOA_MEAS_CNF,

/* EL1 -> LPP */
MSG_ID_LPP_EL1MPC_OTDOA_MEAS_CNF,
MSG_ID_LPP_EL1MPC_OTDOA_ASSIST_DATA_CNF,
MSG_ID_LPP_EL1MPC_OTDOA_ADDITIONAL_ASSIST_DATA_IND,


/****************************************************************************
 *                          LPP <-> GNSS Task
 ****************************************************************************/
/* defined in gps_msgid.h */

/****************************************************************************
 *                          LPP <-> EMM via EVAL
 ****************************************************************************/
/* LPP -> EMM (EVAL) */
MSG_ID_LPP_EVAL_DATA_REQ,

/* EMM (EVAL) -> LPP */
MSG_ID_LPP_EVAL_DATA_IND,
MSG_ID_LPP_EVAL_DATA_CNF,

/****************************************************************************
 *                          ETC -> LPP via EVAL
 ****************************************************************************/
/* ETC (EVAL) -> LPP */
MSG_ID_EVAL_LPP_NW_RESET_UE_STORED_POS_INFO_IND,

/****************************************************************************
 *                          LPP (SWIP)  <-> SUPL
 ****************************************************************************/
/* LPP (SWIP) -> SUPL */
MSG_ID_LPP_SUPL_PDU_DATA_REQ,

/* SUPL -> LPP (SWIP) */
MSG_ID_LPP_SUPL_PDU_DATA_IND,
MSG_ID_LPP_SUPL_PDU_DATA_CNF,

/****************************************************************************
 *                          LPP <-> LPP (SWIP) via LBS
 ****************************************************************************/
/* LPP (SWIP) -> LPP */
MSG_ID_LPP_PEER_OTDOA_MEAS_REQ,
MSG_ID_LPP_PEER_OTDOA_ASSIST_DATA_REQ,
MSG_ID_LPP_PEER_OTDOA_MEAS_ABORT_REQ,
MSG_ID_LPP_PEER_ECID_MEAS_REQ,
MSG_ID_LPP_PEER_ECID_MEAS_ABORT_REQ,
MSG_ID_LPP_PEER_EUTRAN_BAND_UPDATE_REQ,
MSG_ID_LPP_PEER_OTDOA_RESET_UE_STORED_POS_REQ,

/* LPP -> LPP (SWIP) */
MSG_ID_LPP_PEER_OTDOA_MEAS_CNF,
MSG_ID_LPP_PEER_OTDOA_ASSIST_DATA_CNF,
MSG_ID_LPP_PEER_OTDOA_ADDITIONAL_ASSIST_DATA_REQ,
MSG_ID_LPP_PEER_ECID_MEAS_CNF,
MSG_ID_LPP_PEER_EUTRAN_BAND_UPDATE_CNF,

/****************************************************************************
 *                          LPP <-> LPP_EXT
 ****************************************************************************/
/* LPP -> LPP_EXT */
MSG_ID_LPP_LPPE_EPDU_DATA_IND,
MSG_ID_LPP_LPPE_EPDU_DATA_CNF,
MSG_ID_LPP_LPPE_EPDU_DATA_NTF,
MSG_ID_LPP_LPPE_STATUS_SYNC_IND,

MSG_ID_LPP_LPPE_WLAN_CAPABILITY_IND,
MSG_ID_LPP_LPPE_BT_CAPABILITY_IND,
MSG_ID_LPP_LPPE_SENSOR_CAPABILITY_IND,
MSG_ID_LPP_LPPE_NETWORK_CAPABILITY_IND,
MSG_ID_LPP_LPPE_IPADDRESS_CAPABILITY_IND,

MSG_ID_LPP_LPPE_WLAN_POS_ASSIST_DATA_REQUEST_IND,
MSG_ID_LPP_LPPE_BT_POS_ASSIST_DATA_REQUEST_IND,
MSG_ID_LPP_LPPE_SENSOR_POS_ASSIST_DATA_REQUEST_IND,
MSG_ID_LPP_LPPE_HA_AGNSS_POS_ASSIST_DATA_REQUEST_IND,
MSG_ID_LPP_LPPE_PMTK_DONE_IND,

MSG_ID_LPP_LPPE_WLAN_MEAS_QUERY_CNF,
MSG_ID_LPP_LPPE_BT_MEAS_QUERY_CNF,
MSG_ID_LPP_LPPE_SENSOR_MEAS_QUERY_CNF,
MSG_ID_LPP_LPPE_NETWORK_MEAS_QUERY_CNF,
MSG_ID_LPP_LPPE_IPADDRESS_MEAS_QUERY_CNF,

MSG_ID_LPP_LPPE_GNSS_POS_IND,
MSG_ID_LPP_LPPE_GNSS_MEAS_IND,
MSG_ID_LPP_LPPE_ABORT_IND,
MSG_ID_LPP_LPPE_ERROR_IND,


/* LPP_EXT -> LPP */
MSG_ID_LPP_LPPE_EPDU_DATA_REQ,
MSG_ID_LPP_LPPE_EPDU_DATA_RSP,

MSG_ID_LPP_LPPE_WLAN_POS_ASSIST_DATA_PROVIDE_IND,
MSG_ID_LPP_LPPE_BT_POS_ASSIST_DATA_PROVIDE_IND,
MSG_ID_LPP_LPPE_SENSOR_POS_ASSIST_DATA_PROVIDE_IND,
MSG_ID_LPP_LPPE_HA_AGNSS_POS_ASSIST_DATA_PROVIDE_IND,

MSG_ID_LPP_LPPE_WLAN_MEAS_QUERY_REQ,
MSG_ID_LPP_LPPE_BT_MEAS_QUERY_REQ,
MSG_ID_LPP_LPPE_SENSOR_MEAS_QUERY_REQ,
MSG_ID_LPP_LPPE_NETWORK_MEAS_QUERY_REQ,
MSG_ID_LPP_LPPE_IPADDRESS_MEAS_QUERY_REQ,

MSG_ID_LPP_LPPE_WLAN_START_IND,
MSG_ID_LPP_LPPE_BT_START_IND,
MSG_ID_LPP_LPPE_SENSOR_START_IND,
MSG_ID_LPP_LPPE_NETWORK_START_IND,

MSG_ID_LPP_LPPE_WLAN_STOP_IND,
MSG_ID_LPP_LPPE_BT_STOP_IND,
MSG_ID_LPP_LPPE_SENSOR_STOP_IND,
MSG_ID_LPP_LPPE_NETWORK_STOP_IND,

MSG_ID_LPP_LPPE_ABORT_RSP,
MSG_ID_LPP_LPPE_ERROR_RSP,

/****************************************************************************
 *                          LBS <-> LPP_EXT
 ****************************************************************************/
/* LBS -> LPP_EXT */
MSG_ID_LCSP_GNSS_HA_ASSIST_CNF,
MSG_ID_LCSP_GNSS_HA_ASSIST_DATA_REQUEST_IND,
MSG_ID_LPPE_LBS_GNSS_ASSIST_DATA_RSP,

/****************************************************************************
 *                          LPP <-> LPP_ADAPTER
 ****************************************************************************/
/* LPP->LPP_AS_Adapter */
MSG_ID_LPP_AS_ADAPTER_OTDOA_ASSIST_DATA_REQ,
MSG_ID_LPP_AS_ADAPTER_OTDOA_ASSIST_DATA_CLEAR_NTF,
MSG_ID_LPP_AS_ADAPTER_OTDOA_MEAS_REQ,
MSG_ID_LPP_AS_ADAPTER_OTDOA_MEAS_ABORT_REQ,
/* LPP_AS_Adapter->LPP */
MSG_ID_LPP_AS_ADAPTER_OTDOA_ASSIST_DATA_CNF,
MSG_ID_LPP_AS_ADAPTER_OTDOA_ADDITIONAL_ASSIST_DATA_REQ,
MSG_ID_LPP_AS_ADAPTER_OTDOA_MEAS_CNF,
 

MSG_ID_LPP_CODE_END,

MODULE_MSG_END( MSG_ID_LPP_CODE_TAIL )

#endif /* _LPP_MSGID_H */
