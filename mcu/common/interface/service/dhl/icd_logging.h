/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 *
 * Filename:
 * ---------
 *   icd_logging.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   ICD logging interface
 *
 * Author:
 * -------
 * -------
 * -------
 * -------
 *
 * 10 12 2018 mojo.lai
 * [MOLY00357692] [MDMI] Patch back "MDMI/ICD" from VZW.DCP.SQC.DEV to LR12A.R3.MP
 * 	
 * 	.
 *
 * 06 25 2018 mojo.lai
 * [MOLY00332444] [Gen93][AT&T][ICD] Field Test Mode and ICD EM reporting implementation - ICD framework
 * 	
 * 	ICD 1.26 phase in
 *
 * 06 25 2018 mojo.lai
 * [MOLY00332444] [Gen93][AT&T][ICD] Field Test Mode and ICD EM reporting implementation - ICD framework
 * 	
 * 	ICD 1.26 phase in
 *
 * 06 12 2018 mojo.lai
 * [MOLY00332444] [Gen93][AT&T][ICD] Field Test Mode and ICD EM reporting implementation - ICD framework
 * 	
 * 	ICD 1.26 phase in
 *
 * 06 11 2018 mojo.lai
 * [MOLY00332444] [Gen93][AT&T][ICD] Field Test Mode and ICD EM reporting implementation - ICD framework
 * ICD 1.26 phase in
 *
 * 05 14 2018 mojo.lai
 * [MOLY00325736] ICD 1.26 phase-in
 * 	
 * 	.
 *
 * 04 03 2018 yancy.chien
 * [MOLY00313685] [ICD] Interface Control Document
 * Set max protocol ID to 4.
 *
 * 03 05 2018 yancy.chien
 * [ICD] Multi data API.
 *
 * 02 27 2018 yancy.chien
 * [ICD] MTF stream.
 *
 * 02 26 2018 yancy.chien
 * [ICD] V1.25 phase-in.
 * 	1. Checksum not calculate TIMESTAMP.
 * 	2. Set token of response to command's
 * 	3. Split log_configuration command.
 * 	4. Remove version in command structure.
 * 	5. Trigger DATA_READY when send response for MDM.
 * 	6. Modify policy of MON_TASK for flushing one-shot command response.
 *
 * 02 05 2018 yancy.chien
 * fix protocol_id.
 *
 * 02 05 2018 yancy.chien
 * [ICD] MTF set filter interface.
 *
 * 01 31 2018 yancy.chien
 * [ICD] V1.20.
 * 1. System notification phase-in.
 * 2. Align PROTOCOL_ID with document.
 *
 * 01 30 2018 yancy.chien
 * ICD protocol V1.20 phase-in.
 *
 * 12 27 2017 yancy.chien
 * ICD v1.16 phase-in, including test codes.
 ****************************************************************************/

#ifndef _ICD_LOGGING_H_
#define _ICD_LOGGING_H_

//========================================================================
//============================== defines =================================
//========================================================================

#define    ICD_HEADER_VER    (1)

//========================================================================
//============================== enums ===================================
//========================================================================

typedef enum
{
    ICD_PROTOCOL_ID_COMMON = 0,
    ICD_PROTOCOL_ID_1      = 1,
    ICD_PROTOCOL_ID_2      = 2,
    ICD_PROTOCOL_ID_3      = 3,
    ICD_PROTOCOL_ID_4      = 4,
    ICD_MAX_PROTOCOL_ID    = ICD_PROTOCOL_ID_4
} icd_protocol_id; 

typedef enum
{
    ICD_LOG_EVENT_T = 0,
    ICD_LOG_RECORD_T,
    ICD_LOG_COMMAND_T
} ICD_LOG_TYPE;


// NOTE: Also used as channel mask, so each channel must in individual bit!
typedef enum
{
    ICD_CH_NONE = 0x0,  // means disabled
    ICD_CH_MDM  = 0x1,
    ICD_CH_ELT  = 0x2,
    ICD_CH_MTF  = 0x4,
    ICD_CH_ALL  = 0x7   // ALL bit = 1
} ICD_CH_ID;


typedef enum
{
    ICD_NO_ERROR                        = 0,
    // ICD Record Error: 1~32
    ICD_RECORD_DATA_TOO_LONG            = 1,    
    ICD_RECORD_BUFFER_FULL              = 2,
    ICD_RECORD_FILTER_DISABLED          = 3,
    ICD_RECORD_ID_OUT_OF_RANGE          = 4,
    // ICD Event Error: 33~64
    ICD_EVENT_DATA_TOO_LONG             = 33,
    ICD_EVENT_BUFFER_FULL               = 34,
    ICD_EVENT_FILTER_DISABLED           = 35,
    ICD_EVENT_ID_OUT_OF_RANGE           = 36,
    // ICD Filter Error: 65~75
    ICD_FILTER_OUT                      = 65,
    // ICD System Notification Error: 76~86
    ICD_SYSTEM_NOTIFY_REGISTER_FAIL     = 76,
    ICD_SYSTEM_NOTIFY_UNREGISTER_FAIL   = 77,
    
    // ICD Protocol Error: 87 ~ 96
    ICD_PROTOCOL_ID_OUT_OF_RANGE        = 87,
    
    // Common Error: 200~255
    ICD_NO_SUPPORT = 200,
    // static assign error code, only can add , do not change & reassign 
} icd_error_code; //max is 256 since return type is char


// System Notification

typedef enum
{
    ICD_SYSTEM_NOTIFICATION_RECORD_FILTER_UPDATE = 0, 
    ICD_SYSTEM_NOTIFICATION_EVENT_FILTER_UPDATE,
    ICD_SYSTEM_NOTIFICATION_START_LOGGING,
    ICD_SYSTEM_NOTIFICATION_STOP_LOGGING
} icd_system_notification_event; 


//========================================================================
//============================= structs ==================================
//========================================================================

typedef struct
{
    icd_protocol_id protocol_id;
} icd_record_option_struct;

typedef struct
{
    icd_protocol_id protocol_id;
} icd_event_option_struct;

typedef struct
{
    void *address;
    unsigned int length;
} icd_data_des;


//========================================================================
//============================= typedefs =================================
//========================================================================

typedef kal_uint32 icd_record_code;
typedef kal_uint32 icd_event_code;

typedef kal_uint32 icd_cb_id;

typedef void(*icd_system_notification_cb) (icd_system_notification_event code, int flag, int notification_context_len, kal_uint8* notification_context);


//========================================================================
//====================== function declartions ============================
//========================================================================

// Log API
icd_error_code icd_record_send(icd_record_code code, void* data, unsigned int length, icd_protocol_id protocol_id);
icd_error_code icd_event_send_code(icd_event_code code, icd_protocol_id protocol_id);
icd_error_code icd_event_send_with_payload(icd_event_code code, void* payload, unsigned int length, icd_protocol_id protocol_id);

icd_error_code icd_record_send_multi_data(icd_record_code code, icd_data_des* data_des, unsigned int num_data_des, icd_protocol_id protocol_id);
icd_error_code icd_event_send_multi_data(icd_event_code code, icd_data_des* data_des, unsigned int num_data_des, icd_protocol_id protocol_id);


// Filter
kal_bool icd_record_check_filter(icd_record_code code, icd_protocol_id protocol_id);
kal_bool icd_event_check_filter(icd_event_code code, icd_protocol_id protocol_id);

// System notification
icd_error_code icd_system_notification_register(icd_system_notification_cb callback_func, icd_cb_id *registered_id);
icd_error_code icd_system_notification_unregister(icd_cb_id unregister_id);
void icd_system_notification_run_cbs(icd_system_notification_event code, int flag, int notification_context_len, kal_uint8* notification_context);

// Command
void icd_parse_cmd(ICD_CH_ID ch_id, kal_uint16 len, void* data);
icd_error_code icd_command_response_send(ICD_CH_ID ch_id, kal_uint8 token, kal_uint16 cmd_id, kal_uint32 data_len, void* data);

// MTF Filter Configuration API
kal_bool icd_set_mtf_event_filter(kal_bool on, icd_protocol_id protocol_id, kal_uint32 code);
kal_bool icd_set_mtf_record_filter(kal_bool on, icd_protocol_id protocol_id, kal_uint32 code);

// For DHL internal use now
kal_bool icd_is_mdm_ch_on();



#endif /* _ICD_LOGGING_H_ */

