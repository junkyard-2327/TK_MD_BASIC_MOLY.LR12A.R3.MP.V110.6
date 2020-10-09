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
 *   l4b_cval_enum.h
 *
 * Description:
 * ------------
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _L4B_CVAL_ENUM_H
#define _L4B_CVAL_ENUM_H

typedef enum
{
    VAL_CS_REG_HOME_SERVICE         = 1,   /*mapping +vser:0 & 1x registered & roaming status:0*/
    VAL_CS_REG_ROAM_SERVICE         = 5,   /*mapping +vser:0 &  1x registered & roaming status:1*/
    
    VAL_CS_REG_NORMAL_SERVICE       = 101,  /*mapping +vser:0*/
    VAL_CS_REG_NO_SERVICE           = 102,  /*mapping +vser:1*/
    VAL_CS_REG_OUT_OF_SERVICE       = 103,  /*mapping +vser:2*/
    VAL_CS_REG_LIMIT_SERVICE        = 104,  /*mapping +vser:3*/

    VAL_CS_REG_MAX_STATUS
}ValCsRegStatusT;

typedef enum
{    
    VAL_PS_REG_HOME_SERVICE         = 1,   /*mapping +ecgreg:1(PS registered) & roaming status:0*/
    VAL_PS_REG_ROAM_SERVICE         = 5,   /*mapping +ecgreg:1(PS registered) & roaming status:1*/

    VAL_PS_NOT_REG_NO_NWK_SERVICE   = 101,  /*mapping +ecgreg:0 & ^mode:0, No NW, need to find NW*/
    VAL_PS_NOT_REG_1XRTT_SERVICE    = 102,  /*mapping ^mode:2, MT find 1x NW,but need wait result of registered*/
    VAL_PS_NOT_REG_DO_SERVICE       = 103,  /*mapping ^mode:4, MT find Do NW,but need wait result of registered*/
    VAL_PS_NOT_REG_1X_DO_SERVICE    = 104,  /*mapping ^mode:8, MT find 1x&Do NW,but need wait result of registered*/

    VAL_PS_REG_CHECK_ROAM_STATUS,   /*PS have been registered, need check whether it was Roaming*/
    VAL_PS_REG_NO_CHANGE_STATUS,     /*it need not that PS Regstration state changed*/
    
    VAL_PS_REG_MAX_STATUS
}ValPsRegStatusT;



#endif /* _L4B_CVAL_ENUM_H */

