#ifndef MODEMKC_LOG_COMMON_H
#define MODEMKC_LOG_COMMON_H
/*====*====*====*====*====*====*====*====*====*====*====*====*====*====*===*/
/** @ingroup modemkc_log

@file modemkc_log_common.h

@par DESCRIPTION
  Definitions related to API of FEATURE_KC_MODEMKC_LOG

@par EXTERNALIZED FUNCTIONS
  None

@par Copyright
  (c) 2019 KYOCERA CORPORATION.  All Rights Reserved.
*/
#ifdef __MODEMKC_LOG__
/*====*====*====*====*====*====*====*====*====*====*====*====*====*====*===*/

/*===========================================================================

                         INCLUDE FILES FOR MODULE

===========================================================================*/

/*===========================================================================

                  DEFINITIONS AND DECLARATIONS FOR MODULE

===========================================================================*/

/* --------------------------------------------------------------------------
** Constant / Define Declarations
** --------------------------------------------------------------------------
*/

#define PACKED
#define PACKED_POST __attribute__((__packed__))

/* --------------------------------------------------------------------------
** Type Declarations
** --------------------------------------------------------------------------
*/

//DDM PART
typedef enum _ddm_kclog_cvext_enum {
    DDM_KCLOG_CM_CALL_EVENT_GET_PDN_CONN_IND, 
    DDM_KCLOG_CM_CALL_EVENT_END,
    DDM_KCLOG_CM_CALL_EVENT_PDN_CONN_REJ_IND,
    DDM_KCLOG_CM_CALL_EVENT_PDN_CONN_FAIL_IND,
    DDM_KCLOG_CM_CALL_EVENT_MAX
} ddm_kclog_cvext_enum;

/** @ingroup modemkc_log_api
 * This is used for MODEMKC_LOG API to identify the logging feature. */
typedef enum modemkc_log_feature_enum
{
    MODEMKC_LOG_FEATURE_COMMON = 0,
    MODEMKC_LOG_FEATURE_IMS = 1,
    MODEMKC_LOG_FEATURE_LTE = 2,
    MODEMKC_LOG_FEATURE_DS = 3,

    MODEMKC_LOG_FEATURE_MAX = 15
} modemkc_log_feature_enum_type;


/** @ingroup modemkc_log_api
 * This is used for MODEMKC_LOG API to identify the log category in Common feature. */
typedef enum modemkc_log_logid_common_enum
{
    MODEMKC_LOG_LOGID_COMMON_UNKNOWN = 0,
    MODEMKC_LOG_LOGID_COMMON_DEFAULT = 0,

    MODEMKC_LOG_LOGID_COMMON_INITIALIZED = 1,      /**< is logged when MODEMKC_LOG feature is initialized. */
    MODEMKC_LOG_LOGID_COMMON_OPERATION_MODE = 2,   /**< is logged with #sys_oprt_mode_e_type value when operation mode is changed. */
    MODEMKC_LOG_LOGID_COMMON_SW_MBN_VER = 3,       /**< is logged with #modemkc_log_rec_common_mbn_ver_str value
                                                        when SW MBN version is updated and when subscription is availabled.*/
    MODEMKC_LOG_LOGID_COMMON_HW_MBN_VER = 4,       /**< is logged with #modemkc_log_rec_common_mbn_ver_str value
                                                        when SW MBN version is updated. */
    MODEMKC_LOG_LOGID_COMMON_REFRESH_COMPLETE = 5, /**< is logged with Subscription ID when the refresh is completed. */

    MODEMKC_LOG_LOGID_COMMON_MAX = 255
} modemkc_log_logid_common_enum_type;

typedef struct MODEMKC_LOG_REC_COMMON_OPERATION_MODE_STR 
{
    kal_uint8  operation_mode;     /**< Operation mode if supported
                        - Values:
                            - -1 -> DCM_RAT_NO_OP
                            - 0 -> COMMON_OPERATION_MODE_UNKNOWN
                            - 1 -> COMMON_OPERATION_MODE_RESET
                            - 2 -> COMMON_OPERATION_MODE_RADIO_OFF
                            - 3 -> COMMON_OPERATION_MODE_POWER_OFF
                            */
} modemkc_log_rec_common_operation_mode_str;


typedef enum modemkc_log_logid_common_operation_mode_enum
{
    MODEMKC_LOG_LOGID_COMMON_OPERATION_MODE_UNKNOWN = 0,
    MODEMKC_LOG_LOGID_COMMON_OPERATION_MODE_DEFAULT = 0,
    MODEMKC_LOG_LOGID_COMMON_OPERATION_MODE_RESET = 1,
    MODEMKC_LOG_LOGID_COMMON_OPERATION_MODE_RADIO_OFF = 2,
    MODEMKC_LOG_LOGID_COMMON_OPERATION_MODE_POWER_OFF =3, 

    MODEMKC_LOG_LOGID_COMMON_OPERATION_MODE_MAX = 0xFF
} modemkc_log_logid_common_operation_mode_enum_type;


/** @ingroup modemkc_log_api
 * This is used for MODEMKC_LOG API to identify the log category in IMS feature. */
typedef enum modemkc_log_logid_ims_enum
{
    MODEMKC_LOG_LOGID_IMS_UNKNOWN = 0,
    MODEMKC_LOG_LOGID_IMS_DEFAULT = 0,

/* TAMS-11683 START */
#ifdef FEATURE_KC_MODEMKC_LOG_IMS
    /* IMS Registration */
    MODEMKC_LOG_LOGID_IMS_VOICE_REG    = 1,
    MODEMKC_LOG_LOGID_IMS_SMS_REG      = 2,

    MODEMKC_LOG_LOGID_IMS_INI_REG      = 3,     /**< #modemkc_log_rec_ims_registration_summary_str */
    MODEMKC_LOG_LOGID_IMS_RE_REG       = 4,     /**< #modemkc_log_rec_ims_registration_summary_str */
    MODEMKC_LOG_LOGID_IMS_DE_REG       = 5,     /**< #modemkc_log_rec_ims_registration_summary_str */
    MODEMKC_LOG_LOGID_IMS_EMERG_REG    = 6,     /**< #modemkc_log_rec_ims_registration_summary_str */
    MODEMKC_LOG_LOGID_IMS_REAUTH_REG   = 7,     /**< #modemkc_log_rec_ims_registration_summary_str */

    /* Call State */
    MODEMKC_LOG_LOGID_IMS_DIAL         = 10,
    MODEMKC_LOG_LOGID_IMS_CALL_END     = 11,    /**< #modemkc_log_rec_ims_voice_call_end_str */
    MODEMKC_LOG_LOGID_IMS_HOLD         = 12,
    MODEMKC_LOG_LOGID_IMS_RETRIEVE     = 13,
    MODEMKC_LOG_LOGID_IMS_INCOMING     = 14,
    MODEMKC_LOG_LOGID_IMS_WAITING      = 15,
    MODEMKC_LOG_LOGID_IMS_CONVERSATION = 16,
    MODEMKC_LOG_LOGID_IMS_ECALL        = 17,

    /* IMS PDN states */
    MODEMKC_LOG_LOGID_IMS_PDP_STATUS     = 20,  /**< #modemkc_log_rec_ims_pdp_status_str */

    /* Service states */
    MODEMKC_LOG_LOGID_IMS_SERVICE_STATUS = 30,  /**< #modemkc_log_rec_ims_service_status_str */
    MODEMKC_LOG_LOGID_IMS_DATA_SERVICES_STATUS = 31,  /**< #modemkc_log_rec_ims_data_setting_status_str */

    /* Voice session */
    MODEMKC_LOG_LOGID_IMS_VOICE_MO_SETUP = 40,  /**< #modemkc_log_rec_ims_voice_mo_setup_str */
    MODEMKC_LOG_LOGID_IMS_VOICE_MT_SETUP = 41,  /**< #modemkc_log_rec_ims_voice_mt_setup_str */
    MODEMKC_LOG_LOGID_IMS_VOICE_MO_END   = 42,  /**< #modemkc_log_rec_ims_voice_end_str */
    MODEMKC_LOG_LOGID_IMS_VOICE_MT_END   = 43,  /**< #modemkc_log_rec_ims_voice_end_str */
    MODEMKC_LOG_LOGID_IMS_VOICE_STAT     = 44,  /**< #modemkc_log_rec_ims_voice_stat_str */

    /* Manage IP Call */
    MODEMKC_LOG_LOGID_IMS_3WAY_START   = 50,
    MODEMKC_LOG_LOGID_IMS_SWITCH_CALL  = 51,
    MODEMKC_LOG_LOGID_IMS_ADD_MEMBER   = 52,
    MODEMKC_LOG_LOGID_IMS_REL_MEMBER   = 53,
    MODEMKC_LOG_LOGID_IMS_SUPS_ERROR   = 54,
    MODEMKC_LOG_LOGID_IMS_INTERROGATE  = 55,
    MODEMKC_LOG_LOGID_IMS_ACTIVATE     = 56,
    MODEMKC_LOG_LOGID_IMS_DEACTIVATE   = 57,

    /* Sms */
    MODEMKC_LOG_LOGID_IMS_SMS_MO       = 80,
    MODEMKC_LOG_LOGID_IMS_SMS_MT       = 81,
    MODEMKC_LOG_LOGID_IMS_SMS_ETWS     = 82,
    MODEMKC_LOG_LOGID_IMS_SMS_ERROR    = 83,

    /* SIP Error (deprecated) */
    MODEMKC_LOG_LOGID_IMS_SIP_ERR_FROM_UE = 100,
    MODEMKC_LOG_LOGID_IMS_SIP_ERR_FROM_NW = 101,

    /* SIP message */
    MODEMKC_LOG_LOGID_IMS_SIP_TX       = 102,   /**< #modemkc_log_rec_ims_message_str */
    MODEMKC_LOG_LOGID_IMS_SIP_RX       = 103,   /**< #modemkc_log_rec_ims_message_str */

    /* WiFi states */
    MODEMKC_LOG_LOGID_IMS_WLAN_MAC_ADDR_CHANGE = 110,
    MODEMKC_LOG_LOGID_IMS_WLAN_SSID_CHANGE     = 111,
    MODEMKC_LOG_LOGID_IMS_WLAN_IP_ADDR_CHANGE  = 112,

#endif /* FEATURE_KC_MODEMKC_LOG_IMS */
/* TAMS-11683 END */


    MODEMKC_LOG_LOGID_IMS_MAX = 255
} modemkc_log_logid_ims_enum_type;

/** @ingroup modemkc_log_api
 * for following records
 * - #MODEMKC_LOG_LOGID_COMMON_SW_MBN_VER
 * - #MODEMKC_LOG_LOGID_COMMON_HW_MBN_VER */
typedef struct MODEMKC_LOG_REC_COMMON_MBN_VER_STR
{
    kal_bool    is_boot_up_sbp;
    kal_uint8   sim_slot_id;            // sim_interface_enum
    kal_uint8   ps_id;                  // protocol_id_enum
    kal_uint32  sim_sbp_id_mode_1;
    kal_uint32  sim_sbp_id_mode_2;
    kal_uint32  ccci_sbp_id;
    kal_uint8   ap_dsbp_mode;           // l4bsbp_dsbp_mode_enum
} modemkc_log_rec_common_mbn_ver_str;

/* TAMS-11683 START */
#ifdef FEATURE_KC_MODEMKC_LOG_IMS

/** @ingroup modemkc_log_api
 * for following records
 * - #MODEMKC_LOG_LOGID_IMS_SIP_TX
 * - #MODEMKC_LOG_LOGID_IMS_SIP_RX */
typedef struct MODEMKC_LOG_REC_IMS_MESSAGE_STR
{
    kal_uint8  cm_call_id;      /**< Call Manager call identifier */
    kal_uint8  message_id;      /**< Unique ID of the IMS message
                                - Values:
                                    - 1 -> IMS_SIP_REGISTER
                                    - 2 -> IMS_SIP_INVITE
                                    - 3 -> IMS_SIP_PRACK
                                    - 4 -> IMS_SIP_CANCEL
                                    - 5 -> IMS_SIP_ACK
                                    - 6 -> IMS_SIP_BYE
                                    - 7 -> IMS_SIP_SUBSCRIBE
                                    - 8 -> IMS_SIP_NOTIFY
                                    - 9 -> IMS_SIP_UPDATE
                                    - 10 -> IMS_SIP_REFER
                                    - 11 -> IMS_SIP_MESSAGE
                                    - 12 -> IMS_SIP_INFO
                                    - 13 -> IMS_SIP_PUBLISH
                                    - 14 -> IMS_SIP_OPTIONS */
    kal_uint16 response_code;   /**< SIP response code or 408 when no response is received */
    kal_uint8  sdp_presence;    /**< Indicates presence of SDP message body */
} modemkc_log_rec_ims_message_str;

/** @ingroup modemkc_log_api
 * for following records
 * - #MODEMKC_LOG_LOGID_IMS_INI_REG
 * - #MODEMKC_LOG_LOGID_IMS_RE_REG
 * - #MODEMKC_LOG_LOGID_IMS_DE_REG
 * - #MODEMKC_LOG_LOGID_IMS_EMERG_REG
 * - #MODEMKC_LOG_LOGID_IMS_REAUTH_REG */
typedef struct MODEMKC_LOG_REC_IMS_REGISTRATION_SUMMARY_STR
{
    kal_uint16 result;  /**< Final SIP response code or 408 when no response is received */
} modemkc_log_rec_ims_registration_summary_str;

/** @ingroup modemkc_log_api
 * for following records
 * - #MODEMKC_LOG_LOGID_IMS_VOICE_MO_SETUP */
typedef struct MODEMKC_LOG_REC_IMS_VOICE_MO_SETUP_STR
{
    kal_uint8  rat;     /**< RAT Type if supported 
                            modemkc_log_call_network_type_enum */

    kal_uint16 result;  /**< Final SIP response code or 408 when no response is received */
    kal_uint32 delay;   /**< It is the elapsed time (inmilliseconds) between the sending of
                        SIP INVITE message and the reception for first 180(Ringing)
                        response or the first 200 OKresponse to SIP INVITE,
                        whichever is earlier. */
} modemkc_log_rec_ims_voice_mo_setup_str;

/** @ingroup modemkc_log_api
 * for following records
 * - #MODEMKC_LOG_LOGID_IMS_PDP_STATUS */
typedef struct MODEMKC_LOG_REC_IMS_PDP_STATUS_STR
{
    kal_uint8 subs_id;                      /**< Subscription ID */
    kal_uint8 is_ims_pdp_connected;         /**< IMS PDP connection state information.
                                            - Values:
                                                - TRUE  -- IMS PDP is connected
                                                - FALSE -- IMS PDP is not connected */
    kal_uint8 ims_pdp_failure_error_code;   /**< IMS PDP connection failure error reason code when the
                                            IMS PDP Connection State TLV is FALSE
                                            (that is, IMS PDP is not in the Connected state).
                                            - Values:
                                                - IMSA_PDP_STATUS_OTHER_FAILURE (0) -- Generic failure reason for other than specified
                                                - IMSA_PDP_STATUS_OPTION_UNSUBSCRIBED (1)
                                                - IMSA_PDP_STATUS_UNKNOWN_PDP (2)
                                                - IMSA_PDP_STATUS_REASON_NOT_SPECIFIED (3)
                                                - IMSA_PDP_STATUS_CONNECTION_BRINGUP_FAILURE (4)
                                                - IMSA_PDP_STATUS_CONNECTION_IKE_AUTH_FAILURE (5)
                                                - IMSA_PDP_STATUS_USER_AUTH_FAILED (6) */
    kal_uint16 call_end_reason;             /**< The failure reason (verbose); see Spec: 24.008/24.007/C.S0017
                                            for the definition of these values. */
    kal_uint8 pdp_failure_network;          /**< IMS registration network. Network is returned when IMS
                                            registration is being attempted or is successful
                                            - Values:
                                                - IMSA_WLAN (0) --  IMS service is registered on WLAN
                                                - IMSA_WWAN (1) --  IMS service is registered on WWAN
                                                - IMSA_IWLAN (2) --  IMS service is registered on interworking WLAN */
} modemkc_log_rec_ims_pdp_status_str;

/** @ingroup modemkc_log_api
 * for following records
 * - #MODEMKC_LOG_LOGID_IMS_SERVICE_STATUS */
typedef struct MODEMKC_LOG_REC_IMS_SERVICE_STATUS_STR
{
    kal_uint8 subs_id;              /**< Subscription ID */
    kal_uint8 sms_service_status;   /**< - Values:
                                        - 0 -- IMS SMS service is not available
                                        - 1 -- IMS SMS is in limited service
                                        - 2 -- IMS SMS is in full service */
    kal_uint8 sms_service_rat;      /**< - Values:
                                        - IMSA_WLAN (0) --  IMS service is registered on WLAN
                                        - IMSA_WWAN (1) --  IMS service is registered on WWAN
                                        - IMSA_IWLAN (2) --  IMS service is registered on interworking WLAN */
    kal_uint8 voip_service_status;  /**< - Values:
                                        - 0 -- IMS VoIP service is not available
                                        - 2 -- IMS VoIP is in full service */
    kal_uint8 voip_service_rat;     /**< - Values:
                                        - IMSA_WLAN (0) --  IMS service is registered on WLAN
                                        - IMSA_WWAN (1) --  IMS service is registered on WWAN
                                        - IMSA_IWLAN (2) --  IMS service is registered on interworking WLAN */
    kal_uint8 vt_service_status;    /**< - Values:
                                        - 0 -- IMS VT service is not available
                                        - 2 -- IMS VT is in full service */
    kal_uint8 vt_service_rat;       /**< - Values:
                                        - IMSA_WLAN (0) --  IMS service is registered on WLAN
                                        - IMSA_WWAN (1) --  IMS service is registered on WWAN
                                        - IMSA_IWLAN (2) --  IMS service is registered on interworking WLAN */
    kal_uint8 ut_service_status;    /**< - Values:
                                        - 0 -- IMS UT service is not available
                                        - 2 -- IMS UT is in full service */
    kal_uint8 ut_service_rat;       /**< - Values:
                                        - IMSA_WLAN (0) --  IMS service is registered on WLAN
                                        - IMSA_WWAN (1) --  IMS service is registered on WWAN
                                        - IMSA_IWLAN (2) --  IMS service is registered on interworking WLAN */
} modemkc_log_rec_ims_service_status_str;

/** @ingroup modemkc_log_api
 * for following records
 * - #MODEMKC_LOG_LOGID_IMS_DATA_SETTING_STATUS */
typedef struct MODEMKC_LOG_REC_IMS_DATA_SETTING_STATUS_STR
{
    kal_uint8 subs_id;                              /**< Subscription ID */
    kal_uint8 data_services_setting_status;         /**< - Values:
                                                    - 0 -- Data Service is disabled
                                                    - 1 -- Data Service is enabled */
    kal_uint8 data_services_roaming_setting_status; /**< - Values:
                                                    - 0 -- Data Roaming Service is disabled
                                                    - 1 -- Data Roaming Service is enabled */
    kal_uint8 wifi_settings_status;                /**< - Values:
                                                    - 0 -- WiFi is disabled
                                                    - 1 -- WiFi is enabled */
} modemkc_log_rec_ims_data_setting_status_str;

/** @ingroup modemkc_log_api
 * for following records
 * - #MODEMKC_LOG_LOGID_IMS_VOICE_MT_SETUP */
typedef struct MODEMKC_LOG_REC_IMS_VOICE_MT_SETUP_STR
{
    kal_uint8  rat;     /**< RAT Type if supported */
                        /**modemkc_log_call_network_type_enum */
                        
    kal_uint16 result;  /**< Final SIP response code or 408 when no response is received */
} modemkc_log_rec_ims_voice_mt_setup_str;

/** @ingroup modemkc_log_api
 * for following records
 * - #MODEMKC_LOG_LOGID_IMS_VOICE_MO_END
 * - #MODEMKC_LOG_LOGID_IMS_VOICE_MT_END */
typedef struct MODEMKC_LOG_REC_IMS_VOICE_END_STR
{
    kal_uint8  rat;         /**< RAT Type if supported */ 
                            /**modemkc_log_call_network_type_enum */
                            
    kal_uint16 end_cause;   /**< - Values:
                                - 0 -> MO initiated
                                - 1 -> MT initiated
                                - 2 -> RTP inactivity
                                - 3 -> RTCP inactivity
                                - 4 -> SRVCC
                                - 5 -> Radio link failure */
} modemkc_log_rec_ims_voice_end_str;

/** @ingroup modemkc_log_api
 * for following records
 * - #MODEMKC_LOG_LOGID_IMS_VOICE_STAT */
typedef struct MODEMKC_LOG_REC_IMS_VOICE_STATE_STR
{
    kal_uint16 call_duration;   /**< The duration of the SIP call in seconds. */
    kal_uint8 codec;            /**< - Values:
                                    - 0 -> AMR_NB
                                    - 1 -> AMR_WB
                                    - 2 -> MIXED
                                    - 5 -> G.711 u-law
                                    - 6 -> G.711 a-law
                                    - 7 -> EVS */
    kal_uint32 num_tx_rtp;      /**< Number of TX RTP Packets */
    kal_uint32 num_rx_rtp;      /**< Number of RX RTP Packets */
    kal_uint32 num_rx_lost;     /**< Number of RX lost RTP Packets */
    kal_uint32 avg_rel_jitter;  /**< Average relative jitter in the call
                                measured in millisecond units and
                                expressed as an unsigned integer. The
                                Jitter values are filtered according to
                                RFC 3550 */
    kal_uint32 max_rel_jitter;  /**< Maximum relative jitter experienced in
                                the call, measured in millisecond units
                                and expressed as an unsigned integer.
                                The Jitter values are filtered according
                                to RFC 3550 */
    kal_uint32 avg_inst_jitter; /**< Average non-filtered instantaneous
                                jitter in the call measured in
                                millisecond units and expressed as an
                                unsigned integer. */
    kal_uint32 max_inst_jitter; /**< Maximum non-filtered instantaneous
                                jitter in the call measured in
                                millisecond units and expressed as an
                                unsigned integer. */
    kal_uint16 avg_frame_delay; /**< Average Frame delay (in ms) of
                                speech frames in QDJ; rounded to the
                                closest integer (after averaging) */
    kal_uint16 max_frame_delay; /**< Max Frame delay (in ms) in QDJ;
                                rounded to the closest integer */
    kal_uint8 call_state;       /**< call state when 17F2 is logged
                                - Values:
                                    - 0 -> CALL_END
                                    - 1 -> CALL_HOLD
                                    - 2 -> SSRC_CHANGE
                                    - 3 -> SRVCC */
    kal_uint8 extra_small_bin_count;    /**< count of the extra small audio gap
                                        bins of size 500-1000ms */
    kal_uint8 small_bin_count;          /**< brief count of the small audio gap
                                        bins of size 1000-3000ms */
    kal_uint8 medium_bin_count;         /**< count of the medium audio gap bins
                                        of size 3000-5000ms */
    kal_uint8 large_bin_count;          /**< count of the large audio gap bins of
                                        size >5000ms */
    float audio_gap_ratio;          /**< Numerator:Sum of all the audio gaps in msec
                                        ;Denominator:Duration of the call in msec */
    kal_uint8 rat_type;                 /**< Current RAT Type when the packet gets logged
                                        - Values:
                                            - 0 -> NONE
                                            - 1 -> GPRS
                                            - 2 -> EDGE
                                            - 3 -> WCDMA
                                            - 4 -> WLAN
                                            - 5 -> CDMA
                                            - 6 -> IWLAN
                                            - 7 -> DOR0
                                            - 8 -> DORA
                                            - 9 -> EHRPD
                                            - 10 -> LTE
                                            - 11 -> DORB
                                            - 12 -> EPC */
} modemkc_log_rec_ims_voice_stat_str;

#endif /* FEATURE_KC_MODEMKC_LOG_IMS */
/* TAMS-11683 END */


/** @ingroup modemkc_log_api
 * This is used for MODEMKC_LOG API to identify the log category in LTE feature. */
typedef enum modemkc_log_logid_lte_enum
{
    MODEMKC_LOG_LOGID_LTE_UNKNOWN = 0,
    MODEMKC_LOG_LOGID_LTE_DEFAULT = 0,

/* TAMS-11241 START */
#ifdef FEATURE_KC_MODEMKC_LOG_LTE
    MODEMKC_LOG_LOGID_LTE_START_T3402 = 1, /**< Start T3402 */
    MODEMKC_LOG_LOGID_LTE_NO_SMS_IND = 2, /**< Processing No SMS Ind */
    MODEMKC_LOG_LOGID_LTE_NO_VOICE_IND =  3, /**< Processing Voice not available Ind */
    MODEMKC_LOG_LOGID_LTE_PENDED_BLOCKING = 4, /**< Act on Pended PLMN blocking command */
    MODEMKC_LOG_LOGID_LTE_PLMN_BLOCKING = 5, /**< PLMN blocking is in progress */
    MODEMKC_LOG_LOGID_LTE_ATT_REJECT = 6, /**< Processing Attach Reject */
    MODEMKC_LOG_LOGID_LTE_TAU_REJECT = 7, /**< Processing Tracking Area Update Reject */
    MODEMKC_LOG_LOGID_LTE_CON_REJECT = 8, /**< Processing PDN Connectivity Reject */
    MODEMKC_LOG_LOGID_LTE_MT_DETACH = 9, /**< Processing MT Detach */
    MODEMKC_LOG_LOGID_LTE_AUTH_REJ = 10, /**< Processing Authentication Reject */
    MODEMKC_LOG_LOGID_LTE_SRV_STATUS = 11, /**< Srv Status */
    MODEMKC_LOG_LOGID_LTE_DEACT_EPS_BEARER_NOT_MATCH_EPS_IND = 12, /**< Not matching Active EPS ind */
    MODEMKC_LOG_LOGID_LTE_DEACT_EPS_BEARER_NOT_MATCH_EMM = 13, /**< Not matching EMM bearer status */

    MODEMKC_LOG_LOGID_LTE_ROHC_SNACK = 50, /**< LTE SNACK */

    MODEMKC_LOG_LOGID_LTE_RRC_OUT_OF_SERVICE = 80, /**< LTE RRC Out of Service */
    MODEMKC_LOG_LOGID_LTE_RRC_DL_MSG = 81, /**< LTE RRC DL MSG */
    MODEMKC_LOG_LOGID_LTE_RRC_UL_MSG = 82, /**< LTE RRC UL MSG */
    MODEMKC_LOG_LOGID_LTE_EMM_OTA_INCOM_MSG = 83, /**< LTE EMM OTA INCOM MSG */
    MODEMKC_LOG_LOGID_LTE_EMM_OTA_OUTGOING_MSG = 84, /**< LTE EMM OTA OUTGOING MSG */
    MODEMKC_LOG_LOGID_LTE_RADIO_LINK_FAILURE = 85, /**< LTE RLF */
    MODEMKC_LOG_LOGID_LTE_SIM_AVAILABLE = 86, /**< LTE SIM Ready */

    MODEMKC_LOG_LOGID_LTE_UMTS_ATT_REJECT = 101, /* Processing UMTS Attach Reject */
    MODEMKC_LOG_LOGID_LTE_UMTS_RAU_REJECT = 102, /* Processing UMTS Routing area update Reject */
    MODEMKC_LOG_LOGID_LTE_UMTS_LAU_REJECT = 103, /* Processing UMTS Location Updating Reject */
    MODEMKC_LOG_LOGID_LTE_UMTS_PDP_REJECT = 104, /* Processing UMTS ACTIVATE PDP CONTEXT REJECT */
#endif /* FEATURE_KC_MODEMKC_LOG_LTE */
/* TAMS-11241 END */

    MODEMKC_LOG_LOGID_LTE_MAX = 255
} modemkc_log_logid_lte_enum_type;


/** @ingroup modemkc_log_api
 * This is used for MODEMKC_LOG API to identify the log category in DS feature. */
typedef enum modemkc_log_logid_ds_enum
{
    MODEMKC_LOG_LOGID_DS_UNKNOWN = 0,
    MODEMKC_LOG_LOGID_DS_DEFAULT = 0,
#ifdef FEATURE_KC_MODEMKC_LOG_DS
    MODEMKC_LOG_LOGID_DS_STARTNETWORK           =1,
    MODEMKC_LOG_LOGID_DS_DSNET_START            =2,
    MODEMKC_LOG_LOGID_DS_STOPNETWORK            =3,
    MODEMKC_LOG_LOGID_DS_DSNET_STOP             =4,
    MODEMKC_LOG_LOGID_DS_IPADDR                 =5,
    MODEMKC_LOG_LOGID_DS_RATINFO                =6,
    MODEMKC_LOG_LOGID_DS_FIRSTATTACH            =7,
    MODEMKC_LOG_LOGID_DS_SIM_ROAM_STATES        =8,
    MODEMKC_LOG_LOGID_DS_ATTACH_CONTINUE        =9,
    MODEMKC_LOG_LOGID_DS_ATTACH_HOLD            =10,
    MODEMKC_LOG_LOGID_DS_ATTACH_CONNECTION_REQ  =11,
    MODEMKC_LOG_LOGID_DS_ATTACH_COMPLETE        =12,
    MODEMKC_LOG_LOGID_DS_DATASETTING            =13,
    MODEMKC_LOG_LOGID_DS_DATAROAMING_SETTING    =14,
    MODEMKC_LOG_LOGID_DS_REXD_CMEVT             =15,
    MODEMKC_LOG_LOGID_DS_LTE_ENABLE_DISABLE     =17,
    MODEMKC_LOG_LOGID_DS_UPDATA_ATTACH_PROFILE  =18,
    MODEMKC_LOG_LOGID_DS_ATTACH_REJ_CAUSE       =19,
#endif /* FEATURE_KC_MODEMKC_LOG_DS */

#ifdef FEATURE_KCC_DS_DSM_DEBUG
    MODEMKC_LOG_LOGID_DS_DSM                    =16,
#endif /* FEATURE_KCC_DS_DSM_DEBUG */

    MODEMKC_LOG_LOGID_DS_MAX = 255
} modemkc_log_logid_ds_enum_type;

/** @ingroup modemkc_log_api
 * for following records
 * - MODEMKC_LOG_LOGID_LTE_ATT_REJECT
 * - MODEMKC_LOG_LOGID_LTE_TAU_REJECT
 * - MODEMKC_LOG_LOGID_LTE_CON_REJECT
 * - MODEMKC_LOG_LOGID_LTE_AUTH_REJ */
typedef struct MODEMKC_LOG_REC_LTE_REJECT_DATA_STR
{
    kal_int16 cause;                                  /**< emm/esm cause value*/
    kal_uint8 mcc[3];                                  /**< mcc*/
    kal_uint8 mnc[3];                                  /**< mnc*/
    kal_uint32 cell_id;                               /**< Global Cell Id*/
} modemkc_log_rec_lte_reject_data_str;

typedef enum
{
    MODEMKC_LOG_SYS_SRV_STATUS_NO_SRV = 0,	//Out of range (No service)
    MODEMKC_LOG_SYS_SRV_STATUS_LIMITED = 1,	//Limited Service
    MODEMKC_LOG_SYS_SRV_STATUS_SRV = 2,	//within the range
    MODEMKC_LOG_SYS_SRV_STATUS_LIMITED_REGIONAL = 3, //Limited Regional
    MODEMKC_LOG_SYS_SRV_STATUS_PWR_SAVE = 4 //Power save or deep sleep
} modemkc_log_sys_srv_status_enum;

typedef struct 
{
    kal_uint32 err_value;
    char *err_meaning;
} modemkc_log_sms_err_cause_mapping_structure;

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

typedef enum
{
    MODEMKC_LOG_SM_CAUSE_EMPTY                      =   0x01 , // there is no such cause in SM spec, just invent a default empty value for coding usage
    MODEMKC_LOG_OPERATOR_DETERMINED_BARRING         =   0x08 , //__REL4__
    MODEMKC_LOG_LLC_SND_FAILURE                     =   0X19 ,
    MODEMKC_LOG_INSUFF_RESOURCE                     =   0X1A ,
    MODEMKC_LOG_UNKNOWN_APN                         =   0X1B ,
    MODEMKC_LOG_UNKNOWN_PDP_ADDR_OR_TYPE            =   0X1C ,
    MODEMKC_LOG_AUTHENTICATION_FAILURE              =   0X1D ,
    MODEMKC_LOG_ACTIVATION_REJ_GGSN                 =   0X1E ,
    MODEMKC_LOG_ACTIVATION_REJ_UNSPECIFIED          =   0X1F ,
    MODEMKC_LOG_UNSUPPORTED_SERVICE_OPTION          =   0X20 ,
    MODEMKC_LOG_UNSUBSCRIBED_SERVICE_OPTION         =   0X21 ,
    MODEMKC_LOG_SERVICE_OPTION_TEMPORARILY_OUT_OF_ORDER =   0X22 ,
    MODEMKC_LOG_PTI_ALREADY_USED                    =   0X23 , // ESM cause
    MODEMKC_LOG_REGULAR_DEACTIVATION                =   0X24 ,
    MODEMKC_LOG_QOS_NOT_ACCEPTED                    =   0X25 ,
    MODEMKC_LOG_NETWORK_FAIL                        =   0X26 ,
    MODEMKC_LOG_REACTIVATION_REQD                   =   0X27 ,
    MODEMKC_LOG_UNSUPPORTED_NW_CONTEXT_ACTIVATION   =   0X28 , /* Came and went from 4.08 + SM_CAUSE_START,should this be removed? */
    MODEMKC_LOG_SEMANTIC_ERROR_IN_TFT_OP            =   0X29 ,
    MODEMKC_LOG_SYNTACTICAL_ERROR_IN_TFT_OP         =   0X2A ,
    MODEMKC_LOG_UNKNOWN_PDP_CONTEXT                 =   0X2B ,
    MODEMKC_LOG_SEMANTIC_ERROR_IN_PACKET_FILTER     =   0X2C ,
    MODEMKC_LOG_SYNTAX_ERROR_IN_PACKET_FILTER       =   0X2D ,
    MODEMKC_LOG_PDP_CONTEXT_WO_TFT_ALREADY_ACT      =   0X2E ,
    MODEMKC_LOG_PTI_MISMATCH                        =   0X2F , // ESM cause
    MODEMKC_LOG_ACTIVATION_REJ_BCM_VIOLATION        =   0X30 , // __REL7__
    MODEMKC_LOG_LAST_PDN_DISC_NOT_ALLOWED           =   0X31 , // ESM cause
    MODEMKC_LOG_PDP_TYPE_IPV4_ONLY_ALLOWED          =   0X32 , // __REL8__
    MODEMKC_LOG_PDP_TYPE_IPV6_ONLY_ALLOWED          =   0X33 , // __REL8__
    MODEMKC_LOG_SINGLE_ADDR_BEARERS_ONLY_ALLOWED    =   0X34 , // __REL8__
    MODEMKC_LOG_ESM_INFORMATION_NOT_RECEIVED        =   0X35 , // ESM cause
    MODEMKC_LOG_PDN_CONNENCTION_NOT_EXIST           =   0X36 , // ESM cause
    MODEMKC_LOG_MULTIPLE_PDN_APN_NOT_ALLOWED        =   0X37 , // ESM cause
    MODEMKC_LOG_COLLISION_WITH_NW_INITIATED_REQ     =   0X38 , // __REL8__
    MODEMKC_LOG_UNSUPPORTED_QCI_VALUE               =   0X3B , // ESM cause
    MODEMKC_LOG_MAXIMUM_NUM_OF_PDP_CONTEXTS_REACHED =   0X41 , /* Cause65 */
    MODEMKC_LOG_REQUESTED_APN_NOT_SUPPORTED_IN_CURRENT_RAT_AND_PLMN_COMBINATION = 0X42 , /* Cause66 */
    /* The following cause values are only for sm internal usage */
    MODEMKC_LOG_INVALID_TI                          =   0X51 ,
    MODEMKC_LOG_SM_SEMANTICALLY_INCORRECT_MSG       =   0X5F ,
    MODEMKC_LOG_INVALID_MAND_INFO                   =   0X60 ,
    MODEMKC_LOG_SM_MSG_TYPE_NON_EXISTENT_OR_NOT_IMPLEMENTED =   0X61 ,
    MODEMKC_LOG_SM_MSG_TYPE_NOT_COMPATIBLE_WITH_PROTOCOL_STATE =   0X62 ,
    MODEMKC_LOG_IE_NON_EXISTENCE_OR_NOT_IMPLEMENTED =   0X63 ,
    MODEMKC_LOG_CONDITIONAL_IE_ERROR                =   0X64 ,
    MODEMKC_LOG_SM_MSG_NOT_COMPATIBLE_WITH_PROTOCOL_STATE =   0X65 ,
    MODEMKC_LOG_SM_PROTOCOL_ERROR_UNSPECIFIED             =   0X6F ,
    MODEMKC_LOG_APN_RESTRICTION_VALUE_INCOMPATIBLE_WITH_ACTIVE_PDP_CTX =   0X70 , /* 24.008 R6 CR 841 */

} modemkc_sm_reject_cause_enum;

typedef enum {
    MODEMKC_LOG_CAUSE_NONE                     =     0x00,
    MODEMKC_LOG_IMSI_UNKNOWN_IN_HLR            =     0x02,
    MODEMKC_LOG_ILLEGAL_MS                     =     0x03,
    MODEMKC_LOG_IMSI_UNKNOWN_IN_VLR            =     0x04,
    MODEMKC_LOG_IMEI_NOT_ACCEPTED              =     0x05,
    MODEMKC_LOG_ILLEGAL_ME                     =     0x06,
    MODEMKC_LOG_GPRS_NOT_ALLOWED               =     0x07,
    MODEMKC_LOG_GPRS_NON_GPRS_NOT_ALLOWED      =     0x08,
    MODEMKC_LOG_MS_ID_NOT_DERIVED_BY_NW        =     0x09,
    MODEMKC_LOG_IMPLICIT_DETACH                =     0x0a,
    MODEMKC_LOG_PLMN_NOT_ALLOWED               =     0x0b,
    MODEMKC_LOG_LOCATION_AREA_NOT_ALLOWED      =     0x0c,
    MODEMKC_LOG_ROAMING_AREA_NOT_ALLOWED       =     0x0d,
    MODEMKC_LOG_GPRS_NOT_ALLOWED_IN_PLMN       =     0x0e,
    MODEMKC_LOG_NO_SUITABLE_CELLS_IN_LA        =     0x0f,
    MODEMKC_LOG_MSC_TEMP_NOT_REACHABLE         =     0x10,
    MODEMKC_LOG_NETWORK_FAILURE                =     0x11,
    MODEMKC_LOG_CS_DOMAIN_NOT_AVAILABLE        =     0X12,  /* LTE specific */
    MODEMKC_LOG_ESM_FAILURE                    =     0x13,  /* LTE specific */
    MODEMKC_LOG_MAC_FAILURE                    =     0x14,
    MODEMKC_LOG_SYNC_FAILURE                   =     0x15,
    MODEMKC_LOG_CONGESTION                     =     0x16,
    MODEMKC_LOG_GSM_AUTHEN_UNACCEPTABLE        =     0x17,
    MODEMKC_LOG_SECURITY_REJECTED_UNSPECIFIED  =     0x18,  /* LTE specific */
    MODEMKC_LOG_NOT_AUTHORIZED_FOR_THIS_CSG    =     0x19,
    MODEMKC_LOG_NON_EPS_AUTHEN_UNACCEPTABLE    =     0x1a,  /* LTE specific */
    MODEMKC_LOG_SERV_OPTION_NOT_SUPPORTED      =     0x20,
    MODEMKC_LOG_REQ_SERV_OPTION_NOT_SUBSCRIBED =     0x21,
    MODEMKC_LOG_SERV_OPTION_TEMP_OUT_OF_ORDER  =     0x22,
    MODEMKC_LOG_REQ_SERV_OPTION_NOT_AUTH_IN_PLMN  =  0x23,
    MODEMKC_LOG_CALL_CANNOT_BE_IDENTIFIED      =     0x26,
    MODEMKC_LOG_CS_DOMAIN_TEMP_NOT_AVAILABLE   =     0x27,  /* LTE specific */
    MODEMKC_LOG_NO_PDP_CONTEXT_ACTIVATED       =     0x28,
    MODEMKC_LOG_SEVERE_NETWORK_FAILURE         =     0x2A,  /* LTE specific */

    MODEMKC_LOG_RETRY_UPON_ENTRY_INTO_NEWCELL_MIN =  0x30,  /* 30..3f */
    MODEMKC_LOG_RETRY_UPON_ENTRY_INTO_NEWCELL_MAX =  0x3f,

    MODEMKC_LOG_SEMANTICALLY_INCORRECT_MSG        =  0x5f,
    MODEMKC_LOG_INVALID_MM_MAND_INFO              =  0x60,
    MODEMKC_LOG_MSG_TYPE_NON_EXISTENT             =  0x61,
    MODEMKC_LOG_MSG_TYPE_NOT_IMPLEMENTED          =  0x61,
    MODEMKC_LOG_MSG_TYPE_INCOMPAT_WITH_PROTO_STATE = 0x62,
    MODEMKC_LOG_IE_NOT_IMPLEMENTED                 = 0x63,
    MODEMKC_LOG_CONDITIONAL_MM_IE_ERROR            = 0x64,
    MODEMKC_LOG_MSG_NOT_COMPAT_WITH_PROTO_STATE    = 0x65,  /* 65..6f */
    MODEMKC_LOG_PROTO_ERROR_UNSPECIFIED            = 0x6f  
}modemkc_mm_cause_enum;



typedef enum {
    Modemkc_Log_Call_Fail_Cause_Normal            = 0, /*receive BYE request, MO hangup, or User reject to receive the all. mapping to CS NORMAL_CLEARING = 16. */
    Modemkc_Log_Call_Fail_Cause_Abnormal,               /*memory allocation failed, or no resource for call session in the very first begin!!! VDM can require CS to make call, mapping to CS RESOURCE_UNAVAILABLE = 47*/
    Modemkc_Log_Call_Fail_Cause_NoNumber,              /*no dialing number for MO call. mapping to CS Unassigned/Unobtainable number, VDM can require CS to make call. UNOBTAINABLE_NUMBER = 1*/
    Modemkc_Log_Call_Fail_Cause_Unregistered,          /*Account is not registered, VDM can require CS to make call, mapping to CS NORMAL_UNSPECIFIED = 31*/
    Modemkc_Log_Call_Fail_Cause_Disconnect,  /* register state go to disconnect state, mapping to CS BEARER_NOT_AVAIL = 58, play congestion tone*/
    Modemkc_Log_Call_Fail_Cause_BeCancel,    /* we cancel the call, which is receive MO_HANGUP_REQ from AP side. Mapping to CS_NORMAL_CLEANING = 16*/
    Modemkc_Log_Call_Fail_Cause_BeReject,    /* receive 4xx,5xx,6xx from the peer side to  cancel request, mapping to CS USER_BUSY = 17, play busy tone*/
    Modemkc_Log_Call_Fail_Cause_BeReject_380,/* receive 380 alternative service, mapping to CS SERVICE_NOT_AVAILABLE = 63. VDM can require CS to make call */
    Modemkc_Log_Call_Fail_Cause_BeReject_380_emergency_to_CS,/* receive 380 alternative service, mapping to CS SERVICE_NOT_AVAILABLE = 63. VDM can require CS to make call */
    Modemkc_Log_Call_Fail_Cause_BeReject_380_emergency_rereg,/* receive 380 alternative service with reason, mapping to CS SERVICE_NOT_AVAILABLE = 63. VDM can require CS to make call */
    Modemkc_Log_Call_Fail_Cause_BeReject_380_emergency_to_normal_CS, /* receive 380 alternative service, mapping to CS SERVICE_NOT_AVAILABLE = 63. VDM can require CS to make a normal call*/
    Modemkc_Log_Call_Fail_Cause_BeReject_480,/*receive 480, mapping to CS TEMPORARY_FAILURE = 41, play congestion tone*/
    Modemkc_Log_Call_Fail_Cause_BeReject_503,/*receive 503 Service Unavailable, retry-after time period is reported. In this time period, UE cannot use VoLTE to make call. mapping to CS SERVICE_NOT_AVAILABLE = 63.*/
    Modemkc_Log_Call_Fail_Cause_TX_Timeout,  /*receive internal error  from SIPTX, or AP side do not send confirmation for this MT call until we timeout, we abort the MT call presentation. mapping to CS SERVICE_NOT_AVAILABLE = 63.*/
    Modemkc_Log_Call_Fail_Cause_No_Privacy,  /* network cannot support privacy service when user requires critical level. mapping to CS BEARER_NOT_AVAIL = 58, play congestion tone */
    Modemkc_Log_Call_Fail_Cause_PrecondFail, /* receive 580 precondition failure, mapping to CS BEARER_NOT_AVAIL = 58, play congestion tone*/
    Modemkc_Log_Call_Fail_Cause_SecondCall,  /* receive second call request, VDM can have its policy, mapping to CS NORMAL_UNSPECIFIED = 31*/
    Modemkc_Log_Call_Fail_Cause_NoMediaContent,/* peer side do not provide SDP for media content or receive 488, mapping to CS QOS_NOT_AVAIL = 49, play congestion tone*/
    Modemkc_Log_Call_Fail_Cause_InvalidMsg,    /*SIP message is not valid, so that the related SS command cannot be executed. This happens in SS function. mapping to CS FACILITY_REJECTED = 29. no tone.*/
    Modemkc_Log_Call_Fail_Cause_InvalidCmd,  /*The command cannot be executed since no related call session is existed. This happens in SS function. cannot mapping to CS, AP side require to send 0. no tone.*/
    Modemkc_Log_Call_Fail_Cause_InvalidIdx,  /*Cannot find the acct_id or call_id in the Request command, we send Confirmation with failure result and this cause. mapping to CS NORMAL_UNSPECIFIED = 31*/
    Modemkc_Log_Call_Fail_Cause_SRVCC,       /*1. for MO call, we do not send VOLTE_MO_CALL_CNF and SRVCC, 2. For MT call, we do not receive EAIC from AP and SRVCC, then we shall reject the call by this cause.*/
    Modemkc_Log_Call_Fail_Cause_Facility_Rejected, /*receive 504 with XML body for Registrartion Restoration. Mapping to CS FACILITY_REJECTED =29*/
    Modemkc_Log_Call_Fail_Cause_dedicated_bearer_timeout, /*for MO call, send INVITE but no response and timeout, send indication to VDM and VDM can use CS (TMO, CMCC requirement), mapping to CS BEARER_NOT_AVAIL = 58*/
    Modemkc_Log_Call_Fail_Cause_Retry_CS,                /*some Error code need to retry CS */
    Modemkc_Log_Call_Fail_Cause_No_Retry,                /*some Error code need to do no action */
    Modemkc_Log_Call_Fail_Cause_Retry_IMS_CS,            /*some Error code need to retry IMS first then CSFB */
    Modemkc_Log_Call_Fail_Cause_Aborted,                 /*pending operation was aborted*/
    Modemkc_Log_Call_Fail_Cause_Timer_B_Expiry,  /*for DCM requirement, do PCSCF error handling */
    Modemkc_Log_Call_Fail_Cause_ECT_Timeout,  /*for assured ECT timeout, mapping to 899 AT-interface cause value. */
    Modemkc_Log_Call_Fail_Cause_Timer_VZW_Expiry,            
    Modemkc_Log_Call_Fail_Cause_AC_Barred,                   
    Modemkc_Log_Call_Fail_Cause_NW_Rej_Conn,                 
    Modemkc_Log_Call_Fail_Cause_BeReject_503_Outage_text,    
    Modemkc_Log_Call_Fail_Cause_Change_PCSCF,                
    Modemkc_Log_Call_Fail_Cause_RTT_EMC_Fail,                
    Modemkc_Log_Call_Fail_Cause_BeReject_380_emergency_normal_CS_to_IMS, /* receive 380 alternative service,VDM can require CS to make a normal call and after that a normal IMS call to 380 contact urn. */
    /*add here*/
    Modemkc_Log_Call_Fail_Cause_BeReject_380_emergency_action_elem_unknown, /* receive 380 alternative service, without contact header, XML type is emergency but unknown or missing action element. */

    Modemkc_Log_Call_Fail_Cause_Max,
}modemkc_log_call_fail_cause_enum;

typedef struct MODEMKC_LOG_REC_IMS_VOICE_CALL_END_STR
{
    kal_int32 call_fail_cause;  /**modemkc_log_call_fail_cause_enum */
} modemkc_log_rec_ims_voice_call_end_str;

typedef enum {
    Modemkc_Log_Network_Type_Unspec         = 0,
    Modemkc_Log_Network_Type_Unknown        = 1,
    Modemkc_Log_Network_Type_802_11         = 2,
    Modemkc_Log_Network_Type_802_11a        = 3,
    Modemkc_Log_Network_Type_802_11b        = 4,
    Modemkc_Log_Network_Type_802_11g        = 5,
    Modemkc_Log_Network_Type_802_11n        = 6,
    Modemkc_Log_Network_Type_802_11ac       = 7,
    Modemkc_Log_Network_Type_GERAN          = 8,
    Modemkc_Log_Network_Type_UTRAN_FDD      = 9,
    Modemkc_Log_Network_Type_UTRAN_TDD      = 10,
    Modemkc_Log_Network_Type_CDMA2000       = 11,
    Modemkc_Log_Network_Type_E_UTRAN_FDD    = 12,
    Modemkc_Log_Network_Type_E_UTRAN_TDD    = 13,
    /*C2K*/
    Modemkc_Log_Network_Type_C2K_1xRTT      = 14,
    Modemkc_Log_Network_Type_C2K_HRPD       = 15,
    Modemkc_Log_Network_Type_C2K_eHRPD      = 16,
    /*add here*/
    Modemkc_Log_Network_Type_Max,
}modemkc_log_call_network_type_enum;

typedef enum {
    MODEMKC_LOG_IP_ANY_ADDR         = 0,
    MODEMKC_LOG_IPV4_ADDR           = 4,
    MODEMKC_LOG_IPV6_ADDR           = 6,
    MODEMKC_LOG_UPSPECIFIED_ADDR    = 8,
    MODEMKC_LOG_INVALID_ADDR        = 255,
} modemkc_log_ipaddr_type_enum;

typedef enum
{
   MODEM_KCLOG_SIM1 = 0x01,
   MODEM_KCLOG_SIM2 = 0x02,
   MODEM_KCLOG_SIM3 = 0x04,
   MODEM_KCLOG_SIM4 = 0x08
}modemkc_log_sim_interface_enum;

typedef enum {
    MODEMKC_LOG_SERVICE_STATUS_IMS_SRV_NOT_AVAIABLE = 0,
    MODEMKC_LOG_SERVICE_STATUS_IMS_SRV_LIMITED,  // Cellular or WiFi
    MODEMKC_LOG_SERVICE_STATUS_IMS_SRV_FULL,     // Cellular and WiFi
}modekc_log_ims_service_status_srv_enum;

typedef enum {
    MODEMKC_LOG_SERVICE_STATUS_IMS_NO_RAT = 0,
    MODEMKC_LOG_SERVICE_STATUS_IMS_WLAN,
    MODEMKC_LOG_SERVICE_STATUS_IMS_CELLULAR,
    MODEMKC_LOG_SERVICE_STATUS_IMS_WLAN_CELLULAR,
}modemkc_log_ims_service_status_reg_rat_capa_enum;

typedef enum {
    MODEMKC_LOG_VOICE_STATUS_CALL_STATUS_ACTIVE = 0,
    MODEMKC_LOG_VOICE_STATUS_CALL_STATUS_HOLD,
}modemkc_log_ims_voice_status_call_status_type;

typedef enum {
    MODEMKC_LOG_VOICE_STATUS_CODEC_NONE     = 0,
    MODEMKC_LOG_VOICE_STATUS_CODEC_AMR,
    MODEMKC_LOG_VOICE_STATUS_CODEC_AMR_WB,
    MODEMKC_LOG_VOICE_STATUS_CODEC_H264,
    MODEMKC_LOG_VOICE_STATUS_TELEPHONE_EVENT,
    MODEMKC_LOG_VOICE_STATUS_CODEC_G729,
    MODEMKC_LOG_VOICE_STATUS_CODEC_PCMA,
    MODEMKC_LOG_VOICE_STATUS_CODEC_PCMU,
    MODEMKC_LOG_VOICE_STATUS_CODEC_G7231,
    MODEMKC_LOG_VOICE_STATUS_CODEC_G726_16,
    MODEMKC_LOG_VOICE_STATUS_CODEC_G726_24,
    MODEMKC_LOG_VOICE_STATUS_CODEC_G726_32,
    MODEMKC_LOG_VOICE_STATUS_CODEC_G726_40,
    MODEMKC_LOG_VOICE_STATUS_CODEC_T140,
    MODEMKC_LOG_VOICE_STATUS_CODEC_RED,
    MODEMKC_LOG_VOICE_STATUS_CODEC_CN,
    MODEMKC_LOG_VOICE_STATUS_CODEC_H265,
    MODEMKC_LOG_VOICE_STATUS_CODEC_EVS,
} modemkc_log_ims_voice_status_codec_type;

/* --------------------------------------------------------------------------
** Local Object Definitions
** --------------------------------------------------------------------------
*/

/* ==========================================================================
**                        Function Definitions
** ========================================================================*/
#endif /* __MODEMKC_LOG__ */
#endif /* MODEMKC_LOG_COMMON_H */
