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
 *   nas2l4c_struct.h
 *
 * Project:
 * --------
 *   MAUI
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
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2002
*
*******************************************************************************
 *  FILENAME : nas2l4c_struct.h
 *  SYNOPSIS : 
 *
 *                      R E V I S I O N    H I S T O R Y
 *
 */
#ifndef _NAS2L4C_STRUCT_H
#define _NAS2L4C_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"

typedef enum
{
    /* Defined in AT&T Device Requirement Table 21.2 for AT$ARME */
    ERROR_TYPE_UNDEFINED,
    ERROR_MM,
    ERROR_CM,
    ERROR_GMM_NON_COMBINED,
    ERROR_SM,
    ERROR_GMM_COMBINED_NON_GPRS,
    ERROR_GMM_COMBINED,
    ERROR_EMM_NON_COMBINED,
    ERROR_EMM_COMBINED_NON_EPS,
    ERROR_EMM_COMBINED,
    ERROR_ESM,
    /* Additional enum for ACMT */
    ERROR_GMM_SERVICE,
    ERROR_GMM_MT_DETACH
} protocol_error_type_enum;

/* This is for AT&T Communication Manager Client for Tablets(ACMT)
*/
typedef struct
{
    LOCAL_PARA_HDR
    protocol_error_type_enum error_type;
    kal_uint32 cause;
} l4c_protocol_rej_ind_struct;

// MSG_ID_L4C_RATCM_LBM_INFO_IND, MSG_ID_L4C_EVAL_LBM_INFO_IND
typedef struct
{
   LOCAL_PARA_HDR
   kal_bool is_lbm_activated; /*0: deactivated,  1:activated*/
} l4c_ratcm_lbm_info_ind_struct, l4c_eval_lbm_info_ind_struct;

#endif /* _NAS2L4C_STRUCT_H */
