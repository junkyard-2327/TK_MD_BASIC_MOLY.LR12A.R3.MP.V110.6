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
 *   csd_l1ra.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file is for the interface definition between the CSD upper layer and the
 *   L1 rate adaptation layer.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _TDT_CSD_L1RA_H
#define _TDT_CSD_L1RA_H

#include "kal_general_types.h"

typedef enum
{
   CSD_MODE_NO,
   CSD_MODE_TRA,
   CSD_MODE_NT,
   CSD_MODE_TRA_FAX,
   CSD_MODE_NT_FAX
}  
CSD_MODE_ENUM;

typedef enum
{
   CSD_USER_RATE_2400,
   CSD_USER_RATE_4800,
   CSD_USER_RATE_7200,
   CSD_USER_RATE_9600,
   CSD_USER_RATE_12000,
   CSD_USER_RATE_14400
} 
CSD_USER_RATE_ENUM;


typedef enum
{
   CSD_ON = 0,
   CSD_OFF
} 
CSD_STATUS_ENUM;

typedef struct
{
    CSD_STATUS_ENUM sa;
    CSD_STATUS_ENUM sb;
    CSD_STATUS_ENUM x;
} 
CSD_V24_STATUS_STRUCT;

typedef enum
{
   CSD_FA_STATE_STATUS,
   CSD_FA_STATE_T4,
   CSD_FA_STATE_SYNC,
   CSD_FA_STATE_TRAIN
}  
CSD_FA_STATE_ENUM;

extern void csd_activate_req(CSD_MODE_ENUM csd_mode, CSD_USER_RATE_ENUM csd_user_rate, kal_bool isFR);
extern void csd_deactivate_req(void);


extern void CSD_PutUplinkData (kal_uint8* data, kal_uint16 size, 
                               CSD_V24_STATUS_STRUCT csd_v24_status);
                               
extern kal_uint16 CSD_GetDownlinkData (kal_uint8* data, kal_uint16 size,
                                       CSD_V24_STATUS_STRUCT *csd_v24_status);
                                       
extern void CSD_LoopMode(kal_bool loopmode);       

//Modified by Anthony Chin                                       
extern void CSD_UplinkTick (kal_bool dtx_allow, CSD_USER_RATE_ENUM csd_user_rate, kal_bool isFR, kal_uint16 byte_cnt);
extern void CSD_DownlinkTick (void);
                                       
#endif


