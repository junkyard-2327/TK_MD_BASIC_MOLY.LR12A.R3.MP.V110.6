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
* Copyright (c) 1997-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/****************************************************************************
 *
 * Module:    pswnam.h
 *
 * Purpose:   Definitions and prototypes for IS-95 NAM data parameters
 *
 ****************************************************************************
 *
 *                          PVCS Header Information
  *
 *  $Log: pswnam.h $
 *  Revision 1.4  2006/03/07 16:50:13  winston
 *  CR7319: OTA Verizon features implementation
 *  Revision 1.3  2006/03/03 13:34:06  vsethuraman
 *  CR7207 :- PN310 CSS and ERI changes.
 *  Revision 1.2  2004/03/25 11:46:04  fpeng
 *  Updated from 6.0 CP 2.5.0
 *  Revision 1.3  2004/02/10 15:17:04  bcolford
 *  Merged CBP4.0 Release 8.05.0 changes. 
 *  Revision 1.14  2003/11/11 11:30:43  blee
 *  remove the bit-field OTA_NAM_LOCKED from OTA_Capability_Map
 *  Revision 1.12  2003/08/22 11:34:10  mclee
 *  Uim Feature Introduction in SW Base
 *  Revision 1.11  2003/08/13 15:07:15  mclee
 *  Add pref mode defines
 *  Revision 1.10  2002/09/30 14:57:54  mshaver
 *  Changed the following data structures to be packed:
 *  ZoneList, SidNidList, IMSIType. Renamed the data
 *  structure IS95Nam to PswIs95NamT and it now contains the
 *  only NAM data structure definition.
 *  Revision 1.9  2002/08/02 17:51:22  bsharma
 *  Added SmsTlMaxRetry to NAM structure
 *  Revision 1.8  2002/07/31 18:55:50  hans
 *  NUM_BANDS_SUPPORTED increased to include band class 4. Band Class 4 (cr726) and support for other band classes (cr474)
 *  added to Band Class enum.
 *  Revision 1.7  2002/07/26 14:06:30  ameya
 *  Added 20 positive sids/nids and 10 negative sids/nids and a stored negative sid/nid parameter to the NAM structure.
 *  Revision 1.6  2002/07/25 10:07:08  etarolli
 *  Changed NAM MIP MAX field size for password and NAI size.
 *  Revision 1.5  2002/06/04 08:07:22  mshaver
 *  Added VIA Technologies copyright notice.
 *  Revision 1.4  2002/02/27 20:48:37  mclee
 *  Modifed the struct IS95Nam to include the new Is801 related Nam params.
 *  Revision 1.3  2002/02/27 10:52:57  etarolli
 *  Increased following NAM fields max size: MN_NAI from 10 -> 20 MN_PASSWRD from 8 -> 10. Also fixed spelling of MN_NAI field
 *  Revision 1.2  2002/02/06 12:00:54  mclee
 *  Add new A_KeyValid, VP_Enable, and FUTURE_EXPAND_FIELDS to Nam structure.
 *  Revision 1.1  2001/11/20 06:46:36  mclee
 *  Initial revision
 *  Revision 1.1.1.1  2001/10/11 13:24:04  mclee
 *  Duplicate revision
 *  Revision 1.1  2001/10/11 13:24:04  mclee
 *  Initial revision
 *
 ****************************************************************************
 ***************************************************************************/

#ifndef _PSWNAM_H_

#define _PSWNAM_H_ 1

#include "psw_nvram.h"

/*--------------------------------------
 * Global variables  
 *--------------------------------------*/
extern PswIs95NamT Nam;

#endif  /* _NAMDATA_H_ */


