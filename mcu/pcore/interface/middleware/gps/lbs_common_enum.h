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
 *  lbs_common_enum.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is the enum of LBS
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
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 *******************************************************************************/
#ifndef __LBS_COMMON_ENUM_H__
#define __LBS_COMMON_ENUM_H__

typedef enum 
{
    SUPL_UNKNOWN =  0,
    SUPL_INIT,
    SUPL_START,
    SUPL_RESPONSE,
    SUPL_POS_INIT,
    SUPL_POS,
    SUPL_END,
    SUPL_TRIGGERED_START,
    SUPL_TRIGGERED_RESPONSE,
    SUPL_TRIGGERED_STOP,
    SUPL_NOTIFY,
    SUPL_NOTIFY_RESPONSE,
    SUPL_SET_INIT,
    SUPL_REPORT,
} lbs_supl_peer_msg_type_enum;

typedef enum
{
    GPS_TRANS_STATE_NULL,  
    GPS_TRANS_STATE_WAIT_OPEN_CNF,  /*Sent OPEN request to MNL and wait the response from GPS chip */
    GPS_TRANS_STATE_OPENED,           /*OPEN_CNF reveived from MNL and start the AGPS session operation */
    GPS_TRANS_STATE_WAIT_CLOSE_CNF,  /*Sent CLOSE request  to MNL and wait the response from GPS chip */
    GPS_TRANS_STATE_CLOSED           /*CLOSE_CNF reveived from MNL and close all AGPS session operation */
} gps_chip_state_enum;

typedef enum
{
   LCS_FROM_SIM1,           /* for control plane Gemini SIM1 or single SIM */
   LCS_FROM_SIM2,            /* for control plane Gemini SIM2 */
   LCS_FROM_SIM3,            /* for control plane Gemini SIM3 */
   LCS_FROM_SIM4            /* for control plane Gemini SIM4 */
} lbs_sim_source_enum;

typedef enum
{
   POS_MODE_NONE,         /* If there is no _AGPS_SUPPORT_ */
   POS_MODE_UE_BASED,
   POS_MODE_UE_ASSISTED,
   POS_MODE_ALL           /* Default value */
} pos_mode_enum;

#endif /*__LBS_COMMON_ENUM_H__*/

