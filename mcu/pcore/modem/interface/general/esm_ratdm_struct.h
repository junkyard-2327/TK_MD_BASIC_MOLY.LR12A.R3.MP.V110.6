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
 *   esm_ratdm_struct.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 ******************************************************************************
 * $Log$
 *
 * 05 04 2018 yu-hsin.lin
 * [MOLY00324014] [R3.MP][ESM INTERFACE][Merlot][O1][MP3][MTBF][HQ][4GMM][Lab][Ericsson][Fatal error(task)] err_code1:0x00000305 err_code2:0x888802DA err_code3:0xCCCCCCCC
 * [interface] is_emergency_bearer, enum, and msg struct for esm_ratdm_ac_bar_alleviate_req;
 *
 * 04 26 2018 willy-wj.chen
 * [MOLY00322459][R3.MP][COMMON]【??】【西安】【?信VOLTE】卡1?信4G卡2?信VOLTE 卡2在?信VOLTE B5?段下MT??，??出?MT失?.
 *
 * 04 20 2018 willy-wj.chen
 * [MOLY00321469] [R2.TC16.SP][COMMON]【??】【西安】【?信VOLTE】卡1?信4G卡2?信VOLTE 卡2在?信VOLTE B5?段下MT??，??出?MT失?
 * 01 16 2018 yu-hsin.lin
 * [MOLY00302109] [MT6763][Bianco][N1][India FT][Chennai][WW FT][RCOM][TATA DOCOMO][TC_MTK_P1_4G_Gemini_13] [MP1.5] DUT long SMS to sim2 fails (common interface part)
 * [Interface] modify ESM cause
 *
 *
 * 01 16 2018 yu-hsin.lin
 * [MOLY00302109] [MT6763][Bianco][N1][India FT][Chennai][WW FT][RCOM][TATA DOCOMO][TC_MTK_P1_4G_Gemini_13] [MP1.5] DUT long SMS to sim2 fails (common interface part)
 * [Interface] modify ESM cause
 *
 * 12 18 2017 vera.yeh
 * [MOLY00294275] [6293 Gemini][Common Interface][Switch data to VoLTE call SIM]: Switch data service to SIM which is with ongoing VoLTE call
 * [ESM] __FORCE_LOCAL_RELEASE__ Add new cause GEMINI_FAILURE for IDLE_LEAVE_REJ
 *
 * 10 25 2016 steve.kao
 * [MOLY00209600] [UMOLYA][RATDM-LTE] M-PS related code changes
 * [UMOLYA_TRUNK][RATDM-LTE][MPS] Modify interface for IDLE_LEAVE_IND .
 *
 * 07 20 2016 head.hsu
 * [MOLY00174746] [PH1_VZW][joint-camp][Radio_Protocol][hVoLTE] TC 2.2.13 fail: step8. wait for EMM SR timeout
 *
 * 02 01 2016 matti.moisanen
 * [MOLY00145827] [R12] CR2024 Introducing new QCIs for MCPTT signaling
 *
 * 04 16 2015 carlson.lin
 * [MOLY00091769] [GEMINI] Trigger TAU/SR after GEMINI resume
 * Add iterface (OA Domain)
 *
 * 
 ******************************************************************************/

#ifndef ESM_RATDM_STRUCT_H
#define ESM_RATDM_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "mcd_l3_inc_gprs_struct.h"
#include "l3_inc_local.h"
#include "qmu_bm.h"

/* the available EBI range is 5~15. The maximum number of EPS bearer is eleven. */
#define MAX_EPSB_NUMBER 11

typedef enum
{
    ESM_QCI_RESERVED_VALUE_0 = 0, // Reserved
    ESM_QCI_1 = 1, // QCI_1, Conversational Vocie
    ESM_QCI_2 = 2, // QCI_2, Conversational Video (Live Streaming)
    ESM_QCI_3 = 3, // QCI_3, Real Time Gaming
    ESM_QCI_4 = 4, // QCI_4, Non-Conversational Video (Buffered Streaming)
    ESM_QCI_5 = 5, // QCI_5, IMS Signaling
    ESM_QCI_6 = 6, // QCI_6, Video (Buffered Streaming), TCP-based (e.g., www, e-mail, chat, ftp, p2p file sharing, progressive video, etc)
    ESM_QCI_7 = 7, // QCI_7, Voice, Video (Live Streaming), Interactive Gaming
    ESM_QCI_8 = 8, // QCI_8, Video (Buffered Streaming), TCP-based (e.g., www, e-mail, chat, ftp, p2p file sharing, progressive video, etc)
    ESM_QCI_9 = 9, // QCI_9, Video (Buffered Streaming), TCP-based (e.g., www, e-mail, chat, ftp, p2p file sharing, progressive video, etc)
    ESM_QCI_SPARE_VALUE_10 = 10, // Spare (10~64)
	ESM_QCI_SPARE_VALUE_64 = 64, // Spare (10~64)
	ESM_QCI_65 = 65, // QCI_65, Mission Critical user plane Push To Talk Voice (e.g., MCPTT)
	ESM_QCI_66 = 66, // QCI_66, Non-Mission-Critical user plane Push To Talk Voice
    ESM_QCI_SPARE_VALUE_67 = 67, // Spare (67)
	ESM_QCI_SPARE_VALUE_68 = 68, // Spare (68)
	ESM_QCI_69 = 69, // QCI_69, Mission Critical delay sensitive signalling (e.g.,MC-PTT signalling)
	ESM_QCI_70 = 70, // QCI_70, Mission Critical Data (e.g. example services are the same as QCI 6/8/9)
    ESM_QCI_SPARE_VALUE_71 = 71, // Spare (71~127)
	ESM_QCI_SPARE_VALUE_127 = 127, // Spare (71~127)
    ESM_QCI_OPERATOR_SPECIFIC_QCI_MIN_VALUE = 128, // Operator-specific QCIs 128~254
    ESM_QCI_OPERATOR_SPECIFIC_QCI_MAX_VALUE = 254, // Operator-specific QCIs 128~254
    ESM_QCI_RESERVED_VALUE_255 = 255 // Reserved
} esm_qci_enum;


// R12 CR2063 QCI code values "spare for future use"
// Temporary definitions January-2016. When RATDM code is updated to use esm_qci_enum
// values then these definitions shall be deleted
#define		ESM_QCI_RESERVED_VALUE_10	ESM_QCI_SPARE_VALUE_10 
#define     ESM_QCI_RESERVED_VALUE_127  ESM_QCI_SPARE_VALUE_127


typedef enum
{
    ESM_IDLE_LEAVE_REJ_UNSPEFICIFIED  = 0x01,
    ESM_IDLE_LEAVE_REJ_DETACH         = 0x02,
    ESM_IDLE_LEAVE_REJ_COVERAGE_OUT   = 0x10,
    ESM_IDLE_LEAVE_REJ_AC_BARRED      = 0x11,
    ESM_IDLE_LEAVE_REJ_NW_REJECT      = 0x12,
    ESM_IDLE_LEAVE_REJ_GEMINI_SUSPEND = 0x13, //gemini SUSPEND due to CS semaphore occupied by another protocal stack, wait for resume
    ESM_IDLE_LEAVE_REJ_T3346_CONGESTION = 0x14,
    ESM_IDLE_LEAVE_REJ_T3417TO        = 0x15,
    ESM_IDLE_LEAVE_REJ_GEMINI_FAILURE = 0x16, //gemini failure due to PS(or higher) semaphore occupied by another protocal stack
    ESM_IDLE_LEAVE_REJ_AC_BARRED_EMERGENCY = 0x17,
    ESM_IDLE_LEAVE_REJ_AC_BARRED_NORMAL    = 0x18,
    ESM_IDLE_LEAVE_REJ_OTHERS         = 0x20,
}idle_leave_rej_cause_enum;


typedef enum
{
    ESM_ALLEVIATED_TYPE_EMERGENCY,
    ESM_ALLEVIATED_TYPE_NORMAL,
}esm_alleviated_type_enum;


typedef struct
{
    kal_uint8 ebi;
    kal_uint8 rb_idx;
}ebi_rbidx_map_struct;

typedef struct
{
    LOCAL_PARA_HDR

    /* EPS bearer identity which ESM wants to initialize */
    kal_uint8 ebi;

    /*
    * Default EPS bearer identity
    * If the EPS bearer ESM wants to activate is a default EPS bearer,
    * linked_ebi will be set to the same as ebi
    */
    kal_uint8 linked_ebi;

    /* Hardware channel id (choose by ERRC) */
    kal_uint8 rb_idx;

    esm_qci_enum qci;
    
    /* 23G ralated parameters */
    kal_bool is_llc_sapi_present;
    kal_uint8 llc_sapi;

    kal_bool is_ug_qos_present;
    qos_struct ug_qos;

    kal_bool is_radio_priority_present;
    kal_uint8 radio_priority;

    kal_bool is_pfi_present;
    kal_uint8 pfi;   

    /* Bearer service type */
    kal_bool is_emergency_bearer;
    
}esm_ratdm_epsb_init_req_struct;

typedef struct
{
    LOCAL_PARA_HDR

    /* EPS bearer identity which ESM wants to activate */
    kal_uint8 ebi;
}esm_ratdm_epsb_act_req_struct;


typedef struct
{
    LOCAL_PARA_HDR

    /* EPS bearer identity which ESM wants to deactivate */
    kal_uint8 ebi;
}esm_ratdm_epsb_deact_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 ebi;
    /* 4G ralated parameters */ 
    esm_qci_enum qci;
    /* 23G ralated parameters */
    kal_bool is_llc_sapi_present;
    kal_uint8 llc_sapi;

    kal_bool is_ug_qos_present;
    qos_struct ug_qos;

    kal_bool is_radio_priority_present;
    kal_uint8 radio_priority;

    kal_bool is_pfi_present;
    kal_uint8 pfi;
} esm_ratdm_epsb_modify_req_struct;

typedef struct
{
    LOCAL_PARA_HDR

    /* The total number of EPS bearer with DRB established after UE enter connected mode */
    kal_uint8 epsb_num;

    /* Mapping between EBI & RB index */
    ebi_rbidx_map_struct ebi_rbidx_map[MAX_EPSB_NUMBER];
}esm_ratdm_idle_leave_req_struct;

typedef struct
{
    LOCAL_PARA_HDR

    /* The failure cause of leave idle */
    idle_leave_rej_cause_enum idle_leave_rej_cause;
}esm_ratdm_idle_leave_rej_struct;

typedef struct
{
    LOCAL_PARA_HDR

    /* Which EPS bearers has data */
    kal_uint16 ebi_btmp;
    /* whether the queue of ebi_btmp will be cleared upon Idle_Leave_Rej with gemini */
    kal_bool   is_drop_data_by_gemini_cause;
}esm_ratdm_idle_leave_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR

    /* Whether UL data is coming */
    kal_bool is_ul_data_coming;
}esm_ratdm_query_ul_data_status_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR

    /* type which is going to be alleviated due to ac bar in idle leave*/
    esm_alleviated_type_enum alleviated_type;
}esm_ratdm_ac_bar_alleviate_req_struct;


/* Adaptation between ESM and LTM */
typedef esm_ratdm_epsb_init_req_struct esm_ltm_epsb_init_req_struct;
typedef esm_ratdm_epsb_act_req_struct esm_ltm_epsb_act_req_struct;
typedef esm_ratdm_epsb_deact_req_struct esm_ltm_epsb_deact_req_struct;
typedef esm_ratdm_epsb_modify_req_struct esm_ltm_epsb_modify_req_struct;
typedef esm_ratdm_idle_leave_req_struct esm_ltm_idle_leave_req_struct;
typedef esm_ratdm_idle_leave_rej_struct esm_ltm_idle_leave_rej_struct;
typedef esm_ratdm_idle_leave_ind_struct esm_ltm_idle_leave_ind_struct;
typedef esm_ratdm_query_ul_data_status_cnf_struct esm_ltm_query_ul_data_status_cnf_struct;
typedef esm_ratdm_ac_bar_alleviate_req_struct esm_ltm_ac_bar_alleviate_req_struct;
#endif /* ESM_RATDM_STRUCT_H */
