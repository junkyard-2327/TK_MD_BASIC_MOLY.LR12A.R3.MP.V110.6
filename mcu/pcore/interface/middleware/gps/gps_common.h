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
 *  gps_common.h
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  GPS related interface hand file, such as GPS uart and NMEA parser
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 *******************************************************************************/
#ifndef _GPS_COMMON_H_
#define _GPS_COMMON_H_

#include "kal_public_defs.h" 
#include "kal_general_types.h"
#include "ps_public_utility.h"
#include "lbs_common_enum.h"

#if defined(__GPS_SUPPORT__)||defined(__BT_GPS_SUPPORT__)
#define GPS_PARSER_P_VERSION_MAX        32
#define GPS_NMEA_MAX_SVVIEW             20
#define GPS_NMEA_MESSAGE_MAX_LENGTH         (100)

/* mdi_datatype.h UART port 7000 */
#define RES_GPS_UART_SUCCEED                            0
#define RES_GPS_UART_ERR_PORT_NUMBER_WRONG              -7002
#define RES_GPS_UART_ERR_PORT_ERR_UNKNOW                -7005
#define RES_GPS_UART_ERR_NO_SLOT                        -7007


/*Data type for callback function of NMEA data or parserred data*/
typedef enum
{
    GPS_PARSER_RAW_DATA = 0,    /*Raw data of NMEA*/
    GPS_PARSER_NMEA_GGA,        /*Data structure of GGA info*/
    GPS_PARSER_NMEA_GLL,        /*Data structure of GLL info*/
    GPS_PARSER_NMEA_GSA,        /*Data structure of GSA info*/
    GPS_PARSER_NMEA_GSV,        /*Data structure of GSV info*/
    GPS_PARSER_NMEA_RMC,        /*Data structure of RMC info*/
    GPS_PARSER_NMEA_VTG,        /*Data structure of VTG info*/
    GPS_PARSER_NMEA_SENTENCE,   
    GPS_UART_EVENT_VPORT_LOST,  /*Virtual port is lost, maybe bluetooth connection is break(not support current)*/
    GPS_SHOW_AGPS_ICON,
    GPS_HIDE_AGPS_ICON,
    GPS_PARSER_NMEA_END,
    GPS_PARSER_MA_STATUS = 255
} gps_common_parser_info_enum;


/*Enum of GPS command*/
typedef enum
{
    GPS_UART_GPS_WARM_START = 0,        /*Let GPS do warm start*/
    GPS_UART_GPS_HOT_START,             /*Let GPS do hot start*/
    GPS_UART_GPS_COLD_START,            /*Let GPS do cold start*/
    GPS_UART_GPS_VERSION,
    GPS_UART_GPS_ENABLE_DEBUG_INFO,    
    GPS_UART_GPS_SWITCH_MODE_MA,
    GPS_UART_GPS_SWITCH_MODE_MB,
    GPS_UART_GPS_SWITCH_MODE_NORMAL,
    GPS_UART_GPS_QUERY_POS,
    GPS_UART_GPS_QUERY_MEAS,
    GPS_UART_GPS_CLEAR_NVRAM,           /*Clear GPS NVRAM*/
    GPS_UART_GPS_AGPS_START,            /*Clear GPS data*/
    GPS_UART_GPS_SLEEP,                 /*Let GPS chip goto sleep mode*/
    GPS_UART_GPS_STOP,                  /*Let GPS chip stop*/
    GPS_UART_GPS_WAKE_UP,               /*Let GPS chip wake up from sleep mode*/
    GPS_UART_GPS_DUMMY = -1
} gps_common_uart_cmd_type_enum;

/*Enum of GPS work mode*/
typedef enum
{
    GPS_UART_MODE_RAW_DATA = 0,         /*Just need raw data*/
    GPS_UART_MODE_LOCATION,             /*Just need location*/
    GPS_UART_MODE_LOCATION_WITH_QOP     /*Need AGPS data with Qop*/
} gps_common_uart_work_mode_enum;

typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint32 length; 
    kal_uint8  data[GPS_NMEA_MESSAGE_MAX_LENGTH]; 
}gps_common_uart_write_req_struct;

typedef struct
{            
    kal_int8      hour;
    kal_int8      minute;
    kal_int8      second;
    kal_int8      millisecond;
} gps_common_nmea_utc_time_struct;

typedef struct
{            
    kal_int8      year;
    kal_int8      month;
    kal_int8      day;
} gps_common_nmea_utc_date_struct;

/*GPGGA -- Global Positioning System Fix Data*/
typedef struct
{            
    double  latitude;               /*Latitude South<0  North>0*/
    double  longitude;              /*Longitude West<0 east>0*/
    float   h_precision;            /*Horizontal Dilution of precision*/
    double  altitude;               /*Antenna Altitude above/below mean-sea-level (geoid)*/
    float   unit_of_altitude;       /*Units of antenna altitude, meters*/
    float   geoidal ;               /*Geoidal separation, the difference between the WGS-84 earth*/
    float   unit_of_geoidal;        /*Units of geoidal separation, meters*/
    float   gps_age;                /*Age of differential GPS data, time in seconds since last SC104*/
    kal_uint16    station_id;       /*Differential reference station ID, 0000-1023*/
    kal_uint8     sat_in_view;      /*Number of satellites in use*/
    gps_common_nmea_utc_time_struct    utc_time;       /*Time (UTC)*/
    kal_int8      north_south;      /*north or south*/
    kal_int8      east_west;        /*east or west*/
    kal_int8      quality;          /*GPS Quality Indicator*/
} gps_common_nmea_gga_struct;


 /*GPGSA -- GNSS DOP and Active Satellites*/
typedef struct 
{           
    float   pdop;       /*PDOP in meters*/
    float   hdop;       /*HDOP in meters*/
    float   vdop;       /*VDOP in meters*/
    kal_uint16     sate_id[12]; /*ID of satellites*/
    kal_int8      op_mode;      /*Selection mode: A=auto M=manual*/
    kal_int8      fix_mode;     /*Mode*/
} gps_common_nmea_gsa_struct;


/*GPGSV -- GNSS Satellites in View*/
typedef struct 
{            
    kal_int16     msg_sum;              /*total number of messages*/
    kal_int16     msg_index;            /*message number*/
    kal_int16     sates_in_view;        /*satellites in view*/
    kal_int16     max_snr;              /*Max snr*/
    kal_int16     min_snr;              /*Min snr*/
    kal_int16     num_sv_trk;           /*satellite number*/
    struct
    {
        kal_uint8 sate_id;              /*satellite id*/
        kal_uint8 elevation;            /*elevation in degrees*/
        kal_int16 azimuth;              /*azimuth in degrees to true*/
        kal_uint8 snr;                  /*SNR in dB*/
    }       rsv[GPS_NMEA_MAX_SVVIEW];
} gps_common_nmea_gsv_struct;


/*GPRMC -- Recommended Minimum Specific GNSS Data*/
typedef struct
{            
    double   latitude;          /*latitude*/
    double   longitude;         /*longitude*/
    float   ground_speed;       /*Speed over ground, knots*/
    float   trace_degree;       /*Track mode degrees,north is 0*/
    float   magnetic;
    gps_common_nmea_utc_time_struct      utc_time; /*UTC time*/
    gps_common_nmea_utc_date_struct      utc_date; /*UTC date*/
    kal_int8      status;       /*Status, V = Navigation receiver warning*/
    kal_int8      north_south;  /*N or S*/
    kal_int8      east_west;    /*E or W*/
    kal_int8      magnetic_e_w; /*Magnetic E or W*/
    kal_int8      cmode;        /*Mode*/
} gps_common_nmea_rmc_struct;


/*GPGLL -- Geographic Position - Latitude/Longitude*/
typedef struct
{            
    double  latitude;               /*latitude*/ 
    double  longitude;              /*longitude*/
    gps_common_nmea_utc_time_struct      utc_time;     /*UTC time*/
    kal_int8      north_south;      /*N or S*/
    kal_int8      east_west;        /*E or W*/
    kal_int8      status;           /*Status A - Data Valid, V - Data Invalid*/
    kal_int8      mode;             /*mode*/
} gps_common_nmea_gll_struct;


/*GPVTG -- VTG Data*/
typedef struct
{
    float   true_heading;   /*Track Degrees*/
    float   mag_heading;    /*Magnetic Track Degrees*/
    float   hspeed_knot;    /*Speed Knots*/
    float   hspeed_km;      /*Speed Kilometers Per Hour*/
    kal_int8      mode;     /*Mode*/
} gps_common_nmea_vtg_struct;


typedef struct
{
    kal_char    version[GPS_PARSER_P_VERSION_MAX];
    kal_uint32  number;
} gps_common_p_release_struct;

typedef struct
{
    gps_common_p_release_struct    release;
} gps_common_p_info_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    kal_uint16   port;
    kal_char*    buffer;
    kal_uint32   length;
}gps_uart_log_write_struct;

kal_uint16 gnss_agnss_capability_query(void);
void gnss_agnss_capability_set(kal_uint16 gnssMethod);
kal_bool gnss_is_agps_supported(void);

#endif  /* #if defined(__GPS_SUPPORT__)||defined(__BT_GPS_SUPPORT__) */

/*Enum of GNSS rat mode*/
typedef enum
{
    GNSS_RAT_GSM = 0,
    GNSS_RAT_UMTS,
    GNSS_RAT_LTE
} gnss_rat_enum;

/* ------------------------------------------------------- */
/* For Neighbor cell struct, copy from nbr_struct_public.h */
/* ------------------------------------------------------- */

typedef struct
{
    kal_uint16 mcc;
    kal_uint16 mnc;
    kal_uint16 lac;
    kal_uint16 ci;
} agps_global_cell_id_struct;

typedef struct
{
    agps_global_cell_id_struct gci;
    kal_uint8 nbr_meas_rslt_index;
} agps_gas_cell_info_struct;

typedef struct
{
    kal_uint16 arfcn;
    kal_uint8 bsic;
    kal_uint8 rxlev;
} agps_gas_nbr_cell_meas_struct;

typedef struct
{
    kal_int8 nbr_meas_num;
    agps_gas_nbr_cell_meas_struct nbr_cells[15];
} agps_gas_nbr_meas_struct;

typedef struct
{
    agps_gas_cell_info_struct serv_info;
    kal_uint8 ta;
    kal_uint8 ordered_tx_pwr_lev;
    kal_uint8 nbr_cell_num;
    agps_gas_cell_info_struct nbr_cell_info[6];
    agps_gas_nbr_meas_struct nbr_meas_rslt;
} agps_gas_nbr_cell_info_struct;

/* WCDMA cell info */
typedef struct
{
    kal_uint8        uarfcn_ul_used;
    kal_uint16      uarfcn_ul;
    kal_uint16      uarfcn_dl;
} agps_uas_freq_info_fdd_struct;

typedef struct
{
    kal_uint16      uarfcn;
} agps_uas_freq_info_tdd_struct;

typedef struct agps_uas_freq_info_mode_specific_info_struct
{
    kal_uint8             mode;   // uas_freq_info_mode_enum
    union
    {
        agps_uas_freq_info_fdd_struct        fdd;
        agps_uas_freq_info_tdd_struct        tdd;
    } choice;
} agps_uas_freq_info_mode_specific_info_struct;

typedef struct
{
    agps_uas_freq_info_mode_specific_info_struct     mode_specific_info;
} agps_uas_freq_info_struct;

typedef struct
{
    kal_uint16              psc;
    kal_uint8                cpich_Ec_N0_used;
    kal_uint8               cpich_Ec_N0;
    kal_uint8                cpich_rscp_used;
    kal_uint8               cpich_rscp;
    kal_uint8                pathloss_used;
    kal_uint8               pathloss;
} agps_uas_cell_measured_results_fdd_struct;

typedef struct
{
    kal_uint8               num;
    kal_uint8               element[2*7];
} agps_uas_cell_measured_result_tdd_timeslot_iscp_struct;

typedef struct
{
    kal_uint8                                           cellParameterId;
    kal_uint8                                            tgsn_used;
    kal_uint8                                           tgsn;
    kal_uint8                                            pccpch_rscp_used;
    kal_uint8                                           pccpch_rscp;
    kal_uint8                                            pathloss_used;
    kal_uint8                                           pathloss;
    kal_uint8                                            timeSlot_iscp_used;
    agps_uas_cell_measured_result_tdd_timeslot_iscp_struct   timeslot_iscp_list;

} agps_uas_cell_measured_results_tdd_struct;

typedef struct agps_uas_cell_measured_results_mode_specific_info_struct
{
    kal_uint8         mode;   // uas_cell_measured_results_mode_enum

    union
    {
        agps_uas_cell_measured_results_fdd_struct    fdd;
        agps_uas_cell_measured_results_tdd_struct    tdd;
    } choice;
} agps_uas_cell_measured_results_mode_specific_info_struct;

typedef struct
{
    kal_uint8                                                    cell_id_used;
    kal_uint32                                                  cell_id;
    agps_uas_cell_measured_results_mode_specific_info_struct         mode_specific_info;
} agps_uas_cell_measured_results_struct;

typedef struct
{
    kal_uint8                               num;
    agps_uas_cell_measured_results_struct        element[6];
} agps_uas_cell_measured_results_list_struct;

typedef struct
{
    kal_uint8                                freq_info_used;
    agps_uas_freq_info_struct                    freq_info;
    kal_uint8                                utra_carrier_rssi_used;
    kal_uint8                               utra_carrier_rssi;
    kal_uint8                                cell_measured_results_list_used;
    agps_uas_cell_measured_results_list_struct   cell_measured_results_list;
} agps_uas_measured_results_struct;

typedef struct
{
    kal_uint8                           num;
    agps_uas_measured_results_struct         element[3];
} agps_uas_measured_results_list_struct;

typedef struct agps_uas_cell_plmn_id_struct
{
    kal_uint16                      mcc;
    kal_uint16                      mnc;
} agps_uas_cell_plmn_id_struct;

typedef struct
{
    kal_uint8                       is_LAC_valid;
    kal_uint16                     lac; 
    kal_uint8                       is_RAC_valid;
    kal_uint8                       rac; 
    kal_uint8                       num_plmn_id;
    agps_uas_cell_plmn_id_struct         plmn_id_list[6];
} agps_uas_cell_info_struct;

typedef struct
{
    kal_uint8                               num;
    agps_uas_cell_info_struct        cell_info[6];
} agps_uas_cell_info_list_struct;

typedef struct
{
    agps_uas_cell_info_list_struct   cell_info_list;
} agps_uas_cell_info_per_freq_struct;

/* Measurement results of most 3 different UARFCN's */
typedef struct
{
    kal_uint8                           num_freq;
    agps_uas_cell_info_per_freq_struct         cell_info_per_freq[3];
} agps_uas_cell_info_ext_struct;

typedef struct
{
    kal_uint16                          mcc;
    kal_uint16                          mnc;
    kal_uint32                          uc;
    kal_uint8                            freq_info_used;
    agps_uas_freq_info_struct                freq_info;
    kal_uint8                            psc_used;
    kal_uint16                          psc;
    kal_uint8                            measured_results_list_used;
    agps_uas_measured_results_list_struct    measured_results_list;

    agps_uas_cell_measured_results_mode_specific_info_struct serving_meas_result;
    agps_uas_cell_info_struct                 serving_cell_ext_info;
    agps_uas_cell_info_ext_struct            cell_info_ext_list;
} agps_uas_nbr_cell_info_struct;

typedef struct
{ 
    kal_uint32                          dl_freq;   
    kal_uint16                          pci;        //0~503
    kal_uint8                           rsrp;       //0~97
    kal_uint8                           rsrq;       //0~34
    
    kal_uint8                           is_cell_id_used;
    kal_uint32                          cell_id;    //0~0x0FFFFFFF
    kal_uint16                          mcc;        //0~999
    kal_uint16                          mnc;        //0~999
    kal_uint8                           is_2_digit_mnc; //ncell cell plmn is 2 digits or 3 digits    
    kal_uint16                          tac;        //0~65535
} agps_eas_cell_measured_results_struct;

/* LTE cell info */
typedef struct 
{
    /* Serving cell info */
    kal_uint16                          mcc;            //0~999
    kal_uint16                          mnc;            //0~999
    kal_uint8                           is_2_digit_mnc; //serving cell plmn is 2 digits or 3 digits
    kal_uint32                          cell_id;        //0~0x0FFFFFFF
    kal_uint32                              dl_freq;        
    kal_uint8                           ul_freq_used;   
    kal_uint32                              ul_freq;        
    kal_uint16                          pci;            //0~503
    kal_uint8                           is_ta_used; 
    kal_uint16                          time_advance;   //0~1282
    kal_uint8                           is_rsrp_valid; 
    kal_uint8                           rsrp;           //0~97
    kal_uint8                           is_rsrq_valid; 
    kal_uint8                           rsrq;           //0~34
    kal_uint16                          tac;            //0~65535

    /* Neighbor cell info */   
    kal_uint8                           num_nbr_cell;
    agps_eas_cell_measured_results_struct    nbr_cell_list[32]; 
} agps_eas_nbr_cell_info_struct;


typedef union
{
    agps_gas_nbr_cell_info_struct gas_nbr_cell_info;
#ifdef __UMTS_RAT__
    agps_uas_nbr_cell_info_struct uas_nbr_cell_info;
#endif
#ifdef __LTE_RAT__
    agps_eas_nbr_cell_info_struct eas_nbr_cell_info;
#endif
#if !defined(__UMTS_RAT__) && !defined(__LTE_RAT__)
    kal_uint32 dummy_padding;
#endif
} agps_ps_nbr_cell_info_union_type;


extern kal_bool is_agps_cp_allowed_by_rat(gnss_rat_enum rat_mode);
extern void lbs_update_cfun_state(kal_uint8 sim_index, kal_uint8 cfun_state);
extern void agps_cp_allowed_set_by_rat(gnss_rat_enum rat_mode, kal_bool is_allowed);
extern pos_mode_enum check_positioning_mode_capability(void);

/* Query API for AGPSD LPPe support capability */
kal_bool is_agps_lppe_enabled(void);
kal_bool is_agps_lppe_network_location_enabled(void);

#define __LBS_SETTING_SUPPORT__
#define __EARLY_FIX_SUPPORT__
#define __LBS_EM_SUPPORT__

/* Type for LBS AP setting query API */
typedef enum   
{
    LBS_GENERIC_AP_SETTING,
    LBS_SETTING_MAX_NUM
} lbs_setting_enum;
        
/* Structure for LBS AP setting query API */
//typedef agps_md_sim_info_req lbs_setting_generic_ap;
        
/* Error cause for LBS AP setting query API */
#define LBS_SETTING_NOT_AVAILABLE (0)

/* Prototype for LBS AP setting query API */
#if defined(__UE_SIMULATOR__) || !defined(__AGPS_SUPPORT__)
#define lbs_query_setting(a,b,c) (0)
#else
kal_int32 lbs_query_setting(lbs_setting_enum setting, void *buf, kal_uint32 buf_size);
#endif
kal_uint8 custom_lcsp_adj_rsp_time(kal_uint8 rsp, protocol_id_enum pid);
#endif /* _GPS_COMMON_H_ */ 




