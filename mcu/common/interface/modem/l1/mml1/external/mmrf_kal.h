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
 *   mmrf_kal.h
 *
 * Project:
 * --------
 *   TK6291 Project
 *
 * Description:
 * ------------
 *   MM Layer 1 system service adaption interface
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
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _MMRF_KAL_H_
#define _MMRF_KAL_H_

#if !defined(GEN_FOR_PC)
//#include <stdarg.h>
#if !defined(__MTK_TARGET__) && ! defined (__UL1_ON_MNT__)
#include <stdlib.h>   //[RHR] : malloc function needs this header file in L1 Simulation
#endif
//#include <stdio.h>
//#include <string.h>
#endif    // GEN_FOR_PC

/* auto add by kw_check begin */
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
/* auto add by kw_check end */

#if defined(__MTK_TARGET__) || defined(__UL1_ON_MNT__) || defined(__UE_SIMULATOR__)
/* Task Management */
#include "task_config.h"
#endif /* __MTK_TARGET__ */

#include "sync_data.h"
#include "cache_sw.h"
#include "mmu.h"

/* YYH : copy from ul1_kal.h and some modification */
/* define share memory */
#define MMRF_DEFINE_NC_SHARED_VAR(type, name)                         DEFINE_NC_SHARED_VAR(type, name)
#define MMRF_DEFINE_NC_SHARED_ARRAY(type, name, size)                 DEFINE_NC_SHARED_ARRAY(type, name, size)
#define MMRF_DEFINE_NC_SHARED_VAR_ASSIGN(type, name, ...)             DEFINE_NC_SHARED_VAR_ASSIGN(type, name, __VA_ARGS__)
#define MMRF_DEFINE_NC_SHARED_ARRAY_ASSIGN(type, name, size, ...)     DEFINE_NC_SHARED_ARRAY_ASSIGN(type, name, size, __VA_ARGS__)
#define MMRF_DEFINE_DNC_SHARED_VAR(type, name)                        DEFINE_DNC_SHARED_VAR(type, name)
#define MMRF_DEFINE_DNC_SHARED_ARRAY(type, name, size)                DEFINE_DNC_SHARED_ARRAY(type, name, size)
#define MMRF_DEFINE_DNC_SHARED_VAR_ASSIGN(type, name, ...)            DEFINE_DNC_SHARED_VAR_ASSIGN(type, name, __VA_ARGS__)
#define MMRF_DEFINE_DNC_SHARED_ARRAY_ASSIGN(type, name, size, ...)    DEFINE_DNC_SHARED_ARRAY_ASSIGN(type, name, size, __VA_ARGS__)

#define MMRF_DECLARE_SHARED_VAR(type, name)            DECLARE_SHARED_VAR(type, name)
#define MMRF_DECLARE_SHARED_ARRAY(type, name, size)    DECLARE_SHARED_ARRAY(type, name, size)

#define MMRF_SHARED_VAR(name)      SHARED_VAR(name)
#define MMRF_SHARED_ARRAY(name)    SHARED_ARRAY(name)
#define MMRF_SHARED_pVAR(name)     SHARED_pVAR(name)
#define MMRF_SHARED_pARRAY(name)   SHARED_pARRAY(name)

#define MMRF_WRITE_SHARED_VAR(a, b)\
{\
   SHARED_VAR(a) = b;\
   Data_Sync_Barrier();\
}

#define MMRF_RCU_MEMORY_SIZE(size, num)   RCU_MEMORY_SIZE(size, num)
#define MMRF_RCU_CREATE(buff_addr, allocated_buff_size, buff_size, reserved) rcu_create( buff_addr, allocated_buff_size, buff_size, reserved )
#define MMRF_RCU_GET_FREE_BUFF(id)    rcu_get_free_buff(id)
#define MMRF_RCU_COMMIT_DATA(data)    rcu_commit_data(data)
#define MMRF_RCU_GET_READ_LOCK(id)    rcu_get_read_lock(id)
#define MMRF_RCU_FREE_READ_LOCK(data) rcu_free_read_lock(data)

#define MMRF_ALIGNTOCACHELINE(size) ALIGNTOCACHELINE(size)

/* Marcos for Cross-Core RF custom data*/
/* SHM Declare Macros for RF data */
#if (IS_MMRF_MT6291_DUAL_CORE_ARCH)
#define MMRF_CUSTOM_DEFINE_SHARED_ARRAY(type, name, size)               MMRF_DEFINE_DNC_SHARED_ARRAY(type, name, size)
#define MMRF_CUSTOM_DEFINE_SHARED_VAR(type, name)                       MMRF_DEFINE_DNC_SHARED_VAR(type, name)
#define MMRF_CUSTOM_DEFINE_SHARED_ARRAY_ASSIGN(type, name, size, ...)   MMRF_DEFINE_DNC_SHARED_ARRAY_ASSIGN(type, name, size, __VA_ARGS__)
#define MMRF_CUSTOM_DEFINE_SHARED_VAR_ASSIGN(type, name, ...)           MMRF_DEFINE_DNC_SHARED_VAR_ASSIGN(type, name, __VA_ARGS__)
#else
#define MMRF_CUSTOM_DEFINE_SHARED_ARRAY(type, name, size)               type name[size];
#define MMRF_CUSTOM_DEFINE_SHARED_VAR(type, name)                       type name;
#define MMRF_CUSTOM_DEFINE_SHARED_ARRAY_ASSIGN(type, name, size, ...)   type name[size] = {__VA_ARGS__};
#define MMRF_CUSTOM_DEFINE_SHARED_VAR_ASSIGN(type, name, ...)           type name = {__VA_ARGS__};
#endif

/* SHM Extern Macros for RF data */
#define MMRF_CUSTOM_DECLARE_SHARED_VAR(type, name)                      MMRF_DECLARE_SHARED_VAR(type, name)
#define MMRF_CUSTOM_DECLARE_SHARED_ARRAY(type, name, size)              MMRF_DECLARE_SHARED_ARRAY(type, name, size)

/* SHM Usage Macros for RF data */
#define MMRF_CUSTOM_SHARED_VAR(name)                                    MMRF_SHARED_VAR(name)
#define MMRF_CUSTOM_SHARED_ARRAY(name)                                  MMRF_SHARED_ARRAY(name)
#define MMRF_CUSTOM_SHARED_pVAR(name)                                   MMRF_SHARED_pVAR(name)
#define MMRF_CUSTOM_SHARED_pARRAY(name)                                 MMRF_SHARED_pARRAY(name)

/* SHM Cacheable Macros for RF data*/
/* Temperarily disbale for calify the usage of cachabel API */
#if 0//!defined(L1_SIM) && defined(__DYNAMIC_SWITCH_CACHEABILITY__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
#define MMRF_CUSTOM_SHARED_DATA_SET_TO_CACHE(ptr, size)
#define MMRF_CUSTOM_SHARED_DATA_SET_TO_NOCACHE(ptr, size)
#define MMRF_CUSTOM_SHARED_DATA_CACHE_FLUSH(ptr, size)
#endif

/*******************************************************************************
 * Destination queue id definition
 *******************************************************************************/
#define GS_QUEUE_MMRF_PCORE                       MOD_MMRF_PCORE
#define GS_QUEUE_MMRF                             MOD_MMRF
#define GS_QUEUE_MMRF_XL1TST                      MOD_MMRF_XL1TST


/*******************************************************************************
 * L1 compiler version related MACRO definition
 *******************************************************************************/
#if defined(__MTK_TARGET__)
#if defined (__ARMCC_VERSION)
#define INLINE __inline
#elif defined (__GNUC__)
#define INLINE inline
#endif /* ARMCC , GNUC */
#else  /* __MTK_TARGET__ */
#define INLINE __inline
#endif /* __MTK_TARGET__ */

/*******************************************************************************
 * L1 system service related MACRO definition
 *******************************************************************************/
#if defined(__MTK_TARGET__) || defined(__UE_SIMULATOR__) || defined(__UL1_ON_MNT__) || defined(UNIT_TEST)
/*******************************************************************************
 * Destination module id definition
 *******************************************************************************/
#define MOD_ID_MMRF_PCORE                   MOD_MMRF_PCORE
#define MOD_ID_MMRF                         MOD_MMRF
#define MOD_ID_MMRF_XL1TST                  MOD_MMRF_XL1TST


#define MMRF_ALLOC_BUF(byte_size)           get_ctrl_buffer(byte_size)
#define MMRF_FREE_BUF(buf)                  free_ctrl_buffer(buf)

#define MMRF_OPEN_MESSAGE_QUEUE(queue)      (KAL_SUCCESS)
#define MMRF_OPEN_INT_MESSAGE_QUEUE(queue)  (KAL_SUCCESS)


#define MMRF_SEND_MSG(src_mod, dest_mod, sap, msg, local_para, peer_buf) \
{  msg_send6((src_mod), (dest_mod), (sap), (msg), (local_para_struct*)(local_para), (peer_buff_struct *) (peer_buf));  }

#define MMRF_SEND_CC_MSG(src_mod, dest_mod, sap, msg, local_para, peer_buf) \
{ \
   msg_send6_cc((src_mod), (dest_mod), (sap), (msg), (local_para_struct*)(local_para), (peer_buff_struct *) (peer_buf)); \
}

#define MMRF_RECV_EXT_MSG_PCORE(ilm_ptr)    msg_receive_extq(ilm_ptr)
#define MMRF_RECV_INT_MSG_PCORE(ilm_ptr)    msg_receive_intq(ilm_ptr)
#define MMRF_RECV_EXT_MSG(ilm_ptr)          msg_receive_extq(ilm_ptr)
#define MMRF_RECV_INT_MSG(ilm_ptr)          msg_receive_intq(ilm_ptr)
#define MMRF_XL1TST_RECV_EXT_MSG(ilm_ptr)   msg_receive_extq(ilm_ptr)
#define MMRF_FREE_MSG(ilm_ptr)              { destroy_ilm(ilm_ptr); }
#define MMRF_XL1TST_FREE_MSG(ilm_ptr)       { destroy_ilm(ilm_ptr); }


#define MMRF_FREE_LOCAL_PARA(a)             { free_local_para(a); }
#define MMRF_HOLD_LOCAL_PARA(a)             { hold_local_para_r(a); }


static INLINE local_para_struct* MMRF_ALLOC_LOCAL_PARA(kal_uint32 size)
{
   return construct_local_para(size, TD_RESET);
}

/* Cross-core API */
static INLINE local_para_struct* MMRF_ALLOC_CC_LOCAL_PARA(kal_uint32 size)
{
   return construct_cc_non_cached_local_para(size, TD_RESET);
}

static INLINE kal_uint8* MMRF_ALLOC_PEERBUF(kal_uint32 size)
{
   kal_uint8   *pPeerBuff;

   pPeerBuff = construct_peer_buff(size, 0, 0, TD_RESET);

   return pPeerBuff;
}

static INLINE kal_uint8* MMRF_ALLOC_CC_PEERBUF(kal_uint32 size)
{
   kal_uint8   *pPeerBuff;

   pPeerBuff = construct_cc_non_cached_peer_buff(size, 0, 0, TD_RESET);

   return pPeerBuff;
}

static INLINE kal_uint8* MMRF_GET_PEERBUF(void *_pPeerBuff, kal_uint16* buf_length_ptr)
{
   kal_uint8   *pPduData;

   if(buf_length_ptr)
   {
      *buf_length_ptr = ((peer_buff_struct *)_pPeerBuff)->pdu_len;
   }

   pPduData = (kal_uint8 *)get_peer_buff_pdu((peer_buff_struct *)_pPeerBuff, buf_length_ptr);

   return pPduData;
}

#else /* for simulation */

extern ilm_struct simu_ilm_pool[];

typedef unsigned long  dword;        /* 4 byte variable */
typedef unsigned short word;         /* 2 byte variable */
typedef   signed short sword;        /* 2 byte variable */
typedef unsigned char  boolean;      /* 1 byte variable */

#define false KAL_FALSE
#define true KAL_TRUE

/*******************************************************************************
 * Destination module id definition
 *******************************************************************************/
#define MOD_ID_MMRF_PCORE                         MOD_MMRF_PCORE
#define MOD_ID_MMRF                               MOD_MMRF
#define MOD_ID_MMRF_XL1TST                        MOD_MMRF_XL1TST

extern kal_status gs_open_message_queue(module_type);
extern kal_status gs_open_int_message_queue(module_type);
extern kal_status gs_send_message(module_type, module_type, void *, kal_bool);
//extern kal_status gs_send_int_message(module_type, void *, kal_bool);
extern kal_status gs_read_message(module_type, void *, kal_uint16, kal_bool);
extern kal_status gs_read_int_message(module_type, void *, kal_uint16, kal_bool);


#define MMRF_ALLOC_BUF(byte_size)  malloc(byte_size)

#define MMRF_FREE_BUF(buf)         free(buf)

#define MMRF_OPEN_MESSAGE_QUEUE(queue) \
      gs_open_message_queue((queue))

#define MMRF_OPEN_INT_MESSAGE_QUEUE(queue) \
   gs_open_int_message_queue((queue))


module_type GetQueueID(const int mod_id);
static INLINE void MMRF_SEND_MSG(module_type src_mod, module_type dest_mod, sap_type sap_id, msg_type msg_id, local_para_struct *local_para, peer_buff_struct *peer_buf)
{
   ilm_struct *ilm_ptr;
   module_type queue_id;
   
   ilm_ptr = &simu_ilm_pool[src_mod];
   ilm_ptr->src_mod_id = src_mod;
   ilm_ptr->dest_mod_id = dest_mod;
   ilm_ptr->sap_id = sap_id;
   ilm_ptr->msg_id = msg_id;  
   ilm_ptr->local_para_ptr = local_para;
   ilm_ptr->peer_buff_ptr = peer_buf;
   queue_id = GetQueueID(dest_mod);

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
#endif
    gs_send_message(src_mod, queue_id, ilm_ptr, KAL_TRUE);

}

static INLINE void MMRF_SEND_CC_MSG(module_type src_mod, module_type dest_mod, sap_type sap_id, msg_type msg_id, local_para_struct *local_para, peer_buff_struct *peer_buf)
{
   MMRF_SEND_MSG( src_mod, dest_mod, sap_id, msg_id, local_para, peer_buf);
}

#define MMRF_RECV_EXT_MSG_PCORE(ilm_ptr) \
      gs_read_message(GS_QUEUE_MMRF_PCORE, ilm_ptr, sizeof(ilm_struct), true)

#define MMRF_RECV_INT_MSG_PCORE(ilm_ptr) \
      gs_read_int_message(GS_QUEUE_MMRF_PCORE, ilm_ptr, sizeof(ilm_struct), true)

#define MMRF_RECV_EXT_MSG(ilm_ptr) \
      gs_read_message(GS_QUEUE_MMRF, ilm_ptr, sizeof(ilm_struct), true)

#define MMRF_RECV_INT_MSG(ilm_ptr) \
      gs_read_int_message(GS_QUEUE_MMRF, ilm_ptr, sizeof(ilm_struct), true)

#define MMRF_XL1TST_RECV_EXT_MSG(ilm_ptr) \
      gs_read_message(GS_QUEUE_MMRF_XL1TST, ilm_ptr, sizeof(ilm_struct), true)

#define MMRF_FREE_MSG(ilm_ptr) if ((ilm_ptr)->src_mod_id != MOD_TIMER)\
                              {\
                                 if((ilm_ptr)->local_para_ptr->ref_count == 0)\
                                    ASSERT(KAL_FALSE);\
                                 (ilm_ptr)->local_para_ptr->ref_count--;\
                                 if((ilm_ptr)->local_para_ptr->ref_count == 0)\
                                    free((ilm_ptr)->local_para_ptr);\
                              }

#define MMRF_XL1TST_FREE_MSG(ilm_ptr) if ((ilm_ptr)->src_mod_id != MOD_TIMER)\
                                      {\
                                         if((ilm_ptr)->local_para_ptr->ref_count == 0)\
                                            ASSERT(KAL_FALSE);\
                                         (ilm_ptr)->local_para_ptr->ref_count--;\
                                         if((ilm_ptr)->local_para_ptr->ref_count == 0)\
                                            free((ilm_ptr)->local_para_ptr);\
                                      }

#define MMRF_FREE_LOCAL_PARA(a) if((a)->ref_count == 0)\
                                    ASSERT(KAL_FALSE);\
                                 (a)->ref_count--;\
                                 if((a)->ref_count == 0)\
                                    free(a)

static INLINE kal_bool MMRF_HOLD_LOCAL_PARA(local_para_struct *local_para_ptr)
{
   if (local_para_ptr != NULL) {

      local_para_ptr->ref_count++;

      return KAL_TRUE;
   }

   return KAL_FALSE;
}

static INLINE local_para_struct* MMRF_ALLOC_LOCAL_PARA(kal_uint32 size)
{
   local_para_struct *local_para;

   if (size)
   {
      local_para = (local_para_struct *) malloc(size);
      memset(local_para, 0, size);
      local_para->ref_count = 1;
      local_para->msg_len = (kal_uint16)size;
   }
   else
   {
      local_para = (local_para_struct *) malloc(sizeof(local_para_struct));
      memset(local_para, 0, sizeof(local_para_struct));
      local_para->ref_count = 1;
      local_para->msg_len = 0;
   }
   return local_para;
}

/* Cross-core API */
static INLINE local_para_struct* MMRF_ALLOC_CC_LOCAL_PARA(kal_uint32 size)
{
   return MMRF_ALLOC_LOCAL_PARA(size);
}
/* Cross-core API */

static INLINE kal_uint8* MMRF_ALLOC_PEERBUF(kal_uint32 size)
{
   peer_buff_struct *pPduData;

   if( size )
   {
      pPduData = (peer_buff_struct *)malloc(size+sizeof(peer_buff_struct));
      pPduData->pdu_len = (kal_uint16)size;
   }
   else
   {
      pPduData = (peer_buff_struct *)malloc(1+sizeof(peer_buff_struct));
      pPduData->pdu_len = 1;
   }

   pPduData->ref_count = 1;
   pPduData->pb_resvered = 0;
   pPduData->free_header_space = 0;
   pPduData->free_tail_space = 0;

   return (kal_uint8*)pPduData;
}

static INLINE kal_uint8* MMRF_ALLOC_CC_PEERBUF(kal_uint32 size)
{
   peer_buff_struct *pPduData;

   if( size )
   {
      pPduData = (peer_buff_struct *)malloc(size+sizeof(peer_buff_struct));
      pPduData->pdu_len = (kal_uint16)size;
   }
   else
   {
      pPduData = (peer_buff_struct *)malloc(1+sizeof(peer_buff_struct));
      pPduData->pdu_len = 1;
   }

   pPduData->ref_count = 1;
   pPduData->pb_resvered = 0;
   pPduData->free_header_space = 0;
   pPduData->free_tail_space = 0;

   return (kal_uint8*)pPduData;
}


static INLINE kal_uint8* MMRF_GET_PEERBUF(void *_pPeerBuff, kal_uint16* buf_length_ptr)
{
   kal_uint8   *pPduData;

   if(buf_length_ptr)
   {
      *buf_length_ptr = ((peer_buff_struct *)_pPeerBuff)->pdu_len;
   }

   pPduData = (kal_uint8 *)get_peer_buff_pdu((peer_buff_struct *)_pPeerBuff, buf_length_ptr);

   return pPduData;
}

#endif /* __MTK_TARGET__ */


#endif /* _MMRF_KAL_H_ */


