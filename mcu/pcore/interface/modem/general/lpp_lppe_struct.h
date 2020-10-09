/******************************************************************************
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
*******************************************************************************/

/******************************************************************************
 * Filename:
 * --------------------------------------------------------
 *   lpp_lppe_struct.h
 *
 * Project:
 * --------------------------------------------------------
 *
 *
 * Description:
 * --------------------------------------------------------
 *   LPP/LPP Extension Interface - Structure Definition
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 11 11 2019 jie-yu.wang
 * [MOLY00456231] TMO 2020Q1 Requirement
 * 	
 * 	[LPPe] TMO2020Q1 Requirement.
 *
 * 03 07 2018 jie-yu.wang
 * [MOLY00311925] [Zion][O1][LPPe] VZW test case 3.34 ¡V 3.39 No DBH Issue
 * 	
 * 	[LPPe] DBH location source.
 *
 * 03 07 2018 jie-yu.wang
 * [MOLY00311925] [Zion][O1][LPPe] VZW test case 3.34 ¡V 3.39 No DBH Issue
 * [LPPe] DBH location source.
 *
 * 10 04 2016 doug.shih
 * [LPPe] interface design
 * Fix enum type redefinition
 * .
 *
 * 10 03 2016 doug.shih
 * [LPPe] interface design
 * ASN.1 structure down size
 * .
 *
 * 10 03 2016 doug.shih
 * [LPPe] interface design
 * .
 *
 * 09 09 2016 doug.shih
 * [LPPe] interface design
 * .
 *
 * 09 06 2016 doug.shih
 * [LPPe] interface design
 * .
 *
 * 08 24 2016 doug.shih
 * [LPPe] interface design
 * .
 *
 *
 *****************************************************************************/

#ifndef _LPP_LPPE_STRUCT_H
#define _LPP_LPPE_STRUCT_H

#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "kal_general_types.h"

#include "lpp_lppe_enum.h"
#include "lpp_lppe_def.h"
#include "gnss2lcsp_enum.h"
#include "gnss2lcsp_struct.h"
/*****************************************************************************
 * Macros Without Parameters
 *****************************************************************************/


/*****************************************************************************
 * Macros With Parameters
 *****************************************************************************/


/*****************************************************************************
 * Type Definitions
 *****************************************************************************/
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
#endif

/* Mapping to LPPeIpAddress_IpAddress*/
typedef struct {
    kal_bool      ipv4Valid;
    kal_char      ipv4[4];
    kal_int32     ipv4_size;

    kal_bool      ipv6Valid;
    kal_char      ipv6[16];
    kal_int32     ipv6_size;

    data_bearer_type_enum    bearer;

    kal_bool      natValid;
    kal_bool      nat;
} ip_address_element_struct;

/*Mapping to LPPeIpAddress_IpAddressInformation*/
typedef struct
{
    ip_address_element_struct  ipAddrElement[LOC_IP_ADDR_MAX_ELEMENT];
    kal_int32          numIPAddrElement;
} lpp_lppe_ipaddress_meas_struct;

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
#endif

/* ---LPP -> LPP_EXT--- */
/* MSG_ID_LPP_LPPE_EPDU_DATA_IND: transfer downlink LPPe message raw data */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                epduDLSN;    /* unique sequence number to identify a EPDU in DL, only used between LPP and LPP_EXT */
    kal_uint16                lppTransID;  /* binded LPP transactio ID of this EPDU */
    lpp_lppe_msg_type_enum    msgType;     /* pre-decode LPPE message type of this EPDU */
    kal_uint8                  posMethodBitmask;   /*if LPP has AGNSS position, LPPe also need to comprase the result into LPPe element */
    /* raw data is in peer buffer */
} lpp_lppe_epdu_data_ind_struct;


/* MSG_ID_LPP_LPPE_EPDU_DATA_NTF: indicate certain uplink LPPe message acknowledge status */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16    epduULSN;   /* unique sequence number to identify a EPDU in UL, only used between LPP and LPP_EXT */
    kal_bool      ackStatus;  /* LPP acknowledge status for specified uplink EPDU, TRUE: acked, FALSE: nacked(sent failure) */
} lpp_lppe_epdu_data_ntf_struct;


/* MSG_ID_LPP_LPPE_EPDU_DATA_CNF: indicate uplink LPPe message transferring status */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16    epduULSN;    /* unique sequence number to identify a EPDU in UL, only used between LPP and LPP_EXT */
    kal_bool      sentStatus;  /* LPP sent status (LPP recieved CNF) for specified uplink EPDU, TRUE: sent, FALSE: failure */
} lpp_lppe_epdu_data_cnf_struct;


/* MSG_ID_LPP_LPPE_STATUS_SYNC_IND: inform LPP status, such as connection status, SUPL/LPP session */
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool    isConnected;          /* indicate signaling connection status, TRUE: connected, FALSE: released */
    kal_bool    isSUPLSessionActive;  /* indicate SUPL/LPP session active status, TRUE: active, FALSE: idle */
} lpp_lppe_status_sync_ind_struct;

/* Assistanda Data*/
/* MSG_ID_LPP_LPPE_WLAN_POS_ASSIST_DATA_REQUEST_IND: AP connectivity module requests to assist data request */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                          sessionID;   /* indicate the associated AD session ID of this relay AD message */
    kal_uint16                          lppTransID;  /* binded LPP transactio ID of this AD request */
    void* ptr;
} lpp_lppe_wlan_pos_assist_data_request_ind_struct;

/* MSG_ID_LPP_LPPE_BT_POS_ASSIST_DATA_REQUEST_IND: AP connectivity module requests to assist data request */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                          sessionID;   /* indicate the associated AD session ID of this relay AD message */
    kal_uint16                          lppTransID;  /* binded LPP transactio ID of this AD request */
    void* ptr;
} lpp_lppe_bt_pos_assist_data_request_ind_struct;

/* MSG_ID_LPP_LPPE_SENSOR_POS_ASSIST_DATA_REQUEST_IND: AP connectivity module requests to assist data request */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                          sessionID;   /* indicate the associated AD session ID of this relay AD message */
    kal_uint16                          lppTransID;  /* binded LPP transactio ID of this AD request */
    void* ptr;
} lpp_lppe_sensor_pos_assist_data_request_ind_struct;

/* MSG_ID_LPP_LPPE_HA_AGNSS_POS_ASSIST_DATA_REQUEST_IND: AP connectivity module requests to assist data request */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                          sessionID;   /* indicate the associated AD session ID of this relay AD message */
    kal_uint16                          lppTransID;  /* binded LPP transactio ID of this AD request */
} lpp_lppe_ha_agnss_pos_assist_data_request_ind_struct;


/* MSG_ID_LPP_LPPE_PMTK_DONE_IND: LPP finish the AGNSS assistance data transmission */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                          sessionID;   /* indicate the associated AD session ID of this relay AD message */
    kal_uint16                          lppTransID;  /* binded LPP transactio ID of this AD request */
} lpp_lppe_pmtk_done_ind_struct;


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
#endif

typedef struct
{
    srn_tech_type_enum                                  srnTechType;         /* identify the SRN RF technology */

   // kal_bool                                            srnVendorInfoValid;
   // LPP_EXT_OMA_LPPe_SRN_Category_srnVendorInformation  srnVendorInfo;       /* TBD: redefine internal structure? */  /* provide information about an associated SRN vendor */
} srn_category_struct;

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
#endif

/* Location Information*/
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
#endif


typedef struct
{
    kal_int32             rtdValue;     /* [0..16777215], the measured round trip delay between the target and WLAN AP, unit refer below rtdUnits */
    wlan_ap_rtd_unit_enum  rTdUnits;     /* units for each of these are 1000ns(1ms), 100ns, 10ns, 1ns or 0.1ns */

    kal_int16              rtdAccuracy;  /* [0..255], accuracy expressed as the standard deviation of the delay */
} wlan_rtd_struct;


/* Mapping to LPPeWlan_WlanApMeasurement*/
typedef struct
{
    /**
     * apRSSI = 0x1
     * apChanFreq = 0x2
     * apRtd = 0x4
     */
    kal_int32      valid; 
    kal_bool      servingFlag; /*     * This parameter indicates whether a set of WLAN AP measurements were obtained for a serving WLAN AP (TRUE) or a non-serving WLAN AP (FALSE) */

    kal_char    apMacAddr[WLAN_MAC_ADDRESS_SIZE];  /* This field provides the 48 bit MAC address of the reported WLAN AP */
    kal_int32   apMACAddress_size;
    /**
     * This field provides the AP signal strength of a beacon frame, probe
     * response frame or measurement pilot frame measured at the target in dBm
     * on the channel indicated by apChannelFrequency field
     * -127..128
     */
    float     apRSSI;    
    kal_int16     apChanFreq;   /* This field provides the AP channel number identification of the reported WLAN AP 0..256 */
    wlan_rtd_struct     apRtd;

    /**     * This field provides the SSID of the wireless network served by the AP     */    
    kal_char apSSID[WLAN_AP_MAX_SSID_OCTET];
    kal_int32 apSSID_size;
} wlan_meas_query_info_list_struct; //wlan_ap_loc_info_list_struct;


/* Mapping to LPPeWlan_WlanProvideMeasurement */
typedef struct
{
    /**
     * This parameter provides measurements for one or more WLAN APs at
     * the current time and/or for historic times
     */
    wlan_meas_query_info_list_struct  listElement[WLAN_AP_MAX_LOC_INFO_LIST_ELEMENT];
    kal_int32            meas_size;
} wlan_meas_query_comb_struct; //wlan_ap_loc_info_comb_struct;


typedef struct
{
    wlan_ap_tgt_dev_err_cause_enum  cause;
    kal_uint32                      notAllAvailableBitmap;  /* use WLAN_AP_TGT_DEV_ERR_*, only valud when cause = NOT_ALL_REQ_MEASUREMENT_POSSIBLE */
} wlan_ap_tgt_dev_err_cause_struct;


/*Mapping to lppe_stack_wlan_meas */
typedef struct
{
    kal_bool     isValid;
    kal_int64    relativeTime; //milliseconds

    wlan_meas_query_comb_struct   meas;
} lpp_lppe_wlan_meas_struct;    //lpp_lppe_wlan_ap_pos_loc_cnf_struct;


typedef struct
{
    kal_bool                                    priMotionStateErrValid;
    sensor_tgt_pri_motion_state_err_cause_enum  priMotionStateErr;

    kal_bool                                    secMotionStateErrValid;
    sensor_tgt_sec_motion_state_err_cause_enum  secMotionStateErr;

    kal_bool                                    pressureErrValid;
    sensor_tgt_pressure_err_cause_enum          pressureErr;
} sensor_tgt_err_struct;


/* Mapping to LPPeSensor_SensorPressureMeasurement*/
typedef struct
{
    kal_int32                       sensorMeas;        /* [30000..115000], specify the measured atmospheric pressure in units of Pa
                                                           (corresponding to a numerical altitude resolution of about 0.1m at sea level) */
    kal_bool                         adjustmentValid;
    kal_int16                        adjustment;        /* [-5000..5000], specify any adjustment in units of Pa applied by a target to the output of the sensor(s) to produce a more accurate atmospheric pressure */

    kal_bool                         pressureUncRangeValid;
    kal_int16                        pressureUncRang;
    
    kal_bool                         pressureUncConfidenceValid;
    kal_char                         pressureUncConfidence;

    kal_bool                         temperatureValid;
    kal_int16                        temperature;       /* [-100..150], provide the temperature in degrees Celsius associated with the sensor(s) used for the pressure measurement and shall be provided if available */
} sensor_pressure_meas_struct;


typedef struct
{
    kal_bool     isValid;
    kal_int64    relativeTime; //milliseconds

    sensor_pressure_meas_struct    meas; 
} lpp_lppe_sensor_meas_struct;


 /* Mapping to LPPeBluetooth_BluetoothRTD */
typedef struct
{
    kal_int32             rtdValue;     /* [0..16777215], the measured round trip delay between the target and WLAN AP, unit refer below rtdUnits */
    bt_rtd_unit_enum  rTdUnits;     /* units for each of these are 1000ns(1ms), 100ns, 10ns, 1ns or 0.1ns */

    kal_int16              rtdAccuracy;  /* [0..255], accuracy expressed as the standard deviation of the delay */
}bt_rtd_struct;

typedef struct
{
   #define LPPE_STACK_BT_MEAS_ELEMENT_VALID_RSSI 0x1
   #define LPPE_STACK_BT_MEAS_ELEMENT_VALID_RTD 0x2
    kal_int32    valid;
    kal_int32    deviceRelativeTime; // milliseconds, actual time = currentTime - relativeTime

    kal_int16     rssi;
    bt_rtd_struct     rtd;
} bt_meas_element_struct;


 /*Mapping to lppe_stack_bt_meas_device*/
typedef struct
{
    kal_char     mac[BT_MAC_ADDRESS_SIZE];
    
    #define LPPE_BT_MEAS_DEVICE_CATEGORY_UNKNOWN   0
    #define LPPE_BT_MEAS_DEVICE_CATEGORY_BT   1
    #define LPPE_BT_MEAS_DEVICE_CATEGORY_BTLE   2
    kal_char     category;
    bt_meas_element_struct    meas;
}bt_meas_list_struct; //srn_meas_list_struct;

typedef struct
{
    srn_category_struct               category;
    srn_target_device_err_cause_enum  cause;

    kal_uint8                         notAllAvailableBitmap;  /* use SRN_TGT_DEV_ERR_*, only valud when cause = NOT_ALL_REQ_MEASUREMENT_POSSIBLE */
} srn_tgt_dev_error_element_struct;


typedef struct
{
    kal_uint8                         numTgtErrElement;
    srn_tgt_dev_error_element_struct  tgtErrElement[SRN_MAX_TARGET_DEVICE_ERR_ELEMENT];
} srn_tgt_dev_error_struct;


typedef struct
{
    kal_bool     isValid;
    kal_int64    relativeTime; //milliseconds

    bt_meas_list_struct  devices[SRN_MAX_MEASUREMENT_ELEMENT]; 
    kal_int32     devices_size;
}lpp_lppe_bt_meas_struct; 

/* Mapping to LPPeNetwork_NetworkLocationMeasurement*/
typedef struct {
    kal_int64       time;  /*UTC time of this fix, in milliseconds since January 1, 1970*/
    double          latitude;  /*in degrees*/
    double          longitude;   /*in degrees*/
    kal_bool       accuracyValid;  /*the estimated accuracy of this location, in meters*/
    float             accuracy;
    kal_bool       altitudeValid;  /*in meters above the WGS 84 reference ellipsoid*/
    double          altitude;
    kal_bool       confidenceHorizontalValid;
    kal_uint8       confidenceHorizontal;       /* The horizontal confidence percentage associated with the CEP or Uncerainty Ellipse depending upon withci is included. [0...99] */
    kal_bool       locationSourceValid;
    /**
     * location source bit array for locationSource
     * locationSourceAgnss = 0x1
     * locationSourceSensor = 0x2
     * locationSourceEcidLTE = 0x4
     * locationSourceEcidGSM = 0x8
     * locationSourceEcidUTRA = 0x10
     * locationSourceWlanAP = 0x20
     * locationSourceSrn = 0x40
     */
    kal_int32        locationSource;
    
    kal_bool     verticalAccuracyValid;    /* the vertical accuracy of this location, in meters */
    float     verticalAccuracy;    
    kal_bool     confidenceVerticalValid;    
    kal_uint8     confidenceVertical;         /* provide the location vertical accuracy confidence, range 0 - 99 */
} network_meas_element_struct;

/* Mapping to lppe_stack_network_meas*/
typedef struct
{
    kal_bool     isValid;
    kal_int64    relativeTime; //milliseconds

    network_meas_element_struct   meas;
}lpp_lppe_network_meas_struct;

/* MSG_ID_LPP_LPPE_WLAN_MEAS_QUERY_CNF: provide location information of specified positioning methods */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */
    lpp_lppe_wlan_meas_struct  wlanAPCnf;
} lpp_lppe_wlan_meas_query_cnf_struct;

/* MSG_ID_LPP_LPPE_BT_MEAS_QUERY_CNF: provide location information of specified positioning methods */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */   
    lpp_lppe_bt_meas_struct    btCnf;
} lpp_lppe_bt_meas_query_cnf_struct;

/* MSG_ID_LPP_LPPE_SENSOR_MEAS_QUERY_CNF: provide location information of specified positioning methods */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */
    lpp_lppe_sensor_meas_struct  sensorCnf;
} lpp_lppe_sensor_meas_query_cnf_struct;

/* MSG_ID_LPP_LPPE_NETWORK_MEAS_QUERY_CNF: provide location information of specified positioning methods */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */
    lpp_lppe_network_meas_struct  networkCnf;
} lpp_lppe_network_meas_query_cnf_struct;

/* MSG_ID_LPP_LPPE_IPADDRESS_MEAS_QUERY_CNF: provide location information of specified positioning methods */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */
    lpp_lppe_ipaddress_meas_struct  ipAddressCnf;
} lpp_lppe_ipaddress_meas_query_cnf_struct;


/* Capability*/
/* Mapping to LPPeWlan_WlanMeasurements */
typedef struct 
{
    kal_bool nonServing;     /* Measurements for a non-serving WLAN AP (in addition to a serving WLAN AP)*/
    kal_bool apSSID;          /* SSID of the WLAN */
    kal_bool apSN;              /* AP S/N received at the target */
    kal_bool apDevType;    /* AP Device type */
    kal_bool apPhyType;    /* AP PHY type */
    kal_bool apRSSI;         /* AP signal strength at the target */
    kal_bool apChanFreq;  /*AP channel/frequency of Tx/Rx */
    kal_bool apRTD;          /* Round Trip Delay between target and AP */
    kal_bool apRepLoc;     /* AP Location as reported by AP */
    kal_bool apTP;             /* AP transmit power */
    kal_bool apAG;            /* AP antenna gain */
    kal_bool ueTP;             /* Target transmit power */
    kal_bool ueAG;            /* Target antenna gain */
    kal_bool ueSN;             /* UE S/N received at the AP */
    kal_bool ueRSSI;          /* Target signal strength at the AP */
    kal_bool oc;                   /* operating class */
} wlan_meas_capa_type_struct;


typedef struct {
    kal_bool ieee802_11a;
    kal_bool ieee802_11b;
    kal_bool ieee802_11g;
    kal_bool ieee802_11n;
    kal_bool ieee802_11ac;
    kal_bool ieee802_11ad;
} wlan_ap_type_struct;


/*Mapping to LPPeWlan_WlanApCapability */
typedef struct
{
    kal_char    apMacAddr[WLAN_MAC_ADDRESS_SIZE];  /* provide the MAC address of the target */
    kal_int32   apMACAddress_size;

    wlan_ap_type_struct   apTypes;    /* provide the WLAN types supported when functioning as an AP, mapping to LPPeWlan_WlanTypesSupported */
} wlan_ap_route_capability_struct;

/* Mapping to LPPeWlan_WlanApADSupported */
typedef struct 
{
    kal_bool aplist;     /*mandatory WLAN AP data*/
    kal_bool aplocation;    /*location of each WLAN AP*/
    kal_bool locationreliability;  /*reliability of WLAN AP location*/
    kal_bool transmitPower;    /*transmit power for each WLAN AP*/
    kal_bool antennaGain;    /*antenna gain for each WLAN AP*/
    kal_bool coverageArea;  /*coverage area for each WLAN AP*/
    /**
     * information for WLAN APs belonging to a different operator than
     * the serving WLAN AP or information for multiple WLAN AP data sets if
     * the serving WLAN AP is not associated with a PLMN operator or if the
     * target device is not served by a WLAN AP
     */
    kal_bool nonServing;

} wlan_ap_ad_support_struct;


/*align AP*/
typedef struct
{
    kal_bool             isWlanSupported;   /* This parameter indicates whether DUT can support WLAN functionality*/
    kal_bool             apCapabilityValid;/*This parameter if present indicates that the target can function as a WLAN AP*/
    wlan_ap_route_capability_struct apCapability;

    kal_bool              wlanTypesSupportedValid; /*This field provides the WLAN AP types supported by the target device when functioning as a WLAN station*/
    wlan_ap_type_struct                   wlanTypesSupport;   /* indicate the WLAN AP types supported by the target device when functioning as a WLAN station, mapping to WLAN_AP_TYPE_LIST_BIT_* */

    wlan_ap_ad_support_struct       apADSupported;    /* This field specifies the WLAN AP assistance data supported by the target device */

    kal_char    ueMacAddr[WLAN_MAC_ADDRESS_SIZE];  /* This field specifies the MAC Address of the UE. This field should be included for location for an emergency call and may be included in other cases */
    kal_int32   ueMACAddress_size;

    wlan_meas_capa_type_struct    measSupported; /* This field specifies the E-CID measurements supported by the target device when accessing a WLAN AP*/
} wlan_ap_capability_struct;


typedef struct
{
    kal_bool  motionStateSupport;     /* TRUE if the target supports motion state measurements */
    kal_bool  secMotionStateSupport;  /* TRUE if the target supports secondary motion state measurements */
    kal_bool  pressureADSupport;      /* TRUE if the target supports atmosphericc pressure assistance data */
    kal_bool  PressureSupport;        /* TRUE if the target supports atmospheric pressure measurements */
} sensor_capability_struct;


typedef struct
{
    srn_category_struct  srnCategory;        /* specify the supported SRN category */
    kal_uint8            supportMeas;        /* specify the SRN measurements the target can provide, mapping to SRN_MEAS_TYPE_BIT_* */
    kal_uint8            supportAssistData;  /* specify the SRN assistance data types supported by the target device for target based mode, mapping to SRN_AD_TYPE_BIT_* */
} srn_capability_category_element_struct;

/* Align to AP: LPPeBluetooth_BluetoothProvideCapabilities (do we need to kepp for LPPe context)*/
typedef struct
{
    kal_uint8                               numCateElement;
    srn_capability_category_element_struct  cateElement[SRN_MAX_CATEGORY_ELEMENT];  /* specify the target capabilities for each supported SRN category */
} srn_capability_struct;

typedef struct 
{
    kal_bool     btSupported; /*Whether target supports bluetooth*/
    kal_bool     btRssi;
    kal_bool     btRtd;
    kal_bool     btGroup; /* This field specifies the BT assistance data types supported by the target device for target based mode*/
    kal_bool     btAntennaPattern;  /* This field specifies the BT assistance data types supported by the target device for target based mode */
    
    kal_bool     btleSupported; /* * Whether target supports bluetooth low energy*/
    kal_bool     btleRssi;
    kal_bool     btleRtd;
    kal_bool     btleGroup; /*This field specifies the BTLE assistance data types supported by the target device for target based mode*/
    kal_bool     btleAntennaPattern;  /* This field specifies the BTLE assistance data types supported by the target device for target based mode */
} bt_capability_struct;

/* Mapping to LPPeIpAddress_IpAddressCapabilities */
typedef struct 
{
    kal_bool ipv4;  /* support to report Internet Protocol version 4 */
    kal_bool ipv6;  /* support to report Internet Protocol version 6 */
    kal_bool nat;  /* support to report Network Address Translation */
} ipaddress_capability_struct;

/* MSG_ID_LPP_LPPE_WLAN_CAPABILITY_IND: unsolicited capability indications from AP connectivity module */
typedef struct
{
    LOCAL_PARA_HDR
    wlan_ap_capability_struct   wlanAPCapa;
} lpp_lppe_wlan_capability_ind_struct;

/* MSG_ID_LPP_LPPE_BT_CAPABILITY_IND: unsolicited capability indications from AP connectivity module */
typedef struct
{
    LOCAL_PARA_HDR
    bt_capability_struct       btCapa;
} lpp_lppe_bt_capability_ind_struct;

/* MSG_ID_LPP_LPPE_SENSOR_CAPABILITY_IND: unsolicited capability indications from AP connectivity module */
typedef struct
{
    LOCAL_PARA_HDR
   sensor_capability_struct    sensorCapa;
} lpp_lppe_sensor_capability_ind_struct;

/* MSG_ID_LPP_LPPE_NETWORK_CAPABILITY_IND: unsolicited capability indications from AP connectivity module */
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool  networkLocationSupported;
} lpp_lppe_network_capability_ind_struct;

/* MSG_ID_LPP_LPPE_IPADDRESS_CAPABILITY_IND: unsolicited capability indications from AP connectivity module */
typedef struct
{
    LOCAL_PARA_HDR
    ipaddress_capability_struct  ipAddressCapa;
} lpp_lppe_ipaddress_capability_ind_struct;

/* MSG_ID_LPP_LPPE_GNSS_POS_IND: un-solicited POS indication from LPP */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           transactionID;
    gnss_loc_result_enum                 resultStatus;
    gnss_pos_result_type_enum            type; 
    gnss_pos_result_struct           posResult;      /* only valid when resultStatus = GNSS_LOC_RESULT_NO_ERROR */
} lpp_lppe_gnss_pos_ind_struct;

/* MSG_ID_LPP_LPPE_GNSS_MEAS_IND: un-solicited POS indication from LPP */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           transactionID;
    gnss_loc_result_enum                 resultStatus;
    gnss_meas_result_type_enum           type;
    gnss_measured_result_struct      measuredResult;  /* only valid when resultStatus = GNSS_LOC_RESULT_NO_ERROR */
} lpp_lppe_gnss_meas_ind_struct;


/* MSG_ID_LPP_LPPE_ABORT_IND: un-solicited ABORT indication from LPP */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           transactionID;
    kal_bool                             abortAll; /* Also can use on LPP clear all session */
    lpp_lppe_abort_cause_enum            cause;
} lpp_lppe_abort_ind_struct;

/* MSG_ID_LPP_LPPE_ERROR_IND: un-solicited ERROR indication from LPP */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           transactionID;

    lpp_lppe_error_cause_enum            cause;
} lpp_lppe_error_ind_struct;

/* ---LPP_EXT -> LPP--- */
/* MSG_ID_LPP_LPPE_EPDU_DATA_REQ: transfer uplink LPPe message raw data */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                epduULSN;         /* unique sequence number to identify a EPDU in UL, only used between LPP and LPP_EXT */
    kal_bool                  lppTransIDValid;  /* LPP transaction ID validity */
    kal_uint16                lppTransID;       /* binded LPP transactio ID of this EPDU (optional) */
    lpp_lppe_msg_type_enum    msgType;          /* LPPE message type of this EPDU */
    kal_bool                  ackRequired;      /* specify if this EPDU requires LPP acknowledge, TRUE: required, FALSE: not needed */
    lppe_result_enum         resultStatus;  
    /* raw data is in peer buffer */
} lpp_lppe_epdu_data_req_struct;


/* MSG_ID_LPP_LPPE_EPDU_DATA_RSP: indicate downlink LPPe message process status */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16    epduDLSN;       /* unique sequence number to identify a EPDU in DL, only used between LPP and LPP_EXT */
    kal_bool      processStatus;  /* LPPe process status for specified downlink EPDU, TRUE: sent, FALSE: failure, e.g., AD receive RSP from AP module, LI REQ is sent to AP module */
} lpp_lppe_epdu_data_rsp_struct;


/* Assistance Data Procedure*/
/* MSG_ID_LPP_LPPE_WLAN_POS_ASSIST_DATA_PROVIDE_IND,: transfer the assist data to LPP*//* LPPe only */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                      sessionID;   /* indicate the associated AD session ID of this relay AD message */
    kal_uint16                      lppTransID;  /* binded LPP transactio ID of this AD */
    kal_bool    result;   /* indicate the LPP/LPPe can initiate an AD request to the network */
} lpp_lppe_wlan_pos_assist_data_provide_ind_struct;

/* MSG_ID_LPP_LPPE_BT_POS_ASSIST_DATA_PROVIDE_IND,: transfer the assist data to LPP*//* LPPe only */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                      sessionID;   /* indicate the associated AD session ID of this relay AD message */
    kal_uint16                      lppTransID;  /* binded LPP transactio ID of this AD */
    kal_bool    result;   /* indicate the LPP/LPPe can initiate an AD request to the network */
} lpp_lppe_bt_pos_assist_data_provide_ind_struct;

/* MSG_ID_LPP_LPPE_SENSOR_POS_ASSIST_DATA_PROVIDE_IND,: transfer the assist data to LPP*//* LPPe only */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                      sessionID;   /* indicate the associated AD session ID of this relay AD message */
    kal_uint16                      lppTransID;  /* binded LPP transactio ID of this AD */
    kal_bool    result;   /* indicate the LPP/LPPe can initiate an AD request to the network */
} lpp_lppe_sensor_pos_assist_data_provide_ind_struct;

/* MSG_ID_LPP_LPPE_HA_AGNSS_POS_ASSIST_DATA_PROVIDE_IND,: transfer the assist data to LPP*//* LPPe only */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                      sessionID;   /* indicate the associated AD session ID of this relay AD message */
    kal_uint16                      lppTransID;  /* binded LPP transactio ID of this AD */
    kal_bool    result;   /* indicate the LPP/LPPe can initiate an AD request to the network */
} lpp_lppe_ha_agnss_pos_assist_data_provide_ind_struct;

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
#endif

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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

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
#endif


/*Location Information*/
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
#endif

typedef struct
{
    kal_bool nonServing;    /* Measurements for a non-serving WLAN AP (in addition to a serving WLAN AP)*/
    kal_bool apSSID;         /* SSID of the WLAN*/
    kal_bool apSN;             /* AP S/N received at the target*/
    kal_bool apDevType;   /* AP Device type*/
    kal_bool apPhyType;    /* AP PHY type*/
    kal_bool apRSSI;         /*  AP signal strength at the target*/
    kal_bool apChanFreq;  /* AP channel/frequency of Tx/Rx*/
    kal_bool apRTD;          /* Round Trip Delay between target and AP*/
    kal_bool apRepLoc;     /* AP Location as reported by AP*/
    kal_bool apTP;             /* AP transmit power */
    kal_bool apAG;            /* AP antenna gain */
    kal_bool ueTP;             /* Target transmit power */
    kal_bool ueAG;            /* Target antenna gain */
    kal_bool ueSN;            /*UE S/N received at the AP */
    kal_bool ueRSSI;        /* Target signal strength at the AP */
    kal_bool oc;                 /*operating class*/
} lpp_lppe_wlan_meas_req_struct;

/* Mapping to LPPeSensor_SensorMeasurementRequest*/
typedef struct
{
    kal_bool  motionStateReq;      /* request for primary motion state measurements */
    kal_bool  secMotionStateReq;   /* request the secondary motion state of the target */
    kal_bool  pressureReq;         /* request for atmospheric pressure measurements */
} lpp_lppe_sensor_meas_req_struct; //lpp_lppe_sensor_pos_loc_req_struct;


/*Mapping to LPPeBluetooth_BluetoothMeasurementRequest*/
typedef struct
{
    srn_req_loc_multi_meas_enum   btMultipleMeasurement; /* This field specifies if the target is forbidded, allowed, or requested to provide multiple measurement sets per BT*/
    kal_bool btRtd;  /*Request BT round trip delay*/
    srn_req_loc_multi_meas_enum  btleMultipleMeasurement; /* This field specifies if the target is forbidden, allowed, or requested to provide multiple measurement sets per BTLE*/
    kal_bool btleRtd;  /*Request BTLE round trip delay*/
} lpp_lppe_bt_meas_req_struct;


/* MSG_ID_LPP_LPPE_WLAN_START_IND: transfer the start message to LBS*//* LPPe only */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */
    lpp_lppe_wlan_meas_req_struct   wlanAPReq;
} lpp_lppe_wlan_start_ind_struct;

/* MSG_ID_LPP_LPPE_BT_START_IND: transfer the start message to LBS*//* LPPe only */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */
    lpp_lppe_bt_meas_req_struct   btReq;
} lpp_lppe_bt_start_ind_struct;

/* MSG_ID_LPP_LPPE_SENSOR_START_IND: transfer the start message to LBS*//* LPPe only */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */
    lpp_lppe_sensor_meas_req_struct   sensorReq;
} lpp_lppe_sensor_start_ind_struct;

/* MSG_ID_LPP_LPPE_NETWORK_START_IND: transfer the start message to LBS*//* LPPe only */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */
} lpp_lppe_network_start_ind_struct;

/* MSG_ID_LPP_LPPE_WLAN_MEAS_QUERY_REQ: transfer the query message to LBS*//* LPPe only */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */
} lpp_lppe_wlan_meas_query_req_struct;

/* MSG_ID_LPP_LPPE_BT_MEAS_QUERY_REQ: transfer the query message to LBS*//* LPPe only */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */
} lpp_lppe_bt_meas_query_req_struct;

/* MSG_ID_LPP_LPPE_SENSOR_MEAS_QUERY_REQ: transfer the query message to LBS*//* LPPe only */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */
} lpp_lppe_sensor_meas_query_req_struct;

/* MSG_ID_LPP_LPPE_NETWORK_MEAS_QUERY_REQ: transfer the query message to LBS*//* LPPe only */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */
} lpp_lppe_network_meas_query_req_struct;

/* MSG_ID_LPP_LPPE_IPADDRESS_MEAS_QUERY_REQ: transfer the query message to LBS*//* LPPe only */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */
} lpp_lppe_ipaddress_meas_query_req_struct;


/* MSG_ID_LPP_LPPE_WLAN_STOP_IND: transfer the stop message to LBS*//* LPPe only */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */
} lpp_lppe_wlan_stop_ind_struct;

/* MSG_ID_LPP_LPPE_BT_STOP_IND: transfer the stop message to LBS*//* LPPe only */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */
} lpp_lppe_bt_stop_ind_struct;

/* MSG_ID_LPP_LPPE_SENSOR_STOP_IND: transfer the stop message to LBS*//* LPPe only */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */
} lpp_lppe_sensor_stop_ind_struct;

/* MSG_ID_LPP_LPPE_NETWORK_STOP_IND: transfer the stop message to LBS*//* LPPe only */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                           sessionID;     /* indicate the associated LI session ID of this message */
    kal_uint16                           lppTransID;    /* binded LPP transactio ID of this LI */
} lpp_lppe_network_stop_ind_struct;

/* MSG_ID_LPP_LPPE_CAPABILITY_REQ: solicited capability request to AP connectivity module */
//TBD: AP automaticlly transfer the capability

/* MSG_ID_LPP_LPPE_ABORT_RSP: unsolicted ABORT request from LPP*/
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16  transactionID;
} lpp_lppe_abort_rsp_struct;

/* MSG_ID_LPP_LPPE_ERROR_RSP: un-solicited ERROR indication from LPP */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16  transactionID;
} lpp_lppe_error_rsp_struct;



/************** LBS -> LPP_EXT  *************/


typedef struct
{
    LOCAL_PARA_HDR
    lpp_lppe_ha_gnss_assist_data_type_enum           type;       /* assistance data type for ack */
} lppe_lbs_gnss_assist_data_rsp_struct; /* define for MSG_ID_LPPE_LBS_GNSS_ASSIST_DATA_RSP */

#endif /* _LPP_LPPE_STRUCT_H */
