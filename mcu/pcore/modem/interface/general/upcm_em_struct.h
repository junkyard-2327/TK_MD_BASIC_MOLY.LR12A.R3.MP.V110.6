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
 *   upcm_em_struct.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *  Now we use UPCM to send EM parameters to tool
 *  This Header file is used for the ILM.
 *  UPCM will help to send tft_pf, ratadp EM 
 *
 * Author:
 * -------
 * -------
 *   
 *
 * ==========================================================================
 * $Log$
 *
 * 04 10 2018 chin-wei.hsu
 * [MOLY00318646] [MT6293][EL2] EM info structure refine (UPCM)
 * [R3] EM info structure refine.
 *
 * 03 12 2015 stan.chen
 * [MOLY00098774] [UPCM] EM Info for 91
 * Checkin New EM info and struct.
 *
 * 05 27 2013 moja.hsu
 * [MOLY00007625] Maintain code
 * add ratadp EM stats.
 ****************************************************************************/
/*
 * =====================================================================================
 *
 *       Filename:  upcm_em_struct.h
 *
 *    Description:  EM ILM of UPCM
 *
 *        Created:  2013/05/27 03:39:19
 *        Author:  mtk01641 (moja)
 * =====================================================================================
 */

#ifndef  UPCM_EM_STRUCT_INC
#define  UPCM_EM_STRUCT_INC

#include "kal_public_api.h"
#include "em_public_struct.h"
#include "upcm_stats.h"
#include "tft_pf_stats.h"
#include "ratadp_stats.h"

typedef struct 
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    upcm_stats_t   upcm;
    tft_pf_stats_t tft_pf;
    ratadp_stats_t ratadp;
}em_upcm_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum em_info;
    kal_uint32 total_rx_byte_per_second;
    kal_uint32 total_tx_byte_per_second;
}em_upcm_ps_tput_info_ind_struct;

#endif   /* ----- #ifndef UPCM_EM_STRUCT_INC  ----- */

