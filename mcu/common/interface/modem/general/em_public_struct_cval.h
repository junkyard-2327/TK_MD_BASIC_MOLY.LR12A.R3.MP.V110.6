/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
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
 *   em_public_struct_cval.h
 *
 * Project:
 * --------
 *   Gen93
 *
 * Description:
 * ------------
 *   Engineer mode public structures for C2K L4(CVAL) module.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/


#ifndef _EM_PUBLIC_STRUCT_CVAL_H
#define _EM_PUBLIC_STRUCT_CVAL_H

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info; /* EM ID. */
    kal_uint16  channel;  /* It defines channel number. */
    kal_uint16  band_class;  /* It defines band class. */
    kal_uint16  pilot_pn_offset;  /* It defines pilot PN offset. */
    kal_int16   rx_power;  /* It defines rx power. */
    kal_int16   div_rx_power;  /* It defines div rx power. */
    kal_int16   tx_power;  /* It defines tx power. */
    kal_int16   tx_ant;  /* It defines tx antenna id. */
    kal_uint16  fer;  /* It defines frame error rate. */
    kal_bool    tas_enable; /*if TAS is enabled or not.*/
    kal_int16   tas_state;  /* It defines TAS state. */
    kal_int16   tas_ver;  /* It defines TAS version. */
    kal_int16   rx_power_dbmL;  /* It defines Antenna L rx power. */
    kal_int16   rx_power_dbmU;  /* It defines Antenna U rx power. */
    kal_int16   rx_power_dbmLp;  /* It defines Antenna Lp rx power. */
} em_c2k_l4_rtt_radio_info_ind_struct;

/* Definition of RF file cal state */
typedef enum
{
    EM_RF_FILE_IS_CALIBRATED = 0,
    EM_RF_FILE_IS_NOT_CALIBRATED = 1,
    EM_RF_FILE_VERSION_NOT_EXIST = 2,
} em_rf_file_cal_state_enum;

typedef struct
{
    kal_uint8   major_ver; /* It defines RF file major version. */
    kal_uint8   minor_ver; /* It defines RF file minor version. */
    kal_uint8   value_ver; /* It defines RF file value version. */
    kal_uint8   cust_ver; /* It defines RF file cust version. */
} em_rf_file_ver_sturct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum  em_info; /* EM ID. */
    kal_uint8     cp_state; /* It defines cp state. */
    em_rf_file_cal_state_enum    rf_file_cal_state; /* The calibration state of RF file: */
    em_rf_file_ver_sturct    rf_file_ver; /* Used to record the RF file version. */
    kal_uint16    sid; /* It defines sid. */
    kal_uint16    nid; /* It defines nid. */
    kal_uint8     sys_det_ind; /* It defines system determination indication. */
    kal_uint16    reg_zone; /* It defines registration zone. */
    kal_uint32    base_lat; /* It defines base latitude. */
    kal_uint32    base_long; /* It defines base longtitude. */
    kal_uint8     nwk_pref_sci; /* It defines network preferred sci. */
    kal_bool      qpch_mode; /* TRUE if qpch mode is enabled;FALSE if qpch mode is disabled. */
    kal_uint16    mcc; /* It defines mcc. */
    kal_uint8     imsi_11_12; /* It defines imsi 11 12. */
    kal_uint8     pkt_zone_id; /* It defines current packet zone id. */
    kal_uint16    service_option; /* It defines current service option. */
    kal_uint16    t_add; /* It defines T_add. */
    kal_uint16    t_drop; /* It defines T_drop. */
    kal_uint16    t_comp; /* It defines T_comp. */
    kal_uint16    t_tdrop; /* It defines T_tdrop. */
} em_c2k_l4_rtt_info_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum  em_info; /* EM ID. */    
    kal_uint16  for_sch_mux;    /* Scp_mux of forward supplement channel. */
    kal_uint8   for_sch_rc;    /* Sch_rc of forward supplement channel. */
    kal_uint8   for_sch_status;    /* Sch_status of forward supplement channel. */
    kal_uint16  for_sch_duration;    /* Sch_duration of forward supplement channel. */
    kal_uint8   for_sch_rate;    /* Sch_rate of forward supplement channel. */
    kal_uint16  rev_sch_mux;    /* Scp_mux of reverse supplement channel. */
    kal_uint8   rev_sch_rc;    /* Sch_rc of reverse supplement channel. */
    kal_uint8   rev_sch_status;    /* Sch_status of reverse supplement channel. */
    kal_uint16  rev_sch_duration;    /* Sch_duration of reverse supplement channel. */
    kal_uint8   rev_sch_rate;    /* Sch_rate of reverse supplement channel. */
} em_c2k_l4_rtt_sch_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum  em_info; /* EM ID. */    
    kal_uint32  total_msg;    /* Number of paging ch messages received */
    kal_uint32  error_msg;    /* Number of paging ch messages with bad crc */
    kal_uint16  acc_1;    /* number of layer 3 requests messages generated */
    kal_uint16  acc_2;    /* number of layer 3 response messages generated */
    kal_uint16  acc_8;    /* number of unsuccessful access attempts */
    kal_uint16  dpchLoss_count;    /* Count of paging ch declared */
    kal_uint16  dtchLoss_count;    /* Count of dedicated traffic CH Loss */
    kal_uint32  idleHO_count;    /* Count of idle handoff */
    kal_uint16  hardHO_count;    /* Count of hard handoff */
    kal_uint16  interFreqldleHO_count;    /* Count of inter_Freq idle handoff */
    kal_uint16  silentryRetryTimeout_count;    /* Count of silentry retry timeout */
    kal_uint16  T40_count;    /* Count of T40m timeout */
    kal_uint16  T41_count;    /* Count of T41m timeout */
} em_c2k_l4_rtt_stat_info_ind_struct;


#define SYS_CP_MAX_ACTIVE_LIST_PILOTS        6   /* array size for active pilot list */
#define SYS_CP_MAX_CANDIDATE_LIST_PILOTS    10   /* array size for candidate list */
#define SYS_CP_MAX_NEIGHBOR_LIST_PILOTS     44   /* array size for neighbor pilot list */

typedef struct
{
    kal_uint16   pilot_pn;    /* Pilot PN. */
    kal_uint16   pilot_ecio;    /* Pilot Ec/Io. */
    kal_uint16   pilot_phase;    /* Pilot phase. */    
} em_rtt_set_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum  em_info; /* EM ID. */    
    kal_uint8   num_in_active_set;    /* Number of in active set. */
    em_rtt_set_struct   in_active_set[SYS_CP_MAX_ACTIVE_LIST_PILOTS];    /* In active set info. */
    kal_uint8   num_candidate_set;    /* Number of in candidate set. */
    em_rtt_set_struct   candidate_set[SYS_CP_MAX_CANDIDATE_LIST_PILOTS];    /* Candidate set info. */
    kal_uint8   num_neighbor_set;    /* Number of in neighbor set. */
    em_rtt_set_struct   neighbor_set[SYS_CP_MAX_NEIGHBOR_LIST_PILOTS];    /* Neighbor set info. */
} em_c2k_l4_rtt_serving_neighbr_set_info_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum  em_info; /* EM ID. */    
    kal_uint8   bandClass;    /* 1xEV-DO current band class. */
    kal_uint16  channel;    /* 1xEV-DO current channel number. */
    kal_uint16  pilotPN;    /* 1xEV-DO pilot PN. */
    kal_uint8   phy_subtype;    /* Phy subtype. */
    kal_int16   rssi_dbm;    /* 1xEV-DO RSSI_dbm. */
    kal_int16   div_rssi;    /* div_rssi */
    kal_int16   tx_ant_id;    /* tx_ant_id */
    kal_char    sectorlD[34];    /* 1xEV-DO Sector ID. */
    kal_uint8   subnetMask;    /* 1xEV-DO subnetmask. */
    kal_uint8   colorCode;    /* 1xEV-DO color Code. */
    kal_char    uati[34];    /* 1xEV-DO UATI. */
    kal_uint8   pilotlnc;    /* 1xEV-DO pilotlnc. */
    kal_uint8   activeSetSchWin;    /* 1xEV-DO activeSet Search Window. */
    kal_uint8   neighborSetSchWin;    /* 1xEV-DO neighborSet Search Window. */
    kal_uint8   remainSetSchWin;    /* 1xEV-DO remainSet Search Window. */
    kal_uint8   sameFreq_T_ADD;    /* 1xEV-DO T_ADD with same channel. */
    kal_uint8   sameFreq_T_DROP;    /* 1xEV-DO T_DROP with same channel. */
    kal_uint8   sameFreq_T_tDROP;    /* 1xEV-DO T_tDROP with same channel. */
    kal_uint8   diffFreq_T_ADD;    /* 1xEV-DO T_ADD with different channel. */
    kal_uint8   diffFreq_T_DROP;    /* 1xEV-DO T_DROP with different channel. */
    kal_uint8   diffFreq_T_tDROP;    /* 1xEV-DO T_tDROP with different channel. */
} em_c2k_l4_evdo_serving_info_ind_struct;


typedef struct
{
    kal_uint16  activePilotPN;    /* 1xEV-DO activePilotPN. */
    kal_int16   activepilotEclo;    /* 1xEV-DO activePilotEclo. */
    kal_uint8   activeDrcCover;    /* 1xEV-DO activeDrcCover. */
} em_evdo_active_set_struct;

#define SYS_MAX_ACTIVE_LIST_PILOTS       6

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum  em_info; /* EM ID. */    
    kal_uint8   num_evdo_active_set;    /* Number of in active set. */
    em_evdo_active_set_struct   evdo_active_set[SYS_MAX_ACTIVE_LIST_PILOTS];    /* Active set info. */
} em_c2k_l4_evdo_active_set_info_ind_struct;


typedef struct
{
    kal_uint8   Band;    /* 1xEV-DO band of set. */
    kal_uint16  Channel;    /* 1xEV！DO channel of set. */
    kal_uint16  PilotPN;    /* 1xEV-DO pilotPN of set. */
    kal_int16   PilotEclo;    /* 1xEV-DO pilotEclo of set. */
} em_evdo_set_struct;

/* max number of pilot pn's in candidate list */
#define SYS_MAX_CANDIDATE_LIST_PILOTS   10

/* max number of pilot pn's in neighbor list */
#define SYS_MAX_NEIGHBOR_LIST_PILOTS    56

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum  em_info; /* EM ID. */    
    kal_uint8   num_evdo_cand_set;    /* Number of in candidate set. */
    em_evdo_set_struct  evdo_cand_set[SYS_MAX_CANDIDATE_LIST_PILOTS];    /* Candidate set info. */    
} em_c2k_l4_evdo_cand_set_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum  em_info; /* EM ID. */    
    kal_uint8   num_evdo_nghdr_set;    /* Number of in neighbor set. */
    em_evdo_set_struct  evdo_nghdr_set[SYS_MAX_NEIGHBOR_LIST_PILOTS];    /* Neighbor set info. */
} em_c2k_l4_evdo_nghdr_set_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum  em_info; /* EM ID. */
    kal_int32   c_i;    /* 1xEV-DO C/I. */
    kal_uint8   drcAverageValue;    /* 1xEV-DO drcAverageValue. */
    kal_uint32  ftcCrcErrorCount;    /* 1xEV-DO ftcCrcErrorCount. */
    kal_uint32  ftcTotalCount;    /* 1xEV-DO ftcTotalCount. */
    kal_uint8   syncCrcErrorRatio;    /* 1xEV-DO syncCrcErrorRatio. */
} em_c2k_l4_evdo_fl_info_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum  em_info; /* EM ID. */    
    kal_uint16  averageTbsize;    /* 1xEV-DO averageTbsize. */
    kal_uint32  rtcRetransmitCount;    /* 1xEV！DO rtcRetransmitCount. */
    kal_uint32  rtcTransmitTotalCount;    /* 1xEV-DO rtcTransmitTotalCount. */
    kal_int16   txPower;    /* 1xEV！DO txPower. */
    kal_int16   pilotPower;    /* 1xEV！DO pilotPower. */
    kal_uint8   rab_1_ratio;    /* 1xEV-DO rab_1_ratio. */
} em_c2k_l4_evdo_rl_info_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum  em_info; /* EM ID. */
    kal_uint8   sessionState;    /* 1xEV-DO Session state. */
    kal_uint8   atState;    /* 1xEV-DO AT state. */
    kal_uint8   almpState;    /* 1xEV-DO ALMP state. */
    kal_uint8   inspState;    /* 1xEV-DO INSP state. */
    kal_uint8   idpState;    /* 1xEV-DO IDP state. */
    kal_uint8   ompState;    /* 1xEV-DO OMP state. */
    kal_uint8   cspState;    /* 1xEV-DO CSP state. */
    kal_uint8   rupState;    /* 1xEV-DO RUP state. */
} em_c2k_l4_evdo_state_info_ind_struct;

/* Definition of CP state */
typedef enum
{
    EM_VAL_AT_RTT_NOSVC = 0,
    EM_VAL_AT_RTT_INIT = 1,
    EM_VAL_AT_RTT_IDLE = 2,
    EM_VAL_AT_RTT_TRAFFICINI = 3,
    EM_VAL_AT_RTT_TRAFFIC = 4,
    EM_VAL_AT_RTT_STATE_NUM = 5,
} em_val_at_rtt_state_enum;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum  em_info; /* EM ID. */
    em_val_at_rtt_state_enum    State;    /* It defines the Val AT RTT state. */
    kal_uint16  serviceOption;    /* Service option. */
    kal_uint8   rateReduction;    /* Rate Reduction. */
    kal_uint16  channel;    /* Current channel number. */
    kal_uint16  bandClass;    /* Current band class. */
    kal_uint16  sid;    /* SID. */
    kal_uint16  nid;    /* NID. */
    kal_uint16  baseId;    /* Base station ID. */
    kal_uint16  pilotPNOffset;    /* Pilot PN offset. */
    kal_uint8   mob_p_revp;    /* Protocol revision number of band. */
    kal_uint32  baseLat;    /* Latitide of last registered base station. */
    kal_uint32  baseLong;    /* Lonitude of last registered base station. */
    kal_int16  rxPower;    /* Rx power. */
    kal_int16   EcIo;    /* Ec/Io. */
    kal_uint16  FER;    /* FER. */
    kal_int16  txPower;    /* Tx power. */
}em_c2k_l4_sprint_xrtt_info_ind_struct;


/* Definition of CP state */
typedef enum
{
    EM_VAL_AT_EVDO_INACTIVE = 0,
    EM_VAL_AT_EVDO_ACQUISITION = 1,
    EM_VAL_AT_EVDO_SYNC = 2,
    EM_VAL_AT_EVDO_IDLE = 3,
    EM_VAL_AT_EVDO_ACCESS = 4,
    EM_VAL_AT_EVDO_CONNECTED = 5,
    EM_VAL_AT_EVDO_STATE_NUM = 6,
} em_val_at_evdo_state_enum;

#define  IPV4_ADDR_STR_LEN  16

#define  IPV6_ADDR_STR_LEN  64

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum  em_info; /* EM ID. */
    
    em_val_at_evdo_state_enum   DO_state;    /* It defines the Val AT EVDO state.. */
    kal_uint8   Mac_index;    /* Mac_index */
    kal_uint16  Channel;    /* Channel */
    kal_uint8   Color_Code;    /* Color_Code */
    kal_char    Sector_ID[34];    /* Sector_ID */
    kal_uint16  PN;    /* PN */
    kal_int16   Rx_Pwr;    /* Rx_Pwr */
    kal_uint16  Rx_PER;    /* Rx_PER */
    kal_int16   Pilot_Energy;    /* Pilot_Energy */
    kal_uint8   DRC;    /* DRC */
    kal_int16   SINR;    /* SINR */
    kal_uint8   AN_AAA;    /* AN-AAA */
    kal_char    IPv4_Address[IPV4_ADDR_STR_LEN];    /* IPv4 Address */
    kal_char    IPv6_Address[IPV6_ADDR_STR_LEN];    /* IPv6 Address */
} em_c2k_l4_sprint_evdo_info_ind_struct;

#define C2K_DATA_BURST_MAX_FIELDS   255
typedef enum
{
   C2K_OTA_ORIGINATION_MESSAGE,
   C2K_OTA_ALERT_WITH_INFO_MESSAGE,
   C2K_OTA_SERVICE_COON_COMP_MESSAGE,
   C2K_OTA_PAGE_RESPONSE_MESSAGE
}em_c2k_xcal_ota_msg_type_enum;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum  em_info; /* EM ID. */
   em_c2k_xcal_ota_msg_type_enum event;
} em_c2k_xcal_ota_event_info_ind_struct;

/* Data burst message of  F-DSCH and R-DSCH.*/
typedef struct
{
  LOCAL_PARA_HDR
  em_info_enum  em_info; /* EM ID. */
  kal_uint8     msg_number; /*message number within the data burst stream*/
  kal_uint8     burst_type; /*data burst type as defined in TSB58*/
  kal_uint8     num_msgs;   /*number of messages in the data burst stream*/
  kal_uint8     num_fields; /*number of characters in this message*/
  kal_uint8     chari[C2K_DATA_BURST_MAX_FIELDS]; /*pointer to received data*/
} em_c2k_xcal_ota_fdsch_info_ind_struct;


typedef struct
{
  LOCAL_PARA_HDR
  em_info_enum  em_info; /* EM ID. */
  kal_uint8     msg_number;/*message number within the data burst stream*/
  kal_uint8     burst_type; /*data burst type as defined in TSB58*/
  kal_uint8     num_msgs;   /*number of messages in the data burst stream*/
  kal_uint8     num_fields; /*number of characters in this message*/
  kal_uint8     chari[C2K_DATA_BURST_MAX_FIELDS]; /*pointer to received data*/
}em_c2k_xcal_ota_rdsch_info_ind_struct;

#endif /* ~_EM_PUBLIC_STRUCT_CVAL_H */


