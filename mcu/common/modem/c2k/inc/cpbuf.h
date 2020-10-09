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
* Copyright (c) 2006-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef  _CPBUF_H_
#define  _CPBUF_H_
/*****************************************************************************
* 
* FILE NAME   :   cpbuf.h
*
* DESCRIPTION :   CP Buffer Manager 
*
* HISTORY     :
*     See Log at end of file
*
*****************************************************************************/
#include "kal_public_api.h"
#include "flc2_ent_functions.h"
#include "monapi.h"


#define CPBUF_SIZE_FWD      640 /* bytes */
#define CPBUF_SIZE_REV      252 /* bytes */
#define CPBUF_SIZE_SIG      100 /* bytes */
#define CPBUF_SIZE_HDR      15  /* bytes */
#define CPBUF_SIZE_FWD1X    48  /* bytes */

#define CPBUF_ONEBUF        0xFFFF

//#define CPBUF_SPIN_LOCK
#define DEBUG_CPBUF_FILE_INFO

extern kal_spinlockid cpBufSpinLock[5];


/*----------------------------------------------------------------------------
 CP Buf Data Struct
----------------------------------------------------------------------------*/

/* Allocation Status of each CP Buf memory buffer */
typedef enum
{
   CPBUF_FREE = 0xFE, /* non-zero nor one to avoid unwanted matching of uninitialized data field. */
   CPBUF_BUSY = 0xB0
} CpBufStatusT;  


/* Allocation Type of CP Buf memory buffer */
typedef enum
{
   CPBUF_FWD = 0,
   CPBUF_REV,
   CPBUF_SIGNALING_MSG,
   CPBUF_POOL_NUM,
   CPBUF_HEADER = CPBUF_POOL_NUM,   /* Obsolete pool */
   CPBUF_FWD1X                      /* Obsolete pool */
} CpBufTypeT;

typedef struct cpBuffer 
{
   kal_uint32*  dataPtr;   /* Ptr to the CPBUF addr in CPBUF_Pool[] */
   kal_uint16   len;        /* Length of data in bytes.   */
   CpBufStatusT status;     /* Free or Busy */
   CpBufTypeT   type;       /* partition type. Need this info to Free cpbuf */
   kal_uint32   refCount;   /* reference count of this cp buffer */
   struct       cpBuffer *nextPtr; /* Ptr to the next cpPktHdr in this CP Pkt */
} CpBufferT;


/* cpBufQ - This is a generic CpBufferT type Queue Linked-List */
typedef struct cpBufQ
{
   CpBufferT    *head;
   CpBufferT    *tail;
   kal_uint32   count;      /* Total number of CpBufferT in this linked-list */
} CpBufQT;


/*----------------------------------------------------------------------------
 CP Pkt Functions
----------------------------------------------------------------------------*/
#ifndef DEBUG_CPBUF_FILE_INFO
extern CpBufferT* CpBufGet(kal_uint16 size, CpBufTypeT CpBufType );
extern void  CpBufCopy( CpBufferT *cpPktPtr );
extern void  CpBufFree( CpBufferT *cpPktPtr );
#else
extern CpBufferT* __CpBufGet(const char *moduleName, unsigned lineNumber, kal_uint16 size, CpBufTypeT CpBufType );
extern void  __CpBufCopy(const char *moduleName, unsigned lineNumber, CpBufferT *cpPktPtr );
extern void  __CpBufFree(const char *moduleName, unsigned lineNumber, CpBufferT *cpPktPtr );

#define CpBufGet(size, CpBufType)  __CpBufGet( __FUNCTION__, __LINE__, size, CpBufType)
#define CpBufFree( cpPktPtr ) __CpBufFree( __FUNCTION__, __LINE__, cpPktPtr )
#define CpBufCopy( cpPktPtr ) __CpBufCopy(__FUNCTION__, __LINE__, cpPktPtr )

#endif
extern kal_bool  CpBufFwdFlowCtrlOn(void);
extern kal_bool CpBufRevFlowCtrlOn(void);
extern CpBufferT * CpBufMerge (kal_uint16     numCpBuffers, 
                               CpBufferT      *cpBufList[], 
                               kal_uint16     *offsetList,
                               kal_uint16     *lenList,
                               kal_uint16     *mergedLen,
                               CpBufTypeT     cpBufType);
extern void CpBufSpinLocksCreate(void);
extern CpBufferT * isr_get_cpbuf(kal_uint16 size, CpBufTypeT cpBufType, const char *moduleName, kal_uint16 lineNumber);
extern void fill_isr_cpbuf_queue(kal_uint16 size, CpBufTypeT cpBufType);
extern void fill_rcp_ri_cpbuf_queue(void);

#if defined (RCP_RI_HRT_DEV)
#define RCP_CPBUF_GET(size, cpbufType)  isr_get_cpbuf(size, cpbufType, __FUNCTION__, __LINE__)
#else
#define RCP_CPBUF_GET(size, cpbufType)  CpBufGet(size, cpbufType)
#endif


/*----------------------------------------------------------------------------
 Global Data
----------------------------------------------------------------------------*/

/*****************************************************************************
* End of File
*****************************************************************************/
#endif
