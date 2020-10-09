/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.  
* 
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
* 
* Copyright (c) 1997-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef _SMS_TUNE_H
#define _SMS_TUNE_H
/*************************************************************************
*
* File Name:       pswsmstune.h
*
* Description:     SMS Tuning File
*                  Contains tunable parameters for Stack SMS Operation.
*
* HISTORY     :
*     See Log at end of file
*
*
************************************************************************/


/* ---------------------------------------------------------------------
 * Name: SMS_MAX_NUM_ASE
 *
 * Description:
 *   This defines the maximum number of ASEs that can be connected to the
 *   Transport Layer.
 *
 * Restrictions:
 *  This number must be at most the number of Tele-service Ids
 *   
 * Default Value:
 *   5
 *   
 */
#define SMS_MAX_NUM_ASE 13

/* ---------------------------------------------------------------------
 * Name: SMS_TL_CONFIRM
 *
 * Description:
 *   This determines how unspecified QoS conditions are handled. If 1, the
 *   Transport Layer will use confirmed Data Link services whenever the
 *   QoS requirements are unspecified (e.g. sending an ACK). If 0, the
 *   non-confirmed service will be used.
 *
 * Restrictions:
 *  This number must be 0 or 1
 *   
 * Default Value:
 *   0
 *   
 */
#define SMS_TL_CONFIRM 1 

/* ---------------------------------------------------------------------
 * Name: SMS_RL_CONFIRM
 *
 * Description:
 *    Determines if the relay layer will send a request to the lower
 *    layers with confirmed service.
 *
 * Restrictions:
 *  This number must be 0 or 1
 *   
 * Default Value:
 *   1
 *   
 */
#define SMS_RL_CONFIRM KAL_TRUE 

/* ---------------------------------------------------------------------
 * Name: SMS_TC_ONLY
 *
 * Description:
 *    Indicates if the SMS Relay Layer should request the outgoing
 *    message should only be sent on a CDMA traffic channel
 *
 * Restrictions:
 *  This number must be 0 or 1
 *   
 * Default Value:
 *   0 
 *   
 */
/* THIS IS IN SCC_TUNE.H => #define SMS_TC_ONLY KAL_FALSE */


/* ---------------------------------------------------------------------
 * Name: SMS_TL_TIMEOUT
 *
 * Description:
 *   This specifies how much time (in msec's) to wait for a Transport Layer
 *   acknowledgement from the message center before declaring the transaction
 *   failed.
 *
 * Restrictions:
 *  This number must be >0 and <=65535
 *   
 * Default Value:
 *   2000      (2 seconds)
 *   
 */
#ifdef VERIZON_EXTENSIONS
#define SMS_TL_TIMEOUT 5000
#else
#ifdef MTK_CBP
#define SMS_TL_TIMEOUT 18000
#else
#define SMS_TL_TIMEOUT 18000
#endif


#endif

#ifdef MTK_CBP
#define SMS_TL_ACK_VZW_TIMEOUT 18000
#define SMS_TL_L3ACK_TIMEOUT 6000
#endif

/* ---------------------------------------------------------------------
 * Name: SMS_RL_QUEUE_SIZE
 *
 * Description:
 *   This determines how many message buffers of size SMS_RL_BUFFER_SIZE
 *   that the Relay Layer will allocate for transmitting SMS messages.
 *
 * Restrictions:
 *  This number must be >0 and <= 255
 *   
 * Default Value:
 *   5 
 *   
 */
#define SMS_RL_QUEUE_SIZE 5 

/* ---------------------------------------------------------------------
 * Name: SMS_RL_BUFFER_SIZE
 *
 * Description:
 *   This determines how large the Relay Layer transmit buffers are in bytes.
 *
 * Restrictions:
 *  This number must be >0 and <= 255
 *   
 * Default Value:
 *   254 
 *   
 */
#define SMS_RL_BUFFER_SIZE 254

/* ---------------------------------------------------------------------
 * Name: SMS_TL_MAX_TRANS
 *
 * Description:
 *   This determines how many concurrent teleservice messages
 *   can be awaiting a transport layer acknowledgement 
 *
 * Restrictions:
 *  This number must be >0 and <= 255
 *   
 * Default Value:
 *   5
 *   
 */
#define SMS_TL_MAX_TRANS 5

/* ---------------------------------------------------------------------
 *
 * Name: GLOBAL_REPLY_SEQ
 *
 * Description:
 *      This macro sets the initial value for the GlobalReplySeq
 *      value used for all transport layer messages within the SMS engine.
 *
 * Restrictions:
 *      This number must be within 0 <= GLOBAL_REPLY_SEQ <= 65535
 *
 * Default Value:
 *  0
 *
 */
#define GLOBAL_REPLY_SEQ 0

/* ---------------------------------------------------------------------
 *
 * Name: SMS_MAX_ADDRESS_CHARS
 *
 * Description:
 *    Limit on the number of bytes used for the chari fields of
 *    the SMS_ADDR structure
 *
 * Restrictions:
 *      0 < x < 255
 *
 * Default Value:
 *    32 (same as max for MMI)
 *
 */
#define SMS_MAX_ADDRESS_CHARS 32

/* ---------------------------------------------------------------------
 *
 * Name: SMS_MAX_SUBADDRESS_CHARS
 *
 * Description:
 *    Limit on the number of bytes used for the chari fields of
 *    the SMS_SUBADDR structure
 *
 * Restrictions:
 *      0 < x < 255
 *
 * Default Value:
 *    30
 *
 */
#define SMS_MAX_SUBADDRESS_CHARS 30

/* ---------------------------------------------------------------------
 *
 * Name: SMS_MAX_USERDATA_LENGTH
 *
 * Description:
 *    Limit on the number of bytes of data used for the chari
 *    fields in the SMS_USERDATA structure.  This field must 
 *    be small enough to make the SMS message fit within one
 *    data burst message.  There is no segmentation of user 
 *    messages!
 *
 * Restrictions:
 *      0 < x < 255
 *
 * Default Value:
 *    200
 *
 */
#define SMS_MAX_USERDATA_LENGTH 220

/* ---------------------------------------------------------------------
 *
 * Name: SMS_MAX_NUM_DATA_MSGS
 *
 * Description:
 *    Limit on the number of data messages contained within the
 *    SMS_USERDATA structure.  This structure can hold multiple
 *    messages each with a different encoding scheme
 *
 * Restrictions:
 *      0 < x < 255
 *
 * Default Value:
 *    2
 *
 */
#define SMS_MAX_NUM_DATA_MSGS 2

/* ---------------------------------------------------------------------
 *
 * Name: SMS_TL_MAX_MSG_LENGTH
 *
 * Description:
 *    Limits the size of a fully constructed SMS Teleservice Message.
 *    This limit is used in the SMS_TL_MSG structure
 *
 * Restrictions:
 *      0 < x < 255
 *
 * Default Value:
 *    255 
 *
 */
#define SMS_TL_MAX_MSG_LENGTH 255

/* ---------------------------------------------------------------------
 *
 * Name: SMS_TL_MAX_RETRY
 *
 * Description:
 *    Limit to the number of times the Transport Layer will attemt
 *    to resend a message to the message center
 *
 * Restrictions:
 *      0 < x < 255
 *
 * Default Value:
 *    3 
 *
 */
#ifdef VERIZON_EXTENSIONS
#define SMS_TL_MAX_RETRY_TEMP_ERROR    3
#define SMS_TL_MAX_RETRY_PERM_ERROR    3
#define SMS_TL_MAX_RETRY_TIMEOUT_ERROR 3
#else

#ifdef SPRINT_EXTENSIONS
#define SMS_TL_MAX_RETRY_TEMP_ERROR    0
#define SMS_TL_MAX_RETRY_PERM_ERROR    0
#define SMS_TL_MAX_RETRY_TIMEOUT_ERROR 1

#else
#define SMS_TL_MAX_RETRY_TEMP_ERROR    0
#define SMS_TL_MAX_RETRY_PERM_ERROR    0
#ifdef MTK_CBP
#define SMS_TL_MAX_RETRY_TIMEOUT_ERROR 4
#else
#define SMS_TL_MAX_RETRY_TIMEOUT_ERROR 0
#endif
#endif
#endif

/* ---------------------------------------------------------------------
 *
 * Name: PSW_MAX_NUM_SERVICE_CATEGORIES
 *
 * Description:
 *    Limit to the number of categories for the service category program
 *    results
 *
 * Restrictions:
 *      0 < x < 85
 *
 * Default Value:
 *    30 
 *
 */

#define SMS_MAX_NUM_SERVICE_CATEGORIES 10
#define SMS_MAX_CHAR_CATEGORY 20
#ifdef MTK_CBP
#define SMS_TL_RESEND_TIMEOUT 5000
#define SMS_TL_WAIT_RSP_TIMEOUT 165000
#else
#define SMS_TL_RESEND_TIMEOUT 10000
#endif


#ifdef MTK_CBP
#define SMS_TL_MOREL_TIMEOUT 4000
#define SMS_TL_MMS_TIMEOUT 6000
#endif

/*****************************************************************************
* $Log: pswsmstune.h $
* Revision 1.2  2004/03/25 11:46:04  fpeng
* Updated from 6.0 CP 2.5.0
* Revision 1.2  2003/08/27 15:04:56  bcolford
* Updated for merge
* Revision 1.7  2003/03/31 13:30:02  bsharma
* Changed SMS_TL_TIMEOUT to 5 seconds to allow time for origination.
* Revision 1.6  2003/02/28 16:43:00  dstecker
* Upgrade SMS to make it 637B compliant
* Revision 1.5  2002/06/04 08:07:22  mshaver
* Added VIA Technologies copyright notice.
* Revision 1.4  2001/10/29 08:48:22  mclee
* Changed # define SMS_RL_CONFIRM 1 to KAL_TRUE
* Revision 1.3  2001/09/24 15:00:05  kmar
* Update SMS to latest in CBP3.
* Increases SMS_MAX_NUM_ASE to 5 and SMS_MAX_ADDRESS_CHARS to 32.
* Revision 1.2  2000/12/19 11:57:32  plabarbe
* Updated to come a bit closer to LSI conventions.
*****************************************************************************/

/*****************************************************************************
* End of File
*****************************************************************************/
#endif /* _SMS_TUNE_H */

