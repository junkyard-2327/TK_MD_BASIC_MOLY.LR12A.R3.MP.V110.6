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

/*******************************************************************************
 * Filename:
 * ---------
 *   cccisrv_struct.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   Defines CCCI service ILM struct for ELT logging
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * 
 ****************************************************************************/
#ifndef _CCCISRV_STRUCT_H
#define _CCCISRV_STRUCT_H
#include "ccci_if.h"
#include "ccci_ipc_if.h"

#define CCCI_IPC_SHARE_BUFFER_COUNT 10
#define CCCI_RPC_SHARE_BUFFER_COUNT 3

/************************************************** 
 *  CCCI_SYSMSG ilm struct
 **************************************************/
typedef struct ccci_sysmsg_para_t
{
	LOCAL_PARA_HDR
	CCCI_BUFF_T		ccci_header;
} CCCI_SYSMSG_PARA_T;
/* MSG_ID_CCCI_AP_L1C_SYSMSG_IND, MSG_ID_CCCI_AP_L1C_SYSMSG_REQ */

typedef CCCI_SYSMSG_PARA_T ccci_sysmsg_req_struct;
typedef CCCI_SYSMSG_PARA_T ccci_sysmsg_ind_struct;

/************************************************** 
 *  CCCI_RPC ilm struct
 **************************************************/
#define IPC_RPC_ILM_MAX_BUF_SIZE     128 /* PCore support 2048 */  

typedef struct ccci_rpc_buff_t{
    CCCI_BUFF_T ccci_header;
    kal_uint8   buff[0];
}CCCI_RPC_SHARE_BUFF_T;

typedef struct ccci_rpc_para_t
{
	LOCAL_PARA_HDR
    void* buffer; //share memory address
} CCCI_RPC_PARA_T;
/*MSG_ID_CCCI_PSC_L1C_RPC_IND, MSG_ID_CCCI_PSC_L1C_RPC_RSP*/
typedef CCCI_RPC_PARA_T ccci_rpc_ind_struct;
typedef CCCI_RPC_PARA_T ccci_rpc_rsp_struct;

/************************************************** 
 *  CCCI_IPC ilm struct
 **************************************************/
#define CCCI_IPC_ILM_MAX_BUF_SIZE    128 /* PCore support 3548 */

typedef struct ccci_ipc_para_t
{
    LOCAL_PARA_HDR
    void* buffer; //share memory address
} CCCI_IPC_PARA_T;

/*MSG_ID_CCCI_PSC_L1C_IPC_IND, MSG_ID_CCCI_PSC_L1C_IPC_RSP*/
typedef CCCI_IPC_PARA_T ccci_ipc_ind_struct;
typedef CCCI_IPC_PARA_T ccci_ipc_rsp_struct;


/* CCCI service IT */
#if defined(__CCCI_SRV_IT__) 

#define CCCI_SRV_IT_MAX_TASK 4
typedef enum {
    CCCISRV_IT_DISABLE,
    CCCISRV_IT_LB,
    CCCISRV_IT_DL,
    CCCISRV_IT_UL,
}CCCISRV_IT_MODE;

typedef struct _ccci_serviceit_para_t
{
    LOCAL_PARA_HDR
    CCCISRV_IT_MODE it_mode; /* IT mode */
    kal_uint32 test_task_cnt;    /* total it task in one time */
    kal_uint32 param[3]; /* task 3 params to l1core */
} ccci_serviceit_para_t;

extern void cccisrvit_return_result(kal_uint32 dest_mod_id, kal_uint32 msg_id,kal_uint32 test_task_id, kal_uint32 result);

#endif

#endif //_CCCISRV_STRUCT_H
 
