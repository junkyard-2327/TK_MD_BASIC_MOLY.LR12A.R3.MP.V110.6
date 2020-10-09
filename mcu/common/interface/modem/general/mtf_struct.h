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
 * Filename:
 * ---------
 * mtf_struct.h
 *
 * Description:
 * ------------
 *   This file is intends for put the structures related to MTF
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
*****************************************************************************/

#ifndef _MTF_STRUCT_H
#define _MTF_STRUCT_H

#ifdef __cplusplus
extern "C" {
#endif

/* mark the following as comment during DEV stage only, we should unmark it after DEV*/
#if defined(__MTK_INTERNAL__) && !defined(__MTK_TARGET__)  && defined(__ATT_BOOSTER_SUPPORT__)
//#include "att_booster_ut_struct.h"
#endif

#include "icd_logging.h"

//MSG_ID_MT_CIQ_METRIC_IND
typedef struct {
    LOCAL_PARA_HDR
    unsigned long   lo;
    unsigned long   hi;
    unsigned long   metric_id;
} mt_ciq_metric_ind_struct;


typedef struct {
    LOCAL_PARA_HDR
    kal_uint32 global_peer_msg_id;
    kal_uint32 raw_data_len;
    kal_uint32 trace_index;
    kal_uint32 module_id;
    char *arg_type;
    kal_uint8 payload_len;
    kal_uint8 payload[128];                 //MAX_TRACE_SIZE
} dhl_mt_peer_trace_ind_struct;
//Peer buffer is raw_data

typedef struct {
    LOCAL_PARA_HDR
    ICD_LOG_TYPE icd_type;           // RECORD or  EVENT
    kal_uint32 code;                     // RECORD code or EVENT code
    icd_protocol_id protocol_id;
    kal_uint32 raw_data_len;
} dhl_mt_icd_ind_struct;
// Peer buffer is ICD Raw Data



#ifdef __cplusplus
}
#endif

#endif  /* _MTF_STRUCT_H */

