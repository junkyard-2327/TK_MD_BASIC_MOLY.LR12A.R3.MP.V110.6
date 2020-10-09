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
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __L4_NVRAM_EDITOR_H__
#define __L4_NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT
#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */ 

#include "l4_nvram_def.h"
#include "nas_nvram_editor.h"
#include "custom_sml.h"

// Data Structure of Each LID
typedef struct
{
    kal_uint32 total_rx_data;
    kal_uint32 total_tx_data;
    kal_uint32 last_rx_data;
    kal_uint32 last_tx_data;
} nvram_ef_tcm_statistics_struct;

#ifdef __CCM_NO_RESET__
typedef struct
{
    kal_uint8 als_line_id[2];
    kal_uint8 last_ccm[4];
} nvram_ef_als_line_id_struct;
#else
typedef struct
{
	kal_uint8 als_line_id[2];
}nvram_ef_als_line_id_struct;
#endif


typedef struct
{
    kal_uint8 byte1;
    kal_uint8 byte2;
    kal_uint8 byte3;
    kal_uint8 byte4;
    kal_uint16 byte5_byte6;
    kal_uint8 byte7;
    kal_uint8 byte8;
    kal_uint8 byte9;
    kal_uint8 byte10;
    kal_uint8 byte11;
    kal_uint8 byte12;
    kal_uint8 byte13;
    kal_uint8 byte14;
    kal_uint8 byte15;
    kal_uint8 byte16;
    kal_uint8 byte17;
    kal_uint8 byte18;
    kal_uint8 byte19;
    kal_uint8 byte20;
    kal_uint8 byte21;
    kal_uint8 byte22;
    kal_uint8 byte23;
} nvram_ef_classmark_racap_struct;

typedef struct
{
    kal_uint8 cfu_flag;
} nvram_ef_cfu_flag_struct;

typedef struct
{
    kal_uint8 cfu_flag[NVRAM_EF_CSM_ESSP_SIZE];
} nvram_ef_csm_essp_struct;

typedef struct
{
    kal_uint8 message_waiting_indication_status[5];
    kal_uint8 pad;
} nvram_ef_smsal_mwis_struct;

typedef struct
{
    kal_uint8 speech_version;
    kal_uint8 speech_version_byte2;
    kal_uint8 fdd_umts_supported_speech;
    kal_uint8 fdd_umts_supported_speech_byte2;
    kal_uint8 data_cap1; /*second byte for GSM supported speech codec*/
    kal_uint8 data_cap2; /*first byte for UMTS supported speech codec*/
    kal_uint8 channel_coding; /*second byte for UMTS supported speech codec*/
    kal_uint8 disable_call; /*customer utilize nvram value to disable call*/
    kal_uint8 rr_cap; /* Customized random L2 fill bit and VAMOS support level */
    kal_uint8 mm_non_drx_timer_value; /* Customized mm_non_drx_timer value*/
    kal_uint8 tdd_umts_supported_speech;
    kal_uint8 tdd_umts_supported_speech_byte2;
} nvram_ef_mscap_struct;

typedef struct
{
    kal_uint16 cbmi_mask;
    kal_uint16 cbmir_mask;
    kal_uint16 dcs_mask;
} nvram_ef_cb_mask_struct;

typedef struct _nvram_ef_cb_ch_info_struct
{
    kal_uint8   cbmir_mask[4];      // = (SMSAL_CB_MAX_ENTRY+7)/8
    kal_uint8   cbmir_me_mask[4];   // = (SMSAL_CB_MAX_ENTRY+7)/8

    kal_uint8   dcs_mask[4];        // = (SMSAL_CB_MAX_ENTRY+7)/8
    kal_uint16  dcs[30];            // = SMSAL_CB_MAX_ENTRY

    kal_uint8   cbmi_me_mask[5];    // = (SMSAL_CBMI_ME_ENTRY+7)/8
    kal_uint8   cbmi_sim_mask[3];   // = (SMSAL_CBMI_SIM_ENTRY+7)/8
    kal_uint16  cbmi[40];           // = SMSAL_CBMI_ME_ENTRY
    kal_uint16  cbmir[60];          // = SMSAL_CB_MAX_ENTRY*2
} nvram_ef_cb_ch_info_struct;

#define ATCMD_CHECK_ENABLE 0xF1F1F1F1

/* For AT command no/off check */
typedef struct {
    kal_uint32  magic_head[4];
    kal_uint32  enable_flag;
    kal_uint32 magic_tail[3];
} atcmd_check_context_struct;
typedef atcmd_check_context_struct nvram_atcmd_check_context_struct;

extern const nvram_atcmd_check_context_struct NVRAM_EF_ATCMD_ONOFF_CHECK_DEFAULT;

typedef struct {
    kal_uint8 etws_setting;
} nvram_ef_etws_setting_struct;

#if defined (__PS_SERVICE__) && defined (__MOD_TCM__)
 typedef struct
 {
     kal_uint8 context_id;
 
     kal_uint8 pdp_addr_type;
     kal_uint8 pdp_addr_len;
     kal_uint8 addr_val[MAX_PDP_ADDR_LEN];
 
     kal_uint8 apn_len;
     kal_uint8 apn[100];
     kal_uint8 pcomp_algo;
     kal_uint8 dcomp_algo;
 
     kal_uint8 context_type;
     kal_uint8 primary_context_id;
     kal_uint16 req_n201u; //erica 20070112
 
     kal_uint8 at_definition; /* AT_definition */
     kal_uint8 p_cscf_discovery;         //R10
     kal_uint8 im_cn_signalling_flag;    //R10
     kal_uint8 request_type;             //R12
     //kal_uint8 reserved2;
 
     kal_uint8 nas_priority_config;
     kal_uint8 eab_override_config;
     kal_uint8 initial_attach; /* for C2K IRAT */
 } nvram_ef_tcm_PDP_profile_record_struct;
#endif // ~ #if defined (__PS_SERVICE__) && defined (__MOD_TCM__)

typedef struct
{
    kal_uint8					 change_rat_mode_lte_only_for_lte_capable_ps;				/* True: LTE only operator SIM will set RAT mode as LTE only on LTE support PS */
    kal_uint8					 only_limited_camping_for_non_lte_capable_ps;	  /* True: LTE only operator SIM should be in limted service for NON-LTE support PS */
} nvram_ef_lte_only_oper_sim_customization_struct ;

 #ifdef __PS_SERVICE__
/************************************************************
 * ATTENTION: If below define/struct are changed,           *
 * do increment NVRAM_EF_PAM_PIB_PROFILE_LID_VERNO as well! *
 ************************************************************/
#define NVRAM_EF_PAM_PIB_ENTRY_PLMN_ID_LEN 6
#define NVRAM_EF_PAM_PIB_ENTRY_APN_LEN 100      /* PAM_MAX_APN_LEN */
#define NVRAM_EF_PAM_PIB_ENTRY_NUM 32           /* Restrictions: (1) CCCI max. transfer size: 32K (2) Ctrl buff max. size in 2G project: 4K */

typedef struct
{
    /* Identifies for each block. */
    kal_uint8 plmn_id[NVRAM_EF_PAM_PIB_ENTRY_PLMN_ID_LEN] ; /* plmn_id_struct */
    kal_uint8 apn_len ;
    kal_uint8 apn[NVRAM_EF_PAM_PIB_ENTRY_APN_LEN] ;

    /* Rejection info */
    kal_uint8 pam_cause ; /* Add PAM_CAUSE_START before used in PAM */
    kal_uint8 reject_rat ;

    /* T3396 info */
    nas_priority_config_enum T3396_applied_for_priority ;
    kal_bool T3396_is_apn_deactivated ;
    kal_uint32 T3396_timestamp ;

    /* Throttling timer */
    kal_uint32 vzw_timer_len;
    kal_uint32 vzw_throttle_timestamp;
} nvram_ef_pam_pib_entry_struct ; /* pam_pib_struct */

typedef struct
{
    kal_uint32 pib_count ;
    nvram_ef_pam_pib_entry_struct pib_entry[NVRAM_EF_PAM_PIB_ENTRY_NUM] ;
} nvram_ef_pam_pib_profile_struct ;
#endif /* __PS_SERVICE__ */

typedef struct
{
    kal_uint8 imei[8];
    kal_uint8 svn;
    kal_uint8 pad;
} nvram_ef_imei_imeisv_struct;

#if !defined(__L1_STANDALONE__)
typedef struct
{
#if 1 /* MODEM only*/
#if 0//__BK_LIGHT_20LEVEL_SUPPORT__
/* under construction !*/
#else
    kal_uint32 PWM1[5][2];  /* freq, duty */
#endif
    kal_uint32 PWM2[5][2];  /* freq, duty */
    kal_uint32 PWM3[5][2];  /* freq, duty */
#if defined(__MULTI_LEVEL_BACKLIGHT_SUPPORT__)
    kal_uint32 BacklightLevel[20][2];
#endif
    kal_uint32 MainLCD_Contrast[15];
    kal_uint32 MainLCD_Bias[5];
    kal_uint32 MainLCD_Linerate[5];
    kal_uint32 MainLCD_Temp[5];
    kal_uint32 SubLCD_Contrast[15];
    kal_uint32 SubLCD_Bias[5];
    kal_uint32 SubLCD_Linerate[5];
    kal_uint32 SubLCD_Temp[5];
    kal_uint32 BatteryLevel[10];
    kal_uint32 PMIC6318BLPWM[5][2];  /* freq, duty */
#else
/* under construction !*/
#endif /* MODEM only*/
} custom_hw_level_struct;

typedef struct
{
    kal_uint8 me_manufacture_id[MAX_ME_ID_NUM][MAX_ME_ID_LEN];
} uem_context_manufacture_struct;

typedef struct
{
    kal_uint8 text_length;
    kal_uint8 text_dcs;
    kal_uint8 text[UEM_GREETING_LEN];
} rmi_greeting_text_struct;

typedef struct
{

    kal_uint8 audio_mute_flag;  /* AUDIO_DEVICE_SPEAKER,... */

    kal_uint8 gpio_status[MAX_GPIO_DEVICE_NUM];
    kal_uint8 silent_mode;

    kal_uint8 alert_mode;

    kal_uint8 country_code;
    kal_uint8 lang_id[2];

    kal_uint8 date_mode;
    kal_uint8 time_mode;

    kal_uint8 greeting_mode;
    rmi_greeting_text_struct greeting_text;

    rtc_alarm_info_struct alarm_info[MAX_ALARM_NUM];
} uem_context_rmi_struct;
#endif


/*----------------------------------------------------------------------------*/
/* L4 Start: Please put L4 NVRAM info here                                    */
/*----------------------------------------------------------------------------*/



/*------------------------------------------------------------*/
/* L4PHB-CallLog Start                                        */
/*------------------------------------------------------------*/

/* Can not wrap compile option as it's used by other L4 modules such as ATcmd */
#ifndef L4_NOT_PRESENT

typedef struct
{
    kal_uint8 alpha_id[62];
    kal_uint8 BCD_length;
    kal_uint8 TON_NPI;
    kal_uint8 DialNum[20];
    kal_uint8 cc_ident;
    kal_uint8 pad;
} nvram_ef_phb_struct;

typedef struct
{
    kal_uint8 name_length;
    kal_uint8 name_dcs;
    kal_uint8 name[PHB_LN_NAME_SIZE];
    kal_uint8 count;
    kal_uint8 addr_length;
    rtc_format_struct time;
    kal_uint8 addr_type;   /* voice call or voip call */
    kal_uint8 addr_bcd[PHB_LN_NUM_SIZE];
    kal_uint8 accu_times;        /* for accumulated times */
    kal_uint8 is_new_event; /* for is a new event */
    kal_uint8 adn_record_index; /* for padding */
    kal_int32 call_duration;
} phb_ln_entry_struct;

typedef struct
{
    kal_uint8 no_entry;
    kal_uint8 padding1;
    kal_uint8 padding2;
    kal_uint8 padding3;
    phb_ln_entry_struct array[NVRAM_EF_PHB_LN_SIZE];
} nvram_ef_phb_ln_struct;

typedef struct
{
    kal_uint8 type_seq[NVRAM_EF_PHB_LN_TYPE_SEQ_SIZE];
} nvram_ef_phb_ln_type_seq_struct;
/*------------------------------------------------------------*/
/* L4PHB-CallLog End                                          */
/*------------------------------------------------------------*/

typedef struct
{
#ifdef __MAX_MAILBOX_NAME_UPDATA_TO_30__
    kal_uint8 alpha_id[30];
#else
    kal_uint8 alpha_id[10];
#endif
    kal_uint8 BCD_length;
    kal_uint8 TON_NPI;
    kal_uint8 DialNum[20];
    kal_uint8 cc_ident;
    kal_uint8 pad;
} nvram_ef_smsal_mailbox_addr_struct;

typedef struct
{
    kal_uint8 status;
    kal_uint8 remainder[183];
} nvram_ef_smsal_sms_struct;

typedef struct
{
    kal_uint8 profile_name[12]; /* store alpha-identifier */
    kal_uint8 para_ind;         /* Parameter Indicator */
    kal_uint8 da[12];           /* Destination Address */
    kal_uint8 sca[12];          /* Service Centre Address */
    kal_uint8 pid;              /* Protocol identifier */
    kal_uint8 dcs;              /* Data coding scheme */
    kal_uint8 vp;               /* Validity period */
} nvram_ef_smsal_smsp_struct;

typedef struct _nvram_smsal_common_param_struct
{
    kal_uint8 bearer_service;
    kal_uint8 status_report;
    kal_uint8 reply_path;
    kal_uint8 vp_format;
    kal_uint8 prefer_mem1;
    kal_uint8 prefer_mem2;
    kal_uint8 prefer_mem3;
    kal_uint8 cbch_req;
    kal_uint8 all_lang_on;
    kal_uint8 rmi_act_pfile_id;
    kal_uint8 fo;
    kal_uint8 sms_fdn_off;
    kal_uint8 last_used_tp_mr;
    kal_uint8 mem_capacity_available;
    kal_uint8 selected_msp;
    kal_uint8 reserve;
} nvram_ef_smsal_common_param_struct;

typedef struct
{
    kal_uint16 cbmi[10];
} nvram_ef_cb_default_ch_struct;

#endif  /* L4_NOT_PRESENT */

typedef  struct
{
    kal_uint8 data[NVRAM_EF_PS_CONFORMANCE_TESTMODE_SIZE];
} nvram_ef_ps_conformance_testmode_struct;

typedef struct
{
    kal_uint32 context_id;
    kal_uint8  context_type;        //None, Internet, Vpn, Voice, VideoShare, Custom
    kal_uint8  access_string[100];
    kal_uint8  user_name[32];
    kal_uint8  pass_word[32];
    kal_uint8  compression;         //None, Enable
    kal_uint8  auth_type;           //None, Pap, Chap, MsChapV2
    kal_uint8  plmn_in_digit[7];    //Ex. '4','6','6','9','2','\0'
    kal_uint16 status;              //0: empty, 1: occupied
} nvram_ef_mobile_broadband_provision_context_struct; //__MOBILE_BROADBAND_PROVISION_CONTEXT__


/** __MEDIATEK_SMART_QOS__:
 *  Macro defines for MSQ
 */
#define MSQ_PLMN_ID_LEN         7       /* Length of a plmn_id. */
#define MSQ_MAX_ENTRY_COUNT     100     /* Number of MSQ entry supported in MSQ list. */
                                        /* !Caution: Also need to adjust NVRAM_EF_MSQ_LID_VERNO when it is changed. */

/** __MEDIATEK_SMART_QOS__:
 *  Elements of each entry in MSQ list
 */
typedef struct
{
    kal_uint8   entry_id ;                    /* Range: 1 ~ MSQ_MAX_ENTRY_COUNT  */
    kal_uint8   plmn_id[MSQ_PLMN_ID_LEN] ;    /* PLMN ID: 5 ~ 6 digits, plus a nul-terminator in tail. */
    kal_uint8   check_nw ;                    /* True: Check plmn_id[] against the current NW's PLMN ID. */
    kal_uint8   check_sim ;                   /* True: Check plmn_id[] against the current SIM's PLMN ID. */
    kal_uint8   qos_mode;                     /* 0: Use R6 QoS, 1: Use R8 QoS, 2: Use R11 QoS */
} nvram_ef_msq_entry_struct ;

/** __MEDIATEK_SMART_QOS__
 *  The MSQ list
 */
typedef struct
{
    kal_uint8                   is_msq_on ;     /* True: Use R6 QOS if the current PLMN (NW/SIM) is on MSQ list. */
    kal_uint8                   padding ;   /* padding to cover data alignment problems. */
    nvram_ef_msq_entry_struct   msq_entry[MSQ_MAX_ENTRY_COUNT] ;
} nvram_ef_msq_list_struct ;

/*****************************
 * SIC: SM IE Configurations *
 *****************************/
typedef enum
{
    SIC_CHECK_NONE = 0,
    SIC_CHECK_NW_ONLY = 1,
    SIC_CHECK_SIM_ONLY = 2,
    SIC_CHECK_SIM_OR_NW = 3
} nvram_ef_sic_check_enum ;

typedef enum
{
    SIC_RESULT_NONE = 0, /* Don't care. Use default setting. */

    SIC_RESULT_QOS_R6,
    SIC_RESULT_QOS_R8,
    SIC_RESULT_QOS_R11,

    SIC_RESULT_PDNREQTYPE_NOT_CARRY,
    SIC_RESULT_PDNREQTYPE_CAN_CARRY,

    SIC_RESULT_V4ADDRALLOC_NONE,
    SIC_RESULT_V4ADDRALLOC_VIA_NASSIG,
    SIC_RESULT_V4ADDRALLOC_VIA_DHCPV4,

    SIC_RESULT_V4REQ_NONE,
    SIC_RESULT_V4REQ_DNSV4,
    SIC_RESULT_V4REQ_MTUV4,
    SIC_RESULT_V4REQ_BOTH_DNSV4_MTUV4,

    SIC_RESULT_BCMETFT_NONE,
    SIC_RESULT_BCMETFT_BCM,
    SIC_RESULT_BCMETFT_ETFT,
    SIC_RESULT_BCMETFT_BOTH_BCM_ETFT,

    /* Add before the last enum */
    SIC_RESULT_TOTAL
} nvram_ef_sic_result_enum ;

typedef struct
{
    nvram_ef_sic_check_enum check ;
    nvram_ef_sic_result_enum result ;
} nvram_ef_sic_rule_struct ;

/* Format: <sim-plmn-id>,<rat>,<qos>,<pdn-req-type>,<v4addr-alloc>,<v4-req>,<bcm-etft> */
#define SIC_MAX_PLMN_ID_LEN 7 /* 7: PLMN ID: 5 ~ 6 digits, plus a nul-terminator in tail. */
typedef struct
{
    kal_char plmn_id[SIC_MAX_PLMN_ID_LEN] ;
    nvram_rat_enum rat ;

    nvram_ef_sic_rule_struct qos ;
    nvram_ef_sic_rule_struct pdnReqType ;
    nvram_ef_sic_rule_struct v4AddrAlloc ;

    nvram_ef_sic_rule_struct v4dns ;
    nvram_ef_sic_rule_struct v4mtu ;

    nvram_ef_sic_rule_struct bcm ;
    nvram_ef_sic_rule_struct etft ;
} nvram_ef_sic_entry_struct ;

#define SIC_MAX_ENTRY_COUNT 100
typedef struct
{
    kal_bool is_tst_config_valid ;
    nvram_ef_sic_entry_struct tst_config ;

    nvram_ef_sic_entry_struct default_config ;
    nvram_ef_sic_entry_struct emergency_config ;

    nvram_ef_sic_entry_struct entry[SIC_MAX_ENTRY_COUNT] ;
} nvram_ef_sic_list_struct ;
/************************************
 * End of SIC: SM IE Configurations *
 ************************************/

typedef struct
{
    kal_uint8 mode;
} nvram_ef_regional_phone_mode_struct;

#ifdef __CHANNEL_LOCK__

#define CH_LOCK_IDLE_ONLY 0x0
#define CH_LOCK_IDLE_MR 0x1
#define CH_LOCK_IDLE_HOCC0 0x2
#define CH_LOCK_IDLE_CONNECTED 0x3

typedef struct
{
    EARFCN earfcn;
    kal_uint16 pci;
}nvram_ch_lock_eas_info_struct;

typedef struct
{
    kal_uint16 uarfcn;
    kal_uint16 psc;
}nvram_ch_lock_uas_info_struct;

typedef struct
{
    kal_uint16 arfcn;
    kal_uint8 band_indicator;
}nvram_ch_lock_gas_info_struct;

typedef struct
{
    kal_bool lock_supported;
    kal_uint8 lock_state;
    nvram_ch_lock_eas_info_struct eas_info;
    nvram_ch_lock_uas_info_struct uas_info;
    nvram_ch_lock_gas_info_struct gas_info;		
    kal_uint32 lock_mode;				//LOCK MODE
}nvram_ef_ch_lock_info_struct;
#endif /* __CHANNEL_LOCK__ */

typedef struct
{
    kal_uint8 ps_sim_map[4];
} nvram_ef_ps_sim_map_struct ;

/*----------------------------------------------------------------------------*/
/* L4 End: Please put L4 NVRAM info above                                     */
/*----------------------------------------------------------------------------*/

/* MM NVRAM Re-structure Start */
typedef struct
{
    kal_bool               is_t3246_plmn_in_eqplmn_list;
    nvram_plmn_id_struct   t3246_plmn;
    kal_int64              t3246_expire_time;
} nvram_ef_t3246_timer_info_struct;

typedef struct
{
    /* MM NVRAM Re-structure Start */
    kal_uint8 raw_data[NVRAM_EF_MM_LOCI_GPRS_SIZE];
    /* MM NVRAM Re-structure End */
} nvram_ef_mm_locigprs_struct;

typedef struct
{
    nvram_ef_mm_locigprs_struct locigprs_info;
    nvram_ef_t3246_timer_info_struct t3246_info;
} nvram_ef_mm_data_struct;
/* MM NVRAM Re-structure End */

#if defined(__SUBSIDY_LOCK__) || defined(__SMB_SIMME_LOCK_NV__)
/* The following size are referend from Subsidy lock blob format */
#define SML_SL_BLOB_IMEI_SIZE                   15
#define SML_SL_BLOB_TIME_STAMP_SIZE             8
#define SML_SL_BLOB_LENGTH_SIZE 	            2
#define SML_SL_BLOB_CONFIG_SUPPORT_CAT_SIZE     3
#define SML_SL_BLOB_ITERATION_COUNT_SIZE	    4
#define SML_SL_BLOB_SALT_SIZE 	                16
#define SML_SL_BLOB_HCK_SIZE	                32
#define SML_SL_BLOB_SIZE_OF_SIGNATURE           256
#define SML_SL_PUBLIC_KEY_MOD_SIZE              256
#define SML_SL_PUBLIC_KEY_EXP_SIZE              3

/* Invalid SML context obj length */
#define SML_SL_INVALID_CONTEXT_OBJ_LENGTH  0xFFFF

#define SML_SL_NVRAM_ACCESS_ID_UPDATE_SLB       0xFA
#define SML_SL_NVRAM_ACCESS_ID_UPDATE_LOCK_OP   0xFB

/*
 * the basic unit of categories
 */
#define SML_SL_BLOB_SIZE_OF_CAT_N      6 /* MCC/MNC */
#define SML_SL_BLOB_SIZE_OF_CAT_NS     8 /* MCC/MNC + HLR */
#define SML_SL_BLOB_SIZE_OF_CAT_SP     7 /* MCC/MNC + GID1 */

/* Define the maximum suppot categories */
#define SML_SL_BLOB_MAX_SUPPORT_CAT_N      30
#define SML_SL_BLOB_MAX_SUPPORT_CAT_NS     10
#define SML_SL_BLOB_MAX_SUPPORT_CAT_SP     10

/* Define the total size of each category */
#define SML_SL_BLOB_CAT_N_SIZE          (SML_SL_BLOB_MAX_SUPPORT_CAT_N * SML_SL_BLOB_SIZE_OF_CAT_N)
#define SML_SL_BLOB_CAT_NS_SIZE         (SML_SL_BLOB_MAX_SUPPORT_CAT_NS * SML_SL_BLOB_SIZE_OF_CAT_NS)
#define SML_SL_BLOB_CAT_SP_SIZE         (SML_SL_BLOB_MAX_SUPPORT_CAT_SP * SML_SL_BLOB_SIZE_OF_CAT_SP)

#define SML_SL_MAX_BLOB_SIZE             NVRAM_EF_SUBSIDY_LOCK_SIZE

typedef struct {
    kal_uint8 change_flag;
    kal_uint8 num;                      /* num of valid sets */
} sml_sl_blob_meta_struct;

typedef struct {
    kal_uint8 iteration_count[SML_SL_BLOB_ITERATION_COUNT_SIZE];	/* 4 */
    kal_uint8 salt[SML_SL_BLOB_SALT_SIZE];							/* 16 */
	kal_uint8 hck[SML_SL_BLOB_HCK_SIZE];							/* 32 */
} sml_sl_blob_key_struct;

typedef struct {
    kal_uint8   major_version;
	kal_uint8   minor_version;
	kal_uint8   protection_algorithm;
	kal_uint8   lock_operation;
	kal_uint8   imei[SML_SL_BLOB_IMEI_SIZE];					/* 15 */
	kal_uint8   time_stamp[SML_SL_BLOB_TIME_STAMP_SIZE];		/* 8 */
	kal_uint8   length[SML_SL_BLOB_LENGTH_SIZE];				/* 2 */
	sml_sl_blob_meta_struct    cat[SML_SL_BLOB_CONFIG_SUPPORT_CAT_SIZE];	/* (3 * 2) */
    sml_sl_blob_key_struct  key[SML_SL_BLOB_CONFIG_SUPPORT_CAT_SIZE];		/* (3 * 52) */
    kal_uint8   code_cat_n[SML_SL_BLOB_CAT_N_SIZE];             /* (30 * 6)*/
    kal_uint8   code_cat_ns[SML_SL_BLOB_CAT_NS_SIZE];           /* (10 * 8)*/
    kal_uint8   code_cat_sp[SML_SL_BLOB_CAT_SP_SIZE];           /* (10 * 7)*/
    kal_uint8   signature[SML_SL_BLOB_SIZE_OF_SIGNATURE];       /* 256 */
} sml_sl_blob_context_struct;
typedef sml_sl_blob_context_struct nvram_sml_sl_blob_context_struct;

typedef struct {
	kal_uint8   public_key_mod[SML_SL_PUBLIC_KEY_MOD_SIZE];			/* 256 */
	kal_uint8   public_key_exp[SML_SL_PUBLIC_KEY_EXP_SIZE];			/* 3 */
} sml_sl_odm_data_struct;
typedef sml_sl_odm_data_struct nvram_sml_sl_odm_data_struct;

#endif /* __SUBSIDY_LOCK__ || __SMB_SIMME_LOCK_NV__ */

#ifdef __SMB_SIMME_LOCK_NV__
#define SML_NVRAM_ACCESS_ID_UPDATE_MAX_RETRY_COUNT_OP   0xFA
#define SML_NVRAM_ACCESS_ID_UPDATE_SML_RETRY_COUNT_OP   0xFA
#define SML_NVRAM_ACCESS_ID_UPDATE_CAT_KEY_ALGO_DATA_OP 0xFD

typedef struct {
    kal_uint8    max_retry_count[SML_SUPPORT_CAT_SIZE];
} sml_max_retry_count_struct;
typedef sml_max_retry_count_struct nvram_sml_max_retry_count_struct;
#endif /* __SMB_SIMME_LOCK_NV__ */

typedef struct{
    kal_bool is_user_selected_main_ps;
    kal_uint8 iccid[11];
    atcmd_is_data_allowed_enum edallow_state;
    atcmd_mobile_data_enum mobile_data_state;
    atcmd_data_roaming_enum data_roaming_state;
    atcmd_volte_enum volte_state;
    atcmd_ims_test_mode_enum ims_test_mode_state;
}l4c_ps_reg_setting_struct;
typedef l4c_ps_reg_setting_struct nvram_ef_ps_reg_setting_struct;

typedef struct{
    kal_uint8 disabled_rat;
    kal_uint8 reserved_1;
    kal_uint8 reserved_2;
    kal_uint8 reserved_3;
    kal_uint8 reserved_4;
    kal_uint8 reserved_5;
    kal_uint8 reserved_6;
    kal_uint8 reserved_7;    
} nvram_ef_l4_preference_struct;

#ifdef __CARRIER_RESTRICTION__

/* Carrier Restriction */
/* Basic unit of categories */
#define SMU_CARRIER_MATCH_SIZE_OF_CAT_N              3  /* MCC/MNC */
#define SMU_CARRIER_MATCH_SIZE_OF_CAT_SPN            23 /* MCC/MNC + SPN(20) */
#define SMU_CARRIER_MATCH_SIZE_OF_CAT_IMSI_PREFIX    4  /* MCC/MNC + HLR */
#define SMU_CARRIER_MATCH_SIZE_OF_CAT_GID1           4  /* MCC/MNC + GID1 */
#define SMU_CARRIER_MATCH_SIZE_OF_CAT_GID2           4  /* MCC/MNC + GID2 */

/* Define the maximum supported categories */
#define SMU_CARRIER_MATCH_MAX_SUPPORT_CAT_N            5
#define SMU_CARRIER_MATCH_MAX_SUPPORT_CAT_SPN          5
#define SMU_CARRIER_MATCH_MAX_SUPPORT_CAT_IMSI_PREFIX  5
#define SMU_CARRIER_MATCH_MAX_SUPPORT_CAT_GID1         5
#define SMU_CARRIER_MATCH_MAX_SUPPORT_CAT_GID2         5

/* Define the total size of each category */
#define SMU_CARRIER_MATCH_CFG_CAT_N_SIZE            (SMU_CARRIER_MATCH_MAX_SUPPORT_CAT_N * SMU_CARRIER_MATCH_SIZE_OF_CAT_N)
#define SMU_CARRIER_MATCH_CFG_CAT_SPN_SIZE          (SMU_CARRIER_MATCH_MAX_SUPPORT_CAT_SPN * SMU_CARRIER_MATCH_SIZE_OF_CAT_SPN)
#define SMU_CARRIER_MATCH_CFG_CAT_IMSI_PREFIX_SIZE  (SMU_CARRIER_MATCH_MAX_SUPPORT_CAT_IMSI_PREFIX * SMU_CARRIER_MATCH_SIZE_OF_CAT_IMSI_PREFIX)
#define SMU_CARRIER_MATCH_CFG_CAT_GID1_SIZE         (SMU_CARRIER_MATCH_MAX_SUPPORT_CAT_GID1 * SMU_CARRIER_MATCH_SIZE_OF_CAT_GID1)
#define SMU_CARRIER_MATCH_CFG_CAT_GID2_SIZE         (SMU_CARRIER_MATCH_MAX_SUPPORT_CAT_GID2 * SMU_CARRIER_MATCH_SIZE_OF_CAT_GID2)

/* Define the support category size */
#define SMU_CARRIER_MATCH_SUPPORT_CAT_SIZE          5 /* SMU_CARRIER_MATCH_CAT_SIZE in sml_carrier_match_cat_enum */

typedef enum {
    SMU_CARRIER_MATCH_CAT_N,
    SMU_CARRIER_MATCH_CAT_SPN,
    SMU_CARRIER_MATCH_CAT_IMSI_PREFIX,
    SMU_CARRIER_MATCH_CAT_GID1,
    SMU_CARRIER_MATCH_CAT_GID2,
    SMU_CARRIER_MATCH_CAT_SIZE
} smu_carrier_match_cat_enum;

/* General lock structure */
typedef struct {
    kal_uint8 num;                      /* num of valid sets */
} smu_carrier_match_category_meta_struct;

/* General control key structure */
typedef struct {
    kal_uint8 state;
    kal_uint8 algo;
    kal_uint32 max_retry_count;
    kal_uint32 retry_count;
    kal_uint8 salt[NVRAM_SML_S_MAX_SUPPORT_SALT_LEN];
    kal_uint8 iter_cnt[NVRAM_SML_S_MAX_SUPPORT_INTER_CNT_LEN];
    kal_uint8 key[NVRAM_SML_S_MAX_SUPPORT_HCK_LEN];
} smu_carrier_match_control_key_struct;

typedef enum {
    SMU_CARRIER_RESTRICTION_ENABLED,
    SMU_CARRIER_RESTRICTION_DISABLED
} smu_carrier_restriction_state_enum;

typedef enum {
    SMU_CARRIER_RESTRICTION_MULTI_SIM_POLICY_NONE,
    SMU_CARRIER_RESTRICTION_ONE_VALID_SIM_MUST_BE_PRESENT
} smu_carrier_restriction_multi_sim_policy_enum;

typedef struct {
    smu_carrier_match_category_meta_struct    cat[SMU_CARRIER_MATCH_SUPPORT_CAT_SIZE];  /* (5 * 1) */
    kal_uint8   code_cat_n[SMU_CARRIER_MATCH_CFG_CAT_N_SIZE];             /* (5 * 3) */
    kal_uint8   code_cat_spn[SMU_CARRIER_MATCH_CFG_CAT_SPN_SIZE];         /* (5 * 23)*/
    kal_uint8   code_cat_imsi_prefix[SMU_CARRIER_MATCH_CFG_CAT_IMSI_PREFIX_SIZE];       /* (5 * 4)*/
    kal_uint8   code_cat_gid1[SMU_CARRIER_MATCH_CFG_CAT_GID1_SIZE];       /* (5 * 4)*/
    kal_uint8   code_cat_gid2[SMU_CARRIER_MATCH_CFG_CAT_GID2_SIZE];       /* (5 * 4)*/
}smu_carrier_restriction_list_struct;

typedef struct {
    kal_uint32                                magic_head;
    smu_carrier_match_control_key_struct      key;
    smu_carrier_restriction_list_struct       black_list;
    smu_carrier_restriction_list_struct       white_list;
    kal_uint8                                 allow_all;
    smu_carrier_restriction_state_enum        carrier_rest_state;
    kal_uint8                                 allowed_carriers_prioritized;
    kal_uint8                                 multi_sim_policy;
    kal_uint32                                magic_tail;
} smu_carrier_match_context_struct;
typedef smu_carrier_match_context_struct nvram_smu_carrier_match_context_struct;

/* carrier restriction: magic numbers of file header and tail */
#define SML_CARRIER_RESTRICTION_MAGIC_HEAD_VALUE   (sizeof(smu_carrier_match_context_struct))
#define SML_CARRIER_RESTRICTION_MAGIC_TAIL_VALUE   0x26598088

#endif /* __CARRIER_RESTRICTION__ */

#ifdef GEN_FOR_PC
BEGIN_NVRAM_DATA

#if defined (__PS_SERVICE__) && defined (__MOD_TCM__) && defined (__EXT_PDP_CONTEXT_ON__)
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_TCM_CID_0_PROFILE_LID
* DESCRIPTION
*      Store contents of context id 0 (CID 0) defined by user. It's used in LTE attach PDN configuration. Please refer to 27.007 Sec 10.1.0 for details. 
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update if someone tries to configure contents of CID 0 (maybe by user itself, by Android or by other modules). 
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_TCM_CID_0_PROFILE_LID)
     nvram_ef_tcm_PDP_profile_record_struct * NVRAM_EF_TCM_CID_0_PROFILE_TOTAL
     {
         context_id:"Context identifier"
         {
         };

         pdp_addr_type:"PDP address type"
         {
         };
         pdp_addr_len:"PDP address length"
         {
         };
         addr_val:"Static PDP address value, in MSB"
         {
         };

         apn_len:"APN length"
         {
         };
         apn:"APN string";
         pcomp_algo:"Protocol (header) compression algorithm"
         {
         };
         dcomp_algo:"Data compression algorithm"
         {
         };

         context_type:"Padding"
         {
         };
         primary_context_id:"Primary context identifier"
         {
         };

         req_n201u:"Requested N201U"
         {
         };
         
         at_definition:"at_definition"
         {
         };

         p_cscf_discovery:"p_cscf_discovery"
         {
         };

         im_cn_signalling_flag:"im_cn_signalling_flag"
         {
         };

         request_type:"request_type"
         {
         };

         nas_priority_config:"nas_priority_config"
         {
         };

         eab_override_config:"eab_override_config"
         {
         };

         initial_attach:"initial_attach"
         {
         };
     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_TCM_PDP_PROFILE_LID
* DESCRIPTION
*      Store contents of context id (CID 1~N) defined by user. Please refer to 27.007 for details. 
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update if someone tries to configure contents of CID 1~N (maybe by user itself, by Android or by other modules). 
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_TCM_PDP_PROFILE_LID)
     nvram_ef_tcm_PDP_profile_record_struct *NVRAM_EF_TCM_PDP_PROFILE_TOTAL
     {
         context_id:"Context identifier"
         {
         };

         pdp_addr_type:"PDP address type"
         {
         };
         pdp_addr_len:"PDP address length"
         {
         };
         addr_val:"Static PDP address value, in MSB"
         {
         };

         apn_len:"APN length"
         {
         };
         apn:"APN string";
         pcomp_algo:"Protocol (header) compression algorithm"
         {
         };
         dcomp_algo:"Data compression algorithm"
         {
         };

         context_type:"Padding"
         {
         };
         primary_context_id:"Primary context identifier"
         {
         };

         req_n201u:"Requested N201U"
         {
         };

         at_definition:"at_definition"
         {
         };

         p_cscf_discovery:"p_cscf_discovery"
         {
         };

         im_cn_signalling_flag:"im_cn_signalling_flag"
         {
         };

         request_type:"request_type"
         {
         };

         nas_priority_config:"nas_priority_config"
         {
         };

         eab_override_config:"eab_override_config"
         {
         };

         initial_attach:"initial_attach"
         {
         };
     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SIC_LIST_LID
* DESCRIPTION
*      Store contents of SM/ESM IE configurations. Priority to apply values: tst_config (if valid) > emergency_config > entry (if matched) > default 
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update if someone tries to configure contents of SM/ESM IE configurations. 
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SIC_LIST_LID)
    nvram_ef_sic_list_struct *NVRAM_EF_SIC_LIST_TOTAL
    {
        is_tst_config_valid:"Indicate the tst_config is valid or not"
        {
        };
        tst_config:"Configurations set by tst-inject string" 
        {
        };
        default_config:"Configurations by default" 
        {
        };
        emergency_config:"Configurations for emergency pdn" 
        {
        };
        entry:"SIC entries"
        {
        };
    };
#endif // ~ #if defined (__PS_SERVICE__) && defined (__MOD_TCM__) &&  defined (__EXT_PDP_CONTEXT_ON__)

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_PAM_PIB_PROFILE_LID
* DESCRIPTION
*      Store the SM/ESM T3396 or Back-off timer that is supposed not to be reset after power cycle. Please refer to TS24.008/TS24.301 for more detail. 
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID is updated when MD starts/deletes/modifies T3396 or Back-off timer that is supposed not to be reset after power cycle.
*********************************************************************************************/

#ifdef __PS_SERVICE__
LID_BIT VER_LID(NVRAM_EF_PAM_PIB_PROFILE_LID)
    nvram_ef_pam_pib_profile_struct * NVRAM_EF_PAM_PIB_PROFILE_TOTAL
    {
        pib_count:"Number of PIBs (PDN info block)"{} ;
        pib_entry:"Array for PIBs"{} ;
    } ;
#endif /* __PS_SERVICE__ */



 /********************************************************************************************
 * LID_NAME
 *      NVRAM_EF_SML_LID
 * DESCRIPTION
 *      Store SIM ME LOCK key and category data.. Please refer to 22.022 for details. 
 * INFOMATION
 *      Can OTA Reset: No
 *      Update Scenario: When Lock state changes or ODM set lock catogory in factory mode.
 *********************************************************************************************/

#ifdef __NVRAM_SECRET_DATA__
    #ifdef __NVRAM_SML_ACCESSIBLE__

        LID_BIT VER_LID(NVRAM_EF_SML_LID)
            nvram_sml_context_struct *NVRAM_EF_SML_TOTAL
            {
                magic_head:"magic head"
                {
                };

                cat:"cat"
                {
                };

                key:"key"
                {
                };

                code_cat_n:"code_cat_n"
                {
                };

                code_cat_ns:"code_cat_ns"
                {
                };

                code_cat_sp:"code_cat_sp"
                {
                };

                code_cat_c:"code_cat_c"
                {
                };

                code_cat_sim:"code_cat_sim"
                {
                };

                code_cat_ns_sp:"code_cat_ns_sp"
                {
                };

                code_cat_sim_c:"code_cat_sim_c"
                {
                };

                range_cat_ns:"range_cat_ns"
                {
                };

                magic_tail:"magic_tail"
                {
                };
            };
    #endif
#endif

 /********************************************************************************************
 * LID_NAME
 *      NVRAM_EF_SIM_LOCK_LID
 * DESCRIPTION
 *      Store SIM ME LOCK key and category data.
 * INFOMATION
 *      Can OTA Reset: No
 *      Update Scenario: When Lock state changes or ODM set lock catogory in factory mode.
 *********************************************************************************************/

#ifdef __NVRAM_SECRET_DATA__
    #ifdef __NVRAM_SML_ACCESSIBLE__
        #ifdef __SMART_PHONE_MODEM__
        LID_BIT VER_LID(NVRAM_EF_SIM_LOCK_LID)
            nvram_sml_tmo_context_struct *NVRAM_EF_SIM_LOCK_TOTAL
            {
                version:"version"
                {
                };

                protection_scheme:"protection_scheme"
                {
                };

                state:"state"
                {
                };

                length:"length"
                {
                };

                num_of_plmn:"num_of_plmn"
                {
                };

                plmn_list:"plmn_list"
                {
                };

                num_of_gid:"num_of_gid"
                {
                };

                gid_list:"gid_list"
                {
                };

                reserved:"reserved"
                {
                };

                start_time:"start_time"
                {
                };

                end_time:"end_time"
                {
                };

                imei:"imei"
                {
                };

                verification_code:"verification_code"
                {
                };

                unlock_time:"unlock_time"
                {
                };
            };
        #endif
    #endif
#endif

#ifndef __L1_STANDALONE__  
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CB_CH_INFO_LID
* DESCRIPTION
*      To save settings of CB channels, languages(DCS) and mask of them. 
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID is updated when AT+CSCB sent to MD.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CB_CH_INFO_LID)
     nvram_ef_cb_ch_info_struct *NVRAM_EF_CB_CH_INFO_TOTAL
     {
         cbmir_mask:"CBMIR MASK"
         {
         };

         cbmir_me_mask:"CBMIR ME MASK"
         {
         };

         dcs_mask:"DCS MASK"
         {
         };

         dcs:"DCS storage in ME"
         {
         };

         cbmi_me_mask:"CBMI MASK"
         {
         };

         cbmi_sim_mask:"CBMI MASK"
         {
         };

         cbmi:"CBMI storage in ME"
		 {
			 
		 };

         cbmir:"CBMIR storage in ME"
		 {
			 
		 };
     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SMSAL_COMMON_PARAM_LID
* DESCRIPTION
*      To save settings of AT commands like AT+CPMS, AT+CGSMS, AT+CSCB and other TP parameters. 
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID is updated when AT+CPMS, AT+CGSMS, AT+CSCB sent to MD.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SMSAL_COMMON_PARAM_LID)
     nvram_ef_smsal_common_param_struct *NVRAM_EF_SMSAL_COMMON_PARAM_TOTAL
     {
         bearer_service:" Preferred Service"
         {
             bearer:8 "Prefered band"
             {
               0x0:"GPRS only";
                 0x1:"GSM only";
                 0x2:"GPRS prefer";
                 0x3:"GSM prefer";
             };
         };

         status_report: "Status Report"
         {
             status_rep:8 "Status Report"
             {
               0x0:"Not Supported (or request)";
               0x1:"Supported (or request)";
             };
         };

         reply_path: "Reply Path"
         {
             reply_p:8 "Reply Path"
             {
               0x0:"Not Supported (or request)";
               0x1:"Supported (or request)";
             };
         };

         vp_format: "VP Format"
         {
             vp_f:8 "VP Format"
             {
               0x0:"VP not present";
               0x1:"Enhanced format";
               0x2:"Relative format (default)";
               0x3:"Absolute format";
             };
         };

         prefer_mem1: "Preferred Memory 1"
         {
             p_mem1:8 "Preferred Memory 1"
             {
               0x0:"SIM";
               0x1:"ME";
               0x2:"SR";
               0x3:"BM";
               0x4:"TA";
               0x5:"SM_PREFER";
               0x6:"ME_PREFER";
               0x7:"Not Specified (default)";
             };
         };
         prefer_mem2: "Preferred Memory 2"
         {
             p_mem2:8 "Preferred Memory 2"
             {
               0x0:"SIM";
               0x1:"ME";
               0x2:"SR";
               0x3:"BM";
               0x4:"TA";
               0x5:"SM_PREFER";
               0x6:"ME_PREFER";
               0x7:"Not Specified (default)";
             };
         };
         prefer_mem3: "Preferred Memory 3"
         {
             p_mem3:8 "Preferred Memory 3"
             {
               0x0:"SIM";
               0x1:"ME";
               0x2:"SR";
               0x3:"BM";
               0x4:"TA";
               0x5:"SM_PREFER";
               0x6:"ME_PREFER";
               0x7:"Not Specified (default)";
             };
         };

         cbch_req:"CB status"
         {
             cb_req:8 "CB status"
             {
               0x0:"CB OFF";
               0x1:"CB ON";
             };
         };
         all_lang_on:"CB all language ON "
         {
             all_lang_is_on:8 "CB all language ON"
             {
               0x0:"CB All Language OFF";
               0x1:"CB All Language ON";
             };
         };
         rmi_act_pfile_id:"Activated profile ID for AT command"
         {
         };
         fo:"First Octet of TP Header"
         {
         };
         sms_fdn_off:"Turn Off SMS FDN"
         {
             sms_fdn_is_off:8 "Turn Off SMS FDN"
             {
               0x0:"Not Turn OFF";
               0x1:"Turn OFF";
             };
         };

         last_used_tp_mr:"last used TP-message reference"
         {
         };

         mem_capacity_available:"mem_capacity_available"
         {
            mem_cap_available:8 "mem_capacity_available"
             {
               0x0:"means flag unset; memory capacity available";
               0x1:"means flag set";
             };
         };

         selected_msp:"last used msp"
         {
         };

         reserve:"not used"
         {
         };

     };

#if !defined(EXTERNAL_MMI)
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SMSAL_MAILBOX_ADDR_LID
* DESCRIPTION
*      To save mailbox dialing numbers when the SIM file(EF_MBDN) is not supported.
*	   EF_MBDN is defined in TS 31.102. 
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID is updated when EF_MBDN not supported.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SMSAL_MAILBOX_ADDR_LID)
     nvram_ef_smsal_mailbox_addr_struct *NVRAM_EF_SMSAL_MAILBOX_ADDR_TOTAL
     {
         alpha_id:"Alpha identifier"
         {
         };

         BCD_length:"Length of BCD number. This byte gives the number of bytes of the following two data items containing actual BCD number/SSC information. Coding is according to TS 24.008."
         {
         };
         
		 TON_NPI:"Type of number (TON) and numbering plan identification (NPI). Coding is according to TS 24.008."
         {
         };
         
		 DialNum:"Dialling number. It is up to 20 digits of the telephone number and/or SSC information."
         {
         };
         
		 cc_ident:"Capability/Configuration1 Record Identifier. This byte identifies the number of a record in the EF_CCP1 containing associated capability/configuration parameters required for the call."
         {
         };
         
		 pad:"Extension 1 record identifier"
         {
         };
     };
#endif

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SMSAL_SMS_LID
* DESCRIPTION
*      Not used currently.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: NA.
*********************************************************************************************/
#if (SMS_PHONE_ENTRY > 0)
LID_BIT VER_LID(NVRAM_EF_SMSAL_SMS_LID)
     nvram_ef_smsal_sms_struct *NVRAM_EF_SMSAL_SMS_TOTAL
     {
         status:"Status"
         {
         };

       remainder:"Reminder"
         {
         };

     };
#endif

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SMSAL_SMSP_LID
* DESCRIPTION
*      To save settings of SIM file(EF_SMSP) when EF_SMSP not supported.
*	   EF_SMSP is defined in TS 31.102. 
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID is updated when EF_SMSP not supported.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SMSAL_SMSP_LID)
     nvram_ef_smsal_smsp_struct *NVRAM_EF_SMSAL_SMSP_TOTAL
     {
         profile_name:"store alpha-identifier, it can distinguish between records of EF_SMSP"
         {
         };

         para_ind:"Parameter Indicator. each of the default SMS parameters which can be stored in the remainder of the record are marked absent or present by individual bits within this byte."
         {
			 para_ind0: 1 "bit0 indicates TP-Destination Address is present or not"
			 {
			     0x0: "absent";
				 0x1: "present";
		     };
			 para_ind1: 1 "bit1 indicates Service Centre Address is present or not"
			 {
			     0x0: "absent";
				 0x1: "present";
		     };
			 para_ind2: 1 "bit2 indicates TP-Protocol Identifier is present or not"
			 {
			     0x0: "absent";
				 0x1: "present";
		     };
			 para_ind3: 1 "bit3 indicates TP-Data Coding Scheme is present or not"
			 {
			     0x0: "absent";
				 0x1: "present";
		     };
			 para_ind4: 1 "bit4 indicates TP-Validity Period is present or not"
			 {
			     0x0: "absent";
				 0x1: "present";
		     };
			 para_ind5: 1 "no meaning"
			 {
		     };
			 para_ind6: 1 "no meaning"
			 {
		     };
			 para_ind7: 1 "no meaning"
			 {
		     };
         };
         
		 da:"TP-Destination Address, defined for SM-TL address fields in TS 23.040 "
         {
         };
         
		 sca:"Service Centre Address, defined for RP-Destination Centre Address in TS 24.011"
         {
         };
         
		 pid:"TP-Protocol Identifier defined in TS 23.040."
         {
         };
         
		 dcs:"TP-Data Coding Scheme defined in TS 23.038."
         {
         };
         
		 vp:"TP-Validity Period defined in TS 23.040."
         {
         };
     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CB_DEFAULT_CH_LID
* DESCRIPTION
*      To save default CB channels. UE can receive CB messages comes from these channels.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID can be updated by customer.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CB_DEFAULT_CH_LID)
     nvram_ef_cb_default_ch_struct *NVRAM_EF_CB_DEFAULT_CH_TOTAL
     {
         cbmi:"Default CB Channel IDs. Each element in this array presents a channel which UE can receive CB message";
     };

#if !defined(EXTERNAL_MMI)
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SMSAL_MWIS_LID
* DESCRIPTION
*      To save message waiting indication status of SIM file(EF_MWIS) when EF_MWIS not supported.
*	   EF_MWIS is defined in TS 31.102. 
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID can be updated by customer.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SMSAL_MWIS_LID)
     nvram_ef_smsal_mwis_struct *NVRAM_EF_SMSAL_MWIS_TOTAL
     {
         message_waiting_indication_status:"Message waiting indication status";
         message_waiting_indication_status[0]
         {
		     vm:1 "Voice mail"
             {
               0x0:"Set indication active";
                 0x1:"Set indication inactive";
             };

             fax:1 "FAX"
             {
               0x0:"Set indication active";
               0x1:"Set indication inactive";
             };

             email:1 "Email"
             {
               0x0:"Set indication active";
               0x1:"Set indication inactive";
             };

             other:1 "Other"
             {
               0x0:"Set indication active";
               0x1:"Set indication inactive";
             };

             RFU:4 "RFU"
             {
               0x0:"Set indication active";
               0x1:"Set indication inactive";
             };
         };

         message_waiting_indication_status[1]
         {
             vm:8 "Number of Voicemail message waiting"
             {
             };
         };

         message_waiting_indication_status[2]
         {
             fm:8 "Number of fax mail message waiting"
             {
             };
         };

         message_waiting_indication_status[3]
         {
             em:8 "Number of email message waiting"
             {
             };
         };

         message_waiting_indication_status[4]
         {
             om:8 "Number of other message waiting"
             {
             };
         };

         pad:"Padding"
         {
         };
     };
#endif

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CFU_FLAG_LID
* DESCRIPTION
*      To save the CFU status 
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update when CFU status change.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CFU_FLAG_LID)
     nvram_ef_cfu_flag_struct *NVRAM_EF_CFU_FLAG_TOTAL
     {
         cfu_flag:"CFU flag"
         {
         };
     };
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CSM_ESSP_LID
* DESCRIPTION
*      To configure whether query CFU status by modem itself after first camp-on network.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: AT+ESSP
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CSM_ESSP_LID)
     nvram_ef_csm_essp_struct *NVRAM_EF_CSM_ESSP_TOTAL
     {
         cfu_flag:"essp mode"
         {
         };
     };
/* MM NVRAM Re-structure Start */
/********************************************************************************************
* LID_NAME
*	   NVRAM_EF_MM_DATA_LID
* DESCRIPTION
*	   Store PS Loci (packet switched location information) and T3246 timer value. 
* INFOMATION
*	   Can OTA Reset: Yes
*	   Update Scenario: Updated when any of the following changes due to registation attempt in PS domain
*      a) P-TMSI, b) P-TMSI signature, c) RAI, d) Gprs update status  
*      Or due to change of T3246 timer value. For more information about update frequency, please
*      refer 3GPP 24.008.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_MM_DATA_LID)
     nvram_ef_mm_data_struct * NVRAM_EF_MM_DATA_TOTAL
     {
     };
/* MM NVRAM Re-structure End */
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_MSCAP_LID
* DESCRIPTION
*       This LID describes UE's MS capability, used by NAS and AS for indicating the same to network
* INFOMATION
*      Can OTA Reset: yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/

    LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MSCAP_LID)
     nvram_ef_mscap_struct *NVRAM_EF_MSCAP_TOTAL
     {
         speech_version:"Supported speech version"
         {
           FR:1 "FR"
             {
               0x0:"Not supported";
                 0x1:"Supported";
             };

           HR:1 "HR"
             {
               0x0:"Not supported";
               0x1:"Supported";
             };

           EFR:1 "EFR"
             {
               0x0:"Not supported";
               0x1:"Supported";
             };

           AMR_FR:1 "AMR FR"
             {
               0x0:"Not supported";
               0x1:"Supported";
             };

           AMR_HR:1 "AMR HR"
             {
               0x0:"Not supported";
               0x1:"Supported";
             };
         };
       speech_version_byte2:"speech_version_byte2"
         {
           AMR_WB:8 "2G AMR WB"
           {
             0x0:"Not supported";
             0x2:"supported";
           };
         };
        fdd_umts_supported_speech:"fdd_umts_supported_speech"
         {
           fdd_umts_supported_code:8 "fdd_umts_supported_code"
           {
             0x60:"FDD support CODEC";
           };
         };
       fdd_umts_supported_speech_byte2:"fdd_umts_supported_speech_byte2"
         {
           AMR_WB:8 "3G AMR WB"
           {
             0x00:"Not supported";
             0x04:"supported";
           };
         };


       data_cap1:"Supported speech version"
         {
           CSD:1 "CSD"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           trans_fax:1 "Transparent Fax"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           non_trans_fax:1 "Non-transparent Fax"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           trans_data_cs:1 "Transparent data circuit synchronous"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           non_trans_data_cs:1 "Non-transparent data circuit synchronous"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           trans_data_acs:1 "Transparent data circuit asynchronous"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           non_trans_data_acs:1 "Non-transparent data circuit asynchronous"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           trans_PAD_aa:1 "Transparent PAD access asynchronous"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };
         };

       data_cap2:"Supported speech version"
         {
           non_trans_PAD_aa:1 "Non-transparent PAD access asynchronous"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           trans_data_ps:1 "Transparent data packet synchronous"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           non_trans_PAD_pas:1 "Non-transparent data packet asynchronous"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           HSCSD_multislot:5 "HSCSD multislot class"
             {
             };

         };
         channel_coding:"Supported speech version"
         {
           tch_f48:1 "TCH/F4.8"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           tch_f96:1 "TCH/F9.6"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           tch_f144:1 "TCH/F14.4"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           tch_f288:1 "TCH/F28.8"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           tch_f32:1 "TCH/F32"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           tch_f432:1 "TCH/F43.2"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };
         };

         disable_call:"disable_call"
         {
            disable_call:8 "disable_call"
            {
              0x01:"call disabled" ;
              0x00:"call not disabled";
            };
         };

         rr_cap:"rr_cap"
         {
            spare_bits:5 "spare"
            {
            };

            vamos_support_level:2 "VAMOS Level"
            {
              0x00:"VAMOS disabled" ;
              0x01:"VAMOS level I supported";
              0x02:"VAMOS level II supported";
            };

            random_fill_bits:1 "Random fill bits support"
            {
              0x0:"random fill bit disabled" ;
              0x1:"random fill bit enabled";
            };
         };
         mm_non_drx_timer_value:"mm_non_drx_timer_value"
         {
            mm_non_drx_timer_value:8 "mm_non_drx_timer_value"
            {
            };
         };

         tdd_umts_supported_speech:"tdd_umts_supported_speech"
         {
           tdd_umts_supported_code:8 "tdd_umts_supported_code"
           {
             0x20:"TDD support CODEC";
           };
         };
         
         tdd_umts_supported_speech_byte2:"tdd_umts_supported_speech_byte2"
         {
           AMR_WB:8 "3G AMR WB"
           {
             0x00:"Not supported";
             0x04:"supported";
           };
         };
     };

 #if defined (__CCM_NO_RESET__)
/***********************************************************************
  ***  This is a nvram data item bit level description for meta tools nvram editor
  ***
  ***  Logical Data Item ID : NVRAM_EF_ALS_LINE_ID_LID
  ***
  ***  Module:
  ***
  ***  Description:
  ***
  ***  Maintainer: Paul Yuang
  ***
  ***********************************************************************/
LID_BIT VER_LID(NVRAM_EF_ALS_LINE_ID_LID)
     nvram_ef_als_line_id_struct *NVRAM_EF_ALS_LINE_ID_TOTAL
     {
         als_line_id:"als_line_id"
         {
           als_line_id:8 "als_line_id"
           {
             0x00:"line 1";
             0x01:"line 2";
           };
         };
	 last_ccm: "last call cost"
	 {
	 };
     };
 #elif defined (__CPHS__)
 LID_BIT VER_LID(NVRAM_EF_ALS_LINE_ID_LID)
     nvram_ef_als_line_id_struct *NVRAM_EF_ALS_LINE_ID_TOTAL
     {
         als_line_id:"als_line_id"
         {
           als_line_id:8 "als_line_id"
           {
             0x00:"line 1";
             0x01:"line 2";
           };
         };
     };
 #endif
 
 /********************************************************************************************
 * LID_NAME
 *            NVRAM_EF_CLASSMARK_RACAP_LID
 *
 * DESCRIPTION
 *            This LID describes the UE's classmark data
 *
 * INFOMATION
 *      Can OTA Reset: yes
 *      Update Scenario: This LID will update once during task init.
 *********************************************************************************************/

LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_CLASSMARK_RACAP_LID)
     nvram_ef_classmark_racap_struct *NVRAM_EF_CLASSMARK_RACAP_TOTAL
	{
         byte1:"this byte describes the support of CS coding algorithm and 2G supporting band"
         {
           a54:1 "A5/4"
             {
               0x0:"A5/4 algorithm not supported";
               0x1:"A5/4 algorithm supported";
             };

           a55:1 "A5/5"
             {
               0x0:"A5/5 algorithm not supported";
               0x1:"A5/5 algorithm supported";
             };
           a56:1 "A5/6"
             {
               0x0:"A5/6 algorithm not supported";
               0x1:"A5/6 algorithm supported";             
             };
           a57:1 "A5/7"
             {
               0x0:"A5/7 algorithm not supported";
               0x1:"A5/7 algorithm supported";             
             };
           band3:1 "Band 3"
             {
               0x0:"GSM1800 not supported";
               0x1:"GSM1800 supported";             
             };
           band2:1 "Band 2"
             {
               0x0:"E-GSM or R-GSM not supported";
               0x1:"E-GSM or R-GSM supported";             
             };
           band1:1 "Band 1"
             {
               0x0:"P-GSM not supported";
               0x1:"P-GSM supported";               
             };
           spare:1 "Spare"
             {
             };
         };

       byte2:"describes the radio capability of GSM for bands in byte1"
         {
           radio_cap1:4
             {
               0x0:"indicates power class 0 for PGSM/EGSM/RGSM if supported, else it is power class 0 for DCS1800 if supported";
               0x1:"indicates power class 1 for PGSM/EGSM/RGSM if supported, else it is power class 1 for DCS1800 if supported";            
               0x2:"indicates power class 2 for PGSM/EGSM/RGSM if supported, else it is power class 2 for DCS1800 if supported";
               0x4:"indicates power class 4 for PGSM/EGSM/RGSM if supported, else it is power class 4 for DCS1800 if supported";
               0x5:"indicates power class 5 for PGSM/EGSM/RGSM if supported, else it is power class 5 for DCS1800 if supported";
             };
           radio_cap2:4
             {
               0x0:"indicates power class 0 for DCS1800 if supported and PGSM/EGSM/RGSM is not supported, else it is spare";
               0x1:"indicates power class 1 for DCS1800 if supported and PGSM/EGSM/RGSM is not supported, else it is spare";            
               0x2:"indicates power class 2 for DCS1800 if supported and PGSM/EGSM/RGSM is not supported, else it is spare";
               0x4:"indicates power class 4 for DCS1800 if supported and PGSM/EGSM/RGSM is not supported, else it is spare";
               0x5:"indicates power class 5 for DCS1800 if supported and PGSM/EGSM/RGSM is not supported, else it is spare";
             };
         };

       byte3:"indicates UCS2, HSCSD Multi slot capability and R-GSM support"
         {
           ucs2:1 "UCS2 treatment"
             {
               0x0:"the ME has a preference for the default alphabet over UCS2";
               0x1:"the ME has no preference between the use of the default alphabet and the use of UCS2";
             };
           hscsd_mtslot_cap:5 "HSCSD Multi slot capability"
             {
               0x0:"invalid HSCSD Multi Slot class as HSCSD not supported";
             };
           hscsd_mtslot_cap_p:1 "HSCSD Multi slot capability present"
             {
               0x0:"HSCSD Multi Slot cap not supported";
               0x1:"HSCSD Multi Slot cap supported";
             };
           rsupport:1 "R-GSM support"
             {
               0x0:"R-GSM not supported";
               0x1:"R-GSM supported";             	
             };
         };

       byte4:"indicates GSM400 support, MS-positioning capability and support of extended measurement"
         {
           gsm400_p:1 "GSM400 present"
             {
               0x0:"GSM400 not supported";
               0x1:"GSM400 supported";               	
             };
           ms_posi_method:5 "MS Positioning method"
             {
               0x00:"none of the MS positioning capability is supported";
               0x07:"MS assisted E-OTD and MS based E-OTD not supported. MS assisted GPS,MS based GPS and MS Conventional GPS supported";  
             };
           ms_posi_method_p:1 "MS Positioning method present"
             {
               0x0:"MS Positioning not supported";
               0x1:"MS Positioning supported";  
             };
           em_cap:1 "Extended Measurement Capability"
             {
               0x0:"Extended Measurement Capability not supported";
               0x1:"Extended Measurement Capability supported";               	
             };
         };

       byte5_byte6:"indicates presence of GSM band GSM1900, GSM850 and GSM400's radio capability and the respective radio capabilties"
         {
           gsm1900_r_cap:4 "GSM1900 Radio Capability"
             {
               0x00:"indicates no power class for GSM1900";
               0x01:"indicates power class 1 for GSM1900";
               0x02:"indicates power class 2 for GSM1900";             	
             };
           gsm1900_r_cap_p:1 "GSM1900 Radio Capability present"
             {
               0x0:"GSM1900 not supported";
               0x1:"GSM1900 supported";             	
             };
           gsm850_r_cap:4 "GSM850 Radio Capability"
             {
               0x00:"indicates no power class for GSM850";
               0x04:"indicates power class 4 for GSM850";
               0x05:"indicates power class 5 for GSM850";               	
             };
           gsm850_r_cap_p:1 "GSM850 Radio Capability present"
             {
               0x0:"GSM850 not supported";
               0x1:"GSM850 supported";               	
             };
           gsm400_r_cap:4 "GSM400 Radio Capability"
             {
               0x00:"indicates no power class for GSM400";
               0x04:"indicates power class 4 for GSM400";              	
             };
           gsm400_supp:2 "GSM400 Bands Supported"
             {
               0x00:"invalid value";
               0x01:"GSM 480 supported, GSM 450 not supported";
               0x02:"GSM 450 supported, GSM 480 not supported";
               0x03:"GSM 450 supported, GSM 480 supported ";
             };
         };

       byte7:"Octet3 of Mobile Station Classmark2 information element"
         {
           spare:3 "Spare"
             {
             };
           a51:1 "A5/1"
             {
               0x0:"A5/1 algorithm supported";
               0x1:"A5/1 algorithm Not supported";             	
             };
           es_ind:1 "ES IND"
             {
               0x0:"Controlled Early Classmark Sending option is not implemented in the MS";
               0x1:"Controlled Early Classmark Sending option is not implemented in the MS";             	
             };
           rev_level:2 "Revision level"
             {
               0x00:"Reserved for GSM phase 1";
               0x01:"Used by GSM phase 2 mobile stations";
               0x02:"Used by mobile stations supporting R99 or later versions of the protocol";
               0x03:"Reserved for future use, if nw received, it will use highest Revision level supported by nw";             	
             };
           spare:1 "Spare"
             {
             };
         };

         /* Default: 0x78, PS capability present, ss=3, MT-PP SMS supported, on support E-GSM */
       byte8:"Octet4 of Mobile Station Classmark2 information element"
         {
           spare:1 "Spare"
             {
             };
           vgcs:1 "VGCS"
             {
               0x0:"no VGCS capability or no notifications wanted";
               0x1:"VGCS capability and notifications wanted";	
             };
           vbs:1 "VBS"
             {
               0x0:"no VBS capability or no notifications wanted";
               0x1:"VBS capability and notifications wanted";	             	
             };
           sm_cap:1 "SM capability"
             {
               0x0:"Mobile station does not support mobile terminated point to point SMS";
               0x1:"Mobile station supports mobile terminated point to point SMS";             	
             };
           SSScr_ind:2 "SS Screen Indicator"
             {
               0x00:"default value of phase 1";
               0x01:"capability of handling of ellipsis notation and phase 2 error handling ";
               0x02:"for future use";
               0x03:"for future use";             	
             };
           ps_cap:1 "PS capability"
             {
               0x0:"PS capability not present";
               0x1:"PS capability present";	             	
             };
           spare:1 "Spare"
             {
             };
         };

         /* Default: 0x81, Classmark3 present, A5/2 supported */
       byte9:"Octet5 of Mobile Station Classmark2 information element"
         {
           a52:1 "A5/2"
             {
               0x0:"A5/2 algorithm not supported";
               0x1:"A5/2 algorithm supported";             	
             };
           spare:1 "Spare"
             {
             };
           cmsp:1 "CMSP"
             {
               0x0:"Network initiated MO CM connection request not supported";
               0x1:"Network initiated MO CM connection request supported for at least one CM protocol";              	
             };
           solsa:1 "SoLSA"
             {
               0x0:"The ME does not support SoLSA";
               0x1:"The ME supports SoLSA";              	
             };
           spare:1 "Spare"
             {
             };
           lcsva_cap:1 "LCSVA CAP"
             {
               0x0:"location request notification via CS domain not supported";
               0x1:"location request notification via CS domain supported";             	
             };
           spare:1 "Spare"
             {
             };
           cm3:1 "Support options in Classmark 3"
             {
               0x0:"The MS does not support any options that are indicated in CM3";
               0x1:"The MS supports options that are indicated in classmark 3 IE";             	
             };
         };

       byte10:"GPRS related parameters used in Mobile Station Radio Access Capability IE"
         {
           rev_level_ind:1 "Revision Level Indicator"
             {
               0x0:"R98 or before MS";
               0x1:"R99 or later MS";
             };
           gprs_ext_dyna_cap:1 "GPRS Extended Dynamic Allocation Capability"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };
           gprs_mtslot_cap:5 "GPRS Multi slot capability"
             {
               0x0a:"GPRS Multislot Class 10";
               0x0c:"GPRS Multislot Class 12";
             };
           gprs_mtslot_cap_p:1 "GPRS Multi slot capability present"
             {
               0x0:"Multislot capability Absent";
               0x1:"Multislot capability Present";
             };
         };

       byte11:"GPRS related parameters used in Mobile network capability IE"
         {
           sm_cap_gprs:1 "SM capabilities via GPRS channels"
             {
               0x0:"SM cap in GPRS Not Supported";
               0x1:"SM cap in GPRS Supported";
             };
           gea_7:1 "GEA7"
             {
               0x0:"GEA7 algorithm not supported";
               0x1:"GEA7 algorithm supported";
             };
           gea_6:1 "GEA6"
             {
               0x0:"GEA6 algorithm not supported";
               0x1:"GEA6 algorithm supported";
             };
           gea_5:1 "GEA5"
             {
               0x0:"GEA5 algorithm not supported";
               0x1:"GEA5 algorithm supported";
             };
           gea_4:1 "GEA4"
             {
               0x0:"GEA4 algorithm not supported";
               0x1:"GEA4 algorithm supported";
             };
           gea_3:1 "GEA3"
             {
               0x0:"GEA3 algorithm not supported";
               0x1:"GEA3 algorithm supported";
             };
           gea_2:1 "GEA2"
             {
               0x0:"GEA2 algorithm not supported";
               0x1:"GEA2 algorithm supported";
             };
           gea_1:1 "GEA1"
             {
               0x0:"GEA1 algorithm not supported";
               0x1:"GEA1 algorithm supported";
             };
         };

       byte12:"GPRS related parameters used in Mobile network capability IE"
         {
           edge_ext_dyna_cap:1 "EDGE Extended Dynamic Allocation Capability"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };
	       edge_mtslot_cap:5 "EDGE Multi slot capability"
             {
               0x0a:"EDGE Multislot Class 10";
               0x0c:"EDGE Multislot Class 12";
             };
	       edge_mtslot_cap_p:1 "EDGE Multi slot capability present"
             {
               0x0:"Multislot capability Absent";
               0x1:"Multislot capability Present";
             };
           pfc:1 "BSS packet flow proedure"
             {
               0x0:"PFC Off";
               0x1:"PFC On";
             };
         };

       byte13:" "
         {
           spare:8 "Spare"
             {
             };
         };

       byte14:" "
         {
           spare:8 "Spare"
             {
             };
         };

       byte15:"R4 Capabilities"
         {
           spare:4 "Spare"
             {
             };
           extended_dtm:1 "Extended DTM GPRS/EDGE Multi Slot Class"
             {
               0x0:"Extended DTM GPRS/EDGE not supported";             	
             };
           geran_fp1:1 "GERAN Feature Package 1"
             {
               0x0:"GERAN Feature Package 1 not supported";
               0x1:"GERAN Feature Package 1 supported";	
             };
           tdd_support:1 "UMTS 1.28 Mcps TDD Radio Access Technology Capability"
             {
               0x0:"UMTS 1.28 Mcps TDD Radio Access Technology Capability not supported"; 
               0x1:"UMTS 1.28 Mcps TDD Radio Access Technology Capability supported";	             	
             };
           gsm_750:1 "GSM 750 Associated Radio Capability"
             {
               0x0:"GSM 750 Associated Radio Capability not supported"; 
               0x1:"GSM 750 Associated Radio Capability supported";
             };
         };

       byte16:"R5 Capabilities"
         {
           spare:1 "Spare"
             {
             };
           Oct_psk_multislot:2 "8PSK Multislot Power Profile"
             {
               0x00:"8-PSK_MULTISLOT_POWER_PROFILE 0";
               0x01:"8-PSK_MULTISLOT_POWER_PROFILE 1";
               0x02:"8-PSK_MULTISLOT_POWER_PROFILE 2";
               0x03:"8-PSK_MULTISLOT_POWER_PROFILE 3";
             };
           gmsk_multislot:2 "GMSK Multislot Power Profile"
             {
               0x00:"GMSK_MULTISLOT_POWER_PROFILE 0";
               0x01:"GMSK_MULTISLOT_POWER_PROFILE 1";
               0x02:"GMSK_MULTISLOT_POWER_PROFILE 2";
               0x03:"GMSK_MULTISLOT_POWER_PROFILE 3";             	
             };
           geran_fp2:1 "GERAN Feature Package 2"
             {
               0x0:"GERAN Feature Package 2 not supported";
               0x1:"GERAN Feature Package 2 supported";	             	
             };
           geran_iu:1 "GERAN Iu Mode Capability"
             {
               0x0:"GERAN Iu Mode Capability not supported";
               0x1:"GERAN Iu Mode Capability supported";             	
             };
           high_multislot:1 "High Multislot Capability"
             {
               0x0:"High Multislot Capability not supported";
               0x1:"High Multislot Capability supported";             	
             };
         };

       byte17:"R6 Capabilities"
         {
           spare:1 "Spare"
             {
             };
           rptd_acch:1 "Repeated ACCH Capability"
             {
               0x0:"The mobile station does not support Repeated SACCH";
               0x1:"The mobile station supports Repeated SACCH and Repeated Downlink FACCH";             	
             };
           dtm_high_multislot:1 "DTM GPRS High Multi Slot Class"
             {
               0x0:"DTM GPRS High Multi Slot not supported";
               0x1:"DTM GPRS High Multi Slot supported";              	
             };
           dtm_enhancement:1 "DTM Enhancements Capability"
             {
               0x0:"DTM Enhancements Capability not supported";
               0x1:"DTM Enhancements Capability supported";              	
             };
           saic:2 "Downlink Advanced Receiver Performance"
             {
               0x00:"Downlink Advanced Receiver Performance not supported";
               0x01:"Downlink Advanced Receiver Performance phase I supported";
               0x02:"Downlink Advanced Receiver Performance phase II supported";
             };
           t_gsm_900:1 "T-GSM 900 Bands Supported"
             {
               0x0:"T-GSM 900 Bands not supported";
               0x1:"T-GSM 900 Bands supported";              	
             };
           t_gsm_400:1 "T-GSM 400 Bands Supported"
             {
               0x0:"T-GSM 400 Bands not supported";
               0x1:"T-GSM 400 Bands supported";               	
             };
         };

       byte18:"R7 Capabilities"
         {
           spare:4 "Spare"
             {
             };
           add_pos_cap:1 "Additional Positioning Capabilities"
             {
               0x0:"The mobile station does not support additional positioning capabilities which can be retrieved using RRLP";
               0x1:"The mobile station supports additional positioning capabilities which can be retrieved using RRLP";	
             };
           cphr_set:1 "Ciphering Mode Setting Capability"
             {
               0x0:"The mobile station does not support the Ciphering Mode Setting IE in the DTM ASSIGNMENT COMMAND message";
               0x1:"The mobile station supports the Ciphering Mode Setting IE in the DTM ASSIGNMENT COMMAND message";              	
             };
           t_gsm_810:1 "T-GSM 810 Associated Radio Capability"
             {
               0x0:"T-GSM 810 Associated Radio Capability not supported";
               0x1:"T-GSM 810 Associated Radio Capability supported";              	
             };
           t_gsm_710:1 "T-GSM 710 Associated Radio Capability"
             {
               0x0:"T-GSM 710 Associated Radio Capability not supported";
               0x1:"T-GSM 710 Associated Radio Capability supported";
             };
         };

       byte19:"R8 Capabilities"
         {
           spare:4 "Spare"
             {
             };
           pbcr:1 "Priority-based reselection support"
             {
               0x0:"Priority-based reselection not supported";
               0x1:"Priority-based reselection supported";             	
             };
           e_utra_meas:1 "E-UTRA Measurement and Reporting support"
             {
               0x0:"E-UTRA Measurement and Reporting not supported";
               0x1:"E-UTRA Measurement and Reporting supported";             	
             };
           e_utra_tdd:1 "E-UTRA TDD support"
             {
               0x0:"E-UTRA TDD not supported";
               0x1:"E-UTRA TDD supported";
             };
           e_utra_fdd:1 "E-UTRA FDD support"
             {
               0x0:"E-UTRA FDD not supported";
               0x1:"E-UTRA FDD supported";	
             };
         };

       byte20:"R9 Capabilities"
         {
           spare:5 "Spare"
             {
             };
           vamos:2 "VAMOS Level"
             {
               0x00:"VAMOS not supported";
               0x01:"VAMOS I supported";
               0x02:"VAMOS II supported";
               0x03:"VAMOS III supported";            	
             };
           spare:1 "Spare"
             {
             };
         };
       byte21:"R10 Capabilities"
         {
           spare:5 "Spare"
             {
             };
           Selective_Ciphering_DL_SACCH:1 "Selective Ciphering of Downlink SACCH"
             {
                0x0:"Selective Ciphering of Downlink SACCH not supported";
             	0x1:"Selective Ciphering of Downlink SACCH supported";            	
             };
           TIGHTER_cap:2 "TIGHTER Capability"
             {
               0x00:"TIGHTER not supported";
               0x01:"TIGHTER supported for speech and signalling channels only";
               0x02:"TIGHTER supported for speech and signalling channels and for GPRS and EGPRS, but not for EGPRS2";
               0x03:"TIGHTER supported for speech and signalling channels and for GPRS, EGPRS and EGPRS2";             	
             };
         };
       byte22:"R11 Capabilities"
         {
           spare:2 "Spare"
             {
             };
           EUTRA_Wideband_RSRQ:1 "E-UTRA Wideband RSRQ measurements support"
             {
               0x0:"E-UTRA wideband RSRQ measurements not supported";
               0x1:"E-UTRA wideband RSRQ measurements supported";              	
             };
           GERAN_Network_sharing:1 "GERAN Network Sharing support"
             {
               0x0:"GERAN network sharing not supported";
               0x1:"GERAN network sharing supported";             	
             };
           CS_to_PS_SRVCC_from_GERAN_to_EUTRA:2 "CS to PS SRVCC from GERAN to E-UTRA"
             {
               0x00:"CS to PS SRVCC from GERAN to E-UTRA FDD and TDD not supported";
               0x01:"CS to PS SRVCC from GERAN to E-UTRA FDD supported";
               0x02:"CS to PS SRVCC from GERAN to E-UTRA TDD supported";
               0x03:"CS to PS SRVCC from GERAN to E-UTRA FDD and TDD supported";
             };
           CS_to_PS_SRVCC_from_GERAN_to_UTRA:2 "CS to PS SRVCC from GERAN to UTRA"
             {
               0x00:"CS to PS SRVCC from GERAN to U MTS FDD and 1.28 Mcps TDD not supported";
               0x01:"CS to PS SRVCC from GERAN to UMTS FDD supported";
               0x02:"CS to PS SRVCC from GERAN to UMTS 1.28 Mcps TDD supported";
               0x03:"CS to PS SRVCC from GERAN to UMTS FDD and 1.28 Mcps TDD supported";             	
             };
         };
       byte23:"R12 Capabilities"
         {
           spare:3 "Spare"
             {
             };
           Extended_EARFCN:1 "Extended EARFCN value range"
             {
                0x0:"Extended EARFCN value range not supported";
             	0x1:"Extended EARFCN value range supported";              	
             };
           Extended_TSC_Set:1 "Extended TSC Set Capability support"
             {
               0x0:"Extended TSC sets not supported";
               0x1:"Extended TSC sets supported";             	
             };
           EUTRA_MULTIPLE_FREQ_Band:1 "E-UTRA Multiple Frequency Band Indicators support"
             {
               0x0:"Multiple Frequency Band Indicators in E-UTRAN not supported";
               0x1:"Multiple Frequency Band Indicators in E-UTRAN supported";              	
             };
           UTRA_MULTIPLE_FREQ_Band:1 "UTRA Multiple Frequency Band Indicators support"
             {
               0x0:"Multiple Frequency Band Indicators in UTRAN not supported";
               0x1:"Multiple Frequency Band Indicators in E-UTRAN supported";             	
             };
           ER_BAND:1 "ER Band Support"
             {
               0x0:"ER-GSM not supported";
               0x1:"ER-GSM supported";             	
             };
         };
     };
#endif /* __L1_STANDALONE__ */

#if defined(__ATCMD_ONOFF_CHECK__)
LID_BIT VER_LID(NVRAM_EF_ATCMD_ON_OFF_CHECK_LID)
     atcmd_check_context_struct *NVRAM_EF_ATCMD_ON_OFF_CHECK_TOTAL
     {

   };

#endif


#if defined(__ETWS_SUPPORT__)
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_ETWS_SETTING_LID
* DESCRIPTION
*      To save settings of AT+ETWS. 
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID is updated when AT+ETWS sent to MD.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_ETWS_SETTING_LID)
     nvram_ef_etws_setting_struct *NVRAM_EF_ETWS_SETTING_TOTAL
     {
	     etws_setting: "ETWS settings"
		 {
			  etws_setting0: 1 "lowest bit. It indicate that UE can recieve normal ETWS or not"
			  {
			        0x0:"UE cannot recieve normal ETWS";
					0x1:"UE can recieve normal ETWS";
			  };
			  etws_setting1: 1 "2nd lower bit. It indicate that UE can recieve security ETWS or not"
			  {
			        0x0:"UE cannot recieve security ETWS";
					0x1:"UE can recieve security ETWS";
			  };
			  etws_setting2: 1 "3rd lower bit. It indicate that UE can recieve testing ETWS or not"
			  {
			        0x0:"UE cannot recieve testing ETWS";
					0x1:"UE can recieve testing ETWS";
			  };
			  padding: 5 "padding"
			  {				  
			  };
		 };
     };

#endif


/********************************************************************************************
* LID_NAME
*      NVRAM_EF_IMEI_IMEISV_LID
* DESCRIPTION
*       read IMEI and IMEISV   
* INFOMATION
*      Can OTA Reset: No, has compile option at LID default value
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/

     LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_IMEI_IMEISV_LID)
     nvram_ef_imei_imeisv_struct *NVRAM_EF_IMEI_IMEISV_TOTAL
     {
         imei:"The IMEI is 15 digit"
         {
         };

       svn:"Software version number"
         {
         };
       pad:"Padding Byte"
         {
         };
     };


/********************************************************************************************
* LID_NAME
*      NVRAM_EF_MS_SECURITY_LID
* DESCRIPTION
*       PIN lock/ ME lock states 
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: When lock state changes
*********************************************************************************************/
LID_BIT MULTIPLE_LID VER_LID(NVRAM_EF_MS_SECURITY_LID)
     smu_security_info_struct *NVRAM_EF_MS_SECURITY_TOTAL
     {
       security_indication:"Security indication"
         {
           pl:1 "Phone lock"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           nl:1 "Network lock"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           nsbl:1 "Network subset lock"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           spl:1 "Service provide lock"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           cl:1 "Corporate lock"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           il:1 "IMSI lock"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           al:1 "Auto lock"
             {
               0x0:"Not Supported";
               0x1:"Supported";
             };

           res:1 "Reserved"
             {
                 /*
                  * 0x0: "Not Supported";
                  * 0x1: "Supported";
                  */
             };

         };
       phone_key:"Phone lock Password"
         {
         };
       last_imsi:"Last IMSI code"
         {
         };

       pin1:"Last IMSI code"
         {
         };
       pin1_valid:"Last IMSI code"
         {
         };
       phone_lock_verified:"Phone Lock verified"
         {
         };
       iccid:"ICCID"
         {
         };
     };



#if !defined(L4_NOT_PRESENT)

/***********************************************************************
  ***  This is a nvram data item bit level description for meta tools nvram editor
  ***
  ***  Logical Data Item ID : NVRAM_EF_PHB_LID
  ***
  ***  Module: PHB
  ***
  ***  Description:
  ***
  ***  Maintainer: Exce Lee, Amanda Gau
  ***
  ***********************************************************************/
#ifndef __PHB_STORAGE_BY_MMI__
#if NVRAM_EF_PHB_TOTAL
LID_BIT VER_LID(NVRAM_EF_PHB_LID)
     nvram_ef_phb_struct *NVRAM_EF_PHB_TOTAL
     {
         alpha_id:"Alpha identifier"
         {
         };

       BCD_length:"Length of BCD number"
         {
         };
       TON_NPI:"TON and NPI"
         {
         };
       DialNum:"Dailling number"
         {
         };
       cc_ident:"Capability/ configuration identifier"
         {
         };
       pad:"Extension 1 record identifier"
         {
         };
     };
#endif /* NVRAM_EF_PHB_TOTAL */
#endif /* !__PHB_STORAGE_BY_MMI__ */


#if !defined(__PHB_NO_CALL_LOG__) & !defined(__L1_STANDALONE__)

/***********************************************************************
  ***  This is a nvram data item bit level description for meta tools nvram editor
  ***
  ***  Logical Data Item ID : NVRAM_EF_PHB_LN_ENTRY_LID
  ***
  ***  Module:
  ***
  ***  Description:
  ***
  ***  Maintainer: Kefeng Lian
  ***
  ***********************************************************************/
LID_BIT VER_LID(NVRAM_EF_PHB_LN_ENTRY_LID)
     nvram_ef_phb_ln_struct *NVRAM_EF_PHB_LN_ENTRY_TOTAL
     {
         no_entry:"Numbers of entries"
         {
         };
         padding1:"padding1"
         {
         };

         padding2:"padding2"
         {
         };
         padding3:"padding3"
         {
         };
       array:"Last Number information"
         {
         };
       array.name_length:"name length"
         {
         };
       array.name_dcs:"name dcs"
         {
         };
       array.name:"name"
         {
         };
       array.count:"count"
         {
         };
       array.addr_length:"addr length"
         {
         };
       array.addr_type:"addr type"
         {
         };
       array.addr_bcd:"addr bcd"
         {
         };
       array.accu_times:"accu times"
         {
         };
       array.is_new_event:"is new event"
         {
         };
       array.adn_record_index:"adn record index"
         {
         };
       array.call_duration:"call duration"
         {
         };
       array.time:"Call time"
         {
         };
       array.time.rtc_sec:"Second"
         {
         };
       array.time.rtc_min:"Minute"
         {
         };
       array.time.rtc_hour:"Hour"
         {
         };
       array.time.rtc_day:"Day"
         {
         };
       array.time.rtc_mon:"Month"
         {
         };
       array.time.rtc_wday:"Week day"
         {
         };
       array.time.rtc_year:"Year"
         {
         };
     };

 /***********************************************************************
   ***  This is a nvram data item bit level description for meta tools nvram editor
   ***
   ***  Logical Data Item ID : NVRAM_EF_PHB_LN_TYPE_SEQ_LID
   ***
   ***  Module:
   ***
   ***  Description:
   ***
   ***  Maintainer: Kefeng Lian
   ***
   ***********************************************************************/
 LID_BIT VER_LID(NVRAM_EF_PHB_LN_TYPE_SEQ_LID)
     nvram_ef_phb_ln_type_seq_struct *NVRAM_EF_PHB_LN_TYPE_SEQ_TOTAL
     {
     };


#endif /*!defined(__PHB_NO_CALL_LOG__) & !defined(__L1_STANDALONE__) */

/* UEM*/
LID_BIT VER_LID(NVRAM_EF_CUST_HW_LEVEL_TBL_LID)
     custom_hw_level_struct *NVRAM_EF_CUST_HW_LEVEL_TBL_TOTAL
     {
     #if 1 /* MODEM only*/
         PWM1:" PWM1[Level][0]: freq, PWM1[Level][1]: duty";
         PWM2:" PWM2[Level][0]: freq, PWM2[Level][1]: duty";
         PWM3:" PWM3[Level][0]: freq, PWM3[Level][1]: duty";

         MainLCD_Contrast:" MainLCD Contrast [Level 1 ~ 15]";
         /*
          * MainLCD_Bias[LCD_PARAM_MAX_LEVEL];
          * MainLCD_Linerate[LCD_PARAM_MAX_LEVEL];
          * MainLCD_Temp[LCD_PARAM_MAX_LEVEL];
          */
         SubLCD_Contrast:" SubLCD Contrast [Level 1 ~ 15]";
         /*
          * SubLCD_Bias[LCD_PARAM_MAX_LEVEL];
          * SubLCD_Linerate[LCD_PARAM_MAX_LEVEL];
          * SubLCD_Temp[LCD_PARAM_MAX_LEVEL];
          */
         BatteryLevel:" Battery Level [Level 1 ~ 10 ] ";
     #else
/* under construction !*/
     #endif /* MODEM only*/
     };

LID_BIT VER_LID(NVRAM_EF_UEM_MANUFACTURE_DATA_LID)
     uem_context_manufacture_struct *NVRAM_EF_UEM_MANUFACTURE_DATA_TOTAL
     {
         me_manufacture_id:""
         {
         };
     };

LID_BIT VER_LID(NVRAM_EF_UEM_RMI_DATA_LID)
     uem_context_rmi_struct *NVRAM_EF_UEM_RMI_DATA_TOTAL
     {

         audio_mute_flag:"Audio mute flag"
         {
         };

       gpio_status:"GPIO status"
         {
         };
       silent_mode:"Silent mode ON/OFF"
         {
         };
       alert_mode:"Alert mode"
         {
         };
       country_code:"Country code"
         {
         };
       lang_id:"Language identifier"
         {
         };
       date_mode:"Date mode"
         {
         };
       time_mode:"Time mode"
         {
         };
       greeting_mode:"Greeting mode"
         {
         };
       greeting_text:"Greeting Text"
         {
         };
       greeting_text.text_dcs:"dcs"
         {
         };
       greeting_text.text_length:"Length"
         {
         };
       greeting_text.text:"context"
         {
         };

       alarm_info:"Alarm Information"
         {
         };
       alarm_info.alarm_format:"Alarm format"
         {
         };
       alarm_info.alarm_index:"Alarm index"
         {
         };
       alarm_info.type:"Alarm Type"
         {
         };
       alarm_info.text:"Alarm Text"
         {
         };
       alarm_info.recurr:"Alarm recurrence"
         {
         };

       alarm_info.data_time:"Alarm date and time"
         {
         };
       alarm_info.data_time.rtc_sec:"Second"
         {
         };
       alarm_info.data_time.rtc_min:"Minute"
         {
         };
       alarm_info.data_time.rtc_hour:"Hour"
         {
         };
       alarm_info.data_time.rtc_mon:"Month"
         {
         };
       alarm_info.data_time.rtc_wday:"Week day"
         {
         };
       alarm_info.data_time.rtc_year:"Year"
         {
         };
     };
#endif

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_PS_CONFORMANCE_TESTMODE_LID
* DESCRIPTION
*      To save the conformance test mode profiles.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID is updated by AT command - EPCT
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_PS_CONFORMANCE_TESTMODE_LID)
    nvram_ef_ps_conformance_testmode_struct* NVRAM_EF_PS_CONFORMANCE_TESTMODE_TOTAL
    {
        data:"Test mode and test profile";

            data[0]
            {
                val_d: 8"lower byte of test profile" {};
            };
            data[1]
            {
                val_d: 8"middle byte of test profile" {};
            };
            data[2]
            {
                val_d: 8"higher byte of test profile" {};
            };

            data[3]
            {
                val_d: 8"Test mode" 
                {
                    0x00: "None Test mode";
                    0x01: "CTA Test mode";
                    0x02: "FTA Test mode";
                    0x03: "IOT Test mode";
                    0x04: "OPERATOR Test mode";
                    0x05: "FACTORY Test mode";
                };
                
            };
    };

//__MOBILE_BROADBAND_PROVISION_CONTEXT__
#ifdef __MOBILE_BROADBAND_PROVISION_CONTEXT__
LID_BIT VER_LID(NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_LID)
    nvram_ef_mobile_broadband_provision_context_struct *NVRAM_EF_MOBILE_BROADBAND_PROVISION_CONTEXT_TOTAL
    {
        context_id:"context_id"
        {
        };
        context_type:"context_type"
        {
        };
        access_string:"access_string"
        {
        };
        user_name:"user_name"
        {
        };
        pass_word:"pass_word"
        {
        };
        compression:"compression"
        {
        };
        auth_type:"auth_type"
        {
        };
        plmn_in_digit:"plmn_in_digit"
        {
        };
        status:"entry_status"
        {
        };
    };
#endif /* __MOBILE_BROADBAND_PROVISION_CONTEXT__ */

//__MEDIATEK_SMART_QOS__
#ifdef __MEDIATEK_SMART_QOS__
LID_BIT VER_LID(NVRAM_EF_MSQ_LIST_LID)
    nvram_ef_msq_list_struct *NVRAM_EF_MSQ_LIST_TOTAL
    {
        is_msq_on:"Switch ON/OFF of MSQ"
        {
            is_msq_on:8 "Switch ON/OFF of MSQ"
            {
                0x00: "MSQ: OFF";
                0x01: "MSQ: ON";
            };
        };

        msq_entry:"MSQ entries";
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
    };
#endif /* __MEDIATEK_SMART_QOS__ */
    
#ifdef __TC02_SECURITY_REQUIREMENT__
/********************************************************************************************
* LID_NAME
*	   NVRAM_EF_MM_IMSI_LOCI_GLOCI_LID
* DESCRIPTION
*	   Store updated value of IMSI, LOCI and PS LOCI for use in man-in-middle-attack prevention
* INFOMATION
*	   Can OTA Reset: Yes
*	   Update Scenario: Updated whenever any of the following changes
*      a) IMSI, b) LOCI, or c)PS LOCI
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_MM_IMSI_LOCI_GLOCI_LID)
     kal_uint8 * NVRAM_EF_MM_IMSI_LOCI_GLOCI_TOTAL  /*nvram_imsi_loci_gloci is of type kal_uint8*/
     {
     };
#endif 

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_RAC_PREFERENCE_LID
* DESCRIPTION
*       used by RAC for updating RAC context   
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/

LID_BIT VER_LID(NVRAM_EF_RAC_PREFERENCE_LID)
     nvram_ef_rac_preference_struct *NVRAM_EF_RAC_PREFERENCE_TOTAL
     {
         arg1:"PLMN selection mode / Preferred Service in NMO III"
         {
#ifdef __PLMN_LIST_PREF_SUPPORT__
           plmn_list_pref:1 "PLMN list preference"
             {
               0x0:"ACCURACY First";
               0x1:"SPEED First";
             };
#else
           unused:1 "Unused"
             {

             };

#endif
#ifdef __DYNAMIC_ROAMING_SUPPORT__
           roaming_support: 1 "Support Roaming"
             {
               0x0: "Not Allow Roaming";
               0x1: "Allow Roaming";
             };
#else
           unused:1 "Unused"
             {

             };
#endif
#ifdef __CSG_SUPPORT__
           csg_auto_search_preference:1 "CSG auto search preference"
             {
               0x0:"DISABLE";
               0x1:"ENABLE";
             };
#else
           unused:1 "Unused"
             {

             };
#endif /* __CSG_SUPPORT__ */
#ifdef __MM_INTEGRITY_PREF__
           mm_integrity_check_preference:1 "MM integrity check preference"
             {
               0x0:"enable integrity check";
               0x1:"disable integrity check when test SIM";
             };
#else
           unused:1 "Unused"
             {

             };
#endif
           conn_type:1 "GPRS Connection Type"
             {
               0x0:"When Needed";
               0x1:"Always on";
             };
           pf_serv:2 "Preferred service"
             {
               0x0:"CS_ONLY";
               0x1:"PS_ONLY";
               0x2:"BOTH_PREFER_CS";
               0x3:"BOTH_PREFER_PS";
             };
           plmn_sel_mode:1 "PLMN select mode"
             {
               0x0:"Manual";
               0x1:"Automatic";
             };
         };

         rat_mode: "RAT_MODE"
         {
           pf_rat_mode: 8 "Prefered RAT MODE"
             {
               0x1: "L4C_RAT_GSM";
               0x2: "L4C_RAT_UMTS";
               0x3: "L4C_RAT_GSM_UMTS";
               0x4: "L4C_RAT_LTE";
               0x5: "L4C_RAT_GSM_LTE";
               0x6: "L4C_RAT_UMTS_LTE";
               0x7: "L4C_RAT_GSM_UMTS_LTE";
             };
         };

         preferred_rat: "PREFERRED_RAT"
         {
           pf_rat: 7 "Preferred RAT"
             {
               0x0: "L4C_RAT_NONE";
               0x1: "L4C_RAT_GSM";
               0x2: "L4C_RAT_UMTS";
               0x4: "L4C_RAT_LTE";
               0x20: "1xRTT";
               0x40: "HRPD";
               0x60: "HYBRID";
             };
         };

         preference: "DATA TRANSFER PREFERENCE"
         {
#ifdef __MONITOR_PAGE_DURING_TRANSFER__
            pf_gprs_transfer: 2 "gprs transfer preference"
            {
                0x0: "DATA_PREFER";
                0x1: "CALL_PREFER";
            };
#else
            unused: 2 "Unused"
            {
            };
#endif
#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
            pf_peer_gprs_transfer: 2 "peer gprs transfer preference"
            {
                0x0: "NO_PREEMPTION";
                0x1: "PREEMPT_PEER_PS_TRANSFER";
            };
#else
            unused: 2 "Unused"
            {
            };
#endif
            pf_fdd_hspa_preference: 2 "fdd hspa preference"
            {
                0x0: "HSPA_OFF";
                0x1: "HSDPA_ON";
                0x2: "HSDPA_HSUPA_ON";
                0x3: "HSPA_PLUS_ON";
            };
            pf_tdd_hspa_preference: 2 "tdd hspa preference"
            {
                0x0: "HSPA_OFF";
                0x1: "HSDPA_ON";
                0x2: "HSDPA_HSUPA_ON";
                0x3: "HSPA_PLUS_ON";
            };
        };
     roaming_setting: "ROAMING RELATED SETTING"
           {
           pf_iroaming: 1 "international roaming support"
               {
                 0x0: "ENABLE";
                 0x1: "DISABLE";
               };
           pf_nroaming: 1 "national roaming support"
               {
                 0x0: "ENABLE";
                 0x1: "DISABLE";
               };
           pf_hhplmn: 1 "auto return to high priority PLMN support"
               {
                 0x0: "ENABLE";
                 0x1: "DISABLE";
               };

           pf_roamingbroker: 1 "enable VIVO roaming broker"
               {
                 0x0: "DISABLE";
                 0x1: "ENABLE";
               };
	   #ifdef __LTE_ROAMING_SUPPORT__
	       pf_lteroaming: 1 "lte data roaming support"
		   	   {
                 0x0: "ENABLE";
                 0x1: "DISABLE";
               };
           unused: 3 "Unused"
       #else
           unused: 4 "Unused"
       #endif
               {
               };
           };

    mm_ivt: "MOBILITY MANAGEMENT IMS VOICE TERMINATION"
    {
        mm_ivt:8 "mobility management IMS voice termination"
        {
            0x1: "DISABLED";
            0x2: "ENABLED";
        };
    };

    utran_vdp: "VOICE DOMAIN PREFERENCE FOR UTRAN"
    {
        utran_vdp:8 "voice domain preference for UTRAN"
        {
            0x1: "CS Voice only";
            0x2: "CS Voice preferred, IMS PS Voice as secondary";
            0x3: "IMS PS Voice preferred, CS Voice as secondary";
        };
    };
    
    reported_rat: "SUPPORTED RAT MODE REPORTED TO NETWORK"
    {
        reported_rat:8 "supported RAT mode reported to network"
        {
           0x1: "GSM";
           0x2: "UMTS";
           0x3: "GSM and UMTS";
           0x4: "LTE";
           0x5: "GSM and LTE";
           0x6: "UMTS and LTE";
           0x7: "GSM and UMTS and LTE";
           0x10: "C2K";
           0x14: "LTE and C2K";
           0x17: "GSM and UMTS and LTE and C2K";
        };
    };

    ir_preferred_rat: "IR PREFFERRED RAT"
    {
        ir_preferred_rat:8 "ir prefferred rat"
        {
           0x0: "L4C_RAT_NONE";
           0x1: "L4C_RAT_GSM";
           0x2: "L4C_RAT_UMTS";
           0x4: "L4C_RAT_LTE";
        };
    };

    disable_rat: "TMO diable 2G"  /*TMO requirement*/
    {
        disable_rat: 8 "DISABLE RAT"
        {
		   0x00: "L4C_RAT_NONE";
           0x01: "L4C_RAT_GSM";
           0x02: "L4C_RAT_UMTS";
           0x03: "L4C_RAT_GSM_UMTS";
           0x04: "L4C_RAT_LTE";
           0x05: "L4C_RAT_GSM_LTE";
           0x06: "L4C_RAT_UMTS_LTE";
           0x07: "L4C_RAT_GSM_UMTS_LTE";
         };
    };
     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_REGIONAL_PHONE_MODE_LID
* DESCRIPTION
*      Configure the setting of early mcc/mnc read for power-on animation, which is a part of regional phone feature
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update by the request from CCCI (i.e. from AP) a boot up.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_REGIONAL_PHONE_MODE_LID)
     nvram_ef_regional_phone_mode_struct *NVRAM_EF_REGIONAL_PHONE_MODE_TOTAL
     {
        mode: "REGIONAL PHONE MODE"
        {
            regional_phone_mode: 8 "Power-on annimation mode"
            {
                0x0: "Disable MCC/MNC specific power-on annimation";
                0x1: "Enable MCC/MNC specific power-on annimation";
            };
        };
     };



#ifdef __CHANNEL_LOCK__
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_CH_LOCK_INFO_LID
* DESCRIPTION
*      Configure the setting of channel lock info, it contains which rat and cell to be considered for channel lock.
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update once during task init.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_CH_LOCK_INFO_LID)
    nvram_ef_ch_lock_info_struct * NVRAM_EF_CH_LOCK_INFO_TOTAL
    {
       lock_supported: "CHANNEL LOCK SUPPORT STATUS"
       {
          lock_supported: 8"channel lock support status"
          {
              0x0: "channel lock not supported";
              0x1: "channel lock supported";
          };
       };
       lock_state: "CHANNEL LOCK STATE"
       {
           lock_state: 8 "channel lock state"
           {
              0x0: "channel lock state inactive";
              0x1: "channel lock state GAS";
              0x2: "channel lock state UAS";
              0x3: "channel lock state EAS";
           };
       };
       eas_info: "EAS CHANNEL LOCK INFO" {};
          eas_info.earfcn: "EAS earfcn to channel lock" {};
          eas_info.pci: "EAS pci to channel lock" {};
       uas_info: "UAS channellock info" {};
          uas_info.uarfcn: "UAS uarfcn to channel lock" {};
          uas_info.psc: "UAS psci to channel lock" {};
       gas_info: "GAS channellock info" {}; 
          gas_info.arfcn: "GAS arfcn to channel lock" {};
          gas_info.band_indicator: "GAS band indicator to channel lock" {};
       lock_mode: "CHANNEL LOCK MODE"
       {
           lock_mode: 8 "channel lock mode"
           {
              0x0: "channel lock allowed in idle state only, ";
              0x1: "channel lock allowed in idle and measuremnt report will be sent for locked channel only";
              0x2: "channel lock allowed in idle and Handover and CCO allowed only for locked channel";
              0x3: "channel lock allowed in both idle and connected";
           };
       };
    };
#endif /* __CHANNEL_LOCK__ */

/***************************************************************************************************************
* LID_NAME
*      NVRAM_EF_LTE_ONLY_OPER_SIM_CUSTOMIZATION_LID
* DESCRIPTION
*      LTE only operator SIM: RAT mode changes as  LTE only in PS supporting LTE. Camps to limited service on PS not supporting LTE mode. 
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID will update based on AT command from AP.
****************************************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_LTE_ONLY_OPER_SIM_CUSTOMIZATION_LID)
     nvram_ef_lte_only_oper_sim_customization_struct *NVRAM_EF_LTE_ONLY_OPER_SIM_CUSTOMIZATION_TOTAL
     {
        change_rat_mode_lte_only_for_lte_capable_ps: "LTE only operator SIM will set RAT mode as LTE only on LTE support PS"
        {
            change_rat_mode_lte_only_for_lte_capable_ps: 8 "enable customization for LTE only operator SIM"
            {
                0x0: "Disable customization of: LTE only operator SIM sets RAT mode as LTE only on LTE support PS";
                0x1: "Enable  customization of: LTE only operator SIM sets RAT mode as LTE only on LTE support PS";
            };
        };
		only_limited_camping_for_non_lte_capable_ps: "LTE only operator SIM should be in limted service for NON-LTE support PS"
        {
            only_limited_camping_for_non_lte_capable_ps: 8 "enable customization for LTE only operator SIM"
            {
                0x0: "Disable customization of: LTE only operator SIM sets to be in limted service for NON-LTE support PS";
                0x1: "Enable  customization of: LTE only operator SIM sets to be in limted service for NON-LTE support PS";
            };
        };
     };




#if defined (__CCM_NO_RESET__)
 /********************************************************************************************
 * LID_NAME
 *      NVRAM_EF_ALS_LINE_ID_LID
 * DESCRIPTION
 *       used to save Line ID and last call cost
 * INFOMATION
 *      Can OTA Reset: Yes
 *      Update Scenario: This LID will update once during task init.
 *********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_ALS_LINE_ID_LID)
     nvram_ef_als_line_id_struct *NVRAM_EF_ALS_LINE_ID_TOTAL
     {
         als_line_id:"Alternate Line Service"
         {
           als_line_id:8 "Line ID"
           {
             0x00:"Line 1";
             0x01:"Line 2";
           };
         };
    	 last_ccm: "Last call cost"
    	 {
    	 };
     };
#elif defined (__CPHS__)
LID_BIT VER_LID(NVRAM_EF_ALS_LINE_ID_LID)
     nvram_ef_als_line_id_struct *NVRAM_EF_ALS_LINE_ID_TOTAL
     {
         als_line_id:"Alternate Line Service"
         {
           als_line_id:8 "Line ID"
           {
             0x00:"Line 1";
             0x01:"Line 2";
           };
         };
     };
#endif


/********************************************************************************************
* LID_NAME
*      NVRAM_EF_PS_SIM_MAP_LID
* DESCRIPTION
*      To store the SIM slot mapping for each protocol.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID should be updated only by AP.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_PS_SIM_MAP_LID)
    nvram_ef_ps_sim_map_struct *NVRAM_EF_PS_SIM_MAP_TOTAL
    {
        ps_sim_map:"SIM slot mapping for each protocol";
    };

#ifdef __NVRAM_SECRET_DATA__
#ifdef __NVRAM_SML_ACCESSIBLE__
/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SML_NONCE_LID
* DESCRIPTION
*      To store the SIM slot mapping for each protocol.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID should be updated only by AP.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SML_NONCE_LID)
    nvram_ef_sml_nonce_struct *NVRAM_EF_SML_NONCE_TOTAL
    {
        nonce_length:"Nonce Length"
        {
        };

        nonce:"Nonce Data"
        {
        };
    };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SML_UNLOCK_CODE_LID
* DESCRIPTION
*      To store the SIM slot mapping for each protocol.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID should be updated only by AP.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SML_UNLOCK_CODE_LID)
    nvram_ef_sml_unlock_code_struct *NVRAM_EF_SML_UNLOCK_CODE_TOTAL
    {
        unlock_code:"Unlock Code"
        {
        };
    };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_SML_NONCE_LID
* DESCRIPTION
*      To store the SIM slot mapping for each protocol.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID should be updated only by AP.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_SML_SIGNATURE_LID)
    nvram_ef_sml_signature_struct *NVRAM_EF_SML_SIGNATURE_TOTAL
    {
        signature_length:"Signature Length"
        {
        };

        signature:"Signature Data"
        {
        };
    };
#endif
#endif

#if defined(__SUBSIDY_LOCK__) || defined(__SMB_SIMME_LOCK_NV__)
 /***********************************************************************
   ***	This is a nvram data item bit level description for meta tools nvram editor
   ***
   ***	Logical Data Item ID : NVRAM_EF_SUBSIDY_LOCK_LID
   ***
   ***	Module: L4
   ***
   ***	Description: 
   ***         major_version: Major version of BLOB
   ***         minor_version: Minor version of BLOB
   ***         protection_algorithm: Protection Algorithm used
   ***         lock_operation: SIM lock operation
   ***         imei: IMEI of DUT
   ***         time_stamp: Time stamp value in BLOB
   ***         length: Length of BLOB
   ***         cat: Category change_flag and number of entries info
   ***         key: Category Key - Iteration count, salt and HCK info
   ***         code_cat_n: Network Configuration code: MCC-MNC pairs
   ***         code_cat_ns: Network Subset Configuration code: MCC-MNC-NS triplets
   ***         code_cat_sp: Service Provider Configuration code: MCC-MNC-GID triplets
   ***         signature: Signature: Verification code used for blob validation
   ***
   ***	Maintainer: Sagar Murthy
   ***
   ***********************************************************************/
 LID_BIT VER_LID(NVRAM_EF_SUBSIDY_LOCK_LID)
	 nvram_sml_sl_blob_context_struct *NVRAM_EF_SUBSIDY_LOCK_TOTAL
	 {
		 major_version:"Major version of BLOB"{};
		 minor_version:"Minor version of BLOB"{};
		 protection_algorithm:"Protection Algorithm used"{};
 		 lock_operation:"SIM lock operation"{};
 		 imei:"IMEI of DUT"{};
 		 time_stamp:"Time stamp value in BLOB"{};
 		 length:"Length of BLOB"{};
 		 cat:"Category change_flag and number of entries info"{};
 		 key:"Category Key - Iteration count, salt and HCK info"{};
 		 code_cat_n:"Network Configuration code: MCC-MNC pairs"{};
		 code_cat_ns:"Network Subset Configuration code: MCC-MNC-NS triplets"{};
		 code_cat_sp:"Service Provider Configuration code: MCC-MNC-GID triplets"{};
		 signature:"Signature: Verification code used for blob validation"{};
	  };

 /***********************************************************************
   ***	This is a nvram data item bit level description for meta tools nvram editor
   ***
   ***	Logical Data Item ID : NVRAM_EF_SUBSIDY_LOCK_ODM_DATA_LID
   ***
   ***	Module: L4
   ***
   ***	Description: 
   ***         public_key_mod: Public Key Modulus
   ***         public_key_exp: Public Key Exponent
   ***
   ***	Maintainer: Sagar Murthy
   ***
   ***********************************************************************/
 LID_BIT VER_LID(NVRAM_EF_SUBSIDY_LOCK_ODM_DATA_LID)
	 nvram_sml_sl_odm_data_struct *NVRAM_EF_SUBSIDY_LOCK_ODM_DATA_TOTAL
	 {
 		 public_key_mod:"Public Key Modulus"{};
 		 public_key_exp:"Public Key Exponent"{};
	  };
#endif /* __SUBSIDY_LOCK__ || __SMB_SIMME_LOCK_NV__ */

#ifdef __SMB_SIMME_LOCK_NV__ 
/***********************************************************************
  ***  This is a nvram data item bit level description for meta tools nvram editor
  ***
  ***  Logical Data Item ID : NVRAM_EF_SML_MAX_RETRY_COUNT_LID
  ***
  ***  Module: L4
  ***
  ***  Description: 
  ***         max_retry_count: Maximum retry count for NP, NSP, SP, C, SIM, NS SP and SIM C categories
  ***
  ***  Maintainer: Sagar Murthy
  ***
  ***********************************************************************/
LID_BIT VER_LID(NVRAM_EF_SML_MAX_RETRY_COUNT_LID)
    nvram_sml_max_retry_count_struct *NVRAM_EF_SML_MAX_RETRY_COUNT_TOTAL
    {
        max_retry_count:"Maximum retry count for NP, NSP, SP, C, SIM, NS SP and SIM C categories"{};
    };

/***********************************************************************
 *** This is a nvram data item bit level description for meta tools nvram editor
 ***
 ***  Logical Data Item ID : NVRAM_EF_SML_GBLOB_LID
 ***
 ***  Module: SMU
 ***
 ***  Description: GBLOB Data
 ***
 ***  Maintainer: Huang-Da Chen
 ***
 ***********************************************************************/
 LID_BIT VER_LID(NVRAM_EF_SML_GBLOB_LID)
     nvram_sml_gblob_s_context_struct *NVRAM_EF_SML_GBLOB_TOTAL
     {
         major_version:"Major version of GBLOB"{};
         minor_version:"Minor version of GBLOB"{};
         device_lock_state:"Device lock state"{};
         imei:"IMEI of DUT"{};
         sml_lock_type:"SML Lock Rule"{};
         sml_lock_sub_type:"SML Lock Sub Rule"{};
         tlv_data:"Custom Data with TLV format"{};
         dev_protection_algo:"Device Protection Algorithm used"{};
         dev_max_retry_cnt:"Device Lock Max Retry Count"{};
         dev_remain_retry_cnt:"Device Lock Current Remain Retry Count"{};
         device_interation_cnt:"interation_cnt used for device unlock"{};
         device_salt:"salt used for device unlock"{};
         device_hck:"hck used for device unlock"{};
         sig_protection_algo:"SIGNATURE Protection Algorithm used"{};
         signature:"Signature: Verification code used for gblob validation"{};
     };

/***********************************************************************
 *** This is a nvram data item bit level description for meta tools nvram editor
 ***
 ***  Logical Data Item ID : NVRAM_EF_SML_GBLOB_KEY_LID
 ***
 ***  Module: SMU
 ***
 ***  Description: GBLOB signature verification key
 ***
 ***  Maintainer: Huang-Da Chen
 ***
 ***********************************************************************/
 LID_BIT VER_LID(NVRAM_EF_SML_GBLOB_KEY_LID)
     nvram_sml_gblob_key_s_context_struct *NVRAM_EF_SML_GBLOB_KEY_TOTAL
     {
         key:"GBLOB Key: Key for gblob validation"{};
     };

/***********************************************************************
 *** This is a nvram data item bit level description for meta tools nvram editor
 ***
 ***  Logical Data Item ID : NVRAM_EF_SML_S_LID
 ***
 ***  Module: SMU
 ***
 ***  Description: Secured SML Context
 ***
 ***  Maintainer: Huang-Da Chen
 ***
 ***********************************************************************/
 LID_BIT VER_LID(NVRAM_EF_SML_S_LID)
     nvram_sml_context_s_struct *NVRAM_EF_SML_S_TOTAL
     {
         magic_head:"magic head"{};
         cat:"cat"{};
         key:"key"{};
         code_cat_n:"code_cat_n"{};
         code_cat_ns:"code_cat_ns"{};
         code_cat_sp:"code_cat_sp"{};
         code_cat_c:"code_cat_c"{};
         code_cat_sim:"code_cat_sim"{};
         code_cat_ns_sp:"code_cat_ns_sp"{};
         code_cat_sim_c:"code_cat_sim_c"{};
         range_cat_ns:"range_cat_ns"{};
         magic_tail:"magic_tail"{};
    };
#endif /* __SMB_SIMME_LOCK_NV__ */

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_PS_REG_SETTING_LID
* DESCRIPTION
*      To store PS Data Sim and Cellular Network Config related setting for each protocol.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID should be updated only by AP.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_PS_REG_SETTING_LID)
    nvram_ef_ps_reg_setting_struct *NVRAM_EF_PS_REG_SETTING_TOTAL
    {
        is_user_selected_main_ps:"User selected Main PS"{};
        iccid:"ICCID"{};
        edallow_state:"Edallow State"{};
        mobile_data_state:"Mobile Data State"{};
        data_roaming_state:"Data Roaming State"{};
        volte_state:"Volte State"{};
        ims_test_mode_state:"IMS Test Mode State"{};
    };

#ifdef __CARRIER_RESTRICTION__
 /***********************************************************************
   ***  This is a nvram data item bit level description for meta tools nvram editor
   ***
   ***  Logical Data Item ID : NVRAM_EF_L4_CARRIER_RESTRICTION_LID
   ***
   ***  Module: L4
   ***
   ***  Description: 
   ***         key: Control key state and key value
   ***         black_list: num has number of valid sets, code_cat_x has respective number of black list codes
   ***         white_list: num has number of valid sets, code_cat_x has respective number of white list codes
   ***         allow_all: 0: not allow all, 1: allow all SIM
   ***         carrier_rest_state: 0: Enabled, 1: Disabled
   ***         allowed_carriers_prioritized:0: allowed carriers not prioritized, 1: allowed carriers prioritized
   ***         multi_sim_policy:0: No multi-sim policy, 1: one valid SIM must be present
   ***
   ***  Maintainer: Sagar Murthy
   ***
   ***********************************************************************/
 LID_BIT VER_LID(NVRAM_EF_L4_CARRIER_RESTRICTION_LID)
    nvram_smu_carrier_match_context_struct *NVRAM_EF_L4_CARRIER_RESTRICTION_TOTAL
    {
        key:"Control key state and key value"{};
        black_list:"num has number of valid sets, code_cat_x has respective number of black list codes"{};
        white_list:"num has number of valid sets, code_cat_x has respective number of white list codes"{};
        allow_all:"0: not allow all, 1: allow all SIM"{};
        carrier_rest_state:"0: enabled, 1: disabled"{};
        allowed_carriers_prioritized:"0: allowed carriers not prioritized, 1: allowed carriers prioritized"{};
        multi_sim_policy:"0: No multi-sim policy, 1: one valid SIM must be present"{};
    };

#endif /* __CARRIER_RESTRICTION__ */


#ifdef __VZW_RSU_SUPPORT__
#if defined(__NVRAM_SECRET_DATA__) || defined(__META_SLA_ENHANCEMENT__)
#ifdef __NVRAM_SML_ACCESSIBLE__
/***********************************************************************
 ***  Logical Data Item ID : NVRAM_EF_SML_VZW_SIM_LOCK_LID
 ***
 ***  Module: SMU
 ***
 ***  Description: Verizon Secured SML Context
 ***
 ***  Maintainer: Huang-Da Chen
 ***
 ***********************************************************************/
 LID_BIT VER_LID(NVRAM_EF_SML_VZW_SIM_LOCK_LID)
     nvram_sml_vzw_sim_lock_context_struct *NVRAM_EF_SML_VZW_SIM_LOCK_TOTAL
     {
        major_version:"Major version of GBLOB"{};
        minor_version:"Minor version of GBLOB"{};
        protection_algo:"Protection Algorithm"{};
        nw_lock_op:"Network Lock Operation"{};
        timestamp:"BLOB Time Stamp"{};
        nw_num:"NW Configuration: Number of MCC-MNC pairs"{};
        nw_list:"NW Configuration: MCC-MNC pairs"{};
        ns_num:"NS Configuration: Number of MCC-MNC-NS triplets"{};
        ns_list:"NS Configuration: MCC-MNC-NS triplets"{};
        sp_num:"NS Configuration: Number of MCC-MNC-GID triplets"{};
        sp_list:"NS Configuration: MCC-MNC-GID triplets"{};
        ehplmn_num:"eHPLMN Configuration: Number of MCC-MNC-GID-EHPLMN quadruplets"{};
        ehplmn_list:"eHPLMN Configuration: MCC-MNC-GID-EHPLMN quadruplets"{};
        session_id:"Session ID between device and unlock server"{};
    };

/***********************************************************************
 ***  Logical Data Item ID : NVRAM_EF_SML_VZW_SIM_LOCK_DEVICE_KEY_LID
 ***
 ***  Module: SMU
 ***
 ***  Description: Verizon Secured SML Context
 ***
 ***  Maintainer: Huang-Da Chen
 ***
 ***********************************************************************/
 LID_BIT VER_LID(NVRAM_EF_SML_VZW_SIM_LOCK_DEVICE_KEY_LID)
    nvram_sml_vzw_sim_lock_device_key_struct *NVRAM_EF_SML_VZW_SIM_LOCK_DEVICE_KEY_TOTAL
    {
        device_key:"Device Key(Kd)"{};
    };
#endif /* __NVRAM_SML_ACCESSIBLE__ */
#endif /* defined(__NVRAM_SECRET_DATA__) || defined(__META_SLA_ENHANCEMENT__) */

#ifdef __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__
#if defined(__NVRAM_SECRET_DATA__) || defined(__META_SLA_ENHANCEMENT__)
#ifdef __NVRAM_SML_ACCESSIBLE__
/***********************************************************************
 ***  Logical Data Item ID : NVRAM_EF_L4_SML_VZW_SIM_LOCK_CODE_LID
 ***
 ***  Module: SMU
 ***
 ***  Description: Verizon Secured SML Lock code Context
 ***
 ***  Maintainer: vend_mtb_sasken007
 ***
 ***********************************************************************/
 LID_BIT VER_LID(NVRAM_EF_L4_SML_VZW_SIM_LOCK_CODE_LID)
     nvram_sml_vzw_sim_lock_code_context_struct *NVRAM_EF_L4_SML_VZW_SIM_LOCK_CODE_TOTAL
     {
        sp_num:"SP Configuration: Number of MCC-MNC-GID triplets"{};
        sp_list:"SP Configuration: MCC-MNC-GID triplets"{};
        ehplmn_num:"eHPLMN Configuration: Number of MCC-MNC-GID-EHPLMN quadruplets"{};
        ehplmn_list:"eHPLMN Configuration: MCC-MNC-GID-EHPLMN quadruplets"{};
    };
#endif /* __NVRAM_SML_ACCESSIBLE__ */
#endif /* defined(__NVRAM_SECRET_DATA__) || defined(__META_SLA_ENHANCEMENT__) */
#endif /* __VZW_RSU_LOCK_CODE_EXTEND_SUPPORT__ */
#endif /* __VZW_RSU_SUPPORT__ */

#ifdef __SBP_OP129_SIMME_LOCK__
/***********************************************************************
 ***  Logical Data Item ID : NVRAM_EF_SML_OP129_LID
 ***
 ***  Module: SMU
 ***
 ***  Description: KDDI Secured SML Context
 ***
 ***  Maintainer: Bart Liang
 ***
 ***********************************************************************/
 LID_BIT VER_LID(NVRAM_EF_SML_OP129_LID)
     nvram_sml_op129_sim_lock_rawdata_struct *NVRAM_EF_SML_OP129_TOTAL
     {
        data:"SIM ME Lock rules"{};
     };
#endif /* __SBP_OP129_SIMME_LOCK__ */

#ifdef __VZW_RSU_SUPPORT__
/***********************************************************************
 ***  Logical Data Item ID : NVRAM_EF_SML_VZW_RSU_DELAY_TIMER_LID
 ***
 ***  Module: SMU
 ***
 ***  Description: Verizon RSU Delay Timer
 ***
 ***  Maintainer: Hong Yu
 ***
 ***********************************************************************/
 LID_BIT VER_LID(NVRAM_EF_SML_VZW_RSU_DELAY_TIMER_LID)
    sml_vzw_rsu_delay_timer_struct *NVRAM_EF_SML_VZW_RSU_DELAY_TIMER_TOTAL
    {
        delay_timer:"Delay Timer in seconds"{};
    };
#endif /* __VZW_RSU_SUPPORT__ */

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_RAC_PROVISION_PROFILE_RECORD_LID
* DESCRIPTION
*      This LID is used by RAC to store the network provision setting per operator.
* INFOMATION
*      Can OTA Reset: No
*      Update Scenario: This LID will update if NW do configure the provision setting.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_RAC_PROVISION_PROFILE_RECORD_LID)
     nvram_ef_rac_provision_profile_record_struct *NVRAM_EF_RAC_PROVISION_PROFILE_RECORD_TOTAL
     {
         tmous_pvs_config:"provision setting for TMOUS SIM"{};
	     att_pvs_config:"provision setting for ATNT SIM"{};
	     vzw_pvs_config:"provision setting for VZW SIM"{};
		 uscc_pvs_config:"provision setting for USCC SIM"{};
     };

/********************************************************************************************
* LID_NAME
*      NVRAM_EF_L4_PREFERENCE_LID
* DESCRIPTION
*      To store L4C related data
* INFOMATION
*      Can OTA Reset: Yes
*      Update Scenario: This LID is updated by AP.
*********************************************************************************************/
LID_BIT VER_LID(NVRAM_EF_L4_PREFERENCE_LID)
    nvram_ef_l4_preference_struct *NVRAM_EF_L4_PREFERENCE_TOTAL
    {
        disabled_rat:"Disabled RAT setting received from AT+EDRAT"{};
        reserved_1:"reserved_1"{};
        reserved_2:"reserved_2"{};
        reserved_3:"reserved_3"{};
        reserved_4:"reserved_4"{};
        reserved_5:"reserved_5"{};
        reserved_6:"reserved_6"{};
        reserved_7:"reserved_7"{};        
    };

#ifdef __TFN_SIMLOCK__
#ifdef __NVRAM_SECRET_DATA__
#ifdef __NVRAM_SML_ACCESSIBLE__


/***********************************************************************
 *** This is a nvram data item bit level description for meta tools nvram editor
 ***
 ***  Logical Data Item ID : NVRAM_L4_TFN_SIMLOCK_LID
 ***
 ***  Module: SMU
 ***
 ***  Description: Secured TFN sim lock data
 ***
 ***  Maintainer: Pankaj Kumar
 ***
 ***********************************************************************/
 LID_BIT VER_LID(NVRAM_EF_L4_TFN_SIMLOCK_LID)
     nvram_ef_l4_tfn_simlock_struct *NVRAM_EF_L4_TFN_SIMLOCK_TOTAL
     {
         key:"key"{};
         code_cat_sp:"code_cat_sp"{};
         code_cat_c:"code_cat_c"{};
    };
#endif
#endif
#endif

#ifdef __ATT_SIM_LOCK__

/********************************************************************************************
 * LID_NAME
 *      NVRAM_EF_ATT_SIM_LOCK_LID
 * DESCRIPTION
 *      Store ATT SIM ME LOCK key and category data.
 * INFOMATION
 *      Can OTA Reset: No
 *      Update Scenario: When Lock state changes or ODM set lock catogory in factory mode.
 *********************************************************************************************/

#ifdef __NVRAM_SECRET_DATA__
    #ifdef __NVRAM_SML_ACCESSIBLE__
        #ifdef __SMART_PHONE_MODEM__
        LID_BIT VER_LID(NVRAM_EF_ATT_SIM_LOCK_LID)
            nvram_sml_att_context_struct *NVRAM_EF_ATT_SIM_LOCK_TOTAL
            {
                version:"version"
                {
                };

                protection_scheme:"protection_scheme"
                {
                };

                state:"state"
                {
                };

                length:"length"
                {
                };

                num_of_plmn:"num_of_plmn"
                {
                };

                plmn_list:"plmn_list"
                {
                };

                num_of_gid:"num_of_gid"
                {
                };

                gid_list:"gid_list"
                {
                };

                reserved:"reserved"
                {
                };

                start_time:"start_time"
                {
                };

                end_time:"end_time"
                {
                };

                imei:"imei"
                {
                };

                verification_code:"verification_code"
                {
                };

                unlock_time:"unlock_time"
                {
                };
            };
        #endif /* __SMART_PHONE_MODEM__ */
    #endif /* __NVRAM_SML_ACCESSIBLE__ */
#endif /* __NVRAM_SECRET_DATA__ */
#endif /* __ATT_SIM_LOCK__ */


END_NVRAM_DATA
#endif	/*GEN FOR PC*/

#ifdef __cplusplus
}
#endif 

#endif  /* !NVRAM_NOT_PRESENT */
#endif  /* __L4_NVRAM_EDITOR_H__ */
