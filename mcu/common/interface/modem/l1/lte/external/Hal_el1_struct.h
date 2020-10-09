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
 * Hal_el1_struct.h
 *
 * Project:
 * --------
 *   LTE_Software
 *
 * Description:
 * ------------
 *   4G Layer 1 and Protocol Stack message and callback function definition for MMI/Middleware
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _HAL_EL1_STRUCT_H
#define _HAL_EL1_STRUCT_H

#include "Hal_el1_def.h"
#include "kal_public_defs.h"

#if defined(__L1_GPS_REF_TIME_SUPPORT__) || defined(__L1_GPS_AUTO_TIMING_SYNC_SUPPORT__)
/***************************************************************************
*  PRIMITIVE STRUCTURE
*     hal_el1_gps_time_sync_req_struct
*
*  DESCRIPTION
*
***************************************************************************/
typedef struct
{
   /* Shihyao, add it to support GPS time sync procedure*/
    LOCAL_PARA_HDR
    el1_gps_time_sync_app_enum application_type;

    kal_uint16      earfcn;
    kal_uint16      pci;

    kal_bool       is_maintain_phase;  /* true : maintain phase*/
}hal_el1_gps_time_sync_req_struct;

/***************************************************************************
*  PRIMITIVE STRUCTURE
*     hal_el1_gps_time_sync_ind_struct
*
*  DESCRIPTION
*
***************************************************************************/
typedef struct
{
   /* Shihyao, add it to support GPS time sync procedure*/
   LOCAL_PARA_HDR
   el1_gps_time_sync_app_enum   application_type;
   el1_gps_time_sync_fail_enum  fail_cause;

   kal_bool          result_valid;       /* Indicate if frame_nb/subframe_nb/sfSmp (lte cell time) are valid */
   kal_uint8         subframe_nb;        /* 4bit: 0~9*/
   kal_uint16        frame_nb;           /* 10bit: 0~1023*/
   kal_uint16        sfSmp;              /* boundary offset: 0~61439 per subframe */
   kal_uint64        gpsSync_abs_tick;   /* Indicate the abs time for GSP time sync (only valid when result_valid is true)*/

   kal_bool          local_time_valid;   /* Indicate if local_time is valid */
   kal_uint32        local_time;

   kal_uint32        serving_earfcn;    /* Timing sync is performed in the serving cell */
   kal_uint16        serving_pci;


}hal_el1_gps_time_sync_ind_struct;
#endif /* end of (__L1_GPS_REF_TIME_SUPPORT__) || defined(__L1_GPS_AUTO_TIMING_SYNC_SUPPORT__) */

#endif   /*_HAL_EL1_STRUCT_H*/

