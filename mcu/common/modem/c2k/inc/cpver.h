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
#ifndef CPVER_H
#define CPVER_H

#include "sysdefs.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define BOARD_TYPE_NAME_LENGTH 17

typedef struct
{
  kal_uint32 FourBytesForBoundary;
  char   SwVersionInforTag[24];  
  char   CustomerName[20];           /* VIA/Nokia/Samsung etc*/
  char   SWName[10];            /*sw name, such as VTUI3,Touchflow*/
  char   BoardTypeName[BOARD_TYPE_NAME_LENGTH];          /*board type name defined in makefile_feature*/
  char   BoardVersion[10];          /*such as P0, P1*/
  kal_uint16 MajorVersion;               /* Major CP version, customer should be in charge of the management.*/
  kal_uint16 MinorVersion;               /*Minor CP version, customer should be in charge of the management.*/
  kal_uint16 ReviseVersion;               /*Revise CP version, customer should be in charge of the management.*/
}SwVersionInfoT;

SwVersionInfoT GetCustomerVersion(void);
SwVersionInfoT GetPlatformVersion(void);
#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
/**Log information: \main\vtui2_5x\2 2008-06-18 03:16:48 GMT dwang
** HREF#240**/
/**Log information: \main\vtui2_5x\3 2008-09-09 03:02:16 GMT dwang
** HREF#1894**/
/**Log information: \main\CBP7FeaturePhone\CBP7FeaturePhone_qwu_href14940\1 2010-10-09 05:50:51 GMT qwu
** HREF#14940**/
/**Log information: \main\CBP7FeaturePhone\CBP7FeaturePhone_qwu_href14940\2 2010-10-09 08:37:33 GMT qwu
** HREF#14940**/
/**Log information: \main\CBP7FeaturePhone\2 2010-10-11 01:45:29 GMT pchen
** HREF#14940**/
/**Log information: \main\CBP7FeaturePhone\CBP7FeaturePhone_wxiong_href14940\1 2010-10-13 03:51:36 GMT wxiong
** HREF#14940**/
/**Log information: \main\CBP7FeaturePhone\3 2010-10-13 04:40:23 GMT pfwu
** CBP7FeaturePhone_wxiong_href14940**/
/**Log information: \main\CBP7FeaturePhone\CBP7FeaturePhone_hxwang_href15115\1 2010-10-19 10:03:06 GMT hxwang
** HREF#15115**/
/**Log information: \main\CBP7FeaturePhone\4 2010-10-20 01:54:22 GMT zlin
** Merge href 15115.**/

