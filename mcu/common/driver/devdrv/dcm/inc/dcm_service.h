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
 *   dcm_service.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   This file provides dcm APIs to get device information 
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __DCM_SERVICE_H__
#define __DCM_SERVICE_H__

#define VPE_NUMBER  4
#define CORE_NUMBER 2

#define IRQ_SW_CORE0_VPE0_LEAVE_WAIT    IRQ_SW_LISR32_CODE /* IRQ 174 */
#define IRQ_SW_CORE1_VPE0_LEAVE_WAIT    IRQ_SW_LISR33_CODE /* IRQ 175 */

#define DCM_SERVICE_STEP_MAX 32

#define DCM_STATUS_NORMAL  0
//#define DCM_STATUS_WAIT    1
#define DCM_STATUS_DORMANT 2

#define WHOLE_CORE NU_TRUE
#define SINGLE_VPE NU_FALSE

#define NORMAL_TC0_GROUP  0
#define HIGHEST_TC0_GROUP 3

typedef enum{    
/* Below for step logging */
 DCM_HANDLDER_ENTER              =   0x0000,
 DCM_HANDLDER_LEAVE              =   0x00FF,

 DCM_CIRQ_WAIT_MODE_CHECK_PENDING_IRQ_FAIL = 0x1,
 DCM_REMOVE_FROM_SCHEDULING_FAIL =   0x02,
 DCM_REMOVE_FROM_SCHEDULING_OK   =   0x03,
 DCM_CHECK_PENDING_IRQ_FAIL      =   0x04,
 DCM_CHECK_PENDING_IRQ_OK        =   0x05,
 DCM_CHECK_SW_LOCK_DONE          =   0x06,
 DCM_WAIT_CASE                   =   0x07,
 DCM_NOT_SLEEP_TIME              =   0x08,
 DCM_CORE_CHECK_SLEEP            =   0x09,
 DCM_CORE_CHECK_SLEEP_DONE       =   0x0A,

 DCM_DIRECTLY_WAIT               =   0x0E,
 DCM_DIRECTLY_WAIT_ENTER         =   0x0F,

 DCM_OSTD_WAIT_ENTER             =   0x10,
 DCM_OSTD_WAIT                   =   0x11,
 DCM_OSTD_WAIT_LEAVE             =   0x12,

 DCM_OSTD_BUSY                   =   0x20,

 DCM_OSTD_DORMANT_ENTER          =   0x30,

 DCM_OSTD_PTP_WAKE_ENTER         =   0x31,
 DCM_OSTD_PTP_WAKE_LEAVE         =   0x32,
 DCM_OSTD_PTP_SLEEP_ENTER        =   0x33,
 DCM_OSTD_PTP_SLEEP_LEAVE        =   0x34,

 DCM_OSTD_DORMANT_ABORT_LEAVE    =   0x40,
 DCM_OSTD_DORMANT_ABORT_WAIT     =   0x41,
 DCM_OSTD_DORMANT_ABORT_WAIT_LEAVE =  0x42,

 DCM_OSTD_DORMANT_LEAVE          =   0x45,
 DCM_OSTD_DORMANT_WAIT           =   0x46,
 DCM_OSTD_DORMANT_WAIT_LEAVE     =   0x47,

 DCM_VPE1_ENTER_SCHED            =   0x50,

 DCM_WFI_WAIT_ENTER              =   0x60,
 DCM_WFI_WAIT_LEAVE              =   0x61,

 DCM_OSTD_INVALID_CASE           =   0x99,
/* Above for step logging */
}DCM_ACTION_INDEX;	

typedef enum{    
//  DCM_EMM_START_PATTERN = 0xEDEC0000 and write by CMM owner
//IDLE TASK: WFI(=WAIT) ENTER/LEAVE per vpe
    DCM_EMM_VPE0_IDLE_TASK_WFI_ENTER = 0,
    DCM_EMM_VPE0_IDLE_TASK_WFI_LEAVE,
    DCM_EMM_VPE1_IDLE_TASK_WFI_ENTER,
    DCM_EMM_VPE1_IDLE_TASK_WFI_LEAVE,
    DCM_EMM_VPE2_IDLE_TASK_WFI_ENTER,
    DCM_EMM_VPE2_IDLE_TASK_WFI_LEAVE,
    DCM_EMM_VPE3_IDLE_TASK_WFI_ENTER,
    DCM_EMM_VPE3_IDLE_TASK_WFI_LEAVE,

//IDLE TASK: SLEEP ENTER/LEAVE per VPE
    DCM_EMM_VPE0_IDLE_TASK_SLEEP_ENTER,
    DCM_EMM_VPE0_IDLE_TASK_SLEEP_DORMANT_ABORT_LEAVE,	
    DCM_EMM_VPE0_IDLE_TASK_SLEEP_LEAVE,	
    DCM_EMM_VPE1_IDLE_TASK_SLEEP_ENTER,
    DCM_EMM_VPE1_IDLE_TASK_SLEEP_DORMANT_ABORT_LEAVE,	
    DCM_EMM_VPE1_IDLE_TASK_SLEEP_LEAVE,
    DCM_EMM_VPE2_IDLE_TASK_SLEEP_ENTER,
    DCM_EMM_VPE2_IDLE_TASK_SLEEP_DORMANT_ABORT_LEAVE,	
    DCM_EMM_VPE2_IDLE_TASK_SLEEP_LEAVE,
    DCM_EMM_VPE3_IDLE_TASK_SLEEP_ENTER,
    DCM_EMM_VPE3_IDLE_TASK_SLEEP_DORMANT_ABORT_LEAVE,	
    DCM_EMM_VPE3_IDLE_TASK_SLEEP_LEAVE,

// IDLE TASK: step logging
    DCM_EMM_VPE0_IDLE_TASK_FMA,
    DCM_EMM_VPE0_IDLE_TASK_STEPLOGGING,
    DCM_EMM_VPE1_IDLE_TASK_FMA,
    DCM_EMM_VPE1_IDLE_TASK_STEPLOGGING,
    DCM_EMM_VPE2_IDLE_TASK_FMA,
    DCM_EMM_VPE2_IDLE_TASK_STEPLOGGING,
    DCM_EMM_VPE3_IDLE_TASK_FMA,
    DCM_EMM_VPE3_IDLE_TASK_STEPLOGGING,
	
//IDLE TASK: EPOF end to WFI per CORE
    DCM_EMM_Core0_INFINITESLEEP_WFI,
    DCM_EMM_Core1_INFINITESLEEP_WFI,

    DCM_EMM_INDEX_MAX = DCM_EMM_Core1_INFINITESLEEP_WFI,

//  DCM_EMM_END_PATTERN = 0xCEDE0000 and write by CMM owner

}DCM_EMM_LOG_INDEX;

#endif
