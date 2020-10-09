/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 * dmf_public_api.h
 *
 * Project:
 * --------
 * UMOLYA
 *
 * Description:
 * ------------
 * DM Framework public API
 *
 * Author:
 * -------
 * -------
 *
 *
 * ==========================================================================
 * $Log$
 *
 * 12 27 2019 kunkun.shao
 * [MOLY00468326] Modem端大数据收集:DMF Network KPI part.
 *
 *
 *
 ****************************************************************************/


#ifndef _DMF_PUBLIC_API_H_
#define _DMF_PUBLIC_API_H_

#include "sim_exported_enum.h"
#include "dmf_public_def.h"

#include "atp_public_defs.h"
#include "atp_dmf_struct.h"

/* DMF AT APIs */
extern void dmf_send_at_rsp(
            kal_uint16 ch_id, 
            protocol_id_enum ps_id,
            kal_uint32 app_id, 
            proxy_cmd_result_enum result, 
            atp_mt_dmf_cmd_cnf_type_enum type, 
            void *msg, kal_uint32 msg_size);

extern void dmf_send_at_urc(kal_uint32 app_id, protocol_id_enum ps_id, atp_mt_dmf_urc_ind_type_enum type, void *msg, kal_uint32 msg_size);

extern void dmf_send_at_final_rsp(
            kal_uint16 ch_id, 
            protocol_id_enum ps_id,
            kal_uint32 app_id, 
            proxy_cmd_result_enum result);


/*COMMON*/
extern void dmf_info_collect_get_current_serving_cell_info(
        protocol_id_enum ps_id, dmf_info_collect_current_serving_cell_info_struct *serving_cell);

extern void dmf_info_collect_replace_as_cell_info(
        protocol_id_enum ps_id, dmf_info_collect_current_serving_cell_info_struct *serving_cell);

#endif // _DMF_PUBLIC_API_H_
