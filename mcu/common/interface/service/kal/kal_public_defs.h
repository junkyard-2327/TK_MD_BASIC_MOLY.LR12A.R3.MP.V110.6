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
 *   kal_public_defs.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file provides public and common types definations.
 *   Note this file will inhirit RTOS header file
 *
 *   Data type definitions in this file are visible for KAL Public Users.
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
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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
 * removed!
 * removed!
 * removed!
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
 ****************************************************************************/

#ifndef _KAL_PUBLIC_DEFS_H
#define _KAL_PUBLIC_DEFS_H

#include "kal_general_types.h"
#ifndef _DEBUG_MSG_SAP_
#include "stack_config.h"               /* module_type & task_indx_type */
#endif
#include "stack_msgs.h"                 /* sap_type & msg_type */
   
/*******************************************************************************
 * Type Definitions
 *******************************************************************************/

/* opaque type for task identity */
typedef struct
{
    kal_uint8 unused;
} kal_taskid_s;
typedef kal_taskid_s* kal_taskid;

/* opaque type for hisr identity */
typedef struct
{
    kal_uint8 unused;
} kal_hisrid_s;
typedef kal_hisrid_s* kal_hisrid;

/* opaque type for semaphore identity */
typedef struct
{
    kal_uint8 unused;
} kal_semid_s;
typedef kal_semid_s* kal_semid;

/* opaque type for message queue identity */
typedef struct 
{
    kal_uint8 unused;
} kal_msgqid_s;
typedef kal_msgqid_s* kal_msgqid;

/* contain message queue information */
typedef struct
{
    /* current number of pending messages in message queue */
    kal_uint32 pending_msgs;
    /* maximum number of pending messages in message queue */
    kal_uint32 max_msgs;
} kal_msgq_info;

/* opaque type for mutex identity */
typedef struct
{
    kal_uint8 unused;
} kal_mutexid_s;

typedef kal_mutexid_s* kal_mutexid;

/* opaque type for event group identity */
typedef struct 
{
    kal_uint8 unused;
} kal_eventgrpid_s;
typedef kal_eventgrpid_s* kal_eventgrpid;

/* opaque type for spinlock identity */
typedef struct
{
    kal_uint8 unused;
} kal_spinlockid_s;
typedef kal_spinlockid_s* kal_spinlockid;

typedef kal_int32 kal_atomic_int32;
typedef kal_uint32 kal_atomic_uint32;

/* opaque type for partition memory pool identity */
typedef struct
{
    kal_uint8 unused;
} kal_poolid_s;

typedef kal_poolid_s* kal_poolid;

/* opaque type for Application Dynamic Memory identity */
typedef struct
{
    kal_uint8 unused;
} KAL_ADM_ID_s;
typedef KAL_ADM_ID_s* KAL_ADM_ID;

/* opaque type for Application Fix Memory identity */
typedef struct
{
    kal_uint8 unused;
} KAL_AFM_ID_s;
typedef KAL_AFM_ID_s* KAL_AFM_ID;

/* opaque type for First Level Memory Manager identity */
typedef struct
{
   kal_uint8 unused;
} KAL_FLMM_ID_s;
typedef KAL_FLMM_ID_s* KAL_FLMM_ID;

/* opaque type for Second Level Memory Manager identity */
typedef struct
{
   kal_uint8 unused;
} KAL_SLMM_ID_s;
typedef KAL_SLMM_ID_s* KAL_SLMM_ID;

/* opaque type for enhance mutex identity */
typedef struct 
{
    kal_uint8 unused;
} kal_enhmutexid_s;
typedef kal_enhmutexid_s* kal_enhmutexid;

/* opaque type for kal timer identity */
typedef struct
{
    kal_uint8 unused;
} kal_timerid_s;

typedef kal_timerid_s* kal_timerid;

/* opaque type for event scheduler identity */
typedef struct event_scheduler
{
    kal_uint8 unused;
} event_scheduler;

/* opaque type for event identity */
typedef struct {
    kal_uint8 unused;
} eventid_s;

typedef eventid_s *eventid;

/* task entry function parameter */
typedef struct task_entry_struct
{
    /* paremeter of task main entry*/
    kal_uint32 parameter;
} task_entry_struct;

/* general function pointer prototype */
typedef void (*kal_func_ptr)(void);
/* task entry function prototype */
typedef void (*kal_task_func_ptr)(task_entry_struct *task_entry_ptr);
/* hisr entry function prototype */
typedef void (*kal_hisr_func_ptr)(void);
/* timer (kal timer, stack timer, event scheduler) callback function prototype */
typedef void (*kal_timer_func_ptr)(void *param_ptr);
/* task clean up handler function prototype */
typedef void (*kal_task_clean_hdlr_ptr)(void);

/*************************************************************************
 * Type Definitions for ILM communication
 *************************************************************************/
 
/* transfer direction flags for local_para & peer_buff, only TD_RESET is meaningful now */
typedef enum {
   TD_UL = 0x01 << 0,   /* Uplink Direction, obsolete */
   TD_DL = 0x01 << 1,   /* Downlink Direction, obsolete */
   TD_CTRL = 0x01 << 2, /* Control Plane. Both directions, obsolete */
   TD_RESET = 0x01 << 3 /* Reset buffer content to 0 */
} transfer_direction;

#define LOCAL_PARA_HDR \
   kal_uint8	ref_count; \
   kal_uint8    lp_reserved; \
   kal_uint16	msg_len;
/*  common local_para header */
typedef struct local_para_struct {
    /* ref_count: reference count; 
     * lp_reserved : reserved for future; 
     * msg_len  : total length including this header.
     */
    LOCAL_PARA_HDR
#ifdef __BUILD_DOM__
    ;
#endif
} local_para_struct;

#define PEER_BUFF_HDR \
   kal_uint16	pdu_len; \
   kal_uint8   	ref_count; \
   kal_uint8	pb_resvered; \
   kal_uint16	free_header_space; \
   kal_uint16	free_tail_space;
/* peer buffer header, user should treat it as opaque type */
typedef struct peer_buff_struct {
   PEER_BUFF_HDR 
#ifdef __BUILD_DOM__
    ;
#endif
} peer_buff_struct;

typedef kal_uint16 interrupt_type;
typedef kal_uint16 module_type;
typedef kal_uint16 sap_type;
typedef kal_uint16 msg_type;

/* The Interlayer Message structure, which is exchaged between modules. */
typedef struct ilm_struct {
   module_type       src_mod_id;      /* Source module ID of the message. */
   module_type       dest_mod_id;     /* Destination module ID of the message. */
   sap_type          sap_id;          /* Service Access Pointer Identifier. */
   msg_type          msg_id;          /* Message identifier */
   local_para_struct *local_para_ptr; /* local_para pointer */
   peer_buff_struct  *peer_buff_ptr;  /* peer_buff pointer */
} ilm_struct;

/* maximum payload size in an inline-ILM message */
#define MSG_INLINE_ILM_MAX_PAYLOAD (sizeof(local_para_struct *) + sizeof(peer_buff_struct  *))

typedef enum {
    dummy_timer_status1,
    dummy_timer_status2
} dummy_es_timer_status;

typedef struct event_scheduler_dummy {
    kal_uint32 reserved[4];
    kal_uint8  reserved1[3];	
    kal_bool   reserved2;
    kal_uint32 reserved3[2];
    dummy_es_timer_status es_timer_status;
    module_type    dest_mod_id;	
    kal_uint16     es_user_index;
    kal_uint32 reserved4[2];
} event_scheduler_dummy;

typedef event_scheduler_dummy timer_expiry_struct;
/* DOM-NOT_FOR_SDK-BEGIN */
/*******************************************************************************
 * Constant definition
 *******************************************************************************/
#if defined(KAL_ON_NUCLEUS)

#define KAL_CONSUME           1 //NU_OR_CONSUME
#define KAL_AND               2 //NU_AND
#define KAL_AND_CONSUME       3 //NU_AND_CONSUME
#define KAL_OR                0 //NU_OR
#define KAL_OR_CONSUME        1 //NU_OR_CONSUME
#define KAL_NO_SUSPEND        0 //NU_NO_SUSPEND
#define KAL_SUSPEND           0xFFFFFFFF //NU_SUSPEND

#elif defined (KAL_ON_OSCAR)    /* KAL_ON_NUCLEUS */

#define KAL_CONSUME           0x4 //OSC_ACTION_CLS
#define KAL_AND               0x1 //OSC_ACTION_FULL_SET
#define KAL_AND_CONSUME       (KAL_AND | KAL_CONSUME) //OSC_ACTION_FULL_SET | OSC_ACTION_CLS
#define KAL_OR                0x2 //OSC_ACTION_PART_SET
#define KAL_OR_CONSUME        (KAL_OR | KAL_CONSUME) //OSC_ACTION_PART_SET | OSC_ACTION_CLS
#define KAL_NO_SUSPEND        0   //OSC_TIMEOUT_NONE
#define KAL_SUSPEND           0xFFFFFFFF //OSC_TIMEOUT_FOREVER

#elif defined(KAL_ON_THREADX)   /* KAL_ON_NUCLEUS */

#define KAL_CONSUME           1 //TX_OR_CLEAR
#define KAL_AND               2 //TX_AND
#define KAL_AND_CONSUME       3 //TX_AND_CLEAR
#define KAL_OR                0 //TX_OR
#define KAL_OR_CONSUME        1 //TX_OR_CLEAR
#define KAL_NO_SUSPEND        0 //TX_NO_WAIT
#define KAL_SUSPEND           0xFFFFFFFF //TX_WAIT_FOREVER

#elif defined(KAL_ON_OSABS)

typedef enum 
{
   KAL_CONSUME,
   KAL_AND,
   KAL_AND_CONSUME,
   KAL_OR,
   KAL_OR_CONSUME,
   KAL_NO_SUSPEND,
   KAL_SUSPEND
};

#endif  /* KAL_ON_NUCLEUS */

#define KAL_NILTASK_ID        (kal_taskid)NULL
#define KAL_NILHISR_ID        (kal_hisrid)NULL
#define KAL_NILTIMER_ID       (kal_timerid)NULL
#define KAL_NILPOOL_ID        (kal_poolid)NULL
#define KAL_NILMUTEX_ID       (kal_mutexid)NULL
#define KAL_NILEVENTGRP_ID    (kal_eventgrpid)NULL
#define KAL_NILSEM_ID         (kal_semid)NULL
#define KAL_NILQ_ID           (kal_msgqid)NULL
#define KAL_NILSEC            (kal_uint32)0xffffffff
#define KAL_NILMSEC           (kal_uint16)0xffff
#define KAL_NILTICK           (kal_uint32)0xffffffff
#define KAL_NILSPINLOCK_ID    (kal_spinlockid)NULL
/* DOM-NOT_FOR_SDK-END */

/*******************************************************************************
 * Constant definition Referenced By Public APIs
 *******************************************************************************/

/* boot mode enumeration */
typedef enum
{
    /* factory mode, system boot up to communicate with factory tools */
    FACTORY_BOOT = 0,
    /* normal mode */
    NORMAL_BOOT = 1,
    /* USB mode, system boot up when USB charger connect */
    USBMS_BOOT =  2,
    /* Firmware Update Engine mode, system run inside FUE */
    FUE_BOOT =  3,
    /* number of known boot mode */
    NUM_OF_BOOT_MODE,
    /* unknown mode */
    UNKNOWN_BOOT_MODE = 0xff
} boot_mode_type;

/* adm feature option used in kal_adm_create2 */
/* DOM-NOT_FOR_SDK-BEGIN */
#define KAL_ADM_OLD_ISLOGGING_FLAG  0x1
#define KAL_ADM_PROFILE_FLAG        0x2
/* DOM-NOT_FOR_SDK-END */
#define KAL_ADM_GUARDIAN_FLAG       0x4     /* put a guard word before and after each user buffer to detect memory corruption */
#define KAL_ADM_EXTHEADER_FLAG      0x8     /* has an extensible header immediate before each user buffer */
#define KAL_ADM_CLEANDELETE_FLAG    0x10    /* on kal_adm_delete(), if any user buffer is not free yet, system enter fatal error handling */
#define KAL_ADM_REALLOCFAIL_FATAL_FLAG 0x20 /* if kal_adm_realloc() failed, system enter fatal error handling */
#define KAL_ADM_REALLOCFAIL_FREE_FLAG  0x40 /* if kal_adm_realloc() failed, free old user buffer before return NULL */
#define KAL_ADM_LIGHTCHECK_FREEPATTERN_FLAG   0x80
#define KAL_ADM_FREEPATTERN_FLAG   0x100
#define KAL_ADM_PROFILE_USER   0x200
/* DOM-NOT_FOR_SDK-BEGIN */
#define KAL_ADM_VALID_FLAG 0x3ff /* OR of all KAL_ADM_*_FLAG, should not used by users */
/* DOM-NOT_FOR_SDK-END */

/* DOM-NOT_FOR_SDK-BEGIN */
/* ADM allocation options */
#define ADM_OPT_ALIGN_ALLOC         (0x01 << 16)
#define ADM_CACHE_1_CHANNEL_COVER   (0x02 << 16)
#define ADM_CACHE_ALL_CHANNEL_COVER (0x04 << 16)
#define ADM_OPT_TOPMOST_ALLOC       (0x08 << 16)
#define ADM_OPT_BOTTOMMOST_ALLOC	(0x10 << 16) /* allocate from the bottom(lower address)*/
#define ADM_OPT_MASK                (0x7fff << 16) /* the highest bit is reserved to avoid signed overflow warning */
/* DOM-NOT_FOR_SDK-END */
/* Calculate how many words needed for an extheader (argument of extheader_size_in_word in kal_adm_create2) */
#define KAL_ADM_EXTHEADER_WORDS(x) (((x) + 3) / sizeof(kal_uint32) * sizeof(kal_uint32))

/* DOM-NOT_FOR_SDK-BEGIN */
/* ADM POOL SIZE CALCULATE MACROS BEGIN */
/* NOTE:															*/
/* following sizes are hard size for ADM structure, user must not 	*/
/* use it directly. and it must be sync with kal_adm.h when ADM 	*/
/* structure has been changed.										*/
/* macros internal begin */
#define ADM_CB_SIZE							20
#define ADM_BL_SIZE							16
#define ADM_MB_MINI_HEAD_SIZE				8
#define ADM_MB_HEAD_SIZE					16
#define ADM_MB_HEADGUARD_SIZE				4	
#define ADM_MB_FOOTGUARD_SIZE				4
#define ADM_MB_OLDLOGGING_EXTHEADER_SIZE	8
/* macros internal end */

/* macros external begin */
#define ADM_DEFAULT_BL_NUM					7
#define	ADM_MB_OVERHEAD(flags, extheader_size_in_word)	\
		(ADM_MB_MINI_HEAD_SIZE + \
		((flags) & KAL_ADM_OLD_ISLOGGING_FLAG ? (ADM_MB_HEADGUARD_SIZE+ADM_MB_FOOTGUARD_SIZE+ADM_MB_OLDLOGGING_EXTHEADER_SIZE):0) + \
		((flags) & KAL_ADM_GUARDIAN_FLAG ? (ADM_MB_HEADGUARD_SIZE+ADM_MB_FOOTGUARD_SIZE):0) + \
		((flags) & KAL_ADM_EXTHEADER_FLAG ? (extheader_size_in_word)*4:0))
		
#define ADM_POOLSIZE_CALC(bl_num,user_pool_size) \
		(ADM_CB_SIZE + \
		ADM_BL_SIZE * (bl_num) + \
		ADM_MB_MINI_HEAD_SIZE+ADM_MB_HEADGUARD_SIZE+ADM_MB_FOOTGUARD_SIZE + \
		ADM_MB_MINI_HEAD_SIZE+ADM_MB_HEADGUARD_SIZE+ADM_MB_FOOTGUARD_SIZE + \
		(user_pool_size))
/* macros external end */
/* ADM POOL SIZE CALCULATE MACROS END */
/* DOM-NOT_FOR_SDK-END */

/* DOM-NOT_FOR_SDK-BEGIN */
/* AFM allocation options */
#define AFM_OPT_NONE         0x0000
#define AFM_OPT_ALIGN_ALLOC  0x0001 /* user buffers in this AFM is aligned to CPU cache line (32 bytes) */
#define AFM_OPT_DBG          0x0002
#define AFM_OPT_CUSLOG       0x0004
#define AFM_OPT_NOFALLBACK_ALLOC 0x0008 /* when search avaiable user buffer, don't try to search subpools bigger than fittest subpool */
#define AFM_OPT_DBG_FREEPATTERN  0x0010
#define AFM_OPT_CONCURRENT   0x0020
#define AFM_OPT_PROFILE_USER 0x0040
#define AFM_OPT_VALID 0x7F /* OR of all AFM_OPT_*, should not used by users */

#define AFM_LOG_PAUSE 0x01
#define AFM_LOG_CLEAR 0x02
#define AFM_LOG_CLR   AFM_LOG_CLEAR /* for compatible only */
#define AFM_LOG_START 0x04
#define AFM_LOG_STR   AFM_LOG_START /* for compatible only */
/* DOM-NOT_FOR_SDK-END */

/* DOM-NOT_FOR_SDK-BEGIN */
/* AFM POOL SIZE CALCULATE MACROS BEGIN*/
/* NOTE:															*/
/* following sizes are hard size for AFM structure, user MUST NOT 	*/
/* use it directly. and it must be sync with kal_afm.h when AFM 	*/
/* structure has been changed.										*/
/* macros internal begin*/
#define AFM_CB_T_SIZE						20
#define AFM_POOL_CB_T_SIZE					20
#define AFM_POOL_CUSLOG_T_SIZE				4
#define AFM_MB_HEAD_T_SIZE					8
#define AFM_MB_HEADGUD_T_SIZE				16
#define AFM_MB_FOOTGUD_T_SIZE				4
#define ALIGNTO4(sz) (((sz) + 3) & ~3)
#define ALIGNTOCACHELINE(sz) (((sz) + CPU_CACHE_LINE_SIZE-1) & ~(CPU_CACHE_LINE_SIZE-1))
/* macros internal end*/

/* macros external begin*/
#define AFM_MB_OVERHEAD(option) (AFM_MB_HEAD_T_SIZE + (option & AFM_OPT_DBG ? AFM_MB_HEADGUD_T_SIZE + AFM_MB_FOOTGUD_T_SIZE : 0))
#if defined(__MTK_TARGET__) && (defined(__ARM9_MMU__) || defined(__DYNAMIC_SWITCH_CACHEABILITY__))
#define AFM_POOL_OVERHEAD(option, subpool_count) \
    (AFM_CB_T_SIZE + AFM_POOL_CB_T_SIZE * subpool_count \
        + (((option) & AFM_OPT_CUSLOG) ? AFM_POOL_CUSLOG_T_SIZE * (subpool_count) : 0) + 4 \
        + (((option) & AFM_OPT_ALIGN_ALLOC) ? CPU_CACHE_LINE_SIZE : 0))
#define AFM_SUBPOOL_OVERHEAD(option, sz, nr) \
    (option & AFM_OPT_ALIGN_ALLOC ? \
        (nr) * (ALIGNTOCACHELINE(sz) + ALIGNTOCACHELINE(AFM_MB_OVERHEAD(option))) \
        : (nr) * (ALIGNTO4(sz) + AFM_MB_OVERHEAD(option))) 
#else
#define AFM_POOL_OVERHEAD(option, subpool_count) \
    AFM_CB_T_SIZE + AFM_POOL_CB_T_SIZE * (subpool_count) \
        + ((option & AFM_OPT_CUSLOG) ? AFM_POOL_CUSLOG_T_SIZE * subpool_count : 0) + 4 
#define AFM_SUBPOOL_OVERHEAD(option, sz, nr) \
    (nr) * (ALIGNTO4(sz) + AFM_MB_OVERHEAD(option))
#endif
/* macros external end*/
/* AFM POOL SIZE CALCULATE MACROS END*/		
#define AFM_SUBPOOL_END_PATTERN 0xFFFFFFFF
/* DOM-NOT_FOR_SDK-END */

#if defined(__MTK_TARGET__) && defined(__KAL_STACK_ISOLATION__)

#define KAL_VM_PAGESIZE (4096)  /* KAL VM page size */

#ifdef __ARM9_MMU__
#define KAL_VM_STACK_PAGESIZE 1024
#else //!__ARM9_MMU__
#define KAL_VM_STACK_PAGESIZE 4096
#endif //__ARM9_MMU__
#define KAL_VM_STACK_UPALIGN(x) ( ((x) + KAL_VM_STACK_PAGESIZE - 1) / KAL_VM_STACK_PAGESIZE * KAL_VM_STACK_PAGESIZE)
#define KAL_VM_STACK_ALIGNED(x) ( (x) & ~(KAL_VM_STACK_PAGESIZE - 1) == 0 )
#define kal_vm_stack_begin() (custom_get_FLMM_STACKSPACE_Base())
#define kal_vm_stack_end()   (custom_get_FLMM_STACKSPACE_End())

#define KAL_VM_PAGE_ALIGNED(x) (!( ((kal_uint32)(x)) & (KAL_VM_PAGESIZE - 1))) /* is KAL VM page size aligned */
#define KAL_VM_PAGE_UPALIGN(x) (( ((kal_uint32)(x)) + KAL_VM_PAGESIZE - 1) & ~(KAL_VM_PAGESIZE - 1)) /* align to next KAL VM page size */
#define KAL_VM_PAGE_DOWNALIGN(x) ( ((kal_uint32)(x)) & ~(KAL_VM_PAGESIZE - 1)) /* align to KAL VM page size */
#define KAL_VM_PAGE_MARGIN(x) (KAL_VM_PAGE_UPALIGN(x) - (x))                   /* how many bytes needed to align to next KAL VM page size */

#endif /* #if defined(__MTK_TARGET__) && defined(__KAL_STACK_ISOLATION__) */

/* define maximum memory region number can be dump via catcher on EXT_ASSERT_DUMP */
#define ASSERT_DUMP_PARAM_MAX 10

/* memory regions dump via catcher */
typedef struct ASSERT_DUMP_PARAM
{
    kal_uint32 addr[ASSERT_DUMP_PARAM_MAX]; /* start address of this memory region */
    kal_uint32 len[ASSERT_DUMP_PARAM_MAX];  /* length of this memory region */
} ASSERT_DUMP_PARAM_T;

/* break instruction codes. The first 16 codes are reserved and those might be used
 * by compiler, OS, or by debuggers. */
typedef enum
{
    BREAK_USERBP                = 0, /* can be used for sw break points */
    BREAK_RESERVED1             = 1,
    BREAK_RESERVED2             = 2,
    BREAK_RESERVED3             = 3,
    BREAK_RESERVED4             = 4,
    BREAK_SSTEPBP               = 5,
    BREAK_OVERFLOW              = 6, /* from compiler generated checks */
    BREAK_DIVIDE_BY_ZERO        = 7, /* from compiler generated checks */
    BREAK_RANGE                 = 8, /* from compiler generated checks */
    BREAK_RESERVED9             = 9,
    BREAK_RESERVED10            = 10,
    BREAK_RESERVED11            = 11,
    BREAK_BUG                   = 12,
    BREAK_RESERVED13            = 13,
    BREAK_RESERVED14            = 14,
    BREAK_RESERVED15            = 15,

    /* MTK allocated break codes */
    ASSERT_LINE                 = 16,
    ASSERT_EXT1                 = 17,
    ASSERT_EXT2                 = 18,
    ASSERT_EXT3                 = 19,
    ASSERT_EXT_DUMP             = 20,
    ASSERT_EXL                  = 21,
    ASSERT_NATIVE               = 22,
    ASSERT_CUS_MODID            = 23,
    ASSERT_CUS_MODID_EXT1       = 24,
    ASSERT_CUS_ADDR             = 25,
    ASSERT_CUS_ADDR_EXT1        = 26,
    KAL_FATAL_ERROR             = 27,


    /* These codes are used in mips16 
       if pc goes out of spram area */
    BREAK_EXEC_OUT_OF_SPRAM3    = 60,
    BREAK_EXEC_OUT_OF_SPRAM2    = 61,
    BREAK_EXEC_OUT_OF_SPRAM0    = 62,
    BREAK_EXEC_OUT_OF_SPRAM1    = 63,

    /* codes from 24 to 63 are free to use */
    
    /* in mips16, break instruction code field is 6 bits. With mips32 break instruction, 
     * the code field is 20 bits but to keep code compatible use only first 64 codes */
    MAX_MIPS16_BREAK_CODE       = 64,
} break_codes;

typedef enum
{
    TRAP_USERBP           = 0, /* can be used for sw break points */
    TRAP_RESERVED1        = 1,
    TRAP_RESERVED2        = 2,
    TRAP_RESERVED3        = 3,
    TRAP_RESERVED4        = 4,
    TRAP_SSTEPBP          = 5,
    TRAP_OVERFLOW         = 6, /* from compiler generated checks */
    TRAP_DIVIDE_BY_ZERO   = 7, /* from compiler generated checks */
    TRAP_RANGE            = 8, /* from compiler generated checks */
    TRAP_RESERVED9        = 9,
    TRAP_RESERVED10       = 10,
    TRAP_RESERVED11       = 11,
    TRAP_BUG              = 12,
    TRAP_RESERVED13       = 13,
    TRAP_RESERVED14       = 14,
    TRAP_RESERVED15       = 15,

    /* codes from 23 to 63 are free to use */

    MAX_TRAP_CODE         = 1023,
} trap_codes;

typedef enum
{
    THREAD_UNDERFLOW                  = 0,
    THREAD_OVERFLOW                   = 1,
    THREAD_INVALID_YIELD_QUALIFIER = 2,
    THREAD_GATING_STORAGE             = 3,
    THREAD_YIELD_SCHEDULER            = 4,
    THREAD_GS_SCHEDULER               = 5,
    THREAD_RESERVED6                  = 6,
    THREAD_RESERVED7                  = 7,
} thread_exception_codes;

/* callback function of ASSERT_SPECIFIC_CALLBACK */
typedef void (*Assert_Specific_Callback)(void* para_ptr);


/* define wait mode */
typedef enum {
    KAL_NO_WAIT         =0,       /* don't wait if the condition is not satisfied and return error code */
    KAL_INFINITE_WAIT             /* wait until the condition is satisfied */
} kal_wait_mode;

/* define kal status */
typedef enum {
    KAL_SUCCESS,            /* the operation is succeeded */
    KAL_ERROR,              /* general error */
    KAL_Q_FULL,             /* queue is full */
    KAL_Q_EMPTY,            /* queue is empty */
    KAL_SEM_NOT_AVAILABLE,  /* semaphore is not available at the moment */
    KAL_WOULD_BLOCK,        /* the operation would block but requester don't want */
    KAL_MESSAGE_TOO_BIG,    /* message is too big */
    KAL_INVALID_ID,         /* an invalid identity */
    KAL_NOT_INITIALIZED,    /* the resource is not initialized */
    KAL_INVALID_LENGHT,     /* an invalid length */
    KAL_NULL_ADDRESS,       /* the address is NULL */
    KAL_NOT_RECEIVE,        /* no receiver want this message */
    KAL_NOT_SEND,           /* can't send this message out */
    KAL_MEMORY_NOT_VALID,   /* memory is corrupted */
    KAL_NOT_PRESENT,        /* the request resource is not present */
    KAL_MEMORY_NOT_RELEASE, /* some memory is not released */
    KAL_TIMEOUT,            /* the opearation time out */
    KAL_INIT_BEFORE,         /* the resource has been init before*/
    KAL_SPINLOCK_NOT_AVAILABLE, /* spinlock is not available at the moment */
    KAL_ITC_NOT_AVAILABLE   /* itc cell is not available at the moment */
} kal_status;

/* define kal task status */
typedef enum {
/*------- error cases -------*/
    KAL_ERROR_RESERVE1,   /**/
    KAL_ERROR_RESERVE2,   /**/
    KAL_ERROR_RESERVE3,   /**/
    KAL_ERROR_TCB,        /* incorrect task control block */
/*------- running case -------*/
    KAL_SCHEDULED,        /* running */
    KAL_READY,            /* ready to execute */
/*------- suspend cases -------*/
    KAL_SLEEP_SUSPEND,    /* waiting for sleep timeout */
    KAL_SEMA_SUSPEND,     /* waiting for semaphore */
    KAL_ENHMUTEX_SUSPEND, /* waiting for enhanced mutex */
    KAL_OTHER_SUSPEND,    /* waiting for other resource */
    KAL_EVENT_SUSPEND,    /* waiting for event */
    KAL_QUEUE_SUSPEND,    /* waiting for queue */
    KAL_RESERVE1_SUSPEND, /*  */
    KAL_RESERVE2_SUSPEND, /*  */
    KAL_RESERVE3_SUSPEND, /*  */
/*------- end case -------*/
    KAL_TERMINATED,       /* task is terminated */
} kal_task_status;

typedef enum{
    MODULE_OUT_OF_RANGE,
    MD1_MODULE,
    MD2_MODULE,
    MD3_MODULE,
    PCORE_MODULE,
} kal_module_core;

#define ALIGNED_TIMER_MAX_DELAY  (65535)
#ifdef __STACK_ALIGN_MPU__
#define KAL_TASK_STACK_ALIGN     (__STACK_ALIGN_MPU__)
#else
#define KAL_TASK_STACK_ALIGN     (8U)
#endif
#define KAL_TASK_STACK_ALIGNMASK (KAL_TASK_STACK_ALIGN-1)
#define KAL_STACK_ALIGN(SIZE)    (((SIZE + KAL_TASK_STACK_ALIGNMASK) / KAL_TASK_STACK_ALIGN) * KAL_TASK_STACK_ALIGN)


#ifdef KAL_ON_NUCLEUS
/* define how many miliseconds per system tick represent */
#ifdef OS_TICK_PERIOD_US
#define MAX_DELAY_RATIO 1
#define MAX_DELAY_UNLIMITED (65535*MAX_DELAY_RATIO)

/* For FPGA, clock rate will be 26MHz (us counter used),
   but L1 subframe tick is slowed down XXX times comparing to ASIC for Digital-I/Q test purpose */
#ifdef __HAPS_FPGA_CLK_ADJUST__
#define KAL_CLOCK_RATIO_REAL            100  /* slowed down XXX times */
#else
#define KAL_CLOCK_RATIO_REAL            1
#endif

#ifdef __HAPS_FPGA_CLK_ADJUST__
#define OST_TICK_UNIT              OS_TICK_PERIOD_US
#define KAL_MICROSECS_PER_TICK     ((float)OST_TICK_UNIT/KAL_CLOCK_RATIO_REAL)
#define KAL_MILLISECS_PER_TICK     ((float)KAL_MICROSECS_PER_TICK/1000)

/* +(KAL_MICROSECS_PER_TICK/2)/KAL_MICROSECS_PER_TICK:
 *    round the number to the nearest whole number
 */
#define KAL_TICKS_10_MSEC          (((     10000+(OS_TICK_PERIOD_US/2))/OS_TICK_PERIOD_US)*KAL_CLOCK_RATIO_REAL)  /* 10 msec */
#define KAL_TICKS_50_MSEC          (((     50000+(OS_TICK_PERIOD_US/2))/OS_TICK_PERIOD_US)*KAL_CLOCK_RATIO_REAL)  /* 50 msec */
#define KAL_TICKS_100_MSEC         (((    100000+(OS_TICK_PERIOD_US/2))/OS_TICK_PERIOD_US)*KAL_CLOCK_RATIO_REAL)  /* 100 msec */
#define KAL_TICKS_500_MSEC         (((    500000+(OS_TICK_PERIOD_US/2))/OS_TICK_PERIOD_US)*KAL_CLOCK_RATIO_REAL)  /* 500 msec */
#define KAL_TICKS_1024_MSEC        (((   1024000+(OS_TICK_PERIOD_US/2))/OS_TICK_PERIOD_US)*KAL_CLOCK_RATIO_REAL)  /* 1024 msec */
#define KAL_TICKS_1_SEC            (((   1000000+(OS_TICK_PERIOD_US/2))/OS_TICK_PERIOD_US)*KAL_CLOCK_RATIO_REAL)  /* 1 sec */
#define KAL_TICKS_2_SEC            (((   2000000+(OS_TICK_PERIOD_US/2))/OS_TICK_PERIOD_US)*KAL_CLOCK_RATIO_REAL)  /* 2 sec */
#define KAL_TICKS_3_SEC            (((   3000000+(OS_TICK_PERIOD_US/2))/OS_TICK_PERIOD_US)*KAL_CLOCK_RATIO_REAL)  /* 3 sec */
#define KAL_TICKS_5_SEC            (((   5000000+(OS_TICK_PERIOD_US/2))/OS_TICK_PERIOD_US)*KAL_CLOCK_RATIO_REAL)  /* 5 sec */
#define KAL_TICKS_30_SEC           (((  30000000+(OS_TICK_PERIOD_US/2))/OS_TICK_PERIOD_US)*KAL_CLOCK_RATIO_REAL)  /* 30 sec */
#define KAL_TICKS_1_MIN            (((  60000000+(OS_TICK_PERIOD_US/2))/OS_TICK_PERIOD_US)*KAL_CLOCK_RATIO_REAL)  /* 1 min */
#define KAL_MSEC_64_TICKS          (((float)OS_TICK_PERIOD_US*64+(1000/2))   /1000)/KAL_CLOCK_RATIO_REAL  /* 64 ticks */
#define KAL_MSEC_256_TICKS         (((float)OS_TICK_PERIOD_US*256+(1000/2))  /1000)/KAL_CLOCK_RATIO_REAL  /* 256 ticks */
#else  /* __HAPS_FPGA_CLK_ADJUST__ */
#define KAL_MICROSECS_PER_TICK     OS_TICK_PERIOD_US
#define KAL_MILLISECS_PER_TICK     ((float)KAL_MICROSECS_PER_TICK/1000)

#define KAL_TICKS_10_MSEC          ((     10000+(KAL_MICROSECS_PER_TICK/2))/KAL_MICROSECS_PER_TICK)  /* 10 msec */
#define KAL_TICKS_50_MSEC          ((     50000+(KAL_MICROSECS_PER_TICK/2))/KAL_MICROSECS_PER_TICK)  /* 50 msec */
#define KAL_TICKS_100_MSEC         ((    100000+(KAL_MICROSECS_PER_TICK/2))/KAL_MICROSECS_PER_TICK)  /* 100 msec */
#define KAL_TICKS_500_MSEC         ((    500000+(KAL_MICROSECS_PER_TICK/2))/KAL_MICROSECS_PER_TICK)  /* 500 msec */
#define KAL_TICKS_1024_MSEC        ((   1024000+(KAL_MICROSECS_PER_TICK/2))/KAL_MICROSECS_PER_TICK)  /* 1024 msec */
#define KAL_TICKS_1_SEC            ((   1000000+(KAL_MICROSECS_PER_TICK/2))/KAL_MICROSECS_PER_TICK)  /* 1 sec */
#define KAL_TICKS_2_SEC            ((   2000000+(KAL_MICROSECS_PER_TICK/2))/KAL_MICROSECS_PER_TICK)  /* 2 sec */
#define KAL_TICKS_3_SEC            ((   3000000+(KAL_MICROSECS_PER_TICK/2))/KAL_MICROSECS_PER_TICK)  /* 3 sec */
#define KAL_TICKS_5_SEC            ((   5000000+(KAL_MICROSECS_PER_TICK/2))/KAL_MICROSECS_PER_TICK)  /* 5 sec */
#define KAL_TICKS_30_SEC           ((  30000000+(KAL_MICROSECS_PER_TICK/2))/KAL_MICROSECS_PER_TICK)  /* 30 sec */
#define KAL_TICKS_1_MIN            ((  60000000+(KAL_MICROSECS_PER_TICK/2))/KAL_MICROSECS_PER_TICK)  /* 1 min */
#define KAL_MSEC_64_TICKS          ((KAL_MICROSECS_PER_TICK*64+(1000/2))   /1000)  /* 64 ticks */
#define KAL_MSEC_256_TICKS         ((KAL_MICROSECS_PER_TICK*256+(1000/2))  /1000)  /* 256 ticks */
#endif  /* __HAPS_FPGA_CLK_ADJUST__ */


#define KAL_MICROSECS_PER_TICK_REAL     OS_TICK_PERIOD_US
#define KAL_MILLISECS_PER_TICK_REAL     ((float)KAL_MICROSECS_PER_TICK_REAL/1000)

#define KAL_TICKS_10_MSEC_REAL          ((     10000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 10 msec */
#define KAL_TICKS_50_MSEC_REAL          ((     50000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 50 msec */
#define KAL_TICKS_100_MSEC_REAL         ((    100000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 100 msec */
#define KAL_TICKS_500_MSEC_REAL         ((    500000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 500 msec */
#define KAL_TICKS_1024_MSEC_REAL        ((   1024000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 1024 msec */
#define KAL_TICKS_1_SEC_REAL            ((   1000000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 1 sec */
#define KAL_TICKS_2_SEC_REAL            ((   2000000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 2 sec */
#define KAL_TICKS_3_SEC_REAL            ((   3000000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 3 sec */
#define KAL_TICKS_5_SEC_REAL            ((   5000000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 5 sec */
#define KAL_TICKS_30_SEC_REAL           ((  30000000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 30 sec */
#define KAL_TICKS_1_MIN_REAL            ((  60000000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 1 min */
#define KAL_MSEC_64_TICKS_REAL          ((KAL_MICROSECS_PER_TICK_REAL*64+(1000/2))   /1000)  /* 64 ticks */
#define KAL_MSEC_256_TICKS_REAL         ((KAL_MICROSECS_PER_TICK_REAL*256+(1000/2))  /1000)  /* 256 ticks */


#else  /* else of OS_TICK_PERIOD_US */
#define KAL_MICROSECS_PER_TICK      4615
#define KAL_MILLISECS_PER_TICK      4.615

/* DOM-NOT_FOR_SDK-BEGIN */
/* Following defines are internal to the KAL */
#define KAL_TICKS_10_MSEC           (2)         /* 10 msec */
#define KAL_TICKS_50_MSEC           (10)        /* 50 msec */
#define KAL_TICKS_100_MSEC          (21)        /* 100 msec */
#define KAL_TICKS_500_MSEC          (108)       /* 500 msec */
#define KAL_TICKS_1024_MSEC         (221)       /* 1024 msec */
#define KAL_TICKS_1_SEC             (216)       /* 1 sec */
#define KAL_TICKS_2_SEC	            (433)       /* 2 sec */
#define KAL_TICKS_3_SEC             (650)       /* 3 sec */
#define KAL_TICKS_5_SEC             (1083)      /* 5 sec */
#define KAL_TICKS_30_SEC            (6500)      /* 30 sec */
#define KAL_TICKS_1_MIN             (13000)     /* 1 min */
#define KAL_MSEC_64_TICKS           (295)       /* 64 ticks */
#define KAL_MSEC_256_TICKS          (1181)      /* 256 ticks */
/* DOM-NOT_FOR_SDK-END */


#endif /* end of "else of OS_TICK_PERIOD_US" */
#endif /* KAL_ON_NUCLEUS */


#ifdef KAL_ON_OSCAR
/* define how many miliseconds per system tick represent */
#define KAL_MILLISECS_PER_TICK      1
#define KAL_MICROSECS_PER_TICK      1000
#define MAX_DELAY_UNLIMITED         (65535)

/* DOM-NOT_FOR_SDK-BEGIN */
/* Following defines are internal to the KAL */
#define KAL_SIM_MSECS_PER_TICK      KAL_MILLISECS_PER_TICK
#define KAL_TICKS_10_MSEC           (10/KAL_SIM_MSECS_PER_TICK)   /* 10 msec */
#define KAL_TICKS_50_MSEC           (50/KAL_SIM_MSECS_PER_TICK)   /* 50 msec */
#define KAL_TICKS_100_MSEC          (100/KAL_SIM_MSECS_PER_TICK)  /* 100 msec */
#define KAL_TICKS_500_MSEC          (500/KAL_SIM_MSECS_PER_TICK)  /* 500 msec */
#define KAL_TICKS_1024_MSEC         (1024/KAL_SIM_MSECS_PER_TICK)  /* 1024 msec */
#define KAL_TICKS_1_SEC             (1000/KAL_SIM_MSECS_PER_TICK) /* 1 sec */
#define KAL_TICKS_2_SEC	            (2000/KAL_SIM_MSECS_PER_TICK) /* 2 sec */
#define KAL_TICKS_3_SEC             (3000/KAL_SIM_MSECS_PER_TICK) /* 3 sec */
#define KAL_TICKS_5_SEC             (5000/KAL_SIM_MSECS_PER_TICK) /* 5 sec */
#define KAL_TICKS_30_SEC            (30000/KAL_SIM_MSECS_PER_TICK)/* 30 sec */
#define KAL_TICKS_1_MIN             (60000/KAL_SIM_MSECS_PER_TICK)/* 1 min */
#define KAL_MSEC_64_TICKS           (64*KAL_SIM_MSECS_PER_TICK)       /* 64 ticks */
#define KAL_MSEC_256_TICKS          (256*KAL_SIM_MSECS_PER_TICK)      /* 256 ticks */
/* DOM-NOT_FOR_SDK-END */

/* NOTICE: Need to sync from KAL_ON_NUCLEUS */
#define KAL_CLOCK_RATIO_REAL            1
#define KAL_MICROSECS_PER_TICK_REAL     OS_TICK_PERIOD_US
#define KAL_MILLISECS_PER_TICK_REAL     ((float)KAL_MICROSECS_PER_TICK_REAL/1000)

#define KAL_TICKS_10_MSEC_REAL          ((     10000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 10 msec */
#define KAL_TICKS_50_MSEC_REAL          ((     50000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 50 msec */
#define KAL_TICKS_100_MSEC_REAL         ((    100000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 100 msec */
#define KAL_TICKS_500_MSEC_REAL         ((    500000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 500 msec */
#define KAL_TICKS_1024_MSEC_REAL        ((   1024000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 1024 msec */
#define KAL_TICKS_1_SEC_REAL            ((   1000000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 1 sec */
#define KAL_TICKS_2_SEC_REAL            ((   2000000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 2 sec */
#define KAL_TICKS_3_SEC_REAL            ((   3000000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 3 sec */
#define KAL_TICKS_5_SEC_REAL            ((   5000000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 5 sec */
#define KAL_TICKS_30_SEC_REAL           ((  30000000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 30 sec */
#define KAL_TICKS_1_MIN_REAL            ((  60000000+(KAL_MICROSECS_PER_TICK_REAL/2))/KAL_MICROSECS_PER_TICK_REAL)  /* 1 min */
#define KAL_MSEC_64_TICKS_REAL          ((KAL_MICROSECS_PER_TICK_REAL*64+(1000/2))   /1000)  /* 64 ticks */
#define KAL_MSEC_256_TICKS_REAL         ((KAL_MICROSECS_PER_TICK_REAL*256+(1000/2))  /1000)  /* 256 ticks */
#endif /* KAL_ON_OSCAR */

#if defined(KAL_ON_OSABS)
#define KAL_TICKS_10_MSEC           (2)         /* 10 msec */
#define KAL_TICKS_50_MSEC           (10)        /* 50 msec */
#define KAL_TICKS_100_MSEC          (21)        /* 100 msec */
#define KAL_TICKS_500_MSEC          (108)       /* 500 msec */
#define KAL_TICKS_1024_MSEC         (221)       /* 1024 msec */
#define KAL_TICKS_1_SEC             (216)       /* 1 sec */
#define KAL_TICKS_5_SEC             (1083)      /* 5 sec */
#define KAL_TICKS_30_SEC            (6500)      /* 30 sec */
#define KAL_TICKS_1_MIN             (13001)     /* 1 min */
#define KAL_MSEC_64_TICKS           (295)       /* 64 ticks */
#define KAL_MSEC_256_TICKS          (1181)      /* 256 ticks */
#endif

#if defined(__ARMCC_VERSION)
    #define INLINE              __inline
    #define INLINE_MODIFIER     extern
	#define INLINE_ALWAYS       
#elif defined (__GNUC__) && !defined(__MINGW32__)
    #define INLINE              inline
    #define INLINE_MODIFIER     extern
	#define INLINE_ALWAYS       __attribute__((always_inline))
#elif defined (_MSC_VER) || defined(__MINGW32__)
    #define INLINE              __inline
    #define INLINE_MODIFIER     static
    #define INLINE_ALWAYS       
#endif /* Cross RVCT/GCC/VC9 Compiler marco definition */


#if defined(__ARMCC_VERSION)
    #define GET_RETURN_ADDRESS(a) a=__return_address()
#elif defined (__GNUC__)
    #define GET_RETURN_ADDRESS(a) a=(kal_uint32)__builtin_return_address(0)
#elif defined (_MSC_VER)
    #define GET_RETURN_ADDRESS(a) a=_ReturnAddress()
#endif /* Cross RVCT/GCC/VC9 Compiler marco definition */
#if defined(__ARMCC_VERSION)
    #define GET_STACK_POINTER(a) a= __current_sp()
#elif defined (__GNUC__)
    #define GET_STACK_POINTER(a) a= (kal_uint32)__builtin_frame_address(0)
#elif defined (_MSC_VER)
    #define GET_STACK_POINTER(a) __asm mov a,ESP
#endif /* Cross RVCT/GCC/VC9 Compiler marco definition */

#if defined(__ARMCC_VERSION) && defined(__MTK_TARGET__)
    #define PRAGMA_BEGIN_COMPILER_OPTIMIZE_DISABLE	_Pragma("push")\
													_Pragma("O0")
	#define PRAGMA_END_COMPILER_OPTIMIZE_DISABLE	_Pragma("pop")
	#define PRAGMA_BEGIN_COMPILER_OPTIMIZE_TIME		_Pragma("push")\
													_Pragma("Otime")
	#define PRAGMA_END_COMPILER_OPTIMIZE_TIME		_Pragma("pop")
#elif defined(__GNUC__) && defined(__MTK_TARGET__)
    #define PRAGMA_BEGIN_COMPILER_OPTIMIZE_DISABLE	_Pragma("GCC push_options")\
													_Pragma("GCC optimize(\"-O0\")")
	#define PRAGMA_END_COMPILER_OPTIMIZE_DISABLE	_Pragma("GCC pop_options")
	#define PRAGMA_BEGIN_COMPILER_OPTIMIZE_TIME		_Pragma("GCC push_options")\
													_Pragma("GCC optimize(\"-O3\")")
	#define PRAGMA_END_COMPILER_OPTIMIZE_TIME		_Pragma("GCC pop_options")
#else
	#define PRAGMA_BEGIN_COMPILER_OPTIMIZE_DISABLE
	#define PRAGMA_END_COMPILER_OPTIMIZE_DISABLE
	#define PRAGMA_BEGIN_COMPILER_OPTIMIZE_TIME
	#define PRAGMA_END_COMPILER_OPTIMIZE_TIME
#endif /* Cross RVCT/GCC/VC9 Compiler marco definition */

#define CBS_SCAN_EVENT_INDEX (1)

/** Define the macro which tells compiler to reload all the variables from
    memory after this. It can ensure all variables are reloaded after entering
    a critical section. Otherwise compiler may optimize the code and result in
    a race condition which can't be observed in source code level */
#if defined(__ARMCC_VERSION)
   #define STRONG_ORDER_MEMORY_LOAD()
#elif defined (__GNUC__)
   #define STRONG_ORDER_MEMORY_LOAD()   asm volatile ("" : : : "memory")
#elif defined (_MSC_VER)
   #define STRONG_ORDER_MEMORY_LOAD()
#endif /* Cross RVCT/GCC/VC9 Compiler marco definition */


/* opaque type for event group identity */
typedef struct 
{
#if defined(KAL_ON_NUCLEUS)
    kal_uint8 unused[96];  /* align to cache line size */
#elif defined(KAL_ON_OSCAR)
    kal_uint8 unused[76];  /* as sizeof(event group) in oscar */
#endif
} cc_eventgrpid;


/*******************************************************************************
 * Defines for ADT
 *******************************************************************************/
/* ADT */
struct adt_node;

/* ilm free callback function prototype */
typedef void (*ilm_free_callback_t)(ilm_struct *ilm_ptr);
/* ilm ADT translator callback function prototype */
typedef void (*translator_adt_enc_callback_t)(const ilm_struct *ilm_ptr, struct adt_node **adt);


/* opaque type for RCU */
typedef struct
{
    kal_uint8 unused;
} *kalcc_rcuid;



#define RCU_BUFF_HEADER         kal_uint8 rcu_buff_header[ 32 ];
#define RCU_HEADER              kal_uint8 rcu_header[ 32 ];

#define RCU_MEMORY_SIZE(sz,nr)  ( CPU_CACHE_LINE_SIZE + nr * (CPU_CACHE_LINE_SIZE + ALIGNTOCACHELINE(sz)) )

#define HRT_RCU_MEMORY_SIZE(sz,nr)  ( CPU_CACHE_LINE_SIZE + nr * (CPU_CACHE_LINE_SIZE + ALIGNTOCACHELINE(sz)) )



/*******************************************************************************
 * Defines for ITC
 *******************************************************************************/
// Maximum of 32 IDs (16 FIFOs + 16 Semaphores) allowed by HW
// SW 32 ~ 47 IDs (16 LLSC)
typedef enum{
    KAL_ITC_CORE01_RF = 0,      /* 00: EL1D RF Ctrl Sequence (use FIFO) */
    KAL_ITC_CORE01_SF,          /* 01: EL1D SF Tick Handshake for Multi-Threading (use FIFO) */
    KAL_ITC_CORE0_CT,           /* 02: Core0 Child Thread Wait */
    KAL_ITC_CORE1_CT,           /* 03: Core1 Child Thread Wait */
    KAL_ITC_MT_CORE0_TC_STATUS, /* 04: CORE0 MT TC STATUS*/
    KAL_ITC_MT_CORE1_TC_STATUS, /* 05: CORE0 MT TC STATUS*/
    KAL_ITC_CORE012_HRT,        /* 06: HRT API (RCU) Usage */
    KAL_ITC_OS_L_1,             /* 07: OS Schedule Lock #1 */
    KAL_ITC_DHL_MDM,            /* 08: DHL Modem Monitor Lock */
    KAL_ITC_DHL_ISR,            /* 09: DHL ISR Logging Lock */
    KAL_ITC_PS_TL,              /* 10: PS Trace Lock */
    KAL_ITC_L1_RF_REQ,          /* 11: All RF requests from L1 modules running on Core 0/1 VPE 1 */
    KAL_ITC_L2_PS_LOCK,         /* 12: 2/3G L2 PS lock (URLC/UMAC, RLC/MAC) */
    KAL_ITC_ERRC_LOCK,          /* 13: ERRC Lock */
    KAL_ITC_C2K_SLEEP_L,        /* 14: C2K Modem Timer ON/OFF */
    KAL_ITC_C2K_RCP_TX_L,       /* 15: C2K L2/RCP TX Lock */
    KAL_ITC_C2K_SYS_PROTECT,    /* 16: C2K common system API protection */
    KAL_ITC_DSP_SLEEP_L,        /* 17: DSP sleep flow control */
    KAL_ITC_DSP_DOWNLOAD,       /* 18: DSP dynamic download */
    KAL_ITC_GPT_DRIVER,         /* 19: GPT driver */

    KAL_ITC_TAG_LLSC_START,
    KAL_ITC_OS_L_2 = KAL_ITC_TAG_LLSC_START,    /*  20: All Cores SST EMM */
    KAL_ITC_4GPS,               /* 21: EL2 Task/LISR C.S. */
    KAL_ITC_EL1D_ALL,           /* 22: EL1D Common Data Between Core0,1 HISR/Task and LISR */
    KAL_ITC_CORE012_GDMA,       /* 23: All Cores HRT API Handle: GDMA */
    KAL_ITC_CORE012_INT,        /* 24: All Cores HRT API Handle: Interrupt */
    KAL_ITC_DVFS,               /* 25: DVFS request table and DVFS/PLL HW control */
    KAL_ITC_LOW_POWER,          /* 26: Core0/1: L1 low power, sleep flow, 32k less, HW resource control */
    KAL_ITC_SLEEP_L,            /* 27: MIPS core sleep flow */
    KAL_ITC_EL1D_LISR,          /* 28: EL1D Common Data Between Core0,1 LISR */
    KAL_ITC_EL1D_GDMA_LIST,     /* 29: EL1D GDMA Link List Handling in Core 0/1 VPE 0/1 */
    KAL_ITC_EL1CRX,             /* 30: EL1 RX Common Data */
    KAL_ITC_EL1C_IDC,           /* 31: EL1C IDC Common Data Between Core 0/1 VPE 0/1 */
    KAL_ITC_RTB_LOCK,           /* 32: L1 RTB Critical Section */
    KAL_ITC_23G_L1_HRT_LOCK,    /* 33: 2/3G L1 lock in Core 0/1 VPE 1 */
    KAL_ITC_23G_L1_LOCK,        /* 34: 2/3G L1 lock in Core 0/1 VPE 0/1 */
    KAL_ITC_AMIF_LOCK,          /* 35: AP Modem Interface */
    KAL_ITC_MEM_SLOW_DOWN,      /* 36: Memset Slow Down */
    KAL_ITC_DCM,                /* 37: DCM handler */
    KAL_ITC_ADT,                /* 38: ADT */
    KAL_ITC_DSM,                /* 39: DSM */
    KAL_ITC_ELM_LOCK,           /* 40: ELM */
	KAL_ITC_EVRCP_RCP_RI,       /* 41: lock between ECRCP and RCP_RI */
	KAL_ITC_CHLP_RCP_RI,        /* 42: lock between CHIP and RCP_RI */
    KAL_ITC_PSTRACE_LOCK,       /* 43: dhl PSTRACE*/
    KAL_ITC_EVSHED_EVNO_LOCK,   /* 44: Event Scheduler number lock*/
    KAL_ITC_META_SYSTRACE_LOCK, /* 45: META_SYSTRACE lock*/
	KAL_ITC_ERRC_AFM_LOCK,      /* 46: ERRC*/ 
	KAL_ITC_ERRC_C2K_AMIF_LOCK, /* 47: AMIF modeule lock between ERRC and C2K LISR(IRQ137)*/ 
    KAL_ITC_VPE0_DL,            /* 48: Core0 VPE0 Dummy LISR*/
    KAL_ITC_VPE1_DL,            /* 49: Core0 VPE1 Dummy LISR*/
    KAL_ITC_VPE2_DL,            /* 50: Core1 VPE0 Dummy LISR*/
    KAL_ITC_VPE3_DL,            /* 51: Core1 VPE1 Dummy LISR*/		
    KAL_ITC_DL_PROTECT,	        /* 52: Lock for Dummy LISR data*/
    KAL_ITC_MMRFD_SCH_MIPI_LOCK,/* 53: Lock for MMRFD to protect API operation*/
    KAL_ITC_MMRFD_SCH_BPI_LOCK, /* 54: Lock for MMRFD to protect API operation*/
    KAL_ITC_MMRFD_SCH_RFIC_LOCK,/* 55: Lock for MMRFD to protect API operation*/
    KAL_ITC_IDC,                /* 56: Lock for IDC driver */
    KAL_ITC_AFM,                /* 57: Lock for AFM */
    KAL_ITC_TTY,                /* 58: Lock for TTY */
    KAL_ITC_CCCITTY,            /* 59: Lock for CCCI TTY */
    KAL_ITC_CCCI,               /* 60: Lock for CCCI */
    KAL_ITC_CCISM,              /* 61: Lock for CCISM */
	
    KAL_ITC_TAG_LLSC_FIFO_START,
    KAL_ITC_END = KAL_ITC_TAG_LLSC_FIFO_START,

    KAL_ITC_CORE0_DL,           /* X: Core0 VPE0 Dummy LISR */
    KAL_ITC_CORE1_DL,           /* X: Core1 VPE0 Dummy LISR */
    KAL_ITC_CORE2_DL,           /* X: Core2 VPE0 Dummy LISR */
    KAL_ITC_CORE0_23G,          /* X: Core0 23G Giant Lock */
    KAL_ITC_CORE2_23G,          /* X: Core2 23G Giant Lock */
    KAL_ITC_CORE012_SYNC        /* X: All Cores HRT API Handle: Sync */
} kal_itc_lock_id;

#define ITC_LLSC_FIFO_NUM (KAL_ITC_END - KAL_ITC_TAG_LLSC_START)

/*******************************************************************************
 * Defines for HRT Multi-threading
 *******************************************************************************/
typedef enum{
    KAL_Q0,
    KAL_Q1,
    KAL_Q2,
    KAL_Q_MAX
} kal_workqueueid;

typedef kal_uint32 kal_workqueue_mask;

#define KAL_Q0_MASK       (1)
#define KAL_Q1_MASK       (2)
#define KAL_Q0_Q1_MASK    (3)
#define KAL_Q2_MASK       (4)
#define KAL_Q0_Q2_MASK    (5)
#define KAL_Q1_Q2_MASK    (6)
#define KAL_Q0_Q1_Q2_MASK (7)

#define KAL_ALL_Q_FINISH     (0)
#define KAL_Q0_EXECUTE       (1)
#define KAL_Q1_EXECUTE       (2)
#define KAL_Q0_Q1_EXECUTE    (3)
#define KAL_Q2_EXECUTE       (4)
#define KAL_Q0_Q2_EXECUTE    (5)
#define KAL_Q1_Q2_EXECUTE    (6)
#define KAL_Q0_Q1_Q2_EXECUTE (7)

#define KAL_MTCHECK_TC_STILL_RUNNING (0)
#define KAL_MTCHECK_TC_NOT_RUNNING   (1)

typedef struct mt_func_para_struct {
    kal_uint8  execute_seq_num;
    kal_uint8  reserved;    /* is_selected for MT internal usage */
    kal_uint16 func_index;
    void*      func_param;
} mt_func_para_struct;


/*******************************************************************************
 * Defines for Task/HISR affinity config
 *******************************************************************************/
#define AFFINITY_NIL    0x0
#define AFFINITY_VPE0   0x1
#define AFFINITY_VPE1   0x2
#define AFFINITY_VPE2   0x4
#define AFFINITY_VPE3   0x8
#define AFFINITY_DYNAMIC 0x8000
#define DUPLICATED_TASK 0x80
typedef enum{
    None_Group                    = AFFINITY_NIL,
    VPE0_Group                    = AFFINITY_VPE0,
    VPE2_Group                    = AFFINITY_VPE2,
    SMP_NORMAL_Group              = AFFINITY_VPE0 | AFFINITY_VPE2,
    SMP_NORMAL_AND_HRT_Group      = AFFINITY_VPE0 | AFFINITY_VPE1 | AFFINITY_VPE2 | AFFINITY_VPE3,
    
    VPE1_RESERVED                = AFFINITY_VPE1,  // this is only for vpe1 idle task 
    VPE3_RESERVED                = AFFINITY_VPE3,  // this is only for vpe3 idle task
} kal_affinity_group;

/* Affinity group IDs for group affinity */

typedef kal_uint32 kal_task_group_id;

#define AFFI_GROUP_ID_0    0
#define AFFI_GROUP_ID_1    1
#define AFFI_GROUP_ID_2    2
#define AFFI_GROUP_ID_3    3
#define AFFI_GROUP_ID_4    4
#define AFFI_GROUP_ID_5    5
#define AFFI_GROUP_ID_6    6
#define AFFI_GROUP_ID_7    7
#define AFFI_GROUP_ID_8    8
#define AFFI_GROUP_ID_9    9
#define AFFI_GROUP_ID_NONE 0xFFFFFFFF

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef enum
{
    RESETM_SUCCESS = 0,
    RESETM_SUCCESS_TASK_NOT_SUSPEND,
    RESETM_FAIL,
    RESETM_FAIL_TASK_NOT_SUSPEND,
    RESETM_NOT_EXIST, // Module not found by module id
    RESETM_NOT_TASK   // This module is not real task (maybe DUMMY or LISR/HISR)
}E_RESETM_ERROR_CODE;

/*******************************************************************************
 * Defines for Task/HISR affinity config
 *******************************************************************************/
 #if defined(KAL_ON_NUCLEUS)
/*Mask Group for Dummy LISR*/
#define DUMMY_LISR_VPE0_MASK   0x1
#define DUMMY_LISR_VPE1_MASK   0x2
#define DUMMY_LISR_VPE2_MASK   0x4
#define DUMMY_LISR_VPE3_MASK   0x8
#define VPE_MASK_ALL           0x0000000F
#define DUMMY_LISR_ALL_MASK    0xFFFFFFFF	

typedef enum{
    VPE0_DUMMY_LISR               = DUMMY_LISR_VPE0_MASK,
    VPE1_DUMMY_LISR               = DUMMY_LISR_VPE1_MASK,
    VPE2_DUMMY_LISR               = DUMMY_LISR_VPE2_MASK,
    VPE3_DUMMY_LISR               = DUMMY_LISR_VPE3_MASK,
    ALL_DUMMY_LISR                = DUMMY_LISR_ALL_MASK, 
} kal_dummy_LISR_group;
#endif


/*******************************************************************************
 * Defines for UTC counte
 *******************************************************************************/
typedef struct wall_clock_t {
    kal_uint32 ms_msb_utc_counter;
    kal_uint32 ms_lsb_utc_counter;
    kal_uint32 us_msb_utc_counter;
    kal_uint32 us_lsb_utc_counter;
} wall_clock;

#endif  /* _KAL_PUBLIC_DEFS_H */
