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
 *   swtr.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
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
 * removed!
 * removed!
 * removed!
 * removed!
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
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef SWTR_H
#define SWTR_H

#include "kal_general_types.h"
#include "system_profiler_public.h"



typedef struct ST_AddonInfo_T
{   
    ASM_PROFILE_OPTION addonASMOption;
    kal_uint32 log_sz;
    kal_char ext_name[12];
    void (*ST_AddonInfoInitFunc)(void);
    kal_bool ST_SwapOutLogging;
    kal_uint8 *(*ST_AddonInfoLoggingFunc)(void);
} ST_AddonInfo;

/* Type Definition */
typedef struct ST_LoggingNode_T
{
   kal_uint32   jobID;
   kal_uint32   USCNT;
   kal_uint32   CoreIDTCID;
   kal_uint32   PC;
} ST_LoggingNode;

#if defined(__SYSTEM_PROFILER_ON__)
ASM_PROFILE_OPTION ST_MALMO_ASM_Register( SYSPROFILER_ADDON_TYPE addonType, kal_uint8 coreID);
#endif
kal_bool ST_IsRunning(kal_uint8 coreID);
SYSPROFILER_ERROR_CODE ST_Register_for_Core(SYSPROFILER_ADDON_TYPE addonType, kal_uint32 addonSize, kal_char addonName[], void (*ST_AddonInfoInitFunc)(void), kal_uint8* (*ST_AddonInfoLoggingFunc)(void), kal_bool ST_SwapOutLogging, kal_uint8 coreID) ;
SYSPROFILER_ERROR_CODE ST_RetreiveLoggingBuffer(kal_uint8 **startAddr, kal_uint32 *size, kal_uint8 **currPtr, kal_uint8 coreID) ;
SYSPROFILER_ERROR_CODE ST_RetrieveHeader(kal_uint8 **MADesc, kal_uint32 *szMADesc, kal_uint8 coreID) ;
SYSPROFILER_ERROR_CODE ST_init_and_running_for_Core( kal_uint32 samplingRate, kal_uint32* bufferStartAddress, kal_uint32 bufferSize, kal_uint8 coreID);
SYSPROFILER_ERROR_CODE ST_stop_for_Core(kal_uint8 coreID);

#endif   /* SWTR_H */

