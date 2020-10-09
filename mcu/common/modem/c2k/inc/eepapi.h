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
* Copyright (c) 2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef EEPAPI_H
#define EEPAPI_H
/*****************************************************************************
 
  FILE NAME:  eepapi.h

  DESCRIPTION : EEP task interface
 
      This include file provides system wide global type declarations and 
      constants
  HISTORY     :
      See Log at end of file

*****************************************************************************/

#include "sysdefs.h" 

/*------------------------------------------------------------------------
* EXE Interfaces - Definition of Signals, GPIO and Mailboxes
*------------------------------------------------------------------------*/

#define EEP_RUN_SIGNAL   		EXE_SIGNAL_1 	/*  */


/*----------------------------------------------------------------------------
 Defines Constants used in this file
----------------------------------------------------------------------------*/
#define EEP_SLEEP_WAKEUP_FLAG 		MON_DEEP_SLEEP_EEP_1_FLAG	/* for EEP activity */

/*----------------------------------------------------------------------------
* EEP States : Kind of Virtual State 
*----------------------------------------------------------------------------*/
typedef enum
{
	GPS_PGPS_OFF,
	GPS_PGPS_ON
} GpsPgpsStateT;
		
/*----------------------------------------------------------------------------
* Message IDs for signals and commands sent to LEC
*----------------------------------------------------------------------------*/

typedef enum 
{
	/* from PSW */
	EEP_GPS_PGPS_SAVED_SEED_MSG,	/* Saved Seed file */
	EEP_GPS_PGPS_SAVED_CLOCK_MSG,	/* Saved Clock file */

	/* from ETS */
	EEP_TST_FSM_READ_MSG,				
	EEP_TST_FSM_WRITE_MSG,				

	EEP_TST_RXN_VERSION_MSG,			
	EEP_TST_SEED_CREATE_FROM_TSEED_MSG,	
	EEP_TST_SEED_CHECK_SEED_FILE_MSG,	
	EEP_TST_SEED_DELETE_SEED_FILE_MSG,	

	EEP_TST_EEPH_START_PROPAGATOR_MSG,	
	EEP_TST_EEPH_STOP_PROPAGATOR_MSG,	
	EEP_TST_EEPH_CHECK_EEPH_FILES_MSG,	
	EEP_TST_EEPH_DELETE_EEPH_FILES_MSG,	

	EEP_NUM_MSGS_ID
} EepMsgIdT;

/* For the Rerference, Define EEP send Msg IDs to other Tasks */
/* It should be defined in each Task's api.h file */
typedef enum 
{ 											
	EEP_SEND_NUM_MSGS_ID
} EepSendMsgIdT;

typedef enum
{
	NONE = 	0x00,  	/* After Powered On */
	PATCH = 0x01,  	/* For Patch Uploading  */
	EEP = 	0x02, 	/* For Propagator */
	LEC	= 	0x03  	/* For STE's Call */

} CalledByWhoT;

/*----------------------------------------------------------------------------
* Defined functions in EEP 
*----------------------------------------------------------------------------*/
/* *pSeed: input - A pointer to where the EEP can get a Seed data from.
    sSeed: input - Size of seed data. */

extern void EepWriteSeedFile(char *pSeed, kal_uint16 sSeed);

/* *pClock: input - A pointer to where the EEP can get a Clock data from.
    sClock: input - Size of Clock data. */
extern void EepWriteClockFile(char *pClock, kal_uint16 sClock);


#endif 
/*****************************************************************************
* $Log: eepapi.h $
* Revision 1.0  2009/09/08 schun
*****************************************************************************/

