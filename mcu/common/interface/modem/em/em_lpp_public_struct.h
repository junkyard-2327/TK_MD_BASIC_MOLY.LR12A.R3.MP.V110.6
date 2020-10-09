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
 *   em_lpp_public_struct.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   LPP and AGPS related engineer mode public structures
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef __EM_LPP_PUBLIC_STRUCT_H__
#define __EM_LPP_PUBLIC_STRUCT_H__

#include "em_public_struct.h"


/* For EM_LPP_MSG_TYPE_ENUM */
typedef enum
{
    EM_LPP_MSG_TYPE_REQUEST_CAPABILITIES = 0,
    EM_LPP_MSG_TYPE_PROVIDE_CAPABILITIES,
    EM_LPP_MSG_TYPE_PROVIDE_ASSISTANCE_DATA,
    EM_LPP_MSG_TYPE_REQUEST_LOCATION_INFORMATION,
    EM_LPP_MSG_TYPE_PROVIDE_LOCATION_INFORMATION,
    EM_LPP_MSG_TYPE_REQUEST_ASSISTANCE_DATA,
    EM_LPP_MSG_TYPE_ACKNOWLEDGE  /* not an message type for lpp internal process purpose */
} em_lpp_msg_type_enum;


/* For EM_LPP_MSG_STATUS_STATISTIC */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum     em_info;
    kal_uint32            numRequest;
    kal_uint32            numRequestLocationInfoAndAck;
    kal_uint32            numRequestLocationInfo;
    kal_uint32            numProvide;
    kal_uint32            numProvideLocationInfoAndAck;
    kal_uint32            numProvideLocationInfo;
} em_lpp_msg_status_statistics_ind_struct;

/* For EM_LPP_MSG_INFO */
typedef struct
{
    LOCAL_PARA_HDR
    em_info_enum     em_info;
    em_lpp_msg_type_enum   lppType;
    kal_uint32      totalMessageLength;
    kal_uint8        internalMessageId;
    kal_uint8        rawMessagePDUId;
    kal_uint32      rawMessagePDULength;
    kal_uint8        rawMessagePDU[3000];
} em_lpp_msg_info_ind_struct;

#endif /* __EM_LPP_PUBLIC_STRUCT_H__ */

