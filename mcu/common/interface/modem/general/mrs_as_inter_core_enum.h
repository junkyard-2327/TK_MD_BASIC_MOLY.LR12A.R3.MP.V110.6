/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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
 *
 * Filename:
 * ---------
 *   mrs_as_inter_core_enum.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 *
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ******************************************************************************/

#ifndef __MRS_AS_INTER_CORE_ENUM_H__
#define __MRS_AS_INTER_CORE_ENUM_H__

/*****************************************************************************
 * GSM Inter-Core Definitions
 *****************************************************************************/
typedef enum{
    UTRA_POWER_CLASS_1,
    UTRA_POWER_CLASS_2,
    UTRA_POWER_CLASS_3,
    UTRA_POWER_CLASS_3bis,
    UTRA_POWER_CLASS_4,
    UTRA_POWER_CLASS_INVALID = -1
} mrs_utra_power_class_enum;

/*****************************************************************************
 * UMTS Inter-Core Definitions
 *****************************************************************************/
 typedef enum
 {
    GSM_POWER_CLASS_1,
    GSM_POWER_CLASS_2,
    GSM_POWER_CLASS_3,
    GSM_POWER_CLASS_4,
    GSM_POWER_CLASS_5,
    GSM_POWER_CLASS_INVALID = -1      /* for non-supported band */
} mrs_gsm_power_class_enum;

 /*****************************************************************************
 * LTE Inter-Core Definitions
 *****************************************************************************/
 /****************************************************************************
 * CHANNEL LOCK FEATURE
 ****************************************************************************/
#ifdef __CHANNEL_LOCK__
typedef enum
{
    MRS_CH_LOCK_STATE_INACTIVE,
    MRS_CH_LOCK_STATE_GAS_LOCK,
    MRS_CH_LOCK_STATE_UAS_LOCK,
    MRS_CH_LOCK_STATE_EAS_LOCK
} MRS_CH_LOCK_STATE;

#endif /* __CHANNEL_LOCK__ */
#endif /* __MRS_AS_INTER_CORE_ENUM_H__ */
