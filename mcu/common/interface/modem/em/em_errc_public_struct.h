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
 *   em_errc_public_struct.h
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
 * removed!
 *
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


#ifndef _EM_ERRC_PUBLIC_STRUCT_H
#define _EM_ERRC_PUBLIC_STRUCT_H

#include "em_public_struct.h"
#include "em_as_common_public_struct.h"
#include "em_nwsel_common_public_struct.h"


/**************************************************************************
  * Here is the ERRC related EM definition
  *
  * Notes: ERRC structures is defined here
  * Michael: 2013/05/10:  Add ERRC EM related structures
  **************************************************************************/
  
   
  
/********************* begin of ERRC definition ****************************/



#define ERRC_MAX_EUTRA_RRC_MESSAGE_S_DATA_LEN (256)
#define ERRC_MAX_EUTRA_RRC_MESSAGE_M_DATA_LEN (512)
#define ERRC_MAX_EUTRA_RRC_MESSAGE_L_DATA_LEN (8192)

#define EM_ERRC_MAX_PLMN_ID_LIST 6
#define EM_ERRC_MAX_BAND_DIGIT_LEN 3

typedef struct
{
    EARFCN earfcn;
    kal_uint16 pci;
    kal_uint32 csg_id;
}em_errc_csg_info_struct;

#define EM_ERRC_MAX_AUTOS_CSG_CELL_NUM 10

typedef struct
{
    kal_uint8               num_cells;
    em_errc_csg_info_struct detected_csg_cell[EM_ERRC_MAX_AUTOS_CSG_CELL_NUM];
}em_errc_autos_info_struct;

typedef enum
{
    EM_ERRC_CARRS_TRIG_TYPE_NAS,
    EM_ERRC_CARRS_TRIG_TYPE_AS,
    EM_ERRC_CARRS_TRIG_TYPE_IRAT
}em_errc_carrs_trigger_type_enum;

typedef enum
{
    EM_ERRC_CARRS_TYPE_PLMN_LIST,
    EM_ERRC_CARRS_TYPE_CSG_LIST,
    EM_ERRC_CARRS_TYPE_FINGER_PRINT,
    EM_ERRC_CARRS_TYPE_MCC_LEARNING,
    EM_ERRC_CARRS_TYPE_BACKGROUND_SEARCH,
    EM_ERRC_CARRS_TYPE_AUTO_SEARCH,
    EM_ERRC_CARRS_TYPE_OOS
}em_errc_carrs_type_enum;

typedef struct
{
    em_errc_carrs_trigger_type_enum trigger_type;
    em_errc_carrs_type_enum         carrs_type;
}em_errc_carrs_event_struct;

typedef enum
{
    EM_ERRC_SIB_EVENT_3H_TIMEOUT,
    EM_ERRC_SIB_EVENT_SIB_MODIFY,
    EM_ERRC_SIB_EVENT_PWS
}em_errc_sib_event_enum;

typedef enum
{
    EM_ERRC_MOB_TYPE_CR,
    EM_ERRC_MOB_TYPE_REDT,
    EM_ERRC_MOB_TYPE_CCO,
    EM_ERRC_MOB_TYPE_HO,
    EM_ERRC_MOB_TYPE_REEST,
    EM_ERRC_MOB_TYPE_INTER_BAND_HO_CA2CA,
    EM_ERRC_MOB_TYPE_INTER_FREQ_HO_CA2CA,
    EM_ERRC_MOB_TYPE_INTRA_FREQ_HO_CA2CA
}em_errc_mob_type_enum;

typedef enum
{
    EM_ERRC_MOB_DIR_INTRA_LTE,
    EM_ERRC_MOB_DIR_TO_LTE,
    EM_ERRC_MOB_DIR_FROM_LTE
}em_errc_mob_dir_enum;

typedef struct
{
    em_errc_mob_type_enum           mob_type;
    em_errc_mob_dir_enum            mob_dir;
}em_errc_mob_event_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

}em_errc_mob_meas_info_ind_struct;

typedef enum
{
    EM_ERRC_RCM_SIM_STS_REMOVED,
    EM_ERRC_RCM_SIM_STS_INVALID_BY_NAS,
    EM_ERRC_RCM_SIM_STS_VALID
}em_errc_rcm_sim_sts_enum;

typedef enum
{
    EM_ERRC_SYS_SIB_RX_STS_IDLE,
    EM_ERRC_SYS_SIB_RX_STS_WAIT,
    EM_ERRC_SYS_SIB_RX_STS_CMPL,
    EM_ERRC_SYS_SIB_RX_STS_STORED
}em_errc_sys_sib_rx_sts_enum;

typedef struct
{
    kal_bool                    is_rxing;
    EARFCN                      earfcn;
    kal_uint16                  pci;
    em_errc_sys_sib_rx_sts_enum mib_rx_sts;
    em_errc_sys_sib_rx_sts_enum sib1_rx_sts;
    em_errc_sys_sib_rx_sts_enum sib2_rx_sts;
    em_errc_sys_sib_rx_sts_enum sib3_rx_sts;
    em_errc_sys_sib_rx_sts_enum sib4_rx_sts;
    em_errc_sys_sib_rx_sts_enum sib5_rx_sts;
    em_errc_sys_sib_rx_sts_enum sib6_rx_sts;
    em_errc_sys_sib_rx_sts_enum sib7_rx_sts;
// #ifdef __CDMA2000_RAT__
    em_errc_sys_sib_rx_sts_enum sib8_rx_sts;
// #endif /* __CDMA2000_RAT__ */
    em_errc_sys_sib_rx_sts_enum sib9_rx_sts;
    em_errc_sys_sib_rx_sts_enum sib10_rx_sts;
    em_errc_sys_sib_rx_sts_enum sib11_rx_sts;
    em_errc_sys_sib_rx_sts_enum sib12_rx_sts;
// #ifdef __LTE_R11__
    em_errc_sys_sib_rx_sts_enum sib13_rx_sts;
    em_errc_sys_sib_rx_sts_enum sib14_rx_sts;
    em_errc_sys_sib_rx_sts_enum sib15_rx_sts;
    em_errc_sys_sib_rx_sts_enum sib16_rx_sts;
// #endif /* __LTE_R11__ */
    em_errc_sys_sib_rx_sts_enum sib17_rx_sts;
}em_errc_sib_rx_info_struct;



typedef enum {
    EM_SYS_READ_STS_SUS  = 1,
    EM_SYS_READ_STS_FAIL = 2
} em_errc_sys_mibSibRead_sts_enum;


typedef enum {
    EM_ANTENNAPORTSCOUNT_NUM_1       = 0,
    EM_ANTENNAPORTSCOUNT_NUM_2       = 1,
    EM_ANTENNAPORTSCOUNT_NUM_4       = 2,
    EM_ANTENNAPORTSCOUNT_NUM_8       = 3,
    EM_ANTENNAPORTSCOUNT_NUM_INVALID   = 0xFF
} em_el1_antn_port_num_enum;

typedef enum {
    EM_BW_6_RB        = 0,
    EM_BW_15_RB       = 1,
    EM_BW_25_RB       = 2,
    EM_BW_50_RB       = 3,
    EM_BW_75_RB       = 4,
    EM_BW_100_RB      = 5,
    EM_BW_INVALID     = 0xFF
} em_el1_bandwidth_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_errc_sys_mibSibRead_sts_enum     read_sts_ind;
    kal_bool                            mib_Content_update_ind;
    kal_uint16                          pci;
    EARFCN                              earfcn;
    em_el1_antn_port_num_enum           antenna_port_num;
    em_el1_bandwidth_enum               dl_bandwith;
    kal_uint8                           systemInfoMsgNum;
    kal_uint32                          systemInfoMask;
    kal_uint32                          sibContent_mask;
}em_errc_sys_mib_sib_readevent_info_ind_struct;



/*MSG_ID_EM_ERRC_AUTOS_CSG_INFO_IND*/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    em_errc_autos_info_struct autos_info;
}em_errc_autos_csg_info_ind_struct;

/*MSG_ID_EM_ERRC_CARRS_EVENT_IND*/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    em_errc_carrs_event_struct carrs_evt;
}em_errc_carrs_event_ind_struct;


/*MSG_ID_EM_ERRC_SIB_EVENT_IND*/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    em_errc_sib_event_enum sib_evt;
}em_errc_sib_event_ind_struct;


/*MSG_ID_EM_ERRC_MOB_EVENT_IND*/
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    em_errc_mob_event_struct mob_evt;
}em_errc_mob_event_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_bool                     key_chg_ind;
    //kal_uint32                   ul_nas_cnt;
    kal_uint8                    ncc;
    kal_uint8                      int_algo;
    kal_uint8                      enc_algo;
    //kal_uint8                    smc_maci[4];
    //kal_uint8                    gen_maci[4];
    //kal_uint8                    short_maci[2];
    //kal_uint8                    kasme[32];
    //kal_uint8                    kenb[32];
}em_errc_sec_param_ind_struct;

typedef enum
{
    EM_HO_FROM_LTE_TYPE_PS_HO,
    EM_HO_FROM_LTE_TYPE_SRVCC_HO,     //4G to 2.3G
    EM_HO_FROM_LTE_TYPE_PS_SRVCC_HO,  //4G to 3G
    EM_HO_FROM_LTE_TYPE_CCO,         //CCO to 2G
    EM_HO_FROM_LTE_TYPE_INVLID
}em_ho_from_lte_type_enum;

typedef enum
{
  EM_MFROM_UMTS_CELL,
  EM_MFROM_GSM_CELL,
  EM_MFROM_LTE_CELL
}em_mform_rat_type_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_mform_rat_type_enum target_rat;
    em_ho_from_lte_type_enum ir_ho_type;
}em_errc_mfrom_info_ind_struct;

typedef enum
{
    EM_ERRC_HO_OTHER,
    EM_ERRC_HO_INVALIDCFG,
    EM_ERRC_HO_CPHY,
    EM_ERRC_HO_RACH,
    EM_ERRC_HO_RACHMEAS,
    EM_ERRC_HO_SUCCESS,
    EM_ERRC_HO_FAILURE
}em_errc_ho_type_enum;

typedef struct
{
    kal_uint16 pci;
    kal_uint32 earfcn;
    kal_int32  rsrp;
}em_errc_ho_target_cell_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_errc_ho_target_cell_info_struct targetcell;
    em_errc_ho_type_enum ho_result;
	  kal_uint8 ho_type;
	  kal_uint32 ho_attempt_count;
	  kal_uint32 ho_failure_count;
}em_errc_ho_event_ind_struct;

typedef enum
{
    EM_ERRC_CONN_RLF_CFG_FAILURE,
    EM_ERRC_CONN_RLF_HO_FAILURE,
    EM_ERRC_CONN_RLF_RACH_PROBLEM,
    EM_ERRC_CONN_RLF_MAX_RETRANSMISSION,
    EM_ERRC_CONN_RLF_IP_CHECK_FAILURE,
    EM_ERRC_CONN_RLF_SIB_READING_FAILURE,
    EM_ERRC_CONN_RLF_MIB_CHANGE,
    EM_ERRC_CONN_RLF_OTHER
}em_errc_rlf_event_enum;

typedef enum
{
    //KPI tool will print trace for rlf_causeother,so only add enum
    EM_ERRC_CONN_RLF_OTHER_NONE = 0,         // report rlf counter when rrc release
    EM_ERRC_CONN_RLF_OTHER_RLF = 1,          // EL1 timer timeout
    EM_ERRC_CONN_RLF_OTHER_MFROM = 2
}em_errc_rlf_other_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint8 rlf_counter;
    em_errc_rlf_event_enum rlf_cause;
    em_errc_rlf_other_enum rlf_causeother;
}em_errc_rlf_event_ind_struct;

typedef enum
{
    ERRC_REEST_CAUSE_LTE_HO_FAIL,
    ERRC_REEST_CAUSE_LTE_MFROM_FAIL,
    ERRC_REEST_RLC_ACK_TIMEOUT,
    ERRC_REEST_SIB_UPDT_FAIL,
    ERRC_REEST_CAUSE_L1_RLF,
    ERRC_REEST_CAUSE_MAC_RLF,
    ERRC_REEST_CAUSE_RLC_UL_MAX_RLF,
    ERRC_REEST_CAUSE_RLC_DL_MAX_RLF,
    ERRC_REEST_CAUSE_RLC_UL_DL_MAX_RLF,
    ERRC_REEST_CAUSE_INTECHK_FAIL,
    ERRC_REEST_CAUSE_RECONF_FAIL,
    ERRC_REEST_CAUSE_PDCP_RLF,
    ERRC_REEST_CAUSE_DISABLE_B39,
    ERRC_REEST_CAUSE_GENERAL,
    ERRC_REEST_CAUSE_VIRTUAL_CONNECTED_LEAVE_FAIL
}em_errc_reest_info_cause_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_errc_reest_info_cause_enum cause;
	kal_uint32 num_of_reest;
}em_errc_reest_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_bool is_ca_configured;
}em_errc_ca_info_ind_struct;

typedef enum
{
    EM_ERRC_POWERCLASS_INVALID,
    EM_ERRC_POWERCLASS_3,
    EM_ERRC_POWERCLASS_2
}em_errc_powerclass_type_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_errc_powerclass_type_enum powerclass;
}em_errc_el1_config_info_ind_struct;

typedef enum
{
    ERRC_NORMAL_RECONF,
    ERRC_INTRA_CEL_HO,
    ERRC_INTER_CEL_HO,
    ERRC_INTER_RAT_HO
}em_errc_reconf_info_type_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_errc_reconf_info_type_enum reconf_type;
    kal_bool                      is_cell_info_valid;
    EARFCN                        earfcn;
    kal_uint16                    pci;
    kal_uint16                    crnti;
    kal_uint32                    t311;
    kal_uint32                    t301;
    kal_uint32                    t304;
}em_errc_reconf_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    
    kal_uint8 em_reest_by_l2_cnt;
    em_errc_reest_info_cause_enum em_reest_by_l2_cause;
}em_errc_reest_by_l2_ind_struct;

typedef enum
{
    //This enum must be consistent with errc_procedure_id_enum
    EM_ERRC_PROC_EST,
    EM_ERRC_PROC_RECONF_RR_MEAS_CONFIG,
    EM_ERRC_PROC_RECONF_INTRALTEMOBILITY,
    EM_ERRC_PROC_REEST,
    EM_ERRC_PROC_INITIAL_SEC,
    EM_ERRC_UE_CAPABILITY,
    EM_ERRC_COUNTER_CHECK,
    EM_ERRC_UE_INFORMATION,
    EM_ERRC_PROC_IRAT_HO_FROM_LTE_TO_UMTS,
    EM_ERRC_PROC_IRAT_HO_FROM_LTE_TO_GSM,
    EM_ERRC_PROC_IRAT_CCO_FROM_LTE,
    EM_ERRC_PROC_IRAT_CR_FROM_LTE_TO_UMTS,
    EM_ERRC_PROC_IRAT_CR_FROM_LTE_TO_GSM,
    EM_ERRC_PROC_IRAT_REDIR_FROM_LTE_TO_UMTS,
    EM_ERRC_PROC_IRAT_REDIR_FROM_LTE_TO_GSM,
    EM_ERRC_PROC_IRAT_HO_TO_LTE,
    EM_ERRC_PROC_IRAT_CCO_TO_LTE,
    EM_ERRC_PROC_IRAT_CR_TO_LTE,
    EM_ERRC_PROC_IRAT_REDIR_TO_LTE,
    EM_ERRC_PROC_INTRA_REDIR,
    EM_ERRC_PROC_RECONF_SCELL_CONFIG,
    EM_ERRC_PROC_IRAT_CR_FROM_LTE_TO_CDMA2000,
    EM_ERRC_PROC_IRAT_REDIR_FROM_LTE_TO_CDMA2000,
    EM_ERRC_PROC_HSR_SNIFFER,
    EM_ERRC_PROC_HSR_RESEL,
    EM_ERRC_PROC_RETURN_HSR,
}em_errc_delay_proc_enum;

typedef struct
{
        LOCAL_PARA_HDR
    em_info_enum em_info;

    em_errc_delay_proc_enum delay_proc_id;
    kal_uint32              delay_time;
}em_errc_over_proc_delay_warning_ind_struct;


typedef enum
{
    EM_RAT_NONE,
    EM_RAT_LTE,
    EM_RAT_UMTS,
    EM_RAT_GSM
}em_rat_enum;

typedef struct
{
    EARFCN      earfcn;
    kal_uint16  pci;
}em_lte_cell_info_struct;

typedef struct
{
    em_rat_enum rat_type;
    union
    {
        em_lte_cell_info_struct lte_cell;
    } cell_inf;
}em_general_cell_info_struct;

typedef enum
{
    EM_ERRC_NEW_CELL_CAUSE_INVALID = 0x0,
    EM_ERRC_NEW_CELL_CAUSE_CELLSELECTION,
    EM_ERRC_NEW_CELL_CAUSE_CELLRESELECTION,
    EM_ERRC_NEW_CELL_CAUSE_HANDOVER,
    EM_ERRC_NEW_CELL_CAUSE_REDIRECTION
}em_errc_new_cell_cause_enum;

typedef enum
{
    EM_ERRC_NEW_CELL_STATUS_INVALID = 0x0,
    EM_ERRC_NEW_CELL_STATUS_SUITABLE,
    EM_ERRC_NEW_CELL_STATUS_ACCEPTABLE
}em_errc_new_cell_status_enum;

typedef enum
{
    EM_ERRC_SUCCESS_RATE_KPI_INTRA_LTE_CR,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_4G3_CR,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_4G2_CR,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_3G4_CR,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_2G4_CR,

    EM_ERRC_SUCCESS_RATE_KPI_INTRA_CELL_HO,
    EM_ERRC_SUCCESS_RATE_KPI_INTER_CELL_HO,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_4G3_HO,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_4G2_HO,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_3G4_HO,

    EM_ERRC_SUCCESS_RATE_KPI_LTE_FDD_TDD_CELL_HO,
    EM_ERRC_SUCCESS_RATE_KPI_LTE_TDD_FDD_CELL_HO,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_4GTDD_3G_HO,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_4GFDD_3G_HO,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_4GTDD_2G_HO,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_4GFDD_2G_HO,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_3G_4GFDD_HO,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_3G_4GTDD_HO,

    EM_ERRC_SUCCESS_RATE_KPI_INTRA_LTE_FDDTDD_CR,
    EM_ERRC_SUCCESS_RATE_KPI_INTRA_LTE_TDDFDD_CR,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_FDD4G3_CR,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_TDD4G3_CR,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_FDD4G2_CR,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_TDD4G2_CR,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_FDD3G4_CR,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_TDD3G4_CR,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_FDD2G4_CR,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_TDD2G4_CR,

    EM_ERRC_SUCCESS_RATE_KPI_INTRA_LTE_FDDTDD_REDIRECT,
    EM_ERRC_SUCCESS_RATE_KPI_INTRA_LTE_TDDFDD_REDIRECT,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_FDD4G3_R8_REDIRECT,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_FDD4G3_R9_REDIRECT,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_FDD4G3_R10_REDIRECT,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_TDD4G3_R8_REDIRECT,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_TDD4G3_R9_REDIRECT,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_TDD4G3_R10_REDIRECT,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_FDD4G2_R8_REDIRECT,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_FDD4G2_R9_REDIRECT,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_FDD4G2_R10_REDIRECT,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_TDD4G2_R8_REDIRECT,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_TDD4G2_R9_REDIRECT,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_TDD4G2_R10_REDIRECT,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_FDD3G4_REDIRECT,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_TDD3G4_REDIRECT,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_FDD2G4_REDIRECT,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_TDD2G4_REDIRECT,

    EM_ERRC_SUCCESS_RATE_KPI_IRAT_FDD3G4_AFR,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_TDD3G4_AFR,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_FDD2G4_AFR,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_TDD2G4_AFR,

    EM_ERRC_SUCCESS_RATE_KPI_IRAT_FDD3G4_BG_SRCH,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_TDD3G4_BG_SRCH,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_FDD2G4_BG_SRCH,
    EM_ERRC_SUCCESS_RATE_KPI_IRAT_TDD2G4_BG_SRCH,

    EM_ERRC_SUCCESS_RATE_KPI_IRAT_4G2_CCO,
    EM_ERRC_SUCCESS_RATE_KPI_INTRA_LTE_CELLSELECTION,
    EM_ERRC_SUCCESS_RATE_KPI_INTRA_LTE_REDIRECT

}em_errc_success_rate_kpi_proc_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_errc_success_rate_kpi_proc_enum proc_id;
    em_kpi_status_enum  status;
    kal_uint32  attempt;
    kal_uint32  success;
    em_kpi_failure_type_enum failure_type;
    em_errc_new_cell_cause_enum new_cell_cause;
    em_errc_new_cell_status_enum new_cell_status;

    kal_uint16 valid_bitmask;
#define EM_SUCC_RATE_KPI_FAILURE_TYPE_VALID  0x01
#define EM_SUCC_RATE_KPI_TARGET_CELL_VALID   0x02

    em_general_cell_info_struct target_cell;
}em_errc_success_rate_kpi_ind_struct;

typedef enum
{
    EM_ERRC_ON_DUARTION_PS1,
    EM_ERRC_ON_DUARTION_PS2,
    EM_ERRC_ON_DUARTION_PS3,
    EM_ERRC_ON_DUARTION_PS4,
    EM_ERRC_ON_DUARTION_PS5,
    EM_ERRC_ON_DUARTION_PS6,
    EM_ERRC_ON_DUARTION_PS8,
    EM_ERRC_ON_DUARTION_PS10,
    EM_ERRC_ON_DUARTION_PS20,
    EM_ERRC_ON_DUARTION_PS30,
    EM_ERRC_ON_DUARTION_PS40,
    EM_ERRC_ON_DUARTION_PS50,
    EM_ERRC_ON_DUARTION_PS60,
    EM_ERRC_ON_DUARTION_PS80,
    EM_ERRC_ON_DUARTION_PS100,
    EM_ERRC_ON_DUARTION_PS200,

    EM_ERRC_ON_DUARTION_INVALID = 0xFFFFFFFF,
}em_errc_on_duration_timer_enum;

typedef enum
{
    EM_ERRC_DRX_INACTIVITY_PS1,
    EM_ERRC_DRX_INACTIVITY_PS2,
    EM_ERRC_DRX_INACTIVITY_PS3,
    EM_ERRC_DRX_INACTIVITY_PS4,
    EM_ERRC_DRX_INACTIVITY_PS5,
    EM_ERRC_DRX_INACTIVITY_PS6,
    EM_ERRC_DRX_INACTIVITY_PS8,
    EM_ERRC_DRX_INACTIVITY_PS10,
    EM_ERRC_DRX_INACTIVITY_PS20,
    EM_ERRC_DRX_INACTIVITY_PS30,
    EM_ERRC_DRX_INACTIVITY_PS40,
    EM_ERRC_DRX_INACTIVITY_PS50,
    EM_ERRC_DRX_INACTIVITY_PS60,
    EM_ERRC_DRX_INACTIVITY_PS80,
    EM_ERRC_DRX_INACTIVITY_PS100,
    EM_ERRC_DRX_INACTIVITY_PS200,
    EM_ERRC_DRX_INACTIVITY_PS300,
    EM_ERRC_DRX_INACTIVITY_PS500,
    EM_ERRC_DRX_INACTIVITY_PS750,
    EM_ERRC_DRX_INACTIVITY_PS1280,
    EM_ERRC_DRX_INACTIVITY_PS1920,
    EM_ERRC_DRX_INACTIVITY_PS2560,
    EM_ERRC_DRX_INACTIVITY_PS0,

    EM_ERRC_DRX_INACTIVITY_INVALID = 0xFFFFFFFF,
}em_errc_drx_inactivity_timer_enum;

typedef enum
{
    EM_ERRC_DRX_RETX_TIMER_PS1,
    EM_ERRC_DRX_RETX_TIMER_PS2,
    EM_ERRC_DRX_RETX_TIMER_PS4,
    EM_ERRC_DRX_RETX_TIMER_PS6,
    EM_ERRC_DRX_RETX_TIMER_PS8,
    EM_ERRC_DRX_RETX_TIMER_PS16,
    EM_ERRC_DRX_RETX_TIMER_PS24,
    EM_ERRC_DRX_RETX_TIMER_PS33,
    EM_ERRC_DRX_RETX_TIMER_PS0,

    EM_ERRC_DRX_RETX_TIMER_INVALID = 0xFFFFFFFF,
}em_errc_drx_retx_timer_enum;

typedef enum
{
    EM_ERRC_LONG_DRX_CYCLE_10,
    EM_ERRC_LONG_DRX_CYCLE_20,
    EM_ERRC_LONG_DRX_CYCLE_32,
    EM_ERRC_LONG_DRX_CYCLE_40,
    EM_ERRC_LONG_DRX_CYCLE_64,
    EM_ERRC_LONG_DRX_CYCLE_80,
    EM_ERRC_LONG_DRX_CYCLE_128,
    EM_ERRC_LONG_DRX_CYCLE_160,
    EM_ERRC_LONG_DRX_CYCLE_256,
    EM_ERRC_LONG_DRX_CYCLE_320,
    EM_ERRC_LONG_DRX_CYCLE_512,
    EM_ERRC_LONG_DRX_CYCLE_640,
    EM_ERRC_LONG_DRX_CYCLE_1024,
    EM_ERRC_LONG_DRX_CYCLE_1280,
    EM_ERRC_LONG_DRX_CYCLE_2048,
    EM_ERRC_LONG_DRX_CYCLE_2560,
    EM_ERRC_LONG_DRX_CYCLE_60,
    EM_ERRC_LONG_DRX_CYCLE_70,

    EM_ERRC_LONG_DRX_CYCLE_INVALID = 0xFFFFFFFF,
}em_errc_long_drx_cycle_enum;

typedef enum
{
    EM_ERRC_SHORT_DRX_CYCLE_2,
    EM_ERRC_SHORT_DRX_CYCLE_5,
    EM_ERRC_SHORT_DRX_CYCLE_8,
    EM_ERRC_SHORT_DRX_CYCLE_10,
    EM_ERRC_SHORT_DRX_CYCLE_16,
    EM_ERRC_SHORT_DRX_CYCLE_20,
    EM_ERRC_SHORT_DRX_CYCLE_32,
    EM_ERRC_SHORT_DRX_CYCLE_40,
    EM_ERRC_SHORT_DRX_CYCLE_64,
    EM_ERRC_SHORT_DRX_CYCLE_80,
    EM_ERRC_SHORT_DRX_CYCLE_128,
    EM_ERRC_SHORT_DRX_CYCLE_160,
    EM_ERRC_SHORT_DRX_CYCLE_256,
    EM_ERRC_SHORT_DRX_CYCLE_320,
    EM_ERRC_SHORT_DRX_CYCLE_512,
    EM_ERRC_SHORT_DRX_CYCLE_640,
    EM_ERRC_SHORT_DRX_CYCLE_4,

    EM_ERRC_SHORT_DRX_CYCLE_INVALID = 0xFFFFFFFF,
}em_errc_short_drx_cycle_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_errc_on_duration_timer_enum on_duration_timer_index;
    em_errc_drx_inactivity_timer_enum drx_inactivity_timer_index;
    em_errc_drx_retx_timer_enum drx_retx_timer_index;
    em_errc_long_drx_cycle_enum long_drx_cycle_index;
    em_errc_short_drx_cycle_enum short_drx_cycle_index;
    kal_uint8 drx_short_cycle_timer; /* 1-16; invalid: 0xFF */
    kal_uint16 drx_start_offset; /* 0 - 2559; Invalid: 0xFFFF */
}em_errc_config_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

   em_errc_rcm_sim_sts_enum   sim_sts;
}em_errc_rcm_sim_sts_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

   em_errc_sib_rx_info_struct   sib_rx_info[4]; /*Serving BCCH, Neighbor BCCH1, Neighbor BCCH2, SCell BCCH*/
}em_errc_sys_sib_rx_sts_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    em_errc_state_enum errc_sts;
}em_errc_state_ind_struct;



typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_bool with_3g_neighbor;
    kal_bool with_2g_neighbor;
}em_errc_serv_ir_neighbor_info_ind_struct;

typedef enum
{
    EM_ERRC_EVENT_REDIR_FROM_LTE_TO_GSM_R8,
    EM_ERRC_EVENT_REDIR_FROM_LTE_TO_UMTS_R8,
    EM_ERRC_EVENT_REDIR_FROM_LTE_TO_GSM_R9_LATER,
    EM_ERRC_EVENT_REDIR_FROM_LTE_TO_UMTS_R9_LATER
}em_errc_ir_redir_event_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_errc_ir_redir_event_enum redir_event;
    kal_bool is_csfb_ongoing;
}em_errc_ir_redir_event_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_bool utran_meas_cfg;
    kal_bool geran_meas_cfg;
    kal_bool c2k_meas_cfg;
}em_errc_irat_meas_cfg_ind_struct;

typedef enum
{
    EM_ERRC_TIMER_T300,
    EM_ERRC_TIMER_T301,
    EM_ERRC_TIMER_T302,
    EM_ERRC_TIMER_T303,
    EM_ERRC_TIMER_T304,
    EM_ERRC_TIMER_T305,
    EM_ERRC_TIMER_T311,
    EM_ERRC_TIMER_T320,
    EM_ERRC_TIMER_T321,
    EM_ERRC_TIMER_OTHER
}em_errc_timer_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_errc_timer_enum  tmr_type;
}em_errc_timer_expiry_event_ind_struct;


/*MSG_ID_EM_ERRC_SERVING_INFO_IND*/

typedef enum
{
    EM_ERRC_DEFAULT_PAGING_CYCLE_32,
    EM_ERRC_DEFAULT_PAGING_CYCLE_64,
    EM_ERRC_DEFAULT_PAGING_CYCLE_128,
    EM_ERRC_DEFAULT_PAGING_CYCLE_256,
    EM_ERRC_DEFAULT_PAGING_CYCLE_INVALID = 0xFF
}em_errc_default_paging_cycle_enum;

typedef struct
{
    kal_uint8 mcc1;
    kal_uint8 mcc2;
    kal_uint8 mcc3;
    kal_uint8 mnc1;
    kal_uint8 mnc2;
    kal_uint8 mnc3;
} em_errc_plmnid_struct;

typedef struct
{
    kal_uint8                   plmnid_list_len;
    em_errc_plmnid_struct       plmnid_inf[EM_ERRC_MAX_PLMN_ID_LIST];
}em_errc_plmnid_list_struct;

typedef struct
{
    EARFCN    dl_earfcn;
    EARFCN    ul_earfcn;
    kal_uint16    pci;
    kal_uint32    cell_id;/*28 bits*/
    kal_uint16    ta_code;
    kal_uint16    dl_bandwidth; /*unit:100kHz*/
    kal_uint16    ul_bandwidth; /*unit:100kHz*/
    kal_bool      ims_emergency_supported;
    kal_bool      csg_ind;
    kal_uint32    csg_id;/* 27 bits, 0xFFFFFFFF means invalid*/
    kal_bool      high_speed_flg;
    em_errc_default_paging_cycle_enum  def_paging_cycle;
    kal_uint16    band;
    em_errc_plmnid_list_struct   plmnid_list;
}em_errc_serv_info_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_bool                  is_serving_inf_valid;
    em_errc_serv_info_struct  serv_inf;
}em_errc_serving_info_ind_struct;

typedef enum
{
    EM_ERRC_PAGING_FAIL_CAUSE_PDSCH_CRCNG
}em_errc_paging_fail_cause_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_errc_paging_fail_cause_enum cause;
}em_errc_paging_fail_ind_struct;

#define EM_SCELL_MAX_NUM    4

//#ifdef __LTE_R11__
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    EARFCN pcell_earfcn;
    kal_uint16 pcell_band;
    kal_uint16 pcell_pci;
    kal_uint8  pcell_bw;
    kal_uint8  unused[3];

    kal_bool   is_scell_configured[EM_SCELL_MAX_NUM];
    EARFCN scell_earfcn[EM_SCELL_MAX_NUM];
    kal_uint16 scell_band[EM_SCELL_MAX_NUM];
    kal_uint16 scell_pci[EM_SCELL_MAX_NUM];
    kal_uint8  scell_bw[EM_SCELL_MAX_NUM];
    kal_bool   scell_belongs_to_stag[EM_SCELL_MAX_NUM];
}em_errc_conn_info_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_lte_rrc_state_enum errc_state;
    em_lte_rrc_cause_enum errc_cause;

} em_lte_rrc_state_ind_struct;
//#endif

typedef enum
{
    EM_ERRC_SEARCHING_STATE_UNKNOWN,
    EM_ERRC_SEARCHING_STATE_IDLE,
    EM_ERRC_SEARCHING_STATE_CONNECTED,    
    EM_ERRC_SEARCHING_STATE_SEARCHING        
}em_errc_searching_state_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_errc_searching_state_enum state;
}em_errc_searching_state_ind_struct;

#define MOB_EM_UPDATE_MAX_INTRA_CELL_QUAN 16
#define MOB_EM_UPDATE_MAX_INTER_FREQ_QUAN 4
#define MOB_EM_UPDATE_MAX_INTER_FREQ_CELLS_QUAN 6
#define MOB_EM_UPDATE_MAX_IR_UTRAN_FREQ_QUAN 16
#define MOB_EM_UPDATE_MAX_IR_GERAN_CELL_QUAN 6
#define MOB_EM_UPDATE_MAX_IR_UTRAN_CELL_QUAN 6
#define MOB_EM_UPDATE_MAX_SCELL_QUAN 7

#define MOB_EM_UPDATE_MAX_IR_C2K_BAND_QUAN 5 /* C2K support band, our chip allow customer to select at most 5 band
                                              * from the following 7 band {BC0, BC1, BC4, BC6, BC10, BC14, BC15}
                                              * So LTE need to support 5 C2K band measurement at same time */
#define MOB_EM_UPDATE_MAX_IR_C2K_FREQ_QUAN 8 /* Align max freq number in MOB MRM/MIM table */
#define MOB_EM_UPDATE_MAX_IR_C2K_CELL_QUAN 40

typedef enum _errc_mob_em_spj_state_enum{
    MOB_EM_HIGH_MOBILITY,
    MOB_EM_MEDIUM_MOBILITY,
    MOB_EM_NORMAL_MOBILITY
}errc_mob_em_spj_state_enum;

typedef enum {
    MOB_EM_MEAS_BANDWIDTH_6_RB,
    MOB_EM_MEAS_BANDWIDTH_15_RB,
    MOB_EM_MEAS_BANDWIDTH_25_RB,
    MOB_EM_MEAS_BANDWIDTH_50_RB,
    MOB_EM_MEAS_BANDWIDTH_75_RB,
    MOB_EM_MEAS_BANDWIDTH_100_RB,
    MOB_EM_MEAS_BANDWIDTH_INVALID=0xFF
}errc_mob_em_bandwidth_enum;

typedef enum {
    MOB_EM_FDD,
    MOB_EM_TDD
}errc_mob_em_duplex_type_enum;

typedef struct _errc_mob_em_scell_info_struct{
    EARFCN earfcn;
    kal_uint16 pci;
    kal_int32 rsrp;
    kal_int32 rsrq;
    kal_int32 rs_snr_in_qdb;
    kal_uint16 serv_lte_band;
}errc_mob_em_scell_info_struct;

typedef struct _errc_mob_em_scell_info_list_struct{
    kal_uint8 num_scell;
    errc_mob_em_scell_info_struct scell_info[MOB_EM_UPDATE_MAX_SCELL_QUAN];
}errc_mob_em_scell_info_list_struct;

typedef struct _errc_mob_em_serving_info_struct{
    EARFCN earfcn;
    kal_uint16 pci;
    kal_int32 rsrp;
    kal_int32 rsrq;
    kal_int32 rs_snr_in_qdb;
    kal_uint16 serv_lte_band;
    errc_mob_em_spj_state_enum mobility_state;
    kal_uint8 S_intra_search_p;
    kal_uint8 S_intra_search_q;
    kal_uint8 S_nonintra_search_p;
    kal_uint8 S_nonintra_search_q;
    kal_uint8 thresh_serving_low_p;
    kal_uint8 thresh_serving_low_q;
    kal_uint8 tresel;
    errc_mob_em_bandwidth_enum DlBandwidth;
    errc_mob_em_bandwidth_enum UlBandwidth;
}errc_mob_em_serving_info_struct;

typedef struct _errc_mob_em_intrarat_intra_info_ecell_struct{
    kal_bool valid;
    kal_uint16 pci;
    kal_int32 rsrp;
    kal_int32 rsrq;
    kal_bool is_detected_cell;
    kal_bool is_barred_cell;
    kal_int16 rsrp0;
    kal_int16 rsrp1;
    kal_int16 rsrq0;
    kal_int16 rsrq1;
    kal_int16 rssi;
    kal_int16 rssi0;
    kal_int16 rssi1;
}errc_mob_em_intrarat_intra_info_ecell_struct;

typedef struct _errc_mob_em_intrarat_intra_info_struct{
    kal_int8 priority;
    errc_mob_em_bandwidth_enum bandwidth;
    kal_bool is_blacklist_present;
    kal_int16 pcomp;
    errc_mob_em_duplex_type_enum duplex_type;
    kal_uint8 subframe_nb;
    kal_uint16 frame_nb;
    kal_uint8 cell_num;
    errc_mob_em_intrarat_intra_info_ecell_struct intra_cell[MOB_EM_UPDATE_MAX_INTRA_CELL_QUAN];
}errc_mob_em_intrarat_intra_info_struct;

typedef struct _errc_mob_em_intrarat_inter_info_ecell_struct{
    kal_bool valid;
    kal_uint16 pci;
    kal_int32 rsrp;
    kal_int32 rsrq;
    kal_bool is_detected_cell;
    kal_bool is_barred_cell;
    kal_int16 rsrp0;
    kal_int16 rsrp1;
    kal_int16 rsrq0;
    kal_int16 rsrq1;
    kal_int16 rssi;
    kal_int16 rssi0;
    kal_int16 rssi1;
}errc_mob_em_intrarat_inter_info_ecell_struct;

typedef struct _errc_mob_em_intrarat_inter_info_inter_freq_struct{
    kal_bool valid;
    EARFCN earfcn;
    kal_int16 pcomp;
    kal_int8 priority;
    errc_mob_em_bandwidth_enum bandwidth;
    kal_bool is_blacklist_present;
    kal_uint8 treselection;
    kal_uint8 thresh_x_high_p;
    kal_uint8 thresh_x_high_q;
    kal_uint8 thresh_x_low_p;
    kal_uint8 thresh_x_low_q;
    errc_mob_em_duplex_type_enum duplex_type;
    kal_uint8 subframe_nb;
    kal_uint16 frame_nb;
    kal_uint8 cell_num;
    errc_mob_em_intrarat_inter_info_ecell_struct inter_cell[MOB_EM_UPDATE_MAX_INTER_FREQ_CELLS_QUAN];
    kal_uint16 band;
}errc_mob_em_intrarat_inter_info_inter_freq_struct;

typedef struct _errc_mob_em_intrarat_inter_info_struct{
    kal_uint8 freq_num;
    errc_mob_em_intrarat_inter_info_inter_freq_struct inter_freq[MOB_EM_UPDATE_MAX_INTER_FREQ_QUAN];
}errc_mob_em_intrarat_inter_info_struct;

typedef struct _errc_mob_em_intrarat_s_intra_info_s_intra_freq_struct{
    kal_bool valid;
    EARFCN earfcn;
    kal_int8 priority;
    errc_mob_em_bandwidth_enum bandwidth;
    kal_bool is_blacklist_present;
    kal_int16 pcomp;
    errc_mob_em_duplex_type_enum duplex_type;
    kal_uint8 subframe_nb;
    kal_uint16 frame_nb;
    kal_uint8 cell_num;
    errc_mob_em_intrarat_intra_info_ecell_struct s_intra_cell[MOB_EM_UPDATE_MAX_INTRA_CELL_QUAN];
}errc_mob_em_intrarat_s_intra_info_s_intra_freq_struct;

typedef struct _errc_mob_em_intrarat_s_intra_info_struct{
    kal_uint8 num_scell;
    errc_mob_em_intrarat_s_intra_info_s_intra_freq_struct s_intra_freq[MOB_EM_UPDATE_MAX_SCELL_QUAN];
}errc_mob_em_intrarat_s_intra_info_struct;

typedef struct _em_errc_mob_meas_intrarat_info_ind_struct{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    errc_mob_em_serving_info_struct serving_info;
    errc_mob_em_intrarat_intra_info_struct intra_info;
    errc_mob_em_intrarat_inter_info_struct inter_info;
    errc_mob_em_scell_info_list_struct scell_info_list;
    errc_mob_em_intrarat_s_intra_info_struct s_intra_info_list;
    kal_int8 SIB3_L2W; //SIB3:qrxlevmin*2+thresh_serving_low_p*2
    kal_uint8 ucpad;//AT&T requirement
}em_errc_mob_meas_intrarat_info_ind_struct;

typedef struct _em_errc_srvcc_bsic_info_ind_struct{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint16 arfcn;
    kal_uint8 bsic;
}em_errc_srvcc_bsic_info_ind_struct;

typedef struct _errc_mob_em_ir_geran_gcell_struct{
    kal_bool valid; /*only used in sorting the em result*/
    kal_int8 priority;
    kal_bool band_ind;
    kal_uint16 arfcn;
    kal_uint8 bsic;
    kal_int32 rssi;
    kal_uint8 thresh_x_high;
    kal_uint8 thresh_x_low;
}errc_mob_em_ir_geran_gcell_struct;

typedef struct _errc_mob_em_ir_utran_ucell_struct{
    kal_bool valid;
    kal_uint16 psc;
    kal_int32 rscp;
    kal_int32 ec_n0;
}errc_mob_em_ir_utran_ucell_struct;

typedef struct _errc_mob_em_ir_utran_freq_struct{
    kal_bool valid;
    kal_uint16 uarfcn;
    kal_int8 priority;
    kal_uint8 threshx_high_p;
    kal_uint8 threshx_high_q;
    kal_uint8 threshx_low_p;
    kal_uint8 threshx_low_q;
    kal_uint8 ucell_num;
    errc_mob_em_ir_utran_ucell_struct ucell[MOB_EM_UPDATE_MAX_IR_UTRAN_CELL_QUAN];
}errc_mob_em_ir_utran_freq_struct;

typedef struct
{
    kal_uint16 pn;
    kal_int16 phase;
    kal_uint8 strength;
}errc_mob_em_ir_c2k_cell_struct;

typedef struct
{
   kal_bool valid;
   kal_uint16 channel;
   kal_bool is_search_win_size_valid;
   kal_uint8 search_win_size;
   kal_uint8 num_pn;
   errc_mob_em_ir_c2k_cell_struct pn_list[MOB_EM_UPDATE_MAX_IR_C2K_CELL_QUAN];
}errc_mob_em_ir_c2k_freq_struct;

typedef struct
{
    kal_bool valid;
    kal_uint8 band;
    kal_int8 prio;
    kal_uint8 threshx_high;
    kal_uint8 threshx_low;
    kal_uint8 freq_num;
    errc_mob_em_ir_c2k_freq_struct freq[MOB_EM_UPDATE_MAX_IR_C2K_FREQ_QUAN];
}errc_mob_em_ir_c2k_band_struct;

typedef struct _em_errc_mob_meas_interrat_geran_info_ind_struct{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 total_gcell_num;
    errc_mob_em_ir_geran_gcell_struct gcell[MOB_EM_UPDATE_MAX_IR_GERAN_CELL_QUAN];
}em_errc_mob_meas_interrat_geran_info_ind_struct;

typedef struct _em_errc_mob_meas_interrat_utran_info_ind_struct{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 freq_num;
    errc_mob_em_ir_utran_freq_struct inter_freq[MOB_EM_UPDATE_MAX_IR_UTRAN_FREQ_QUAN];
}em_errc_mob_meas_interrat_utran_info_ind_struct;

typedef struct _em_errc_mob_meas_interrat_c2k_info_ind_struct{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 band_num;
    errc_mob_em_ir_c2k_band_struct band_list[MOB_EM_UPDATE_MAX_IR_C2K_BAND_QUAN];
}em_errc_mob_meas_interrat_c2k_info_ind_struct;


typedef enum
{
    EM_ERRC_MOB_EVENT_TYPE_B_INVALID,
    EM_ERRC_MOB_EVENT_TYPE_B_1,
    EM_ERRC_MOB_EVENT_TYPE_B_2
} MobEmInfoEventTypeB;

typedef enum
{
    EM_ERRC_MOB_MEAS_QTY_INVALID,
    EM_ERRC_MOB_MEAS_QTY_RSRP,
    EM_ERRC_MOB_MEAS_QTY_RSRQ
} MobEmMeasQty;

typedef enum
{
    EM_ERRC_MOB_MEAS_QTY_FOR_OTHER_RAT_INVALID,
    EM_ERRC_MOB_MEAS_QTY_GSM_RSSI,
    EM_ERRC_MOB_MEAS_QTY_UTRA_RSCP,
    EM_ERRC_MOB_MEAS_QTY_UTRA_ECN0
} MobEmMeasQtyForOtherRAT;

typedef struct {
    kal_uint8   MeasId;
    MobEmInfoEventTypeB   EventType;
    MobEmMeasQty MeasQty;
    MobEmMeasQtyForOtherRAT MeasQtyOtherRAT;
    kal_uint8   fc_OtherSys;
    kal_uint8   fc_OwnSys;
    kal_int16   ThresholdOwnSystem;
    kal_int16   ThresholdOtherSystem;
    kal_uint8   Hystersis;
    kal_uint16  TimeToTrigger;
} event_B_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint8 num_event_info;
    event_B_struct em_event_info[8];
} em_errc_mob_meas_config_info_ind_struct;


typedef struct {
    kal_uint8   MeasId;
    MobEmInfoEventTypeB   EventType;
} em_errc_mob_report_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    em_errc_mob_report_struct em_report_info;
}em_errc_mob_meas_report_info_ind_struct;


typedef enum
{
    ERRC_FEAT_MFBI_PRIORITIZATION,
    ERRC_FEAT_AC_BAR_SKIP_MMTEL_VOICE,
    ERRC_FEAT_AC_BAR_SKIP_MMTEL_VIDEO,
    ERRC_FEAT_AC_BAR_SKIP_SMS,
    ERRC_FEAT_PLMN_SPECIFIC_AC_BAR,
    ERRC_FEAT_PLMN_SPECIFIC_SSAC,
    ERRC_FEAT_RRC_CONN_TEMP_FAIL_OFFSET,
    ERRC_FEAT_INCMON_EUTRA,
    ERRC_FEAT_INCMON_UTRA,
    ERRC_FEAT_CELL_SPECIFIC_TTT,
    ERRC_FEAT_FAST_RLF_REC_WITH_T312,
    ERRC_FEAT_RSRQ_LOWER_VALUE_RANGE_EXT,
    ERRC_FEAT_ENH_HARQ_TTI_BUND_FOR_FDD,
    ERRC_FEAT_LOG_CH_SR_PROHIBIT_TIMER,
    ERRC_FEAT_MOB_HIST_REPORTING,
    ERRC_FEAT_SHORTER_MCH_SCHED_PERIOD,
    ERRC_FEAT_IDC_ENH_FOR_UL_CA,
    ERRC_FEAT_LOGGED_MDT,
    ERRC_FEAT_IMMED_MDT,
    ERRC_FEAT_EICIC_SF_PATTERN,
    ERRC_FEAT_EICIC_DEDICATED_SIB1,
    ERRC_FEAT_MBSFN_AREA_DETECTED,
    ERRC_FEAT_UL_64QAM_DETECTED,
    ERRC_FEAT_EAB_DETECTED,
    ERRC_FEAT_DL_256QAM,
    ERRC_FEAT_4G_BAND,
    ERRC_FEAT_OOS_CAUSE,
    ERRC_FEAT_LTE_INTER_FREQ_RESEL,
    ERRC_FEAT_LTE_FDD_TDD_RESEL,
    ERRC_FEAT_LTE_FDD_TDD_REDIRECT,
    ERRC_FEAT_4G3_CSFB_REDIRECT,
    ERRC_FEAT_4G2_CSFB_REDIRECT,
    ERRC_FEAT_IMS_ECC_SUPPORT,
    ERRC_FEAT_SON_ANR,
	ERRC_FEAT_PINGPONG_DETECTED,
	ERRC_FEAT_ADD_BLACKLISTED_CELL	
}em_errc_feat_enum;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_errc_feat_enum detected_feature;
}em_errc_feature_detection_ind_struct;

typedef enum
{
    EM_ERRC_LTE_RRC_MSG_CLASS_BCCH_BCH,
    EM_ERRC_LTE_RRC_MSG_CLASS_BCCH_DL_SCH,
    EM_ERRC_LTE_RRC_MSG_CLASS_MCCH,
    EM_ERRC_LTE_RRC_MSG_CLASS_PCCH,
    EM_ERRC_LTE_RRC_MSG_CLASS_DL_CCCH,
    EM_ERRC_LTE_RRC_MSG_CLASS_DL_DCCH,
    EM_ERRC_LTE_RRC_MSG_CLASS_UL_CCCH,
    EM_ERRC_LTE_RRC_MSG_CLASS_UL_DCCH,
    EM_ERRC_LTE_RRC_MSG_CLASS_END = 0x7fffffff //end tag force this enum 4 bytes, for alignment purpose. Don't remove
} em_errc_msg_class_enum;

typedef enum
{
    /* BCCH-BCH-Message */
    EM_ERRC_LTE_RRC_BCCH_BCH_MSG_MASTER_INFO_BLK,
    /* BCCH-DL-SCH-Message */
    EM_ERRC_LTE_RRC_BCCH_DL_SCH_MSG_SYS_INFO,
    EM_ERRC_LTE_RRC_BCCH_DL_SCH_MSG_SYS_INFO_BLK_TYPE1,
    /* MCCH-Message */
    EM_ERRC_LTE_RRC_MCCH_MSG_MBSFN_AREA_CFG,
    EM_ERRC_LTE_RRC_MCCH_MSG_MBMS_COUNTING_REQ,
    /* PCCH-Message */
    EM_ERRC_LTE_RRC_PCCH_MSG_PAGING,
    /* DL-CCCH-Message */
    EM_ERRC_LTE_RRC_DL_CCCH_MSG_RRC_CONN_REEST,
    EM_ERRC_LTE_RRC_DL_CCCH_MSG_RRC_CONN_REEST_REJ,
    EM_ERRC_LTE_RRC_DL_CCCH_MSG_RRC_CONN_REJ,
    EM_ERRC_LTE_RRC_DL_CCCH_MSG_RRC_CONN_SETUP,
    /* DL-DCCH-Message */
    EM_ERRC_LTE_RRC_DL_DCCH_MSG_CSFB_PARAM_RESP,
    EM_ERRC_LTE_RRC_DL_DCCH_MSG_DL_INFO_TRANSFER,
    EM_ERRC_LTE_RRC_DL_DCCH_MSG_HO_FROM_EUTRA_REQ,
    EM_ERRC_LTE_RRC_DL_DCCH_MSG_MOB_FROM_EUTRA_CMD,
    EM_ERRC_LTE_RRC_DL_DCCH_MSG_RRC_CONN_RECFG,
    EM_ERRC_LTE_RRC_DL_DCCH_MSG_RRC_CONN_REL,
    EM_ERRC_LTE_RRC_DL_DCCH_MSG_SECURE_MODE_CMD,
    EM_ERRC_LTE_RRC_DL_DCCH_MSG_UE_CAP_ENQ,
    EM_ERRC_LTE_RRC_DL_DCCH_MSG_CNTR_CHECK,
    EM_ERRC_LTE_RRC_DL_DCCH_MSG_UEINFO_REQ,
    EM_ERRC_LTE_RRC_DL_DCCH_MSG_LOGGED_MEAS_CFG,
    EM_ERRC_LTE_RRC_DL_DCCH_MSG_RN_RECFG,
    /* UL-CCCH-Message */
    EM_ERRC_LTE_RRC_UL_CCCH_MSG_RRC_CONN_REEST_REQ,
    EM_ERRC_LTE_RRC_UL_CCCH_MSG_RRC_CONN_REQ,
    /* UL-DCCH-Message */
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_CSFB_PARAM_REQ,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_MEAS_REPORT,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_RRC_CONN_RECFG_CMP,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_RRC_CONN_REEST_CMP,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_RRC_CONN_SETUP_CMP,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_SECURE_MODE_CMP,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_SECURE_MODE_FAIL,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_UE_CAP_INFO,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_HO_PREP_TXR,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_INFO_TXR,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_CNTR_CHK_RESP,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_UEINFO_RESP,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_PROX_IND,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_RN_RECFG_CMP,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_MBMS_COUNTING_RESP,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_INTER_FREQ_RSTD_MEAS_IND,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_UEA_INFO,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_IDC_IND,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_MII,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_SCG_FAIL_INFO,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_SL_UEINFO,
    EM_ERRC_LTE_RRC_UL_DCCH_MSG_WLAN_CONN_STS_REPORT,
    EM_ERRC_LTE_RRC_MSG_TYPE_END = 0x7fffffff //end tag force this enum 4 bytes, for alignment purpose. Don't remove
} em_errc_msg_type_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_errc_msg_class_enum msg_class;
    em_errc_msg_type_enum msg_type;
    kal_uint32 raw_data_len;
    kal_uint8 raw_data[ERRC_MAX_EUTRA_RRC_MESSAGE_S_DATA_LEN];
}em_errc_eutra_rrc_message_s_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_errc_msg_class_enum msg_class;
    em_errc_msg_type_enum msg_type;
    kal_uint32 raw_data_len;
    kal_uint8 raw_data[ERRC_MAX_EUTRA_RRC_MESSAGE_M_DATA_LEN];
}em_errc_eutra_rrc_message_m_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    em_errc_msg_class_enum msg_class;
    em_errc_msg_type_enum msg_type;
    kal_uint32 raw_data_len;
    kal_uint8 raw_data[ERRC_MAX_EUTRA_RRC_MESSAGE_L_DATA_LEN];
}em_errc_eutra_rrc_message_l_ind_struct;



typedef struct
{
   LOCAL_PARA_HDR
   em_info_enum em_info;
}em_errc_abnormal_event_logging_test_ind_struct;

/* MSG_ID_EM_LTE_SUPPORTED_BAND_INFO_IND */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint16   num_supported_band;
    kal_uint16   supported_band[256];
}em_lte_supported_band_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint32   lte_band_time[256];
}em_errc_lte_band_time_ind_struct;

typedef struct
{
    kal_uint32    earfcn;
    kal_uint16    pci;
    kal_uint32    cell_id;
    kal_int32     rsrp;
    kal_int32     rsrq;
}em_errc_srvcc_cell_info_pcell_struct;

typedef enum
{
	EM_ERRC_NOT_IN_SRVCC_DURATION                = 0,
	EM_ERRC_SRVCC_FAIL_THRESHOLD_NOT_PASS        = 1,
	EM_ERRC_SRVCC_BSIC_DECODE_FAIL               = 2,
	EM_ERRC_SRVCC_FAIL_TTT_NOT_PASS              = 3,
	EM_ERRC_SRVCC_FAIL_TTT_RECOUNT               = 4,
	EM_ERRC_SRVCC_FAIL_MEAS_RPT_SEND_FAIL        = 5,
	EM_ERRC_SRVCC_FAIL_MEAS_RPTE_NO_RESPONSE     = 6
}em_errc_srvcc_fail_type_enum;

typedef struct
{
	kal_uint16    psc;
	kal_int32     rsrp;
	kal_int32     ec_no;
}em_errc_srvcc_cell_info_ucell_struct; 

typedef struct
{
	kal_uint8                                meas_id;
	em_errc_srvcc_fail_type_enum             cause;
	kal_uint32                               uarfcn;
	kal_uint8                                utran_cell_num;
	em_errc_srvcc_cell_info_ucell_struct     utran_cell_list[8];
}em_errc_srvcc_rpt_utran_struct;

typedef struct
{
	kal_uint16    arfcn;
    kal_bool      band_ind;
	kal_uint8     bsic;
	kal_int32     rssi;
}em_errc_srvcc_cell_info_gcell_struct;

typedef struct
{
	kal_uint8                               meas_id;
	em_errc_srvcc_fail_type_enum            cause;
	kal_uint8                               geran_cell_num;
	em_errc_srvcc_cell_info_gcell_struct    geran_cell_list[8];
}em_errc_srvcc_rpt_geran_struct;


typedef struct
{
	LOCAL_PARA_HDR
	em_info_enum em_info;
	
	em_errc_srvcc_cell_info_pcell_struct    serving_info;
	kal_uint8                               utran_rpt_num;
	em_errc_srvcc_rpt_utran_struct          utran_rpt_list[8];
	kal_uint8                               geran_rpt_num;
	em_errc_srvcc_rpt_geran_struct          geran_rpt_list[8];
}em_errc_srvcc_cell_info_ind_struct;

typedef enum
{
	EM_ERRC_SRVCC_FAIL_CAUSE_NONE                      = 0,
    EM_ERRC_SRVCC_FAIL_CAUSE_FREQUENCY_NOT_IMPLEMENTED = 1,
    EM_ERRC_SRVCC_FAIL_CAUSE_PHYSICAL_CHANNEL_FAILURE  = 2,
    EM_ERRC_SRVCC_FAIL_CAUSE_PROTOCOL_ERROR            = 3,
    EM_ERRC_SRVCC_FAIL_CAUSE_UNSUPPORTED_CONFIGURATION = 4,
    EM_ERRC_SRVCC_FAIL_CAUSE_UNSPICIFIED_ERROR         = 5
}em_errc_srvcc_fail_event_cause_enum;

typedef enum
{
	EM_ERRC_SRVCC_PHY_FAIL_SUBCAUSE_NONE                  = 0,
    EM_ERRC_SRVCC_PHY_FAIL_SUBCAUSE_TIME_ADV_OUT_OF_RANGE = 1,
    EM_ERRC_SRVCC_PHY_FAIL_SUBCAUSE_N200_TIMEOUT          = 2,
    EM_ERRC_SRVCC_PHY_FAIL_SUBCAUSE_T3124_TIMEOUT         = 3,
    EM_ERRC_SRVCC_PHY_FAIL_SUBCAUSE_CONTENTION_RES_FAIL   = 4,
    EM_ERRC_SRVCC_PHY_FAIL_SUBCAUSE_OTHER                 = 5
}em_errc_srvcc_phy_fail_subcause_enum;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
	
    kal_bool      gcell_exist;
    kal_uint16    gcell_arfcn;
    kal_bool      ucell_exist;
    kal_uint32    ucell_uarfcn;
    kal_uint16    ucell_psc;
    em_errc_srvcc_cell_info_pcell_struct    serving_info;
    em_errc_srvcc_fail_event_cause_enum     fail_cause;
    em_errc_srvcc_phy_fail_subcause_enum    phy_fail_subcause;
}em_errc_srvcc_ho_fail_event_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint32   oos_counter;
} em_errc_oos_event_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    EARFCN earfcn;
    kal_uint16 pci;
} em_errc_cell_black_list_event_ind_struct;

/* typedef enum
{
    EM_ERRC_CONN_FAIL_NONE         = 0,
    EM_ERRC_CONN_FAIL_T300_TIMEOUT = 1,
    EM_ERRC_CONN_FAIL_CONN_REJECT  = 2,
    EM_ERRC_CONN_FAIL_EMM_REL      = 3
    
}em_errc_conn_fail_cause_enum;  */ /* Add if asked by Customer */

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
 
    //em_errc_conn_fail_cause_enum fail_cause;  /* Add if asked by Customer */
    kal_uint32 conn_failure_count;
} em_errc_connectfail_info_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;

    kal_uint32 rrc_connect_time;
} em_errc_connecttime_info_ind_struct;

/********************* end of ERRC definition ****************************/

#endif /* _EM_ERRC_PUBLIC_STRUCT_H */

