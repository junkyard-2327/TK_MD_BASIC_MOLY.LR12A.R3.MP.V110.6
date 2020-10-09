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
/***************************************************************************
 *
 * Module:     ilistmgr.c
 *
 * Purpose:    This file contains the interface for the Isotel List
 *             Manager utility. The lists contain fixed size elements
 *             and are themselves fixed in number of entries.
 *
 ***************************************************************************
 *
 ***************************************************************************
 *
 * RCS Log Information
 *
 *  $Revision: 1.2 $
 *    $Author: fpeng $
 *
 *       $Log: ilistmgr.h $
 *       Revision 1.2  2004/03/25 12:08:51  fpeng
 *       Updated from 6.0 CP 2.5.0
 *       Revision 1.1  2003/05/12 15:38:48  fpeng
 *       Initial revision
 *       Revision 1.4  2002/06/06 13:12:57  chinh
 *       Changed and Added Copyright
 *       Revision 1.3  2001/11/08 12:19:53  AMALA
 *       Deleted compiler switch SYS_SEL_1_CBP3_MERGE &
 *       associated non-compiled code.
 *       Revision 1.2  2001/09/17 14:10:44  AMALA
 *       CBP3 System Selection port
 *       Revision 1.1  2001/01/17 10:58:52  plabarbe
 *       Initial revision
 *       Revision 1.1  2000/10/24 14:11:17  fpeng
 *       Initial revision
 *       Revision 1.3  2000/08/23 22:09:07Z  RSATTARI
 *       Isotel release 2.8 plus LSI applicable IS-95B changes.
 *       Revision 1.8  1999/09/04 02:48:45  scotvold
 *       Added function iListReserveHead() that reserves a record
 *       at the head of the list.
 *
 *       Revision 1.7  1999/06/04 23:27:26  scotvold
 *       New Message Transmitter.
 *
 *       Revision 1.6  1998/10/20 23:58:23  mhayduk
 *       Added T53 support.
 *
 *       Revision 1.5  1998/08/28 14:46:51  scotvold
 *       Added iListDeleteRecord() call.
 *
 *       Revision 1.4  1998/07/29 04:21:11  mhayduk
 *       Added new prototype for iListReadnext().
 *
 *       Revision 1.3  1998/06/08 21:48:25  scotvold
 *       Updated for Release 0.06.
 *
 * Revision 1.2  1998/03/30  23:26:03  mhayduk
 * Release 0.03.
 *
 *
 ****************************************************************************
 ****************************************************************************/
 

#ifndef _ILISTMGR_H_

  #define _ILISTMGR_H_ 1

/*****************************************************************************
 * Structures and definitions
 ****************************************************************************/
  typedef struct
  {
    /* Static list descriptors */
    kal_uint8* list;
    kal_uint16 numRecords;
    kal_uint16 recordSize;

    /* Dynamic list descriptors */
    kal_uint16 putIndex;           /* next position to add entry */
    kal_uint16 getIndex;           /* next position to get/read entry */
    kal_uint16 accessIndex;        /* index set by last get/read used */
                               /* making updates and deletions */
    kal_uint16 numInList;          /* current number of entries */
  } IListDesc;

  /* Initializes the list */
  void iListInit (IListDesc* listD, void* list, kal_uint16 numRecords,
                  kal_uint16 recordSize);

  /* Returns number of records currently in the queue */
  kal_uint16 iListNum (IListDesc* listD);

  /* Returns number of unoccupied records in the queue */
  kal_uint16 iListRoom (IListDesc* listD);

  void iListFlush (IListDesc* listD);

  /* Sets the index to first entry */
  void iListTop(IListDesc* listD);

  /* Returns KAL_FALSE if list is full */
  kal_bool iListReserve (IListDesc* listD, void** entry);

  /* Returns KAL_FALSE if list is full */
  kal_bool iListReserveHead(IListDesc* listD, void** entry);

  /* Returns KAL_FALSE if list is full */
  kal_bool iListPut (IListDesc* listD, void* data);

  /* Returns KAL_FALSE if queue is empty */
  kal_bool iListGet (IListDesc* listD, void* data);

  /* Read the next entry in the list */
  kal_bool iListGetNext(IListDesc* listD, void* data);

  /* Returns KAL_FALSE if queue is empty */
  kal_bool iListGetIndex (IListDesc* listD, void* data, kal_uint16 index);

  /* reads record at requested index */
  kal_bool iListReadIndex (IListDesc* listD, void** entry, kal_uint16 index);

  /* Returns KAL_FALSE if queue is empty */
  kal_bool iListRead (IListDesc* listD, void** data);

  /* set the entry pointer to next record entry */
  kal_bool iListReadNext (IListDesc* listD, void** entry);

  /* Update last read entry */
  kal_bool iListUpdate (IListDesc* listD, void* data);

  /* Delete last read entry */
  kal_bool iListDelete (IListDesc* listD);

  /* Delete a specified record */
  kal_bool iListDeleteRecord (IListDesc* listD, void* record);

  /* Delete a specified entry */
  kal_bool iListDeleteEntry (IListDesc* listD, kal_uint16 entry);

/* SNR CSS*/
  /* Puts the entry atthe head of the list */
  kal_bool iListPutHead(IListDesc* listD, void* data);

#endif /* _ILISTMGR_H_ */

