/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
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

  FILE NAME:  lec_msgid.h

  DESCRIPTION:

    This file contains the defenitions of all the LEC msg id's.

*****************************************************************************/
/*----------------------------------------------------------------------------
Include Files
----------------------------------------------------------------------------*/
#ifndef _LEC_MSGID_H_
#define _LEC_MSGID_H_

#include "module_msg_range.h"


#undef MSGID_SET
#undef MSGID_NEXT

MODULE_MSG_BEGIN( MSG_ID_LEC_CODE_BEGIN )
    /* from PSW */
    MSG_ID_LEC_GPS_DEVICE_POWER_ON_REQ_MSG = MSG_ID_LEC_CODE_BEGIN+0,  /* Turn on the GPS Device */
    MSG_ID_LEC_PSEUDORANGE_MSMT_REQ_MSG,
    MSG_ID_LEC_SESSION_END_REQ_MSG,
    MSG_ID_LEC_36BIT_NWK_CDMA_TIME_MSG,  /* LEC requested System time and PSW response */
    MSG_ID_LEC_SENSITIVITY_ASSIST_MSG,  /* Not used with GNS7560 */
    MSG_ID_LEC_PSW_GPS_EPH_MSG,  /*MS-Based MSG*/
    MSG_ID_LEC_PSW_GPS_ALM_MSG,
    MSG_ID_LEC_PSW_LOC_RESP_MSG,

    /*MS-Based    from ETS*/
    MSG_ID_LEC_GPS_MS_BASED_MSG,
    MSG_ID_LEC_GPS_MS_BASED_GETASSIST_MSG,

    /* from L1D */
    MSG_ID_LEC_GPS_INIT_GPS_ACK_MSG,
    MSG_ID_LEC_GPS_END_GPS_ACK_MSG,
    MSG_ID_LEC_GPS_CONT_GPS_MSG, /* Not used */
    MSG_ID_LEC_GPS_HW_ENABLE_MSG, /* Not used */
    MSG_ID_LEC_GPS_REF_FREQ_ADJ_MSG, /* To Set or adjust Clock Frequecny */

    /* from IOP */
    MSG_ID_LEC_GPS_RX_DATA_MSG,

    /* from DBM */
    MSG_ID_LEC_DBM_READ_BLK_RSP_MSG,
    MSG_ID_LEC_DBM_WRITE_BLK_RSP_MSG,

    /* from VAL */
    MSG_ID_LEC_GPS_RESET_ASSIST_MSG, /* PLTS /Field Test Purpose */
#if 0
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
    MSG_ID_LEC_CALL_BACK_MSG,
    MSG_ID_LEC_APMODE_MSG,
    MSG_ID_LEC_TESTMODE_MSG,
    MSG_ID_LEC_USERMODE_MSG,
    MSG_ID_LEC_NMEA_CFG_SET_ETS,
    MSG_ID_LEC_NMEA_CFG_GET_ETS,
    MSG_ID_LEC_PSW_RESTART_MSG,
    MSG_ID_LEC_GET_RF_BAND_MSG,
    MSG_ID_LEC_PSW_CDMA_SYSTEM_RSP_MSG,
    MSG_ID_LEC_VAL_FACTORY_GET_RF_CNO_MSG,
    MSG_ID_LEC_VAL_FACTORY_STOP_RF_CNO_MSG,
    MSG_ID_LEC_LTE_TRN_MSG,
#if 0    
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif        
    MSG_ID_LEC_SLEEP_TIME_MSG,

    MSG_ID_LEC_GPS_PGPS_ON_OFF_MSG,
#if 0    
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif    
    MSG_ID_LEC_PSW_CELL_INFOMATION_MSG,
#if 0    
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif    
    MSG_ID_LEC_AP_GPS_LOC_RESP_MSG,
    MSG_ID_LEC_FIX_TIME_MSG,
    MSG_ID_LEC_AP_GPS_AA_ASSIST_REQ_MSG,
    MSG_ID_LEC_AP_GPS_QOS_REQ_MSG,

    MSG_ID_LEC_VAL_AP_GPS_START_ACK,
    MSG_ID_LEC_APF_READY_MSG,

    MSG_ID_LEC_AP_GPS_PRECISE_TIME_AIDING_REQ_MSG,
    MSG_ID_LEC_AP_GPS_FREQUENCY_AIDING_REQ_MSG,
    MSG_ID_LEC_AP_GPS_PSEUDORANGE_MSMT_RSP_MSG,
    MSG_ID_LEC_AP_GPS_REFERENCE_LOCATION_AIDING_REQ_MSG,
    MSG_ID_LEC_VAL_CP_GPS_STOP_ACK,
#if 0    
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
    MSG_ID_LEC_GPS_READY_MSG,
#if 0    
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif    
    MSG_ID_LEC_PSW_READY_MSG,
#if 0    
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
    MSG_ID_LEC_AP_GPS_ASSIST_FINISH_MSG,
    MSG_ID_LEC_AP_GPS_STOP_ACK_MSG,
    MSG_ID_LEC_CUSTOMER_SETTING_MSG,
#if 0    
/* under construction !*/
#endif    
#ifdef MTK_GPS_SYNC_DEV
    MSG_ID_LEC_AP_GPS_PERIOD_SYNC_REQ,
    MSG_ID_LEC_AP_GPS_PERIOD_SYNC_STOP_REQ,
    MSG_ID_LEC_L1D_GPS_TIME_IND,
    MSG_ID_LEC_AP_DELETE_ASSIT_DATA_CNF,
#endif
    MSG_ID_LEC_STARTUP_SIGNAL,
   // MSG_ID_LEC_RUN_GPS_LIBRARY_SIGNAL,
    //MSG_ID_LEC_RUN_PATCH_SIGNAL,
    MSG_ID_LEC_AP_GPS_SV_VALID_REQ,
    MSG_ID_LEC_NUM_MSGS_ID,

MODULE_MSG_END(MSG_ID_LEC_CODE_TAIL)

/*****************************************************************************
 * End of File
*****************************************************************************/
#endif
