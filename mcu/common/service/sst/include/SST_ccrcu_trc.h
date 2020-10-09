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
 *   SST_ccrcu_trc.h 
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file contains definitions for trace on target.
 *
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
  
	/* Phase 1: Exception Message, grouped according to type */
	TRC_MSG(SST_PHASE1_2100_rcuptr, "In rcu_create ( ), the address of RCU(0x%X) does not align to spinlock size.")
	TRC_MSG(SST_PHASE1_2101_size, "In rcu_create ( ), the memory size(%d) allocated for RCU cannot be divisible by block size.")
	TRC_MSG(SST_PHASE1_2102_rcuptr, "The conrtol block of RCU may be corrupted.")
	TRC_MSG(SST_PHASE1_2103_buffptr, "In rcu_free_read_lock ( ), the reader count of RCU block(0x%X) wanted to free is 0.")
	TRC_MSG(SST_PHASE1_2104_rcuptr, "In rcu_get_free_buff ( ), there is no available block to write in RCU(0x%X).")
	TRC_MSG(SST_PHASE1_2105_rcuptr, "In rcu_get_read_lock ( ), there is no available block to read in RCU(0x%X).")
	TRC_MSG(SST_PHASE1_2106_buffptr, "In rcu_commit_data ( ), the control block of RCU block may be corrupted.")
	TRC_MSG(SST_PHASE1_2107_buffptr, "In rcu_free_read_lock ( ), the checksum of the RCU block is not correct.")
	TRC_MSG(SST_PHASE1_2108_count_1, "In rcu_create ( ), the total allocated buffer in the RCU is smaller than 2.")
	TRC_MSG(SST_PHASE1_2108_count_2, "The size provided for the RCU to create block is too small.")
	TRC_MSG(SST_PHASE1_2109_buffptr, "The control block of RCU or the control block of RCU block may be corrupted.")
	
	/* Phase 2: Detailed analysis */
	TRC_MSG(SST_PHASE2_2107_buffptr_1_1, "The control block of RCU or the control block of RCU block may be corrupted.")
	TRC_MSG(SST_PHASE2_2107_buffptr_1_2, "The correct checksum of this RCU block is not available.")
	TRC_MSG(SST_PHASE2_2107_buffptr_2, "The correct checksum of the RCU block is 0x%X. The checksum in the RCU block is 0x%X.")
	
    /* Phase 3: Guideline */
	TRC_MSG(SST_PHASE3_2100_rcuptr, "Please use the kernel service macro to create RCU memory and pass it correctly.")
	TRC_MSG(SST_PHASE3_2101_size, "Please check the total allocated size and block size parameter for RCU creation.")
	TRC_MSG(SST_PHASE3_2103_buffptr, "This RCU block is freed totally previously. Please check the free buffer sequence.")
	TRC_MSG(SST_PHASE3_2104_buffptr, "The RCU block is out of memory for writing. Please enlarge the RCU size.")
	TRC_MSG(SST_PHASE3_2105_buffptr, "Please commit data before reading.")
	TRC_MSG(SST_PHASE3_2107_buffptr, "Please check the usage of RCU block and do not corrupt the RCU block control block.")
	TRC_MSG(SST_PHASE3_2108_count, "The size for RCU can only create %d block. The RCU restriction is more than 1 block.")
	TRC_MSG(SST_PHASE3_2109_buffptr, "Please check the usage of RCU block and do not corrupt the RCU block control block.")

	/* Dump data structure */
	/* RCU */
	TRC_MSG(SST_RCU_CB, "Content of RCU control block as below:")
	TRC_MSG(SST_RCU_CB_ID, "   rcu_id : 0x%X")
	TRC_MSG(SST_RCU_CB_AVAIL_BUFF, "   rcu_avail_buff : 0x%X")
	TRC_MSG(SST_RCU_CB_CURR_DATA, "   rcu_curr_data : 0x%X")
	TRC_MSG(SST_RCU_CB_TOTAL_ALLOC_BUFF, "   rcu_total_alloc_buff : %d")
	TRC_MSG(SST_RCU_CB_TOTAL_AVAIL_BUFF, "   rcu_total_avail_buff : %d")
	TRC_MSG(SST_RCU_CB_BUFF_SIZE, "   rcu_buff_size : %d")
	TRC_MSG(SST_RCU_CB_SPINLOCK_ID, "   rcu_spinlock : %d")
	TRC_MSG(SST_RCU_CB_LASTEST_COMMIT_MODID, "   rcu_lastest_commit_modid : %d")

    /* RCU block*/
	TRC_MSG(SST_RCU_BLOCK_CB, "Content of RCU block control block as below:")
	TRC_MSG(SST_RCU_BLOCK_CB_RCU_PTR, "   rcu_ptr : 0x%X")
	TRC_MSG(SST_RCU_BLOCK_CB_NEXT_BUFF_PTR, "   rcu_next : 0x%X")
	TRC_MSG(SST_RCU_BLOCK_CB_READER_COUNT, "   rcu_reader_count : 0x%X")
	TRC_MSG(SST_RCU_BLOCK_CB_CHECKSUM, "   rcu_checksum : %d")
	TRC_MSG(SST_RCU_BLOCK_CB_DEBUG_PRE_BUFF_PTR, "   rcu_debug_pre_buff : 0x%X")
	TRC_MSG(SST_RCU_BLOCK_CB_DEBUG_NEXT_BUFF_PTR, "   rcu_debug_next_buff : 0x%X")
	TRC_MSG(SST_RCU_BLOCK_CB_BUFF_COUNT, "   rcu_buff_count : %d")

