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

/*******************************************************************************
 * Filename:
 * ---------
 *	tcm_context_enum.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for ...
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/



#ifndef _TCM_CONTEXT_ENUM_H
#define _TCM_CONTEXT_ENUM_H


#ifdef __TCM_UGTCM_UT__
#define TCM_TOT_CONTEXT 11 /* Used in TCM MSCs. */
#else  /* __TCM_UGTCM_UT__ */
#define TCM_TOT_CONTEXT MAX_EXT_PDP_CONTEXT
#endif /* __TCM_UGTCM_UT__ */

#define __TCM_CID_0_SUPPORT__

#ifdef __TCM_CID_0_SUPPORT__
#define TCM_MIN_CONTEXT_ID 0
#else  /* __TCM_CID_0_SUPPORT__ */
#define TCM_MIN_CONTEXT_ID 1
#endif /* __TCM_CID_0_SUPPORT__ */

#define TCM_MAX_CONTEXT_ID (TCM_MIN_CONTEXT_ID+TCM_TOT_CONTEXT-1)
#define TCM_APN_TABLE_SIZE 20

#define TCM_MIN_PROCESSING_TIME_LIMIT	5                           /* Minimum processing time limit for PDP/PDN command is 5 secs */
#define TCM_MAX_PROCESSING_TIME_LIMIT	0xffffffff                  /* Maximum processing time limit for PDP/PDN command is 0xffffffff secs */
#define TCM_PROCESSING_TIME_LIMIT_SOFT_DEADLINE   	720             /* Soft deadline of  processing time limit for PDP/PDN command is 12 mins */
#define TCM_MAX_TIMESTAMP	0xffffffff                              /* Maximum timestamp is 0xffffffff */
#define TCM_USER_TRIGGERED_DEACT_PROCESSING_TIME_LIMIT_SOFT_DEADLINE   240         /* Soft deadline of processing time limit for PDP/PDN deactivation is 4 mins */

#endif /* tcm_context_enum.h */


