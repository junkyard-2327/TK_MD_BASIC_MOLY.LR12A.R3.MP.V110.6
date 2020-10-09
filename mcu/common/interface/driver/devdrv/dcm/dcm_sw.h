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
 *   dcm_sw.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   This file defines DCM SW interface
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
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __DCM_SW_H__
#define __DCM_SW_H__

#if defined(__MTK_TARGET__)

typedef enum {
    DCM_IA_DCM_OFF,
    DCM_IA_DCM_ONLY_CLK_DISABLE,
    DCM_IA_DCM_MEMSLP_AND_CLK_DISABLE,        
} DCM_IA_DCM_CONTROL_MODE;

typedef enum {
    DCM_LOCK_UNLOCK_MODULE_AT_COMMAND = 0,
    DCM_LOCK_UNLOCK_MODULE_END,        
} DCM_LOCK_UNLOCK_MODULE;

/* DCM procedure to be executed in idle task */
void DCM_Init( void );

/* General DCM lock/unlock interface */
kal_bool DCM_Query_Status(void);
void DCM_SW_Lock(DCM_LOCK_UNLOCK_MODULE module);
void DCM_SW_Unlock(DCM_LOCK_UNLOCK_MODULE module);

void DCM_IA_DCM_Control(kal_bool enable, DCM_IA_DCM_CONTROL_MODE mode);
void DCM_IA_DCM_Core1_Memslp_Path_Control(kal_bool enable);

/* For LPM debugging */
void DCM_Service_Change_LPM_Setting(kal_bool lpm_32K, kal_uint32 ext_src_sel, kal_uint32 src_sel);

/* --------- Below Function nouse, for backward compatible. */
kal_uint8 DCM_GetHandle(void);
void DCM_Enable(kal_uint8 handle);
void DCM_Disable(kal_uint8 handle);
/* --------- Above Function nouse, for backward compatible. */

#if defined(__MAUI_BASIC__)/* Disable DCM function on BASIC load for bring up. */
//#define DCM_SUPPORT
#else/* Enable DCM function on other load. */
#define DCM_SUPPORT
#endif

//#define DCM_LPM_ENABLE /* Not supported in official load!! */

#endif /* __MTK_TARGET__ */ 

#endif /* __DCM_SW_H__ */
