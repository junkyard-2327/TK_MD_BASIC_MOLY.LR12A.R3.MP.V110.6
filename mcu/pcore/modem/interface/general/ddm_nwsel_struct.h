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
 * DDM_NWSEL_STRUCT.H
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *
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
 * removed!
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef DDM_NWSEL_STRUCT_H
#define DDM_NWSEL_STRUCT_H

/* enum */
#include "ps_public_enum.h"

/* struct */
#include "kal_public_defs.h"

typedef enum {
    DDM_NWSEL_DETACH_CAUSE_NONE,
    DDM_NWSEL_DETACH_CAUSE_NO_ACTION,
}ddm_nwsel_detach_cause_enum;

/** MOD_DDM -> MOD_NWSEL: DDM notify NWSEL the IA APN is changed.. 
 *  Design assumption
 *  =================
 *  - DDM will notify the APN chagne after DDM receives AT+EIAAPN and the APN information is different from the original one.
 *  - Note: DDM always updates APN change information to NWSEL, no matter it is 23G, 4G, or c2k now.
 *
 *  How to use 
 *  ==========
 *  - 1: When NWSEL receives this message, NWSEL judge if need to enable EUTRAN for this new APN.
 */
typedef struct {
    LOCAL_PARA_HDR
    ddm_nwsel_ia_apn_change_cause_enum cause;
    
} ddm_nwsel_ia_apn_change_req_struct;

/** MOD_DDM -> MOD_NWSEL: DDM responds if need to PS detach to NWSEL.
 *  Design assumption
 *  =================
 *  - DDM responds if need to perform PS detach after DDM receives MSG_ID_DDM_NWSEL_EUTRAN_DISABLE_CHECH_IND.
 *  - If no need to perform PS detach, DDM will bring the cause for NWSEL. NWSEL will decide whether to disable EUTRAN immediately or not. 
 *
 *  How to use 
 *  ==========
 *  - 1: When NWSEL receives this message, NWSEL judge if need to deactivate LTE and search 2/3G immediately.
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_bool    is_ps_detach_needed;
    ddm_nwsel_detach_cause_enum cause;
    
} ddm_nwsel_eutran_disable_check_rsp_struct;


#endif /* DDM_NWSEL_STRUCT_H */
