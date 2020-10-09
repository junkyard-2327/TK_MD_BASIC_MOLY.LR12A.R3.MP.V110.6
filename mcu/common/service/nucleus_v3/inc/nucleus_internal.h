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
******************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   nucleus_internal.h
 *
 * Project:
 * --------
 *   UMOLY_Software
 *
 * Description:
 * ------------
 *   This file is used for nucleus internal
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
 *============================================================================
 ****************************************************************************/
#ifndef __NUCLEUS_INTERNAL_H__
#define __NUCLEUS_INTERNAL_H__


/* Following are for MTK internal use */


/* ------------------- *
 * Configuration flags *
 * ------------------- */

/* Put important function/data to internal SRAM to improve performance
 * Must sync from kal_iram_section_defs.h */
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
    #define __IRAM_ZI
    #define __IRAM_RW
    #define __IRAM_RODATA
    #define __IRAM_ROCODE
#endif

/* Use TCD_Schedule_Lock instead of TCD_HISR_LOCK.
 * Issue: VPE0 taken schedule_lock, VPE1 always preempts CPU, VPE3 DI and waits for schedule lock.
 *        It will cause qbit check fail for VPE3.
 *        Originally, activate HISR will use TCD_HISR_LOCK and TCD_Schedule_Lock.
 *        Enlarge critical section to use only TCD_Schedule_Lock.
 *        If lock is not taken, EI and pause, to avoid qbit check fail. */
#define NU_NO_HISR_LOCK


/* NU_HISR_LOCK_SPLIT -- if defined, each HISR has a dedicated HISR lock
 * instead of single TCD_HISR_Lock. This improves performance. */
#define NU_HISR_LOCK_SPLIT


/* 1. Always schedule to core with lowest priority context (power off => lowest)
 * 2. Power on core if no available core can be selected to schedule (undefine it) */
//#define NU_SCHEDULE_PWR_ON_FIRST


/* -------------------------------------------------------------------------- */


/* ----------------------- *
 * Debugging related flags *
 * ----------------------- */

/* Record schedule lock info. for debug
 * TCD_Schedule_Lock_Owner => current owner thread
 * TCD_Schedule_Lock_Caller_L0 => caller
 * TCD_Schedule_Lock_Caller_L1 => caller's caller */
#define NU_SCHEDULE_LOCK_DEBUG


#endif /* __NUCLEUS_INTERNAL_H__ */

