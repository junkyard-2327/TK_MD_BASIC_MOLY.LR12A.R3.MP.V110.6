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
 *   l4b_atci_struct.h
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
 * removed!
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _L4B_ATCI_STRUCT_H
#define _L4B_ATCI_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "l4b_internal_defs.h"
#include "atp_public_defs.h"

/* MSG_ID_L4B_ATCI_AT_CMD_REQ */
typedef struct {
    LOCAL_PARA_HDR
    l4b_channel_enum ch_id;
} l4b_atci_at_cmd_req_struct;

/* MSG_ID_L4B_ATCI_AT_CMD_CNF */
typedef struct {
    LOCAL_PARA_HDR
    l4b_channel_enum ch_id;
    proxy_cmd_result_enum result;
    kal_bool stuff;
} l4b_atci_at_cmd_cnf_struct;

/* MSG_ID_L4B_ATCI_AT_URC_IND */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 ch_id;
    kal_bool stuff;
} l4b_atci_at_urc_ind_struct; //align to atp_l4b_at_urc_ind_struct

/* MSG_ID_L4BPWR_ATCI_CFUN_0_REQ */
typedef struct {
    LOCAL_PARA_HDR
    l4b_channel_enum ch_id;
} l4bpwr_atci_cfun_0_req_struct;

/* MSG_ID_L4BPWR_ATCI_CFUN_0_CNF */
typedef struct {
    LOCAL_PARA_HDR
    l4b_channel_enum ch_id;
    proxy_cmd_result_enum result;
} l4bpwr_atci_cfun_0_cnf_struct;

/* MSG_ID_L4BPWR_ATCI_EPOF_REQ */
typedef struct {
    LOCAL_PARA_HDR
    l4b_channel_enum ch_id;
} l4bpwr_atci_epof_req_struct;

/* MSG_ID_L4BPWR_ATCI_EPOF_CNF */
typedef struct {
    LOCAL_PARA_HDR
    l4b_channel_enum ch_id;
    proxy_cmd_result_enum result;
} l4bpwr_atci_epof_cnf_struct;

#endif /* _L4B_ATCI_STRUCT_H */


