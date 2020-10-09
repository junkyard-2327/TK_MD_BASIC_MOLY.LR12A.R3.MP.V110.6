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
/*************************************************************************
 *
 * File Name:       iqmgr.h
 * Project:         ISOTEL C library
 * Original Author: BJC
 * Creation Date:   Sep.8, 1997
 *
 * Description:     Circular Queue manager interface definition.
 *
 * Restrictions: 
 *
 * Dependencies: 
 *
 ****************************************************************************
 ****************************************************************************
 *
 * RCS Log Information
 *
 * $Log: iqmgr.h $
 *
 * 06 29 2017 sue.zhong
 * [MOLY00259241] [6293][C2K]Replace with KAL data type
 * ::KAL type - folder inc
 * Revision 1.1  2004/01/22 10:52:15  fpeng
 * Initial revision
 * Revision 1.2  2002/06/06 13:52:57  chinh
 * Changed and Added Copyright
 * Revision 1.1  2001/04/26 11:43:13  fpeng
 * Initial revision
 * Revision 1.3  2000/08/28 15:07:51  hhong
 * Moving up to Rev 1.3 by checking out 1.1.2.1 and locking 1.2.
 * It's a duplicate version of 1.1.2.1
 * Revision 1.1.2.1  2000/08/24 00:25:40Z  hhong
 * Add iqResetScan
 * Revision 1.4  2000/02/05 20:25:53  bcassidy
 * 1. Add scanning function prototypes and supporting queue descriptor elements.
 *
 * Revision 1.3  1998/12/01 16:28:23  scotvold
 * The Record Size is now 16 bits.
 * Added compile guards.
 *
 * Revision 1.2  1998/02/12 17:47:58  bcassidy
 * 1. Add iqGetRef and iqDelete.
 *
 * Revision 1.1  1998/01/31  22:39:13  bcassidy
 * Initial revision
 *
 *
 ************************************************************************/

#ifndef _IQMGR_H_
#define _IQMGR_H_ 1

typedef struct
{
  /* Static queue descriptors */
  kal_uint8* q;
  kal_uint16 numRecords;
  kal_uint16 recordSize;

  /* Dynamic queue descriptors */
  kal_uint16 putIndex;
  kal_uint16 getIndex;
  kal_uint16 numInQueue;

  kal_uint16 scanIndex;
  kal_uint16 numToScan;
} IQDesc;

/* Returns KAL_FALSE if queue is full */
kal_bool iqPut(IQDesc *qd, void *data);

/* Returns the number of records enqueued */ 
kal_uint16 iqBlockPut(IQDesc *qd, void *data, kal_uint16 recordsToPut);

/* Returns KAL_FALSE if queue is empty */
kal_bool iqGet(IQDesc *qd, void *data);

/* Returns number of records retrieved */
kal_uint16 iqBlockGet(IQDesc *qd, void *data, kal_uint16 recordsToGet);

/* Returns a pointer to the first entry without dequing the record */
void *iqGetRef(IQDesc *qd);

/* Removes the first entry */
kal_bool iqDelete(IQDesc *qd);

/* Returns number of records currently in the queue */
kal_uint16 iqNum(IQDesc *qd);

/* Returns number of unoccupied records in the queue */
kal_uint16 iqRoom(IQDesc *qd);

void iqFlush(IQDesc *qd);

void iqResetScan(IQDesc *qd, kal_uint16 start);

void* iqScan(IQDesc *qd);

void iqInit(IQDesc *qd, void *q, kal_uint16 numRecords, kal_uint16 recordSize);

#endif /* _IQMGR_H_ */

