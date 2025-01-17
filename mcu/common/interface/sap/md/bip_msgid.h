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
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *   bip_msgid.h
 *
 * Description:
 * ------------
 *   BIP related message identity definition
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#include "module_msg_range.h"

#ifndef _BIP_MSGID_H
#define _BIP_MSGID_H

MODULE_MSG_BEGIN( MSG_ID_BIP_CODE_BEGIN )
// MOD_BIP

// MOD_SIM_MGR
MSG_ID_BIP_SIM_MGR_BIP_CMD_IND,
MSG_ID_BIP_SIM_MGR_BIP_CMD_CNF,
MSG_ID_BIP_SIM_MGR_TR_REQ, 
MSG_ID_BIP_SIM_MGR_TR_RSP,
MSG_ID_BIP_SIM_MGR_ENVELOPE_REQ,
MSG_ID_BIP_SIM_MGR_ENVELOPE_RSP,
MSG_ID_BIP_SIM_MGR_SIM_ERROR_IND,
MSG_ID_BIP_SIM_MGR_SIM_ERROR_CNF,
MSG_ID_ATP_BIP_SIM_MGR_STK_REQ,// STK cmd
MSG_ID_ATP_BIP_SIM_MGR_BIP_CNF_IND,// AP confirm
 MSG_ID_ATP_BIP_SIM_MGR_ECNCFG_IND,

// MOD_CONN_MGR
MSG_ID_BIP_CONN_MGR_CREATE_3GPP_CONNECTION_REQ,
MSG_ID_BIP_CONN_MGR_CREATE_3GPP_CONNECTION_RSP,
MSG_ID_BIP_CONN_MGR_CREATE_WIFI_CONNECTION_REQ,
MSG_ID_BIP_CONN_MGR_CREATE_WIFI_CONNECTION_RSP,
MSG_ID_BIP_CONN_MGR_CLOSE_3GPP_CONNECTION_REQ,
MSG_ID_BIP_CONN_MGR_CLOSE_3GPP_CONNECTION_RSP,
MSG_ID_BIP_CONN_MGR_CLOSE_WIFI_CONNECTION_REQ,
MSG_ID_BIP_CONN_MGR_CLOSE_WIFI_CONNECTION_RSP,
MSG_ID_BIP_CONN_MGR_CHECK_STATUS_REQ,
MSG_ID_BIP_CONN_MGR_CHECK_STATUS_RSP,
MSG_ID_BIP_CONN_MGR_SIM_ERROR_REQ,
MSG_ID_BIP_CONN_MGR_SIM_ERROR_RSP,
MSG_ID_BIP_CONN_MGR_DISCONNECT_IND,
MSG_ID_BIP_CONN_MGR_DISCONNECT_CNF,
// MOD_CMD_HDR

// MOD_NET_MGR
MSG_ID_BIP_NET_MGR_CREATE_CONNECTION_REQ,
MSG_ID_BIP_NET_MGR_CREATE_CONNECTION_RSP,
MSG_ID_BIP_NET_MGR_CLOSE_CONNECTION_REQ,
MSG_ID_BIP_NET_MGR_CLOSE_CONNECTION_RSP,
MSG_ID_BIP_NET_MGR_POLLING_DATA,
MSG_ID_BIP_NET_MGR_RECEIVE_DATA_IND,
MSG_ID_BIP_NET_MGR_RECEIVE_DATA_CNF,
MSG_ID_BIP_NET_MGR_SEND_DATA_REQ,
MSG_ID_BIP_NET_MGR_SEND_DATA_RSP,
MSG_ID_BIP_NET_MGR_CHECK_STATUS_REQ,
MSG_ID_BIP_NET_MGR_CHECK_STATUS_RSP,
MSG_ID_BIP_NET_MGR_SIM_ERROR_REQ,
MSG_ID_BIP_NET_MGR_SIM_ERROR_RSP,
MSG_ID_BIP_NET_MGR_DISCONNECT_IND,
MSG_ID_BIP_NET_MGR_DISCONNECT_CNF,
MSG_ID_BIP_NET_MGR_CHANNEL_STATUS_IND,
MSG_ID_BIP_NET_MGR_CHANNEL_STATUS_CNF,

// MOD_UT_TEST_CASE
MSG_ID_BIP_UT_TEST_CASE_MULTIPLE_SIM_REQ,
MSG_ID_BIP_UT_TEST_CASE_MULTIPLE_SIM_RSP,

// MOD_BIP_DS_MGR
MSG_ID_BIP_DS_MGR_CREATE_CONNECTION_REQ,
MSG_ID_BIP_DS_MGR_CREATE_CONNECTION_RSP,
MSG_ID_BIP_DS_MGR_CLOSE_CONNECTION_REQ,
MSG_ID_BIP_DS_MGR_CLOSE_CONNECTION_RSP,
MSG_ID_BIP_DS_MGR_CREATE_CONNECTION_RETRY_PDN,
MSG_ID_BIP_DS_MGR_CREATE_CONNECTION_RETRY_SOCKET,
MSG_ID_BIP_DS_MGR_SIM_ERROR_REQ,
MSG_ID_BIP_DS_MGR_SIM_ERROR_RSP,

// MOD_BIP_AGENT
MSG_ID_BIP_AGENT_SEND_ACK,
// AP side BIP module
MSG_ID_BIP_AP_SIDE_MODULE_START = MSG_ID_BIP_CODE_BEGIN + 60,

// MOD_BIP_WIFI
MSG_ID_AP_BIP_WIFI_QUERY_WIFI_STATUS_REQ,
MSG_ID_AP_BIP_WIFI_QUERY_WIFI_STATUS_RSP,
MSG_ID_AP_BIP_WIFI_CREATE_CONNECTION_REQ,
MSG_ID_AP_BIP_WIFI_CREATE_CONNECTION_RSP,
MSG_ID_AP_BIP_WIFI_CLOSE_CONNECTION_REQ,
MSG_ID_AP_BIP_WIFI_CLOSE_CONNECTION_RSP,
MSG_ID_AP_BIP_WIFI_SEND_DATA_REQ,
MSG_ID_AP_BIP_WIFI_SEND_DATA_RSP,
MSG_ID_AP_BIP_WIFI_RECEIVE_DATA_IND,
MSG_ID_AP_BIP_WIFI_RECEIVE_DATA_CNF,
MSG_ID_AP_BIP_WIFI_DISCONNECT_IND,
MSG_ID_AP_BIP_WIFI_DISCONNECT_CNF,
MSG_ID_AP_BIP_WIFI_SIM_ERROR_REQ,
MSG_ID_AP_BIP_WIFI_SIM_ERROR_RSP,
MSG_ID_AP_BIP_WIFI_TIMER_ARRIVAL,

// MOD_BIP_UICC_SERVER
MSG_ID_AP_BIP_UICC_SERVER_CREATE_CONNECTION_REQ,
MSG_ID_AP_BIP_UICC_SERVER_CREATE_CONNECTION_RSP,
MSG_ID_AP_BIP_UICC_SERVER_CLOSE_CONNECTION_REQ,
MSG_ID_AP_BIP_UICC_SERVER_CLOSE_CONNECTION_RSP,
MSG_ID_AP_BIP_UICC_SERVER_SEND_DATA_REQ,
MSG_ID_AP_BIP_UICC_SERVER_SEND_DATA_RSP,
MSG_ID_AP_BIP_UICC_SERVER_RECEIVE_DATA_IND,
MSG_ID_AP_BIP_UICC_SERVER_RECEIVE_DATA_CNF,
MSG_ID_AP_BIP_UICC_SERVER_SIM_ERROR_REQ,
MSG_ID_AP_BIP_UICC_SERVER_SIM_ERROR_RSP,
MSG_ID_AP_BIP_UICC_SERVER_CHANGE_LINK_IND,
MSG_ID_AP_BIP_UICC_SERVER_CHANGE_LINK_CNF,
MSG_ID_AP_BIP_UICC_SERVER_TIMER_ARRIVAL,


MODULE_MSG_END( MSG_ID_BIP_CODE_TAIL )

#endif  /* _BIP_MSGID_H */
