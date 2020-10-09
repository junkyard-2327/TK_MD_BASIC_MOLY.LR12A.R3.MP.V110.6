/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2011
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

/*******************************************************************************
 *
 * Filename:
 * ---------
 * afe_def.h
 *
 * Project:
 * --------
 * MAUI
 *
 * Description:
 * ------------
 *  This file defines all the AFE registers used in audio module.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef __AFE_DEF_H
#define __AFE_DEF_H

/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                        Chapter:  INCLUDE FILES
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/
#include "kal_public_api.h"
#include "reg_base.h"
#include "l1audio.h"

#include "am.h"


/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                       Chapter:  Register Definitions
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/

#define AFE_base (AFE_BASE)

//=============================================================================================
//                  Sections: Register Audio Front End Hardware Control Register
//=============================================================================================
#define  AFE_VMCU_CON   ((APBADDR)(AFE_base+0x0000))        /* AFE Voice MCU Control Register               */
#define  AFE_VMCU_CON1  ((APBADDR)(AFE_base+0x000C))        /* AFE Voice Analog Circuit Control Register 1   */

#define  AFE_PCM_CON0    ((APBADDR32)(AFE_base+0x0014))        /* AFE PCM Interface Control Register 0     */

#define  AFE_AMCU_CON0  ((APBADDR)(AFE_base+0x0020))        /* AFE Audio MCU Control Register 0          */
#define  AFE_AMCU_CON1  ((APBADDR)(AFE_base+0x0024))        /* AFE Audio Control Register 1                  */

#define  AFE_IRQ_CON1    ((APBADDR32)(AFE_base+0x0034))       /* IRQ mode setting                 */

#define  AFE_MCU_CON0    ((APBADDR32)(AFE_base+0x0080))       /* MD AFE control Register 0                 */
#define  AFE_MCU_CON1    ((APBADDR32)(AFE_base+0x0084))       /* MD AFE control Register 1                 */
#define  AFE_CONN0       ((APBADDR32)(AFE_base+0x00A0))       /* MD AFE connection control Register 1                 */


#define  USIP_CLK_ENABLE   ((APBADDR)(SPEECHDSP_CONFIG_BASE+0x0000))      /* Power Down Disable 2 Register        */
#define  USIP_CLK_DISABLE   ((APBADDR)(SPEECHDSP_CONFIG_BASE+0x0004))      /* Power Down Enable  2 Register        */
                                        

/*
============================================================================================================
------------------------------------------------------------------------------------------------------------
||                        Chapter: Function Prototypes
------------------------------------------------------------------------------------------------------------
============================================================================================================
*/
void AFE_TurnOn8K(void);
void AFE_TurnOff8K(void);

// void AFE_RegisterBackup(void);
#endif //__AFE_DEF_H

