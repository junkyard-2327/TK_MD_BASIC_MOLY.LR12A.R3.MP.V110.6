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
 *   atp_imcsms_struct.h
 *
 * Project:
 * --------
 *   MOLY
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
 *
 *
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/



#ifndef _ATP_IMCSMS_STRUCT_H
#define _ATP_IMCSMS_STRUCT_H

#include "ps_public_struct.h"
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "ims_common_def.h"


/*
MSG_ID_ATP_IMCSMS_SUBMIT_CHECK_IND
MSG_ID_ATP_IMCSMS_SUBMIT_CHECK_RSP
MSG_ID_ATP_IMCSMS_COMMAND_CHECK_IND
MSG_ID_ATP_IMCSMS_COMMAND_CHECK_RSP
MSG_ID_ATP_IMCSMS_SMMA_CHECK_IND
MSG_ID_ATP_IMCSMS_SMMA_CHECK_RSP
MSG_ID_ATP_IMCSMS_STK_SUBMIT_CHECK_IND
MSG_ID_ATP_IMCSMS_STK_SUBMIT_CHECK_RSP

*/

/*
  * IMC SMS Query SMSAL - to IMS Proxy
  */
typedef struct {
    LOCAL_PARA_HDR

} atp_imcsms_submit_check_ind_struct, atp_imcsms_command_check_ind_struct, atp_imcsms_smma_check_ind_struct,atp_imcsms_stk_submit_check_ind_struct;

typedef struct {
    LOCAL_PARA_HDR

    kal_uint8 result;           /* the result of checking */
    kal_uint8 smi;              /* short message identifier*/
} atp_imcsms_smma_check_rsp_struct;

typedef struct {
    LOCAL_PARA_HDR

    kal_uint8 result;           /* the result of checking */
    kal_uint8 smi;              /* short message identifier*/
    sms_addr_struct sc_addr;    /* service centre address*/
} atp_imcsms_submit_check_rsp_struct, atp_imcsms_command_check_rsp_struct, atp_imcsms_stk_submit_check_rsp_struct;

typedef struct{
    LOCAL_PARA_HDR
    ims_reg_state_enum    ims_reg_state;
    ims_reg_type_enum     ims_reg_type;
}atp_imcsms_ims_reg_status_ind_struct;

#ifdef __TC01_IMS_SUPPORT__

typedef struct{
	LOCAL_PARA_HDR
	kal_uint16 length;
	kal_uint8 data[MAX_SMS_PDU_LEN];
}atp_imcsms_send_msg_urc_ind_struct;

typedef struct{
	LOCAL_PARA_HDR
	kal_uint16 length;
	kal_uint8 data[MAX_SMS_PDU_LEN];
}atp_imcsms_recv_msg_cnf_struct;

typedef struct{
	LOCAL_PARA_HDR
	kal_uint16 length;
	kal_uint8 data[MAX_SMS_PDU_LEN];
}atp_imcsms_recv_msg_req_struct;


typedef struct{
	LOCAL_PARA_HDR
	kal_uint8 cause;
	kal_uint8 seq_id;
	kal_uint8 retry_after;
}atp_imcsms_send_status_ind_struct;

#endif //__TC01_IMS_SUPPORT__ 

#endif /* _ATP_IMCSMS_STRUCT_H */


