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
* Copyright (c) 1999-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
/****************************************************************************
 *
 * Module:     crc.h
 *
 * Purpose:    Header file for crc.c
 *
 ****************************************************************************
 *
 *                          PVCS Header Information
 *
 *  $Revision: 1.2 $
 *    $Author: fpeng $
 *
 *       $Log: crc.h $
 *       Revision 1.2  2004/03/25 12:09:24  fpeng
 *       Updated from 6.0 CP 2.5.0
 *       Revision 1.1  2003/05/12 15:38:34  fpeng
 *       Initial revision
 *       Revision 1.3  2002/06/06 13:11:21  chinh
 *       Changed and Added Copyright
 *       Revision 1.2  2001/11/08 12:33:18  AMALA
 *       Corrected CRC 16 bit calculation error.
 *       Revision 1.1  2001/01/17 10:58:19  plabarbe
 *       Initial revision
 *       Revision 1.2  2000/11/13 17:06:01  byang
 *       IS-2000A Idle Mode and LAC integration - Initial Release.
 *       Revision 1.3  2000/08/23 22:05:24Z  RSATTARI
 *       Isotel release 2.8 plus LSI applicable IS-95B changes
 *       Revision 1.5  1999/05/17 22:42:43  mhayduk
 *       Revised CRC30 algorithm.
 *
 *       Revision 1.4  1998/03/30 23:26:03  mhayduk
 *       Release 0.03.
 *
 * Revision 1.1  1997/11/06  17:49:24  mhayduk
 * Initial revision
 *
 *
 ****************************************************************************
 ****************************************************************************/
 

#ifndef _CRC_H_

  #define _CRC_H_ 1

/*****************************************************************************
 * Includes
 ****************************************************************************/
#include "sysdefs.h"

/*****************************************************************************
 * Prototypes
 ****************************************************************************/

  void   crcSetEnableFlag  (kal_uint16 qualifier);
/* Amala K. 11/07/01 - changed parameter len to kal_uint16 */
  kal_uint16 crcCalculate16Bit (kal_uint8 *message, kal_uint16  len);
  kal_uint32 crcCalculate30Bit (kal_uint8 *message, kal_uint32 len);
  kal_bool   crcCheck16Bit     (kal_uint8 *message, kal_uint8  len);
  kal_bool   crcCheck30Bit     (kal_uint8 *message, kal_uint16  len);


#endif

