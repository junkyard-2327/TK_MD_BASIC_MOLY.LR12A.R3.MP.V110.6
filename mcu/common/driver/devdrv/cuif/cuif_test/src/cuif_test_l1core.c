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
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#if defined(__SSDVT_CUIF_TEST__)

#include "ssdvt_typedef.h"
#include "ssdvt_header.h"
#include "ssdvt_util.h"
#include "memory_test.h"
#include "cuif_test.h"
#include "intrCtrl.h"
#include "sync_data.h"
#include "drv_comm.h"

/*******************************************************************************
*  Interrrupt Registers 
*******************************************************************************/
/* USIP part */

#define SSDVT_CUIF_USIP0_MEM_BASE_ADDR          (CUIF_INNER_BRP_BASE)
#if defined(__MD95__)
#define SSDVT_CUIF_USIP1_MEM_BASE_ADDR          (CUIF_FEC_SS_BASE)
#else
#define SSDVT_CUIF_USIP1_MEM_BASE_ADDR          (CUIF_FEC_WBRP_BASE)
#endif

#define SSDVT_CUIF_C2U_INNER_STATUS       ((volatile ssdvt_uint32*)(CUIF_C2U_INNER_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CUIF_C2U_INNER_STATUS_SET   ((volatile ssdvt_uint32*)(CUIF_C2U_INNER_INTERRUPT_SET_OFFSET))
#define SSDVT_CUIF_C2U_INNER_STATUS_CLR   ((volatile ssdvt_uint32*)(CUIF_C2U_INNER_INTERRUPT_CLEAR_OFFSET))
#define SSDVT_CUIF_C2U_INNER_EN_STATUS    ((volatile ssdvt_uint32*)(CUIF_C2U_INNER_INTERRUPT_EN_OFFSET))
#define SSDVT_CUIF_C2U_INNER_EN_SET       ((volatile ssdvt_uint32*)(CUIF_C2U_INNER_INTERRUPT_EN_SET_OFFSET))
#define SSDVT_CUIF_C2U_INNER_EN_CLR       ((volatile ssdvt_uint32*)(CUIF_C2U_INNER_INTERRUPT_EN_CLR_OFFSET))

#define SSDVT_CUIF_C2U_OUTER_STATUS       ((volatile ssdvt_uint32*)(CUIF_C2U_OUTER_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CUIF_C2U_OUTER_STATUS_SET   ((volatile ssdvt_uint32*)(CUIF_C2U_OUTER_INTERRUPT_SET_OFFSET))
#define SSDVT_CUIF_C2U_OUTER_STATUS_CLR   ((volatile ssdvt_uint32*)(CUIF_C2U_OUTER_INTERRUPT_CLEAR_OFFSET))
#define SSDVT_CUIF_C2U_OUTER_EN_STATUS    ((volatile ssdvt_uint32*)(CUIF_C2U_OUTER_INTERRUPT_EN_OFFSET))
#define SSDVT_CUIF_C2U_OUTER_EN_SET       ((volatile ssdvt_uint32*)(CUIF_C2U_OUTER_INTERRUPT_EN_SET_OFFSET))
#define SSDVT_CUIF_C2U_OUTER_EN_CLR       ((volatile ssdvt_uint32*)(CUIF_C2U_OUTER_INTERRUPT_EN_CLR_OFFSET))

#define SSDVT_CUIF_C2U_FEC_STATUS         ((volatile ssdvt_uint32*)(CUIF_C2U_FEC_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CUIF_C2U_FEC_STATUS_SET     ((volatile ssdvt_uint32*)(CUIF_C2U_FEC_INTERRUPT_SET_OFFSET))
#define SSDVT_CUIF_C2U_FEC_STATUS_CLR     ((volatile ssdvt_uint32*)(CUIF_C2U_FEC_INTERRUPT_CLEAR_OFFSET))
#define SSDVT_CUIF_C2U_FEC_EN_STATUS      ((volatile ssdvt_uint32*)(CUIF_C2U_FEC_INTERRUPT_EN_OFFSET))
#define SSDVT_CUIF_C2U_FEC_EN_SET         ((volatile ssdvt_uint32*)(CUIF_C2U_FEC_INTERRUPT_EN_SET_OFFSET))
#define SSDVT_CUIF_C2U_FEC_EN_CLR         ((volatile ssdvt_uint32*)(CUIF_C2U_FEC_INTERRUPT_EN_CLR_OFFSET))

#define SSDVT_CUIF_C2U_SPEECH_STATUS      ((volatile ssdvt_uint32*)(CUIF_C2U_SPEECH_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CUIF_C2U_SPEECH_STATUS_SET  ((volatile ssdvt_uint32*)(CUIF_C2U_SPEECH_INTERRUPT_SET_OFFSET))
#define SSDVT_CUIF_C2U_SPEECH_STATUS_CLR  ((volatile ssdvt_uint32*)(CUIF_C2U_SPEECH_INTERRUPT_CLEAR_OFFSET))
#define SSDVT_CUIF_C2U_SPEECH_EN_STATUS   ((volatile ssdvt_uint32*)(CUIF_C2U_SPEECH_INTERRUPT_EN_OFFSET))
#define SSDVT_CUIF_C2U_SPEECH_EN_SET      ((volatile ssdvt_uint32*)(CUIF_C2U_SPEECH_INTERRUPT_EN_SET_OFFSET))
#define SSDVT_CUIF_C2U_SPEECH_EN_CLR      ((volatile ssdvt_uint32*)(CUIF_C2U_SPEECH_INTERRUPT_EN_CLR_OFFSET))


#define SSDVT_CUIF_U2C_N0_STATUS          ((volatile ssdvt_uint32*)(CUIF_U2C_N0_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CUIF_U2C_N0_STATUS_SET      ((volatile ssdvt_uint32*)(CUIF_U2C_N0_INTERRUPT_SET_OFFSET))
#define SSDVT_CUIF_U2C_N0_STATUS_CLR      ((volatile ssdvt_uint32*)(CUIF_U2C_N0_INTERRUPT_CLEAR_OFFSET))
#define SSDVT_CUIF_U2C_N0_EN_STATUS       ((volatile ssdvt_uint32*)(CUIF_U2C_N0_INTERRUPT_EN_OFFSET))
#define SSDVT_CUIF_U2C_N0_EN_SET          ((volatile ssdvt_uint32*)(CUIF_U2C_N0_INTERRUPT_EN_SET_OFFSET))
#define SSDVT_CUIF_U2C_N0_EN_CLR          ((volatile ssdvt_uint32*)(CUIF_U2C_N0_INTERRUPT_EN_CLR_OFFSET))


#define SSDVT_CUIF_U2C_N1_STATUS          ((volatile ssdvt_uint32*)(CUIF_U2C_N1_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CUIF_U2C_N1_STATUS_SET      ((volatile ssdvt_uint32*)(CUIF_U2C_N1_INTERRUPT_SET_OFFSET))
#define SSDVT_CUIF_U2C_N1_STATUS_CLR      ((volatile ssdvt_uint32*)(CUIF_U2C_N1_INTERRUPT_CLEAR_OFFSET))
#define SSDVT_CUIF_U2C_N1_EN_STATUS       ((volatile ssdvt_uint32*)(CUIF_U2C_N1_INTERRUPT_EN_OFFSET))
#define SSDVT_CUIF_U2C_N1_EN_SET          ((volatile ssdvt_uint32*)(CUIF_U2C_N1_INTERRUPT_EN_SET_OFFSET))
#define SSDVT_CUIF_U2C_N1_EN_CLR          ((volatile ssdvt_uint32*)(CUIF_U2C_N1_INTERRUPT_EN_CLR_OFFSET))

#define SSDVT_CUIF_U2C_N2_STATUS          ((volatile ssdvt_uint32*)(CUIF_U2C_N2_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CUIF_U2C_N2_STATUS_SET      ((volatile ssdvt_uint32*)(CUIF_U2C_N2_INTERRUPT_SET_OFFSET))
#define SSDVT_CUIF_U2C_N2_STATUS_CLR      ((volatile ssdvt_uint32*)(CUIF_U2C_N2_INTERRUPT_CLEAR_OFFSET))
#define SSDVT_CUIF_U2C_N2_EN_STATUS       ((volatile ssdvt_uint32*)(CUIF_U2C_N2_INTERRUPT_EN_OFFSET))
#define SSDVT_CUIF_U2C_N2_EN_SET          ((volatile ssdvt_uint32*)(CUIF_U2C_N2_INTERRUPT_EN_SET_OFFSET))
#define SSDVT_CUIF_U2C_N2_EN_CLR          ((volatile ssdvt_uint32*)(CUIF_U2C_N2_INTERRUPT_EN_CLR_OFFSET))

#define SSDVT_CUIF_U2C_N3_STATUS          ((volatile ssdvt_uint32*)(CUIF_U2C_N3_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CUIF_U2C_N3_STATUS_SET      ((volatile ssdvt_uint32*)(CUIF_U2C_N3_INTERRUPT_SET_OFFSET))
#define SSDVT_CUIF_U2C_N3_STATUS_CLR      ((volatile ssdvt_uint32*)(CUIF_U2C_N3_INTERRUPT_CLEAR_OFFSET))
#define SSDVT_CUIF_U2C_N3_EN_STATUS       ((volatile ssdvt_uint32*)(CUIF_U2C_N3_INTERRUPT_EN_OFFSET))
#define SSDVT_CUIF_U2C_N3_EN_SET          ((volatile ssdvt_uint32*)(CUIF_U2C_N3_INTERRUPT_EN_SET_OFFSET))
#define SSDVT_CUIF_U2C_N3_EN_CLR          ((volatile ssdvt_uint32*)(CUIF_U2C_N3_INTERRUPT_EN_CLR_OFFSET))

#define SSDVT_CUIF_U2C_N4_STATUS          ((volatile ssdvt_uint32*)(CUIF_U2C_N4_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CUIF_U2C_N4_STATUS_SET      ((volatile ssdvt_uint32*)(CUIF_U2C_N4_INTERRUPT_SET_OFFSET))
#define SSDVT_CUIF_U2C_N4_STATUS_CLR      ((volatile ssdvt_uint32*)(CUIF_U2C_N4_INTERRUPT_CLEAR_OFFSET))
#define SSDVT_CUIF_U2C_N4_EN_STATUS       ((volatile ssdvt_uint32*)(CUIF_U2C_N4_INTERRUPT_EN_OFFSET))
#define SSDVT_CUIF_U2C_N4_EN_SET          ((volatile ssdvt_uint32*)(CUIF_U2C_N4_INTERRUPT_EN_SET_OFFSET))
#define SSDVT_CUIF_U2C_N4_EN_CLR          ((volatile ssdvt_uint32*)(CUIF_U2C_N4_INTERRUPT_EN_CLR_OFFSET))


#if defined(__MD95__)
#define SSDVT_CUIF_U2C_N5_STATUS          ((volatile ssdvt_uint32*)(CUIF_U2C_N5_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CUIF_U2C_N5_STATUS_SET      ((volatile ssdvt_uint32*)(CUIF_U2C_N5_INTERRUPT_SET_OFFSET))
#define SSDVT_CUIF_U2C_N5_STATUS_CLR      ((volatile ssdvt_uint32*)(CUIF_U2C_N5_INTERRUPT_CLEAR_OFFSET))
#define SSDVT_CUIF_U2C_N5_EN_STATUS       ((volatile ssdvt_uint32*)(CUIF_U2C_N5_INTERRUPT_EN_OFFSET))
#define SSDVT_CUIF_U2C_N5_EN_SET          ((volatile ssdvt_uint32*)(CUIF_U2C_N5_INTERRUPT_EN_SET_OFFSET))
#define SSDVT_CUIF_U2C_N5_EN_CLR          ((volatile ssdvt_uint32*)(CUIF_U2C_N5_INTERRUPT_EN_CLR_OFFSET))

#define SSDVT_CUIF_U2C_N6_STATUS          ((volatile ssdvt_uint32*)(CUIF_U2C_N6_INTERRUPT_STATUS_OFFSET))
#define SSDVT_CUIF_U2C_N6_STATUS_SET      ((volatile ssdvt_uint32*)(CUIF_U2C_N6_INTERRUPT_SET_OFFSET))
#define SSDVT_CUIF_U2C_N6_STATUS_CLR      ((volatile ssdvt_uint32*)(CUIF_U2C_N6_INTERRUPT_CLEAR_OFFSET))
#define SSDVT_CUIF_U2C_N6_EN_STATUS       ((volatile ssdvt_uint32*)(CUIF_U2C_N6_INTERRUPT_EN_OFFSET))
#define SSDVT_CUIF_U2C_N6_EN_SET          ((volatile ssdvt_uint32*)(CUIF_U2C_N6_INTERRUPT_EN_SET_OFFSET))
#define SSDVT_CUIF_U2C_N6_EN_CLR          ((volatile ssdvt_uint32*)(CUIF_U2C_N6_INTERRUPT_EN_CLR_OFFSET))
#endif


#define SSDVT_CUIF_USIP0_C2U_U0_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP0_MEM_BASE_ADDR + SSDVT_CUIF_C2U_U0_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP0_C2U_U1_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP0_MEM_BASE_ADDR + SSDVT_CUIF_C2U_U1_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP0_C2U_U2_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP0_MEM_BASE_ADDR + SSDVT_CUIF_C2U_U2_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP0_C2U_U3_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP0_MEM_BASE_ADDR + SSDVT_CUIF_C2U_U3_CHECK_MEM_OFFSET))

#define SSDVT_CUIF_USIP0_U2C_N0_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP0_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N0_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP0_U2C_N1_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP0_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N1_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP0_U2C_N2_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP0_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N2_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP0_U2C_N3_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP0_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N3_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP0_U2C_N4_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP0_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N4_CHECK_MEM_OFFSET))
#if defined(__MD95__)
#define SSDVT_CUIF_USIP0_U2C_N5_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP0_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N5_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP0_U2C_N6_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP0_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N6_CHECK_MEM_OFFSET))
#endif
#define SSDVT_CUIF_USIP0_U2C_N0_WFI_CHECK ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP0_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N0_WFI_CHECK_MEM_OFFSET))
#if defined(__MD95__)
#define SSDVT_CUIF_USIP0_U2C_N5_WFI_CHECK ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP0_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N5_WFI_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP0_U2C_N6_WFI_CHECK ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP0_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N6_WFI_CHECK_MEM_OFFSET))
#else
#define SSDVT_CUIF_USIP0_U2C_N4_WFI_CHECK ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP0_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N4_WFI_CHECK_MEM_OFFSET))
#endif
#define SSDVT_CUIF_USIP0_SYNC_ADDR        ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP0_MEM_BASE_ADDR + SSDVT_CUIF_USIP0_MEM_SIZE - SSDVT_CUIF_SYNC_MEM_SIZE))

#define SSDVT_CUIF_USIP1_C2U_U0_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP1_MEM_BASE_ADDR + SSDVT_CUIF_C2U_U0_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP1_C2U_U1_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP1_MEM_BASE_ADDR + SSDVT_CUIF_C2U_U1_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP1_C2U_U2_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP1_MEM_BASE_ADDR + SSDVT_CUIF_C2U_U2_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP1_C2U_U3_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP1_MEM_BASE_ADDR + SSDVT_CUIF_C2U_U3_CHECK_MEM_OFFSET))

#define SSDVT_CUIF_USIP1_U2C_N0_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP1_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N0_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP1_U2C_N1_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP1_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N1_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP1_U2C_N2_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP1_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N2_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP1_U2C_N3_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP1_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N3_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP1_U2C_N4_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP1_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N4_CHECK_MEM_OFFSET))
#if defined(__MD95__)
#define SSDVT_CUIF_USIP1_U2C_N5_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP1_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N5_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP1_U2C_N6_CHECK     ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP1_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N6_CHECK_MEM_OFFSET))
#endif
#define SSDVT_CUIF_USIP1_U2C_N0_WFI_CHECK ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP1_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N0_WFI_CHECK_MEM_OFFSET))
#if defined(__MD95__)
#define SSDVT_CUIF_USIP1_U2C_N5_WFI_CHECK ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP1_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N5_WFI_CHECK_MEM_OFFSET))
#define SSDVT_CUIF_USIP1_U2C_N6_WFI_CHECK ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP1_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N6_WFI_CHECK_MEM_OFFSET))
#else
#define SSDVT_CUIF_USIP1_U2C_N4_WFI_CHECK ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP1_MEM_BASE_ADDR + SSDVT_CUIF_U2C_N4_WFI_CHECK_MEM_OFFSET))
#endif
#define SSDVT_CUIF_USIP1_SYNC_ADDR        ((volatile ssdvt_uint32*)(SSDVT_CUIF_USIP1_MEM_BASE_ADDR + SSDVT_CUIF_USIP1_MEM_SIZE - SSDVT_CUIF_SYNC_MEM_SIZE))

/*******************************************************************************
*  Global variables 
*******************************************************************************/
/**
 * define CUIF base address(.base_addr), size(.size) and status register (.sync)
 */
SSDVT_MEM_MemInfo cuif_usip0 = {.base_addr=  (ssdvt_uint32_p)SSDVT_CUIF_USIP0_MEM_BASE_ADDR,
                                .size=       (ssdvt_uint32)(SSDVT_CUIF_USIP0_MEM_SIZE - SSDVT_CUIF_SYNC_MEM_SIZE),
                                .sync=       (ssdvt_uint32_p)SSDVT_CUIF_USIP0_SYNC_ADDR
                               };

SSDVT_MEM_MemInfo cuif_usip1 = {.base_addr=  (ssdvt_uint32_p)SSDVT_CUIF_USIP1_MEM_BASE_ADDR,
                                .size=       (ssdvt_uint32)(SSDVT_CUIF_USIP1_MEM_SIZE - SSDVT_CUIF_SYNC_MEM_SIZE),
                                .sync=       (ssdvt_uint32_p)SSDVT_CUIF_USIP1_SYNC_ADDR
                               };


ssdvt_uint32 ssdvt_cuif_usip_core_testing = 0;
ssdvt_uint32 ssdvt_cuif_usip_module_testing = 0;
ssdvt_uint32 ssdvt_cuif_wfi_testing = 0;


ssdvt_uint32 cuif_c2u_int_source_num[CUIF_ENUM_ALL_USIP_INT_NUM] =
{
    CUIF_NUM_INTERRUPT_INNER_SOURCES,
    CUIF_NUM_INTERRUPT_OUTER_SOURCES,
    CUIF_NUM_INTERRUPT_FEC_SOURCES,
    CUIF_NUM_INTERRUPT_SPEECH_SOURCES
};

ssdvt_uint32 cuif_u2c_int_source_num[CUIF_ENUM_ALL_MCU_INT_NUM - 1] =
{
    CUIF_MCU_INT_N0_SOURCES,
    CUIF_MCU_INT_N1_SOURCES,
    CUIF_MCU_INT_N2_SOURCES,
    CUIF_MCU_INT_N3_SOURCES,
    CUIF_MCU_INT_N4_SOURCES,
#if defined(__MD95__)
    CUIF_MCU_INT_N5_SOURCES,
    CUIF_MCU_INT_N6_SOURCES,
#endif
};

/*******************************************************************************
* External Global variable 
*******************************************************************************/
extern SSDVT_MEM_TestType ssdvt_mem_test_type;
extern ssdvt_uint32       ssdvt_mem_test_current_status_base;
extern ssdvt_uint32       ssdvt_mem_test_mem_range_num;
extern ssdvt_uint32       ssdvt_cuif_interrupt_test_case_num;


/*******************************************************************************
*  Function prototypes 
*******************************************************************************/
void cuif_test_sync(const ssdvt_uint32    client,
                    const ssdvt_uint32_p  sync);

extern ssdvt_uint32 cuif_test_internal(ssdvt_uint32 client,
                                       const ssdvt_uint32 check_by_all_client,
                                       const SSDVT_MEM_MemInfo_ptr mem_info);

extern void SSDVT_CUIF_InterruptTestInternal(ssdvt_uint32 master,
                                             volatile ssdvt_uint32* irq_set,
                                             volatile ssdvt_uint32* en_set,
                                             volatile ssdvt_uint32* irq_check,
                                             volatile ssdvt_uint32* sync);

/*******************************************************************************
*  Functions 
*******************************************************************************/
void cuif_test_sync(const ssdvt_uint32 client, const ssdvt_uint32_p sync)
{
    // MCU Part
    while(sync[0] == 1);
    sync[0] = 1;             

    while(sync[1] == 0);
    sync[1] = 0;             
}
#if defined(__MD95__)
#define EN_ALL_EXCEPT_WFI_MASK 0xFFFFFFC0   //6 bits WFI
#else
#define EN_ALL_EXCEPT_WFI_MASK 0xFFFFFFF0
#endif
#define EN_ALL_MASK            0xFFFFFFFF

void SSDVT_CUIF_disable_all_int_L1core()
{
    CUIF_REG_WRITE(CUIF_U2C_EN_CLR_BASE + REG_OFFSET(CUIF_ENUM_N0), EN_ALL_EXCEPT_WFI_MASK);
    CUIF_REG_WRITE(CUIF_U2C_EN_CLR_BASE + REG_OFFSET(CUIF_ENUM_N1), EN_ALL_MASK);
    CUIF_REG_WRITE(CUIF_U2C_EN_CLR_BASE + REG_OFFSET(CUIF_ENUM_N2), EN_ALL_MASK);
    CUIF_REG_WRITE(CUIF_U2C_EN_CLR_BASE + REG_OFFSET(CUIF_ENUM_N3), EN_ALL_MASK);
#if defined(__MD95__)
    CUIF_REG_WRITE(CUIF_U2C_EN_CLR_BASE + REG_OFFSET(CUIF_ENUM_N4), EN_ALL_MASK);
    CUIF_REG_WRITE(CUIF_U2C_EN_CLR_BASE + REG_OFFSET(CUIF_ENUM_N5), EN_ALL_EXCEPT_WFI_MASK);
    CUIF_REG_WRITE(CUIF_U2C_EN_CLR_BASE + REG_OFFSET(CUIF_ENUM_N6), EN_ALL_EXCEPT_WFI_MASK);
#else
    CUIF_REG_WRITE(CUIF_U2C_EN_CLR_BASE + REG_OFFSET(CUIF_ENUM_N4), EN_ALL_EXCEPT_WFI_MASK);
#endif
}


void CUIF_U2C_ENABLE_REG_TEST()
{
    ssdvt_uint32 write_mask = 0;
    ssdvt_uint32 total_mask = 0;
    ssdvt_uint32 get_mask = 0;
    cuif_uint8 nID = 0;
    cuif_uint8 irq_num = 0;

    for (nID = 0; nID < CUIF_ENUM_ALL_MCU_INT_NUM - 1; nID++)
    {
        for(irq_num = 0; irq_num < cuif_u2c_int_source_num[nID]; irq_num++)
        {
            write_mask = 1 << irq_num;
            total_mask |= write_mask;
            // set enable reg by bit
            CUIF_REG_WRITE(CUIF_U2C_EN_SET_BASE + REG_OFFSET(nID), write_mask);
            get_mask = CUIF_REG_READ(CUIF_U2C_EN_BASE + REG_OFFSET(nID));
            SSDVT_ASSERT_EQ(get_mask, total_mask);
        }

        for(irq_num = 0; irq_num < cuif_u2c_int_source_num[nID]; irq_num++)
        {
            write_mask = 1 << irq_num;
            total_mask &= ~(write_mask);
            // clear enable reg by bit
            CUIF_REG_WRITE(CUIF_U2C_EN_CLR_BASE + REG_OFFSET(nID), write_mask);
            get_mask = CUIF_REG_READ(CUIF_U2C_EN_BASE + REG_OFFSET(nID));
            SSDVT_ASSERT_EQ(get_mask, total_mask);
        }
        SSDVT_ASSERT_EQ(get_mask, 0x0);
        dbg_print("n %d enable reg test - Pass\n", nID);
    }
    
}


void CUIF_U2C_STATUS_REG_TEST()
{
    ssdvt_uint32 write_mask = 0;
    ssdvt_uint32 total_mask = 0;
    ssdvt_uint32 get_mask = 0;
    cuif_uint8 nID = 0;
    cuif_uint8 irq_num = 0;

    for (nID = 0; nID < CUIF_ENUM_ALL_MCU_INT_NUM - 1; nID++)
    {
#if defined(__MD95__)
        irq_num = (0 == nID || 5 == nID || 6 == nID) ? 6 : 0;
#else
        irq_num = (0 == nID || 4 == nID) ? 4 : 0;
#endif
        for(; irq_num < cuif_u2c_int_source_num[nID]; irq_num++)
        {
            write_mask = 1 << irq_num;
            total_mask |= write_mask;
            // set status by bit
            CUIF_REG_WRITE(CUIF_U2C_SET_BASE + REG_OFFSET(nID), write_mask);
            get_mask = CUIF_REG_READ(CUIF_U2C_STATUS_BASE + REG_OFFSET(nID));
            SSDVT_ASSERT_EQ(get_mask, total_mask);
        }
#if defined(__MD95__)
        irq_num = (0 == nID || 5 == nID || 6 == nID) ? 6 : 0;
#else
        irq_num = (0 == nID || 4 == nID) ? 4 : 0;
#endif

        for(; irq_num < cuif_u2c_int_source_num[nID]; irq_num++)
        {
            write_mask = 1 << irq_num;
            total_mask &= ~(write_mask);
            // clear status by bit
            CUIF_REG_WRITE(CUIF_U2C_CLEAR_BASE + REG_OFFSET(nID), write_mask);
            get_mask = CUIF_REG_READ(CUIF_U2C_STATUS_BASE + REG_OFFSET(nID));
            SSDVT_ASSERT_EQ(get_mask, total_mask);
        }

        SSDVT_ASSERT_EQ(get_mask, 0x0);
        dbg_print("n %d status reg test - Pass\n", nID);
    }
    
}

void SSDVT_CUIF_REG_TEST_L1core()
{
    CUIF_U2C_ENABLE_REG_TEST();
    CUIF_U2C_STATUS_REG_TEST(); 
}


void SSDVT_CUIF_RamTest_USIP0()
{
    cuif_test_internal(0, 1, &cuif_usip0);

    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 0xFF);
}

void SSDVT_CUIF_RamTest_USIP1()
{
    ssdvt_mem_test_current_status_base = 0x2000;
    ssdvt_mem_test_type = SSDVT_MEM_CUIF_TEST_TYPE;
    ssdvt_mem_test_mem_range_num = 0x0;

    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base);

    cuif_test_internal(0, 1, &cuif_usip1);

    /* reset test type */
    ssdvt_mem_test_type = SSDVT_MEM_NO_TEST_TYPE;
    ssdvt_mem_test_current_status_base = 0x0;
    ssdvt_mem_test_mem_range_num = 0x0;

    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 0xFF);
}


/*******************************************************************************
* CUIF Interrupt Test 
*******************************************************************************/

void SSDVT_CUIF_L1_WAKEUP_USIP()
{
    
    switch (ssdvt_cuif_usip_module_testing)
    {
        case CUIF_ENUM_INNER:
            // send c2u interrupt to to wake up usip
            CUIF_REG_WRITE(SSDVT_CUIF_C2U_INNER_EN_SET, 0x1);
            CUIF_REG_WRITE(SSDVT_CUIF_C2U_INNER_STATUS_SET, 0x1);
            break;
        case CUIF_ENUM_OUTER:
            // send c2u interrupt to to wake up usip
            CUIF_REG_WRITE(SSDVT_CUIF_C2U_OUTER_EN_SET, 0x1);
            CUIF_REG_WRITE(SSDVT_CUIF_C2U_OUTER_STATUS_SET, 0x1);
            break;
        case CUIF_ENUM_FEC:
            // send c2u interrupt to to wake up usip
            CUIF_REG_WRITE(SSDVT_CUIF_C2U_FEC_EN_SET, 0x1);
            CUIF_REG_WRITE(SSDVT_CUIF_C2U_FEC_STATUS_SET, 0x1);
            break;
        case CUIF_ENUM_SPEECH:
            // send c2u interrupt to to wake up usip
            CUIF_REG_WRITE(SSDVT_CUIF_C2U_SPEECH_EN_SET, 0x1);
            CUIF_REG_WRITE(SSDVT_CUIF_C2U_SPEECH_STATUS_SET, 0x1);
            break;
        default:
            dbg_print("strange module when wfi testing, check it\n");
            ERROR_LOOP;
            break;
            
    }
    

}

void SSDVT_CUIF_InterruptTestISR_N0()
{
    ssdvt_uint32 status;
    status = CUIF_REG_READ(SSDVT_CUIF_U2C_N0_STATUS);
    CUIF_REG_WRITE(SSDVT_CUIF_U2C_N0_STATUS_CLR, status);
    CUIF_REG_WRITE(SSDVT_CUIF_U2C_N0_EN_CLR, status);
    
    if (ssdvt_cuif_wfi_testing == 0) {        
        if (ssdvt_cuif_usip_core_testing == 0) {
            CUIF_REG_WRITE(SSDVT_CUIF_USIP0_U2C_N0_CHECK, SSDVT_CUIF_GET_LSB(status)+1);
        }
        else {
            CUIF_REG_WRITE(SSDVT_CUIF_USIP1_U2C_N0_CHECK, SSDVT_CUIF_GET_LSB(status)+1);
        }
    }
    else {
        if (ssdvt_cuif_usip_core_testing == 0) {
            CUIF_REG_WRITE(SSDVT_CUIF_USIP0_U2C_N0_WFI_CHECK, SSDVT_CUIF_U2C_WFI_ISR_CHECK_PATTERN);
        }
        else {
            CUIF_REG_WRITE(SSDVT_CUIF_USIP1_U2C_N0_WFI_CHECK, SSDVT_CUIF_U2C_WFI_ISR_CHECK_PATTERN);                
        }
        SSDVT_CUIF_L1_WAKEUP_USIP();
    }
}

void SSDVT_CUIF_InterruptTestISR_N1()
{
    ssdvt_uint32 status;
    status = CUIF_REG_READ(SSDVT_CUIF_U2C_N1_STATUS);
    CUIF_REG_WRITE(SSDVT_CUIF_U2C_N1_STATUS_CLR, status);
    CUIF_REG_WRITE(SSDVT_CUIF_U2C_N1_EN_CLR, status);
    if (ssdvt_cuif_usip_core_testing == 0) {
        CUIF_REG_WRITE(SSDVT_CUIF_USIP0_U2C_N1_CHECK, SSDVT_CUIF_GET_LSB(status)+1);
    }
    else {
        CUIF_REG_WRITE(SSDVT_CUIF_USIP1_U2C_N1_CHECK, SSDVT_CUIF_GET_LSB(status)+1);
    }
}

void SSDVT_CUIF_InterruptTestISR_N2()
{
    ssdvt_uint32 status;
    status = CUIF_REG_READ(SSDVT_CUIF_U2C_N2_STATUS);
    CUIF_REG_WRITE(SSDVT_CUIF_U2C_N2_STATUS_CLR, status);
    CUIF_REG_WRITE(SSDVT_CUIF_U2C_N2_EN_CLR, status);
    if (ssdvt_cuif_usip_core_testing == 0) {
        CUIF_REG_WRITE(SSDVT_CUIF_USIP0_U2C_N2_CHECK, SSDVT_CUIF_GET_LSB(status)+1);
    }
    else {
        CUIF_REG_WRITE(SSDVT_CUIF_USIP1_U2C_N2_CHECK, SSDVT_CUIF_GET_LSB(status)+1);
    }
}

void SSDVT_CUIF_InterruptTestISR_N3()
{
    ssdvt_uint32 status;
    status = CUIF_REG_READ(SSDVT_CUIF_U2C_N3_STATUS);
    CUIF_REG_WRITE(SSDVT_CUIF_U2C_N3_STATUS_CLR, status);
    CUIF_REG_WRITE(SSDVT_CUIF_U2C_N3_EN_CLR, status);
    if (ssdvt_cuif_usip_core_testing == 0) {
        CUIF_REG_WRITE(SSDVT_CUIF_USIP0_U2C_N3_CHECK, SSDVT_CUIF_GET_LSB(status)+1);
    }
    else {
        CUIF_REG_WRITE(SSDVT_CUIF_USIP1_U2C_N3_CHECK, SSDVT_CUIF_GET_LSB(status)+1);
    }
}
#if defined(__MD95__)
void SSDVT_CUIF_InterruptTestISR_N4()
{
    ssdvt_uint32 status;
    status = CUIF_REG_READ(SSDVT_CUIF_U2C_N4_STATUS);
    CUIF_REG_WRITE(SSDVT_CUIF_U2C_N4_STATUS_CLR, status);
    CUIF_REG_WRITE(SSDVT_CUIF_U2C_N4_EN_CLR, status);
    if (ssdvt_cuif_usip_core_testing == 0) {
        CUIF_REG_WRITE(SSDVT_CUIF_USIP0_U2C_N4_CHECK, SSDVT_CUIF_GET_LSB(status)+1);
    }
    else {
        CUIF_REG_WRITE(SSDVT_CUIF_USIP1_U2C_N4_CHECK, SSDVT_CUIF_GET_LSB(status)+1);
    }
}

void SSDVT_CUIF_InterruptTestISR_N5()
{
    ssdvt_uint32 status;
    status = CUIF_REG_READ(SSDVT_CUIF_U2C_N5_STATUS);
    CUIF_REG_WRITE(SSDVT_CUIF_U2C_N5_STATUS_CLR, status);
    CUIF_REG_WRITE(SSDVT_CUIF_U2C_N5_EN_CLR, status);

    if (ssdvt_cuif_wfi_testing == 0) {        
        if (ssdvt_cuif_usip_core_testing == 0) {
            CUIF_REG_WRITE(SSDVT_CUIF_USIP0_U2C_N5_CHECK, SSDVT_CUIF_GET_LSB(status)+1);
        }
        else {
            CUIF_REG_WRITE(SSDVT_CUIF_USIP1_U2C_N5_CHECK, SSDVT_CUIF_GET_LSB(status)+1);
        }
    }
    else {
        if (ssdvt_cuif_usip_core_testing == 0) {
            CUIF_REG_WRITE(SSDVT_CUIF_USIP0_U2C_N5_WFI_CHECK, SSDVT_CUIF_U2C_WFI_ISR_CHECK_PATTERN);
        }
        else {
            CUIF_REG_WRITE(SSDVT_CUIF_USIP1_U2C_N5_WFI_CHECK, SSDVT_CUIF_U2C_WFI_ISR_CHECK_PATTERN);
        }
        SSDVT_CUIF_L1_WAKEUP_USIP();
    }
}

void SSDVT_CUIF_InterruptTestISR_N6()
{
    ssdvt_uint32 status;
    status = CUIF_REG_READ(SSDVT_CUIF_U2C_N6_STATUS);
    CUIF_REG_WRITE(SSDVT_CUIF_U2C_N6_STATUS_CLR, status);
    CUIF_REG_WRITE(SSDVT_CUIF_U2C_N6_EN_CLR, status);

    if (ssdvt_cuif_wfi_testing == 0) {        
        if (ssdvt_cuif_usip_core_testing == 0) {
            CUIF_REG_WRITE(SSDVT_CUIF_USIP0_U2C_N6_CHECK, SSDVT_CUIF_GET_LSB(status)+1);
        }
        else {
            CUIF_REG_WRITE(SSDVT_CUIF_USIP1_U2C_N6_CHECK, SSDVT_CUIF_GET_LSB(status)+1);
        }
    }
    else {
        if (ssdvt_cuif_usip_core_testing == 0) {
            CUIF_REG_WRITE(SSDVT_CUIF_USIP0_U2C_N6_WFI_CHECK, SSDVT_CUIF_U2C_WFI_ISR_CHECK_PATTERN);
        }
        else {
            CUIF_REG_WRITE(SSDVT_CUIF_USIP1_U2C_N6_WFI_CHECK, SSDVT_CUIF_U2C_WFI_ISR_CHECK_PATTERN);
        }
        SSDVT_CUIF_L1_WAKEUP_USIP();
    }
}


#else
void SSDVT_CUIF_InterruptTestISR_N4()
{
    ssdvt_uint32 status;
    status = CUIF_REG_READ(SSDVT_CUIF_U2C_N4_STATUS);
    CUIF_REG_WRITE(SSDVT_CUIF_U2C_N4_STATUS_CLR, status);
    CUIF_REG_WRITE(SSDVT_CUIF_U2C_N4_EN_CLR, status);

    if (ssdvt_cuif_wfi_testing == 0) {        
        if (ssdvt_cuif_usip_core_testing == 0) {
            CUIF_REG_WRITE(SSDVT_CUIF_USIP0_U2C_N4_CHECK, SSDVT_CUIF_GET_LSB(status)+1);
        }
        else {
            CUIF_REG_WRITE(SSDVT_CUIF_USIP1_U2C_N4_CHECK, SSDVT_CUIF_GET_LSB(status)+1);
        }
    }
    else {
        if (ssdvt_cuif_usip_core_testing == 0) {
            CUIF_REG_WRITE(SSDVT_CUIF_USIP0_U2C_N4_WFI_CHECK, SSDVT_CUIF_U2C_WFI_ISR_CHECK_PATTERN);
        }
        else {
            CUIF_REG_WRITE(SSDVT_CUIF_USIP1_U2C_N4_WFI_CHECK, SSDVT_CUIF_U2C_WFI_ISR_CHECK_PATTERN);
        }
        SSDVT_CUIF_L1_WAKEUP_USIP();
    }
}
#endif
ssdvt_uint32 SSDVT_get_irq_num_L1core(volatile ssdvt_uint32* irq_check)
{
    ssdvt_uint32 irq_num = 0;
    if (SSDVT_CUIF_USIP0_C2U_U0_CHECK == irq_check) {
        irq_num = CUIF_NUM_INTERRUPT_INNER_SOURCES;
    }
    else if (SSDVT_CUIF_USIP0_C2U_U1_CHECK == irq_check) {
        irq_num = CUIF_NUM_INTERRUPT_OUTER_SOURCES;
    }
    else if (SSDVT_CUIF_USIP1_C2U_U2_CHECK == irq_check) {
        irq_num = CUIF_NUM_INTERRUPT_FEC_SOURCES;
    }
    else if (SSDVT_CUIF_USIP1_C2U_U3_CHECK == irq_check) {
        irq_num = CUIF_NUM_INTERRUPT_SPEECH_SOURCES;
    }
    else if (SSDVT_CUIF_USIP0_U2C_N0_CHECK == irq_check || SSDVT_CUIF_USIP1_U2C_N0_CHECK == irq_check) {
        irq_num = CUIF_MCU_INT_N0_SOURCES;
    }
    else if (SSDVT_CUIF_USIP0_U2C_N1_CHECK == irq_check || SSDVT_CUIF_USIP1_U2C_N1_CHECK == irq_check) {
        irq_num = CUIF_MCU_INT_N1_SOURCES;
    }
    else if (SSDVT_CUIF_USIP0_U2C_N2_CHECK == irq_check || SSDVT_CUIF_USIP1_U2C_N2_CHECK == irq_check) {
        irq_num = CUIF_MCU_INT_N2_SOURCES;
    }
    else if (SSDVT_CUIF_USIP0_U2C_N3_CHECK == irq_check || SSDVT_CUIF_USIP1_U2C_N3_CHECK == irq_check) {
        irq_num = CUIF_MCU_INT_N3_SOURCES;
    }
    else if (SSDVT_CUIF_USIP0_U2C_N4_CHECK == irq_check || SSDVT_CUIF_USIP1_U2C_N4_CHECK == irq_check) {
        irq_num = CUIF_MCU_INT_N4_SOURCES;
    }
#if defined(__MD95__)
    else if (SSDVT_CUIF_USIP0_U2C_N5_CHECK == irq_check || SSDVT_CUIF_USIP1_U2C_N5_CHECK == irq_check) {
        irq_num = CUIF_MCU_INT_N5_SOURCES;
    }
    else if (SSDVT_CUIF_USIP0_U2C_N6_CHECK == irq_check || SSDVT_CUIF_USIP1_U2C_N6_CHECK == irq_check) {
        irq_num = CUIF_MCU_INT_N6_SOURCES;
    }
#endif
    else
    {
        dbg_print("strange irq check, check it\n");
        ERROR_LOOP;
    }

    return irq_num;
}


void SSDVT_CUIF_InterruptTestInternal_L1core(ssdvt_uint32 master,
                                             volatile ssdvt_uint32* irq_set,
                                             volatile ssdvt_uint32* en_set,
                                             volatile ssdvt_uint32* irq_check,
                                             volatile ssdvt_uint32* sync)
{
    // master == 1: send interrupt
    // master == 0: receive interrupt

    volatile ssdvt_uint32 i;
    volatile ssdvt_uint32 wait;
    volatile ssdvt_uint32 irq_bits_num = SSDVT_get_irq_num_L1core(irq_check);

    if(master == 1){
        *(irq_check) = 0xFFFFFFFF;
    
        // send interrupt
        for(i = 0; i < irq_bits_num; ++i){
            SSDVT_SET_CURRENT_STATUS(0xB000 + ssdvt_cuif_interrupt_test_case_num + i);
            dbg_print(".... send interrupt %d ... ", i);

            // start sync
            cuif_test_sync(0, sync);

            *(irq_set) = (1 << i);

            // make sure before enable, the interrupt won't be triggerred
            SSDVT_DELAY_LOOP(SSDVT_CUIF_INTERRUPT_WAIT_LOOP_COUNT);

            if(*(irq_check) != i+1){
                dbg_print("enable test ok\n");
            }
            else{
                dbg_print("enable test fail\n");
                ERROR_LOOP;
            }

            *(en_set) = (1 << i);

            
            wait = SSDVT_CUIF_INTERRUPT_WAIT_LOOP_COUNT;
            do{
                wait--; 
            }while(wait != 0 && *(irq_check) != i+1);
            
            if(*(irq_check) == i+1){
                dbg_print("success\n");
            }
            else{
                dbg_print("error\n");
                ERROR_LOOP;
            }

            // end sync
            cuif_test_sync(0, sync);
        }
    }
    else{
#if defined(__MD95__)
        // N0/N5/N6 skip wfi 6 bits
        if (SSDVT_CUIF_USIP0_U2C_N0_CHECK == irq_check || SSDVT_CUIF_USIP1_U2C_N0_CHECK == irq_check
            || SSDVT_CUIF_USIP0_U2C_N5_CHECK == irq_check || SSDVT_CUIF_USIP1_U2C_N5_CHECK == irq_check
            || SSDVT_CUIF_USIP0_U2C_N6_CHECK == irq_check || SSDVT_CUIF_USIP1_U2C_N6_CHECK == irq_check) {
            i = 6;
        }
#else
        // N0, N4, skip wfi 4 bits
        if (SSDVT_CUIF_USIP0_U2C_N0_CHECK == irq_check || SSDVT_CUIF_USIP1_U2C_N0_CHECK == irq_check
            || SSDVT_CUIF_USIP0_U2C_N4_CHECK == irq_check || SSDVT_CUIF_USIP1_U2C_N4_CHECK == irq_check) {
            i = 4;
        }
#endif
        else {
            i = 0;
        }
        // receive interrupt
        for(; i < irq_bits_num; ++i){
            SSDVT_SET_CURRENT_STATUS(0xB000 + ssdvt_cuif_interrupt_test_case_num + i);
            dbg_print(".... recive interrupt %d ... ", i);

            // start sync
            cuif_test_sync(0, sync);

            while(*(irq_check) != i+1);

            // check interrupt enter in order
            SSDVT_ASSERT_EQ(*(irq_check), i+1);
            dbg_print("success\n");

            // end sync
            cuif_test_sync(0, sync);
        }
        *(irq_check) = 0;
    }
}

void SSDVT_CUIF_InterruptTestRegisterISR_L1CORE()
{
    IRQ_Register_LISR(IRQID_CUIF_U2C_IRQ_N0	, SSDVT_CUIF_InterruptTestISR_N0, "SSDVT_CUIF_U2C_N0");
    IRQSensitivity(IRQID_CUIF_U2C_IRQ_N0	, LEVEL_SENSITIVE);
    IRQUnmask(IRQID_CUIF_U2C_IRQ_N0);

    IRQ_Register_LISR(IRQID_CUIF_U2C_IRQ_N1	, SSDVT_CUIF_InterruptTestISR_N1, "SSDVT_CUIF_U2C_N1");
    IRQSensitivity(IRQID_CUIF_U2C_IRQ_N1	, LEVEL_SENSITIVE);
    IRQUnmask(IRQID_CUIF_U2C_IRQ_N1);

    IRQ_Register_LISR(IRQID_CUIF_U2C_IRQ_N2	, SSDVT_CUIF_InterruptTestISR_N2, "SSDVT_CUIF_U2C_N2");
    IRQSensitivity(IRQID_CUIF_U2C_IRQ_N2	, LEVEL_SENSITIVE);
    IRQUnmask(IRQID_CUIF_U2C_IRQ_N2);

    IRQ_Register_LISR(IRQID_CUIF_U2C_IRQ_N3	, SSDVT_CUIF_InterruptTestISR_N3, "SSDVT_CUIF_U2C_N3");
    IRQSensitivity(IRQID_CUIF_U2C_IRQ_N3	, LEVEL_SENSITIVE);
    IRQUnmask(IRQID_CUIF_U2C_IRQ_N3);

    IRQ_Register_LISR(IRQID_CUIF_U2C_IRQ_N4	, SSDVT_CUIF_InterruptTestISR_N4, "SSDVT_CUIF_U2C_N4");
    IRQSensitivity(IRQID_CUIF_U2C_IRQ_N4	, LEVEL_SENSITIVE);
    IRQUnmask(IRQID_CUIF_U2C_IRQ_N4);

#if defined(__MD95__)
    IRQ_Register_LISR(IRQID_CUIF_U2C_IRQ_N5 , SSDVT_CUIF_InterruptTestISR_N5, "SSDVT_CUIF_U2C_N5");
    IRQSensitivity(IRQID_CUIF_U2C_IRQ_N5    , LEVEL_SENSITIVE);
    IRQUnmask(IRQID_CUIF_U2C_IRQ_N5);

    IRQ_Register_LISR(IRQID_CUIF_U2C_IRQ_N6 , SSDVT_CUIF_InterruptTestISR_N6, "SSDVT_CUIF_U2C_N6");
    IRQSensitivity(IRQID_CUIF_U2C_IRQ_N6    , LEVEL_SENSITIVE);
    IRQUnmask(IRQID_CUIF_U2C_IRQ_N6);
#endif
}



void SSDVT_CUIF_U2C_InterruptTest()
{
    volatile ssdvt_uint32_p n0_check = (ssdvt_cuif_usip_core_testing == 0) ? SSDVT_CUIF_USIP0_U2C_N0_CHECK : SSDVT_CUIF_USIP1_U2C_N0_CHECK;
    volatile ssdvt_uint32_p n1_check = (ssdvt_cuif_usip_core_testing == 0) ? SSDVT_CUIF_USIP0_U2C_N1_CHECK : SSDVT_CUIF_USIP1_U2C_N1_CHECK;
    volatile ssdvt_uint32_p n2_check = (ssdvt_cuif_usip_core_testing == 0) ? SSDVT_CUIF_USIP0_U2C_N2_CHECK : SSDVT_CUIF_USIP1_U2C_N2_CHECK;
    volatile ssdvt_uint32_p n3_check = (ssdvt_cuif_usip_core_testing == 0) ? SSDVT_CUIF_USIP0_U2C_N3_CHECK : SSDVT_CUIF_USIP1_U2C_N3_CHECK;
    volatile ssdvt_uint32_p n4_check = (ssdvt_cuif_usip_core_testing == 0) ? SSDVT_CUIF_USIP0_U2C_N4_CHECK : SSDVT_CUIF_USIP1_U2C_N4_CHECK;
#if defined(__MD95__)
    volatile ssdvt_uint32_p n5_check = (ssdvt_cuif_usip_core_testing == 0) ? SSDVT_CUIF_USIP0_U2C_N5_CHECK : SSDVT_CUIF_USIP1_U2C_N5_CHECK;
    volatile ssdvt_uint32_p n6_check = (ssdvt_cuif_usip_core_testing == 0) ? SSDVT_CUIF_USIP0_U2C_N6_CHECK : SSDVT_CUIF_USIP1_U2C_N6_CHECK;
#endif
    volatile ssdvt_uint32_p sync_addr = (ssdvt_cuif_usip_core_testing == 0) ? cuif_usip0.sync : cuif_usip1.sync;
    
    dbg_print("interrupt test - to L1 N0 start!\n");
    // receive u2c interrupt from USIP
    ssdvt_cuif_interrupt_test_case_num = 0x100;
    SSDVT_CUIF_InterruptTestInternal(0, NULL, NULL, n0_check, sync_addr);
    dbg_print("interrupt test - to L1 N0 pass!\n");

    dbg_print("interrupt test - to L1 N1 start!\n");
    // receive u2c interrupt from USIP
    ssdvt_cuif_interrupt_test_case_num = 0x200;
    SSDVT_CUIF_InterruptTestInternal(0, NULL, NULL, n1_check, sync_addr);
    dbg_print("interrupt test - to L1 N1 pass!\n");

    dbg_print("interrupt test - inner to L1 N2 start!\n");
    // receive u2c interrupt from USIP
    ssdvt_cuif_interrupt_test_case_num = 0x300;
    SSDVT_CUIF_InterruptTestInternal(0, NULL, NULL, n2_check, sync_addr);
    dbg_print("interrupt test - to L1 N2 pass!\n");


    dbg_print("interrupt test - to L1 N3 start!\n");
    // receive u2c interrupt from USIP
    ssdvt_cuif_interrupt_test_case_num = 0x400;
    SSDVT_CUIF_InterruptTestInternal(0, NULL, NULL, n3_check, sync_addr);
    dbg_print("interrupt test - to L1 N3 pass!\n");


    dbg_print("interrupt test - to L1 N4 start!\n");
    // receive u2c interrupt from USIP
    ssdvt_cuif_interrupt_test_case_num = 0x500;
    SSDVT_CUIF_InterruptTestInternal(0, NULL, NULL, n4_check, sync_addr);
    dbg_print("interrupt test - to L1 N4 pass!\n");

#if defined(__MD95__)
    dbg_print("interrupt test - to L1 N5 start!\n");
    // receive u2c interrupt from USIP
    ssdvt_cuif_interrupt_test_case_num = 0x600;
    SSDVT_CUIF_InterruptTestInternal(0, NULL, NULL, n5_check, sync_addr);
    dbg_print("interrupt test - to L1 N5 pass!\n");


    dbg_print("interrupt test - to L1 N6 start!\n");
    // receive u2c interrupt from USIP
    ssdvt_cuif_interrupt_test_case_num = 0x700;
    SSDVT_CUIF_InterruptTestInternal(0, NULL, NULL, n6_check, sync_addr);
    dbg_print("interrupt test - to L1 N6 pass!\n");
#endif   
}

// if no enable set, the wfi interrupt should be triggerred
void SSDVT_CUIF_CHECK_NO_WFI_INTERRUPT(volatile ssdvt_uint32 *wfi_check)
{
    volatile ssdvt_uint32 wfi_bit = 0x1 << ssdvt_cuif_usip_module_testing;
#if defined(__MD95__)
    // the 0~5 bit of N0/N5/N6 should be set when USIP WFI
    while (!((*(SSDVT_CUIF_U2C_N0_STATUS) & wfi_bit) && ((*SSDVT_CUIF_U2C_N5_STATUS) & wfi_bit) && ((*SSDVT_CUIF_U2C_N6_STATUS) & wfi_bit)));

#else
    // the 0~3 bit of N0 and N4 should be set when USIP WFI
    while (!((*(SSDVT_CUIF_U2C_N0_STATUS) & wfi_bit) && ((*SSDVT_CUIF_U2C_N4_STATUS) & wfi_bit)));
#endif
    
    SSDVT_DELAY_LOOP(2000);

    // make sure the interrupt handler not be triggerred
    if (*(wfi_check) == SSDVT_CUIF_U2C_WFI_ISR_CHECK_PATTERN) {
        dbg_print("no enable but trigger wfi interrupt");
        ERROR_LOOP;
    }

    SSDVT_CUIF_L1_WAKEUP_USIP();
}

#if defined(__MD95__)
#define SSDVT_CUIF_WFT_NUM    3
#else
#define SSDVT_CUIF_WFT_NUM    2
#endif

ssdvt_uint32 ssdvt_cuif_wfi_test_setting[SSDVT_CUIF_WFT_NUM][2] = {
    {SSDVT_CUIF_USIP0_U2C_N0_WFI_CHECK, SSDVT_CUIF_USIP1_U2C_N0_WFI_CHECK},
#if defined(__MD95__)
    {SSDVT_CUIF_USIP0_U2C_N5_WFI_CHECK, SSDVT_CUIF_USIP1_U2C_N5_WFI_CHECK},
    {SSDVT_CUIF_USIP0_U2C_N6_WFI_CHECK, SSDVT_CUIF_USIP1_U2C_N6_WFI_CHECK},
#else
    {SSDVT_CUIF_USIP0_U2C_N4_WFI_CHECK, SSDVT_CUIF_USIP1_U2C_N4_WFI_CHECK},
#endif
};


/*
WFI test flow overview:
uSIP: WFI (no enable)
MCU: check status bit is set and no interrupt was triggerred
        wake up uSIP
uSIP: enable bit set (N0 or N4); WFI
MCU: trap in while loop until interrupt was teiggerred
        interrupt handler write special pattern
uSIP: wakeup; check pattern
*/
void SSDVT_CUIF_U2C_WFI_Test_L1core(){
    volatile ssdvt_uint32 mcu_vpe;
    volatile ssdvt_uint32 *wfi_check;
    volatile ssdvt_uint32_p sync_addr = (ssdvt_cuif_usip_core_testing == 0) ? cuif_usip0.sync : cuif_usip1.sync;

    ssdvt_cuif_wfi_testing = 1;
    //only N0 & N4 can get WFI interrupt
    for (mcu_vpe = 0; mcu_vpe < SSDVT_CUIF_WFT_NUM; mcu_vpe++)
    {
        wfi_check = ssdvt_cuif_wfi_test_setting[mcu_vpe][ssdvt_cuif_usip_core_testing];
        
        // sync first
        cuif_test_sync(0, sync_addr);

        SSDVT_CUIF_CHECK_NO_WFI_INTERRUPT(wfi_check);

        while(*(wfi_check) != SSDVT_CUIF_U2C_WFI_ISR_CHECK_PATTERN) ;

    }
    ssdvt_cuif_wfi_testing = 0;
}

void SSDVT_CUIF_InterruptTest_L1core()
{
    SSDVT_CUIF_InterruptTestRegisterISR_L1CORE();

   /*
      test with usip core 0
    */
    //inner
    dbg_print("inner interrupt test stating!\n");
    SSDVT_CUIF_U2C_InterruptTest();

    dbg_print("interrupt test - from L1 start!\n");
    // send c2u interrupt to USIP
    ssdvt_cuif_interrupt_test_case_num = 0x900;
    SSDVT_CUIF_InterruptTestInternal(1, SSDVT_CUIF_C2U_INNER_STATUS_SET, SSDVT_CUIF_C2U_INNER_EN_SET, SSDVT_CUIF_USIP0_C2U_U0_CHECK, cuif_usip0.sync);
    dbg_print("interrupt test - from L1 inner pass!\n");

    ssdvt_cuif_usip_module_testing = CUIF_ENUM_INNER;
    SSDVT_CUIF_U2C_WFI_Test_L1core();

    //brp
    dbg_print("brp interrupt test stating!\n");

    SSDVT_CUIF_U2C_InterruptTest();

    dbg_print("interrupt test - from L1 start!\n");
    // send c2u interrupt to USIP
    ssdvt_cuif_interrupt_test_case_num = 0x900;
    SSDVT_CUIF_InterruptTestInternal(1, SSDVT_CUIF_C2U_OUTER_STATUS_SET, SSDVT_CUIF_C2U_OUTER_EN_SET, SSDVT_CUIF_USIP0_C2U_U1_CHECK, cuif_usip0.sync);
    dbg_print("interrupt test - from L1 inner pass!\n");

    ssdvt_cuif_usip_module_testing = CUIF_ENUM_OUTER;
    SSDVT_CUIF_U2C_WFI_Test_L1core();


    /*
       test with usip core 1
     */
    ssdvt_cuif_usip_core_testing = 1;
    cuif_test_sync(0, cuif_usip1.sync);

    dbg_print("usip1 mem test stating!\n");
    SSDVT_CUIF_RamTest_USIP1();


    //fec    
    dbg_print("fec interrupt test stating!\n");

    SSDVT_CUIF_U2C_InterruptTest();

    dbg_print("interrupt test - from L1 start!\n");
    // send c2u interrupt to USIP
    ssdvt_cuif_interrupt_test_case_num = 0x900;
    SSDVT_CUIF_InterruptTestInternal(1, SSDVT_CUIF_C2U_FEC_STATUS_SET, SSDVT_CUIF_C2U_FEC_EN_SET, SSDVT_CUIF_USIP1_C2U_U2_CHECK, cuif_usip1.sync);
    dbg_print("interrupt test - from L1 inner pass!\n");

    ssdvt_cuif_usip_module_testing = CUIF_ENUM_FEC;
    SSDVT_CUIF_U2C_WFI_Test_L1core();

    //speech
    dbg_print("speech interrupt test stating!\n");
    
    SSDVT_CUIF_U2C_InterruptTest();
    
    dbg_print("interrupt test - from L1 start!\n");
    // send c2u interrupt to USIP
    ssdvt_cuif_interrupt_test_case_num = 0xA00;
    SSDVT_CUIF_InterruptTestInternal(1, SSDVT_CUIF_C2U_SPEECH_STATUS_SET, SSDVT_CUIF_C2U_SPEECH_EN_SET, SSDVT_CUIF_USIP1_C2U_U3_CHECK, cuif_usip1.sync);
    dbg_print("interrupt test - from L1 inner pass!\n");

    ssdvt_cuif_usip_module_testing = CUIF_ENUM_SPEECH;
    SSDVT_CUIF_U2C_WFI_Test_L1core();

    dbg_print("all interrupt test pass!\n");
}

#endif /* #if defined(__SSDVT_CUIF_TEST__) */

