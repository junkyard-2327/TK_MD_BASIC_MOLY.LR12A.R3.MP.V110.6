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
 *   em_gas_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Engineer mode public structures.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *
 * removed!
 * removed!
 *
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


#ifndef _EM_GAS_PUBLIC_STRUCT_H
#define _EM_GAS_PUBLIC_STRUCT_H

#include "em_public_struct.h"
#include "em_as_common_public_struct.h"
#include "em_nwsel_common_public_struct.h"



/* RR structure */



typedef struct
{
    kal_uint8   crh;   //CELL-RESELECT-HYSTERESIS
    kal_uint8   ms_txpwr;   //  maximum TX power level an MS may use when accessing on a CCH
    kal_uint8   rxlev_access_min;   //  minimum received signal level at the MS for which it is permitted to access the system
} rr_em_cell_select_para_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_cell_select_para_info_struct rr_em_cell_select_para_info;
} em_rrm_cell_select_para_info_ind_struct;

typedef struct
{
    kal_uint8   channel_type;   //  channel type
    kal_uint8   tn;   //    timeslot number
    kal_uint8   tsc;   //   training sequence code
    kal_uint8   hopping_flag;   //  hopping or not
    kal_uint8   maio;   //  MAIO value
    kal_uint8   hsn;   //   HSN value
    kal_uint8   num_of_carriers;   //   number of carriers in the BA list(in the non-hopping case, this shall be set to 1)
    kal_uint16  arfcn[64];   // ARFCN value in the MA
    kal_bool     is_BCCH_arfcn_valid; /*the BCCH_arfcn is only valid
                                  when receives H.O cmd in DEDI-state*/
    kal_uint16 BCCH_arfcn;   // Target_BCCH carrier

    /*ZY:2006-08-15 add cipher algo for EM */
    kal_uint8   cipher_algo;  // ciphering value, OFF/A51/A52
    kal_uint8 imeisv_digit[16]; /* To show IMEISV if sent in ciphering mode setting procedure */

    kal_uint8 channel_mode;

    /* brwang, 051024, [AMR engineering mode info.] */
       #ifdef __AMR_SUPPORT__
       kal_bool amr_valid; /* the AMR(TRUE) or not(FALSE) */
       kal_uint8 mr_ver;   /* MultiRate speech VERsion : 001-amr verion 1*/
       kal_bool nscb;      /* Noise Supression Control Bit : 0-noise supression is used */
       kal_bool icmi;       /* Initial Codec Mode Indicator : 0-is defined bythe implicit rule */
       kal_uint8 start_codec_mode; /* Start Codec Mode */
       kal_uint8 acs;       /* AMR Codec Activate Set */
       kal_uint8 threshold[3]; /* Threshold1/Threshold2/Threshold3 */
       kal_uint8 hysteresis[3]; /* Hysteresis1/Hysteresis2/Hysteresis3 */
       #endif
} rr_em_channel_descr_info_struct;  //This shall be used in IDLE and DEDI state

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_channel_descr_info_struct rr_em_channel_descr_info;
} em_rrm_channel_descr_info_ind_struct;

typedef struct
{
    kal_uint8   mscr;   //  MSC release
    kal_uint8   att;   //   att flag
    kal_uint8   bs_ag_blks_res;   //    BS-AG-BLKS-RES
    kal_uint8   ccch_conf;   // CCCH-CONF
    kal_uint8   cbq2;   //  Cell Bar Qualify 2
    kal_uint8   bs_pa_mfrms;   //   BS-PA-MFRMS
    kal_uint8   t3212;   // T3212 timeout value
} rr_em_ctrl_channel_descr_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_ctrl_channel_descr_info_struct rr_em_ctrl_channel_descr_info;
} em_rrm_ctrl_channel_descr_info_ind_struct;

typedef struct
{
    kal_uint8   max_retrans;   //   MAX Retrans value
    kal_uint8   tx_integer;   //    TX integer
    kal_uint8   cba;   //   cell bar for access
    kal_uint8   re;   //    call reestablishment allowed
    kal_uint8   acc_class[2];   //  acces control class
    kal_bool    CB_supported;   // cell broadcast is supported
} rr_em_rach_ctrl_para_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_rach_ctrl_para_info_struct rr_em_rach_ctrl_para_info;
} em_rrm_rach_ctrl_para_info_ind_struct;

typedef enum
{
    EM_MT_CALL_TYPE_MO    = 0,
    EM_MT_CALL_TYPE_MT,
    EM_MT_CALL_TYPE_EMERGENCY,
    EM_MT_CALL_TYPE_INVALID
} em_mt_call_type_enum;
typedef struct
{
    kal_uint16  max_value;   // timeout value for the DSF or RLF
    kal_int16   current_value;   // current value in the DSF or RLF calculation
    kal_uint8   dtx_ind;    //DTX indicator
    kal_uint8   dtx_used;   //DTX used or not
    kal_bool    is_dsf;     //timeout value for the DSF or RLF
    kal_uint16  serv_cell_arfcn;    // serving cell arfcn
    em_mt_call_type_enum  call_type;    // MO/MT
} rr_em_radio_link_counter_info_struct;  //This shall be used in IDLE and DEDI state

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_radio_link_counter_info_struct rr_em_radio_link_counter_info;
} em_rrm_radio_link_counter_info_ind_struct;

typedef struct
{
    kal_bool    is_valid;
    kal_uint8   cs_report_type;
    kal_bool    is_invalid_bsic_rp;
    kal_uint8   cs_serv_band_rp;
    kal_uint8   cs_multi_band_rp;
    /* When cs_rp_threshold_850 is eqaul to 0xFF, it means never */
    kal_uint8   cs_rp_threshold_850;
    kal_uint8   cs_rp_offset_850;
    /* When cs_rp_threshold_900 is eqaul to 0xFF, it means never */
    kal_uint8   cs_rp_threshold_900;
    kal_uint8   cs_rp_offset_900;
    /* When cs_rp_threshold_1800 is eqaul to 0xFF, it means never */
    kal_uint8   cs_rp_threshold_1800;
    kal_uint8   cs_rp_offset_1800;
    /* When cs_rp_threshold_1900 is eqaul to 0xFF, it means never */
    kal_uint8   cs_rp_threshold_1900;
    kal_uint8   cs_rp_offset_1900;
} rr_em_cs_meas_param_struct;

typedef struct
{
    kal_bool    is_valid;
    kal_uint8   ps_report_type;
    kal_bool    is_invalid_bsic_rp;
    kal_uint8   ps_serv_band_rp;
    kal_uint8   ps_multi_band_rp;
    /* When ps_rp_threshold_850 is eqaul to 0xFF, it means never */
    kal_uint8   ps_rp_threshold_850;
    kal_uint8   ps_rp_offset_850;
    /* When ps_rp_threshold_900 is eqaul to 0xFF, it means never */
    kal_uint8   ps_rp_threshold_900;
    kal_uint8   ps_rp_offset_900;
    /* When ps_rp_threshold_1800 is eqaul to 0xFF, it means never */
    kal_uint8   ps_rp_threshold_1800;
    kal_uint8   ps_rp_offset_1800;
    /* When ps_rp_threshold_1900 is eqaul to 0xFF, it means never */
    kal_uint8   ps_rp_threshold_1900;
    kal_uint8   ps_rp_offset_1900;
} rr_em_ps_meas_param_struct;

typedef struct
{

    kal_uint8            rr_state;                    /* NULL: 0, INACTIVE: 1, SELECTION: 2
                                                       * IDLE: 3, ACCESS: 4. PKT_TRANSFER: 6
                                                       * DEDICATED:6, RESELCTION: 7 */
    kal_uint8            meas_mode;                   /* GSM: 0, GPRS_CCCH: 1, GPRS_PMO_CCCH: 2
                                                       * GPRS_PCCCH = 3 */
    kal_uint16           serving_arfcn;               /* serving cell ARFCN */
    kal_uint8            serving_bsic;                /* serving cell BSIC */
    kal_uint8            serving_current_band;
    kal_uint8            serv_gprs_supported;         /* serving cell support GPRS or not */
    kal_int16            serv_rla_in_quarter_dbm;     /* RSSI level for serving cell
                                                       * 1. BCCH in IDLE-state
                                                       * 2. TCH in DEDI-state
                                                       * 3. PDTCH in TRANSFER-state */
    kal_uint8            serv_rla_reported_value;     /* Reported value of RSSI level for serving cell */
    kal_bool             is_serv_BCCH_rla_valid;      /* To indicate if the serv_BCCH RSSI is valid*/
    kal_int16            serv_BCCH_rla_in_dedi_state; /*RSSI level for serving cell (BCCH) in DEDI-State */
    kal_uint8            quality;                     /* serving cell -TCH measured quality */
    kal_bool             gprs_pbcch_present;          /* To indicate if the current cell supports GPRS
                                                       * PBCCH is present */
    kal_bool             gprs_c31_c32_enable;         /* To indicate if the current mode is GPRS_PMO_MODE
                                                       * or GPRS_PCCCH_MODE.
                                                       */
    kal_int16            c1_serv_cell;                /* C1 value for the serving cell */
    kal_int16            c2_serv_cell;                /* if gprs_c31_c32_enable is false, this field is shown
                                                       * as c2_value for serv_cell.
                                                       * if gprs_c31_c32_enable is true, this field is shown
                                                       * as c32_value for serv_cell */
    kal_int16            c31_serv_cell;               /* if gprs_c31_c32_enable is false, this field is ignore
                                                       * if gprs_c31_c32_enable is true, this field shall be
                                                       * shown in based on report c31_value */
    kal_uint8            num_of_carriers;             /* number of carriers in the BA list */
    kal_uint16           nc_arfcn[32];                /* ARFCN value in the BA list (The list will be sorted
                                                       * by the RSSI level */
    kal_int16            rla_in_quarter_dbm[32];      /* rssi level for each carrier */
    kal_uint8            rla_in_reported_value[32];   /* Reported value of RSSI level for each carrier. */
    kal_uint8            nc_info_status[32];          /* Bit0 = 0: "nc_bsic","frame_offset","ebit_offset" is invalid
                                                       * Bit0 = 1: "nc_bsic","frame_offset","ebit_offset" is valid
                                                       * Bit1 = 0: "c1","c2" is invalid
                                                       * Bit1 = 1: "c1","c2" is valid
                                                       * Bit2 = 0: "gprs_status" is invalid
                                                       * Bit2 = 1: "gprs_status" is valid */
    kal_uint8            nc_bsic[32];                 /* neighbor cell BSIC */
    kal_int32            frame_offset[32];            /* frame offset for each carrier */
    kal_int32            ebit_offset[32];             /* ebit offset for each carrier */
    kal_int16            c1[32];                      /* C1 value for the neighbor cell */
    kal_int16            c2[32];                      /* if gprs_c31_c32_enable is false, this field is shown as
                                                       * c2_value for nbr_cell
                                                       * if gprs_c31_c32_enable is true, this field is shown as
                                                       * c32_value for nbr_cell */
    kal_int16            c31[32];                     /* C31 value for the neighbor cell */
    kal_uint8            multiband_report;            /* MULTIBAND_REPORT value */
    kal_uint8            timing_advance;              /* Timing advance, range is 0 - 63 */
    kal_int16            tx_power_level;
    kal_int16            serv_rla_full_value_in_quater_dbm;
    kal_uint8            nco;
    kal_uint8            rxqual_sub;                  /* rx quality (sub), range is 0 - 7 */
    kal_uint8            rxqual_full;                 /* RX quality (full), range is 0 - 7 */
    kal_int16            using_tx_power_in_dbm;       /* DL_DTX_AND_TX_POWER */
#ifdef __AMR_SUPPORT__
    kal_bool             amr_info_valid;
    kal_uint8            cmr_cmc_cmiu_cmid;
    kal_uint8            c_i;
    kal_uint16           icm;
    kal_uint16           acs;
    kal_bool             dl_dtx_used;                 /* DL_DTX_AND_TX_POWER */
    em_amr_mode_enum cmr;
    em_amr_mode_enum cmc;
    em_amr_mode_enum amr_ul_mode;
    em_amr_mode_enum amr_dl_mode;
#endif /* __AMR_SUPPORT__ */
#ifdef __FWP_NC_LAI_INFO__
    kal_uint8            num_of_nc_lai;               /* how many valid LAI info in nc_lai[] array */
    rr_em_lai_info_struct nc_lai[6];                  /* store LAI and CID for at most 6 strongest neighbor cells */
#endif /* __FWP_NC_LAI_INFO__ */
    rr_em_cs_meas_param_struct cs_meas_param;
    rr_em_ps_meas_param_struct ps_meas_param;
    /*Shin, Amazon EM, nbr cell band, cellid, barred status report*/
    kal_uint8       nc_band[32];
    kal_uint16      nc_cellid[32];
    kal_bool        nc_barred[32];
    kal_bool        band_ind;
} rr_em_measurement_report_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_measurement_report_info_struct rr_em_measurement_report_info;
} em_rrm_measurement_report_info_ind_struct;

/*ZY : 2007/07/25 : Add for Cell allocation list*/
typedef struct
{
        kal_uint8   valid;
        kal_uint8   number_of_channels;
        kal_uint16 arfcn_list[64];
} rr_em_ca_list_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_ca_list_info_struct rr_em_ca_list_info;
} em_rrm_ca_list_info_ind_struct;

typedef struct
{
    kal_uint8   msg_type;   /*receives msg type from network in Dedi-State
                              0: Assignment Command
                              1: Channel Release
                              2: Additional Assignment
                              3: Classmark Enquiry
                              4: Ciphering Mode Command
                              5: Configure Change Command
                              6: Handover Command
                              7: Frequency Redefinition
                              8: Channel Mode Modify
                              9: Cell Selection Indicator*/


   kal_uint8 rr_cause;

} rr_em_control_msg_info_struct;

/* Katie 2013027: em revise */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_control_msg_info_struct rr_em_control_msg_info;

} em_mac_control_msg_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_control_msg_info_struct rr_em_control_msg_info;
} em_rrm_control_msg_info_ind_struct;

/*Byron: 2006/08/06: Add for SI2q information*/
typedef struct
{
    kal_bool    present;
    kal_uint8   no_of_instance;
    kal_bool    emr_report;
    kal_bool    pemr_report;
    kal_bool    umts_parameter_exist;
} rr_em_si2q_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_si2q_info_struct rr_em_si2q_info;
} em_rrm_si2q_info_ind_struct;

/*Byron: 2006/08/06: Add for measurement information*/
typedef struct
{
    kal_bool    present;
    kal_uint8   no_of_instance;
    kal_bool    emr_report;
    kal_bool    umts_parameter_exist;
} rr_em_mi_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_mi_info_struct rr_em_mi_info;
} em_rrm_mi_info_ind_struct;

/* James 2012/8/15: move up gprs info for EM UT */
typedef struct
{
    kal_uint32 t3192;         // in msec
    kal_uint32 t3168;         // in msec
    kal_uint8  rp;            // radio priority
    kal_uint8  gprs_support;  // GPRS channel request support(0 not support, 1 support, 2 support but not decode)
    kal_uint8  egprs_support; // EGPRS channel request support(0 not support, 1 support)
    kal_uint8  sgsn_r;        // PS domain is R99 or R98(0 R98, 1 R99)
    kal_uint8  pfc_support;   // packet flow context support(0 not support, 1 support)
    kal_uint8  epcr_support;  // EGPRS channel request support(0 not support, 1 support)
    kal_uint8  bep_period;    // BEP period
}rr_em_gprs_general_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_gprs_general_info_struct rr_em_gprs_general_info;
} em_rrm_gprs_general_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_lai_info_struct rr_em_lai_info;
} em_rrm_lai_info_ind_struct;
typedef struct
{
    kal_bool    is_greater_than_85db;   /*serving cell power is greater than 85dbm lasts for 5s*/
}rr_em_serv_cell_power_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_serv_cell_power_struct rr_em_serv_cell_power_status;
}em_rrm_serv_cell_power_status_ind_struct;

typedef struct
{
    kal_bool with_4g_neighbor;  /*SI contains 4g neigbor cell or not*/
}rr_em_4g_neigbor_cell_status_sturct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_4g_neigbor_cell_status_sturct rr_em_4g_neighbor_status;
}em_rrm_ir_4g_neighbor_cell_status_ind_struct;

typedef struct
{
    kal_bool with_3g_neighbor;  /*SI contains 3g neigbor cell or not*/
}rr_em_3g_neigbor_cell_status_sturct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_3g_neigbor_cell_status_sturct rr_em_3g_neighbor_status;
}em_rrm_ir_3g_neighbor_cell_status_ind_struct;

typedef enum
{
    EM_RRM_SUCCESS_RATE_KPI_IRAT_2G3_CR,
    EM_RRM_SUCCESS_RATE_KPI_IRAT_2G3_CCO,
    EM_RRM_SUCCESS_RATE_KPI_IRAT_2G3_HO,
    EM_RRM_SUCCESS_RATE_KPI_IRAT_2G3_REDIR,

    EM_RRM_SUCCESS_RATE_KPI_NUM
}em_rrm_success_rate_kpi_proc_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_rrm_success_rate_kpi_proc_enum proc_id;
    em_kpi_status_enum status;
    kal_uint32  attempt;
    kal_uint32  success;
}em_rrm_success_rate_kpi_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_bool   is_t3126_exp;
    kal_uint16 serv_cell_arfcn;    // serving cell arfcn
}em_rrm_mt_t3126_timeout_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint16 serving_arfcn;
    kal_uint8  serving_band;
}em_rrm_cs_rlf_info_ind_struct;


typedef struct
{
    kal_uint8            rr_state;                    /* NULL: 0, INACTIVE: 1, SELECTION: 2
                                                       * IDLE: 3, ACCESS: 4. PKT_TRANSFER: 5
                                                       * DEDICATED:6, RESELCTION: 7 */
} rrm_em_rr_state_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rrm_em_rr_state_info_struct rrm_em_rr_state_info;
} em_rrm_rr_state_info_ind_struct;

typedef struct
{
    kal_uint16 arfcn;
    kal_uint8  band;
    /* 0 - GSM */
    kal_uint8  rat;
}rr_em_gas_search_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_gas_search_info_struct rr_em_gas_search_info;
}em_rrm_gas_search_info_ind_struct;

typedef struct
{
	kal_uint16	max_dsc_value;      /* Timeout value for the DSF */
	kal_int16	current_dsc_value;  /* Current value in the DSF */
	kal_uint16  serv_cell_arfcn;    /* Serving cell arfcn */
	kal_uint8   serv_cell_band;     /* Serving cell band */
} rr_em_downlink_signalling_counter_info_struct;

/* This EM should be used in IDLE mode */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    rr_em_downlink_signalling_counter_info_struct rr_em_downlink_signalling_counter_info;
}em_rrm_downlink_signalling_counter_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

}em_rrm_rach_fail_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

}em_rrm_n200_exp_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

}em_rrm_ho_fail_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint32 oos_counter;
}em_rrm_oos_ind_struct;


/**************************************************************************
  * GSM MM - Engineer Mode
  *
  * Notes: Following structures are maintained by RR task
  **************************************************************************/
/***************************** Beging of RR MM EM Config  **************************/
#define MAX_NR_RR_EM_IR_RESEL_STATUS 6
#define MAX_NR_RR_EM_3G_MEAS_STATUS  6
#define MAX_NR_RR_EM_4G_MEAS_STATUS  6
#define MAX_NR_RR_EM_3G_MEAS_INFO    9
#define MAX_NR_RR_EM_4G_MEAS_INFO    9

#define INVALID_GSM_PRIORITY         0x2B
#define THR_PRIO_SEARCH_ALWAYS       0x7F
#define THR_GSM_LOW_ALWAYS           0xFF
#define GSM_REPORT_THR_NEVER         0xFF

#define INVALID_UMTS_QSRCH_C         0xFF
#define INVALID_UMTS_MULTI_REPORT    0xFF
#define INVALID_UMTS_FDD_QMIN_OFF    0xFF
#define INVALID_UMTS_FDD_RSCPMIN     0x7F
#define INVALID_UMTS_FDD_REP_THR_2   0xFF
#define INVALID_UMTS_PRIORITY        0x2B
#define INVALID_UMTS_THR_HIGH        0xFF
#define INVALID_UMTS_THR_LOW         0xFF
#define INVALID_UMTS_QRX_LEVMIN      0x7F
#define UMTS_REPORT_THR_NEVER        0xFF
#define UMTS_FDD_QOFFSET_ALWYAS      0x7F

#define INVALID_LTE_QSRCH_C          0xFF
#define INVALID_LTE_QSRCH_C_INIT     0xFF
#define INVALID_LTE_MULTI_REPORT     0xFF
#define INVALID_LTE_PRIORITY         0x2B
#define INVALID_LTE_THR_HIGH         0xFF
#define INVALID_LTE_THR_LOW          0xFF
#define INVALID_LTE_QRX_LEVMIN       0x7FFF
#define INVALID_LTE_THR_HIGH_Q       0x7F
#define INVALID_LTE_THR_LOW_Q        0x7F
#define INVALID_LTE_QMIN             0x7F
#define INVALID_LTE_QQUALMIN         0x7F
#define INVALID_LTE_RSRPMIN          0x7FFF
#define LTE_REPORT_THR_NEVER         0xFF

typedef enum {
    RRM_EM_IR_MEAS_STOPPED                = 0x00,
    RRM_EM_IR_FIXED_MEAS_START            = 0x01,
    RRM_EM_IR_70S_PRIO_MEAS_START         = 0x02,
    RRM_EM_IR_70S_PRIO_N_FIXED_MEAS_STRAT = 0x03,
    RRM_EM_IR_25S_PRIO_MEAS_START         = 0x04,
    RRM_EM_IR_25S_PRIO_N_FIXED_MEAS_START = 0x05
} rrm_em_ir_meas_status_enum;

typedef struct
{
    kal_bool          is_valid;
    /* When geran_priority is equal to 0x2B, it means geran_priority is invalid. */
    kal_int8          geran_priority;
    /* When thresh_priority_search is eqaul to 0x7F, it measns always. */
    kal_int8          thresh_priority_search;
    /* When thresh_GSM_low is equal to 0xFF, it means always. */
    kal_uint8         thresh_GSM_low;
    /* When h_prio is equal to 0, it means h_prio is disabled. */
    kal_uint8         h_prio;
    kal_uint8         t_reselection;
}rrm_em_ir_2g_parameter_struct;

typedef struct
{
    kal_bool          is_valid;
    /* The value of ir_source is the enumeration value
     * SRC_INVALID = 0,
     * SRC_SI      = 1,
     * SRC_MI      = 2,
     * SRC_PSI     = 3,
     * SRC_PMO     = 4
     */
    kal_uint8         ir_source;
    kal_uint8         qsearch_i;
    /* When qsearch_c is eqaul to 0xFF, qsearch_c is invalid */
    kal_uint8         qsearch_c;
    kal_uint8         qsearch_c_initial;
    kal_uint8         qsearch_p;
    /* When fdd_qoffset is eqaul to 0x7F, it measns always. */
    kal_int8          fdd_qoffset;
    kal_int8          fdd_qmin;
    /* When fdd_qmin_off is equal to 0xFF, fdd_qmin_off is invalid */
    kal_uint8         fdd_qmin_off;
    /* When fdd_rscpmin is equal to 0x7F, fdd_rscpmin is invalid */
    kal_int8          fdd_rscpmin;
    kal_uint8         fdd_rep_quant;
    /* When fdd_multirat_reporting is eqaul to 0xFF, fdd_multirat_reporting is invalid */
    kal_uint8         fdd_multirat_reporting;
    kal_uint8         fdd_reporting_offset;
    /* When fdd_reporting_threshold is eqaul to 0xFF, it means never */
    kal_uint8         fdd_reporting_threshold;
    /* When fdd__reporting_threshold is equal to 0xFF, fdd_reporting_threshold_2 is invalid */
    kal_uint8         fdd_reporting_threshold_2;
    kal_uint8         fdd_gprs_rep_quant;
    /* When fdd_gprs_multirat_reporting is eqaul to 0xFF, fdd_gprs_multirat_reporting is invalid */
    kal_uint8         fdd_gprs_multirat_reporting;
    kal_uint8         fdd_gprs_reporting_offset;
    /* When fdd_gprs_reporting_threshold is eqaul to 0xFF, it means never */
    kal_uint8         fdd_gprs_reporting_threshold;
    /* When fdd_gprs_reporting_threshold is equal to 0xFF, fdd_gprs_reporting_threshold_2 is invalid */
    kal_uint8         fdd_gprs_reporting_threshold_2;
}FDD_rrm_em_ir_3g_parameter_struct;

typedef struct
{
    kal_bool          is_valid;
    /* The value of ir_source is the enumeration value
     * SRC_INVALID = 0,
     * SRC_SI      = 1,
     * SRC_MI      = 2,
     * SRC_PSI     = 3,
     * SRC_PMO     = 4
     */
    kal_uint8         ir_source;
    kal_uint8         qsearch_i;
    /* When qsearch_c is eqaul to 0xFF, qsearch_c is invalid */
    kal_uint8         qsearch_c;
    kal_uint8         qsearch_c_initial;
    kal_uint8         qsearch_p;
    kal_int8          tdd_qoffset;
    /* When tdd_multirat_reporting is eqaul to 0xFF, tdd_multirat_reporting is invalid */
    kal_uint8         tdd_multirat_reporting;
    kal_uint8         tdd_reporting_offset;
    /* When tdd_reporting_threshold is eqaul to 0xFF, it means never */
    kal_uint8         tdd_reporting_threshold;
    /* When tdd_gprs_multirat_reporting is eqaul to 0xFF, tdd_gprs_multirat_reporting is invalid */
    kal_uint8         tdd_gprs_multirat_reporting;
    kal_uint8         tdd_gprs_reporting_offset;
    /* When tdd_gprs_reporting_threshold is eqaul to 0xFF, it means never */
    kal_uint8         tdd_gprs_reporting_threshold;
}TDD_rrm_em_ir_3g_parameter_struct;


typedef struct
{
    kal_bool          is_valid;
    /* The value of ir_source is the enumeration value
     * LTE_PARA_INVALID = 0,
     * LTE_PARA_FROM_SI2Q = 1,
     * LTE_PARA_FROM_MI = 2,
     * LTE_PARA_FROM_PMO = 3
     */
    kal_uint8         ir_source;
    /* When qsearch_c_eutran_initial is eqaul to 0xFF, qsearch_c_eutran_initial is invalid */
    kal_uint8         qsearch_c_eutran_initial;
    /* When qsearch_c_eutran is eqaul to 0xFF, qsearch_c_eutran is invalid */
    kal_uint8         qsearch_c_eutran;
    kal_uint8         qsearch_p_eutran;
    kal_uint8         eutran_rep_quant;
    /* When eutran_multirat_reporting is eqaul to 0xFF, eutran_multirat_reporting is invalid */
    kal_uint8         eutran_multirat_reporting;
    /* When eutran_6bit_fdd_report_threshold is eqaul to 0xFF, it means never */
    kal_uint8         eutran_6bit_fdd_report_threshold;
    kal_uint8         eutran_6bit_fdd_report_threshold_2;
    kal_uint8         eutran_6bit_fdd_report_offset;
    /* When eutran_6bit_tdd_report_threshold is eqaul to 0xFF, it means never */
    kal_uint8         eutran_6bit_tdd_report_threshold;
    kal_uint8         eutran_6bit_tdd_report_threshold_2;
    kal_uint8         eutran_6bit_tdd_report_offset;
    kal_int16         eutran_3bit_fdd_meas_report_offset;
    kal_uint8         eutran_3bit_fdd_report_threshold_2;
    kal_uint8         eutran_3bit_fdd_report_offset;
    kal_int16         eutran_3bit_tdd_meas_report_offset;
    kal_uint8         eutran_3bit_tdd_report_threshold_2;
    kal_uint8         eutran_3bit_tdd_report_offset;
    kal_uint8         eutran_3bit_report_granularity;
    kal_uint8         eutran_gprs_rep_quant;
    /* When eutran_gprs_multirat_reporting is eqaul to 0xFF, eutran_gprs_multirat_reporting is invalid */
    kal_uint8         eutran_gprs_multirat_reporting;
    /* When eutran_gprs_6bit_fdd_report_threshold is eqaul to 0xFF, it means never */
    kal_uint8         eutran_gprs_6bit_fdd_report_threshold;
    kal_uint8         eutran_gprs_6bit_fdd_report_threshold_2;
    kal_uint8         eutran_gprs_6bit_fdd_report_offset;
    /* When eutran_gprs_6bit_tdd_report_threshold is eqaul to 0xFF, it means never */
    kal_uint8         eutran_gprs_6bit_tdd_report_threshold;
    kal_uint8         eutran_gprs_6bit_tdd_report_threshold_2;
    kal_uint8         eutran_gprs_6bit_tdd_report_offset;
} rrm_em_ir_4g_parameter_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rrm_em_ir_2g_parameter_struct ir_2g_parameter;
    FDD_rrm_em_ir_3g_parameter_struct ir_3g_parameter;
    rrm_em_ir_4g_parameter_struct ir_4g_parameter;
} fdd_em_rrm_ir_parameter_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rrm_em_ir_2g_parameter_struct ir_2g_parameter;
    TDD_rrm_em_ir_3g_parameter_struct ir_3g_parameter;
    rrm_em_ir_4g_parameter_struct ir_4g_parameter;
} tdd_em_rrm_ir_parameter_status_ind_struct;

typedef struct
{
    kal_bool         is_valid;
    /* The value of rat is the enumeration value
     * UMTS = 0x01,
     * LTE = 0x02
     */
    kal_uint8        rat;
    /* The value of type is the enumeration value
     * NORMAL = 0x00,
     * CSG = 0x01,
     * HYBRID = 0x02
     */
    kal_uint8        type;
    /*freq changed to uint32, instead of EARFCN, since it will be used for (u/e)arfcn*/
    kal_uint32       freq;
    kal_uint16       phy_id;
    kal_int16        strength;
    kal_int16        quality;
    kal_uint32       hit_duration;
    /* The value of hit_criteria is the combination value.
     * IR_RESEL_NO_CRITERIA_HIT = 0x00,
     * IR_RESEL_RANKING_CRITERIA_HIT = 0x01,
     * IR_RESEL_WCDMA_PREFER_HIT = 0x02,
     * IR_RESEL_HIGH_PRIORITY_HIT = 0x10,
     * IR_RESEL_LOW_PRIORITY_HIT  = 0x20,
     * IR_RESEL_ANY_PRIORITY_HIT  = 0x40
     */
    kal_uint8        hit_critiria;
}rrm_em_ir_reselect_status_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rrm_em_ir_reselect_status_struct ir_reselect_status[MAX_NR_RR_EM_IR_RESEL_STATUS];
} em_rrm_ir_reselect_status_ind_struct;

typedef struct
{
    kal_bool          is_valid;
    /* The value of cell_type is the enumeration value
     * NORMAL = 0x00,
     * CSG = 0x01,
     * HYBRID = 0x02
     */
    kal_uint8         cell_type;
    kal_uint16        uarfcn;
    kal_uint16        phy_id;
    kal_int16         strength;
    kal_int16         quailty;
    kal_uint8         rep_value;
    kal_uint8         non_rep_value;
    /* The value of fail_type is the enumeration value:
     * IR_INITIAL_VALUE   = 0x00,
     * NEVER_ALLOWED      = 0x01,
     * PLMN_ID_MISMATCHED = 0x02,
     * LA_NOT_ALLOWED     = 0x03,
     * CELL_BARRED        = 0x04,
     * TEMP_FAILURE       = 0x05,
     * CRITERIA3_NOT_SATISFIED = 0x06,
     * TA_NOT_ALLOWED     = 0x07,
     * CELL_BARRED_FREQ   = 0x08,
     * CELL_BARRED_RESV_OPERATOR = 0x09,
     * CELL_BARRED_RESV_OPERATOR_FREQ = 0x0A,
     * CSG_NOT_ALLOWED = 0x0B
     */
    kal_uint8         fail_type;
}rrm_em_ir_3g_neighbor_meas_status_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                             em_info;
    rrm_em_ir_3g_neighbor_meas_status_struct ir_3g_neighbor_meas_status[MAX_NR_RR_EM_3G_MEAS_STATUS];
} em_rrm_ir_3g_neighbor_meas_status_ind_struct;

typedef struct
{
   kal_bool                     is_valid;
   kal_uint16                   uarfcn;
   kal_bool                     is_meas_ongoing;
   /* When Bit 7 is 1 (i.e., meas_control_utran & 0x80 == 0x80), meas_control_utran
    * is valid. Then Bit 1 is shown whether this UARFCN should be measured.
    */
   kal_uint8                    meas_control_utran;
   /* When priority is equal to 0x2B, it means priority is invalid. */
   kal_int8                     priority;
   /* When thr_high is equal to 0xFF, it means thr_high is invalid. */
   kal_uint8                    thr_high;
   /* When thr_low is equal to 0xFF, it means thr_low is invalid. */
   kal_uint8                    thr_low;
   /* When qrx_lev_min is equal to 0x7F, it means qrx_level_min is invalid. */
   kal_int8                     qrx_lev_min;
} rrm_em_ir_3g_neighbor_meas_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                           em_info;
    kal_uint8                              rrm_state;
    /* The value of ir_resel_mode is the enumeration value
     * IR_RESEL_MODE_RANKING = 0x00,
     * IR_RESEL_MODE_PRIORITY = 0x01,
     */
    kal_uint8                              ir_resel_mode;
    rrm_em_ir_meas_status_enum             rrm_em_ir_meas_status;
    rrm_em_ir_3g_neighbor_meas_info_struct ir_3g_neighbor_meas_info[MAX_NR_RR_EM_3G_MEAS_INFO];
} em_rrm_ir_3g_neighbor_meas_info_ind_struct;

typedef struct
{
    kal_bool          is_valid;
    /* The value of cell_type is the enumeration value
     * NORMAL = 0x00,
     * CSG = 0x01,
     * HYBRID = 0x02
     */
    kal_uint8         cell_type;
    EARFCN            earfcn;
    kal_uint16        pci;
    /* The value of band is the enumeration value
     * INVALID = 0x00,
     * FDD = 0x01,
     * TDD = 0x02
     */
    kal_uint8         band_type;
    kal_int16         rsrp;
    kal_int16         rsrq;
    kal_uint8         rep_value;
    kal_uint8         non_rep_value;
    /* The value of fail_type is the enumeration value:
     * IR_INITIAL_VALUE   = 0x00,
     * NEVER_ALLOWED      = 0x01,
     * PLMN_ID_MISMATCHED = 0x02,
     * LA_NOT_ALLOWED     = 0x03,
     * CELL_BARRED        = 0x04,
     * TEMP_FAILURE       = 0x05,
     * CRITERIA3_NOT_SATISFIED = 0x06,
     * TA_NOT_ALLOWED     = 0x07,
     * CELL_BARRED_FREQ   = 0x08,
     * CELL_BARRED_RESV_OPERATOR = 0x09,
     * CELL_BARRED_RESV_OPERATOR_FREQ = 0x0A,
     * CSG_NOT_ALLOWED = 0x0B
     */
    kal_uint8         fail_type;
}rrm_em_ir_4g_neighbor_meas_status_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rrm_em_ir_4g_neighbor_meas_status_struct ir_4g_neighbor_meas_status[MAX_NR_RR_EM_4G_MEAS_STATUS];
} em_rrm_ir_4g_neighbor_meas_status_ind_struct;

typedef struct
{
   kal_bool                     is_valid;
   EARFCN                       earfcn;
   kal_bool                     is_meas_ongoing;
   /* When Bit 7 is 1 (i.e., meas_control_eutran & 0x80 == 0x80), meas_control_eutran
    * is valid. Then Bit 1 is shown whether this EARFCN should be measured.
    */
   kal_uint8                    meas_control_eutran;
   /* When priority is equal to 0x2B, it means priority is invalid. */
   kal_int8                     priority;
   /* When thr_high is equal to 0xFF, it means thr_high is invalid. */
   kal_uint8                    thr_high;
   /* When thr_low is equal to 0xFF, it means thr_low is invalid. */
   kal_uint8                    thr_low;
   /* When qrx_lev_min is equal to 0x7FFF, it means qrx_level_min is invalid. */
   kal_int16                    qrx_lev_min;
   /* The value of fail_type is the enumeration value:
    * CHECK_INVALID = 0x00, CHECK_RSRQ = 0x01, CHECK_RSRP = 0x02.
    * (1)CHECK_INVALID: qmin, thr_high_q, thr_low_q, qqualmin, and rsrpmin are all invalid.
    * (2)CHECK_RSRQ: qmin is valid,
    *                thr_high_q, thr_low_q, qqualmin, and rsrpmin are all invalid
    * (3)CHECK_RSRP: qmin is invalid,
    *                thr_high_q, thr_low_q, qqualmin, and rsrpmin are all valid
    */
   kal_uint8                    lte_suitability_check;
   /* When qmin is equal to 0x7F, it means qmin is invalid. */
   kal_int8                     qmin;
   /* When thr_high_q is equal to 0xFF, it thr_high_q qmin is invalid. */
   kal_uint8                    thr_high_q;
   /* When thr_low_q is equal to 0xFF, it thr_low_q qmin is invalid. */
   kal_uint8                    thr_low_q;
   /* When qqualmin is equal to 0x7F, it means qqualmin is invalid. */
   kal_int8                     qqualmin;
   /* When rsrpmin is equal to 0x7FFF, it means rsrpmin is invalid. */
   kal_int16                    rsrpmin;
} rrm_em_ir_4g_neighbor_meas_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum                           em_info;
    kal_uint8                              rrm_state;
    /* The value of ir_resel_mode is the enumeration value
     * IR_RESEL_MODE_RANKING = 0x00,
     * IR_RESEL_MODE_PRIORITY = 0x01,
     */
    kal_uint8                              ir_resel_mode;
    rrm_em_ir_meas_status_enum             rrm_em_ir_meas_status;
    rrm_em_ir_4g_neighbor_meas_info_struct ir_4g_neighbor_meas_info[MAX_NR_RR_EM_4G_MEAS_INFO];
} em_rrm_ir_4g_neighbor_meas_info_ind_struct;

/***************************** End of RR DM EM Config  ****************************/


/* The rr_em_tbf_status_struct is updated whenever TBF is established/reallocated or released. */
typedef struct
{
    kal_uint8   tbf_mode;                // GPRS or EGPRS TBF mode

    /* UL TBF info */
    kal_uint8   ul_tbf_status;           // access/active/inactive
    kal_uint8   ul_rel_cause;            // if applicable
    kal_uint8   ul_ts_allocation;        // timeslot allocation
    kal_uint8   ul_rlc_mode;             // RLC ACK / UNACK mode
    kal_uint8   ul_mac_mode;             // Dynamic allocation / Extended dynamic allocation / Fixed allocation
    /* new created fields */
    kal_uint16  number_rlc_octect;       // RLC requested octect/byte number
    kal_uint8   ul_tfi;
    kal_uint8   ul_granularity;
    kal_uint8   ul_usf;
    kal_uint8   ul_tai;
    kal_uint16  ul_tqi;
    kal_uint16  ul_window_size;          // GPRS: 64, EGPRS 64 ~1024

    /* DL TBF info */
    kal_uint8   dl_tbf_status;           // active/inactive/release pending
    kal_uint8   dl_rel_cause;            // if applicable
    kal_uint8   dl_ts_allocation;        // Ttimeslot allocation
    kal_uint8   dl_rlc_mode;             // RLC ACK / UNACK mode
    kal_uint8   dl_mac_mode;             // Dynamic allocation / Extended dynamic allocation / Fixed allocation
    /* new created fields */
    kal_uint8   dl_tfi;
    kal_uint8   dl_tai;
    kal_uint16  dl_window_size;          // GPRS: 64, EGPRS 64 ~1024
#ifdef __EGPRS_MODE__
    kal_uint8   dl_out_of_memory;        // EGPRS IR out of memory indication
#endif /* __EGPRS_MODE__ */

    /* Hamann 20140819 : New EM features */
    kal_uint8   mac_mode;                // MAC_IDLE, MAC_PKT_ACCESS, MAC_UL, MAC_DL, MAC_UL_DL, MAC_PS_HO, MAC_NUM_STATES
    kal_uint8   num_dl_ts;               // number of 1s in dl_ts_allocation
    kal_uint8   num_ul_ts;               // number of 1s in ul_ts_allocation

    /*Hamann 20150206 : EM for TBF uplink establishment (TBFULE) */
    kal_uint32 ul_tbf_establishment_count;
    kal_uint8  ul_tbf_establishment_cause;  // be assigned one of value in enum mac_em_ul_tbf_establishment_cause, range from 1 to 54
    kal_uint8  ul_tbf_establishment_type;   // be assigned one of value in enum mac_em_ul_tbf_establishment_type, range from 1 to 5
    kal_uint8  ul_tbf_establishment_status; // be assigned one of value in enum mac_em_ul_tbf_establishment_status, range from 1 to 4
}rr_em_tbf_status_struct;


/* Katie 2013027: em revise */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_tbf_status_struct rr_em_tbf_status;

} em_mac_tbf_info_ind_struct;

/* The new rr_em_blk_info_struct is updated every N (configurable?) block period during TBF.
    N should be adjusted to suitable/smooth display rate. */
typedef struct
{
    /* UL TBF info */
    kal_uint8  ul_coding_scheme;
    kal_uint8  ul_cv;
    kal_uint8  ul_tlli;
    kal_uint16 ul_bsn1;
#ifdef __EGPRS_MODE__
    kal_uint16 ul_bsn2;
    kal_uint8  ul_cps;
    kal_uint8  ul_rsb;
    kal_uint8  ul_spb;
#endif /* __EGPRS_MODE__ */

    /* DL TBF info */
    kal_uint8  dl_c_value_in_rx_level;    /* for both GPRS/EGPRS C value (channel quality) */
    kal_uint8  dl_rxqual;                 /* for GPRS RX QUAL (channel quality) */
    kal_uint8  dl_sign_var;               /* for GPRS signal variance (channel quality) */
    kal_uint8  dl_coding_scheme;
    kal_uint8  dl_fbi;
    kal_uint16 dl_bsn1;
#ifdef __EGPRS_MODE__
    kal_uint16 dl_bsn2;
    kal_uint8  dl_cps;
    kal_uint8  dl_gmsk_mean_bep_lev;      /* for EGPRS GMSK mean BEP level (channel quality). valid: 0 ~ 31. invalid: 255 */
    kal_uint8  dl_8psk_mean_bep_lev;      /* for EGPRS 8PSK mean BEP level (channel quality) . valid: 0 ~ 31. invalid: 255 */
    kal_uint8  dl_gmsk_cv_bep_lev;        /* for EGPRS GMSK cv BEP level (channel quality). valid: 0 ~ 7. invalid: 255 */
    kal_uint8  dl_8psk_cv_bep_lev;        /* for EGPRS 8PSK cv BEP level (channel quality) . valid: 0 ~ 7. invalid: 255 */
    kal_uint8  dl_tn_mean_bep_lev[8];     /* for EGPRS Timeslot Number mean BEP level (channel quality). valid: 0 ~ 31. invalid: 255 */
#endif /* __EGPRS_MODE__ */
    kal_uint8 dl_tn_interference_lev[8]; /* for GPRS/EGPRS Timeslot Number interference (channel quality). valid: 0 ~ 15. invalid: 255 */

    /* Hamann 20140819 : New EM features */
    kal_uint32 received_blocks_in_error;         // molecular of em_block_error_rate
    kal_uint32 total_number_of_received_blocks;  // denominator of em_block_error_rate
    kal_uint32 em_bit_error_rate;                // Bit Error Rate
    kal_uint32 em_block_error_rate;              // Block Error Rate
    kal_uint32 rlc_dl_rx;                        // number of total received RLC DL blocks
    kal_uint32 rlc_ul_tx;                        // number of total transmitted RLC UL blocks
    kal_uint32 rlc_ul_retx;                      // number of re-transmitted RLC UL blocks
    kal_uint32 rlc_ul_retx_rate;                 // retransmission rate of RLC UL blocks
    kal_uint32 rlc_instant_ul_throughput;        // instant throughput (bits/s) of UL TBF
    kal_uint32 rlc_instant_dl_throughput;        // instant throughout (bits/s) of DL TBF
    kal_uint32 coding_scheme_hist[13];           // the same as cs_history[] of rlc_em_info_struct
    kal_uint32 num_blks_for_cs_stats;
    kal_uint32 rlc_average_ul_throughput;        // average throughput (bits/s) of UL TBF
    kal_uint32 rlc_average_dl_throughput;        // average throughput (bits/s) of DL TBF
}rr_em_blk_info_struct;

/* Katie 2013027: em revise */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    rr_em_blk_info_struct rr_em_blk_info;

} em_mac_blk_info_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_bool     tas_enable;
    kal_uint8    serving_band;
    kal_uint8    gsm_antenna; /* Current TX antenna */
    kal_uint8    gsm_other_antenna; /* Prev TX antenna */
    kal_int16    gsm_current_antenna_rxLevel; /* Current Tx antenna power */
    kal_int16    gsm_other_antenna_rxLevel; /* Prev Tx antenna power */
    kal_int32    gsm_current_average_snr;
    kal_int32    gsm_other_average_snr;
    kal_uint8    gsm_antenna_state; /* Current antenna state*/
    kal_int16    gsm_div_antenna_rxLevel;/* Current Drx antenna power */
    kal_int16    gsm_prev_div_antenna_rxLevel; /* Previous Drx antenna power */
    kal_int16    gsm_dat_scenario_index;
}em_gsm_tas_info_ind_struct;

typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;
   kal_bool     rxd_enable;       /* by band */
   kal_int16    serving_arfcn;
   kal_uint8    serving_band;
   kal_uint8    rxd_mode;        /* 0(Prx), 1(1rx de-sense), 2(N/A), 3(2Rx), 4(Drx) */
   kal_int16    rxlev_prx;       /* dBm */
   kal_int16    rxlev_drx;       /* dBm */
   kal_int32    tsc_snr;
   kal_int32    pre_snr;
}em_gsm_rxd_info_ind_struct;

#endif /* _EM_GAS_PUBLIC_STRUCT_H */

