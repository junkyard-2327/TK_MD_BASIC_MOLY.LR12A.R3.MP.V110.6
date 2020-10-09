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
 * Module:     bitbash.h
 *
 * Purpose:    Header File for the IS-136 Bitfield Functions.
 *
 ****************************************************************************
 *
 *                          PVCS Header Information
 *
 * $Workfile$
 * $Revision: 1.2 $
 *  $Modtime$
 *   $Author: fpeng $
 *
 *      $Log: bitbash.h $
 *
 *      06 29 2017 sue.zhong
 *      [MOLY00259241] [6293][C2K]Replace with KAL data type
 *      ::KAL type - folder inc
 *      Revision 1.2  2004/03/25 12:09:17  fpeng
 *      Updated from 6.0 CP 2.5.0
 *      Revision 1.1  2003/05/12 15:38:28  fpeng
 *      Initial revision
 *      Revision 1.2  2002/06/06 13:10:35  chinh
 *      Changed and Added Copyright
 *      Revision 1.1  2001/01/17 10:58:03  plabarbe
 *      Initial revision
 *      Revision 1.1  2000/10/24 14:11:02  fpeng
 *      Initial revision
 *      Revision 1.2  2000/03/01 18:05:39Z  rsattari
 *      Isotel release 2.3 updates.
 *      Revision 1.1  1999/11/30 23:11:42Z  cdma
 *      Initial revision
 *      Revision 1.18  1999/08/25 20:02:39  dstecker
 *      Merges from patches
 *      Revision 1.14.1.2.1.4  1999/08/23 21:42:43  dstecker
 *      ISOTEL R2.10
 *      Revision 1.3  1998/03/30 23:26:03  mhayduk
 *      Release 0.03.
 *
 * Revision 1.1  1997/11/06  17:49:24  mhayduk
 * Initial revision
 *
 * 
 ****************************************************************************
 ****************************************************************************/
 

#ifndef _BITBASH_H_

  #define _BITBASH_H_

#include "sysdefs.h"


#ifdef SYS_DEBUG_FAULT_FILE_INFO
#define getByte( Data, StartBit, NumBits )\
  	__getByte( __MODULE__, __LINE__ , Data, StartBit, NumBits )
#define getWord( Data, StartBit, NumBits)\
  	__getWord( __MODULE__, __LINE__, Data, StartBit, NumBits)
#define getDword( Data, StartBit, NumBits)\
  	__getDword( __MODULE__, __LINE__, Data, StartBit, NumBits)
#define putByte( Data, StartBit, NumBits, Value)\
  	__putByte( __MODULE__, __LINE__, Data, StartBit, NumBits, Value)
#define putWord( Data, StartBit, NumBits, Value)\
  	__putWord( __MODULE__, __LINE__, Data, StartBit, NumBits, Value)
#define putDword( Data, StartBit, NumBits, Value)\
  	__putDword( __MODULE__, __LINE__, Data, StartBit, NumBits, Value)
  	
  kal_uint8  __getByte( const char *moduleName, unsigned lineNumber, kal_uint8 *Data, kal_uint16 StartBit, kal_uint8 NumBits );
  kal_uint16  __getWord( const char *moduleName, unsigned lineNumber, kal_uint8 *Data, kal_uint16 StartBit, kal_uint8 NumBits );
  kal_uint32 __getDword( const char *moduleName, unsigned lineNumber, kal_uint8 *Data, kal_uint16 StartBit, kal_uint8 NumBits );

  void  __putByte( const char *moduleName, unsigned lineNumber, kal_uint8 *Data, kal_uint16 StartBit, kal_uint8 NumBits, kal_uint8 Value );
  void  __putWord( const char *moduleName, unsigned lineNumber, kal_uint8 *Data, kal_uint16 StartBit, kal_uint8 NumBits, kal_uint16 Value );
  void  __putDword( const char *moduleName, unsigned lineNumber, kal_uint8 *Data, kal_uint16 StartBit, kal_uint8 NumBits, kal_uint32 Value );

#else
  kal_uint8  getByte( kal_uint8 *Data, kal_uint16 StartBit, kal_uint8 NumBits );
  kal_uint16  getWord( kal_uint8 *Data, kal_uint16 StartBit, kal_uint8 NumBits );
  kal_uint32 getDword( kal_uint8 *Data, kal_uint16 StartBit, kal_uint8 NumBits );

  void  putByte( kal_uint8 *Data, kal_uint16 StartBit, kal_uint8 NumBits, kal_uint8 Value );
  void  putWord( kal_uint8 *Data, kal_uint16 StartBit, kal_uint8 NumBits, kal_uint16 Value );
  void  putDword( kal_uint8 *Data, kal_uint16 StartBit, kal_uint8 NumBits, kal_uint32 Value );

#endif


#endif  /* _BITBASH_H_ */


