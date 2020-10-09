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

/*******************************************************************************
 * Filename:
 * ---------
 *   mbmsal_errc_struct.h
 *
 * Project:
 * --------
 *   TK6291
 *
 * Description:
 * ------------
 *   message, enums and common structure definition between MBMSAL and ERRC module
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 08 17 2017 danny.kuo
 * [MOLY00270475] [MT6763][Bianco][N1][NIOT][eMBMS] eMBMS session reception on scell stops at connection release.
 * .
 *
 * 10 24 2016 cynthia.chen
 * [MOLY00208768] [MT6293] [B66] Band66 porting (ERRC part)
 * - errc mbmsal,em part OA domain
 *
 * 03 16 2016 kun-lin.wu
 * [MOLY00166918] SPV eMBMS potential bug fix
 *
 * 02 17 2016 kun-lin.wu
 * [MOLY00162733] [MT6755][Jade M6][MP3][L+W][In-house FTA][eMBMS][EE][ASSERT] file:pcore/modem/l4/mbmsal/src/mbmsal_hdlr.c line:635
 *
 * 02 17 2016 tc.chang
 * [MOLY00159610] eMBMS VzW/LGE requirement.
 *
 * 02 15 2016 kun-lin.wu
 * [MOLY00155092] [MBMS target IT] [CMW500] ml_035f mbms video stream Assert fail: errc_spv_mbms.c 812
 *
 * 06 16 2015 yingwei.huang
 * [MOLY00098916] [MT6291] MBMS reception on SCELL
 * 	.
 *
 * 04 08 2015 morton.lin
 * [MOLY00095623] [eRRC] Gemini virtual mode
 * eMBMS Gemini 2PS phase-in: MBMSAL IF part
 *
 * 01 19 2015 morton.lin
 * [MOLY00078855] [MT6291_DEV] eRRC eMBMS
 * [6291][ERRC][SPV] eMBMS phase-in (UMOLY)
 *
 * 12 12 2014 morton.lin
 * [MOLY00084695] [6291] Code merged from MT6291_DEV to UMOLY TRUNK
 * MBMS IF check-in UMOLY
 *
 * 10 13 2014 morton.lin
 * [MOLY00078855] [MT6291_DEV] eRRC eMBMS
 * Add mcd_l3_inc_struct header inclusion
 *
 * 10 01 2014 morton.lin
 * [MOLY00078855] [MT6291_DEV] eRRC eMBMS
 * Use agreed TMGI structure
 *
 * 09 14 2014 morton.lin
 * [MOLY00068710] [TK6291_DEV] Sync MOLY to TK6291_DEV
 * [ERRC][MBMS][IF] Revise the additional info data structure according to the IF document
 *
 * 09 05 2014 morton.lin
 * [MOLY00068710] [TK6291_DEV] Sync MOLY to TK6291_DEV
 * [MBMSAL][ERRC][IF] Revise daylight saving time format
 *
 * 09 04 2014 cooper.lin
 * [MOLY00068710] [TK6291_DEV] Sync MOLY to TK6291_DEV
 * modify MBMSAL-SPV interface usage, and add MBMSAL_ERRC_SAP
 *
 * 08 20 2014 cooper.lin
 * [MOLY00068710] [TK6291_DEV] Sync MOLY to TK6291_DEV
 * Revise MBMS interface.
 *
 ****************************************************************************/


#ifndef  MBMSAL_ERRC_STRUCT_INC
#define  MBMSAL_ERRC_STRUCT_INC

#include "kal_general_types.h"
#include "mcd_l3_inc_struct.h"  //For plmn_id_struct
#include "global_type.h"

#define MBMS_SERVSESS_INFO_EARFCN_NUM           5
#define MBMS_SERVSESS_INFO_SAI_NUM              64

#define MBMS_SERVICE_STATUS_MBSFN_AREA_NUM      8

#define MBMS_SIB15_FREQ_SAI_NUM                 64
#define MBMS_SIB15_INTER_FREQ_NUM               8
#define MBMS_SIB15_INTER_FREQ_MULTI_BAND_NUM    8

#define MBMS_CONFIG_INFO_MCH_NUM                15
#define MBMS_CONFIG_INFO_SERVICE_NUM            29

#define MBMS_SERVSESS_STATUS_SERVICE_NUM        8

#define ERRC_MBMS_MAX_CELL_NUM                  2

#define ERRC_MBMS_PCELL_VALID                   0X01 
#define ERRC_MBMS_SCELL_VALID                   0X02

/* Duration of searching MBMS session (second) */
#define MBMSAL_SERVSESS_SEARCH_TIME_DEFAULT     15

#define MBMS_INVALID_SESSION_ID                 0xFFFF

#define MBMSAL_OUT_SESS_HYSTERESIS_PERIOD_DEFAULT   10  // refer to VZ_REQ_LTEEMBMS_6987

/***** enums definition *****/
typedef enum 
{
    MBMS_STATUS_COVER_MBMSAREA,
    MBMS_STATUS_COVER_NONMBMSAREA,
    MBMS_STATUS_COVER_OOS,
    MBMS_STATUS_COVER_LEAVELTE,
#if defined(__GEMINI__) && !defined(__SGLTE_DSDS__)
    MBMS_STATUS_COVER_GEMINI_SUSPEND,
    MBMS_STATUS_COVER_GEMINI_VIRTUAL_SUSPEND,
#endif

    MBMS_STATUS_SERVSESS_ACTSUCC,
    MBMS_STATUS_SERVSESS_ACTSUCC_ALREADY_DONE,
    MBMS_STATUS_SERVSESS_ACTFAIL,               // Unknown reason
    MBMS_STATUS_SERVSESS_ACTFAIL_MAX_SESSIONS,
    MBMS_STATUS_SERVSESS_ACTFAIL_MISS_MCCH,
    MBMS_STATUS_SERVSESS_ACTFAIL_MISS_TMGI,
    MBMS_STATUS_SERVSESS_ACTFAIL_OOC,
    MBMS_STATUS_SERVSESS_ACTFAIL_OOS,
    MBMS_STATUS_SERVSESS_ACTFAIL_FREQUENCY_CONFLICT,
    MBMS_STATUS_SERVSESS_DEACTSUCC,
    MBMS_STATUS_SERVSESS_DEACTFAIL,

    // For below causes:
    // 1. MBMSAL assume SPV only report indication when there is any active session before the indication.
    // 2. config_servsess_valid in mbmsal_errc_mbms_servsess_status_ind_struct needs to be KAL_FALSE.
    MBMS_STATUS_SERVSESS_UPDATE,
    MBMS_STATUS_SERVSESS_DEACT_NONMBMSAREA,
    MBMS_STATUS_SERVSESS_DEACT_OOS,
    MBMS_STATUS_SERVSESS_DEACT_LEAVELTE,
    MBMS_STATUS_SERVSESS_DEACT_MBMSDISABLED
#if defined(__GEMINI__) && !defined(__SGLTE_DSDS__)
    , MBMS_STATUS_SERVSESS_DEACT_GEMINI_SUSPEND
    , MBMS_STATUS_SERVSESS_DEACT_GEMINI_VIRTUAL_SUSPEND
#endif
} mbmsal_errc_mbms_status_enum;

typedef enum
{
    DAYLIGHT_SAVING_TIME_NO_ADJ       = 0,
    DAYLIGHT_SAVING_TIME_PLUS_ONE_ADJ = 1,
    DAYLIGHT_SAVING_TIME_PLUS_TWO_ADJ = 2,
    DAYLIGHT_SAVING_TIME_RESV         = 3
} daylight_saving_time_enum;

typedef enum
{
    MBMS_CONFIG_DELETE_NONE,

    /* VZ_REQ_LTEEMBMS_6939:
     * Out of MBMS service area in AP view. On-going sessions are not affected.
     * To prevent the scenario that out of MBMS service is reported but there are active sessions,
     * MBMSAL/AP could send DELETE_ALL_ACTIVE_SERVESS if out-session-hysteresis is configured.
     */
    MBMS_CONFIG_DELETE_ALL_ACTIVE_SERVSESS,

    /* VzW: E911 or hVoLTE flow (AT+EMEVT). Deactivate ALL sessions. */
    MBMS_CONFIG_DELETE_ALL_ACTIVE_AND_ONGOING_SERVSESS,
} mbmsal_errc_config_delete_servsess_enum;

/***** message structure definition *****/
typedef struct 
{
    plmn_id_struct  plmnId;
    kal_uint8       service_id[3]; //Format is [0], [1], [2]
} tmgi_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    kal_bool enable;
    kal_bool mbms_prioritized;
    kal_uint32 search_time;
    kal_uint32 out_sess_hysteresis_period;

    kal_bool servsess_info_valid;
    struct {
        kal_bool enable;
        tmgi_struct tmgi;
        kal_uint16 sess_id; /* 0xffff = invalid */
        kal_bool mbsfn_area_id_valid; /* according to AT Spec, although not one of usd info */
        kal_uint8 mbsfn_area_id; /* according to AT Spec, although not one of usd info */
        kal_bool additional_info_valid;
        struct {
            kal_uint8 num_of_earfcn;
            EARFCN earfcn[MBMS_SERVSESS_INFO_EARFCN_NUM];
            kal_uint8 num_of_sai;
            kal_uint16 sai[MBMS_SERVSESS_INFO_SAI_NUM];
        } additional_info;
    } servsess_info;

    /* servsess_info_valid and deact_type are excluded */
    mbmsal_errc_config_delete_servsess_enum delete_type;
} mbmsal_errc_mbms_config_req_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8 validity;
    //ERRC_MBMS_PCELL_VALID => the following fields apply to Pcell only
    //ERRC_MBMS_SCELL_VALID => the following fields apply to Scell only
    //ERRC_MBMS_PCELL_VALID | ERRC_MBMS_SCELL_VALID => the following fields apply to both Pcell and Scell.
    
    mbmsal_errc_mbms_status_enum coverage_status;
    kal_bool serving_earfcn_valid[ERRC_MBMS_MAX_CELL_NUM];
    EARFCN serving_earfcn[ERRC_MBMS_MAX_CELL_NUM];
    kal_uint8 num_of_mbsfn_area_id[ERRC_MBMS_MAX_CELL_NUM];
    kal_uint8 mbsfn_area_id[ERRC_MBMS_MAX_CELL_NUM][MBMS_SERVICE_STATUS_MBSFN_AREA_NUM];
} mbmsal_errc_mbms_service_status_ind_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8 validity;
    
    EARFCN serving_earfcn[ERRC_MBMS_MAX_CELL_NUM];
    kal_uint8 num_of_intra_freq_sai[ERRC_MBMS_MAX_CELL_NUM];
    kal_uint16 intra_freq_SAI[ERRC_MBMS_MAX_CELL_NUM][MBMS_SIB15_FREQ_SAI_NUM];
    kal_uint8 num_of_inter_freq_sai_list[ERRC_MBMS_MAX_CELL_NUM];
    struct {
        EARFCN earfcn;
        kal_uint8 num_of_sai;
        kal_uint16 sai[MBMS_SIB15_FREQ_SAI_NUM];
        kal_uint8 num_of_multi_band_info;
        kal_uint16 multi_band_info[MBMS_SIB15_INTER_FREQ_MULTI_BAND_NUM];
    } inter_freq_SAI_list[ERRC_MBMS_MAX_CELL_NUM][MBMS_SIB15_INTER_FREQ_NUM];
} mbmsal_errc_mbms_sib15_ind_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8 validity;
    
    EARFCN serving_earfcn[ERRC_MBMS_MAX_CELL_NUM];
    kal_uint64 utc[ERRC_MBMS_MAX_CELL_NUM];
    kal_bool daylight_saving_time_valid[ERRC_MBMS_MAX_CELL_NUM]; /* false = clear daylight saving time */
    daylight_saving_time_enum daylight_saving_time[ERRC_MBMS_MAX_CELL_NUM];
    kal_int16 leap_seconds[ERRC_MBMS_MAX_CELL_NUM]; /* 0xffff = clear */
    kal_int8 local_time_offset[ERRC_MBMS_MAX_CELL_NUM]; /* 0xff = clear */
    kal_uint32 rcv_os_time[ERRC_MBMS_MAX_CELL_NUM];
} mbmsal_errc_mbms_sib16_ind_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint8 validity;
    
    EARFCN serving_earfcn[ERRC_MBMS_MAX_CELL_NUM];
    kal_uint8 mbsfn_area_id[ERRC_MBMS_MAX_CELL_NUM];
    kal_uint8 num_of_mch_info[ERRC_MBMS_MAX_CELL_NUM];
    struct {
        kal_uint8 num_of_servsess_info;
        struct {
            tmgi_struct tmgi;
            kal_uint16 sess_id; /* 0xffff = invalid */
        } servsess_info[MBMS_CONFIG_INFO_SERVICE_NUM];
    } mch_info[ERRC_MBMS_MAX_CELL_NUM][MBMS_CONFIG_INFO_MCH_NUM];
} mbmsal_errc_mbms_config_info_ind_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    EARFCN serving_earfcn;
    mbmsal_errc_mbms_status_enum servsess_status; /* Caution: MBMSAL has assumption for each status. Refer to enum definication for details. */
    kal_bool act_servsess_valid; /* FALSE means no active servsess */
    struct {
        kal_bool valid;
        tmgi_struct tmgi;
        kal_uint16 sess_id; /* 0xffff = invalid */
    } act_servsess[MBMS_SERVSESS_STATUS_SERVICE_NUM];
    kal_bool config_servsess_valid;
    struct {
        tmgi_struct tmgi;
        kal_uint16 sess_id; /* 0xffff = invalid */
    } config_servsess;
} mbmsal_errc_mbms_servsess_status_ind_struct;


#endif   /* ----- #ifndef MBMSAL_ERRC_STRUCT_INC ----- */

