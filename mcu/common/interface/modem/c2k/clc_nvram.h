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
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSKAL_TRUED IN ACCORDANCE
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
#ifndef _CLC_NVRAM_H_
#define _CLC_NVRAM_H_ 1
/****************************************************************************
 *
 * Module:     clc_nvram.h
 *
 * Purpose:    
 *
 ****************************************************************************/

/*----------------------------------------------------------------------------
 Include Files
----------------------------------------------------------------------------*/


/*----------------------------------------------------------------------------
 Local Defines and Macros
----------------------------------------------------------------------------*/

#define ATTR_CONFIG_SIZE  22

#define MAX_DO_DEFAULTBAND_SIZE 5

#define MAX_ATTR_SIZE 5

#define  RUP_DEFAULT_DFS_IDLE_INTERVAL     6
#define  RUP_DEFAULT_DFS_CONN_INTERVAL     2
#define  RUP_DEFAULT_DFS_IDLE_NUMCHAN      1
#define  RUP_DEFAULT_DFS_CONN_NUMCHAN      1
#define  RUP_DEFAULT_DFS_IDLE_ECIO_THRESH  48  
#define  RUP_DEFAULT_DFS_CONN_ECIO_THRESH  48

typedef enum
{
    NON_HYBRID,
    HYBRID,
    HYBRID_MODE_ENUM_END
}PriHybridModeT;

typedef enum
{
    CDMA_THEN_ANALOG,
    CDMAonly,
    ANALOG_THEN_CDMA,
    ANALOG_ONLY,
    DETERMINE_MODE_AUTOMATICALLY,
    EMERGENCY_MODE,
    RETRICT_TO_HOME_ONLY,
    CDMA_ONLY,
    HDR_ONLY,
    HYBRID_ONLY,
    SHDR_ONLY,
    PREF_MODE_ENUM_END
}PrefModeT;


typedef struct
{
   kal_uint8  numValue;
   kal_uint16 value[MAX_ATTR_SIZE];
   kal_bool bConfig;
} SubtypeConfigDataT;

typedef struct
{
    SysCdmaBandT DOBand;
    kal_uint16 DOChannel;
} CTDoDefaultBandDataT;

typedef struct
{
   kal_uint16   DataSize;
   kal_uint32   HybridMode;
   kal_uint32   PrefMode;
   kal_bool     PrefCCCycleEnable;
   kal_uint32   PrefCCCycle;
   kal_bool     ScpForceRel0Config;
   kal_uint8    NotDisturb;
   kal_uint8    FtMacDrcGating;
   kal_bool     LUPUnsolicitedEnable;
   kal_uint8    RxDiversityCtrl;
   kal_uint32   Stream0Configuration;
   kal_uint32   Stream1Configuration;
   kal_uint32   Stream2Configuration;
   kal_uint32   Stream3Configuration;
   SubtypeConfigDataT SubtypeConfigData[ATTR_CONFIG_SIZE];
   kal_uint16   T_Dual_Idle;
   kal_uint8    T_HRPD_ExtendedSC;
   kal_uint8    T_1x_ExtendedSC;
   kal_uint16   T_HRPD_Init;
   kal_uint16   T_1x_Init;
   CTDoDefaultBandDataT DOSystem[MAX_DO_DEFAULTBAND_SIZE];
   kal_bool      eHrpdDisable;
   kal_uint8    DfsIdleInterval;
   kal_uint8    DfsConnInterval;
   kal_uint8    DfsIdleNumChan;
   kal_uint8    DfsConnNumChan;
   kal_uint16   DfsIdleEcIoThresh;
   kal_uint16   DfsConnEcIoThresh;
   kal_uint8    Padings[10]; /*Paddings is used for new inserted fields to PRI */
} ClcDoParmDataT;

#endif /*_CLC_NVRAM_H_*/


