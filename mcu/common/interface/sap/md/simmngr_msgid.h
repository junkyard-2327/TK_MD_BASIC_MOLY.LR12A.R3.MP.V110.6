/*******************************************************************************
* Filename:
* ---------
*   simmngr_msgid.h
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
 * -------
*
*
* ==========================================================================
* $Log$
*
* 06 15 2017 rong.wang
* [MOLY00251469] [UMOLY] [Add Module] ssds.
*
*
****************************************************************************/
#include "module_msg_range.h"

#ifndef _SIMMNGR_MSGID_H
#define _SIMMNGR_MSGID_H

MODULE_MSG_BEGIN( MSG_ID_SIMMNGR_CODE_BEGIN )
    //From users to SIMMNGR
    MSG_ID_SIMMNGR_FROM_USER_BEGIN = MSG_ID_SIMMNGR_CODE_BEGIN,
        MSG_ID_SIMMNGR_QUERY_SIM_INFO_REQ,
        MSG_ID_SIMMNGR_WRITE_SIM_EF_REQ,
        MSG_ID_SIMMNGR_SIM_AKA_REQ  ,
        MSG_ID_SIMMNGR_SIM_GBA_AUTH_REQ ,
        MSG_ID_SIMMNGR_SIM_STATE_CHECK_REQ ,
        MSG_ID_SIMMNGR_SIM_INSERT_CHECK_REQ ,
        MSG_ID_SIMMNGR_SIM_TYPE_CHECK_REQ ,
    MSG_ID_SIMMNGR_FROM_USER_END,

    //SIMMNGR to Users
    MSG_ID_SIMMNGR_TO_USER_BEGIN,
        //Response
        MSG_ID_SIMMNGR_QUERY_SIM_INFO_CNF,
        MSG_ID_SIMMNGR_WRITE_SIM_EF_CNF,
        MSG_ID_SIMMNGR_SIM_AKA_CNF  ,
        MSG_ID_SIMMNGR_SIM_GBA_AUTH_CNF ,
        MSG_ID_SIMMNGR_SIM_STATE_CHECK_CNF ,
        MSG_ID_SIMMNGR_SIM_INSERT_CHECK_CNF ,
        MSG_ID_SIMMNGR_SIM_TYPE_CHECK_CNF ,
        //Notification
        MSG_ID_SIMMNGR_SIM_STATE_IND ,
        MSG_ID_SIMMNGR_SIM_INSERT_IND ,
        MSG_ID_SIMMNGR_USIM_DETECTED_IND ,
        MSG_ID_SIMMNGR_ISIM_CH_IND ,
    MSG_ID_SIMMNGR_TO_USER_END,

    //ATP to SIMMNGR
    MSG_ID_SIMMNGR_ATP_FROM_ATP_BEGIN,
        MSG_ID_ATP_SIMMNGR_CMEE_SET_CNF,
        MSG_ID_ATP_SIMMNGR_CPIN_QUERY_CNF,
        MSG_ID_ATP_SIMMNGR_ESIMS_QUERY_CNF,
        MSG_ID_ATP_SIMMNGR_IMEI_QUERY_CNF,
        MSG_ID_ATP_SIMMNGR_ESIMAPP_QUERY_CNF,
    MSG_ID_SIMMNGR_ATP_FROM_ATP_END,
MODULE_MSG_END( MSG_ID_SIMMNGR_CODE_TAIL )

#endif /* _SIMMNGR_MSGID_H */
