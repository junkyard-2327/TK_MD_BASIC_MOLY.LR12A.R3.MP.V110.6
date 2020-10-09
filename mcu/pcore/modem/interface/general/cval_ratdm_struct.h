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
 * Filename:
 * ---------
 *   cval_ratdm_struct.h
 *
 * Project:
 * --------
 *
 *
 * Description:
 * ------------
 *   This file is the interface between CVAL and RATDM_C2K for C2K PDN control
 *
 * Author:
 * -------
 * -------
 *
 ******************************************************************************/

#ifndef _CVAL_RATDM_STRUCT_H
#define _CVAL_RATDM_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
/* for rat_enum */
#include "l3_inc_enums_public.h"

/** CVAL activate RATDM C2K request
 *  This primitive is sent from CVAL to RATDM to activate RATDM C2K
 *  Message is MSG_ID_CVAL_RATDM_ACTIVATE_REQ
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** EPS bearer ID, ranged in [RATDM_MIN_NSAPI_C2K: RATDM_MAX_NSAPI_C2K] which is [16:23] */
    kal_uint8                       ebi;
    /** C2K air interface PDN ID, ranged in [0,14] */
    kal_uint8                       c2k_air_pdn_id;
}cval_ratdm_activate_req_struct;

/** CVAL deactivate RATDM C2K request
 *  This primitive is sent from CVAL to RATDM to deactivate RATDM C2K
 *  Message is MSG_ID_CVAL_RATDM_DEACTIVATE_REQ
 */
typedef struct {
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** EPS bearer ID, ranged in [RATDM_MIN_NSAPI_C2K: RATDM_MAX_NSAPI_C2K] which is [16:23] */
    kal_uint8                       ebi;
} cval_ratdm_deactivate_req_struct;

/** CVAL notify RATDM C2K current rat mode setting request
 *  This primitive is sent from CVAL to RATDM to notify RATDM C2K current rat mode setting
 *  Message is MSG_ID_CVAL_RATDM_SET_RAT_MODE_REQ
 */
typedef struct {
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** rat mode */
    rat_enum                       rat_mode;
} cval_ratdm_set_rat_mode_req_struct;

#endif /* _CVAL_RATDM_STRUCT_H */
