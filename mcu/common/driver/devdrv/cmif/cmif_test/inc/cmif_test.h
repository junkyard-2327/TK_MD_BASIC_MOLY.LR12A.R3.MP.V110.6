/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
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
 *   
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   
 *   
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
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __CMIF_TEST_H__
#define __CMIF_TEST_H__

#include "ssdvt_typedef.h"
#include "sync_data.h"

/*******************************************************************************
* Macros 
*******************************************************************************/
#if (defined(__CORE_BRP__) || defined(__CORE_DFE__) || defined(__CORE_RAKE__))
#define SSDVT_CMIF_GET_LSB(b) SSDVT_GET_LSB((b))
#else     /*  __CORE_BRP__ || __CORE_DFE__ || __CORE_RAKE__ */
#define SSDVT_CMIF_CLZ(z)      __builtin_clz((z))  
#define SSDVT_CMIF_GET_LSB(b) (31 - SSDVT_CMIF_CLZ((b) & -(b)))
#endif     /*  __CORE_BRP__ || __CORE_DFE__ || __CORE_RAKE__ */


#define SSDVT_CMIF_EXCHANGE_CLIENT_NUMBER(c) c = (c)?0:1;

/*******************************************************************************
* CMIF Memory Definition 
*******************************************************************************/
#define SSDVT_CMIF_INTERRUPT_SIZE                   32
#define SSDVT_CMIF_INTERRUPT_WAIT_LOOP_COUNT        1000

// for the most handsome iger.
#define SSDVT_CMIF_M2C_WFI_ISR_CHECK_PATTERN        0x39383938 

#define SSDVT_UMIF_SYNC_MEM_SIZE            8

#if !defined(__MD32S_SSDVT_RTLCOSIM__)
#define SSDVT_CMIF_SYNC_MEM_SIZE            8 
#else    /* __MD32S_SSDVT_RTLCOSIM__ */
#define SSDVT_CMIF_SYNC_MEM_SIZE            (8 + SSDVT_RTLCOSIM_SIZE) 
#endif   /* __MD32S_SSDVT_RTLCOSIM__ */

/*******************************************************************************
* CMIF Interrupt Register Information 
*******************************************************************************/

/* Check offset, the base is 0x54*/
#define SSDVT_CMIF_C2M_U3G_CHECK_MEM_OFFSET     (0x0)
#define SSDVT_CMIF_M2C_U3G_CHECK_MEM_OFFSET     (0x4)
#define SSDVT_CMIF_M2C_WFI_CHECK_MEM_OFFSET     (0x8)
#define SSDVT_CMIF_M2C_FPC_1X_CHECK_MEM_OFFSET  (0xC)
#define SSDVT_CMIF_M2C_DO_PD_CHECK_MEM_OFFSET   (0x10)
#define SSDVT_CMIF_M2C_FOE_1X_CHECK_MEM_OFFSET  (0x14)
#define SSDVT_CMIF_U2M_INN_CHECK_MEM_OFFSET     (0x18)
#define SSDVT_CMIF_M2U_INN_CHECK_MEM_OFFSET     (0x1C)
#define SSDVT_CMIF_U2M_OUT_CHECK_MEM_OFFSET     (0x20)
#define SSDVT_CMIF_M2U_OUT_CHECK_MEM_OFFSET     (0x24)

/*******************************************************************************
*  Function prototypes 
*******************************************************************************/
/**
 *  @note CMIF(CR4-MD32) test, it would test CR4 to MD32, MD32 to CR4 and two cores writing concurrently. 
 *
 *  @retval     0                 test successly
 *  @retval     otherwise         no return
 */
ssdvt_uint32 SSDVT_CMIF_Test(void);

#endif  /* __CMIF_TEST_H__ */
