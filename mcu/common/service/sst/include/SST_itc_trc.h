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
 *   SST_itc_trc.h 
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
 * removed!
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
  
	TRC_MSG(SST_ITC_COMMON_ILM1, "Content of ILM* being processed as below:")
	TRC_MSG(SST_ITC_COMMON_ILM2, "Content of ILM retrieved from module_ilm_g[%Mmodule_type] as below:")
	
	/* Phase 1: Exception Message, grouped according to type */
	TRC_MSG(SST_PHASE1_301_01, "In kal_create_msg_q( ), dynamic memory allocation failed for kal_queue_type..")
	TRC_MSG(SST_PHASE1_301_03, "In kal_create_msg_q( ), dynamic memory allocation failed for queue buffer.")
	TRC_MSG(SST_PHASE1_301_04, "In kal_create_msg_q( ), dynamic debug memory allocation failed for kal_queue_stat_type.")
	
	TRC_MSG(SST_PHASE1_303_9999_P1, "NULL internal queue pointer is provided in msg_send_int_queue")
	
	TRC_MSG(SST_PHASE1_303_6666_P1, "NULL external queue pointer is provided in stack_send_2_ext_q")
	
	TRC_MSG(SST_PHASE1_305_01, "While calling kal_enque_msg( ), NULL external queue is provided.")	
	TRC_MSG(SST_PHASE1_305_02, "While calling kal_enque_msg( ), source buffer pointer is NULL.")
	TRC_MSG(SST_PHASE1_305_19__P1, "In kal_enque_msg(), control block of destination queue was damaged, ")
	TRC_MSG(SST_PHASE1_305_19__P2, "which is no longer 0x51554555")
	TRC_MSG(SST_PHASE1_305_24_, "In kal_enque_msg(), suspension style is expected, but there is no running task currently.")
	
	TRC_MSG(SST_PHASE1_305_8888, "External queue full is encountered while message delivery.")	
	TRC_MSG(SST_PHASE1_305_FF, "In kal_enque_msg(), operation failed!")
	
	TRC_MSG(SST_PHASE1_306_7777, "Internal queue full is encountered while message delivery.")
	TRC_MSG(SST_PHASE1_306_9999, "ILM is sent to internal queue when the current task is not the receiver.")
	TRC_MSG(SST_PHASE1_306_9999_2, "Module %d does not belong to current task %s")
	TRC_MSG(SST_PHASE1_306_ilmptr_1, "Cannot send to internal queue with msg_send_to_head()")
	TRC_MSG(SST_PHASE1_306_ilmptr_2, "Cannot send to external queue with msg_send_to_int_head()")
	
	TRC_MSG(SST_PHASE1_307_0, "when send ilm message, external queue pointer of the destination task should not be NULL.")	
	TRC_MSG(SST_PHASE1_307_1, "when send ilm message, destination buffer pointer should not be NULL.")	
	TRC_MSG(SST_PHASE1_307_19_, "In kal_enque_msg(), control block of destination queue was damaged,which is no longer 0x51554555.")	
	TRC_MSG(SST_PHASE1_307_24_, "In kal_enque_msg(), suspension style is expected, but there is no running task currently.")	

	TRC_MSG(SST_PHASE1_30A_1, "In msg_receive_extq() or msg_receive_extq_for_stack(), the current task index is INDX_NIL.")
	TRC_MSG(SST_PHASE1_30A_2, "In msg_receive_extq() or msg_receive_extq_for_stack(), external queue ID fo current task should not be NULL.")
	TRC_MSG(SST_PHASE1_30A_3, "In msg_receive_intq(), the current task index is INDX_NIL.")
	TRC_MSG(SST_PHASE1_30A_4, "In msg_receive_intq(), internal queue ID fo current task should not be NULL.")
	TRC_MSG(SST_PHASE1_30A_6, "In msg_get_task_extq_messages() or msg_get_task_extq_capacity(), external queue ID fo current task should not be NULL.")
	TRC_MSG(SST_PHASE1_30A_7, "In kal_deque_msg() or kal_deque_msg_for_stack(), external queue ID fo current task should not be NULL.")
	TRC_MSG(SST_PHASE1_30A_8, "In kal_deque_msg() or kal_deque_msg_for_stack(), destination buffer pointer should not be NULL")
	
	TRC_MSG(SST_PHASE1_401_1, "In kal_create_mutex ( ), system memory allocation failed for data type kal_mutex_type.")	
	TRC_MSG(SST_PHASE1_401_4, "In kal_create_mutex ( ), dynamic debug memory allocation failed for kal_internal_mutex_statistics.")	
	
	TRC_MSG(SST_PHASE1_403_FF, "In kal_create_mutex ( ), NU_Create_Semaphore does not return NU_SUCCESS.")	
	
	TRC_MSG(SST_PHASE1_404_0, "In kal_take_mutex ( ), NULL pointer is provided for obtaining mutex")	
	TRC_MSG(SST_PHASE1_404_1, "In kal_take_mutex ( ), current task (mutex owner) takes mutex twice")	
	TRC_MSG(SST_PHASE1_404_21_, "In kal_take_mutex ( ),control block of semaphore may be corrupted or it is an illegal pointer.")	
	TRC_MSG(SST_PHASE1_404_24_, "In kal_take_mutex(), suspension style is expected, but there is no running task currently.")	
	
	TRC_MSG(SST_PHASE1_405_0, "In kal_give_mutex ( ), NULL pointer is provided for giving mutex.")	
	TRC_MSG(SST_PHASE1_405_MUID, "A MUTEX must be obtained and given by the same task.")	
	TRC_MSG(SST_PHASE1_405_FF, "In kal_give_mutex ( ),control block of mutex may be corrupted or it is an illegal pointer.")	

	TRC_MSG(SST_PHASE1_411_1, "In kal_create_sem ( ), dynamic memory allocation failed for data type kal_sem_type.")
	TRC_MSG(SST_PHASE1_411_4, "In kal_create_sem ( ), dynamic debug memory allocation failed for kal_internal_sem_statistics.")
	
	TRC_MSG(SST_PHASE1_413_FF, "In kal_create_sem ( ), NU_Create_Semaphore not return NU_SUCCESS.")	
	
	TRC_MSG(SST_PHASE1_414_0, "In kal_take_sem ( ),NULL pointer is provid.")	
	TRC_MSG(SST_PHASE1_414_21_, "In kal_take_sem ( ),control block of semaphore may be corrupted or it is an illegal pointer.")	
	TRC_MSG(SST_PHASE1_414_24_, "In kal_take_sem(), suspension style is expected, but there is no running task currently.")
	
	TRC_MSG(SST_PHASE1_415_0, "In kal_give_sem ( ), NULL pointer is provided for giving mutex.")
	TRC_MSG(SST_PHASE1_415_FF, "In kal_give_sem ( ),control block of semaphore may be corrupted or it is an illegal pointer.")

	TRC_MSG(SST_PHASE1_421_1, "In kal_create_event_group ( ), dynamic memory allocation failed for data type kal_eventgrp_type.")
	
	TRC_MSG(SST_PHASE1_423_FF, "In kal_create_event_group ( ), NU_Create_Event_Group not return NU_SUCCESS.")	
	
	TRC_MSG(SST_PHASE1_424_21_, "In kal_set_eg_events ( ),control block of event group may be corrupted or it is an illegal pointer.")
	TRC_MSG(SST_PHASE1_424_13_, "In kal_set_eg_events (), event group operation is undefined, it is neither NU_AND nor NU_OR.")

	TRC_MSG(SST_PHASE1_425_13_, "In kal_retrieve_eg_events ( ), operation is not supported, they are nether NU_AND, NU_AND_CONSUME, NU_OR nor NU_OR_CONSUME.")
	TRC_MSG(SST_PHASE1_425_24_, "In kal_retrieve_eg_events (), suspension style is expected, but there is no running task currently.")

	TRC_MSG(SST_PHASE1_431, "In allocate_ilm(), module ILM %Mmodule_type has not yet been delivered or duplicated!")
   
	TRC_MSG(SST_PHASE1_432, "In %s(), %c%c%c%c%c%c%c%c is trying to hold an ILM which has been either not allocated or already freed")
   
	TRC_MSG(SST_PHASE1_433, "Double free detected when releasing %s")

	TRC_MSG(SST_PHASE1_43A_1, "In construct_peer_buff(), (pdu_len + header_len + tail_len) should larger than 0.")
	TRC_MSG(SST_PHASE1_43A_2, "In construct_local_para(), local_para_size should larger than sizeof(local_para_struct).")
	TRC_MSG(SST_PHASE1_43B_1, "When sehdning CC ILM, please make suse the ref_counf of peer_buff is 1 to avoid race condition.")
	TRC_MSG(SST_PHASE1_43B_2, "When sehdning CC ILM, please make suse the ref_counf of local_para is 1 to avoid race condition.")
    
	TRC_MSG(SST_PHASE1_441, "In stack_check_msgid_range(), message ID overflow is detected at %Mmsg_type!")
   
	TRC_MSG(SST_PHASE1_451_1, "In kal_create_enh_mutex ( ), system memory allocation failed for data type kal_int_enhmutex.")
	
	TRC_MSG(SST_PHASE1_454_1, "In kal_take_enh_mutex (), NULL pointer is provided for obtaining mutex.")
	TRC_MSG(SST_PHASE1_454_2, "In kal_take_enh_mutex (), control block of enhanced mutex may be corrupted.")
	TRC_MSG(SST_PHASE1_454_3, "In kal_take_enh_mutex (), caller context in HISR.")
	TRC_MSG(SST_PHASE1_454_4, "In kal_take_enh_mutex (), current task (enhanced mutex owner) takes enhanced mutex twice.")
	TRC_MSG(SST_PHASE1_454_24_, "In kal_take_enh_mutex (), suspension style is expected, but there is no running task currently.")	

	TRC_MSG(SST_PHASE1_455_1, "In kal_give_enh_mutex (), NULL pointer is provided for giving mutex.")
	TRC_MSG(SST_PHASE1_455_2, "In kal_give_enh_mutex (), control block of enhanced mutex may be corrupted.")
	TRC_MSG(SST_PHASE1_455_MUID, "In kal_give_enh_mutex (), enhanced mutex must be obtained and given by the same task.")	
	TRC_MSG(SST_PHASE1_455_FF, "In kal_give_enh_mutex (), unexpected error happened in OS, please check the error code 2.")

    TRC_MSG(SST_PHASE1_461_1, "In kal_create_spinlock(), system memory allocation failed for data type kal_spinlock_type.")
    TRC_MSG(SST_PHASE1_462_FF, "In kal_create_spinlock(), NU_Spinlock_Create not return NU_SUCCESS.")
    TRC_MSG(SST_PHASE1_463_1, "In kal_take_spinlock(), NULL pointer is provided for obtaining spinlock.")
    TRC_MSG(SST_PHASE1_463_2, "In kal_take_spinlock(), NU_Spinlock_Try return error due to corruption in spinlock.")
    TRC_MSG(SST_PHASE1_464_1, "Current owner of spinlock(%s), tried to acquire same spinlock again")
    TRC_MSG(SST_PHASE1_464_2, "First take was from 0x%08X. See call stack above for second take")
    TRC_MSG(SST_PHASE1_465_1, "In kal_give_spinlock(), NULL pointer is provided for obtaining spinlock.")
    TRC_MSG(SST_PHASE1_465_2, "In kal_give_spinlock(), NU_Spinlock_Release return error due to corruption in spinlock.")
    TRC_MSG(SST_PHASE1_466_1, "Spinlock %s was being released by owner who did not own it.")
    TRC_MSG(SST_PHASE1_466_2, "Current context is 0x%08X:")
    TRC_MSG(SST_PHASE1_466_3, "Spinlock was taken from 0x%08X context:")
    TRC_MSG(SST_PHASE1_466_4, "Spinlock was not taken at the moment")
    TRC_MSG(SST_PHASE1_467_1, "Code at 0x%08X tried to %s spinlock from HRT context which is not allowed")
    TRC_MSG(SST_PHASE1_469_1, "%s have tried to obtain Spinlock(0x%X) %s %d times in a row without succeeding")

    TRC_MSG(SST_PHASE1_471_1, "In kal_create_internal_protect ( ), system memory allocation failed for data type kal_protect_type.")
    TRC_MSG(SST_PHASE1_472_FF, "In kal_create_internal_protect ( ), NU_Spinlock_Create not return NU_SUCCESS.")
    TRC_MSG(SST_PHASE1_473_1, "In kal_take_internal_protect(), NULL pointer is provided for obtaining internal protect.")
    TRC_MSG(SST_PHASE1_473_2, "In kal_take_internal(), NU_Spinlock_Try return error due to corruption in internal protect.")
    TRC_MSG(SST_PHASE1_474_1, "Owner of internal protect named %s, tried to acquire same internal protect again")
    TRC_MSG(SST_PHASE1_474_2, "First take was from 0x%08X and second take from 0x%08X.")
    TRC_MSG(SST_PHASE1_475_1, "In kal_give_internal_protect(), NULL pointer is provided for obtaining internal protect.")
    TRC_MSG(SST_PHASE1_475_2, "In kal_give_internal_protect(), NU_Spinlock_Release return error due to corruption in internal protect.")
    TRC_MSG(SST_PHASE1_476_1, "Code at 0x%08X tried to release internal protect %s which was not owned by it.")

    TRC_MSG(SST_PHASE1_481_1, "Illegal wait_mode (%x) given to %s. Only KAL_NO_WAIT(0) and KAL_INFINITE_WAIT(1) are allowed")
    TRC_MSG(SST_PHASE1_482_1, "HWITC lock id %Mkal_itc_lock_id cannot be used with %s API.")
    TRC_MSG(SST_PHASE1_482_3, "HWITC lock id %d cannot be used with %s API.")
    TRC_MSG(SST_PHASE1_482_2, "HWITC lock id %Mkal_itc_lock_id was being released by owner who did not own it")
    TRC_MSG(SST_PHASE1_483_1, "Current owner of HWITC lock id %Mkal_itc_lock_id, tried to acquire same HWITC lock again")
    TRC_MSG(SST_PHASE1_486_1, "%s API was called interrupted enabled. Giant lock id was %Mkal_itc_lock_id")
    TRC_MSG(SST_PHASE1_487_1, "Giant lock id %Mkal_itc_lock_id was being released from vpe%d even it was taken from vpe%d")
    
    TRC_MSG(SST_PHASE1_API_ONLYTC2ORTC3, "%s was called from wrong tc%d. Its only allowed to be called from tc2 or tc3")
    TRC_MSG(SST_PHASE1_API_ONLYTC1, "%s was called from wrong tc%d. Its only allowed to be called from tc1")
    TRC_MSG(SST_PHASE1_493_1, "Illegal wq_id (%x) given to kal_hrt_tc_checkpoint. Only KAL_Q1(1), KAL_Q1(2) and KAL_Q_MAX(3) are allowed")
    TRC_MSG(SST_PHASE1_493_2, "Illegal timeout (%x) given to kal_hrt_tc_checkpoint. Only KAL_NO_WAIT(0) and KAL_INFINITE_WAIT(1) are allowed")
    TRC_MSG(SST_PHASE1_494_2, "NULL func_ptr given to kal_hrt_tc_dispatch_work.")
    TRC_MSG(SST_PHASE1_496_1, "Workqueue %Mkal_workqueueid at core%d full.")
    TRC_MSG(SST_PHASE1_498_1, "kal_hrt_trigger_dummy_lisr was called from wrong TC: %d. Its only allowed to be called from TC1.")
    TRC_MSG(SST_PHASE1_49X_1, "This function was called from 0x%x")
    TRC_MSG(SST_PHASE1_499_1, "kal_hrt_trigger_dummy_lisr was called for wrong VPEs. Check vpe mask")
    TRC_MSG(SST_PHASE1_49A_1, "kal_hrt_revoke_dummy_lisr was called from wrong TC: %d. Its only allowed to be called from TC1")
    TRC_MSG(SST_PHASE1_49B_1, "kal_hrt_revoke_dummy_lisr was called for wrong VPEs. Check vpe mask")
    TRC_MSG(SST_PHASE1_49C_1, "Dummy lisr lock id %Mkal_itc_lock_id was being released from vpe%d even it was taken from vpe%d")

	/* Phase 2: Detailed analysis */
	TRC_MSG(SST_PHASE2_303_9999_P1, "My dear, %c%c%c%c%c%c%c%c is giving an illegal destination module ID for message delivery")
	TRC_MSG(SST_PHASE2_303_9999_P2, "destination module ID %d is out of range (max:%d).")
	
	TRC_MSG(SST_PHASE2_303_9999_P3, "My dear, %c%c%c%c%c%c%c%c is sending message via module ID, who has no internal queue.")
	TRC_MSG(SST_PHASE2_303_9999_P4, "Please refer to information above for debugging!")
		
	TRC_MSG(SST_PHASE2_303_9999_P5, "My dear, %c%c%c%c%c%c%c%c is sending message via module ID, whose relative task is not existed")
	TRC_MSG(SST_PHASE2_303_9999_P6, "in current boot mode. Please refer to information above for debugging!")
	
	TRC_MSG(SST_PHASE2_303_QUEUE_ID, "Illegal or may be corrupted pointer used to enqueue message!")
	
	TRC_MSG(SST_PHASE2_303_8888_P1, "While sending message to %c%c%c%c%c%c%c%c, %c%c%c%c%c%c%c%c found that,")
	TRC_MSG(SST_PHASE2_303_8888_P2, "external queue of %c%c%c%c%c%c%c%c is full!")
	TRC_MSG(SST_PHASE2_303_8888_P3, "Following is its complete content:")
	TRC_MSG(SST_PHASE2_303_8888_P4, "Task %c%c%c%c%c%c%c%c is in busy waiting, until fails to process message in external queue;")
	TRC_MSG(SST_PHASE2_303_8888_P5, "Following is its complete content:")
	TRC_MSG(SST_PHASE2_303_8888_P6, "My dear, Task %c%c%c%c%c%c%c%c may be blocked by thread listed below:")
	TRC_MSG(SST_PHASE2_303_8888_P7, "Task %c%c%c%c%c%c%c%c Task may be blocked by this enhanced mutex")
	TRC_MSG(SST_PHASE2_303_8888_P8, "The call stack of enhanced mutex owner: %c%c%c%c%c%c%c%c")
	TRC_MSG(SST_PHASE2_303_8888_P9, "Task %c%c%c%c%c%c%c%c Task may be blocked by this mutex")
	TRC_MSG(SST_PHASE2_303_8888_P10, "The call stack of mutex owner: %c%c%c%c%c%c%c%c")
	TRC_MSG(SST_PHASE2_303_8888_P11, "Task %c%c%c%c%c%c%c%c Task may be blocked by this semaphore")
	
	TRC_MSG(SST_PHASE2_QUEUE_LARGE_COUNT, "The Qneue size is larger than %d. We only parsing %d ILM in queue. Please reduce the queue size")
	TRC_MSG(SST_PHASE2_QUEUE_MESS_COUNT, "There are totally %d entries with same content,")

   TRC_MSG(SST_PHASE2_303_7777_P1, "While %c%c%c%c%c%c%c%c is running, %Mmodule_type sends msg to %Mmodule_type")

	TRC_MSG(SST_PHASE2_305_QUEUE_TIME_STAMP_0, "The exception frame No: %d")
	TRC_MSG(SST_PHASE2_305_QUEUE_TIME_STAMP_1, "The last 3 ILM taken frame No: %d, %d, %d")
	TRC_MSG(SST_PHASE2_305_QUEUE_TIME_STAMP_2, "The last queue empty frame No %d")
	TRC_MSG(SST_PHASE2_305_QUEUE_TIME_STAMP_3, "Receiver External Queue Size %d ")
	TRC_MSG(SST_PHASE2_305_QUEUE_TIME_STAMP_4, "The last frame No when Queue Contains %d, %d, %d ILMs  %d, %d, %d")
	
	
	TRC_MSG(SST_PHASE2_305_QUEUE_CASE_I, "fatal 0x305 case I: blocked by high priority thread, %c%c%c%c%c%c%c%c")
	TRC_MSG(SST_PHASE2_305_QUEUE_CASE_II, "fatal 0x305 case II: receiver is suspended")
	TRC_MSG(SST_PHASE2_305_QUEUE_CASE_III, "fatal 0x305 case III: sender sent too many ILMs in short time")
	TRC_MSG(SST_PHASE2_305_QUEUE_CASE_III_Offender, "Offender %d")
	TRC_MSG(SST_PHASE2_305_QUEUE_CASE_IV, "fatal 0x305 case IV: receiver traps in infinite loops")
	TRC_MSG(SST_PHASE2_305_QUEUE_CASE_V, "fatal 0x305 case V: starvation of receiver ")
	TRC_MSG(SST_PHASE2_305_QUEUE_CASE_UNDEF, "fatal 0x305 case X: Complicated and can not be defined by Online SST")
	
	TRC_MSG(SST_PHASE2_405_MUID, "Note that, mutex is now owned by %c%c%c%c%c%c%c%c, and could not be given by task %c%c%c%c%c%c%c%c.")	
	
	TRC_MSG(SST_PHASE2_455_MUID, "Note that, enhanced mutex is now owned by %c%c%c%c%c%c%c%c, and could not be given by task %c%c%c%c%c%c%c%c.")	
	
	
	
	/* Dump data structure */
	/* Queue */
	TRC_MSG(SST_QU_QCB, "Content of queue control block as below:")
   TRC_MSG(SST_QU_QCB_CREATED, "   qu_created : 0x%X")
	TRC_MSG(SST_QU_QCB_ID, "   qu_id : 0x%X")
	TRC_MSG(SST_QU_QCB_NAME, "   qu_name : %c%c%c%c%c%c%c%c")
	TRC_MSG(SST_QU_QCB_FIXED_SIZE, "   qu_fixed_size : %d")
	TRC_MSG(SST_QU_QCB_SUSP_F, "   qu_fifo_suspend : %d")
	TRC_MSG(SST_QU_QCB_SIZE, "   qu_queue_size : %d")
	TRC_MSG(SST_QU_QCB_MESS_COUNT, "   qu_messages : %d")
	TRC_MSG(SST_QU_QCB_MESS_SIZE, "   qu_message_size : %d")
	TRC_MSG(SST_QU_QCB_AVAIL, "   qu_available : %d")
	TRC_MSG(SST_QU_QCB_START_ADDR, "   qu_start : 0x%X")
	TRC_MSG(SST_QU_QCB_END_ADDR, "   qu_end : 0x%X")
	TRC_MSG(SST_QU_QCB_READ_PTR, "   qu_read : 0x%X")
	TRC_MSG(SST_QU_QCB_WRITE_PTR, "   qu_write : 0x%X")
	TRC_MSG(SST_QU_QCB_TASK_WAITING, "   qu_tasks_waiting : %d")
	TRC_MSG(SST_QU_QCB_URGENT_LIST, "   qu_urgent_list : 0x%X")
	TRC_MSG(SST_QU_QCB_SUSP_LIST, "   qu_suspension_list : 0x%X")

	/* Semaphore */
	TRC_MSG(SST_SM_SCB, "Content of semaphore control block as below:")
   TRC_MSG(SST_SM_SCB_CREATED, "   sm_created : 0x%X")
	TRC_MSG(SST_SM_SCB_ID, "   sm_id : 0x%X")
	TRC_MSG(SST_SM_SCB_NAME, "   sm_name : %c%c%c%c%c%c%c%c")
	TRC_MSG(SST_SM_SCB_COUNT, "   sm_semaphore_count : %d")
	TRC_MSG(SST_SM_SCB_FIFO_SUS, "   sm_fifo_suspend : %d")
	TRC_MSG(SST_SM_SCB_TASKS_WAIT, "   sm_tasks_waiting : %d")
	TRC_MSG(SST_SM_SCB_SUSP_LIST, "   sm_suspension_list : 0x%X")	

	/* Event group */
	TRC_MSG(SST_EV_GCB, "Content of event group control block as below:")
   TRC_MSG(SST_EV_GCB_CREATED, "   ev_created : 0x%X")
	TRC_MSG(SST_EV_GCB_ID, "   ev_id : 0x%X")
	TRC_MSG(SST_EV_GCB_NAME, "   ev_name : %c%c%c%c%c%c%c%c")
	TRC_MSG(SST_EV_GCB_CUR_EVENTS, "   ev_current_events : %d")
	TRC_MSG(SST_EV_GCB_TASKS_WAIT, "   ev_tasks_waiting : %d")
	TRC_MSG(SST_EV_GCB_SUSP_LIST, "   ev_suspension_list : 0x%X")	

	
	/* Enhanced mutex */
	TRC_MSG(SST_EMTX_EMCB, "Content of enhanced mutex control block as below:")
	TRC_MSG(SST_EMTX_EMCB_MAX_PRIO, "   emtx_max_wprio : %d")
	TRC_MSG(SST_EMTX_EMCB_SUSPEND_COUNT, "   emtx_suspension_count : %d")
	TRC_MSG(SST_EMTX_EMCB_OWNER_TASK_NAME, "   owner task name : %c%c%c%c%c%c%c%c")
	TRC_MSG(SST_EMTX_EMCB_EMTX_NAME, "   emtx_name : %c%c%c%c%c%c%c%c")	

    /* Spinlock */
    TRC_MSG(SST_SL_SCB_TITLE, "Content of Nucleus spinlock control block as below:")
    TRC_MSG(SST_ISLID_TITLE, "Content of KAL spinlock control block as below:")
    TRC_MSG(SST_ISLID_NAME, "   name : %s")
    TRC_MSG(SST_SL_SCB_CREATED, "   sl_created : 0x%X")
    TRC_MSG(SST_SL_SCB_ID, "   sl_id : 0x%X")
    TRC_MSG(SST_SL_SCB_LOCKCOUNT, "   sl_lock_count : %d")
    TRC_MSG(SST_SL_SCB_LOCK, "   sl_lock : %d")
    TRC_MSG(SST_ISLID_INTERRUPT_MASK, "   interrupt_mask : 0x%X")
    TRC_MSG(SST_ISLID_OWNER_CONTEXT, "   owner_context : 0x%X")
    TRC_MSG(SST_ISLID_START_TIME, "   spinlock_start_time : %d")
    TRC_MSG(SST_ISLID_TAKER, "   spinlock_taker address: 0x%08X")
    TRC_MSG(SST_ISLID_MAX_HOLD_TIME, "   max_spinlock_hold_time : %d")
    TRC_MSG(SST_ISLID_MAX_TAKER, "   max_spinlock_taker : 0x%08X")
    TRC_MSG(SST_ISLID_SPINLOCK, "   spinlock : %d")
    TRC_MSG(SST_ISLID_USERNUMBER, "   userNumber : %d")

    TRC_MSG(SST_CONTEXT_TASK, "Context 0x%08X is TASK %s")
    TRC_MSG(SST_CONTEXT_HISR, "Context 0x%08X is HISR %s")
    TRC_MSG(SST_CONTEXT_LISR, "Context 0x%08X is interrupt %d (nested count %d) at vpe%d, tc%d")

    /* HWITC */
    TRC_MSG(SST_HWITCID_TITLE, "Content of lock control block as below:")
    TRC_MSG(SST_HWITCID_ADDRESS, "   address : 0x%08X")
    TRC_MSG(SST_HWITCID_IRQ_MASK, "   irq mask : 0x%08X")
    TRC_MSG(SST_HWITCID_OWNER_CONTEXT, "   owner context : 0x%08X")
    TRC_MSG(SST_HWITCID_ITC_START_TIME, "   lock take timestamp : %d")
    TRC_MSG(SST_HWITCID_TAKER, "   taker : 0x%08X")
    TRC_MSG(SST_HWITCID_MAX_ITC_HOLD_TIME, "   max hold time : %d us")
    TRC_MSG(SST_HWITCID_MAX_ITC_TAKER, "   max taker : 0x%08X")

    TRC_MSG(SST_LOCK_START_TIME, "   lock_start_time : %d")
    TRC_MSG(SST_LOCK_TAKER, "   lock_taker address: 0x%08X")
    TRC_MSG(SST_LOCK_MAX_HOLD_TIME, "   max_lock_hold_time : %d")
    TRC_MSG(SST_LOCK_MAX_TAKER, "   max_lock_taker : 0x%08X")
    TRC_MSG(SST_LOCK_LOCK, "   lock : %d")
    

    TRC_MSG(SST_TCWQ_TITLE, "Content of TC Workqueue %Mkal_workqueueid at core %d:")
    TRC_MSG(SST_TCWQ_NODE, "   func_ptr:0x%08X, func_param:0x%08X, func_index:%d")
    
