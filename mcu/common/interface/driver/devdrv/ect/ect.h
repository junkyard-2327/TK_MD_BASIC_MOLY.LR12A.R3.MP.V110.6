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
 *   ect.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This Module defines the HW initialization.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *
 *
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef ECT_H
#define ECT_H

#include "kal_general_types.h"

/* channel setting */
#define CH_NON  (0x0)
#define CH_DBG  (0x1 << 0)
//#define CH_DBG  CH_NON
#define CH_RST  (0x1 << 1)
#define CH_EXP  (0x1 << 2)


/* we will disable RMPU for user load */
#ifndef __PRODUCTION_RELEASE__
/* under construction !*/
/* under construction !*/
#else /* __PRODUCTION_RELEASE__ */ 
#define CH_RMPU CH_NON 
#endif


//MT6763 MT6293
#define ECT_SRC_NONE    	(0x0)
#define ECT_SRC_IA			(0x1 << 0)
#define ECT_SRC_USIP    	(0x1 << 1)
#define ECT_SRC_RAKE      	(0x1 << 2)
#define ECT_SRC_SCQ         (0X1 << 3)
#define ECT_SRC_USIP0_0     (0X1 << 4)
#define ECT_SRC_USIP0_1     (0X1 << 5)
#define ECT_SRC_USIP1_0     (0X1 << 6)
#define ECT_SRC_USIP1_1     (0x1 << 7)
#define ECT_SRC_SCQ0	    (0x1 << 8)
#define ECT_SRC_SCQ1        (0x1 << 9)

#if (CH_RMPU == CH_NON)
#define ECT_SRC_RMPU   	    ECT_SRC_NONE
#else
#define ECT_SRC_RMPU   	    (0x1 << 10)
#endif //if (CH_RMPU == CH_NON)

#define ECT_SRC_INVALID_VPE (0xFFFFFFFF)

/*IA&USIP TriggerIn*/
#define IA_TRIGGERIN          (7)
#define USIP_TRIGGERIN        (5)
#define RMPU_TRIGGERIN        (3)
                              
#define IA_TRIGGERIN_MASK     (1 << IA_TRIGGERIN)
#define USIP_TRIGGERIN_MASK   (1 << USIP_TRIGGERIN)
#define RMPU_TRIGGERIN_MASK   (1 << RMPU_TRIGGERIN)
                              
                              
/*IA&USIP TriggerOut*/             
#define IA_TRIGGEROUT         (3)
#define USIP_TRIGGEROUT       (7)

#define IA_TRIGGEROUT_MASK    (1 << IA_TRIGGEROUT)
#define USIP_TRIGGEROUT_MASK  (1 << USIP_TRIGGEROUT)

/*DSP TriggerIn*/
#define RAKE_TRIGGERIN        (3)
#define SCQ_TRIGGERIN         (2)
                              
#define RAKE_TRIGGERIN_MASK   (1 << RAKE_TRIGGERIN)
#define SCQ_TRIGGERIN_MASK    (1 << SCQ_TRIGGERIN)
                              
/*DSP TriggerOut*/            
#define RAKE_TRIGGEROUT       (5)
#define SCQ_TRIGGEROUT       (4)
                              
#define RAKE_TRIGGEROUT_MASK  (1 << RAKE_TRIGGEROUT)
#define SCQ_TRIGGEROUT_MASK  (1 << SCQ_TRIGGEROUT)

#define TRIGGERIN_DEFAULT_VAL (0x40)

#define IA_USIP_CTI           (BASE_MADDR_DBGSYS_1+0xC000)
#define DSP_CTI               (BASE_MADDR_DBGSYS_1+0xD000)
#define DBG_AO_MISC           (BASE_MADDR_DBGSYS_1+0xE000)


#define BASE_MADDR_MD_CTI     (IA_USIP_CTI)
#define BASE_MADDR_DSP_CTI    (DSP_CTI)


void  ECT_Init(void);
void ECT_Hdlr(kal_uint32 vector);
void ECT_TrgExcp(void);
kal_uint32 ECT_Query(void);
kal_uint32 ECT_IsEnabled(void);

kal_uint32 ECT_GetMDTriggerOut(void);
kal_uint32 ECT_GetDSPTriggerOut(void);
kal_uint32 ECT_GetMDTriggerIn(void);
kal_uint32 ECT_GetDSPTriggerIn(void);

#endif /* ECT_H */
