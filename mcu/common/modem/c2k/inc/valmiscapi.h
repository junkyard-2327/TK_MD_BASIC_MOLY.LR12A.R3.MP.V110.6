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
/**************************************************************************************************
* %version: 5 %  %instance: HZPT_2 %   %date_created: Fri Apr 20 13:47:01 2007 %  %created_by: dsu %  %derived_by: dsu %
**************************************************************************************************/

#ifndef _VAL_MISC_API_H_
#define _VAL_MISC_API_H_

#include "sysdefs.h"
#include "valapi.h"



 /*For CBP8.2D, if 8M bytes SRAM isn't enough, please decrease the size*/
#ifdef MTK_DEV_MEMORY_OPT
#define VAL_MEMORY_POOL_SIZE  0xA000
#else
#define VAL_MEMORY_POOL_SIZE  0x32000
#endif

#define VAL_SRAM_SIZE 0x800000
 
#define VAL_MISC_MAX_REG_TASK      (5)


#define VAL_DEFAULT_PA_TEMP_CELSIUS  ((kal_int16)25)  /*Default PA temperature when PS is off*/


typedef enum
{
    VAL_RES_WALL_PAPER_SECTOR,
    VAL_RES_MAIN_TOPIC_SECTOR,
    VAL_RES_FLASH_SECTOR_MAX
} ValResFlashSectorT;

#ifdef __cplusplus
extern "C"
{ 
#endif

kal_bool   ValStatusGet( void );
RegIdT ValRegister( const ValEventHandlerT* EventHandlerP,
                    ValEventFunc CallBack );
void   ValUnRegister( const ValEventHandlerT* EventHandlerP,
                      RegIdT RegId );
void   ValProcessEvent( const ValEventHandlerT* EventHandlerP,
                        kal_uint32 Event,
                        void* EventDataP );
void   ValWatchdogKick(void);         
kal_uint32 ValGetSystemTimeInSec( void );
kal_uint32 ValGetSystemTimeInSecEx( void );
kal_bool   ValCalendarTimeGet(ValCalendarTimeT* CalendarTimeP);
void   ValSysInteruptDisable( void );
void   ValPwrOffBoard( void );  
void*  ValMalloc( kal_uint32 size );
void   ValFree(void* Ptr);
void   ValMiscLocSessionStart( void );
void   ValMiscPowerDown( ValPowerDownIdT Signal, kal_uint32 ValMsgId );
RegIdT ValMiscRegister( ValEventFunc CallBack );
void   ValMiscUnregister( RegIdT RegId );
void   ValMiscNamRequest( void );
void   ValMiscGetEriVersion(ValEriVersionNumberMsgT *MsgP);
kal_bool   ValMiscPowerKeyExist(void);

void ValGetFirmwareVersion (void);
/*void ValTestModeStartRefurbishAging (ValRfPllBandT Band, kal_uint16 Channel);*/
void ValTestModeStopRefurbishAging (void);
void ValTestModeRefurbishAgingChangeTxPwr (kal_bool Increment);
kal_int32  ValTimeZoneGet(void);
kal_bool ValIsDaySavingActive(void);
kal_bool ValMiscNamGet(NamNumber NamSeg, PswIs95NamT *pNamBuffer);
/* kal_int16  ValGetPaTemp(void); */
/*void ValMiscReadBatteryVoltage(ValBatteryReadDataMsgT *RxMsgP);*/
void ValInitiateSilentReset(void);

/*****************************************************************************
 
  FUNCTION NAME: ValResetCpByDog

  DESCRIPTION:

    This routine can reset CBP chip set with watch dog. After the routine calling, the SW run from boot again.
    
  PARAMETERS:
 

  RETURNED VALUES:


 
*****************************************************************************/
void ValResetByWatchdog(void);



#ifdef __cplusplus
}
#endif

#endif

/**Log information: \main\Trophy\Trophy_ylxiao_href22033\1 2013-03-18 14:15:49 GMT ylxiao
** HREF#22033, merge 4.6.0**/
/**Log information: \main\Trophy\1 2013-03-19 05:20:16 GMT hzhang
** HREF#22033 to merge 0.4.6 code from SD.**/

