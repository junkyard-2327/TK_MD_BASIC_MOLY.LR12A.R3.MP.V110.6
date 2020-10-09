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

#ifndef _ATP_LTECSR_STRUCT_H
#define _ATP_LTECSR_STRUCT_H

#include "ims_common_def.h"


typedef enum {
    ATP_LTECSR_DRP_FLUSH_NVRAM      = 0,
    ATP_LTECSR_DRP_DUMP_TO_NVRAM    = 1,
} atp_ltecsr_drp_enum;


/*
 * @brief 
 * @note MSG_ID_ATP_LTECSR_ECFG_SET_REQ
 *       AT> AT+ECFGSET=<cfg_name>,<cfg_value>
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8    name[64];      // TODO (by indy), should add define symbol in "ims_common_def.h"
    kal_uint8    value[128];    // TODO (by indy), should add define symbol in "ims_common_def.h"
} atp_ltecsr_ecfg_set_req_struct;


/*
 * @brief 
 * @note MSG_ID_ATP_LTECSR_ECFG_SET_CNF
 *       AT< OK or +CME ERROR:<err>
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_bool            result; // KAL_TRUE-success; KAL_FALSE-fail
    ims_err_id_enum     cause;  // return "IMS_ERR_UNKNOWN" for all so far
                                // before define IMS domain proprietary cause
} atp_ltecsr_ecfg_set_cnf_struct;


/*
 * @brief 
 * @note MSG_ID_ATP_LTECSR_ECFG_GET_REQ
 *       AT> AT+ECFGSET=<cfg_name>
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8    name[64];      // TODO (by indy), should add define symbol in "ims_common_def.h"
} atp_ltecsr_ecfg_get_req_struct;


/*
 * @brief 
 * @note MSG_ID_ATP_LTECSR_ECFG_GET_CNF
 *       AT< +ECFGGET:<cfg_name>,<cfg_value>
 *       AT< OK or +CME ERROR:<err>
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_bool            result;     // KAL_TRUE-success; KAL_FALSE-fail
    ims_err_id_enum     cause;      // return "IMS_ERR_UNKNOWN" for all so far
                                    // before define IMS domain proprietary cause
    kal_uint8           name[64];   // TODO (by indy), should add define symbol in "ims_common_def.h"
    kal_uint8           value[128]; // TODO (by indy), should add define symbol in "ims_common_def.h"
} atp_ltecsr_ecfg_get_cnf_struct;


typedef struct {
    LOCAL_PARA_HDR
    atp_ltecsr_drp_enum op;
} atp_ltecsr_dump_runtime_para_req_struct;

/*
 * @brief 
 * @note MSG_ID_ATP_LTECSR_IMS_AUDIO_SILENCE_IND_REQ
 *       AT> AT+EIMSAUDIOSID=<call_id>,<enable>
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint32  call_id;     
    kal_bool    enable;     
} atp_ltecsr_ims_audio_silence_ind_req_struct;


#endif
