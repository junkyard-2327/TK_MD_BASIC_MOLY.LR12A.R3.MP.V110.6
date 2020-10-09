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
 * Hal_el1_def.h
 *
 * Project:
 * --------
 *   LTE_Software
 *
 * Description:
 * ------------
 *   This file contains common typedef, definition prototypes exported by EL1 for MMI/Middleware
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
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _HAL_EL1_DEF_H
#define _HAL_EL1_DEF_H

#if defined(__L1_GPS_REF_TIME_SUPPORT__) || defined(__L1_GPS_AUTO_TIMING_SYNC_SUPPORT__)
/* Shihyao, add it to support GPS time sync procedure*/
typedef enum
{
   EL1_FINE_TIME_ASSISTANCE_APP=0,
   EL1_REFERENCE_TIME_UNCERTAINTY_APP,
   EL1_FRAME_TIME_AIDING_APP,
   EL1_APPLICATION_TYPE_END
}el1_gps_time_sync_app_enum;

typedef enum
{
   EL1_GPS_FAIL_NO_FAILURE=0,                /* No failure */
   EL1_GPS_FAIL_4G_NOT_ACTIVE,               /* 4G is not active */
   EL1_GPS_FAIL_NO_SERVING_CELL,             /* 4G is active but there is no serving cell */
   EL1_GPS_FAIL_LEAVE_CONNECTED_MODE,        /* 4G is not in connected mode for type 1/2 */
   EL1_GPS_FAIL_TIMING_NOT_ACCURATE,         /* Timing result is not accurate due to some specific scenario */
   EL1_GPS_FAIL_FRAME_SYNC_FAIL,             /* DL SYNC procedure is on-going */
   EL1_GPS_FAIL_END
}el1_gps_time_sync_fail_enum;

#endif /* end of (__L1_GPS_REF_TIME_SUPPORT__) || (__L1_GPS_AUTO_TIMING_SYNC_SUPPORT__)*/

#endif
