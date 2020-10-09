

#ifndef _ATCMD_ENUM_H
#define _ATCMD_ENUM_H

#define PDP_TYPE_STRING_LEN                             10
#define APN_STRING_LEN                                  100
#define PDP_ADDR_LEN                                    16
#define REMOTE_ADDRESS_AND_SUBNET_MASK_LEN              128
#define LOCAL_PORT_RANGE_STRING_LEN                     12
#define REMOTE_PORT_RANGE_STRING_LEN                    12
#define IPSEC_SPI_STRING_LEN                            9//IPSEC_SPI_STRING_LEN
#define TOS_TRAFFIC_CLASS_AND_MASK_STRING_LEN           8
#define FLOW_LABEL_STRING_LEN                           10//FLOW_LABEL_STRING_LEN
#define LOCAL_ADDRESS_AND_SUBNET_MASK_LEN               10//LOCAL_ADDRESS_AND_SUBNET_MASK_LEN
#define SDU_ERROR_RATIO_STRING_LEN                      4
#define RESIDUAL_BIT_ERROR_RATIO_STRING_LEN             4
#define L2P_STRING_LEN                                  10
#define PDP_ADDR_1_LEN                                  65//IPV6_ADDR_LEN*4+1
#define PDP_ADDR_2_LEN                                  65//IPV6_ADDR_LEN*4+1
#define LOCAL_ADDR_AND_SUBNET_MASK_LEN                  10//todo
#define GW_ADDR_LEN                                     10//todo
#define DNS_PRIM_ADDR_LEN                               16
#define DNS_SEC_ADDR_LEN                                16
#define P_CSCF_PRIM_ADDR_LEN                            16
#define P_CSCF_SEC_ADDR_LEN                             16
#define USERID_STRING_LEN                               42//MAX_GPRS_USER_NAME_LEN
#define PASSWORD_STRING_LEN                             35//MAX_GPRS_PASSWORD_LEN
#define ROAMING_IP_TYPE_STRING_LEN                      10//ROAMING_IP_TYPE_STRING_LEN
#define APNNI_STRING_LEN                                100//MAX_VZW_APNNI_LEN
#define APNTYPE_STRING_LEN                              10//MAX_VZW_APN_PDP_TYPE_LEN
#define APNB_STRING_LEN                                 10//MAX_VZW_APN_BEARER_LEN
#define APNED_STRING_LEN                                15//AX_VZW_APN_IS_ENABLED_LEN
#define IE_STRING_LEN                                   5//IE_STRING_LEN
#define EGPCO_IE_CONTENTS_STRING_LEN                    32//CONTENTS_STRING_LEN
#define AT_EGPCORDP_CONTENTS_STRING_LEN                 80//AT_EGPCORDP_CONTENTS_STRING_LEN (ex. 311480:[0-255]*16 = 71 digits)
#define MAX_IE_COUNT                                    16//IE_STRING_LEN
#define RAT_STRING_LEN                                  6//"LTE" or "EHRPD"
#define MAX_PACKET_FILTER_COUNT 16


typedef enum
{
    CGEV_EVENT_NW_PDN_ACT,
    CGEV_EVENT_ME_PDN_ACT,
    CGEV_EVENT_NW_ACT,
    CGEV_EVENT_ME_ACT,
    CGEV_EVENT_NW_PDN_DEACT,
    CGEV_EVENT_ME_PDN_DEACT,
    CGEV_EVENT_NW_DEACT,
    CGEV_EVENT_ME_DEACT,
    CGEV_EVENT_NW_MODIFY,
    CGEV_EVENT_ME_MODIFY,
    CGEV_EVENT_REJECT,
    CGEV_EVENT_NW_REACT
} cgev_event_enum;

typedef enum
{
    EGEV_EVENT_REVIVE_START,
    EGEV_EVENT_REVIVE_SUCCESS,
    EGEV_EVENT_REVIVE_FINISH,
} egev_event_enum;


typedef enum
{
    AT_TOKEN_PARSE_RESULT_OK,
    AT_TOKEN_PARSE_RESULT_NULL_STRING,
    AT_TOKEN_PARSE_RESULT_NOT_FOUND
} at_token_parse_result_enum;

//IPv6_AddressFormat
typedef enum
{
    ATCMD_IPV6_ADDRESSFORMAT_USE_IPV4_LIKE_DOT_NOTATION__IP_ADDRESS,_AND_SUBNETWORK_MASK_IF_APPLICABLE,_ARE_DOT_SEPARATED, //Use IPv4-like dot-notation. IP address, and subnetwork mask if applicable, are dot-separated.
    ATCMD_IPV6_ADDRESSFORMAT_USE_IPV6_LIKE_COLON_NOTATION__IP_ADDRESS,_AND_SUBNETWORK_MASK_IF_APPLICABLE_AND_WHEN_GIVEN_EXPLICITLY,_ARE_SEPARATED_BY_A_SPACE,  //Use IPv6-like colon-notation. IP address, and subnetwork mask if applicable and when given explicitly, are separated by a space.
    ATCMD_IPV6_ADDRESSFORMAT_MAX
} atcmd_IPv6_AddressFormat_enum;

//IPv6_SubnetNotation
typedef enum
{
    ATCMD_IPV6_SUBNETNOTATION_BOTH_IP_ADDRESS_AND_SUBNET_MASK_ARE_STATED_EXPLICITLY,_SEPARATED_BY_A_SPACE, //Both IP Address and subnet mask are stated explicitly, separated by a space.
    ATCMD_IPV6_SUBNETNOTATION_THE_PRINTOUT_FORMAT_IS_APPLYING,                          //The printout format is applying / (forward slash) subnet-prefix Classless Inter-Domain Routing (CIDR) notation.
    ATCMD_IPV6_SUBNETNOTATION_MAX
} atcmd_IPv6_SubnetNotation_enum;

//IPv6_LeadingZeros
typedef enum
{
    ATCMD_IPV6_LEADINGZEROS_LEADING_ZEROS_ARE_OMITTED,                                  //Leading zeros are omitted.
    ATCMD_IPV6_LEADINGZEROS_LEADING_ZEROS_ARE_INCLUDED,                                 //Leading zeros are included.
    ATCMD_IPV6_LEADINGZEROS_MAX
} atcmd_IPv6_LeadingZeros_enum;

//IPv6_CompressZeros
typedef enum
{
    ATCMD_IPV6_COMPRESSZEROS_NO_ZERO_COMPRESSION,                                       //No zero compression.
    ATCMD_IPV6_COMPRESSZEROS_USE_ZERO_COMPRESSION,                                      //Use zero compression.
    ATCMD_IPV6_COMPRESSZEROS__IMS_SINGLE_RADIO_VOICE_CALL_CONTINUITY,                   // IMS single radio voice call continuity +CISRVCC
    ATCMD_IPV6_COMPRESSZEROS_MAX
} atcmd_IPv6_CompressZeros_enum;

//d_comp
typedef enum
{
    ATCMD_D_COMP_OFF,                                                                   //off
    ATCMD_D_COMP_ON,                                                                    //on (manufacturer preferred compression)
    ATCMD_D_COMP_V_42BIS,                                                               //V.42bis
    ATCMD_D_COMP_V_44,                                                                  //V.44
    ATCMD_D_COMP_MAX
} atcmd_d_comp_enum;

//h_comp
typedef enum
{
    ATCMD_H_COMP_OFF,                                                                   //off
    ATCMD_H_COMP_ON,                                                                    //on (manufacturer preferred compression)
    ATCMD_H_COMP_RFC_1144,                                                              //RFC 1144 [105] (applicable for SNDCP only)
    ATCMD_H_COMP_RFC_2507,                                                              //RFC 2507 [107]
    ATCMD_H_COMP_RFC_3095,                                                              //RFC 3095 [108] (applicable for PDCP only)
    ATCMD_H_COMP_MAX
} atcmd_h_comp_enum;

//IPv4AddrAlloc
typedef enum
{
    ATCMD_IPV4ADDRALLOC_THROUGH_NAS_SIGNALLING,                                         //IPv4 address allocation through NAS signalling
    ATCMD_IPV4ADDRALLOC_THROUGH_DHCP,                                                   //IPv4 address allocated through DHCP
    ATCMD_IPV4ADDRALLOC_MAX
} atcmd_IPv4AddrAlloc_enum;

//request_type
typedef enum
{
    ATCMD_REQUEST_TYPE_INITIAL_OR_HANDOVER,                                             //PDP context is for new PDP context establishment or for handover from a non-3GPP access network (how the MT decides whether the PDP context is for new PDP context establishment or for handover is implementation specific)
    ATCMD_REQUEST_TYPE_EMERGENCY,                                                       //PDP context is for emergency bearer services
    ATCMD_REQUEST_TYPE_INITIAL,                                                         //PDP context is for new PDP context establishment
    ATCMD_REQUEST_TYPE_HANDOVER,                                                        //PDP context is for handover from a non-3GPP access network
    ATCMD_REQUEST_TYPE_HANDOVER_OF_EMERGENCY,                                           //PDP context is for handover of emergency bearer services from a non-3GPP access network
    ATCMD_REQUEST_TYPE_MAX
} atcmd_request_type_enum;

//P-CSCF_discovery
typedef enum
{
    ATCMD_P_CSCF_DISCOVERY_PREFERENCE_NOT_INFLUENCED,                                   //Preference of P-CSCF address discovery not influenced by +CGDCONT
    ATCMD_P_CSCF_DISCOVERY_PREFERENCE_THROUGH_NAS_SIGNALLING,                           //Preference of P-CSCF address discovery through NAS signalling
    ATCMD_P_CSCF_DISCOVERY_PREFERENCE_THROUGH_DHCP,                                     //Preference of P-CSCF address discovery through DHCP
    ATCMD_P_CSCF_DISCOVERY_MAX
} atcmd_P_CSCF_discovery_enum;

//IM_CN_Signalling_Flag_Ind
typedef enum
{
    ATCMD_IM_CN_SIGNALLING_FLAG_IND_PDN_IS_NOT_FOR_IMS_SIGNALLING_ONLY,                 //UE indicates that the PDP context is not for IM CN subsystem-related signalling only
    ATCMD_IM_CN_SIGNALLING_FLAG_IND_PDN_IS_FOR_IMS_SIGNALLING_ONLY,                     //UE indicates that the PDP context is for IM CN subsystem-related signalling only
    ATCMD_IM_CN_SIGNALLING_FLAG_IND_MAX
} atcmd_IM_CN_Signalling_Flag_Ind_enum;

//NSLPI
typedef enum
{
    ATCMD_NSLPI_CONFIGURED_FOR_NAS_SIGNALLING_LOW_PRIORITY,                             //indicates that this PDP context is to be activated with the value for the low priority indicator configured in the MT.
    ATCMD_NSLPI_NOT_CONFIGURED_FOR_NAS_SIGNALLING_LOW_PRIORITY,                         //indicates that this PDP context is is to be activated with the value for the low priority indicator set to "MS is not configured for NAS signalling low priority".
    ATCMD_NSLPI_MAX
} atcmd_NSLPI_enum;

//securePCO
typedef enum
{
    ATCMD_SECUREPCO_IS_NOT_REQUESTED,                                                   //Security protected transmission of PCO is not requested
    ATCMD_SECUREPCO_IS_REQUESTED,                                                       //Security protected transmission of PCO is requested
    ATCMD_SECUREPCO_MAX
} atcmd_securePCO_enum;

//IPv4_MTU_discovery
typedef enum
{
    ATCMD_IPV4_MTU_DISCOVERY_PREFERENCE_NOT_INFLUENCED,                                 //Preference of IPv4 MTU size discovery not influenced by +CGDCONT
    ATCMD_IPV4_MTU_DISCOVERY_PREFERENCE_THROUGH_NAS_SIGNALLING,                         //Preference of IPv4 MTU size discovery through NAS signalling
    ATCMD_IPV4_MTU_DISCOVERY_MAX
} atcmd_IPv4_MTU_discovery_enum;

//Local_Addr_Ind
typedef enum
{
    ATCMD_LOCAL_ADDR_IND_NOT_SUPPORT_LOCAL_IP_ADDRESS_IN_TFTS,                          //indicates that the MS does not support local IP address in TFTs
    ATCMD_LOCAL_ADDR_IND_SUPPORT_LOCAL_IP_ADDRESS_IN_TFTS,                              //indicates that the MS supports local IP address in TFTs
    ATCMD_LOCAL_ADDR_IND_MAX
} atcmd_Local_Addr_Ind_enum;

//direction
typedef enum
{
    ATCMD_DIRECTION_PRE_RELEASE_7_TFT_FILTER,                                           //Pre-Release 7 TFT filter (see 3GPP TS 24.008 [8], table 10.5.162)
    ATCMD_DIRECTION_UPLINK,                                                             //Uplink
    ATCMD_DIRECTION_DOWNLINK,                                                           //Downlink
    ATCMD_DIRECTION_BIRECTIONAL,                                                        //Birectional (Up & Downlink)
    ATCMD_DIRECTION_MAX
} atcmd_direction_enum;

//Traffic class
typedef enum
{
    ATCMD_TRAFFIC_CLASS_CONVERSATIONAL,                                                 //conversational
    ATCMD_TRAFFIC_CLASS_STREAMING,                                                      //streaming
    ATCMD_TRAFFIC_CLASS_INTERACTIVE,                                                    //interactive
    ATCMD_TRAFFIC_CLASS_BACKGROUND,                                                     //background
    ATCMD_TRAFFIC_CLASS_SUBSCRIBED_VALUE,                                               //subscribed value
    ATCMD_TRAFFIC_CLASS_MAX
} atcmd_Traffic_class_enum;

//Delivery order
typedef enum
{
    ATCMD_DELIVERY_ORDER_NO,                                                            //no
    ATCMD_DELIVERY_ORDER_YES,                                                           //yes
    ATCMD_DELIVERY_ORDER_SUBSCRIBED_VALUE,                                              //subscribed value
    ATCMD_DELIVERY_ORDER_MAX
} atcmd_Delivery_order_enum;

//Delivery of erroneous SDUs
typedef enum
{
    ATCMD_DELIVERY_OF_ERRONEOUS_SDUS_NO,                                                //no
    ATCMD_DELIVERY_OF_ERRONEOUS_SDUS_YES,                                               //yes
    ATCMD_DELIVERY_OF_ERRONEOUS_SDUS_NO_DETECT,                                         //no detect
    ATCMD_DELIVERY_OF_ERRONEOUS_SDUS_SUBSCRIBED_VALUE,                                  //subscribed value
    ATCMD_DELIVERY_OF_ERRONEOUS_SDUS_MAX
} atcmd_Delivery_of_erroneous_SDUs_enum;

//Source statistics descriptor
typedef enum
{
    ATCMD_SOURCE_STATISTICS_DESCRIPTOR_CHARACTERISTICS_OF_SDUS_IS_UNKNOWN,              //Characteristics of SDUs is unknown
    ATCMD_SOURCE_STATISTICS_DESCRIPTOR_CHARACTERISTICS_OF_SDUS_CORRESPONDS_TO_A_SPEECH_SOURCE,  //Characteristics of SDUs corresponds to a speech source
    ATCMD_SOURCE_STATISTICS_DESCRIPTOR_MAX
} atcmd_Source_statistics_descriptor_enum;

//Signalling indication
typedef enum
{
    ATCMD_SIGNALLING_INDICATION_PDP_CONTEXT_IS_NOT_OPTIMIZED_FOR_SIGNALLING,            //PDP context is not optimized for signalling
    ATCMD_SIGNALLING_INDICATION_PDP_CONTEXT_IS_OPTIMIZED_FOR_SIGNALLING,                //PDP context is optimized for signalling<PDP_type> (see +CGDCONT and +CGDSCONT commands).
    ATCMD_SIGNALLING_INDICATION_MAX
} atcmd_Signalling_indication_enum;

//state
typedef enum
{
    ATCMD_STATE_DEACTIVATED,                                                            //deactivated
    ATCMD_STATE_ACTIVATED,                                                              //activated
    ATCMD_STATE_MAX
} atcmd_state_enum;

//n
typedef enum
{
    ATCMD_CGAUTO_N_TURN_OFF_AUTOMATIC_RESPONSE_FOR_PACKET_DOMAIN_ONLY,                  //turn off automatic response for Packet Domain only
    ATCMD_CGAUTO_N_TURN_ON_AUTOMATIC_RESPONSE_FOR_PACKET_DOMAIN_ONLY,                   //turn on automatic response for Packet Domain only
    ATCMD_CGAUTO_N_MODEM_COMPATIBILITY_MODE_PACKET_DOMAIN_ONLY,                         //modem compatibility mode, Packet Domain only
    ATCMD_CGAUTO_N_MODEM_COMPATIBILITY_MODE_PACKET_DOMAIN_AND_CIRCUIT_SWITCHED_CALLS,   //modem compatibility mode, Packet Domain and circuit switched calls
    ATCMD_CGAUTO_N_TURN_ON_AUTOMATIC_NEGATIVE_RESPONSE_FOR_PACKET_DOMAIN_ONLY,          //turn on automatic negative response for Packet Domain only
    ATCMD_CGAUTO_N_MAX
} atcmd_cgauto_n_enum;

//response
typedef enum
{
    ATCMD_RESPONSE_REJECT_THE_REQUEST,                                                  //reject the request
    ATCMD_RESPONSE_ACCEPT_AND_REQUEST_THAT_THE_PDP_CONTEXT_BE_ACTIVATED,                //accept and request that the PDP context be activated
    ATCMD_RESPONSE_MAX
} atcmd_response_enum;

//mode
typedef enum
{
    ATCMD_CGEREP_MODE_BUFFER_URC_IN_MT_AND_NO_CODES_FORWARD_TO_TE,                      //buffer unsolicited result codes in the MT; if MT result code buffer is full, the oldest ones can be discarded. No codes are forwarded to the TE.
    ATCMD_CGEREP_MODE_DISCARD_URC_WHEN_LINK_IS_RESERVED_OTHERWISE_FORWARD_TO_TE,        //discard unsolicited result codes when MT-TE link is reserved (e.g. in on-line data mode); otherwise forward them directly to the TE
    ATCMD_CGEREP_MODE_BUFFER_URC_IN_MT_WHEN_LINK_IS_RESERVED_AND_FLUSH_TO_TE_WHEN_AVAILABLE_OTHERWISE_FORWARD_TO_TE,   //buffer unsolicited result codes in the MT when MT-TE link is reserved (e.g. in on-line data mode) and flush them to the TE when MT-TE link becomes available; otherwise forward them directly to the TE
    ATCMD_CGEREP_MODE_MAX
} atcmd_cgerep_mode_enum;

//bfr
typedef enum
{
    ATCMD_BFR_MT_BUFFER_URC_IS_CLEARED_WHEN_MODE_1_OR_2_IS_ENTERED,                     //MT buffer of unsolicited result codes defined within this command is cleared when <mode> 1 or 2 is entered
    ATCMD_BFR_MT_BUFFER_URC_IS_FLUSHED_TO_TE_WHEN_MODE_1_OR_2_IS_ENTERED,               //MT buffer of unsolicited result codes defined within this command is flushed to the TE when <mode> 1 or 2 is entered (OK response shall be given before flushing the codes)
    ATCMD_BFR_MAX
} atcmd_bfr_enum;

//WLAN_Offload
typedef enum
{
    ATCMD_WLAN_OFFLOAD_IN_S1_MODE_OR_IN_IU_MODE_IS_NOT_ACCEPTABLE,                      //offloading the traffic of the PDN connection via a WLAN when in S1 mode or when in Iu mode is not acceptable.
    ATCMD_WLAN_OFFLOAD_IN_S1_MODE_IS_ACCEPTABLE_BUT_NOT_IN_IU_MODE,                     //offloading the traffic of the PDN connection via a WLAN when in S1 mode is acceptable, but not acceptable in Iu mode.
    ATCMD_WLAN_OFFLOAD_IN_IU_MODE_IS_ACCEPTABLE_BUT_NOT_IN_S1_MODE,                     //offloading the traffic of the PDN connection via a WLAN when in Iu mode is acceptable, but not acceptable in S1 mode.
    ATCMD_WLAN_OFFLOAD_IN_S1_MODE_OR_IN_IU_MODE_IS_ACCEPTABLE,                          //offloading the traffic of the PDN connection via a WLAN when in S1 mode or when in Iu mode is acceptable.
    ATCMD_WLAN_OFFLOAD_MAX
} atcmd_WLAN_Offload_enum;

//reason
typedef enum
{
    ATCMD_REASON_IPV4_ONLY_ALLOWED,                                                     //IPv4 only allowed
    ATCMD_REASON_IPV6_ONLY_ALLOWED,                                                     //IPv6 only allowed
    ATCMD_REASON_SINGLE_ADDRESS_BEARERS_ONLY_ALLOWED,                                   //single address bearers only allowed.
    ATCMD_REASON_SINGLE_ADDRESS_BEARERS_ONLY_ALLOWED_BUT_SECOND_ADDRESS_TYPE_ACTIVATION_WAS_FAIL,  //single address bearers only allowed and MT initiated context activation for a second address type bearer was not successful.
    ATCMD_REASON_MAX
} atcmd_reason_enum;

//event_type
typedef enum
{
    ATCMD_EVENT_TYPE_INFORMATIONAL_EVENT,                                               //Informational event
    ATCMD_EVENT_TYPE_INFORMATION_REQUEST,                                               //Information request: Acknowledgement required. The acknowledgement can be accept or reject, see +CGANS.
    ATCMD_EVENT_TYPE_MAX
} atcmd_event_type_enum;

//change_reason
typedef enum
{
    ATCMD_CHANGE_REASON_TFT_CHANGED,                                                    //TFT changed
    ATCMD_CHANGE_REASON_QOS_CHANGED,                                                    //Qos changed
    ATCMD_CHANGE_REASON_WLAN_OFFLOAD_CHANGED,                                           //WLAN Offload changed
    ATCMD_CHANGE_REASON_MAX
} atcmd_change_reason_enum;

//IM_CN_Signalling_Flag
typedef enum
{
    ATCMD_IM_CN_SIGNALLING_FLAG_PDN_IS_NOT_FOR_IMS_RELATED_SIGNALLING_ONLY,             //PDP context is not for IM CN subsystem-related signalling only
    ATCMD_IM_CN_SIGNALLING_FLAG_PDN_IS_FOR_IMS_RELATED_SIGNALLING_ONLY,                 //PDP context is for IM CN subsystem-related signalling only
    ATCMD_IM_CN_SIGNALLING_FLAG_MAX
} atcmd_IM_CN_Signalling_Flag_enum;

//LIPA_indication
typedef enum
{
    ATCMD_LIPA_INDICATION_NOT_RECEIVED,                                                 //indication not received that the PDP context provides connectivity using a LIPA PDN connection
    ATCMD_LIPA_INDICATION_RECEIVED,                                                     //indication received that the PDP context provides connectivity using a LIPA PDN connection
    ATCMD_LIPA_INDICATION_MAX
} atcmd_LIPA_indication_enum;

//auth_prot
typedef enum
{
    ATCMD_AUTH_PROT_NONE,                                                               //None. Used to indicate that no authentication protocol is used for this PDP context. Username and password are removed if previously specified.
    ATCMD_AUTH_PROT_PAP,                                                                //PAP
    ATCMD_AUTH_PROT_CHAP,                                                               //CHAP
    ATCMD_AUTH_PROT_MAX
} atcmd_auth_prot_enum;

//mobile_data
typedef enum
{
    ATCMD_MOBILE_DATA_OFF,                                                              //OFF
    ATCMD_MOBILE_DATA_ON,                                                               //ON
    ATCMD_MOBILE_DATA_MAX
} atcmd_mobile_data_enum;

//data_roaming
typedef enum
{
    ATCMD_DATA_ROAMING_OFF,                                                             //OFF
    ATCMD_DATA_ROAMING_ON,                                                              //ON
    ATCMD_DATA_ROAMING_MAX
} atcmd_data_roaming_enum;

//volte
typedef enum
{
    ATCMD_VOLTE_OFF,                                                                    //OFF
    ATCMD_VOLTE_ON,                                                                     //ON
    ATCMD_VOLTE_MAX
} atcmd_volte_enum;

//ims_test_mode
typedef enum
{
    ATCMD_IMS_TEST_MODE_OFF,                                                            //OFF
    ATCMD_IMS_TEST_MODE_ON,                                                             //ON
    ATCMD_IMS_TEST_MODE_MAX
} atcmd_ims_test_mode_enum;

//op
typedef enum
{
    ATCMD_OP_READ,                                                                      //read
    ATCMD_OP_SET,                                                                       //set
    ATCMD_OP_MAX
} atcmd_op_enum;

//auth_type
typedef enum
{
    ATCMD_AUTH_TYPE_PAP,                                                                //PAP
    ATCMD_AUTH_TYPE_CHAP,                                                               //CHAP
    ATCMD_AUTH_TYPE_NONE,                                                               //NONE
    ATCMD_AUTH_TYPE_PAP_CHAP,                                                           //PAP-CHAP
    ATCMD_AUTH_TYPE_MAX
} atcmd_auth_type_enum;

//rat
typedef enum
{
    ATCMD_RAT_ALL_RAT,                                                                  //all rat
    ATCMD_RAT_23G,                                                                      //23G
    ATCMD_RAT_4G,                                                                       //4G
    ATCMD_RAT_MAX
} atcmd_rat_enum;

//deact_cause
typedef enum
{
    ATCMD_DEACT_CAUSE_EGACT_CAUSE_DONT_CARE = 0,                                        //EGACT_CAUSE_DONT_CARE 
    ATCMD_DEACT_CAUSE_EGACT_CAUSE_DEACT_NORMAL = 1,                                     //EGACT_CAUSE_DEACT_NORMAL
    ATCMD_DEACT_CAUSE_EGACT_CAUSE_DEACT_RA_INITIAL_ERROR = 2,                           //EGACT_CAUSE_DEACT_RA_INITIAL_ERROR
    ATCMD_DEACT_CAUSE_EGACT_CAUSE_DEACT_NO_PCSCF = 3,                                   //EGACT_CAUSE_DEACT_NO_PCSCF
    ATCMD_DEACT_CAUSE_EGACT_CAUSE_DEACT_RA_REFRESH_ERROR = 4,                           //EGACT_CAUSE_DEACT_RA_REFRESH_ERROR
    ATCMD_DEACT_CAUSE_EGACT_CAUSE_DEACT_RA_ERROR = 5,                                   //EGACT_CAUSE_DEACT_RA_ERROR
    ATCMD_DEACT_CAUSE_EGACT_CAUSE_USER_FORCE_TO_LOCAL_RELEASE = 6,                      //Used in user wants to deact a PDN immediately (without peer to peer air message waiting)
    ATCMD_DEACT_CAUSE_EGACT_CAUSE_AOSP_SHUTDOWN = 7,                                    //AOSP Deact reason
    ATCMD_DEACT_CAUSE_EGACT_CAUSE_AOSP_HANDOVER = 8,                                    //AOSP Deact reason
    ATCMD_DEACT_CAUSE_EGACT_CAUSE_APN_CHANGED = 9,                                      //AOSP Deact reason
    ATCMD_DEACT_CAUSE_EGACT_CAUSE_DEACT_IMS_HANDOVER = 10,                              //Deact Cause to release IMS PDN, after it is handed over from Wifi to LTE
    ATCMD_DEACT_CAUSE_MAX
} atcmd_deact_cause_enum;

//mode
typedef enum
{
    ATCMD_PSBEARER_MODE_DISABLE,                                                        //Disable +PSBEARER URC
    ATCMD_PSBEARER_MODE_ENABLE,                                                         //Enable +PSBEARER URC
    ATCMD_PSBEARER_MODE_MAX
} atcmd_psbearer_mode_enum;

//cell_data_speed_support
typedef enum
{
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_NONE_SPECIFIED=0X0000,                            //L4C_NONE_SPECIFIED=0x0000
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_GPRS_SUPPORT=0X0001,                              //L4C_GPRS_SUPPORT=0x0001
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_EDGE_SUPPORT=0X0002,                              //L4C_EDGE_SUPPORT=0x0002 
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_UMTS_SUPPORT=0X0004,                              //L4C_UMTS_SUPPORT=0x0004 
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_HSDPA_SUPPORT=0X0008,                             //L4C_HSDPA_SUPPORT=0x0008
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_HSUPA_SUPPORT=0X0010,                             //L4C_HSUPA_SUPPORT=0x0010 
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_HSDPA_UPA_SUPPORT=0X0018,                         //L4C_HSDPA_UPA_SUPPORT=0x0018
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_HSDPAP_SUPPORT=0X0020,                            //L4C_HSDPAP_SUPPORT=0x0020
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_HSDPAP_UPA_SUPPORT=0X0030,                        //L4C_HSDPAP_UPA_SUPPORT=0x0030
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_HSUPAP_SUPPORT=0X0040,                            //L4C_HSUPAP_SUPPORT=0x0040
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_HSUPAP_DPA_SUPPORT=0X0048,                        //L4C_HSUPAP_DPA_SUPPORT=0x0048
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_HSPAP_SUPPORT=0X0060,                             //L4C_HSPAP_SUPPORT=0x0060
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_DC_DPA_SUPPORT=0X0088,                            //L4C_DC_DPA_SUPPORT=0x0088
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_DC_DPA_UPA_SUPPORT=0X0098,                        //L4C_DC_DPA_UPA_SUPPORT=0x0098
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_DC_HSDPAP_SUPPORT=0X00A0,                         //L4C_DC_HSDPAP_SUPPORT=0x00a0 
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_DC_HSDPAP_UPA_SUPPORT=0X00B0,                     //L4C_DC_HSDPAP_UPA_SUPPORT=0x00b0
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_DC_HSUPAP_DPA_SUPPORT=0X00C8,                     //L4C_DC_HSUPAP_DPA_SUPPORT=0x00c8
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_DC_HSPAP_SUPPORT=0X00E0,                          //L4C_DC_HSPAP_SUPPORT=0x00e0
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_LTE_SUPPORT=0X1000,                               //L4C_LTE_SUPPORT=0x1000
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_LTE_CA_SUPPORT=0X2000,                            //L4C_LTE_CA_SUPPORT=0x2000
    ATCMD_CELL_DATA_SPEED_SUPPORT_L4C_NOT_CHANGE=0XFFFF,                                //L4C_NOT_CHANGE=0xffff
    ATCMD_CELL_DATA_SPEED_SUPPORT_MAX
} atcmd_cell_data_speed_support_enum;

//max_data_bearer_capability
typedef enum
{
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_NONE_ACTIVATE,                                 //L4C_NONE_ACTIVATE
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_GPRS_CAPABILITY,                               //L4C_GPRS_CAPABILITY
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_EDGE_CAPABILITY,                               //L4C_EDGE_CAPABILITY
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_UMTS_CAPABILITY,                               //L4C_UMTS_CAPABILITY 
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_HSDPA_CAPABILITY,                              //L4C_HSDPA_CAPABILITY :mac-hs 
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_HSUPA_CAPABILITY,                              //L4C_HSUPA_CAPABILITY :mac-e/es 
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_HSDPA_HSUPA_CAPABILITY,                        //L4C_HSDPA_HSUPA_CAPABILITY :mac-hs + mac-e/es 
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_HSDPAP_CAPABILITY,                             //L4C_HSDPAP_CAPABILITY :mac-ehs 
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_HSDPAP_UPA_CAPABILITY,                         //L4C_HSDPAP_UPA_CAPABILITY :mac-ehs + mac-e/es 
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_HSUPAP_CAPABILITY,                             //L4C_HSUPAP_CAPABILITY :mac-i/is 
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_HSUPAP_DPA_CAPABILITY,                         //L4C_HSUPAP_DPA_CAPABILITY :mac-hs + maci/is 
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_HSPAP_CAPABILITY,                              //L4C_HSPAP_CAPABILITY :mac-ehs + mac-i/is 
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_DC_DPA_CAPABILITY,                             //L4C_DC_DPA_CAPABILITY :(DC) mac-hs 
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_DC_DPA_UPA_CAPABILITY,                         //L4C_DC_DPA_UPA_CAPABILITY :(DC) mac-hs + mac-e/es 
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_DC_HSDPAP_CAPABILITY,                          //L4C_DC_HSDPAP_CAPABILITY :(DC) mac-ehs 
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_DC_HSDPAP_UPA_CAPABILITY,                      //L4C_DC_HSDPAP_UPA_CAPABILITY :(DC) mac-ehs + mac-e/es 
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_DC_HSUPAP_DPA_CAPABILITY,                      //L4C_DC_HSUPAP_DPA_CAPABILITY :(DC) mac-hs + mac-i/is 
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_DC_HSPAP_CAPABILITY,                           //L4C_DC_HSPAP_CAPABILITY :(DC) mac-ehs + mac-i/is 
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_LTE_CAPABILITY,                                //L4C_LTE_CAPABILITY
    ATCMD_MAX_DATA_BEARER_CAPABILITY_L4C_LTE_CA_CAPABILITY,                             //L4C_LTE_CA_CAPABILITY
    ATCMD_MAX_DATA_BEARER_CAPABILITY_MAX
} atcmd_max_data_bearer_capability_enum;

//fallback_enable
typedef enum
{
    ATCMD_FALLBACK_ENABLE_DISABLE_IPV4V6_FALLBACK,                                      //Disable IPv4v6 fallback
    ATCMD_FALLBACK_ENABLE_ENABLE_IPV4V6_FALLBACK,                                       //Enable IPv4v6 fallback
    ATCMD_FALLBACK_ENABLE_MAX
} atcmd_fallback_enable_enum;

//ipv4_first
typedef enum
{
    ATCMD_IPV4_FIRST_IPV6_THEN_IPV4,                                                    //IPv6 then IPv4
    ATCMD_IPV4_FIRST_IPV4_THEN_IPV6,                                                    //IPv4 then IPv6
    ATCMD_IPV4_FIRST_MAX
} atcmd_ipv4_first_enum;

//is_data_allowed
typedef enum
{
    ATCMD_IS_DATA_ALLOWED_INDICATE_THIS_SIM_IS_NOT_DATA_ALLOWED,                        //Indicate this SIM is NOT data allowed.
    ATCMD_IS_DATA_ALLOWED_INDICATE_THIS_SIM_IS_DATA_ALLOWED,                            //Indicate this SIM is data allowed.
    ATCMD_IS_DATA_ALLOWED_MAX
} atcmd_is_data_allowed_enum;

//+EDRETRY reason
typedef enum
{
    ATCMD_EDRETRY_MODE_RESET_MODE,
    ATCMD_EDRETRY_MODE_QUERY_MODE,
    ATCMD_EDRETRY_MODE_URC_OFF,
    ATCMD_EDRETRY_MODE_URC_ON,
    ATCMD_EDRETRY_MODE_MAX
} atcmd_edretry_mode_enum;
#endif /* _ATCMD_ENUM_H */ 
