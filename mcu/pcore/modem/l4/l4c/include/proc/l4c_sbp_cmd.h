/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 * l4c_sbp_cmd.h
 *
 * Project:
 * --------
 *   MT6293
 *
 * Description:
 * ------------
 *   This file is intends for SBP AT CMD handling.
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
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __L4C_SBP_CMD_H__
#define __L4C_SBP_CMD_H__

#include "kal_public_defs.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "l4c_common_enum.h"

/*****************************************************************************
 * FUNCTION
 *  l4c_sbp_set_post_dsbp_req
 *
 * DESCRIPTION
 *  get SBP ID by PLMN ID (MCC+MNC)
 *
 * PARAMETERS
 *  plmn    [IN]    PLMN ID in integer format, ex. 460-01 = 46001
 *
 * RETURNS
 *  void
 *
 *****************************************************************************/
kal_bool l4c_sbp_set_dsbp_id(kal_uint32 sim_sbp_id, kal_bool is_all);


/*****************************************************************************
 * FUNCTION
 *  l4c_sbp_set_dsbp_req
 *
 * DESCRIPTION
 *  get SBP ID by PLMN ID (MCC+MNC)
 *
 * PARAMETERS
 *  src_id      [IN]    AT+ESBP source id
 *  type        [IN]    reconfigure type - RECONFIG_PRE_DSBP_CHANGE or RECONFIG_DSBP_CHANGE
 *  sim_sbp_id  [IN]    SIM SBP ID
 *  trans_id        [IN]    trans_id corresponding to SIM READY IND
 *
 * RETURNS
 *  void
 *
 *****************************************************************************/
kal_bool l4c_sbp_set_dsbp_req(l4c_source_id_enum src_id, l4c_me_reconfig_enum type, kal_uint32 sim_sbp_id, kal_uint8 trans_id);
 
#endif /* __L4C_SBP_CMD_H__ */ 

