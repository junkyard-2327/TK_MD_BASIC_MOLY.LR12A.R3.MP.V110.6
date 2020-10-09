/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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


#ifndef _SYSFRC_H_
#define _SYSFRC_H_
/*****************************************************************************
* 
* FILE NAME   : sysfrc.h
*
* DESCRIPTION : Defines local interface for FRC. 
*
* HISTORY     :
*
*****************************************************************************/

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "systyp.h"
#include "valapi.h"



/*----------------------------------------------------------------------------
 Global Defines and Macros
----------------------------------------------------------------------------*/

/* Val * 9.8304 * (1 + AfcPpb/1000000000) */
#define SYS_CONVERT_FRC_TO_9M(Val, AfcPpb) ((((kal_int64)(Val)) * 6144 + ((((kal_int64)(Val)) * (AfcPpb) * 3) >> 19)) / 625) 

/* Val / (1 + AfcPpb/1000000000) / 9.8304 = Val * (1 - AfcPpb/1000000000) / 9.8304 */
#define SYS_CONVERT_9M_TO_FRC(Val, AfcPpb) ((kal_uint32)((((kal_int64)(Val)) * 625 - ((((kal_int64)(Val)) * (AfcPpb) * 625) >> 30)) / 6144))

#define MAX_FRC_CNT               (0x100000000UL)
#define C2K_FRC_WRAP              (0xFFFFFFFF)
#define FRC_FREQ                  (1000000L) /* 1 MHz */

#if defined(__FPGA__) && defined(__MTK_TARGET__)
/* In FPGA vefication platform, Rx Timer clock frequency has downscale 100\50,
   but FRC clock remains 1MHz. Therefore, need to correct FRC value by /(100 or 50) */
#define FRC_DOWNSCALE_FACTOR      (100)
#else
#define FRC_DOWNSCALE_FACTOR      (1)
#endif

/* Diff of two comapred FRC number cannot be bigger than 2^31: 2147.5s */
#define MAX_FRC_DIFF              (0x80000000)

/** To check earlrFRC is earlier than lateFRC */
#define FRC_COMPARE(early, late)                           \
   (((early < late) && ((late - early) < MAX_FRC_DIFF)) || \
    ((early > late) && ((early - late) > MAX_FRC_DIFF)))


/*----------------------------------------------------------------------------
 Global Typedefs
----------------------------------------------------------------------------*/



/*----------------------------------------------------------------------------
 Global Data
----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------
 Global Function Prototypes
----------------------------------------------------------------------------*/
extern void       SysFrcStartTimeSync(SysAirInterfaceT Interface);
extern void       SysFrcStopTimeSync(SysAirInterfaceT Interface);
extern void       SysFrcReset(SysAirInterfaceT Interface);
extern void       SysFrcSetSnapshot(SysAirInterfaceT Interface, SysSFrameTimeT *SysTime, kal_uint32 Frc);
extern kal_bool   SysFrcConvertToSt(SysAirInterfaceT Interface, kal_uint32 Frc, SysSFrameTimeT *SysTime);
extern void       SysFrcConvertToStForce(SysAirInterfaceT Interface, kal_uint32 Frc, SysSFrameTimeT *SysTime,kal_bool NeedTrace);
extern kal_bool   SysStConvertToFrc(SysAirInterfaceT Interface, SysSFrameTimeT *SysTime, kal_uint32 *Frc);
extern kal_bool   SysFrcSyncIsValid(SysAirInterfaceT Interface);
extern kal_bool   SysFrcGetNextFrameBoundary(SysAirInterfaceT Interface, kal_bool Check20msBoundary, kal_uint32 CheckTime, kal_uint32 *FrcFrameBoundary, kal_bool UseFrameOffset);
extern kal_uint32 SysFrcCntGet(void);
extern kal_uint8  SysFrcHighCntGet(void);
extern kal_bool   SysFrcReadSnapshotImm(SysAirInterfaceT Interface, SysSFrameTimeT* SFrameTime, kal_uint32* Frc);
extern void       SysFrcReptSyncInfo(SysAirInterfaceT Interface);
extern void       SysFrcReadSnapshotImmDvt(SysAirInterfaceT Interface, SysSFrameTimeT* SFrameTime, kal_uint32* Frc);


/*****************************************************************************
* End of File
*****************************************************************************/
#endif
