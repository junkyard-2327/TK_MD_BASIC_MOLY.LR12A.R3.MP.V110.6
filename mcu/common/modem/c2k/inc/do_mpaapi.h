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
* Copyright (c) 2005-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef _DO_MPAAPI_H_
#define _DO_MPAAPI_H_
/*****************************************************************************
* 
* FILE NAME   : do_mpaapi.h
*
* DESCRIPTION : API definition for MPA (Modem Path Arbiter) task.
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/
#include "module_msg_range.h"
#include "sysapi.h"
#include "sysdefs.h"

/*----------------------------------------------------------------------------
 Mailbox IDs
----------------------------------------------------------------------------*/
#define HSC_MPA_MAILBOX               EXE_MAILBOX_1_ID 

/*----------------------------------------------------------------------------
     Command Message IDs, for MPA task, for MPA_CMD_MAILBOX, EXE_MAILBOX_1_ID
          
----------------------------------------------------------------------------*/
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif 
/*----------------------------------------------------------------------------
 Global typedefs
----------------------------------------------------------------------------*/
/* Define RF Path state - applicable to both main and diversity antenna paths*/
typedef enum
{
   HWD_RF_MPA_RX1 = 0,
   HWD_RF_MPA_RX2,
   HWD_RF_MPA_RX3,
   HWD_RF_MPA_TX1,
   HWD_RF_MPA_TX2,
   HWD_RF_MPA_NO_PATH,
   HWD_RF_MPA_MAX_PATH_NUM = HWD_RF_MPA_NO_PATH
}HwdRfMpaEnumT;

typedef enum
{
   MPA_RF_PATH_RX_BN1 = HWD_RF_MPA_RX1,
   MPA_RF_PATH_RX_BN2 = HWD_RF_MPA_RX2,
   MPA_RF_PATH_RX_BN3 = HWD_RF_MPA_RX3,
   MPA_RF_PATH_TX_BN1 = HWD_RF_MPA_TX1,
   MPA_RF_PATH_TX_BN2 = HWD_RF_MPA_TX2,
   
   MPA_RF_NO_PATH     = HWD_RF_MPA_NO_PATH,
   MPA_RF_NUM_PATHS   = MPA_RF_NO_PATH
} MpaRfPathT;

/* bit-map definitions */
#define  MPA_RF_PATH_RX_1  (1<< MPA_RF_PATH_RX_BN1)
#define  MPA_RF_PATH_RX_2  (1<< MPA_RF_PATH_RX_BN2)
#define  MPA_RF_PATH_RX_3  (1<< MPA_RF_PATH_RX_BN3)
#define  MPA_RF_PATH_TX_1  (1<< MPA_RF_PATH_TX_BN1)
#define  MPA_RF_PATH_TX_2  (1<< MPA_RF_PATH_TX_BN2)

#define  MPA_RF_ALL_PATH   (0x1F)

typedef enum
{
   MPA_MDM_ANTENNA_MAIN,
   MPA_MDM_ANTENNA_DIV,
   MPA_MDM_ANTENNA_TX,
   MPA_MDM_ANTENNA_COUNT
}MpaMdmAntennaTypeT;

#define  MPA_MDM_PATH_MAIN  (1<< MPA_MDM_ANTENNA_MAIN)
#define  MPA_MDM_PATH_DIV   (1<< MPA_MDM_ANTENNA_DIV)
#define  MPA_MDM_PATH_TX    (1<< MPA_MDM_ANTENNA_TX)
#define  MPA_MDM_PATH_COUNT (1<< MPA_MDM_ANTENNA_COUNT)

#define  MPA_MDM_PATH_MAIN_DIV     (MPA_MDM_PATH_MAIN | MPA_MDM_PATH_DIV)
#define  MPA_MDM_PATH_MAIN_TX      (MPA_MDM_PATH_MAIN | MPA_MDM_PATH_TX)
#define  MPA_MDM_PATH_MAIN_DIV_TX  (MPA_MDM_PATH_MAIN | MPA_MDM_PATH_DIV | MPA_MDM_PATH_TX)

#define  MPA_RF_NUM_APPS   (SYS_MODE_MAX)

typedef enum
{
   MPA_RF_PRIV_1X   = MPA_MDM_PATH_MAIN_DIV_TX,
   MPA_RF_PRIV_DO   = MPA_MDM_PATH_MAIN_DIV_TX,
   MPA_RF_PRIV_GSM  = MPA_MDM_PATH_MAIN_DIV_TX,
   MPA_RF_PRIV_ELSE = 0
} MpaRfPrivT;

typedef struct
{
   kal_bool                      cdma1xAllowed;           /* is 1x allowed on this antenna, 1 is yes, 0 is no */
   kal_bool                      doAllowed;               /* is Do allowed on this antenna */
   MpaMdmAntennaTypeT        anType;                  /* quality of antenna - main or diversity */
   kal_bool                      indPll;                  /* does the antenna have an independent PLL */
   kal_uint8                     pllNum;
} MpaAntennaInfoT;

/*----------------------------------------------------------------------------
     Message Formats structure
----------------------------------------------------------------------------*/

/* MPA_RF_RESOURCE_REQ_MSG */
typedef PACKED_PREFIX struct
{
   SysAirInterfaceT  Owner;
   
   /* Bitmap definition, refer to 
      MPA_MDM_PATH_MAIN 
      MPA_MDM_PATH_DIV  
      MPA_MDM_PATH_TX  
   */   
   kal_uint8          Req;

} PACKED_POSTFIX  MpaReqMsgT;

typedef PACKED_PREFIX struct
{
   kal_bool           Status;
   SysAirInterfaceT  Owner;
   
   /* Bitmap definition, refer to 
      MPA_MDM_PATH_MAIN 
      MPA_MDM_PATH_DIV  
      MPA_MDM_PATH_TX  
   */   
   kal_uint8          Req;

   /* RMC- HWD interface : actual RFPath index per MpaMdmAntennaTypeT in HSC/MPA grant 
    * Bitmap definition for each RmcMdmAntToRfPathMap[i], refer to 
       MPA_RF_PATH_RX_1
       MPA_RF_PATH_RX_2
       MPA_RF_PATH_RX_3  
       MPA_RF_PATH_TX_1
       MPA_RF_PATH_TX_2  
    */ 
   kal_uint8          RfAntenna;
} PACKED_POSTFIX  MpaRspMsgT;


/*----------------------------------------------------------------------------
 Global Data
----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------
 Global Function Prototypes
----------------------------------------------------------------------------*/
/*****************************************************************************
 
  FUNCTION NAME:   HscMpaPrivilege

  DESCRIPTION:     Returns the MPA Privileges (defined in MpaRfPrivT) for Owner.


  PARAMETERS:      Owner: SYS_MODE_1xRTT or SYS_MODE_EVDO

  RETURNED VALUES: None

*****************************************************************************/
extern kal_uint8  HscMpaPrivilege(SysAirInterfaceT Owner);


/*****************************************************************************
 
  FUNCTION NAME:   HscMpaStatus

  DESCRIPTION:     Returns the Main Rx Path Status for Owner.
                   This function is typically used for making power savings decisions.


  PARAMETERS:      Owner: SYS_MODE_1xRTT or SYS_MODE_EVDO

  RETURNED VALUES: None

*****************************************************************************/
extern kal_uint8  HscMpaStatus(SysAirInterfaceT Owner);


/*****************************************************************************
 
  FUNCTION NAME:   HscMpaRfPath

  DESCRIPTION:     Returns the MPA RfPaths for Owner.
                   This function provides ownership details for Main, Diversity,
                   and Tx.


  PARAMETERS:      Owner: SYS_MODE_1xRTT or SYS_MODE_EVDO

  RETURNED VALUES: None

*****************************************************************************/
extern kal_uint8  HscMpaRfPath(SysAirInterfaceT Owner);


/*****************************************************************************
* $Log: mpaapi.h $
*****************************************************************************/

/*****************************************************************************
* End of File
*****************************************************************************/
#endif

