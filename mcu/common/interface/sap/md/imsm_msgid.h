/*******************************************************************************
* Filename:
* ---------
*   imsm_msgid.h
*
* Project:
* --------
*
*
* Description:
* ------------
*
*
* Author:
* -------
*
*
*
* ==========================================================================
* $Log$
*
* 11 27 2017 yts.chen
* [MOLY00291619] [R3][VzW feature] EIMSROAM flow redesign.
* 	
* 	.
*
* 06 24 2017 mingchun.cheng
* [MOLY00259445] [Bianco] sync code form LR12A.MP1
* sync from MP1.
*
* 06 14 2017 ben.chiu
* [MOLY00256374] [Bianco][N1]  Volte icon should not appear and go when change APN
* UMOLYA - IMC/IMSM new interface for IMS dereg and IMS call status
*
*
****************************************************************************/
#include "module_msg_range.h"

#ifndef _IMSM_MSGID_H
#define _IMSM_MSGID_H

MODULE_MSG_BEGIN( MSG_ID_IMSM_CODE_BEGIN )
    //From users to IMSM
    MSG_ID_IMSM_FROM_USER_BEGIN = MSG_ID_IMSM_CODE_BEGIN,
        MSG_ID_IMSM_SET_ROUTE_DNS_REQ,
        MSG_ID_IMSM_IMC_IMS_DEREG_CNF,
        MSG_ID_IMSM_IMC_IMS_CALL_STATUS_IND,
        MSG_ID_IMSM_IMSM_GET_VERSION_REQ,
        MSG_ID_IMSM_IMC_IMS_ROAMING_IND,
    MSG_ID_IMSM_FROM_USER_END,

    //IMSM to Users
    MSG_ID_IMSM_TO_USER_BEGIN,
        MSG_ID_IMSM_SET_ROUTE_DNS_CNF,
        MSG_ID_IMSM_WFC_IND,
        MSG_ID_IMSM_IMSM_GET_VERSION_CNF,
    MSG_ID_IMSM_TO_USER_END,

MODULE_MSG_END( MSG_ID_IMSM_CODE_TAIL )

#endif /* _IMSM_MSGID_H */
