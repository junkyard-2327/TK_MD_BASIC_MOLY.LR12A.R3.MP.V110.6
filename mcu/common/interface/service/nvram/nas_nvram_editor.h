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
 * 
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 * 
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *
 * removed!
 *
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __NAS_NVRAM_EDITOR_H__
#define __NAS_NVRAM_EDITOR_H__


#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "nas_nvram_def.h"

typedef struct
{
	kal_uint8  mcc1;
	kal_uint8  mcc2;
	kal_uint8  mcc3;
	kal_uint8  mnc1;
	kal_uint8  mnc2;
	kal_uint8  mnc3;
}nvram_plmn_id_struct;

typedef enum{
    NVRAM_EF_RAT_NONE     = 0,
    NVRAM_EF_RAT_GSM      = 1,
    NVRAM_EF_RAT_UMTS     = 2,
    NVRAM_EF_RAT_GSM_UMTS = 3,
    NVRAM_EF_RAT_LTE      = 4,
    NVRAM_EF_RAT_GSM_LTE  = NVRAM_EF_RAT_GSM | NVRAM_EF_RAT_LTE,
    NVRAM_EF_RAT_UMTS_LTE = NVRAM_EF_RAT_UMTS | NVRAM_EF_RAT_LTE,
    NVRAM_EF_RAT_GSM_UMTS_LTE = NVRAM_EF_RAT_GSM | NVRAM_EF_RAT_UMTS | NVRAM_EF_RAT_LTE
}nvram_rat_enum;

/* shall be the same as rat enum
typedef enum{
    RAT_NONE     = 0,
    RAT_GSM      = 1,
    RAT_UMTS     = 2,
    RAT_GSM_UMTS = 3,
    RAT_LTE      = 4,
    RAT_GSM_LTE  = RAT_GSM | RAT_LTE,
    RAT_UMTS_LTE = RAT_UMTS | RAT_LTE,
    RAT_GSM_UMTS_LTE = RAT_GSM | RAT_UMTS | RAT_LTE
}rat_enum;
*/

typedef struct
{
    nvram_plmn_id_struct plmn_id;
    nvram_rat_enum rat;
}nvram_plmn_id_rat_struct;

/* shall be the same as gmss_rat_enum */
typedef enum
{
    RAT_CDMA2000_ALL   = 0,    /* All 3GPP2 access technology */
    RAT_3GPP_ALL       = 1,    /* All 3GPP access technology */
    RAT_CDMA2000_1xRTT = 2,    /* CDMA2000 1xRTT */
    RAT_CDMA2000_HRPD  = 3,    /* CDMA2000 HRPD (1xEV-DO) */
    RAT_GERAN          = 4,    /* GSM */
    RAT_UTRAN          = 5,    /* UMTS */
    RAT_EUTRAN         = 6,    /* LTE */
    RAT_INVALID        = 7     /* Invalid RAT */
} nvram_gmss_rat_enum;

typedef enum
{
    NVRAM_PRIO_CLASS_NONE         = 0x00,    /* No priority class */
    NVRAM_PRIO_CLASS_RPLMN        = 0x01,    /* Priority class RPLMN. Only for 3GPP */
    NVRAM_PRIO_CLASS_HOME         = 0x02,    /* Priority class Home */
    NVRAM_PRIO_CLASS_R_H          = 0x03,    /* 0011 =  3 */
    NVRAM_PRIO_CLASS_PREF         = 0x04,    /* Priority class Home + Preferred */
    NVRAM_PRIO_CLASS_R_P          = 0x05,    /* 0101 =  5 */
    NVRAM_PRIO_CLASS_H_P          = 0x06,    /* 0110 =  6 */
    NVRAM_PRIO_CLASS_R_H_P        = 0x07,    /* 0111 =  7 */
    NVRAM_PRIO_CLASS_NOT_PREFERRED= 0x08,    /* Priority class Any */
    NVRAM_PRIO_CLASS_R_NP         = 0x09,    /* 1001 =  9 */
    NVRAM_PRIO_CLASS_H_NP         = 0x0A,    /* 1010 = 10 */
    NVRAM_PRIO_CLASS_R_H_NP       = 0x0B,    /* 1011 = 11 */
    NVRAM_PRIO_CLASS_P_NP         = 0x0C,    /* 1100 = 12 */
    NVRAM_PRIO_CLASS_R_P_NP       = 0x0D,    /* 1101 = 13 */
    NVRAM_PRIO_CLASS_H_P_NP       = 0x0E,    /* 1110 = 14 */
    NVRAM_PRIO_CLASS_R_H_P_NP     = 0x0F,    /* 1111 = 15 */
    NVRAM_PRIO_CLASS_LIMITED      = 0x10     /* Priority class limited. Only for 3GPP */

} nvram_prio_class_enum;

/* Should be the same as gmss_mru_struct */
typedef struct
{
    /* nas_proc_enum */
    kal_uint8            mm_proc;
    /* lr_result_enum */
    kal_uint8            lr_result;
    /* counter for how many times get the same registration result */
    kal_uint8            reg_counter;
    /* mm_cause_enum, only valid for reject cause */
    kal_uint16           lr_cause;
    /* seconds since 00:00 hours, Jan 1, 1970 UTC */
    kal_uint32           time;
    /* one eplmn that might only be assigned in one RAT, valid for accept result */
    nvram_plmn_id_struct eplmn;
    /* gsm_state_enum */
    kal_uint8            gsm_attach_state;
    /* gprs_state_enum or eps_state_enum*/
    kal_uint8            gprs_attach_state;    
}nvram_proc_record_struct;

typedef struct
{
    kal_uint8 ef_imsi[NVRAM_MAX_IMSI_LEN];
    nvram_plmn_id_struct plmn_id;
    nvram_proc_record_struct rat_status[3];
}nvram_histoy_table_entry_struct;

typedef struct
{
    kal_uint8 num_of_history_table_entry;
    nvram_histoy_table_entry_struct table[NWSEL_HISTORY_TABLE_SIZE];
}nvram_histoy_table_struct;

/* This is a bitmask, each bit represents a GMSS feature which can be turn on/off during test */
typedef enum{
    GMSS_TEST_MODE_ENFORCE_3GPP_ANY_SEARCH_IN_HOME = 1, /* Indicate if enforce add 3GPP_ANY in MSPL list in Home country */
    GMSS_TEST_MODE_ENFORCE_3GPP_ANY_SEARCH_IN_NON_HOME = 2, /* Indicate if enforce add 3GPP_ANY in MSPL list in Non-home country */
    GMSS_TEST_MODE_ENABLE_EXTENDED_MSPL_SEARCH = 4, /* Indicate if enable extended MSPL search */
    GMSS_TEST_MODE_C2K_ONLY_SEARCH_OPTIMIZATION = 8,
} gmss_test_mode_enum;

typedef struct
{
    nvram_gmss_rat_enum rat;
    nvram_plmn_id_struct loc;
    nvram_prio_class_enum prio_class;

} nvram_gmss_mru_info_struct;

/* Structure for LTE Not Available 1x cell info.
*/
typedef struct{
    kal_uint16 sid;  /* 1x sytem id  */
    kal_uint16 nid;  /* 1x network id */
    kal_uint16 bsid; /* 1x base station id */
} gmss_lte_unavail_sys_struct;

/* Structure for item in LTE Available File.
*/
typedef struct{
  gmss_lte_unavail_sys_struct sys;   /* 1x system information */
  kal_uint8  lte_unavail_count;  /* fail counter for LTE unavail */
  kal_uint8  lte_avail_count;  /* success counter for LTE */
} gmss_lte_unavail_item_struct;

typedef struct
{
    nvram_gmss_mru_info_struct gmss_mru_info;
    kal_uint8 umts_duplex_mode;
    kal_uint8 lte_duplex_mode;
    mmss_nv_list_struct mmss_nv_lists_arr[ MMSS_LIST_MAX ];
    kal_uint32 scan_duration;
    kal_uint32 sleep_duration;
    kal_uint32 mpsr_duration;
    gmss_test_mode_enum  gmss_test_mode;
    nvram_plmn_id_struct vzw_lab_test_plmn;
    kal_uint8  tele_mpsr_mode;/* 0: parameter, 1: array */
    kal_uint8  tele_mpsr_repeat_counter; /* valid when tele_mpsr_mode is 0, how many times in each mpsr stage */
    kal_uint8  tele_mpsr_multiplier; /* valid when tele_mpsr_mode is 0, how much multiplier shall use between two stages */
    kal_uint8  tele_mpsr_max_stage; /* valid when tele_mpsr_mode is 0, how many increasing  mpsr stages will be perfromed */
    kal_uint32 tele_mpsr_nv_arr[GMSS_TELE_MPSR_TABLE_SIZE]; /* valid when tele_mpsr_mode is 1, describe how much timer in each mpsr timer starts */
    kal_uint32 mpsr_max_duration;
    kal_uint32 long_mpsr_duration; /* NextLTEScan for Sprint requirement, 0: Not apply long mpsr, 0xffffffff: Use default value by SBP OP ID  */
    kal_uint8 lte_unavail_max_count;
    kal_uint8 lte_unavail_rate_threshold;
    kal_uint16 lte_unavail_db_num;
    gmss_lte_unavail_item_struct lte_unavail_db[ GMSS_NV_ITEM_LTE_AVAIL_MAX ];
} nvram_gmss_data_struct;

typedef struct
{
    kal_uint32 plmn_barring_value;
} nvram_nwsel_data_struct;

typedef struct {
    nvram_plmn_id_struct plmn;
    nvram_rat_enum rat;
    kal_uint8 ara_start[2];
    kal_uint8 ara_end[2];
}aral_update_req_struct;

typedef struct
{
    nvram_rat_enum rplmn_rat;
    kal_uint8 num_of_eq_plmn;
    nvram_plmn_id_struct eq_plmn[EF_MAX_NUM_EQ_PLMN];
    nvram_plmn_id_rat_struct csg_previous_rplmn;
    kal_uint32 csg_id;
    kal_uint32 recovery_timer_interval[MAX_RECOVERY_TIMER_NUM];
    kal_uint8 ue_oplmn_ver[2];
    kal_uint16 no_oplmn_entry;
    kal_uint8 oplmn_data[MAX_UE_OPLMN_ENTRY*5];
    kal_uint16 no_fplmn_entry;
    kal_uint8 fplmn_data[MAX_CUSTOM_FPLMN_ENTRY*5];
    nvram_histoy_table_struct history_table;
    kal_uint64 last_t3245_end_time;
    nvram_plmn_id_struct stored_rplmn;
    kal_bool is_init;
    nvram_nwsel_data_struct nwsel_data;
    nvram_gmss_data_struct gmss_data;
    aral_update_req_struct aral_data[NWSEL_ALAL_NUM];
} nvram_ef_nwsel_data_struct;


#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_NWSEL_DATA_LID
* DESCRIPTION
*      This is a NWSEL DATA LID. It contains the 3GPP and 3GPP2 NW search related contexts and registration result related contexts 
*      which need to be retained after power cycled.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: 1. registration is done 2. EPLMN is updated 3. Power off
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_NWSEL_DATA_LID)
    nvram_ef_nwsel_data_struct* NVRAM_EF_NWSEL_DATA_TOTAL
    {
        rplmn_rat:"RPLMN RAT"{};
        num_of_eq_plmn:"EPLMN total number"{};
        eq_plmn:"EPLMN[16]"{};
        csg_previous_rplmn:"CSG previoud RPLMN ID and RAT"{};
        csg_id:"Manually selected CSG ID"{};
        recovery_timer_interval:"recovery timer interval[19]"{};
        ue_oplmn_ver:"custom OPLMN version number"{};
        no_oplmn_entry:"custom OPLMN total number"{};
        oplmn_data:"custom OPLMN context"{};
        no_fplmn_entry:"custom FPLMN total number"{};
        fplmn_data:"custom FPLMN context"{};
        history_table:"registration history table"{};
        last_t3245_end_time:"Last T3245 end time"{};
        stored_rplmn: "RPLMN to be used for enhancement"{};
        is_init: "reserved"{};

        nwsel_data:"NWSEL data"{};
        nwsel_data.plmn_barring_value:"T_PLMN_barring timer value"{};

        /* GMSS */
        gmss_data:"GMSS data"{};
        gmss_data.gmss_mru_info:"Obsoleted"{};
        gmss_data.umts_duplex_mode:""
        {
           umts_duplex_mode:8 "UMTS duplex mode"
           {
               0x0: "WCDMA";
               0x1: "TD-SCDMA";
           };
        };
        gmss_data.lte_duplex_mode:""
        {
           lte_duplex_mode:8 "LTE duplex mode"
           {
               0x0: "FDD";
               0x1: "TDD";
               0x2: "FDD_TDD";
           };
        };       
        gmss_data.mmss_nv_lists_arr:"MRU/RAL list"{};
        gmss_data.scan_duration:"GMSS scan timer length"{};
        gmss_data.sleep_duration:"GMSS sleep timer length"{};
        gmss_data.mpsr_duration:"GMSS MPSR timer length"{};
        gmss_data.gmss_test_mode:""
        {
            gmss_test_mode:8 "GMSS supported feature for test"
            {
                0x1: "Enforce add 3GPP_ANY in MSPL list in Home country";
                0x2: "Enforce add 3GPP_ANY in MSPL list in Non-home country";
                0x4: "Enable extended MSPL search";
                0x8: "Skip LTE search in C2K only area";   
            };
        };
 
        gmss_data.lte_unavail_max_count:"Upper limit of LTE unavailable times in one location"{};
        gmss_data.lte_unavail_db_num:"Number of stored LTE unavailable location"{};
 
        gmss_data.lte_unavail_db:"Stored LTE unavailable location information"{};
 
        aral_data:"Allowable Registration Area List[4]"{};
    }; 

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_STATIC_APPLMN_LID
* DESCRIPTION
*      This is a static APPLMN LID.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: None
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_STATIC_APPLMN_LID)
     nvram_ef_static_applmn_struct * NVRAM_EF_STATIC_APPLMN_TOTAL
     {
     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_DYNAMIC_APPLMN_LID
* DESCRIPTION
*      This is a dynamic APPLMN LID.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: None
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_DYNAMIC_APPLMN_LID)
     nvram_ef_dynamic_applmn_struct * NVRAM_EF_DYNAMIC_APPLMN_TOTAL
     {
     };


/********************************************************************************************
* LID_NAME
*      NVRAM_EF_AUX_PLMN_LID
* DESCRIPTION
*      This is a AUX APPLMN LID.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: 1. AT+AUXPLMN
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_AUX_PLMN_LID)
     nvram_ef_aux_plmn_struct * NVRAM_EF_AUX_PLMN_TOTAL
     {
     };

LID_BIT VER_LID(NVRAM_EF_DDS_INFO_LID)
	nvram_ef_dds_info_struct * NVRAM_EF_DDS_INFO_TOTAL 
    {
    };

END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __NAS_NVRAM_EDITOR_H__ */
