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
 *==============================================================================
 * HISTORY
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef _L4C_IMC_STRUCT_H
#define _L4C_IMC_STRUCT_H

#include "kal_public_defs.h"

/*   enum   */
typedef enum
{
    EXIT_ECBM_TIMER_EXPIRE, //leave ecbm on timer expiry
    EXIT_ECBM_SECOND_CALL, //leave ecbm due to second call
    EXIT_ECBM_T911,        //leave ecbm due to SMS to 911
}exit_ecbm_reason_enum;

typedef enum
{
    DISABLE_RAT_MODE_2G = 0,
    ENABLE_RAT_MODE_2G  = 1
} rat_operation_enum;

/******************************************************************************/

/*   structure   */
typedef struct
{
    LOCAL_PARA_HDR
    exit_ecbm_reason_enum exit_ecbm_cause; 
}l4c_imc_ecbm_end_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint32 reserve;
}l4c_imc_ecbm_start_rsp_struct,
l4c_imc_ecbm_end_rsp_struct;

typedef struct {
    LOCAL_PARA_HDR
    rat_operation_enum  rat_operation;
} l4c_imc_rat_operation_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_cssrvnotif_acceptable;  // 1: accept   0: reject
} l4c_imc_cs_service_notification_rsp_struct;


/* STK USSD over IMS */
// As CSM defined, USSD string max length before unpacking = 160
// Consider 7-bit coding => ASCII: 182
#define STKUSSI_MAX_LEN (182)

// MSG_ID_L4C_IMS_STK_USSD_REQ
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 src_id;
    kal_bool need_inform_user;
    kal_char ussi_string[STKUSSI_MAX_LEN + 1];
} l4c_ims_stk_ussd_req_struct;

// MSG_ID_L4C_IMS_STK_USSD_CNF
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 src_id;      // piggy-back
    kal_bool result;
    kal_uint8 ind_class;    // m in +EIUSD
    kal_uint8 status;       // n in +EIUSD
    kal_char rsp_string[STKUSSI_MAX_LEN*2 + 1];  // hex string of ASCII string
} l4c_ims_stk_ussd_cnf_struct;


#endif
