
#ifndef __AGPS_MD_INTERFACE_H__
#define __AGPS_MD_INTERFACE_H__

#include "gps_common.h"

//version history
// 6  add PositionTect bitmap parameter in MOLR_BEGIN_REQ, add session_id in MTLR_BEGIN_IND and MTLR_BEGIN_RSP
// 7  change version's type from short to int to avoid unaligned access
// 8  add 4 Session IND messages
// 9  extend requestor_id and client_name from 128 bytes to 160 bytes
// 10 define LPP UP SWIP <-> LPP CP message ID (no struct definition, uses raw data)
// 11 add AGPS_MD_TYPE_MTLR_BEGIN_2_IND and agps_md_mtlr_begin_2_ind struct
// 12 add supporting eutran band list in sim_info_rsp
// 13 add session_id in agps_md_auto_mtlr_response_ind struct
// 13.2 add AGPS_MD_TYPE_SIM_INFO_IND for MD to report SIM_INFO when it is boot up complete, AP CCCI driver should keep the data sent from MD when AP/AGPS does not open CCCI yet
// 13.3 add AGPS_MD_TYPE_LPP_PEER_OTDOA_RESET_UE_STORED_POS_REQ for SUPL LPP session to delete OTDOA data in MD side when A-GPS session is finished
// 13.4 add AGPS_MD_TYPE_MDT_SUPL_DONE_RSP and AGPS_MD_GPS_OPEN_IND_TYPE_MDT for MDT session
// 13.5 add AGPS_MD_TYPE_LOCATION_NTF to sync the latest location to MD side
// 13.6 add support_lpp_otdoa_nbr_cell_list in agps_md_sim_info_rsp and agps_md_sim_info_ind for LPP inter-freq (only on LPP, no implementation on LBS)
// 13.7 add supl flow indication
// 13.8 add AGPS_MD_TYPE_CP_SERVICE_CONFIG_NTF to do CP on/off in runtime, this should be used in Titan's project only
// 13.9 add CP service config in agps_md_sim_info_req struct
// 13.10 add AGPS_MD_TYPE_MODEM_REBOOT_IND when LBS task is initiated or flight mode on/off
// 13.11 add the huge data transfer
// 13.12 add support_location_settings and AGPS_MD_TYPE_LOCATION_SETTINGS_NTF

#define AGPS_MD_INTERFACE_VERSION 13
#define MAX_AGPS_MD_BUFFER_SIZE 4096

typedef int agps_md_reset_data;
#define AGPS_MD_RESET_EPHEMERIS        0x0001
#define AGPS_MD_RESET_ALMANAC          0x0002
#define AGPS_MD_RESET_POSITION         0x0004
#define AGPS_MD_RESET_TIME             0x0008
#define AGPS_MD_RESET_IONO             0x0010
#define AGPS_MD_RESET_UTC              0x0020
#define AGPS_MD_RESET_HEALTH           0x0040
#define AGPS_MD_RESET_SVDIR            0x0080
#define AGPS_MD_RESET_SVSTEER          0x0100
#define AGPS_MD_RESET_SADATA           0x0200
#define AGPS_MD_RESET_RTI              0x0400
#define AGPS_MD_RESET_CELLDB_INFO      0x8000
#define AGPS_MD_RESET_ALL              0xFFFF

typedef struct {
    double          latitude;           //Represents latitude in degrees
    double          longitude;          //Represents longitude in degrees
    char            altitude_used;      //0=disabled 1=enabled
    double          altitude;           //Represents altitude in meters above the WGS 84 reference
    char            speed_used;         //0=disabled 1=enabled
    float           speed;              //Represents speed in meters per second
    char            bearing_used;       //0=disabled 1=enabled
    float           bearing;            //Represents heading in degrees
    char            accuracy_used;      //0=disabled 1=enabled
    float           accuracy;           //Represents expected accuracy in meters
    char            timestamp_used;     //0=disabled 1=enabled
    long long       timestamp;          //Milliseconds since January 1, 1970
} agps_md_gps_location;

typedef enum {
    //PMTK
    AGPS_MD_TYPE_PMTK = 0,
    //GPS control
    AGPS_MD_TYPE_GPS_RESET_IND  = 100,
    AGPS_MD_TYPE_GPS_RESET_RSP,
    AGPS_MD_TYPE_GPS_OPEN_IND,
    AGPS_MD_TYPE_GPS_OPEN_RSP,
    AGPS_MD_TYPE_GPS_CLOSE_IND,
    AGPS_MD_TYPE_GPS_CLOSE_RSP,
    AGPS_MD_TYPE_SESSION_ABORT_REQ,
    AGPS_MD_TYPE_SESSION_ABORT_RSP,
    AGPS_MD_TYPE_MDT_SUPL_DONE_RSP,
    //MOLR
    AGPS_MD_TYPE_MOLR_BEGIN_REQ = 200,
    AGPS_MD_TYPE_MOLR_BEGIN_RSP,
    //MTLR
    AGPS_MD_TYPE_MTLR_BEGIN_IND = 300,
    AGPS_MD_TYPE_MTLR_BEGIN_RSP,
    AGPS_MD_TYPE_MTLR_BEGIN_2_IND,
    //NBR
    AGPS_MD_TYPE_NBR_CELL_INFO_REG_REQ  = 400,
    AGPS_MD_TYPE_NBR_CELL_INFO_REG_CNF,
    AGPS_MD_TYPE_NBR_CELL_INFO_DEREG_REQ,
    AGPS_MD_TYPE_NBR_CELL_INFO_DEREG_CNF,
    AGPS_MD_TYPE_NBR_CELL_INFO_IND,
    //Automation
    AGPS_MD_TYPE_AUTO_TEST_IND  = 500,
    AGPS_MD_TYPE_AUTO_CP_UP_STATUS_IND,
    AGPS_MD_TYPE_AUTO_MOLR_START_IND,
    AGPS_MD_TYPE_AUTO_MOLR_STOP_IND,
    AGPS_MD_TYPE_AUTO_MTLR_RESPONSE_IND,    //not support by MTK AOSP AGPS
    //SIM info query
    AGPS_MD_TYPE_EMERGENCY_CALL_IND = 600,
    AGPS_MD_TYPE_SIM_INFO_REQ,
    AGPS_MD_TYPE_SIM_INFO_RSP,
    AGPS_MD_TYPE_SERVICE_STATE_REQ,
    AGPS_MD_TYPE_SERVICE_STATE_RSP,
    AGPS_MD_TYPE_ROAMING_STATE_REQ,
    AGPS_MD_TYPE_ROAMING_STATE_RSP,
    AGPS_MD_TYPE_DATA_CONNECTION_STATE_REQ,
    AGPS_MD_TYPE_DATA_CONNECTION_STATE_RSP,
    AGPS_MD_TYPE_SIM_INFO_IND,
    //Session IND
    AGPS_MD_TYPE_SESSION_START_IND = 700,
    AGPS_MD_TYPE_SESSION_END_IND,
    AGPS_MD_TYPE_LTE_OTDOA_IND,
    AGPS_MD_TYPE_LTE_ECID_IND,
    //LPP UP SWIP to LPP CP (raw data)
    AGPS_MD_TYPE_LPP_PEER_OTDOA_MEAS_REQ = 800,
    AGPS_MD_TYPE_LPP_PEER_OTDOA_ASSIST_DATA_REQ,
    AGPS_MD_TYPE_LPP_PEER_OTDOA_MEAS_ABORT_REQ,
    AGPS_MD_TYPE_LPP_PEER_ECID_MEAS_REQ,
    AGPS_MD_TYPE_LPP_PEER_ECID_MEAS_ABORT_REQ,
    AGPS_MD_TYPE_LPP_PEER_EUTRAN_BAND_UPDATE_REQ,
    AGPS_MD_TYPE_LPP_PEER_OTDOA_RESET_UE_STORED_POS_REQ,
    //LPP CP to LPP UP SWIP (raw data)
    AGPS_MD_TYPE_LPP_PEER_OTDOA_MEAS_CNF = 900,
    AGPS_MD_TYPE_LPP_PEER_OTDOA_ASSIST_DATA_CNF,
    AGPS_MD_TYPE_LPP_PEER_OTDOA_ADDITIONAL_ASSIST_DATA_REQ,
    AGPS_MD_TYPE_LPP_PEER_ECID_MEAS_CNF,
    AGPS_MD_TYPE_LPP_PEER_EUTRAN_BAND_UPDATE_CNF,
    //AP -> MD notify information
    AGPS_MD_TYPE_LOCATION_NTF = 1000,
    AGPS_MD_TYPE_CP_SERVICE_CONFIG_NTF,
    AGPS_MD_TYPE_LOCATION_SETTINGS_NTF,
    //SUPL Raw data to ELT
    AGPS_MD_TYPE_SUPL_FLOW_IND = 1100,
    AGPS_MD_TYPE_SUPL_FLOW_RSP = 1101,
    //MD -> AP notify information
    AGPS_MD_TYPE_MODEM_REBOOT_IND = 1200,
    //Segmented Packet Transfer (Two-way)
    AGPS_MD_TYPE_SEGMENTED_PACKET_IND = 1300,
} agps_md_type;

typedef enum {
    // LPPe WLAN
    AGPS_MD_HUGE_DATA_TYPE_LPPE_WLAN_REQUEST_CAPABILITIES       = 100,  //MD -> AP  null
    AGPS_MD_HUGE_DATA_TYPE_LPPE_WLAN_PROVIDE_CAPABILITIES       = 101,  //AP -> MD  LPPeWlan_WlanProvideCapabilities
    AGPS_MD_HUGE_DATA_TYPE_LPPE_WLAN_START_MEASUREMENT          = 102,  //MD -> AP  LPPeWlan_WlanMeasurements
    AGPS_MD_HUGE_DATA_TYPE_LPPE_WLAN_STOP_MEASUREMENT           = 103,  //MD -> AP  null  
    AGPS_MD_HUGE_DATA_TYPE_LPPE_WLAN_QUERY_MEASUREMENT          = 104,  //MD -> AP  null
    AGPS_MD_HUGE_DATA_TYPE_LPPE_WLAN_REPLY_MEASUREMENT          = 105,  //AP -> MD  lppe_stack_wlan_meas
    AGPS_MD_HUGE_DATA_TYPE_LPPE_WLAN_REQUEST_ASSIST_DATA         = 106,  //AP -> MD  lppe_stack_wlan_request_assist_data
    AGPS_MD_HUGE_DATA_TYPE_LPPE_WLAN_PROVIDE_ASSIST_DATA        = 107,  //MD -> AP  lppe_stack_wlan_provide_assist_data
    // LPPe BT
    AGPS_MD_HUGE_DATA_TYPE_LPPE_BT_REQUEST_CAPABILITIES         = 200,  //MD -> AP  null
    AGPS_MD_HUGE_DATA_TYPE_LPPE_BT_PROVIDE_CAPABILITIES         = 201,  //AP -> MD  LPPeBluetooth_BluetoothProvideCapabilities
    AGPS_MD_HUGE_DATA_TYPE_LPPE_BT_START_MEASUREMENT            = 202,  //MD -> AP  LPPeBluetooth_BluetoothMeasurementRequest
    AGPS_MD_HUGE_DATA_TYPE_LPPE_BT_STOP_MEASUREMENT             = 203,  //MD -> AP  null
    AGPS_MD_HUGE_DATA_TYPE_LPPE_BT_QUERY_MEASUREMENT            = 204,  //MD -> AP  null
    AGPS_MD_HUGE_DATA_TYPE_LPPE_BT_REPLY_MEASUREMENT            = 205,  //AP -> MD  lppe_stack_bt_meas
    AGPS_MD_HUGE_DATA_TYPE_LPPE_BT_REQUEST_ASSIST_DATA           = 206,  //AP -> MD  lppe_stack_bt_request_assist_data
    AGPS_MD_HUGE_DATA_TYPE_LPPE_BT_PROVIDE_ASSIST_DATA          = 207,  //MD -> AP  lppe_stack_bt_provide_assist_data
    // LPPe Sensor
    AGPS_MD_HUGE_DATA_TYPE_LPPE_SENSOR_REQUEST_CAPABILITIES     = 300,  //MD -> AP  null
    AGPS_MD_HUGE_DATA_TYPE_LPPE_SENSOR_PROVIDE_CAPABILITIES     = 301,  //AP -> MD  LPPeSensor_SensorProvideCapabilities
    AGPS_MD_HUGE_DATA_TYPE_LPPE_SENSOR_START_MEASUREMENT        = 302,  //MD -> AP  LPPeSensor_SensorMeasurementRequest
    AGPS_MD_HUGE_DATA_TYPE_LPPE_SENSOR_STOP_MEASUREMENT         = 303,  //MD -> AP  null
    AGPS_MD_HUGE_DATA_TYPE_LPPE_SENSOR_QUERY_MEASUREMENT        = 304,  //MD -> AP  null
    AGPS_MD_HUGE_DATA_TYPE_LPPE_SENSOR_REPLY_MEASUREMENT        = 305,  //AP -> MD  lppe_stack_sensor_meas
    AGPS_MD_HUGE_DATA_TYPE_LPPE_SENSOR_REQUEST_ASSIST_DATA       = 306,  //AP -> MD  lppe_stack_sensor_request_assist_data
    AGPS_MD_HUGE_DATA_TYPE_LPPE_SENSOR_PROVIDE_ASSIST_DATA      = 307,  //MD -> AP  lppe_stack_sensor_provide_assist_data
    // LPPe Network
    AGPS_MD_HUGE_DATA_TYPE_LPPE_NETWORK_REQUEST_CAPABILITIES    = 400,  //MD -> AP  null
    AGPS_MD_HUGE_DATA_TYPE_LPPE_NETWORK_PROVIDE_CAPABILITIES    = 401,  //AP -> MD  bool
    AGPS_MD_HUGE_DATA_TYPE_LPPE_NETWORK_START_MEASUREMENT       = 402,  //MD -> AP  null
    AGPS_MD_HUGE_DATA_TYPE_LPPE_NETWORK_STOP_MEASUREMENT        = 403,  //MD -> AP  null
    AGPS_MD_HUGE_DATA_TYPE_LPPE_NETWORK_QUERY_MEASUREMENT       = 404,  //MD -> AP  null
    AGPS_MD_HUGE_DATA_TYPE_LPPE_NETWORK_REPLY_MEASUREMENT       = 405,  //AP -> MD  lppe_stack_network_meas
    // LPPe IP Address
    AGPS_MD_HUGE_DATA_TYPE_LPPE_IPADDRESS_REQUEST_CAPABILITIES  = 500,  //MD -> AP  null
    AGPS_MD_HUGE_DATA_TYPE_LPPE_IPADDRESS_PROVIDE_CAPABILITIES  = 501,  //AP -> MD  LPPeIpAddress_IpAddressCapabilities
    AGPS_MD_HUGE_DATA_TYPE_LPPE_IPADDRESS_QUERY_INFORMATION     = 504,  //MD -> AP  null
    AGPS_MD_HUGE_DATA_TYPE_LPPE_IPADDRESS_REPLY_INFORMATION     = 505,  //AP -> MD  LPPeIpAddress_IpAddressInformation
    // LPPe AGNSS
    AGPS_MD_HUGE_DATA_TYPE_LPPE_AGNSS_REQUEST_ASSIST_DATA                   = 600,  //AP -> MD  lpp_lppe_ha_gnss_ad_req_struct
    AGPS_MD_HUGE_DATA_TYPE_LPPE_AGNSS_PROVIDE_ASSIST_DATA_COMMON_IONO       = 610,  //MD -> AP  gnss_ha_common_ionospheric_model_struct
    AGPS_MD_HUGE_DATA_TYPE_LPPE_AGNSS_PROVIDE_ASSIST_DATA_COMMON_TROP       = 611,  //MD -> AP  gnss_ha_common_troposphere_model_struct
    AGPS_MD_HUGE_DATA_TYPE_LPPE_AGNSS_PROVIDE_ASSIST_DATA_COMMON_ALT        = 612,  //MD -> AP  gnss_ha_common_altitude_assist_struct
    AGPS_MD_HUGE_DATA_TYPE_LPPE_AGNSS_PROVIDE_ASSIST_DATA_COMMON_SOLAR      = 613,  //MD -> AP  gnss_ha_common_solar_radiation_struct
    AGPS_MD_HUGE_DATA_TYPE_LPPE_AGNSS_PROVIDE_ASSIST_DATA_COMMON_CCP        = 614,  //MD -> AP  gnss_ha_common_ccp_assist_struct
    AGPS_MD_HUGE_DATA_TYPE_LPPE_AGNSS_PROVIDE_ASSIST_DATA_GENERIC_CCP       = 630,  //MD -> AP  gnss_ha_generic_ccp_assist_struct
    AGPS_MD_HUGE_DATA_TYPE_LPPE_AGNSS_PROVIDE_ASSIST_DATA_GENERIC_DM        = 631,  //MD -> AP  gnss_ha_generic_degradation_model_struct
    AGPS_MD_HUGE_DATA_TYPE_LPPE_AGNSS_PROVIDE_ASSIST_DATA_ACK               = 650,  //AP -> MD  lpp_lppe_ha_gnss_ad_ack_st
    // End
    AGPS_MD_HUGE_DATA_TYPE_LPPE_END                             = 2147483647,   //make sure this enum is 4 bytes in compile time
} agps_md_huge_data_msg_id;

typedef struct {
    int  version; //use AGPS_MD_INTERFACE_VERSION
    short  type;    //refer to agps_md_type
    short  len;     //data length, not include header's size
} agps_md_header;

typedef struct {
    char  pmtk[256];
} agps_md_pmtk;

typedef struct {
    agps_md_reset_data  flags;  //just hardcode 0x3f
} agps_md_gps_reset_ind;
/*
typedef struct {
    //nothing
} agps_md_gps_reset_rsp;
*/
typedef struct {
    #define AGPS_MD_GPS_OPEN_IND_TYPE_NILR 0
    #define AGPS_MD_GPS_OPEN_IND_TYPE_MTLR 1
    #define AGPS_MD_GPS_OPEN_IND_TYPE_MOLR 2
    #define AGPS_MD_GPS_OPEN_IND_TYPE_QUERY 3
    #define AGPS_MD_GPS_OPEN_IND_TYPE_SUPL 4
    char  type;   //refer to AGPS_MD_GPS_OPEN_IND_TYPE_
} agps_md_gps_open_ind;

typedef struct {
    #define AGPS_MD_GPS_OPEN_RSP_RESULT_DENY 0
    #define AGPS_MD_GPS_OPEN_RSP_RESULT_ACCEPT 1
    char  result;        //refer to AGPS_MD_GPS_OPEN_RSP_RESULT_

    #define AGPS_MD_GPS_OPEN_RSP_RESULT_CP_AUTO_RESET_DISABLED 0
    #define AGPS_MD_GPS_OPEN_RSP_RESULT_CP_AUTO_RESET_ENABLED 1
    char  cp_auto_reset; //refer to AGPS_MD_GPS_OPEN_RSP_RESULT_CP_AUTO_RESET_
} agps_md_gps_open_rsp;

/*
typedef struct {
    //nothing
} agps_md_gps_close_ind;

typedef struct {
    //nothing
} agps_md_gps_close_rsp;

typedef struct {
    //nothing
} agps_md_session_abort_req;

typedef struct {
    //nothing
} agps_md_session_abort_rsp;

typedef struct {
    //nothing
} agps_md_mdt_supl_done_rsp;

*/
typedef struct {
   short  length;
   char  pdu[300];
} position_protocol_pdu;

typedef struct {
    #define AGPS_MD_MOLR_BEGIN_POS_TECH_AGNSS   (1 << 0)
    #define AGPS_MD_MOLR_BEGIN_POS_TECH_ECID    (1 << 1)
    #define AGPS_MD_MOLR_BEGIN_POS_TECH_OTDOA   (1 << 2)
    int  pos_tech_bitmap;   //refer to AGPS_MD_MOLR_BEGIN_POS_TECH_
    #define AGPS_MD_MOLR_BEGIN_REQ_MOLR_TYPE_LOC_ESTIMATE 0
    #define AGPS_MD_MOLR_BEGIN_REQ_MOLR_TYPE_ASSIST_DATA 1
    char  molr_type;                //refer to AGPS_MD_MOLR_BEGIN_REQ_MOLR_TYPE_
    char gps_assist_data_used;    //0=disabled 1=enabled
    int  gps_assist_data;           //0x6f hardcode
    char  external_addr_used;     //0=disabled 1=enabled
    char  external_addr[20];
    char  mlc_number_used;        //0=disabled 1=enabled
    char  mlc_number[20];
    int  pos_protocol_pdu_num;
    position_protocol_pdu pos_protocol_pdu[3];
} agps_md_molr_begin_req;

typedef struct {
    #define AGPS_MD_MOLR_BEGIN_RSP_RESULT_FAIL 0
    #define AGPS_MD_MOLR_BEGIN_RSP_RESULT_SUCCESS 1
    char  result;    ///refer to AGPS_MD_MOLR_BEGIN_RSP_RESULT_
    char  location_used;  //0=disabled 1=enabled
    agps_md_gps_location location;
} agps_md_molr_begin_rsp;

typedef struct {
    #define AGPS_MD_MTLR_BEGIN_IND_NOTIFY_TYPE_NOTIFY_LOCATION_ALLOWED 0
    #define AGPS_MD_MTLR_BEGIN_IND_NOTIFY_TYPE_NOTIFY_VERIFY_ALLOW_IF_NO_RSP 1
    #define AGPS_MD_MTLR_BEGIN_IND_NOTIFY_TYPE_NOTIFY_VERIFY_DENY_IF_NO_RSP 2
    #define AGPS_MD_MTLR_BEGIN_IND_NOTIFY_TYPE_NOTIFY_TO_MS_USER_LOCATION_NOT_ALLOWED 3
    int session_id;
    char  notify_type;   //refer to AGPS_MD_MTLR_BEGIN_IND_NOTIFY_TYPE_
    char  requestor_id[160];    //ASCII string
    char  client_name[160];     //ASCII string
} agps_md_mtlr_begin_ind;

typedef struct {
    #define AGPS_MD_MTLR_BEGIN_2_IND_NOTIFY_TYPE_NOTIFY_LOCATION_ALLOWED 0
    #define AGPS_MD_MTLR_BEGIN_2_IND_NOTIFY_TYPE_NOTIFY_VERIFY_ALLOW_IF_NO_RSP 1
    #define AGPS_MD_MTLR_BEGIN_2_IND_NOTIFY_TYPE_NOTIFY_VERIFY_DENY_IF_NO_RSP 2
    #define AGPS_MD_MTLR_BEGIN_2_IND_NOTIFY_TYPE_NOTIFY_TO_MS_USER_LOCATION_NOT_ALLOWED 3
    int  session_id;
    char  notify_type;   //refer to AGPS_MD_MTLR_BEGIN_IND_NOTIFY_TYPE_
    char  requestor_id[160];
    int  requestor_id_len;
    char  client_name[160];
    int  client_name_len;
    #define AGPS_MD_MTLR_BEGIN_2_IND_ENCODING_TYPE_GSM7 1
    #define AGPS_MD_MTLR_BEGIN_2_IND_ENCODING_TYPE_UTF8 2
    #define AGPS_MD_MTLR_BEGIN_2_IND_ENCODING_TYPE_UCS2 3
    char  requestor_id_encoding_type;   //refer to AGPS_MD_MTLR_BEGIN_2_IND_ENCODING_TYPE_
    char  client_name_encoding_type;    //refer to AGPS_MD_MTLR_BEGIN_2_IND_ENCODING_TYPE_
} agps_md_mtlr_begin_2_ind;

typedef struct {
    #define AGPS_MD_MTLR_BEGIN_RSP_USER_RESPOND_DENY 0
    #define AGPS_MD_MTLR_BEGIN_RSP_USER_RESPOND_ACCEPT 1
    #define AGPS_MD_MTLR_BEGIN_RSP_USER_RESPOND_NO_RESPOND 2
    int session_id;
    char user_respond;  //refer to AGPS_MD_MTLR_BEGIN_RSP_USER_RESPOND
} agps_md_mtlr_begin_rsp;
/*
typedef struct {
    //nothing
} agps_md_nbr_cell_info_reg_req;
*/
typedef struct {
    #define AGPS_MD_NBR_CELL_INFO_RAT_MODE_GSM 1
    #define AGPS_MD_NBR_CELL_INFO_RAT_MODE_UMTS 2
    #define AGPS_MD_NBR_CELL_INFO_RAT_MODE_LTE 4
    char  rat_mode;
    char  is_nbr_info_valid;
    agps_ps_nbr_cell_info_union_type  ps_nbr_cell_info_union;
} agps_md_nbr_cell_info_reg_cnf;
/*
typedef struct {
    //nothing
} agps_md_nbr_cell_info_dereg_req;

typedef struct {
    //nothing
} agps_md_nbr_cell_info_dereg_cnf;
*/

typedef struct {
    #define AGPS_MD_NBR_CELL_INFO_RAT_MODE_GSM 1
    #define AGPS_MD_NBR_CELL_INFO_RAT_MODE_UMTS 2
    #define AGPS_MD_NBR_CELL_INFO_RAT_MODE_LTE 4
    #define AGPS_MD_NBR_CELL_INFO_RAT_MODE_CDMA 8 // IS801 Over SUPL
    char  rat_mode;
    char  is_nbr_info_valid;
    agps_ps_nbr_cell_info_union_type  ps_nbr_cell_info_union;
} agps_md_nbr_cell_info_ind;

typedef struct {
    char mode;  // 0=off 1=on
} agps_md_auto_test_ind;

typedef struct {
    #define AGPS_MD_AUTO_CP_UP_STATUS_MODE_SET_TO_CP 0
    #define AGPS_MD_AUTO_CP_UP_STATUS_MODE_SET_TO_UP 1
    #define AGPS_MD_AUTO_CP_UP_STATUS_MODE_CP_SET_TO_LOC_EST 2
    #define AGPS_MD_AUTO_CP_UP_STATUS_MODE_CP_SET_TO_ASSIT_DATA 3
    #define AGPS_MD_AUTO_CP_UP_STATUS_MODE_UP_SET_TO_MA 4
    #define AGPS_MD_AUTO_CP_UP_STATUS_MODE_UP_SET_TO_MB 5
    char  mode; //refer to AGPS_MD_CP_UP_STATUS_MODE_
} agps_md_auto_cp_up_status_ind;
/*
typedef struct {
    //nothing
} agps_md_auto_molr_start_ind;

typedef struct {
    //nothing
} agps_md_auto_molr_stop_ind;
*/
typedef struct {
    #define AGPS_MD_AUTO_MTLR_RESPONSE_IND_RESPONSE_REJECT 0
    #define AGPS_MD_AUTO_MTLR_RESPONSE_IND_RESPONSE_ACCEPT 1
    char  response; //refer to AGPS_MD_MTLR_RESPONSE_IND_RESPONSE_
    int session_id;
} agps_md_auto_mtlr_response_ind;

typedef struct {
    #define AGPS_MD_EMERGENCY_CALL_IND_SIM_ID_SIM_1 1
    #define AGPS_MD_EMERGENCY_CALL_IND_SIM_ID_SIM_2 2
    #define AGPS_MD_EMERGENCY_CALL_IND_SIM_ID_SIM_3 3
    #define AGPS_MD_EMERGENCY_CALL_IND_SIM_ID_SIM_4 4
    char  sim_id;   //refer to AGPS_MD_EMERGENCY_CALL_IND_SIM_ID_

    #define AGPS_MD_EMERGENCY_CALL_IND_STATE_DIALED 0
    #define AGPS_MD_EMERGENCY_CALL_IND_STATE_ENDED 1
    char  state; //refer to AGPS_MD_EMERGENCY_CALL_IND_STATE_
} agps_md_emergency_call_ind;

typedef struct {
    char cp_gsm_disabled;
    char cp_umts_disabled;    
    char cp_lte_disabled;
    char cp_lppe_enable;
    char lppe_network_location_disable;    
    char reject_non911_nilr_enable;
    char battery_percentage;    // the default value is 100 if AGPS is also not synced from framework layer
                                // and it will be udpated per 5% of battery level
} agps_md_sim_info_req;

typedef struct {
    #define AGPS_MD_SIM_INFO_RSP_SIM_NUMBER_SINGLE 1
    #define AGPS_MD_SIM_INFO_RSP_SIM_NUMBER_GEMINI 2
    #define AGPS_MD_SIM_INFO_RSP_SIM_NUMBER_GEMINI_3 3
    #define AGPS_MD_SIM_INFO_RSP_SIM_NUMBER_GEMINI_4 4
    char sim_number; //refer to AGPS_MD_SIM_INFO_RSP_SIM_NUMBER_
    #define AGPS_MD_SIM_INFO_RSP_MD_TYPE_FDD 0
    #define AGPS_MD_SIM_INFO_RSP_MD_TYPE_TDD 1
    char md_type;
    #define AGPS_MD_SIM_INFO_RSP_SUPPORT_EUTRAN_BAND_MAX 50
    char support_lpp_ecid;
    char support_lpp_otdoa;
    char support_eutran_band_num;
    short support_eutran_band_list[AGPS_MD_SIM_INFO_RSP_SUPPORT_EUTRAN_BAND_MAX];
    char support_lpp_otdoa_nbr_cell_list;    
    char support_supl_flow_ind; 
    char support_location_settings;
    char support_cp_lppe;
    char support_rat_2g;
    char support_rat_3g;
    char support_rat_4g;    
    char support_ue_rx_tx_sup_tdd_r13;
    char support_rat_5g;
    char support_lpp_inter_rat_otdoa;
    char support_md_time_sync; // GNSS Time Sync between mnl annd modem via huge data transfer
    char disable_lpp_inter_freq_otdoa;
} agps_md_sim_info_rsp, agps_md_sim_info_ind;
/*
typedef struct {
    //nothing
} agps_md_service_state_req;
*/
typedef struct {
    int state_bitmap;   //0=out of service  1=in service
} agps_md_service_state_rsp;
/*
typedef struct {
    //nothing
} agps_md_roaming_state_req;
*/
typedef struct {
    int state_bitmap;   //0=local or unknown  1=roaming
} agps_md_roaming_state_rsp;
/*
typedef struct {
    //nothing
} agps_md_data_connection_state_req;
*/
typedef struct {
    int state_bitmap;   //0=disconnected or unknown  1=connected
} agps_md_data_connection_state_rsp;

typedef struct {
    double lat;
    double lng;
    int acc;    // meter
} agps_md_location_ntf;

typedef struct {
    #define AGPS_MD_CP_RAT_MODE_GSM 0x01
    #define AGPS_MD_CP_RAT_MODE_UMTS 0x02
    #define AGPS_MD_CP_RAT_MODE_LTE 0x04
    int  rat_mode_flags;
    
    char gsm_enabled;
    char umts_enabled;
    char lte_enabled;
} agps_md_cp_service_config_ntf;

typedef struct {
    char enabled;
} agps_md_location_setting_ntf;

typedef struct {
    #define AGPS_MD_SUPL_FLOW_IND_DIRECTION_NW_TO_UE 0 // LS to MS in operator's sample excel
    #define AGPS_MD_SUPL_FLOW_IND_DIRECTION_UE_TO_NW 1 // MS to LS
    char direction;
    #define AGPS_MD_SUPL_FLOW_IND_TYPE_UNKNOWN 0
    #define AGPS_MD_SUPL_FLOW_IND_TYPE_SUPL_INIT 1
    #define AGPS_MD_SUPL_FLOW_IND_TYPE_SUPL_START 2
    #define AGPS_MD_SUPL_FLOW_IND_TYPE_SUPL_RESPONSE 3
    #define AGPS_MD_SUPL_FLOW_IND_TYPE_SUPL_POS_INIT 4
    #define AGPS_MD_SUPL_FLOW_IND_TYPE_SUPL_POS 5
    #define AGPS_MD_SUPL_FLOW_IND_TYPE_SUPL_END 6
    #define AGPS_MD_SUPL_FLOW_IND_TYPE_SUPL_TRIGGERED_START 7
    #define AGPS_MD_SUPL_FLOW_IND_TYPE_SUPL_TRIGGERED_RESPONSE 8
    #define AGPS_MD_SUPL_FLOW_IND_TYPE_SUPL_TRIGGERED_STOP 9
    #define AGPS_MD_SUPL_FLOW_IND_TYPE_SUPL_NOTIFY 10
    #define AGPS_MD_SUPL_FLOW_IND_TYPE_SUPL_NOTIFY_RESPONSE  11
    #define AGPS_MD_SUPL_FLOW_IND_TYPE_SUPL_SET_INIT 12
    #define AGPS_MD_SUPL_FLOW_IND_TYPE_SUPL_REPORT 13
    char type;
    int message_size;
    int session_id;
    int message_id;
    int  pdu_id;
    int  pdu_size;
    char pdu[3072];
} agps_md_supl_flow_ind;
/*
typedef struct {
    //nothing
} agps_md_supl_flow_rsp;

typedef struct {
    //nothing
} agps_md_modem_reboot_ind;
*/
/* Structure for LBS AP setting query API */
typedef agps_md_sim_info_req lbs_setting_generic_ap;
#endif

