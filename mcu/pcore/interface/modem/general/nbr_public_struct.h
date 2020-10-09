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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   nbr_public_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
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
 *
 * removed!
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
 * removed!
 * removed!
 * removed!
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2002
*
*******************************************************************************
 *  FILENAME : nbr_public_struct.h
 *  SYNOPSIS : 
 *
 *                      R E V I S I O N    H I S T O R Y
 *
 */
#ifndef _NBR_PUBLIC_STRUCT_H
#define _NBR_PUBLIC_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "global_type.h"

/*-----UAS cell info struct start-------------*/
#ifdef __UMTS_RAT__

#define UAS_MAX_MEASURED_RESULTS_NUM    3
#define UAS_MAX_CELL_MEASURED_RESULTS_NUM    6
#define UAS_MAX_TIMESLOT_PER_SUBFRAME    7  

typedef struct
{
    kal_uint8        uarfcn_ul_used;
    kal_uint16      uarfcn_ul;
    kal_uint16      uarfcn_dl;
} uas_freq_info_fdd_struct;

typedef struct
{
    kal_uint16      uarfcn;
} uas_freq_info_tdd_struct;

typedef enum
{
    UAS_FREQ_INFO_MODE_FDD = 1,
    UAS_FREQ_INFO_MODE_TDD,
    UAS_FREQ_INFO_MODE_END
} uas_freq_info_mode_enum;

typedef struct uas_freq_info_mode_specific_info_struct
{
    kal_uint8             mode;   // uas_freq_info_mode_enum
    union
    {
        uas_freq_info_fdd_struct        fdd;
        uas_freq_info_tdd_struct        tdd;
    } choice;
} uas_freq_info_mode_specific_info_struct;

typedef struct
{
    uas_freq_info_mode_specific_info_struct     mode_specific_info;
} uas_freq_info_struct;

/* Measurement results for FDD cell */
typedef struct
{
    kal_uint16              psc;
    kal_uint8                cpich_Ec_N0_used;
    kal_uint8               cpich_Ec_N0;
    kal_uint8                cpich_rscp_used;
    kal_uint8               cpich_rscp;
    kal_uint8                pathloss_used;
    kal_uint8               pathloss;
} uas_cell_measured_results_fdd_struct;

/* Measurement results for TDD cell, not implemented now */
typedef struct
{
    kal_uint8               num;
    kal_uint8               element[2*UAS_MAX_TIMESLOT_PER_SUBFRAME];
}uas_cell_measured_result_tdd_timeslot_iscp_struct;

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
    uas_cell_measured_result_tdd_timeslot_iscp_struct   timeslot_iscp_list;

} uas_cell_measured_results_tdd_struct;

typedef enum
{
    UAS_CELL_MEASURED_RESULTS_MODE_FDD = 1,
    UAS_CELL_MEASURED_RESULTS_MODE_TDD,
    UAS_CELL_MEASURED_RESULTS_MODE_END
} uas_cell_measured_results_mode_enum;

typedef struct uas_cell_measured_results_mode_specific_info_struct
{
    kal_uint8         mode;   // uas_cell_measured_results_mode_enum

    union
    {
        uas_cell_measured_results_fdd_struct    fdd;
        uas_cell_measured_results_tdd_struct    tdd;
    } choice;
} uas_cell_measured_results_mode_specific_info_struct;

typedef struct
{
    kal_uint8                                                    cell_id_used;
    kal_uint32                                                  cell_id;
    uas_cell_measured_results_mode_specific_info_struct         mode_specific_info;
} uas_cell_measured_results_struct;

/* Measured results of most 32 different cells in one UARFCN */
typedef struct
{
    kal_uint8                               num;
    uas_cell_measured_results_struct        element[UAS_MAX_CELL_MEASURED_RESULTS_NUM];
} uas_cell_measured_results_list_struct;

typedef struct
{
    kal_uint8                                freq_info_used;
    uas_freq_info_struct                    freq_info;
    kal_uint8                                utra_carrier_rssi_used;
    kal_uint8                               utra_carrier_rssi;
    kal_uint8                                cell_measured_results_list_used;
    uas_cell_measured_results_list_struct   cell_measured_results_list;
} uas_measured_results_struct;

/* Measurement results of most 8 different UARFCN's */
typedef struct
{
    kal_uint8                           num;
    uas_measured_results_struct         element[UAS_MAX_MEASURED_RESULTS_NUM];
} uas_measured_results_list_struct;

typedef struct uas_cell_plmn_id_struct
{
    kal_uint16                      mcc;
    kal_uint16                      mnc;
} uas_cell_plmn_id_struct;

typedef struct
{
    kal_uint8                       is_LAC_valid;
    kal_uint16                     lac; 
    kal_uint8                       is_RAC_valid;
    kal_uint8                       rac; 
    kal_uint8                       num_plmn_id;
    uas_cell_plmn_id_struct         plmn_id_list[6];
} uas_cell_info_struct;

typedef struct
{
    kal_uint8                               num;
    uas_cell_info_struct        cell_info[UAS_MAX_CELL_MEASURED_RESULTS_NUM];
} uas_cell_info_list_struct;

typedef struct
{
    uas_cell_info_list_struct   cell_info_list;
} uas_cell_info_per_freq_struct;

/* Measurement results of most 3 different UARFCN's */
typedef struct
{
    kal_uint8                           num_freq;
    uas_cell_info_per_freq_struct         cell_info_per_freq[UAS_MAX_MEASURED_RESULTS_NUM];
} uas_cell_info_ext_struct;

/* WCDMA cell info */
typedef struct
{
    kal_uint16                          mcc;
    kal_uint16                          mnc;
    kal_uint32                          uc;
    kal_uint8                            freq_info_used;
    uas_freq_info_struct                freq_info;
    kal_uint8                            psc_used;
    kal_uint16                          psc;
    kal_uint8                            measured_results_list_used;
    uas_measured_results_list_struct    measured_results_list;

    // Extended information
    uas_cell_measured_results_mode_specific_info_struct serving_meas_result;
    uas_cell_info_struct                 serving_cell_ext_info;
    uas_cell_info_ext_struct            cell_info_ext_list;
} uas_nbr_cell_info_struct;

#endif
/*-----UAS cell info struct end-------------*/


// mtk02480
/*-----GAS cell info struct--------- */
typedef struct
{
    kal_uint16 arfcn;
    kal_uint8 bsic;
    kal_uint8 rxlev;
}gas_nbr_cell_meas_struct;

typedef struct
{
    kal_uint16 mcc;
    kal_uint16 mnc;
    kal_uint16 lac;
    kal_uint16 ci;
}global_cell_id_struct;

typedef struct
{
    kal_int8 nbr_meas_num;
    gas_nbr_cell_meas_struct nbr_cells[15];
}gas_nbr_meas_struct;


typedef struct
{
    global_cell_id_struct gci;
    kal_uint8 nbr_meas_rslt_index;
}gas_cell_info_struct;

#define GAS_MAX_MEASURED_CELL_NUM            6

typedef struct
{
    gas_cell_info_struct serv_info;
    kal_uint8 ta;
/* 091125 shuang CVM_PWR_LEV add for CVM network command power level*/
    kal_uint8 ordered_tx_pwr_lev;
    kal_uint8 nbr_cell_num;
    gas_cell_info_struct nbr_cell_info[GAS_MAX_MEASURED_CELL_NUM];
    gas_nbr_meas_struct nbr_meas_rslt;
}gas_nbr_cell_info_struct;

/*-----GAS cell info struct--end------- */

/*-----EAS cell info struct start-------------*/
#ifdef __LTE_RAT__

#define EAS_MAX_MEASURED_CELL_NUM            32

typedef struct
{ 
    EARFCN                              dl_freq;   
    kal_uint16                          pci;        //0~503
    kal_uint8                           rsrp;       //0~97
    kal_uint8                           rsrq;       //0~34
    
    kal_uint8                           is_cell_id_used;
    kal_uint32                          cell_id;    //0~0x0FFFFFFF
    kal_uint16                          mcc;        //0~999
    kal_uint16                          mnc;        //0~999
    kal_uint8                           is_2_digit_mnc; //ncell cell plmn is 2 digits or 3 digits    
    kal_uint16                          tac;        //0~65535
} eas_cell_measured_results_struct;

typedef struct
{
    kal_uint16 ta;
    kal_uint8 s_tag_id;
} eas_s_tag_ta_struct;

/* LTE cell info */
typedef struct 
{
    /* Serving cell info */
    kal_uint16                          mcc;            //0~999
    kal_uint16                          mnc;            //0~999
    kal_uint8                           is_2_digit_mnc; //serving cell plmn is 2 digits or 3 digits
    kal_uint32                          cell_id;        //0~0x0FFFFFFF
    EARFCN                              dl_freq;        
    kal_uint8                           ul_freq_used;   
    EARFCN                              ul_freq;        
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
    eas_cell_measured_results_struct    nbr_cell_list[EAS_MAX_MEASURED_CELL_NUM]; 

    /* Timing advance info for sTAG */
    eas_s_tag_ta_struct                 s_tag_ta;
    kal_bool                            s_tag_ta_is_valid;
} eas_nbr_cell_info_struct;
#endif /* __LTE_RAT__ */
/*-----EAS cell info struct end-------------*/

typedef union
{
    gas_nbr_cell_info_struct gas_nbr_cell_info;
#ifdef __UMTS_RAT__
    uas_nbr_cell_info_struct uas_nbr_cell_info;
#endif
#ifdef __LTE_RAT__
    eas_nbr_cell_info_struct eas_nbr_cell_info;
#endif
#if !defined(__UMTS_RAT__) && !defined(__LTE_RAT__)
    kal_uint32 dummy_padding;
#endif
}ps_nbr_cell_info_union_type;

typedef struct l4c_nbr_cell_info_reg_cnf_struct
{
    LOCAL_PARA_HDR
    kal_uint8 rat_mode;
    kal_uint8 is_nbr_info_valid;
    ps_nbr_cell_info_union_type ps_nbr_cell_info_union;
} l4c_nbr_cell_info_reg_cnf_struct,l4c_nbr_cell_info_ind_struct;

typedef enum
{
    GSM_NW_BAND_850       = 0x0001,
    GSM_NW_BAND_E_900     = 0x0002,
    GSM_NW_BAND_DCS_1800  = 0x0004,
    GSM_NW_BAND_PCS_1900  = 0x0008,
    GSM_NW_BAND_P_900     = 0x0010,
    GSM_NW_BAND_R_900     = 0x0020,
    GSM_NW_BAND_450       = 0x0040,
    GSM_NW_BAND_480       = 0x0080,
    GSM_INVALID_BAND      = 0xffff
}gsm_nw_band_enum;

typedef struct gas_nw_band_info_struct
{
    kal_uint16 serv_band;
    kal_uint16 nbr_band_list;             /* Band value mapped to gsm_nw_band_enum */

    kal_bool   umts_bands_valid;
    kal_uint16 umts_nbr_band_list[2];     /* Each bit in nbr_band_list represent the band. 
                                                 nbr_band_list[0] bit0 represents UMTS band1..  nbr_band_list[0] bit15 represents UMTS band16
                                                 nbr_band_list[1] bit0 represents UMTS band17.. nbr_band_list[1] bit5 represents UMTS band22.*/
    kal_bool   lte_bands_valid;
    kal_uint16 lte_nbr_band_list[16];     /* Each bit in lte_nbr_band_list represent the band. 
                                                 lte_nbr_band_list[0] bit0 represents LTE band1..  lte_nbr_band_list[0] bit15 represents LTE band16
                                                 lte_nbr_band_list[15] bit0 represents LTE band240.. lte_nbr_band_list[15] bit15 represents LTE band256.*/
}gas_nw_band_info_struct;

typedef struct uas_nw_band_info_struct
{
    kal_uint8  serv_band;                 /* Serving Band number */
    kal_uint16 nbr_band_list[2];          /* Each bit in nbr_band_list represent the band. 
                                                 nbr_band_list[0] bit0 represents UMTS band1..  nbr_band_list[0] bit15 represents UMTS band16
                                                 nbr_band_list[1] bit0 represents UMTS band17.. nbr_band_list[1] bit5 represents UMTS band22.*/
    kal_bool   lte_bands_valid;
    kal_uint16 lte_nbr_band_list[16];     /* Each bit in lte_nbr_band_list represent the band. 
                                                 lte_nbr_band_list[0] bit0 represents LTE band1..  lte_nbr_band_list[0] bit15 represents LTE band16
                                                 lte_nbr_band_list[15] bit0 represents LTE band240.. lte_nbr_band_list[15] bit15 represents LTE band256.*/
                                                                                       
    kal_bool   gsm_bands_valid;
    kal_uint16 gsm_nbr_band_list;         /* Band value mapped to gsm_nw_band_enum */
                                                                                       
                                                                                       
}uas_nw_band_info_struct;

typedef struct eas_nw_band_info_struct
{
    kal_uint16 serv_band;                 /* Serving Band number */
    kal_uint16 nbr_band_list[16];         /* Each bit in nbr_band_list represent the band. 
                                                 nbr_band_list[0] bit0 represents LTE band1..  nbr_band_list[0] bit15 represents LTE band16
                                                 nbr_band_list[15] bit0 represents LTE band240.. nbr_band_list[15] bit15 represents LTE band256.*/
    kal_bool   umts_bands_valid;
    kal_uint16 umts_nbr_band_list[2];     /* Each bit in nbr_band_list represent the band. 
                                                 nbr_band_list[0] bit0 represents UMTS band1..  nbr_band_list[0] bit15 represents UMTS band16
                                                 nbr_band_list[1] bit0 represents UMTS band17.. nbr_band_list[1] bit5 represents UMTS band22.*/    
    
    kal_bool   gsm_bands_valid;
    kal_uint16 gsm_nbr_band_list;         /* Band value mapped to gsm_nw_band_enum */
                                                                            
}eas_nw_band_info_struct;


typedef union
{
    gas_nw_band_info_struct gas_nw_band_info;
#ifdef __UMTS_RAT__
    uas_nw_band_info_struct uas_nw_band_info;
#endif
#ifdef __LTE_RAT__
    eas_nw_band_info_struct eas_nw_band_info;
#endif
#if !defined(__UMTS_RAT__) && !defined(__LTE_RAT__)
    kal_uint32 dummy_padding;
#endif
}ps_nw_band_info_union_type;

typedef struct l4c_nw_band_info_ind_struct
{
    kal_uint8 ref_count;
    kal_uint16 msg_len;
    kal_uint8 rat_mode;
    kal_uint8 is_nw_band_info_valid;
    ps_nw_band_info_union_type ps_nw_band_info_union;
} l4c_nw_band_info_ind_struct;

#ifdef __CHR_AB_INFO__

//Huawei Index8 requirement: Inidication of reason for Not moving to 4G.
typedef enum
{
    AS_EUTRA_INFO_NOT_AVAILABLE,               // LTE info not avaialble with AS to perform measurments.
    AS_EUTRA_CELL_NOT_FOUND,                   // LTE info avaialbel and triggered meansurements, but no LTE cell found.
    AS_EUTRA_RESEL_CRIT_NOT_MET,               // UE in idle and LTE measurments are going on, but cell reselection criterin not met.
    AS_CONN_MODE_NO_HO_CCO,                    // UE in connected and LTE measurments are going on, either event\periodical MR not sent or NW not redirecting to 4G.
    AS_LTE_RESEL_FAIL_S_CRI_NOT_MET,           // 4G resele failed due to s criteria not satisfied.
    AS_LTE_RESEL_FAIL_SIB_READ_ERROR,          // 4G resele failed due to sib reception failed.
    AS_LTE_RESEL_FAIL_CELL_BARRED,             // 4G resele failed due to cell is barred.
    AS_LTE_RESEL_FAIL_PLMN_MISMATCH,           // 4G resele failed due to target cell's PLMN doesn't match S/E PLMN.
    AS_LTE_RESEL_FAIL_FORBIDDEN_TA,            // 4G resele failed due to target cell is in forbidden tracking area.
    AS_3G4_HO_FAIL_PHYSICAL_CHANNEL_FAILURE,   // 3G to 4G HO fail due to physical channel failure.
    AS_3G4_HO_FAIL_FREQUENCY_NOT_IMPLEMENTED,  // 3G to 4G HO fail due to evalution fail.
    AS_3G4_HO_FAIL_PROTOCOL_ERROR,             // 3G to 4G HO fail due to inconsistent or missing parameters causing protocol error
    AS_3G4_HO_FAIL_UNSUPPORTED_CONFIGURATION,  // 3G to 4G HO fail due to predefined configuration not read or default configuration not implemented..
    AS_3G4_HO_FAIL_UNSPECIFIED_ERROR,          // 3G to 4G HO fail due to unspecified error.
    AS_LTE_CCO_FAIL_TARGET_CELL_REJECT,        // CCO to 4G failed due to target cell rejected the CCO procedure
    AS_LTE_CCO_FAIL_TARGET_CELL_NO_RESPONSE,   // CCO to 4G failed due to target cell no response.
    AS_LTE_CCO_FAIL_NAS_ABORT                  // CCO to 4G failed due to NAS abort
} as_reason_not_moving_to_lte_enum;

typedef enum
{
    NAS_LTE_CAUSE_NONE,                     //NO CAUSE
    NAS_NO_USIM,                            //NO USIM inserted
    NAS_LTE_CAPABILITY_NOT_SET,             //SET_RAT_MODE does not have LTE
    NAS_LTE_PS_DETACHED,                    //PS Attach is not requested
    NAS_LTE_CS_SERVICE_NOT_POSSIBLE,        //LTE cannot get CS normal service
    NAS_LTE_NORMAL_SERVICE_NOT_POSSIBLE,    //LTE cannot get normal service
    NAS_LTE_IRAT_FAILED,                    //IRAT failed to LTE
    NAS_LTE_HIGH_PRIO_PLMN_NOT_FOUND,       //LTE PLMN not found in HIGH_PRIORITY_SEARCH
    NAS_CS_CALL_ONGOING,                    //CS_CALL ongoing
    NAS_LTE_DISABLED,                       //EUTRAN capability is disabled for the current PLMN
    NAS_LTE_ENABLED_NEED_RESELECTION,       //EUTRAN is enabled, need AS to reselect
    NAS_LTE_PLMN_LOSS,                      //LTE cell lost
    NAS_LTE_PLMN_NOT_FOUND_DURING_SEARCH    //LTE PLMN not found during search
} nas_reason_not_moving_to_lte_enum;

typedef struct
{
    as_reason_not_moving_to_lte_enum    as_reason;  // AS reason for not moving to 4G.
    nas_reason_not_moving_to_lte_enum   nas_reason; // NAS reason for not moving to 4G.
} ps_reason_not_moving_to_lte_struct;
#endif /* __CHR_AB_INFO__ */

#endif /* _NBR_PUBLIC_STRUCT_H */
