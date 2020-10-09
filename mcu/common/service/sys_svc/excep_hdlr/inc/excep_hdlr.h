/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   excep_hdlr.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file provides typedefs and definiton for PS index trace.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
 
#ifndef _EXCEP_HDLR_H_
#define _EXCEP_HDLR_H_

#include "ex_item.h"

typedef enum sys_excep_act
{
  SYS_EXCEP_ACT_RETURN = 1,
  SYS_EXCEP_ACT_RETURN_NEXT,
} sys_excep_act;

typedef struct sys_excep_param
{
  int excep_reason;
  unsigned int excep_addr;
  EX_CPU_REG_T *excep_reg;
} sys_excep_param;

typedef int (*sys_excep_hdlr)(sys_excep_param *param);

typedef struct sys_excep_hdlr_desc
{
  struct sys_excep_hdlr_desc *next_desc;
  sys_excep_hdlr hdlr;
  
} sys_excep_hdlr_desc;

typedef struct excep_ctxt
{
  unsigned int sp;
  unsigned int lr;
  unsigned int pc;
  unsigned int tmp;
} excep_ctxt;

/* Define the thread per cpu structure type.  */
typedef struct TC_CPU_CB_STRUCT_DUMMY
{
    void * volatile     tc_running_thread;
} TC_CPU_CB_DUMMY;

typedef struct CIS_CPU_INFO_STRUCT_DUMMY
{
    kal_uint32         c1;         /* CPU ID                 */
    kal_uint32         c2;         /* CPU state              */
    kal_uint32         c3;         /* CPU hardware id        */
    kal_bool               b1;         /* CPU bound domain flag  */
    kal_bool               b2;         /* is set to true if core is idle */
} CIS_CPU_INFO_DUMMY;


/* Define the CPU control block */
typedef struct CIS_CCB_STRUCT_DUMMY
{
    CIS_CPU_INFO_DUMMY   cis_info_cb;
    TC_CPU_CB_DUMMY      cis_thread_cb;

} CIS_CCB_DUMMY;

typedef struct  CS_NODE_STRUCT_DUMMY
{
    struct CS_NODE_STRUCT_DUMMY  *cs_previous;
    struct CS_NODE_STRUCT_DUMMY  *cs_next;
    kal_uint16                  cs_priority;

}  CS_NODE_DUMMY;

int retrieve_excep_ctxt(excep_ctxt *ctxt);
void sys_excep_hdlr_desc_init(sys_excep_hdlr_desc *hdlr_desc, sys_excep_hdlr hdlr);
int sys_excep_excep_hdlr_reg(sys_excep_hdlr_desc *hdlr_desc);

#endif /* _EXCEP_HDLR_H_ */