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
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.  
* 
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
* 
* Copyright (c) 2007-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef VALLBSAPI_H
#define VALLBSAPI_H
/*************************************************************************************************
* 
* FILE NAME   : vallbsapi.h
*
* DESCRIPTION : This file contains the declarations, definitions 
*               and data structures used to interface to the 
*               VAL for the location based services (LBS) API.
*
*
* HISTORY     :
*     See Log at end of file
*
**************************************************************************************************/

#include "sysdefs.h"
#include "valapi.h"

#define VAL_LBS_MAX_REG_TASK  2


/* values match return values in Brew AEEError.h API */
#define    LBS_SUCCESS            0     /* Success                      */
#define    LBS_FAIL               1     /* General failure              */
#define    LBS_CLASSNOTSUPPORT    3     /* Specified class unsupported  */

typedef enum 
{
    VAL_LBS_GET_GPS_INFO_MSG,
    VAL_LBS_GET_SECTOR_INFO_MSG,
    VAL_EVT_MAX
} ValLbsEventIdT;

typedef struct
{
    RegIdT RegId;
    kal_uint16 Result;
    ValLbsSectorInfo Data;
} ValLbsGetSectorInfoT;

typedef struct
{
    kal_uint32             dwTimeStamp;          /* Time, seconds since 1/6/1980                 */
    kal_uint32             status;               /* Response status;                             */
    kal_int32              dwLat;                /* Lat, 180/2^25 degrees, WGS-84 ellipsoid      */
    kal_int32              dwLon;                /* Lon, 360/2^26 degrees, WGS-84 ellipsoid      */
    kal_int16              wAltitude;            /* Alt, meters, WGS-84 ellipsoid                */
    kal_uint16             wHeading;             /* Heading, 360/2^10 degrees                    */
    kal_uint16             wVelocityHor;         /* Horizontal velocity, 0.25 meters/second      */
    kal_int8               bVelocityVer;         /* Horizontal velocity, 0.25 meters/second      */
    kal_uint8              accuracy;             /* Accuracy of the data                         */
    kal_uint16             fValid;               /* Flags indicating valid fields in the struct. */
    kal_uint8              bHorUnc;              /* Horizontal uncertainity                      */
    kal_uint8              bHorUncAngle;         /* Hor. Uncertainity at angle                   */
    kal_uint8              bHorUncPerp;          /* Hor. uncertainty perpendicular               */
    kal_uint16             wVerUnc;              /* Vertical uncertainity.                       */
} ValLbsGPSInfo;

typedef struct
{
    RegIdT RegId;
    kal_uint16 Result;
    ValLbsGPSInfo Data;
} ValLbsGetGpsInfoT;

typedef struct
{
    kal_uint32 mode;      /* See AEEGPSMode (one shot, download first, track local ...)          */
    kal_uint16 nFixes;
    kal_uint16 nInterval;
    kal_uint32 optim;     /* See AEEGPSOpt (speed, accuracy, default)                            */
    kal_uint32 qos;       /* See AEEGPSQos (0 -> 255, with 255 being highest quality of service. */
    kal_uint32 svrType;   /* Default: 0 / Server IP: 1 (Address provided below)                  */
    kal_uint32 addr;      /* IP Address                                                          */
    kal_uint16 port;      /* port number                                                         */
} ValGPSConfig;

typedef struct
{
	  kal_uint32   Is801_IpAddr;
	  kal_uint16   Is801_PortNum;
	  kal_uint8    Is801_UserId[HLP_MAX_USRID_LEN];
	  kal_uint8    Is801_Pswd[HLP_MAX_PSWD_LEN];
	  kal_uint8    Is801_CalledNumber[HLP_MAX_BWSR_DIG_LEN];
} ValLbsNvmParmT;

typedef enum
{
   VAL_LBS_PPP_SUCESS_STATUS,
   VAL_LBS_PPP_FAIL_STATUS,
   VAL_LBS_PPP_NOT_SUPPORTED_STATUS,
   VAL_LBS_TCP_FAIL_STATUS,
   VAL_LBS_NOT_SUPPORTED_STATUS,
   NUM_LBS_STATUS
}ValLbsStatusE;

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*===========================================================================

FUNCTION      ValLbsInit()

DESCRIPTION   Initialize the LBS Val Module

PARAMETERS    None

RETURN VALUE  None

===========================================================================*/
void ValLbsInit( void );

/***************************************************************************

FUNCTION      ValLbsRegister

DESCRIPTION   This function registers a callback for all LBS related events.

PARAMETERS    NetCallback - The callback function to be called for the notification of LBS 
              services events.
    
RETURN VALUE  The assigned registration ID of the subscriber.

*****************************************************************************/
RegIdT ValLbsRegister( ValEventFunc Callback );

/***************************************************************************

FUNCTION      ValLbsUnregister

DESCRIPTION   This function unregisters the given client so that it won't receive additional
              LBS services related events.

PARAMETERS    RegId - The assigned registration ID of the subscriber.
  
RETURN VALUE  None 

*****************************************************************************/
void ValLbsUnregister( RegIdT RegId );

/*===========================================================================

FUNCTION:     ValLbsGetGPSInfo()
              
DESCRIPTION:  Val API to begin LBS session over TCP/IP.
              Same as IPOSDET_GetGPSInfo() in Brew AEE API.

PARAMETERS:   RegIdT RegId 

RETURN VALUE: None

===========================================================================*/
void ValLbsGetGPSInfo( RegIdT RegId, ValGPSConfig* Config );

#ifdef SYS_OPTION_HL
/*===========================================================================

FUNCTION:     ValLbsGetSectorInfo()
              
DESCRIPTION:  Same as IPOSDET_GetSectorInfo() in Brew AEE API.

PARAMETERS:   RegIdT RegId 

RETURN VALUE: None

===========================================================================*/
void ValLbsGetSectorInfo( RegIdT RegId );
#endif

/*===========================================================================

FUNCTION:     ValLbsGetSap()
              
DESCRIPTION:  Return ValLocSapId 

PARAMETERS:   None 

RETURN VALUE: kal_uint8 ValLocSapId 

===========================================================================*/
kal_uint8 ValLbsGetSap( void );

/*===========================================================================

FUNCTION:     ValLbsProcessEvent
              
DESCRIPTION:  This function processes the event received and calls the 
              registered call back.
  
PARAMETERS:   ValLbsEventIdT EventId, void *EventMsgP

RETURN VALUE: None

===========================================================================*/
void ValLbsProcessEvent( ValLbsEventIdT EventId, void* EventMsgP );

/*===========================================================================

FUNCTION:     ValLbsProcessDbmInfo
              
DESCRIPTION:  This function processes Dbm Nvm information
  
PARAMETERS:   ValLocGetSectorInfoRspMsgT* Msg

RETURN VALUE: None

===========================================================================*/
void ValLbsProcessDbmInfo(ValLbsNvmParmT *Parm);

#ifdef  __cplusplus
}
#endif

#endif /*__VAL_LBS_H__*/

/*****************************************************************************
* $Log: vallbsapi.h $
* Revision 1.1  2007/05/19 14:11:49  mclee 
* Initial revision
* Initial Version
*****************************************************************************/

/*****************************************************************************
* End of File
*****************************************************************************/


