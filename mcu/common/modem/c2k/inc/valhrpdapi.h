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
* Copyright (c) 2002-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef VALHRPDAPI_H
#define VALHRPDAPI_H
/*****************************************************************************
* 
* FILE NAME   : valhrpdapi.h
*
* DESCRIPTION :
*
*   This is the internal interface include file for EVDO stack.
*
* HISTORY     :
*
*   See Log at end of file
*
*****************************************************************************/
#include "sysdefs.h"
#include "valapi.h"
#include "do_clcapi.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define VAL_HRPD_MAX_REG_TASK           5

typedef struct
{
  ValClcATStatusMsgT ATState;                   /*AT State*/
  ValHrpdSessionStatusMsgT SessionState; /*Session State*/
  kal_uint8     ProtocolRevision;                       /*Protocol Revision*/
  kal_uint16   Channel;                                      /*Channel*/
  kal_uint8     BandClass;
  kal_uint16   EcIo;                                            /*EcIo, in unit of -0.5 dB*/
  kal_int16    SINRdBQ8;                              /* EvDO SINR (C2I) in Q8 dB format */
#ifdef SYS_OPTION_EVDO
  kal_uint16   CurrPN;                               /*Current PN*/
  kal_uint8    ANAuthState;                             /* AN Auth State*/
  kal_uint8    ColorCode;                                  /*ColorCode Rev State*/
  char     DrcRate[15];                                /*DRC Rate*/
  kal_uint8    DrcCover;                                    /*DRC Cover Sector */
  kal_uint32  UATI;                                           /*UATI */
#endif/*SYS_OPTION_EVDO*/
}ValHrpdEvdoParmT;

typedef struct
{
  kal_uint32 CDMASysRxTotalBytes;
  kal_uint32 CDMASysRxNewDataPkts;
  kal_uint32 CDMASysTxTotalBytes;
  kal_uint32 CDMASysTxNewDataPkts;
  kal_uint32 CDMASysCurFrameCnt;
}ValHrpdDataStatT;
/***************************************************************************
                    VAL HRPD event definitions
****************************************************************************/
//don't modify following Enum, brew has referred to it
typedef enum
{
  VAL_HRPD_EVT_ROAM_IND_MSG,
  VAL_HRPD_EVT_PKT_CALL_CONNECTED_MSG,
  VAL_HRPD_EVT_PKT_CALL_ENDED_MSG,
  VAL_HRPD_EVT_NWK_RPT_HANDOFF_MSG,
  VAL_HRPD_EVT_SERVICE_STATUS_MSG,
  VAL_HRPD_EVT_RMC_RSSI_RPT_MSG,
  VAL_HRPD_EVT_PAGE_RCVD_MSG,
  VAL_HRPD_EVT_RSSI_RPT_MSG,
  VAL_HRPD_EVT_NTWK_ACQD_MSG,
  
  VAL_HRPD_EVT_CONN_STAT_MSG,
  VAL_HRPD_EVT_STAT_INFO_MSG,

  VAL_HRPD_PSSTACK_STATUS_MSG,

  VAL_HRPD_EV_DO_AN_AUTH_MSG,

#ifdef MTK_DEV_C2K_IRAT
  VAL_HPRD_EVT_LTE_NBR_FREQS_RPT_MSG,
#endif

#ifdef MTK_CBP
  VAL_HRPD_EVT_DO_SECTOR_INFO_MSG,
  VAL_HRPD_EVT_CLC_AT_STATUS_MSG,
#endif

  VAL_HRPD_EVT_MAX
} ValHrpdEventIdT;

/*===========================================================================
                           FUNCTION API
===========================================================================*/
/*===========================================================================

FUNCTION ValHrpdInit

DESCRIPTION
  Initialize the Val HRPD module.

DEPENDENCIES
  None

RETURN VALUE
  None

===========================================================================*/
void ValHrpdInit( void );

//don't modify following Function, brew has referred to it
/*===========================================================================

FUNCTION ValHrpdRegister

DESCRIPTION
  register ui to the VAL HRPD module

DEPENDENCIES
  None

RETURN VALUE
  register id

===========================================================================*/
RegIdT ValHrpdRegister( ValEventFunc CallBack );

//don't modify following Function, brew has referred to it
/*===========================================================================

FUNCTION ValHrpdUnregister

DESCRIPTION
  Deregister ui to the VAL HRPD module

DEPENDENCIES
  None

RETURN VALUE
  None

===========================================================================*/
void ValHrpdUnregister( RegIdT RegId );

/*===========================================================================

FUNCTION ValHrpdDeliverMail

DESCRIPTION
  Callback to support CP messages from EVDO.

DEPENDENCIES
  None

RETURN VALUE
  kal_boolean indicating whether the message was handled.

===========================================================================*/
kal_bool ValHrpdDeliverMail( kal_uint32 msg_id,
                        void*  msg_buffer,
                        kal_uint32 msg_size );

void ValHrpPswProtocolStackEnable(kal_bool enable);

/****************************************************************************
 *
 * Name:        ValHrpdEvdoParmT ValHrpdEvdoParmReport()
 * Description:   
 * Parameters:   
 * Returns:   
 * Notes:
 *****************************************************************************/
ValHrpdEvdoParmT ValHrpdEvdoParmReport(void);

void ValHrpdGetEhrpdAttrInit(void);

void ValHrpdGetEhrpdMode(void);

#ifdef SYS_OPTION_EVDO
void ValHrpdGetEvdoActivePnInfo(Rup2ValPnListInfoT* pActiveInfo);
void ValHrpdGetEvdoNeighborPnInfo(Rup2ValPnListInfoT* pNghbrInfo);

/****************************************************************************
 *
 * Name:        void ValHrpdSetRevState(kal_bool Revstate)
 * Description:   
 * Parameters:   
 * Returns:   
 * Notes:
 *****************************************************************************/
void ValHrpdSetRevState(kal_bool Revstate);

/****************************************************************************
 *
 * Name:        kal_bool ValHrpdGetRevState(void)
 * Description:   
 * Parameters:   
 * Returns:   
 * Notes:
 *****************************************************************************/
kal_bool ValHrpdGetRevState(void);

/****************************************************************************
 *
 * Name:        void ValHrpdGetDataStat()
 * Description:   Get EVDO data statistics
 * Parameters:   kal_uint32
  CDMASysRxTotalBytes- Total received bytes
  CDMASysRxNewDataPkts- Total number of received new data frames
  CDMASysTxTotalBytes-  Total transmitted bytes
  CDMASysTxNewDataPkts- Total Tx new data frames
  CDMASysCurFrameCnt-  the current HDR time (since THE BEGINNING) in frames

 * Returns:   
 * Notes:
 *****************************************************************************/
void ValHrpdGetDataStat(ValHrpdDataStatT* pStat);

/****************************************************************************
 *
 * Name:        ValProcessRssiRpt(RssiRpt)
 * Description: Processed the RSSI reading from RMC
 * Parameters:  Rssi reading from RMC 
 * Returns:   
 * Notes:
 *****************************************************************************/
void ValProcessRssiRpt( kal_int32 RssiRpt );
   
#ifdef CBP7_EHRPD        
void ValHrpdSetInternetPdnId(kal_uint8 PdnId);
#endif
#ifdef LGT_EXTENSIONS
/****************************************************************************
 *
 * Name:        void ValHrpdSetSipRegMode()
 * Description:   set SIP Registration Mode for the coming data req: 1-SIP Registration 2-SIP Periodic Registration 
                        SIP mode is cleared to NULL when data traffic setup succ
 * Parameters:   Mode=0-NULL, 1-SIP Registration, 2-SIP Periodic Registration
 * Returns:   
 * Notes:
 *****************************************************************************/
void ValHrpdSetSipRegMode(kal_uint8 Mode);
/****************************************************************************
 *
 * Name:        void ValHrpdSetVTVoIPCallFlag()
 * Description:   set current call is VT/VoIP service, the flag is cleared when data entering dormant
 * Parameters:  bFlag : KAL_TRUE-VT/VoIP call, KAL_FALSE-non VT/VoIP call
 * Returns:   
 * Notes:
 *****************************************************************************/
void ValHrpdSetVTVoIPCallFlag(kal_bool bFlag);
kal_bool ValHrpdGetVTVoIPCallFlag(void);
#endif
#endif/*SYS_OPTION_EVDO*/

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif


/**Log information: \main\CBP7FeaturePhone\CBP7FeaturePhone_nicholaszhao_href17384\1 2011-07-04 08:25:30 GMT nicholaszhao
** HREF#17384**/
/**Log information: \main\CBP7FeaturePhone\CBP7FeaturePhone_nicholaszhao_href17384\2 2011-07-08 02:19:14 GMT nicholaszhao
** HREF#17384**/
/**Log information: \main\CBP7FeaturePhone\3 2011-07-12 09:40:52 GMT marszhang
** HREF#17384**/
/**Log information: \main\Trophy\Trophy_wzhou_href22163\1 2013-04-25 03:04:26 GMT wzhou
** HREF#22163: add A12 auth status message in VAL**/
/**Log information: \main\Trophy\1 2013-04-25 03:06:31 GMT jzwang
** href#22163**/

