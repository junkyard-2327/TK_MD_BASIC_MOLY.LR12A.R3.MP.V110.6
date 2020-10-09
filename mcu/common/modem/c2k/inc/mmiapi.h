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
* Copyright (c) 2006-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef _UI_API_H_
#define _UI_API_H_
/*****************************************************************************
*
* FILE NAME:  uiapi.h
*
* DESCRIPTION:
*   This file contains definitions and types for the UI software unit.
*
* HISTORY    :
*   See Log at end of file
*
*
*****************************************************************************/

#include "monapi.h"
//#include "valfsiapi.h"
//#include "valdispapi.h"
//#include "valsndapi.h"
#include "valsmsapi.h"

#define NUM_UI_LOCK_CODE_DIGITS 7
#define LOCK_CODE_LENGTH_AFTER_MDN_UPDATE 4
#define LOCK_CODE_LENGTH_AFTER_ESN_UPDATE 4

#define UI_MAIN_MAILBOX_ID          EXE_MAILBOX_1_ID
#define UI_MAIN_MAIL_TYPE           EXE_MAILBOX_1
#define VTUI_MESSAGE_TYPE           UI_MAIN_MAIL_TYPE
#define UI_ONE_SEC_TIMER_ID         (kal_uint32)2
#define UI_AUTO_ANSWER_TIMER_ID     (kal_uint32)6

#define UI_TIMER_RESET                      0
#define UI_TIMER_RESTART                    1
#define UI_ONE_SEC_TIMEOUT_VALUE            1000  /* msecs */

#define UI_ONE_SEC_TIMEOUT_SIGNAL           EXE_SIGNAL_11
#define UI_DEEP_SLEEP_TIME_SLICE_DEFAULT    0     /* 0 msecs (off) */
#define UI_TASK_STOP_SIG                    EXE_SIGNAL_20

#define UI_TRACE( x )  MonTrace( MON_CP_UI_GENERIC_TRACE_ID, 1, x )

enum EventCatT {
  CALL_PROCESSING_CATE  = 1,
  SMS_CATE              = 2,
  DATA_CATE             = 3,
  KEY_CATE              = 4,
  ACCESSORY_CATE        = 5,
  WINDOW_CATE           = 6,
  SOFTICON_CATE         = 7,
  APPLICATION_CATE      = 8,
  GENERAL_UI_CATE
};

enum EventBitT {
  CALL_PROCESSING_BIT  = 1 << (CALL_PROCESSING_CATE - 1),
  SMS_BIT              = 1 << (SMS_CATE - 1),
  DATA_BIT             = 1 << (DATA_CATE - 1),
  KEY_BIT              = 1 << (KEY_CATE - 1),
  ACCESSORY_BIT        = 1 << (ACCESSORY_CATE - 1),
  WINDOW_BIT           = 1 << (WINDOW_CATE - 1),
  SOFTICON_BIT         = 1 << (SOFTICON_CATE - 1),
  APPLICATION_BIT      = 1 << (APPLICATION_CATE - 1),
  GENERAL_UI_BIT       = 1 << (GENERAL_UI_CATE - 1),
  ALL_BIT              = 0x7FFFFFFF
};
#define GROUP_BIT_LOCATION 12
#define APPCAT(group,id) (0x01000000                    | \
                          (group << GROUP_BIT_LOCATION) | \
                          ((id) & 0x0FFF))
#define GROUP_MASK 0x000FF000
#define GET_MAIL_GROUP(MsgId) (((MsgId) & GROUP_MASK) >> GROUP_BIT_LOCATION)

#define MSGID_OF_GROUP_MASK 0x00000FFF
#define GET_MSGID_OF_GROUP(MsgId) ((MsgId) & MSGID_OF_GROUP_MASK)

#define CHVAPP                  1
#define VALTESTAPP              2

#define MAX_NUM_OF_APP          35  //add new app before this definition and increase this value

#define   CHVAPP_LAUNCH                 APPCAT(CHVAPP, 1)
#define   CHVAPP_CHV_CHECK              APPCAT(CHVAPP, 2)
#define   CHVAPP_UIM_CHECK              APPCAT(CHVAPP, 3)
#define   CHVAPP_SP_CHECK               APPCAT(CHVAPP, 4)
#define   CHVAPP_AREA_CHECK             APPCAT(CHVAPP, 5)
#define   CHVAPP_ALL_PASSED             APPCAT(CHVAPP, 6)
#define   CHVAPP_ENTER_PIN              APPCAT(CHVAPP, 7)
#define   CHVAPP_CLEAR_PIN              APPCAT(CHVAPP, 8)
#define   CHVAPP_ENABLE_PIN_MENU        APPCAT(CHVAPP, 9) //TEMP USE
#define   CHVAPP_DISABLE_PIN_MENU       APPCAT(CHVAPP, 10)
#define   CHVAPP_ENTER_PUK              APPCAT(CHVAPP, 11)
#define   CHVAPP_PUK_CHECK              APPCAT(CHVAPP, 12)
#define   CHVAPP_CHANGE_PIN_MENU        APPCAT(CHVAPP, 13)
#define   CHVAPP_CHANGE_PIN_OK          APPCAT(CHVAPP, 14)
#define   CHVAPP_CANCEL_DLG             APPCAT(CHVAPP, 15)
#define   CHVAPP_GET_NAM                APPCAT(CHVAPP, 16)
#define   CHVAPP_GET_IMSI               APPCAT(CHVAPP, 17)
#define   CHVAPP_OPEN_MAIN_MENU         APPCAT(CHVAPP, 18)


#define  UI_SET_DEEP_SLEEP_TIME_SLICE_MSG  APPCAT( VALTESTAPP,  1 )

#define  UI_SET_RINGER_FILE                APPCAT( VALTESTAPP, 10 )
#define  UI_PLAY_MUSIC_FILE                APPCAT( VALTESTAPP, 11 )
#define  UI_AUDIO_VIDEO_FILE               APPCAT( VALTESTAPP, 12 )
#define  UI_SET_BACKGROUND                 APPCAT( VALTESTAPP, 13 )
#define  UI_DRAW_BACKGROUND                APPCAT( VALTESTAPP, 14 )
#define  UI_DRAW_ANIMATION                 APPCAT( VALTESTAPP, 15 )
#define  UI_DRAW_NEXT_ANIMATION            APPCAT( VALTESTAPP, 16 )
#define  UI_STOP_ANIMATION                 APPCAT( VALTESTAPP, 17 )
#define  UI_SET_AUTO_ANSWER_MSG            APPCAT( VALTESTAPP, 18 )
#define  UI_SET_PRIVACY_MODE_MSG           APPCAT( VALTESTAPP, 19 )
#define  UI_SET_AUTO_ANSWER_DELAY_MSG      APPCAT( VALTESTAPP, 20 )
#define  UI_SET_DTMF_TYPE_MSG              APPCAT( VALTESTAPP, 21 )
#define  UI_DBM_READ_NAM_MSG               APPCAT( VALTESTAPP, 22 )
#define  UI_PERMDATA_READ_MSG              APPCAT( VALTESTAPP, 23 )
#define  UI_START_REFUBISH_AGING_TEST_MSG  APPCAT( VALTESTAPP, 24 )
#define  UI_STOP_REFUBISH_AGING_TEST_MSG   APPCAT( VALTESTAPP, 25 )
#define  UI_REFUBISH_AGING_INC_PWR_MSG     APPCAT( VALTESTAPP, 26 )
#define  UI_REFUBISH_AGING_DEC_PWR_MSG     APPCAT( VALTESTAPP, 27 )
#define  UI_GET_AUTO_ANSWER_STATUS_MSG     APPCAT( VALTESTAPP, 28 )
#define  UI_GET_MUSIC_PLAY_TIME_MSG        APPCAT( VALTESTAPP, 29 )

#define  UI_VAL_NET_INITIALIZE             APPCAT( VALTESTAPP, 30 )
#define  UI_VAL_NET_PPP_OPEN               APPCAT( VALTESTAPP, 31 )
#define  UI_VAL_NET_PPP_CLOSE              APPCAT( VALTESTAPP, 32 )
#define  UI_VAL_NET_PPP_DORMANT_REQ        APPCAT( VALTESTAPP, 33 )
#define  UI_VAL_NET_GET_PPP_STATUS         APPCAT( VALTESTAPP, 34 )
#define  UI_VAL_NET_EVENT_SELECT           APPCAT( VALTESTAPP, 35 )
#define  UI_VAL_NET_SOCKET                 APPCAT( VALTESTAPP, 36 )
#define  UI_VAL_NET_CONNECT                APPCAT( VALTESTAPP, 37 )
#define  UI_VAL_NET_CLOSE                  APPCAT( VALTESTAPP, 38 )
#define  UI_VAL_NET_GET_SOCK_STATUS        APPCAT( VALTESTAPP, 39 )
#define  UI_VAL_NET_RECV                   APPCAT( VALTESTAPP, 40 )
#define  UI_VAL_NET_SEND                   APPCAT( VALTESTAPP, 41 )
#define  UI_VAL_NET_BIND                   APPCAT( VALTESTAPP, 42 )
#define  UI_VAL_NET_LISTEN                 APPCAT( VALTESTAPP, 43 )
#define  UI_VAL_NET_ACCEPT                 APPCAT( VALTESTAPP, 44 )
#define  UI_VAL_NET_SEND_TO                APPCAT( VALTESTAPP, 45 )
#define  UI_VAL_NET_RECV_FROM              APPCAT( VALTESTAPP, 46 )
#define  UI_VAL_NET_GET_HOST_BY_NAME       APPCAT( VALTESTAPP, 47 )
#define  UI_VAL_NET_INET_ADDR              APPCAT( VALTESTAPP, 48 )
#define  UI_VAL_NET_GET_PPP_AUTH_PARMS     APPCAT( VALTESTAPP, 49 )
#define  UI_VAL_NET_SET_PPP_AUTH_PARMS     APPCAT( VALTESTAPP, 50 )
#define  UI_VAL_NET_GET_DIAL_STR_PARMS     APPCAT( VALTESTAPP, 51 )
#define  UI_VAL_NET_SET_DIAL_STR_PARMS     APPCAT( VALTESTAPP, 52 )
#define  UI_VAL_NET_SET_RLP_INACT_TMO_REQ  APPCAT( VALTESTAPP, 53 )
#define  UI_VAL_NET_GET_RLP_SETTING        APPCAT( VALTESTAPP, 54 )
#define  UI_VAL_NET_SET_RLP_SETTING        APPCAT( VALTESTAPP, 55 )
#define  UI_VAL_NET_GET_IP_ADDRESS         APPCAT( VALTESTAPP, 56 )
#define  UI_VAL_NET_GET_DNS_SERVER_IP_ADDR APPCAT( VALTESTAPP, 57 )
#define  UI_VAL_NET_GET_PEER_NAME          APPCAT( VALTESTAPP, 58 )
#define  UI_VAL_NET_SET_DNS_SERVER_IP_ADDR APPCAT( VALTESTAPP, 59 )
#ifdef MTK_CBP
#define  UI_VAL_NET_SEND_PING              APPCAT( VALTESTAPP, 60 )
#define  UI_VAL_NET_STOP_PING              APPCAT( VALTESTAPP, 61 )
#endif /*MTK_CBP*/

#define  UI_VAL_PSW_INITIATE_CALL          APPCAT( VALTESTAPP, 101 )
#define  UI_VAL_PSW_ANSWER_CALL            APPCAT( VALTESTAPP, 102 )
#define  UI_VAL_PSW_HANGUP_CALL            APPCAT( VALTESTAPP, 103 )
#define  UI_VAL_CHANGE_AKEY                APPCAT( VALTESTAPP, 104 )
#define  UI_VAL_SET_PRL_ENABLE             APPCAT( VALTESTAPP, 105 )
#define  UI_VAL_GET_ACTIVE_NAM             APPCAT( VALTESTAPP, 106 )
#define  UI_VAL_SET_ACTIVE_NAM             APPCAT( VALTESTAPP, 107 )
#define  UI_VAL_GET_AKEY_CHECKSUM          APPCAT( VALTESTAPP, 108 )
#define  UI_VAL_E911_DISABLE               APPCAT( VALTESTAPP, 109 )
#define  UI_VAL_AUTO_RETRY_ENABLE          APPCAT( VALTESTAPP, 110 )
#define  UI_VAL_AUTO_RETRY_DISABLE         APPCAT( VALTESTAPP, 111 )
#define  UI_VAL_SMS_START_REG_SRV          APPCAT( VALTESTAPP, 112 )
#define  UI_VAL_SMS_STOP_REG_SRV           APPCAT( VALTESTAPP, 113 )
#define  UI_VAL_SMS_SET_PREF_SVC_OPT       APPCAT( VALTESTAPP, 114 )
#define  UI_VAL_SMS_SET_BROADCAST_PARMS    APPCAT( VALTESTAPP, 115 )
#define  UI_VAL_SMS_SET_STORAGE            APPCAT( VALTESTAPP, 116 )
#define  UI_VAL_SMS_SEND_TEXT_MESSAGE      APPCAT( VALTESTAPP, 117 )
#define  UI_VAL_SMS_SEND_PDU_MESSAGE       APPCAT( VALTESTAPP, 118 )

#define  UI_VAL_GET_PHB_REC_PARAMS         APPCAT( VALTESTAPP, 131 )
#define  UI_VAL_GET_PHB_RECORD             APPCAT( VALTESTAPP, 132 )
#define  UI_VAL_UPDATE_PHB_RECORD          APPCAT( VALTESTAPP, 133 )
#define  UI_VAL_ERASE_PHB_RECORD           APPCAT( VALTESTAPP, 134 )
#define  UI_VAL_GET_SMS_REC_PARAMS         APPCAT( VALTESTAPP, 135 )
#define  UI_VAL_GET_SMS_RECORD             APPCAT( VALTESTAPP, 136 )
#define  UI_VAL_UPDATE_SMS_RECORD          APPCAT( VALTESTAPP, 137 )
#define  UI_VAL_ERASE_SMS_RECORD           APPCAT( VALTESTAPP, 138 )
#define  UI_VAL_CHV_GET_STATUS             APPCAT( VALTESTAPP, 139 )
#define  UI_VAL_CHV_VERIFY                 APPCAT( VALTESTAPP, 140 )
#define  UI_VAL_CHV_CHANGE                 APPCAT( VALTESTAPP, 141 )
#define  UI_VAL_CHV_DISABLE                APPCAT( VALTESTAPP, 142 )
#define  UI_VAL_CHV_ENABLE                 APPCAT( VALTESTAPP, 143 )
#define  UI_VAL_CHV_UNBLOCK                APPCAT( VALTESTAPP, 144 )
#define  UI_VAL_GET_MAX_MDN_REC_NUM        APPCAT( VALTESTAPP, 145 )
#define  UI_VAL_GET_MDN_REC                APPCAT( VALTESTAPP, 146 )
#define  UI_VAL_UPDATE_MDN_REC             APPCAT( VALTESTAPP, 147 )
#define  UI_VAL_DEL_MDN_REC                APPCAT( VALTESTAPP, 148 )
#define  UI_VAL_UTK_PROFILE_INIT           APPCAT( VALTESTAPP, 149 )
#define  UI_VAL_UTK_EXIT                   APPCAT( VALTESTAPP, 150 )
#define  UI_VAL_UTK_SMS_DOWNLOAD           APPCAT( VALTESTAPP, 151 )
#define  UI_VAL_UTK_SELECT_MENU            APPCAT( VALTESTAPP, 152 )
#define  UI_VAL_UTK_COMM_CMD_RESULT        APPCAT( VALTESTAPP, 153 )
#define  UI_VAL_UTK_GET_INPUT_DONE         APPCAT( VALTESTAPP, 154 )
#define  UI_VAL_FIRMWARE_VER_RSP_MSG       APPCAT( VALTESTAPP, 155 )

#define  UI_PCM_PROCESS_ENABLE_MSG         APPCAT( VALTESTAPP, 156 )
#define  UI_PCM_FRAME_INPUT_MSG            APPCAT( VALTESTAPP, 157 )
#define  UI_DISPLAY_ENABLE_MSG             APPCAT( VALTESTAPP, 158 )
#define  UI_MUSIC_RECORD_MSG               APPCAT( VALTESTAPP, 159 )

#define  UI_SET_PARM_MSG              APPCAT( VALTESTAPP, 192 )
#define  UI_GET_PARM_MSG              APPCAT( VALTESTAPP, 193 )


#define  UI_TEST_MAX_FILE_NAME_LEN         256
#define  UI_TEST_MAX_ANIMATION_IMAGES      10


/**********************
 * MESSAGE STRUCTURES
 **********************/
/* UI_SET_DEEP_SLEEP_TIME_SLICE_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint32  TimeSlice;
} PACKED_POSTFIX  UiSetDeepSleepTimeSliceMsgT;

typedef PACKED_PREFIX struct
{
  char FileName[UI_TEST_MAX_FILE_NAME_LEN + 1];
} PACKED_POSTFIX  UiSetRingerFileMsgT;

typedef PACKED_PREFIX struct
{
  char FileName[UI_TEST_MAX_FILE_NAME_LEN + 1];
  kal_uint32 BaseOffset;
  kal_uint32 DataOffset;
} PACKED_POSTFIX  UiPlayRingerFileMsgT;

typedef enum
{
    UI_AUDIO_VIDEO_PLAY_CMD,
    UI_AUDIO_VIDEO_FAST_FWD_CMD,
    UI_AUDIO_VIDEO_REWIND_CMD,
    UI_AUDIO_VIDEO_PAUSE_CMD,
    UI_AUDIO_VIDEO_RESUME_CMD,
    UI_AUDIO_VIDEO_GET_POS_CMD,
    UI_AUDIO_VIDEO_SET_POS_CMD,
    UI_AUDIO_VIDEO_GET_PLAYTIME_CMD,
    UI_AUDIO_VIDEO_STOP_CMD
} UiAudioVideoCmdT;

typedef PACKED_PREFIX struct
{
  ExeRspMsgT RspInfo;
  UiAudioVideoCmdT Cmd;
  char             FileName[UI_TEST_MAX_FILE_NAME_LEN + 1];
  kal_uint32           BaseOffset;
  kal_uint32           PositionSet;
} PACKED_POSTFIX  UiAudioVideoFileMsgT;

typedef PACKED_PREFIX struct
{
  UiAudioVideoCmdT Cmd;
  kal_uint16           Mp4Result;  /* Use ValMp4StatusT enum */
  kal_uint16           AppResult;  /* Use ValAppStatusT enum */
  kal_uint32           ElapsedTime;
} PACKED_POSTFIX  UiAudioVideoFileRspMsgT;

typedef PACKED_PREFIX struct
{
    ExeRspMsgT           RspInfo;
    kal_uint8      Format;
    kal_uint8 SamplingRate;
    kal_uint8                NumChan;
    char                 FileName [UI_TEST_MAX_FILE_NAME_LEN + 1];
} PACKED_POSTFIX  UiMusicRecordMsgT;

typedef PACKED_PREFIX struct
{
    ValAppStatusT  Result;
} PACKED_POSTFIX  UiMusicRecordRspMsgT;

typedef PACKED_PREFIX struct
{
    ExeRspMsgT RspInfo;
    char       FileName [UI_TEST_MAX_FILE_NAME_LEN + 1];
    kal_uint8     *DataP;
    kal_uint32     DataBytes;
    kal_uint8 MusicType;
} PACKED_POSTFIX  UiGetMusicPlayTimeMsgT;

typedef PACKED_PREFIX struct
{
    kal_uint32  TotalTimeSecs;
} PACKED_POSTFIX  UiGetMusicPlayTimeRspMsgT;

typedef PACKED_PREFIX struct
{
  char       FileName[UI_TEST_MAX_FILE_NAME_LEN + 1];
  kal_uint16     TextColor;
} PACKED_POSTFIX  UiDrawBackgroundMsgT;

typedef enum
{
    UI_TEST_ANIMATION_ONE_CYCLE,
    UI_TEST_ANIMATION_FOREVER
} UiAnimationCyclesT;

typedef PACKED_PREFIX struct
{
  kal_uint8     OutImageFormat;
  UiAnimationCyclesT NumCycles;
  kal_uint16             MSecsBetweenImages;
  kal_uint16             MSecsAfterLastImage;
  char ImageFileName [UI_TEST_MAX_ANIMATION_IMAGES] [UI_TEST_MAX_FILE_NAME_LEN + 1];
  char MusicFileName [UI_TEST_MAX_FILE_NAME_LEN + 1];
} PACKED_POSTFIX  UiDrawAnimationMsgT;

typedef PACKED_PREFIX struct
{
  kal_bool  Enabled;
} PACKED_POSTFIX  UiSetAutoAnswerMsgT;

typedef PACKED_PREFIX struct
{
  kal_uint16  AutoAnswerDelay;    /* msec */
} PACKED_POSTFIX  UiSetAutoAnswerDelayMsgT;

typedef PACKED_PREFIX struct
{
    ExeRspMsgT  RspInfo;
} PACKED_POSTFIX  UiGetAutoAnswerReqMsgT;

typedef PACKED_PREFIX struct
{
  kal_bool    Enabled;
  kal_uint16  AutoAnswerDelay;    /* msec */
} PACKED_POSTFIX  UiGetAutoAnswerRspMsgT;

typedef enum
{
    MAX_DELAY_20MSEC,
    MAX_DELAY_40MSEC
} PcmProcessDelayT;

typedef PACKED_PREFIX struct
{
    kal_bool             Enable;
    PcmProcessDelayT Delay;
} PACKED_POSTFIX  UiPcmProcessEnableMsgT;

typedef PACKED_PREFIX struct
{
    kal_bool  Enable;
} PACKED_POSTFIX  UiDisplayEnableMsgT;

typedef PACKED_PREFIX struct
{
  kal_uint8  DtmfType;     /* VAL_SOUND_BURST or VAL_SOUND_CONTINUES */
} PACKED_POSTFIX  UiSetDtmfTypeMsgT;

typedef PACKED_PREFIX struct
{
  kal_bool  Mode;
} PACKED_POSTFIX  UiSetPrivacyModeMsgT;

/* UI_VAL_FIRMWARE_VER_RSP_MSG */
typedef PACKED_PREFIX struct
{
  kal_uint8  VerInfo[3];
  kal_uint8  TimeInfo[5];
} PACKED_POSTFIX  VersionT;

typedef PACKED_PREFIX struct
{
   VersionT CpVersion;
   VersionT DspmVersion;
   VersionT DspvVersion;
} PACKED_POSTFIX  FirmwareVersionT;

typedef PACKED_PREFIX struct
{
   kal_uint8  Band;
	kal_uint16 Channel;
} PACKED_POSTFIX  UiRefurbishAgingTestT;

typedef enum
{
   DTMF_MODE_BURST_MASK       =0x0001,  /*Bit0 represents DTMF_MODE, 1 = BURST, 0 = CONTINUOUS*/
   VOICE_PRIVACY_ENABLED_MASK =0x0002,
   AUTO_ANSWER_ENABLED_MASK   =0x0004,
   AUTO_REDIAL_ENABLED_MASK   =0x0008,
   VOICE_PRIVACY_ALERT_MASK   =0x0010,
   AUTO_POWER_ENABLE_MASK     =0x0020

} UiParameterMaskT;


typedef enum
{
   UI_PARM_SET_DTMF_MODE,
   UI_PARM_GET_DTMF_MODE,
   UI_PARM_SET_VOICE_PRIVACY,
   UI_PARM_GET_VOICE_PRIVACY,
   UI_PARM_SET_LOCK_CODE,
   UI_PARM_GET_LOCK_CODE,
   UI_PARM_SET_AUTO_ANSWER_MODE,
   UI_PARM_GET_AUTO_ANSWER_MODE,
   UI_PARM_INIT_MISC_DATABASE,
   UI_PARM_SET_AUTO_REDIAL_MODE,
   UI_PARM_GET_AUTO_REDIAL_MODE,
   UI_PARM_SET_VOICE_PRIVACY_ALERT_MODE,
   UI_PARM_GET_VOICE_PRIVACY_ALERT_MODE,
   UI_PARM_SET_SMS_CHANNEL,
   UI_PARM_GET_SMS_CHANNEL,
   UI_PARM_SET_SMS_PREF_SO,
   UI_PARM_GET_SMS_PREF_SO,
   UI_PARM_SET_AUTO_POWER_UP,
   UI_PARM_GET_AUTO_POWER_UP

} UiParmOperationId;

typedef enum
{
  UI_PARM_MIN_VALUE,
  UI_PARM_MAX_VALUE,
  UI_PARM_DEFAULT_VALUE,
  UI_PARM_CUSTOM_VALUE,
  UI_PARM_OP_TYPE_LIST_END
} UiParmOperationType;

typedef enum
{
 UI_PARM_OPERATION_SUCCESS,
 UI_PARM_OPERATION_FAIL_READ_NOT_ALLOWED,
 UI_PARM_OPERATION_FAIL_WRITE_NOT_ALLOWED,
 UI_PARM_OPERATION_PARAMETER_NOT_SUPPORTED,
 UI_PARM_OPERATION_INTERFACE_NOT_SUPPORTED,
 UI_PARM_OPERATION_FAIL_VALUE_OUT_OF_RANGE

} UiParmAccessResultCode;

typedef PACKED_PREFIX struct
{
   ExeRspMsgT  RspInfo;          /*Response routing information */
   UiParmOperationId ParmId;
   UiParmOperationType opType;
} PACKED_POSTFIX  UiGetParmMsgT;

typedef PACKED_PREFIX struct
{
   UiParmOperationId ParmId;
   UiParmAccessResultCode result;
   kal_uint8 data;
} PACKED_POSTFIX  UiGetParmRspMsgT;

typedef PACKED_PREFIX struct
{
   ExeRspMsgT  RspInfo;         /* Response routing information */
   UiParmOperationId ParmId;
   UiParmOperationType opType;
   kal_uint8 data;
} PACKED_POSTFIX  UiSetParmMsgT;

typedef PACKED_PREFIX struct
{
   UiParmOperationId ParmId;
   UiParmAccessResultCode result;
} PACKED_POSTFIX  UiSetParmRspMsgT;

typedef enum
{
  UI_DTMF_CONTINUOUS=0,
  UI_DTMF_BURST
} UiDTMFMode;
typedef PACKED_PREFIX struct
{
  UiDTMFMode DTMFType;
} PACKED_POSTFIX  UiDTMFMode_APIStruct;

typedef enum
{
  UI_VOICE_PRIVACY_DISABLED=0,
  UI_VOICE_PRIVACY_ENABLED
} UiVoicePrivacyMode;

typedef PACKED_PREFIX struct
{
  UiVoicePrivacyMode PrivacyMode;
} PACKED_POSTFIX  UiVoicePrivacyMode_APIStruct;

typedef PACKED_PREFIX struct
{
  char LockCode[NUM_UI_LOCK_CODE_DIGITS];
} PACKED_POSTFIX  UiLockCode_APIStruct;



typedef PACKED_PREFIX struct
{
	kal_bool AutoAnswerMode;
   kal_uint8 Rings;
} PACKED_POSTFIX UiAutoAnswerMode_APIStruct;

typedef enum
{
   SECONDS_10,
   SECONDS_30,
   SECONDS_60
} AutoRedialIntervalType;

typedef PACKED_PREFIX struct
{
   kal_bool AutoRedialMode;
   AutoRedialIntervalType Interval;
} PACKED_POSTFIX  UiAutoRedialMode_APIStruct;

typedef PACKED_PREFIX struct
{
   kal_bool VoicePrivacyAlertMode;
} PACKED_POSTFIX  UiVoicePrivacyAlertMode_APIStruct;

typedef PACKED_PREFIX struct
{
/*
   ValSmsChannelT Channel;
*/
/* obsolete api*/
  kal_uint8  Channel;
} PACKED_POSTFIX  UiSmsChannel_APIStruct;

typedef PACKED_PREFIX struct
{
   kal_uint16 SO;
} PACKED_POSTFIX  UiSmsPrefSO_APIStruct;


typedef PACKED_PREFIX struct
{
   kal_bool AutoPowerEnabled;
} PACKED_POSTFIX  UiAutoPower_APIStruct;


#endif



