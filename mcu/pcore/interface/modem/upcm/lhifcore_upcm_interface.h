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
 *   lhifcore_upcm_interface.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   Used to process LHIF HW log table
 *
 * Author:
 * -------
 * -------
 *   
 * ==========================================================================
 * $Log$
 *
 * 08 15 2017 steve.kao
 * [MOLY00269909] [MT6293] IP Tag development
 * 	
 * 	[UMOLYA][TRUNK][UPCM] IP packet tagging interface changes.
 *
 * 08 15 2017 steve.kao
 * [MOLY00269909] [MT6293] IP Tag development
 * 	
 * 	[UMOLYA][TRUNK][UPCM] IP packet tagging interface changes.
 *
 ****************************************************************************/
#ifndef  LHIFCORE_UPCM_INTERFACE_INC
#define  LHIFCORE_UPCM_INTERFACE_INC

#include "kal_public_api.h"

/* Only enable UPCM to handle LHIF HW log when 52 bytes data is dumped */
#if defined (__MTK_TARGET__)
#define UPCM_HANDLE_HW_LOG  (1)
#else
#define UPCM_HANDLE_HW_LOG  (0)
#endif


typedef struct 
{
    LOCAL_PARA_HDR
    
    kal_uint32 start_idx;
    kal_uint32 end_idx;

    kal_uint8 *start_addr;
    kal_uint8 *end_addr;
    
} lhifcore_upcm_hw_log_ntf_struct;

void upcm_send_hw_log_ntf(kal_uint32 start_idx, kal_uint32 end_idx, kal_uint8 *start_addr, kal_uint8 *end_addr);

#endif   /* ----- #ifndef LHIFCORE_UPCM_INTERFACE_INC  ----- */

