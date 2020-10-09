/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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
 *   cas_eas_struct.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *
 *
 * ----------------------------------------------------------------------------
 * $Log:$
 *
 * 11 16 2016 tsung-ming.lee
 * [MOLY00210784] [MT6293] code sync form UMOLY
 * 	
 * 	array size sync.
 *
 * 11 09 2016 xiaofang.xu
 * [MOLY00208435] [6293][C2K]Sync C2K code to UMOLYA TRUNK
 * .
 *
 * 06 28 2016 cookie.chen
 * [MOLY00185901] UMOLYA errc relevant latest code sync from UMOLY
 * .
 *
 * 02 17 2016 sam.tsai
 * [MOLY00156025] MOB/LMOB code sync from LR11 to UMOLY
 *
 * 02 17 2016 sam.tsai
 * [MOLY00156025] MOB/LMOB code sync from LR11 to UMOLY
 * .[MOLY00146633] [MD1] MD1/MD3 Power Down problem
 * .MD1/MD3 interface check-in.
 *
 * 02 15 2016 ryan.ou
 * [MOLY00159902] [ERRC][CEL] 2015 Q4 code sync from LR11 to UMOLY
 * MD3 related (OA domain).
 * 	
 * 	CL1760622
 *
 * 07 03 2015 doug.shih
 * [MOLY00092508] [MT6291][LTE-C2K] AS Inter RAT feature
 * Sync C2K AS IRAT PreIT code.
 *
 * 03 20 2015 henry.lai
 * [Henry] Fix typo.
 *
 * 03 20 2015 henry.lai
 * [Henry] Add strength in REPORT_CGI_CFN and meas_ind_ms_diff in EAS_CAS_CELL_MEAS_IND for UT case implementation.
 *
 *
 ******************************************************************************/

#ifndef __CAS_EAS_STRUCT_H__
#define __CAS_EAS_STRUCT_H__

#include "as_inter_core_enum.h"
#include "as_inter_core_struct.h"
#include "cas_eas_enum.h"

/* ERRC-CLC Message (EAS Standby) */

/* measurement request/result related: CAS to/from EAS */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  tid;                       /* tid is used for CAS to filter the measurement report from EAS, range: 0..255
                                                             the LTE_MEASUREMENT_IND corresponding to this LTE_MEASUREMENT_REQ should return the same tid */
    kal_bool                   hps_flag;                  /* indicate higher priority search ON or OFF */
    kal_uint8                  prio_meas_period;          /* indicate the measurement period for higher priority search, represent in 'seconds', valid if hps_flag = TRUE */
    kal_uint8                  freq_num;                  /* indicate the number of measurement frequencies, range: 0..MAX_MEAS_IRAT_FREQ, freq_num=0, EAS stops measurement
                                                             the sequence of the frequencies in the array (from 0 to MAX_MEAS_IRAT_FREQ) is the search sequence where CAS will decide by itself.
                                                             LTE layer1 will start the measurement from the 1st frequency in the array */
    eas_meas_freq_info_struct  freq[MAX_MEAS_IRAT_FREQ];  /* indicate the measurement information */
} cas_eas_lte_measurement_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  dummy;                       /* to prevent compiling error */
} cas_eas_lte_measurement_cnf_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  tid;                       /* tid is used for CAS to filter the measurement report from EAS, range: 0..255
                                                             the LTE_MEASUREMENT_IND corresponding to this LTE_MEASUREMENT_REQ should return the same tid */
    kal_uint8                  freq_num;                  /* indicate the number of frequency measurement results, range: 1..MAX_MEAS_IRAT_FREQ */
    eas_meas_freq_rslt_struct  freq[MAX_MEAS_IRAT_FREQ];  /* indicate the frequency measurement result */
} cas_eas_lte_measurement_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8               freq_num;                  /* indicate the number of frequency measurement results included in the report.
                                                          the measurement result may contain more than one frequency, range: 0..MAX_MEAS_IRAT_FREQ.
                                                          if active RAT want to modify the high quality measurement list (e.g., remove certain cells),
                                                          it can just send a new indication containing new measurement list
                                                          note: freq_num = 0 means all cells do not fulfill HPS criteria */
    eas_hps_qualify_struct  freq[MAX_MEAS_IRAT_FREQ];  /* specify the EARFCN and those PCIs of the cells which fulfill the cell reselection criteria in last report */
} cas_eas_lte_hps_qualify_cell_ind_struct;


/* evaluation/activation request/result related: CAS to/from EAS */
typedef struct
{
    /* Refer to C.S0087:
         The access network shall set this field to the PLMN-ID. The 12 most significant bits of the field are the 3-digit MCC in BCD format.
         The next 12 bits are defined for the MNC. For a 3-digit MNC, it takes all 12 bits in 3-digit BCD format.
         For 2-digit MNC, it is encoded as the 1st 2 digits in the first 8 bits, and then the last 4 bit shall be set to 0xF. */
    /* CAS will do 4-bit BCD to decimal conversion before send to EAS,
       that is: first 12 MSB bits PLMN ID received from C2K will filled into mcc1~mcc3, and next 12 bits PLMN ID will filled into mnc1~mnc3 */
    kal_uint8  mcc1;
    kal_uint8  mcc2;
    kal_uint8  mcc3;
    kal_uint8  mnc1;
    kal_uint8  mnc2;
    kal_uint8  mnc3;
} cas_eas_plmn_id_struct;


typedef struct
{
    LOCAL_PARA_HDR
    eas_target_cell_info    target_cell;                             /* indicate the PCI and EARFCN of IRCR candidate cell */
    kal_uint8               plmn_num;                                /* indicated the number of desired PLMN ID list from C2K */
    cas_eas_plmn_id_struct  plmn_list[MAX_NUM_OF_CAS_PLMN_ID_LIST];  /* indicate desired PLMN ID list */
} cas_eas_evaluate_ecell_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    te_ir_cell_reselection_status  eval_status;                /* indicate the result of the LTE target cell evaluation */
    ts_eval_activate_fail_handle   eval_activate_fail_handle;  /* indicate what kind of evaluation failure for the LTE target cell */
} cas_eas_evaluate_ecell_cnf_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  dummy;                       /* to prevent compiling error */
} cas_eas_evaluate_ecell_stop_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    /* EAS will not send this primitive until L1 CNF (close BCCH) is received but CAS will not wait EAS CNF,
       active L1 is responsible to wait standby L1 stop completely. */
       
    /* to handle racing condition (EVALUATE_ECELL_CNF and EVALUTE_ECELL_STOP_REQ race condition),
       EAS will NOT response CAS_EAS_EVALUATE_ECELL_STOP_CNF if EAS is not performing evaluation procedure */
    kal_uint8                  dummy;                       /* to prevent compiling error */
} cas_eas_evaluate_ecell_stop_cnf_struct;


typedef struct
{
    /* unfold MACRO LOCAL_PARA_HDR for MD1/MD3 cross-core structure alignment for RAT CHANGE */
    kal_uint8                  ref_count;
    kal_uint8                  lp_reserved;
    kal_uint16                 msg_len;

    te_ir_cell_change_trigger  trigger;                                 /* indicate IR trigger type, for C2K, it is IRCR only, no IR redirection from CAS to EAS */
    eas_target_cell_info       target_cell;                             /* indicate PCI and EARFCN of target cell */
    kal_uint8                  plmn_num;                                /* indicated the number of desired PLMN ID list from C2K */
    cas_eas_plmn_id_struct     plmn_list[MAX_NUM_OF_CAS_PLMN_ID_LIST];  /* indicate desired PLMN ID list */
} cas_eas_activate_ecell_req_struct;


typedef struct
{
    /* unfold MACRO LOCAL_PARA_HDR for MD1/MD3 cross-core structure alignment for RAT CHANGE */
    kal_uint8                      ref_count;
    kal_uint8                      lp_reserved;
    kal_uint16                     msg_len;

    te_ir_cell_reselection_status  active_status;              /* indicate the result of the LTE target cell activation */
    ts_eval_activate_fail_handle   eval_activate_fail_handle;  /* indicate what kind of activation failure for the LTE target cell */
} cas_eas_activate_ecell_cnf_struct;


/* ERRC-CLC Message (CAS Standby) */

/* measurement request/result related: EAS to/from CAS */
typedef struct
{
    kal_uint16  channel;                   /* indicate the ARFCN of the measured frequency, range: 0..2047 */
    kal_bool    is_search_win_size_valid;  /* indicate if search window size is present */
    kal_uint8   search_win_size;           /* indicate the search window size used by CDMA for the measurement, range: 0..15
                                              it should be set according to the value defined in SIB8 or MeasObjectCDMA2000 */
    kal_uint8   num_pn;                    /* indicate the number of CDMA PNs included, range: 0..MAX_NUM_PN */
    kal_uint16  pn_list[MAX_NUM_PN];       /* list of CDMA PNs included. it shall be set to the 'physCellId' received from SIB8 or MeasObjectCDMA2000, range: 0..511 */
    kal_bool    is_detected_cell_meas;     /* indicate whether detected cell measurement for this ARFCN is required.
                                              CL1 should try to find the strongest cell on this ARFCN so that EAS can perform reselection in idle mode or
                                              report this cell for SON in connected mode */
} cas_meas_freq_info_struct;


typedef struct
{
    kal_uint8                  band;                              /* indicate the band class of the measured frequency list, range: 0..21 */
    kal_uint8                  freq_num;                          /* indicate the number of measurement frequencies, range: 0..MAX_NUM_MEAS_C2K_FREQ */
    cas_meas_freq_info_struct  freq_list[MAX_NUM_MEAS_C2K_FREQ];  /* indicate the measurement information */
} cas_meas_band_info_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  tid;          /* tid is used by EAS to filter the measurement report from CAS, range: 0..255
                                                the CCELL_MEAS_IND corresponding to this CCELL_MEAS_REQ should return the same tid 
                                                Note that (1)	ERRC will maintain two tid. One is for HP_MODE. The other one is for LP_MODE/RESEL/CONNECTED.
                                                          (2)	CAS also needs to maintain two tid like ERRC. */
    cas_meas_type_enum         meas_type;    /* indicate the measurement type of this CCELL_MEAS_REQ
                                                - if 'RESEL' type is selected, the set of sectors indicated in this primitive should be a subset of the previously measured sectors
                                                - if 'CONNECTED' type is selected, it means EAS is in connected mode and requests CAS to do measurement
                                                  (in order to distinguish from HP/LP/RESEL modes which used in idle mode)
                                                - when this primitive is used to stop measurement, EAS should choose correct type to inform CAS which type of measurement should be stopped */
    kal_uint8                  meas_period;  /* indicate the absolute measurement period used by C2K to report the measurement results to LTE
                                                this field is only valid if 'meas_type' = HP_MODE, represent in 'seconds' */
    kal_uint8                  band_num;     /* indicate the number of measurement bands, range: 0..MAX_NUM_MEAS_C2K_BAND
                                                if band_num=0, CAS should stop the measurement specified in the 'meas_type' */
    cas_meas_band_info_struct  band_list[MAX_NUM_MEAS_C2K_BAND];  /* indicate the measurement information */
} eas_cas_config_ccell_meas_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8           tid;        /* tid is used by EAS to filter the measurement report from CAS, range: 0..255 
                                       this tid should be the same as that in CONFIG_CCELL_MEAS_REQ */
    cas_meas_type_enum  meas_type;  /* indicate the measurement type of the current message
                                       this meas_type should be the same as that in CONFIG_CCELL_MEAS_REQ */
} eas_cas_config_ccell_meas_cnf_struct;


typedef struct
{
    kal_uint16  pn;  /* indicate the pilot number the measurement result belonged, range: 0..511 */
    kal_int16   phase;  /* indicate CDMA pilot phase, represent in chips */
    kal_uint8   strength;  /* indicate CDMA pilot strength, in -0.5db format
                              note: CAS will send the strength value calculated by formula [FLOOR(-2 x 10 x log10 Ec/Io)]
                                    without adding negative sign, and EAS needs to multiply the strength value by (-1)
                                    when it evaluates reselection criteria if fulfill: Srxlev > ThreshxHighP, ThreshxLowP */
} cas_meas_sector_rslt_struct;


typedef struct
{
    kal_uint16                   channel;  /* indicate ARFCN of the measured frequency, range: 0..2047 */
    kal_uint8                    num_pn;   /* indicate the number of CDMA PNs included, rnage: 0..MAX_NUM_PN */
    cas_meas_sector_rslt_struct  pn_list[MAX_NUM_PN];  /* list of CDMA PNs measured */
} cas_meas_freq_rslt_struct;

typedef struct
{
    kal_uint8                  band;                                  /* indicate band class of the measured frequency list, range: 0..21 */
    kal_uint8                  freq_num;                              /* indicate the number of measurement frequencies, range: 0..MAX_NUM_MEAS_C2K_FREQ */
    cas_meas_freq_rslt_struct  freq_list[MAX_NUM_MEAS_C2K_FREQ_IND];  /* indicate the measurement information */
} cas_meas_band_rslt_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                  tid;                               /* tid is used by EAS to filter the measurement report from CAS, range: 0..255
                                                                     the CCELL_MEAS_IND corresponding to this CCELL_MEAS_REQ should return the same tid
                                                                     Note that CAS needs to maintain two tid. One is for HP_MODE. The other one is for 
                                                                     LP_MODE, RESEL, or CONNECTED. When CAS receives measurement results from CL1 for HP_MODE, 
                                                                     CAS should use tid stored for HP_MODE in this field. If CAS receives measurement results 
                                                                     from CL1 for LP_MODE, RESEL, or CONNECTED, CAS should use tid stored for these modes 
                                                                     in this field. */
    kal_bool                   is_hps_meas;                       /* When CAS receives measurement result from CL1 for HP_MODE, this field should set as TRUE. 
                                                                     Otherwise (i.e., measurement results for LP_MODE, RESEL, or CONNECTED), this field should 
                                                                     set as FALSE. */                                                                 
    kal_uint8                  band_num;                          /* indicate the number of measurement bands, range: 1..MAX_NUM_MEAS_C2K_BAND */
    cas_meas_band_rslt_struct  band_list[MAX_NUM_MEAS_C2K_BAND_IND];                         /* indicate the band measurement result,include only one band and one frequency */
#ifdef UNIT_TEST
    kal_uint32                 meas_ind_ms_diff;                  /* This variable is only used by EAS to make UT case in MoDIS environment.
                                                                   * In target, EAS will get timing information from system service.
                                                                   */
#endif /* UNIT_TEST */    
} eas_cas_ccell_meas_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                 tid;                       /* tid is used for EAS to filter the corresponding CNF from CAS, range: 0..255
                                                            the EAS_REPORT_CGI_CNF corresponding to this EAS_REPORT_CGI_REQ should return the same tid */
    report_cgi_req_type_enum  report_cgi_req_type;       /* identify the request for CGI report is started or stopped */
    kal_uint8                 band;                      /* indicate the band class of the measured frequency, range: 0..21 */
    kal_uint16                channel;                   /* indicate the ARFCN of the measured frequency, range: 0..2047 */
    kal_bool                  is_search_win_size_valid;  /* indicate if search window size is present */
    kal_uint8                 search_win_size;           /* the search window size used by CDMA for the measurement, range: 0..15
                                                            it should be set according to the value defined in MeasObjectCDMA2000 */
    kal_uint16                pn;                        /* indicate the C2K cell which needs to acquire CGI */
} eas_cas_report_cgi_req_struct;


typedef struct
{
    cgi_info_status_enum  cgi_info_status;             /* identify whether the CGI information for the C2K cell collected successfully,
                                                          not collected, or collected failed */
    kal_uint8             strength;                    /* indicate CDMA pilot strength, in 0.5db format.
                                                        * Note that only when cgi_info_status is ACQ_CGI_SUCCESS or ACQ_CGI_FAIL_CELL_FOUND,
                                                        * EAS can use strength for this request C2K cell.
                                                        */
    kal_uint8             CGI[MAX_BYTE_OF_SECTOR_ID];  /* indicates the sector ID of the target HRPD sector, max length: 128 bits
                                                          it is only valid when 'cgi_info_status' == ACQ _CGI _SUCCESS */
} ccell_cgi_info_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8              tid;             /* tid is used for EAS to filter the corresponding CNF from CAS, range: 0..255
                                               the EAS_REPORT_CGI_CNF corresponding to this EAS_REPORT_CGI_REQ should return the same tid */
    kal_uint8              band;            /* indicate the band class of the measured frequency, range: 0..21 */
    kal_uint16             channel;         /* indicate the ARFCN of the measured frequency, range: 0..2047 */
    kal_uint16             pn;              /* indicate the C2K cell which needs to acquire CGI */
    ccell_cgi_info_struct  ccell_cgi_info;  /* identify the information of C2K cell that is required to get CGI information */
} eas_cas_report_cgi_cnf_struct;


typedef struct
{
    kal_uint8   band;                      /* indicate the band class of the target HRPD sector frequency, range: 0..21 */
    kal_uint16  channel;                   /* indicate the ARFCN of the target HRPD sector frequency, range: 0..2047 */
    kal_bool    is_search_win_size_valid;  /* indicate if search window size is present */
    kal_uint8   search_win_size;           /* indicate the search window size used by CDMA for the measurement. It is only set when in IRCR. It should be set according to the value defined in MeasObjectCDMA2000. */
    kal_bool    pn_included;               /* indicate whether target HRPD sector PN is included or no, it is only set to TRUE when in IRCR and set to FALSE for IR Redirection */
    kal_uint16  pn;                        /* indicate the PN for the target HRPD sector */
} cas_target_cell_info;


typedef struct
{
    kal_uint8   freq_num;         /* indicate the number of frequencies containing in deprioritization info, range: 0..MAX_NUM_OF_DEPRIORITIZATION_INFO */
    /* indicate the deprioritization frequency list 
       note: 
       (1) the deprioritized frequency is added into deprioritization list upon EAS receiving one RRCConnectionReject with deprioritization info
       (2) if EAS received several RRCConnectionRejects with deprioritization info on different frequencies, the number of elements will be accumulated
       (3) once one RRCConnectionReject with deprioritization info is to deprioritize all EUTRA (not specific frequency), EAS will add one element with frequency value 0xFFFFFFFF
       (4) when CAS processes the deprioritization info list, if CAS finds one element which frequency value is 0xFFFFFFFF, CAS should treat all EUTRA frequencies are deprioritized */
    EARFCN      freq_list[MAX_NUM_OF_DEPRIORITIZATION_INFO];
    kal_uint32  timer_tick_left;  /* indicate the remaining period of T325 deprioritization timer for which frequency list or entire EUTRA is deprioritized, represent in milliseconds */
} eas_deprioritization_info_struct;


typedef struct
{
    /* unfold MACRO LOCAL_PARA_HDR for MD1/MD3 cross-core structure alignment for RAT CHANGE */
    kal_uint8                         ref_count;
    kal_uint8                         lp_reserved;
    kal_uint16                        msg_len;

    te_ir_cell_change_trigger         trigger;                    /* indicate IR trigger type, for C2K, IR trigger type will only be IRCR or IR_REDIRECT from EAS to CAS */
    cas_target_cell_info              target_sector;              /* indicate the band/channel/pn of target sector (but pn is only valid when IRCR) */
    eas_deprioritization_info_struct  eas_deprioritization_info;  /* transfer the remaining time and frequency list of deprioritization info to CAS,
                                                                     CAS will take these EUTRA frequencies as lowest priority when C2K is active RAT until the deprioritization timer expiry */
} eas_cas_activate_ccell_req_struct;


typedef struct
{
    /* unfold MACRO LOCAL_PARA_HDR for MD1/MD3 cross-core structure alignment for RAT CHANGE */
    kal_uint8                      ref_count;
    kal_uint8                      lp_reserved;
    kal_uint16                     msg_len;

    te_ir_cell_reselection_status  active_status;  /* indicate the result of the C2K target cell activation */
    ts_eval_activate_fail_handle   eval_activate_fail_handle;  /* indicate what kind of activation failure for the C2K target cell */
} eas_cas_activate_ccell_cnf_struct;


/* parameter update: EAS to CAS */

typedef struct
{
    kal_bool                 is_cdma_eutra_sync;  /* TRUE indicates that there is no drift in the timing between E-UTRA and CDMA2000. FALSE indicates that the timing between E-UTRA and CDMA2000 can drift. */
    cdma_sys_time_type_enum  cdma_sys_time_type;  /* indicate which type of C2K system time information is used */
    kal_uint8                cdma_sys_time_string[MAX_BYTE_OF_C2K_SYS_TIME];  /* to align 36.331 ASN.1 design, we put first MSB bit string of system time starting from first MSB bit of sys_time_string[0],
                                                                                 and receiver (CAS) should truncate rest bits with correct bitmask according to cdma_sys_time_type enum value:
                                                                                 for synchronous system time, it is filled with 39 MSB bits; for asynchronous system time, it is filled with 49 MSB bits */
    eas_target_cell_info     cell_inf;           /* LTE serving cell info when we got valid sys_time_info_c2k_struct */
    kal_uint32               h_abs_time;         /* abs_time when we got valid sys_time_info_c2k_struct in SIB8 */
    kal_uint32               l_abs_time;         
} sys_time_info_c2k_struct;


typedef struct
{
    kal_uint16  arfcn_c2k;  /* indicate the ARFCN (frequency) of the CDMA2000 neighbor cell, range: 0..2047 */
} nbr_cell_freq_info_c2k_struct;


typedef struct
{
    kal_uint8                      nbr_cell_band;      /* indicate the band class of this CDMA2000 neighbor cell, range: 0..21 */
    kal_uint8                      nbr_cell_freq_num;  /* indicate the number of CDMA2000 neighbor cell list in this band, range 0..MAX_NUM_C2K_NBR_CELL_FREQ_LIST_PER_BAND */
    nbr_cell_freq_info_c2k_struct  nbr_cell_freq[MAX_NUM_C2K_NBR_CELL_FREQ_LIST_PER_BAND];  /* indicate the CDMA2000 neighbor cell frequency info list */
} nbr_cell_band_info_c2k_struct;


typedef struct
{
    kal_uint8                      nbr_cell_band_num;                              /* indicate the number of bands in the CDMA2000 neighbor cell info list, range: 0..MAX_NUM_C2K_NBR_CELL_LIST_BAND */
    nbr_cell_band_info_c2k_struct  nbr_cell_band[MAX_NUM_C2K_NBR_CELL_LIST_BAND];  /* indicate the CDMA2000 neighbor cell info list by bands */
} nbr_cell_list_c2k_struct;


typedef struct
{
    kal_bool                  is_valid;       /* indicate if the CDMA2000 neighbor cell reselection parameter is valid */
    nbr_cell_list_c2k_struct  nbr_cell_list;  /* indicate the CDMA2000 neighbor cell reselection parameters */
} cell_resel_param_c2k_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16                validity;             /* indicate what types of parameter update containing in PARAM_UPDATE_IND which could have multiple types, represent as EAS_CAS_PARAM_UPDATE_TYPE_* 
                                                       validity value is manipulated by MACRO EAS_CAS_PARAM_UPDATE_TYPE_SET/CLEAR/CHECK */
    /* SIB8 parameters update */
    /* only system time info, and 1xRTT cell reselection param are used currently */
    kal_bool                  is_sib8_update;       /* indicate if it is SIB8 update or SIB8 clear indication: TRUE means SIB8 update;  FALSE means SIB8 clear */
    sys_time_info_c2k_struct  sib8_sys_time_info;   /* indicate the CDMA2000 system time information in SIB8 received from EAS.
                                                       only valid when is_sib8_valid is TRUE */

    cell_resel_param_c2k_struct  sib8_cell_resel_param_1xrtt;  /* indicate the CDMA2000 1xRTT cell reselection parameters: band class and corresponding ARFCN in the neighbor cell list */

    /* new parameters update add here */
    /* reserved */
} eas_cas_param_update_ind_struct;
    

/* CAS_EAS_C2K_POWER_ON_IND */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 dummy;                       /* to prevent compiling error */
} cas_eas_c2k_power_on_ind_struct;

/* CAS_EAS_C2K_POWER_OFF_IND */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 dummy;                       /* to prevent compiling error */
} cas_eas_c2k_power_off_ind_struct;

/* EAS_CAS_LTE_POWER_ON_IND */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 dummy;                       /* to prevent compiling error */
} eas_cas_lte_power_on_ind_struct;

/* EAS_CAS_LTE_POWER_OFF_IND */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 dummy;                       /* to prevent compiling error */
} eas_cas_lte_power_off_ind_struct;
    

/* [VZ_REQ_LTE_MMO_38695] VzW LTE scanning enhancement (From CLC/PSW to ERRC) */
/* MSG_ID_CLC_ERRC_EVDO_PS_CONNECTION_STATUS_IND */
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool  bEvdoEnterConnection;  /* TRUE, means EVDO has been in PS connection state; else, EVDO has been in idle state. */
} clc_errc_evdo_ps_connection_status_ind_struct;


/* PSW_ERRC_1XRTT_PS_CONNECTION_STATUS_IND */
typedef struct
{
    LOCAL_PARA_HDR
    kal_bool  b1xRttEnterConnection;  /* TRUE, means 1xRTT has been in PS connection state; else, 1xRTT has been in idle state. */
} psw_errc_1xrtt_ps_connection_status_ind_struct;


/* [VZ_REQ_LTE_MMO_38695] VzW LTE scanning enhancement (From ERRC to CLC/PSW) */
/* MSG_ID_ERRC_CLC_LTE_SCAN_C2K_ACTIVE_PARAMS_IND */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16    LTE_scan_active_duration_1xRTT;  /* unit in milisecond, value range [1..10000], 0xFFFF means invalid (feature off) */
    kal_uint16    LTE_scan_active_duration_DO;     /* unit in milisecond, value range [1..1000], 0xFFFF means invalid (feature off) */
} errc_clc_lte_scan_c2k_active_params_ind_struct;


#endif /* __CAS_EAS_STRUCT_H__ */
