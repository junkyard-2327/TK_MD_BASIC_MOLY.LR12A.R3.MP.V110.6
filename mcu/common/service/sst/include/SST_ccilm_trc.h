
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
 *   SST_ccilm_trc.h
 *
 * Project:
 * --------
 *   UMOLY_Software
 *
 * Description:
 * ------------
 *   This file contains definitions for trace on target.
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
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/


#ifndef _CCILM_TRC_H
#define _CCILM_TRC_H


	TRC_MSG(SST_PHASE2_2302, "Remapping dest_mod_id from Global to Local failure, please find MD3 1st line support to check dest_mod_id 0x%x owner, src mod id is 0x%x, msg_id is 0x%x.")
	TRC_MSG(SST_PHASE2_2303, "Remapping src_mod_id from Local to Global failure, owner please check. dest_mod_id 0x%x, src_mod_id 0x%x, msg_id 0x%x")
	TRC_MSG(SST_PHASE2_2304, "Remapping src_mod_id from Local to Global failure, owner please check. dest_mod_id 0x%x, src_mod_id 0x%x, msg_id 0x%x")
	TRC_MSG(SST_PHASE2_2305, "Remapping dest_mod_id from Global to Local failure, please find MD3 1st line support to check dest_mod_id 0x%x owner, src mod id is 0x%x, msg_id is 0x%x.")

    TRC_MSG(SST_PHASE1_2306_1, "In construct_cc_cached_peer_buff() or construct_cc_non_cached_peer_buff(), (pdu_len + header_len + tail_len) should larger than 0.")
    TRC_MSG(SST_PHASE1_2306_2, "In construct_cc_cached_local_para() or construct_cc_non_cached_local_para(), local_para_size should larger than sizeof(local_para_struct).")

    TRC_MSG(SST_PHASE1_2307, "External queue full is encountered while PS/L1 cross-core message (CC ILM) delivery. src_mod_id 0x%x, dest_mod_id 0x%x, msg_id 0x%x")
    TRC_MSG(SST_PHASE1_2308, "External queue is NULL while PS/L1 cross-core message (CC ILM) delivery, please check why dest task in not running. src_mod_id 0x%x, dest_mod_id 0x%x, msg_id 0x%x")

    TRC_MSG(SST_PHASE1_3004, "External queue full is encountered while MD3->MD1 cross-core message (CC IRQ ILM) delivery. src_mod_id 0x%x, dest_mod_id 0x%x, msg_id 0x%x")	
    TRC_MSG(SST_PHASE1_3005, "External queue is NULL while MD3->MD1 cross-core message (CC IRQ ILM) delivery, please check why dest task in not running. src_mod_id 0x%x, dest_mod_id 0x%x, msg_id 0x%x")

    TRC_MSG(SST_PHASE1_3006, "The local dest module id is not located in current (PS or L1 core), please check why such MD3->MD1 CC IRQ ILM will send to here. src_mod_id 0x%x, dest_mod_id 0x%x, msg_id 0x%x")	
    TRC_MSG(SST_PHASE1_3007, "The src module id is not located in current (PS or L1 core), please correct the MD1->MD3 CC IRQ ILM content. src_mod_id 0x%x, dest_mod_id 0x%x, msg_id 0x%x")

#endif //_CCILM_TRC_H
