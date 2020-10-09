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
 *   lpp_lppe_def.h
 *
 * Project:
 * --------------------------------------------------------
 *
 *
 * Description:
 * --------------------------------------------------------
 *   LPP/LPP Extension Interface - Macro Definition
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * 09 17 2018 jie-yu.wang
 * [MOLY00350925] [LPPe] AT&T v18.2 requirement for LPPe MAC Address
 * 	
 * 	[LPPe] AT&T v18.2 requirement for LPPe MAC Address.
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
 * 10 20 2017 roland.li
 * [MOLY00284361] [LPPe][VzW] LPPe early fix feature
 * 	
 * 	.
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

#ifndef _LPP_LPPE_DEF_H
#define _LPP_LPPE_DEF_H

#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "kal_general_types.h"

/**
 * Nine LPPe sessions in parallel should be the worst case:
 * AD/LI procedure for HA GNSS, WLAN AP, SENSOR PRESSURE, SRN BT and plus on CAPA proceudre
 */
#define LPP_EXT_MAX_SESSION_COUNT                 9
#define LPP_EXT_SESSION_MAX_POS_METHOD_COUNT      4  /* HA GNSS, WLAN AP, SENSOR PRESSURE, SRN BT */

#define LPP_EXT_RESPONSE_TIMER_MAX_SUPPORT_NUM    3  /* for maximum two parallel transactions which need response time control (WLAN, BT, SENSOR), NETWORK has another timer ID */


#define LPP_EXT_MAX_DL_EPDU_BUFFER_COUNT         1  /* for multiple segmented downlink AD EPDU received in a short time */
#define LPP_EXT_MAX_UL_EPDU_BUFFER_COUNT         1  /* for multiple segmented uplink EPDU sent in a short time */

/* LPPe version and compatible level */
#define LPP_EXT_MAX_SUPPORT_VER_MAJOR_VER        1  /* fill capability when init, and check when receive message */
#define LPP_EXT_MAX_SUPPORT_VER_MINOR_VER        0  /* fill capability when init, and check when receive message */
#define LPP_EXT_SUPPORT_COMPATIBILITY_LEVEL      0  /* fill capability when init, and check when receive message */

/* location soruce method bitmask, 8 bit presentation */
#define LOC_SRC_METHOD_AGNSS     0x01
#define LOC_SRC_METHOD_WLAN_AP   0x02
#define LOC_SRC_METHOD_SRN       0x04
#define LOC_SRC_METHOD_SENSOR    0x08

#define WLAN_MAX_DATA_SET_ELEMENT             8  /* maxWLANDataSets */
#define WLAN_AP_MAX_DATA_ELEMENT            128  /* maxWLANAPs */
#define WLAN_AP_MAX_TYPE_DATA_ELEMENT         5  /* maxWLANTypes */
#define WLAN_FEMTO_MAX_AREA_ELEMENT          16

/* SRN assistance data element */
#define SRN_MAX_SRN_GROUP_ELEMENT            64  /* one SRN group might consist of all the SRNs located in one floor of a building. Up to 64 groups can be provided in the same IE */
#define SRN_MAX_SRN_INFO_ELEMENT           1024
#define SRN_MAX_GROUP_UPDATE_RSP_ELEMENT      8
#define SRN_MAX_TARGET_DEVICE_ERR_ELEMENT    16
#define SRN_MAX_CATEGORY_ELEMENT             16
#define SRN_MAX_GROUP_ELEMENT               256
#define SRN_MAX_GROUP_UPDATE_REQ_ELEMENT     64
#define SRN_MAX_ANTENNA_REQ_ELEMENT           8

/* SRN location request info category, for save memory and buffer usage set 16->2 */
#define SRN_MAX_LOC_REQ_INFO_CATEGORY_ELEMENT     2

/* IP address list */
#define LOC_IP_ADDR_MAX_ELEMENT                    5

/* WLAN location info list */
#define WLAN_AP_MAX_LOC_INFO_LIST_ELEMENT         64
#define WLAN_AP_MAX_SSID_OCTET                    32

/* Sensor motion state list */
#define SENSOR_MAX_MOTION_STATE_ELEMENT            8
#define SENSOR_MAX_CALIBRATION_POINT              10

/* SRN measurement list */
#define SRN_MAX_MEASUREMENT_ELEMENT               64
#define SRN_MAX_SRN_MEASUREMENT_ELEMENT           64


#define WLAN_AP_LOC_DATA_LCI_LATITUDE_RESOLUTION_BITMASK    0x3F                /*  6 bits, IE use 1 byte */
#define WLAN_AP_LOC_DATA_LCI_LATITUDE_BITMASK               0x00000003FFFFFFFF  /* 34 bits, IE use 8 byte */
#define WLAN_AP_LOC_DATA_LCI_LONGITUDE_RESOLUTION_BITMASK   0x3F                /*  6 bits, IE use 1 byte */
#define WLAN_AP_LOC_DATA_LCI_LONGITUDE_BITMASK              0x00000003FFFFFFFF  /* 34 bits, IE use 8 byte */
#define WLAN_AP_LOC_DATA_LCI_ALTITUDE_TYPE_BITMASK          0x0F                /*  4 bits, IE use 1 byte */
#define WLAN_AP_LOC_DATA_LCI_ALTITUDE_RESOLUTION_BITMASK    0x3F                /*  6 bits, IE use 1 byte */
#define WLAN_AP_LOC_DATA_LCI_ALTITUDE_BITMASK               0x3FFFFFFF          /* 30 bits, IE use 4 byte */
#define WLAN_AP_LOC_DATA_LCI_DATUM_BITMASK                  0xFF                /*  8 bits, IE use 1 byte */


#define WLAP_AP_ID_MAC_ADDR_BITMASK    0xFFFFFFFFFFFF   /* WLAN AP MAC Address contains 48 bits */
#define BT_ID_MAC_ADDR_BITMASK         0xFFFFFFFFFFFF   /* the MAC address of the SRN for BT and BT LE as per [IEEE 802.15.1] */


/* for wlan_ap_location_server_err_cause_struct = not all AD available, 16 bit presentation */
#define WLAN_AP_LOC_SRV_ERR_AP_MANDATORY_DATA_UNAVAILABLE        0x0800
#define WLAN_AP_LOC_SRV_ERR_AP_LOCATIONS_UNAVAILABLE             0x0400
#define WLAN_AP_LOC_SRV_ERR_AP_LOCATION_RELIABILITY_UNAVAILABLE  0x0200
#define WLAN_AP_LOC_SRV_ERR_AP_TRANSMIT_POWER_UNAVAILABLE        0x0100
#define WLAN_AP_LOC_SRV_ERR_AP_ANTENNA_GAIN_UNAVAILABLE          0x0080
#define WLAN_AP_LOC_SRV_ERR_AP_COVERAGE_AREA_UNAVAILABLE         0x0040
#define WLAN_AP_LOC_SRV_ERR_NON_SERVING_AD_UNAVAILABLE           0x0020
#define WLAN_AP_LOC_SRV_ERR_AP_TP_NOT_AVAILABLE                  0x0010
#define WLAN_AP_LOC_SRV_ERR_AP_AG_NOT_AVAILABLE                  0x0008
#define WLAN_AP_LOC_SRV_ERR_UE_SN_NOT_AVAILABLE                  0x0004
#define WLAN_AP_LOC_SRV_ERR_UE_RSSI_NOT_AVAILABLE                0x0002
#define WLAN_AP_LOC_SRV_ERR_OC_NOT_AVAILABLE                     0x0001


/* for wlan_ap_target_device_err_cause_struct = not all requested measurement possible, 32 bit presentation */
#define WLAN_AP_TGT_DEV_ERR_AP_SSID_NOT_AVAILABLE                  0x00010000
#define WLAN_AP_TGT_DEV_ERR_AP_SN_MEASUREMENT_NOT_POSSIBLE         0x00008000
#define WLAN_AP_TGT_DEV_ERR_AP_DEV_TYPE_NOT_AVAILABLE              0x00004000
#define WLAN_AP_TGT_DEV_ERR_AP_PHY_TYPE_NOT_AVAILABLE              0x00002000
#define WLAN_AP_TGT_DEV_ERR_AP_RSSI_MEASUREMENT_NOT_POSSIBLE       0x00001000
#define WLAN_AP_TGT_DEV_ERR_AP_CHAN_FREQ_NOT_AVAILABLE             0x00000800
#define WLAN_AP_TGT_DEV_ERR_AP_RTD_MEASUREMENT_NOT_POSSIBLE        0x00000400
#define WLAN_AP_TGT_DEV_ERR_UE_TP_NOT_AVAILABLE                    0x00000200
#define WLAN_AP_TGT_DEV_ERR_UE_AG_NOT_AVAILABLE                    0x00000100
#define WLAN_AP_TGT_DEV_ERR_AP_REC_LOC_NOT_AVAILABLE               0x00000080
#define WLAN_AP_TGT_DEV_ERR_NON_SERVING_MEASUREMENT_NOT_AVAILABLE  0x00000040
#define WLAN_AP_TGT_DEV_ERR_HISTORIC_MEASUREMENT_NOT_AVAILABLE     0x00000020
#define WLAN_AP_TGT_DEV_ERR_AP_TP_NOT_AVAILABLE                    0x00000010
#define WLAN_AP_TGT_DEV_ERR_AP_AG_NOT_AVAILABLE                    0x00000008
#define WLAN_AP_TGT_DEV_ERR_UE_SN_NOT_AVAILABLE                    0x00000004
#define WLAN_AP_TGT_DEV_ERR_UE_RSSI_NOT_AVAILABLE                  0x00000002
#define WLAN_AP_TGT_DEV_ERR_OC_NOT_AVAILABLE                       0x00000001


/* for srn_target_device_error_element_struct = not all requested measurement possible, 8 bit presentation */
#define SRN_TGT_DEV_ERR_RSSI_NOT_AVAILABLE                         0x08
#define SRN_TGT_DEV_ERR_RTD_NOT_AVAILABLE                          0x04
#define SRN_TGT_DEV_ERR_MULTIPLE_SETS_NOT_AVAILABLE                0x02
#define SRN_TGT_DEV_ERR_HISTORIC_MEASUREMENTS_NOT_AVAILABLE        0x01


/* WLAN AP AD request bitmask, 16 bit presentation */
#define WLAN_AP_REQ_AD_BIT_AP_LIST                (1 << 0)  /* 0x0001 */
#define WLAN_AP_REQ_AD_BIT_AP_LOCATION            (1 << 1)  /* 0x0002 */
#define WLAN_AP_REQ_AD_BIT_LOCATION_RELIABILITY   (1 << 2)  /* 0x0004 */
#define WLAN_AP_REQ_AD_BIT_TRANSMIT_POWER         (1 << 3)  /* 0x0008 */
#define WLAN_AP_REQ_AD_BIT_ANTENNA_GAIN           (1 << 4)  /* 0x0010 */
#define WLAN_AP_REQ_AD_BIT_COVERAGE_AREA          (1 << 5)  /* 0x0020 */
#define WLAN_AP_REQ_AD_BIT_NON_SERVING            (1 << 6)  /* 0x0040 */


/* WLAN AP AD support bitmask, 16 bit presentation */
#define WLAN_AP_SUPP_AD_BIT_AP_LIST                (1 << 0)  /* 0x0001 */
#define WLAN_AP_SUPP_AD_BIT_AP_LOCATION            (1 << 1)  /* 0x0002 */
#define WLAN_AP_SUPP_AD_BIT_LOCATION_RELIABILITY   (1 << 2)  /* 0x0004 */
#define WLAN_AP_SUPP_AD_BIT_TRANSMIT_POWER         (1 << 3)  /* 0x0008 */
#define WLAN_AP_SUPP_AD_BIT_ANTENNA_GAIN           (1 << 4)  /* 0x0010 */
#define WLAN_AP_SUPP_AD_BIT_COVERAGE_AREA          (1 << 5)  /* 0x0020 */
#define WLAN_AP_SUPP_AD_BIT_NON_SERVING            (1 << 6)  /* 0x0040 */


/* WLAN AP type bitmask, 16 bit presentation */
#define WLAN_AP_TYPE_LIST_BIT_IEEE802_11A         (1 << 0)  /* 0x0001 */
#define WLAN_AP_TYPE_LIST_BIT_IEEE802_11B         (1 << 1)  /* 0x0002 */
#define WLAN_AP_TYPE_LIST_BIT_IEEE802_11G         (1 << 2)  /* 0x0004 */
#define WLAN_AP_TYPE_LIST_BIT_IEEE802_11N         (1 << 3)  /* 0x0008 */
#define WLAN_AP_TYPE_LIST_BIT_IEEE802_11AC        (1 << 4)  /* 0x0010 */
#define WLAN_AP_TYPE_LIST_BIT_IEEE802_11AD        (1 << 5)  /* 0x0020 */

/* WLAN AP requested measurement type bitmask, 32 bit presentation */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_AP_SSID         (1 <<  15)  /* 0x00008000 */  /* SSID of the WLAN */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_AP_SN           (1 <<  14)  /* 0x00004000 */  /* AP S/N received at the target */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_AP_DEV_TYPE     (1 <<  13)  /* 0x00002000 */  /* AP Device type */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_AP_PHY_TYPE     (1 <<  12)  /* 0x00001000 */  /* AP PHY type */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_AP_RSSI         (1 <<  11)  /* 0x00000800 */  /* AP signal strength at the target (both LPP and LPPe) */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_AP_CH_FREQ      (1 <<  10)  /* 0x00000400 */  /* AP channel/frequency of Tx/Rx */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_AP_RTD          (1 <<  9)  /* 0x00000200 */  /* Round Trip Delay between target and AP (both LPP and LPPe) */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_UE_TRANS_PWR    (1 <<  8)  /* 0x00000100 */  /* target transmit power */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_UE_ANT_GAIN     (1 <<  7)  /* 0x00000080 */  /* target antenna gain */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_AP_RPT_LOC      (1 <<  6)  /* 0x00000040 */  /* AP Location as reported by AP */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_NON_SERVING     (1 <<  5)  /* 0x00000020 */  /* measurements for a non-serving WLAN AP (in addition to a serving WLAN AP) */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_HISTORIC_MEAS   (1 <<  4)  /* 0x00000010 */  /* historic WLAN AP measurements */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_AP_TRANS_PWR    (1 <<  3)  /* 0x00000008 */  /* AP transmit power */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_AP_ANT_GAIN     (1 <<  2)  /* 0x00000004 */  /* AP antenna gain */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_UE_SNR          (1 <<  1)  /* 0x00000002 */  /* UE signal to noise ratio received at the AP */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_UE_RSSI         (1 <<  0)  /* 0x00000001 */  /* target signal strength at the AP */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_OP_CLASS        (1 << 19)  /* 0x00080000 */  /* operating class */
#define WLAN_AP_MEAS_REQ_TYPE_BIT_UE_MAC_ADDRESS      (1 << 18)  /* 0x00040000 */  /* ue mac address */

/* WLAN AP measurmenet capability type bitmask, 32 bit presentation */
#define WLAN_AP_MEAS_CAPA_TYPE_BIT_AP_SSID         (1 <<  15)  /* 0x00008000 */  /* SSID of the WLAN */
#define WLAN_AP_MEAS_CAPA_TYPE_BIT_AP_SN           (1 <<  14)  /* 0x00004000 */  /* AP S/N received at the target */
#define WLAN_AP_MEAS_CAPA_TYPE_BIT_AP_DEV_TYPE     (1 <<  13)  /* 0x00002000 */  /* AP Device type */
#define WLAN_AP_MEAS_CAPA_TYPE_BIT_AP_PHY_TYPE     (1 <<  12)  /* 0x00001000 */  /* AP PHY type */
#define WLAN_AP_MEAS_CAPA_TYPE_BIT_AP_RSSI         (1 <<  11)  /* 0x00000800 */  /* AP signal strength at the target (both LPP and LPPe) */
#define WLAN_AP_MEAS_CAPA_TYPE_BIT_AP_CH_FREQ      (1 <<  10)  /* 0x00000400 */  /* AP channel/frequency of Tx/Rx */
#define WLAN_AP_MEAS_CAPA_TYPE_BIT_AP_RTD          (1 <<  9)  /* 0x00000200 */  /* Round Trip Delay between target and AP (both LPP and LPPe) */
#define WLAN_AP_MEAS_CAPA_TYPE_BIT_UE_TRANS_PWR    (1 <<  8)  /* 0x00000100 */  /* target transmit power */
#define WLAN_AP_MEAS_CAPA_TYPE_BIT_UE_ANT_GAIN     (1 <<  7)  /* 0x00000080 */  /* target antenna gain */
#define WLAN_AP_MEAS_CAPA_TYPE_BIT_AP_RPT_LOC      (1 <<  6)  /* 0x00000040 */  /* AP Location as reported by AP */
#define WLAN_AP_MEAS_CAPA_TYPE_BIT_NON_SERVING     (1 <<  5)  /* 0x00000020 */  /* measurements for a non-serving WLAN AP (in addition to a serving WLAN AP) */
#define WLAN_AP_MEAS_CAPA_TYPE_BIT_HISTORIC_MEAS   (1 <<  4)  /* 0x00000010 */  /* historic WLAN AP measurements */
#define WLAN_AP_MEAS_CAPA_TYPE_BIT_AP_TRANS_PWR    (1 <<  3)  /* 0x00000008 */  /* AP transmit power */
#define WLAN_AP_MEAS_CAPA_TYPE_BIT_AP_ANT_GAIN     (1 <<  2)  /* 0x00000004 */  /* AP antenna gain */
#define WLAN_AP_MEAS_CAPA_TYPE_BIT_UE_SNR          (1 <<  1)  /* 0x00000002 */  /* UE signal to noise ratio received at the AP */
#define WLAN_AP_MEAS_CAPA_TYPE_BIT_UE_RSSI         (1 <<  0)  /* 0x00000001 */  /* target signal strength at the AP */
#define WLAN_AP_MEAS_CAPA_TYPE_BIT_OP_CLASS        (1 << 16)  /* 0x00010000 */  /* operating class */

/* WLAN AP additional requested measurement type bitmask, 8 bit presentation */
#define WLAN_AP_ADD_MEAS_REQ_TYPE_BIT_OP_CLASS    (1 <<  0)  /* 0x0001 */

/* WLAN MAC Address size */
#define WLAN_MAC_ADDRESS_SIZE  6

/* BT MAC Address size */
#define BT_MAC_ADDRESS_SIZE  6

/* SRN measurement type bitmask, 8 bit presentation */
#define SRN_MEAS_TYPE_BIT_RSSI                    (1 <<  0)  /* 0x01 */
#define SRN_MEAS_TYPE_BIT_RTD                     (1 <<  1)  /* 0x02 */


/* SRN assistance data type bitmask, 8 bit presentation */
#define SRN_AD_TYPE_BIT_SRN_GROUP                 (1 <<  0)  /* 0x01 */
#define SRN_AD_TYPE_BIT_ANTENNA_PATTERN           (1 <<  1)  /* 0x02 */


/* wireless access type (similar to data bearer) bitmask, 8 bit presentation */
#define WIRELESS_ACCESS_TYPE_GSM                  (1 <<  0)  /* 0x01 */
#define WIRELESS_ACCESS_TYPE_UTRA                 (1 <<  1)  /* 0x02 */
#define WIRELESS_ACCESS_TYPE_LTE                  (1 <<  2)  /* 0x04 */
#define WIRELESS_ACCESS_TYPE_WIFI                 (1 <<  3)  /* 0x08 */
#define WIRELESS_ACCESS_TYPE_OTHER                (1 <<  4)  /* 0x10 */


/* WLAN AP location info validity bitmask, 32 bit presentation */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_AP_SSID                    (1 <<  0)  /* 0x00000001 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_AP_SIGNAL_TO_NOISE         (1 <<  1)  /* 0x00000002 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_AP_DEVICE_TYPE             (1 <<  2)  /* 0x00000004 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_AP_PHY_TYPE                (1 <<  3)  /* 0x00000008 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_AP_SIGNAL_STRENGTH         (1 <<  4)  /* 0x00000010 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_AP_CH_FREQ                 (1 <<  5)  /* 0x00000020 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_AP_ROUND_TRIP_DELAY        (1 <<  6)  /* 0x00000040 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_UE_TRANSMIT_POWER          (1 <<  7)  /* 0x00000080 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_UE_ANTENNA_GAIN            (1 <<  8)  /* 0x00000100 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_AP_REPORTED_LOC            (1 <<  9)  /* 0x00000200 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_AP_TRANSMIT_POWER          (1 << 10)  /* 0x00000400 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_AP_ANTENNA_GAIN            (1 << 11)  /* 0x00000800 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_UE_SIGNAL_TO_NOISE         (1 << 12)  /* 0x00001000 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_UE_SIGNAL_STRENGTH         (1 << 13)  /* 0x00002000 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_AP_SIGNAL_STRENGTH_DELTA   (1 << 14)  /* 0x00004000 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_UE_SIGNAL_STRENGTH_DELTA   (1 << 15)  /* 0x00008000 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_AP_SIGNAL_TO_NOISE_DELTA   (1 << 16)  /* 0x00010000 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_UE_SIGNAL_TO_NOISE_DELTA   (1 << 17)  /* 0x00020000 */
#define WLAN_AP_LOC_INFO_TYPE_VALID_BIT_OPERATING_CLASS            (1 << 18)  /* 0x00040000 */


/* Sensor motion state bitmask, 16 bit presentation */
#define SENSOR_SEC_MOTION_STATE_STATIONARY     (1 <<  0)  /* 0x0001 */
#define SENSOR_SEC_MOTION_STATE_PEDESTRIAN     (1 <<  1)  /* 0x0002 */
#define SENSOR_SEC_MOTION_STATE_RUNNING        (1 <<  2)  /* 0x0004 */
#define SENSOR_SEC_MOTION_STATE_CYCLING        (1 <<  3)  /* 0x0008 */
#define SENSOR_SEC_MOTION_STATE_CAR            (1 <<  4)  /* 0x0010 */
#define SENSOR_SEC_MOTION_STATE_TRAIN          (1 <<  5)  /* 0x0020 */
#define SENSOR_SEC_MOTION_STATE_AEROPLANE      (1 <<  6)  /* 0x0040 */
#define SENSOR_SEC_MOTION_STATE_BOAT           (1 <<  7)  /* 0x0080 */
#define SENSOR_SEC_MOTION_STATE_FIDGETING      (1 <<  8)  /* 0x0100 */


/* IP address type bitmask, 8 bit presentation */
#define IP_ADDR_TYPE_BIT_IP_V4      (1 <<  0)  /* 0x01 */
#define IP_ADDR_TYPE_BIT_IP_V6      (1 <<  1)  /* 0x02 */

/* To align AP structure*/
#define MAX_ENUM_VALUE    2147483647

/* LPPe session type bitmask, use one-byte representation */
#define LPPE_SERVICE_SUPPORT_TYPE_BITMASK_NONE               0x00
#define LPPE_SERVICE_SUPPORT_TYPE_BITMASK_WLAN               0x01
#define LPPE_SERVICE_SUPPORT_TYPE_BITMASK_BT                      0x02
#define LPPE_SERVICE_SUPPORT_TYPE_BITMASK_SENSOR            0x04
#define LPPE_SERVICE_SUPPORT_TYPE_BITMASK_NETWORK       0x08
#define LPPE_SERVICE_SUPPORT_TYPE_BITMASK_IPADDRESS     0x10
#define LPPE_SERVICE_SUPPORT_TYPE_BITMASK_MAX                  0xff

/* LPPe DBH results source bitmask */
#define LPPE_LOCATION_SOURCE_BITMASK_AGNSS               0x00000001
#define LPPE_LOCATION_SOURCE_BITMASK_SENSOR            0x00000002
#define LPPE_LOCATION_SOURCE_BITMASK_ECIDLTE          0x00000004
#define LPPE_LOCATION_SOURCE_BITMASK_ECIDGSM         0x00000008
#define LPPE_LOCATION_SOURCE_BITMASK_ECIDUTRA       0x00000010
#define LPPE_LOCATION_SOURCE_BITMASK_WLANAP           0x00000020
#define LPPE_LOCATION_SOURCE_BITMASK_SRN                    0x00000040
#endif /* _LPP_LPPE_DEF_H */
