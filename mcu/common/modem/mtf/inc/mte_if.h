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

/*****************************************************************************
 *
 * Filename:
 * ---------
 * mte_if.h
 *
 * Project:
 * --------
 * UMOLYA
 *
 * Description:
 * ------------
 * MT Framework element prototyes
 *
 * Author:
 * -------
 * -------
 *
 *
 * ==========================================================================
 * $Log$ 
 *
 * 
 ****************************************************************************/

 
#ifndef _MTE_IF_
#define _MTE_IF_

//#include "mt.h"
#include "mt_dispatcher.h"
#include "mtf_if.h"


#define MT_METRICS_UNIT_TEST
/**
 * @name mte_execute_func
 *
 * @brief Prototype of MTE routine entry function, all MTE should implement this and pass as an argument in register call
 * 
 * @param [in] mte_rule  mte_rule_t instance of the matched rule which triggers this element
 * @param [in] msg       Raw content of source message, use source to determine the format of this msg
 * @param [in] msg_size  Length of the content in pointed by msg
 *
 */
typedef struct _mte_rule_t mte_rule_t;
 
typedef void (*mte_execute_func)(const mte_rule_t *mte_rule, void* msg, kal_uint32 msg_size);

/// Structure of the Metrics Translation Element (MTE) rule descriptor
typedef struct _mte_rule_t
{
    char reserved[MT_DISPATCHER_ENTRY_RESERVED_SIZE];  ///< reserved fields
    
    mt_fmt_id fmt_id;             ///< Source of the message to be registered with
    kal_uint32 code;              ///< Code of the source. When incoming source message matches this code, 
                                  ///  this MTE will be called. See definition of each source for detail format of code
    mte_execute_func execute;     ///< Pointer to the mte_execute_func which is called when incoming message matches
    void* context;                ///< Context to be passed when calling mte_entry
} mte_rule_t;

/**
 * @name mt_register_mte_rule
 *
 * @brief Register a metrics translation element (MTE) to framework. This function should be only called in mte_init()
 *        The framework will dispatch message to the registered MTE based on the given source/code 
 *
 * @param [in] mte_rule   Pointer to the descriptor of the MTE rule to be registered
 *                        Caller should allocate the memory pointed by this pointer and let callee to keep this memory
 */
void mt_register_mte_rule(mte_rule_t *mte_rule);

#define GEN_MSG_ID(destID, metricID)        MSG_ID_##destID##_##metricID##_IND

extern int
mt_ext_ut_submit_metrics(msg_type msg_id, void* payload, kal_uint32 payload_size);

/**
 * @name mt_submit_metric
 *
 * @brief Submit metric value to the dedicated destination module
 *
 * @param [in] dest_id    Destination module name
 * @param [in] metric_id  Destination specified metric ID
 * @param [in] payload    Pointer to the payload content
 * @param [in] payload    Size of payload content pointed by payload
 *
 * @retval ret            Return value specified by the destination module
 * 
 * @code
 * auto r = mt_submit_metric(MT_DEST_CIQ, 10, struct_for_metric_10);
 */
//#ifdef __MTK_TARGET__
#define mt_submit_metric(_dest_id, _metric_id, _payload, _payload_size) mt_ext_ut_submit_metrics(GEN_MSG_ID(_dest_id, _metric_id), (_payload), (_payload_size))

//#endif
/**
 * @name mt_format_return
 *
 * @brief Translate destination specified return code to standard result code
 *
 * @param [in] dest_id    Destination module ID
 * @param [in] ret        Return code given by the destination module
 *
 * @retval 0              Success
 * @retval EINVAL         Invalid argument
 * @retval ENOMEM         Out of memory
 * @retval EINVAL         Invalid argument
 * @retval EAGAIN         Try again
 * @retval EIO            I/O error (channeel error)
 * @retval EPERM          Operation not permitted (all other errors)
 *
 * @code
 * int ret = mt_format_return(MT_DEST_CIQ, mt_submit_metric(MT_DEST_CIQ, 10, struct_for_metric_10));
 */
#ifdef MT_METRICS_UNIT_TEST
#define mt_format_return(_dest_id, _ret) (_ret)
#else
#define mt_format_return(_dest_id, _ret) \
	_dest_id ## _format_return(_ret)
#endif

void mt_elements_reset();

void mt_elements_init();

void mt_elements_init_proc();

#endif // _MTE_IF_
