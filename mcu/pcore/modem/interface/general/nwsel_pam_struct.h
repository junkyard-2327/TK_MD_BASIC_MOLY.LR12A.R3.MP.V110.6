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
 * NWSEL_PAM_STRUCT.H
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

#ifndef NWSEL_PAM_STRUCT_H
#define NWSEL_PAM_STRUCT_H

/* enum */
#include "kal_general_types.h"
#include "l3_inc_enums.h"

/* struct */
#include "kal_public_defs.h"
#include "mcd_l3_inc_struct.h"

/** MOD_NWSEL -> MOD_PAM: Update eq-plmn-list[] when registered to PS domain. 
 *  Design assumption
 *  =================
 *  - 23G: Since GMM always completes its PS-ATTACH (REG) before PDP-ACT-REQ procedure, 
 *         for the rejection case below, PAM always has a current_eq_plmn_list[] to use 
 *  - 4G : Since PDN-CONN-REQ would be embedded in ATTACH-REQ, 
 *         for 4G attach-reject case, the plmn info would be sent from EMM -> ESM -> PAM
 *  - Note: NWSEL always updates eq-plmn-list[] to PAM, no matter it is 23G or 4G now
 *
 *  How to use 
 *  ==========
 *  - 1: When receiving this message, PAM saves eq_plmn_id[] into its context: current_eq_plmn_list[] 
 *  - 2: When receiving PDP-ACT-REJ from SM, 
 *       PAM refers current_eq_plmn_list[] and saves both current-plmn and eq-plmns into the arbitration table
 *  - 3: When receiving a new PDP-ACT-REQ from TCM, 
 *       PAM checks current_eq_plmn_list[0] against the arbitration table 
 *       - If current_eq_plmn_list[0] exists, then PAM rejects the incoming PDP-ACT-REQ
 *  . 
 */
typedef struct {
    LOCAL_PARA_HDR

    kal_uint8 eq_plmn_count;
    
    /** The eq_plmn_id[0] would be Registered PLMN. */
    plmn_id_struct eq_plmn_id[MAX_NUM_EQ_PLMN]; 
} nwsel_pam_eq_plmn_list_update_ind_struct;

/** MOD_NWSEL -> MOD_PAM: indicts there is no available PDN for current PLMN 
 *  Design assumption
 *  =================
 *  - 4G : To replace EMM report EVENT to notify NWSEL no available PDN, 
 *            in order to avoid 4G skip but 3G4 IRCR infinite loop. Disable EUTRAN for 3396 running is neccesary
 *
 *  How to use 
 *  ==========
 *  - 1: If there is 3396 (for VzW, there are two PDNs internet & IMS, use shorter one after all tried) 
 *         PAM give the timer and NWSEL start a PLMN base timer to disable EUTRAN
 *  - 2: If there is no 3396, just follow original design skip current 4G and rollback after search round
 *  - 3: APN changes PAM will notify NWSEL to clear all records.
 *  - 4: No need to keep in NVRAM, retry all network after power cycle
 */

typedef struct {
    LOCAL_PARA_HDR
    pdn_update_event_enum type;
    kal_uint32 time_value;
} nwsel_pam_pdn_availability_update_req_struct;

typedef struct {
    plmn_id_struct plmn_id;

    /* The apn_type is bitmap format. An APN may have multiple type attribute, so it is possible to have more
       than one bit as '1'. for example, the CHT emome APN has "default" type + "mms" type.*/
    pam_nwsel_apn_type_enum apn_type;

    rat_enum reject_rat;
    kal_bool timer_is_deactivated;
    kal_uint32 throttling_timestamp;
} throttling_apn_block_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 throttling_apn_block_count;
    throttling_apn_block_struct throttling_apn_block[MAX_THROTTLING_APN_BLOCK_NUM];
} nwsel_pam_throttling_apn_update_ind_struct;

#endif /* NWSEL_PAM_STRUCT_H */
