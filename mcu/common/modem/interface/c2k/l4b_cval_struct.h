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
 *   l4b_cval_struct.h
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _L4B_CVAL_STRUCT_H
#define _L4B_CVAL_STRUCT_H

//#include "kal_general_types.h"
//#include "kal_public_defs.h"
//#include "l4b_internal_defs.h"
#include "atp_public_defs.h"
//#include "sim_exported_enum.h"
#include "ps_public_enum.h"

#if defined(__MTK_TARGET__) && defined(__GEN93_L4_PRE_IT__)
#define CVAL_MAX_AT_CMD_LEN   600
#endif

/* MSG_ID_L4B_CVAL_AT_CMD_REQ */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 ch_id; //l4b_channel_enum
#if defined(__MTK_TARGET__) && defined(__GEN93_L4_PRE_IT__)
    kal_uint8 sim_id; //sim_interface_enum, this field is only used for pre-IT on Gen92, due to no source ID
    kal_uint8 at_cmd[CVAL_MAX_AT_CMD_LEN]; //this field is only used for pre-IT on Gen92, due to no peer buffer
#endif
} l4b_cval_at_cmd_req_struct;

/* MSG_ID_L4B_CVAL_AT_CMD_CNF */
//typedef l4b_atci_at_cmd_cnf_struct l4b_cval_at_cmd_cnf_struct;
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 ch_id; //l4b_channel_enum
    proxy_cmd_result_enum result;
    kal_bool stuff;
#if defined(__MTK_TARGET__) && defined(__GEN93_L4_PRE_IT__)
    kal_uint8 at_rsp[CVAL_MAX_AT_CMD_LEN]; //this field is only used for pre-IT on Gen92, due to no peer buffer
#endif
} l4b_cval_at_cmd_cnf_struct;

/* MSG_ID_L4B_CVAL_AT_URC_IND */
//typedef l4b_atci_at_urc_ind_struct l4b_cval_at_urc_ind_struct;
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 ch_id;
    kal_bool stuff;
#if defined(__MTK_TARGET__) && defined(__GEN93_L4_PRE_IT__)
    kal_uint8 at_urc[CVAL_MAX_AT_CMD_LEN]; //this field is only used for pre-IT on Gen92, due to no peer buffer
#endif
} l4b_cval_at_urc_ind_struct;

/* MSG_ID_L4B_CVAL_ECSQ_CONFIG_IND */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 ecsq_urc_mode;
    kal_uint8 rsrp_threshold;
} l4b_cval_ecsq_config_ind_struct;

/* MSG_ID_L4B_CVAL_SIM_LOCK_IND */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 mode;   
}l4b_cval_sim_lock_ind_struct;

// TODO: create new file l4bnw_cval_struct.h
/* MSG_ID_L4BNW_CVAL_PS_TYPE_CONFIG_REQ */
typedef struct {
    LOCAL_PARA_HDR
    l4_ps_type_config_enum ps_type;
} l4bnw_cval_ps_type_config_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4_ps_config_result_enum result;
} l4bnw_cval_ps_type_config_cnf_struct;

#endif /* _L4B_CVAL_STRUCT_H */


