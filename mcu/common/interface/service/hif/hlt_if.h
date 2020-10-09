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
 *   hlt_if.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Defines the HLT data structures and APIs
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 03 26 2015 hsin-jun.tang
 * [MOLY00104127] [HLT] Add HLT feature for CCCISRV CCCIDEV SDIOC
 * [HLT] CCCISRV CCCIDEV SDIOC
 *
 ****************************************************************************/
#ifndef _HLT_IF_H
#define _HLT_IF_H
#include "kal_public_api.h"

/* struct define */
typedef enum{
    HLT_USER_ID_START =0,
    CCCI_LATENCY_ULIOR_CB,
    CCCI_LATENCY_ULIOR_CB_TO_USER,
    CCCI_LATENCY_ULBUFF_CB,
    CCCI_LATENCY_ULBUFF_CB_TO_USER,
    CCCI_LATENCY_ULNET_CB,
    CCCI_LATENCY_ULNET_CB_TO_USER,
    CCCI_LATENCY_WRITE_BUFF,
    CCCI_LATENCY_WRITE_IOR,
    CCCI_LATENCY_WRITE_IOREQ,
    CCCI_LATENCY_DLIOR_AGG_CB,
    CCCI_LATENCY_DLIOR_AGG_CB_TO_USER,
    CLDMA_LATENCY_HISR,
    CLDMA_LATENCY_DEQ,
    CLDMA_LATENCY_ENQ,
    CLDMA_LATENCY_ACK,
	//SDIOC 16
	SDIOC_DL_SUBMIT,
	SDIOC_UL_POLL_Q,
	//CCCI SYS MSG 18
    CCCI_SYS_MSG_SEND_MESSAGE,
    CCCI_SYS_MSG_UL_CB,
    //CCCI IPC 20
    CCCI_IPC_DL_TO_HIF,
    CCCI_IPC_DL_WHOLE,
    CCCI_IPC_UL_SEND_ILM,
    CCCI_IPC_UL_WHOLE,
    //CCCI RPC 24
    CCCI_RPC_WRITE,
    CCCI_RPC_PROCESS,
    CCCI_RPC_READ,
    CCCI_RPC_WHOLE,
    //CCCI IMS 28
    CCCI_IMS_DL_TO_HIF,
    CCCI_IMS_UL_CB,
    //CCCI FS 30
    CCCI_FS_GET_PORT,
    CCCI_FS_PUT_BUFF,
    CCCI_FS_WAIT_RX,
    CCCI_FS_GET_BUFF,
    CCCI_FS_PUT_PORT,
    CCCI_FS_WHOLE,
    //CCMNI 36
    CCMNI_DL_TO_HIF,
    CCMNI_UL_CB,
    CCMNI_UL_RELOAD_Q,
    //CCCI TTY 39
    CCCI_TTY_DL_TO_HIF,
    CCCI_TTY_DL_RELOAD_GPD,
    CCCI_TTY_UL_CB,
    CCCI_TTY_UL_DEQ_ILM,
    // user need to define here
    HLT_USER_ID_MAX,
}HLT_USER_ID;

typedef enum{
    /* Unit is us */
    HLT_LATENCY_BOUND_10US    = 10,
    HLT_LATENCY_BOUND_50US    = 50,
    HLT_LATENCY_BOUND_100US   = 100,
    HLT_LATENCY_BOUND_500US   = 500,
    HLT_LATENCY_BOUND_1MS     = 1000,
    HLT_LATENCY_BOUND_5MS     = 5000,
    HLT_LATENCY_BOUND_10MS    = 10000,
    // add more
}HLT_LATENCY_BOUND;

typedef struct {
    HLT_USER_ID id;        /* The latecy trace id*/
    kal_uint32 start_time;
    kal_uint32 end_time;
    HLT_LATENCY_BOUND bound;  /* The latency boundary */
    kal_uint32 reserved;            /* Print this reserved to log */
}HLT_USER_INFO_T;

#if defined(__HLT_SUPPORT__) // in hif_main.mak

/* API define */
void hlt_init(HLT_USER_INFO_T *info, HLT_USER_ID id, HLT_LATENCY_BOUND bound, kal_uint32 reserved);
void hlt_start(HLT_USER_INFO_T *info);
kal_uint32 hlt_end(HLT_USER_INFO_T *info);

#define HLT_INIT  hlt_init
#define HLT_START hlt_start
#define HLT_END   hlt_end

/* Will calcualte avg when call hif_latency_trace_end */
//#define __HLT_CALCULATE_AVG__ 

/* Check user's input parameter, wil assert if invalid */
//#define __HLT_CHECK_ERROR__
#if defined (__HLT_CHECK_ERROR__)
#define HLT_CHECK_ERROR_ASSERT EXT_ASSERT
#else
#define HLT_CHECK_ERROR_ASSERT(...) {}
#endif // __HLT_CHECK_ERROR__

#else  // Not support HLT
#define HLT_INIT(...) {}  
#define HLT_START(...) {}
#define HLT_END(...) {}
#endif // __HLT_SUPPORT__

#endif //#ifndef _HLT_IF_H
