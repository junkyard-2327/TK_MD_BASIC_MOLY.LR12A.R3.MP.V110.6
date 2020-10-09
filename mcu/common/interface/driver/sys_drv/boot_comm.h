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
 *   boot_comm.h
 *
 * Project:
 * --------
 *   UMOLY_Software
 *
 * Description:
 * ------------
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
  *    Rev 1.0   Nov 30 2002 19:49:52   admin
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _BOOT_COMM_H
#define _BOOT_COMM_H

#define TEMP_UNCACHE_BOOTSTACK_BANK (0x00000000)
#define TEMP_UNCACHE_BOOTSTACK_MASK (0xF0000000)

#define BOOT_CORE0_SYS_STACK_SIZE       (1024)
#if !defined(__SINGLE_CORE__)
#define BOOT_CORE1_SYS_STACK_SIZE       (1024)
#endif

// bootup trace
#define VPE_BOOTUP_TRC_SIZE     (256) // bytes

#define BOOTUP_TRC_OFFSET       (1024*7)
#define BOOTUP_TRC_MAGIC        (0x746F6200) // ascii : nBOT

#define BOOTUP_TRC_ID_LEN       (10)
#define BOOTUP_TRC_ID_MASK      ((1<<BOOTUP_TRC_ID_LEN) - 1)
#define BOOTUP_TRC_FRC_MASK     (0xFFFFFFFF ^ BOOTUP_TRC_ID_MASK)

#define BASE_MD_FMA_ADDR        (GCR_CUSTOM_ADDR)
#define MD_USCNTI_VAL_ADDR      (BASE_MD_FMA_ADDR + 0x40)

#define  BOOTTRC_CCIF0_NEW_MAGIC_ADDR   (MDCCIF_BOOTTRC_DATA)
#define  BOOTTRC_CCIF0_NEW_VPE0_ADDR    (MDCCIF_BOOTTRC_DATA + 0x4*1)
#define  BOOTTRC_CCIF0_NEW_VPE1_ADDR    (MDCCIF_BOOTTRC_DATA + 0x4*3)
#define  BOOTTRC_CCIF0_NEW_VPE2_ADDR    (MDCCIF_BOOTTRC_DATA + 0x4*5)
#define  BOOTTRC_CCIF0_NEW_VPE3_ADDR    (MDCCIF_BOOTTRC_DATA + 0x4*7)
//#define  BOOTTRC_CCIF0_NEW_VPE4_ADDR    (MDCCIF_BOOTTRC_DATA + 0x4*9)
//#define  BOOTTRC_CCIF0_NEW_VPE5_ADDR    (MDCCIF_BOOTTRC_DATA + 0x4*11)

#define  BOOTTRC_CCIF0_OLD_MAGIC_ADDR   (MDCCIF_BOOTTRC_DATA + 0x4*9)
#define  BOOTTRC_CCIF0_OLD_VPE0_ADDR    (MDCCIF_BOOTTRC_DATA + 0x4*10)
#define  BOOTTRC_CCIF0_OLD_VPE1_ADDR    (MDCCIF_BOOTTRC_DATA + 0x4*11)
#define  BOOTTRC_CCIF0_OLD_VPE2_ADDR    (MDCCIF_BOOTTRC_DATA + 0x4*12)
#define  BOOTTRC_CCIF0_OLD_VPE3_ADDR    (MDCCIF_BOOTTRC_DATA + 0x4*13)

#if defined(__PROFILE_INIT__)
#define  PROFILE_INIT_ENTRY_COUNT 128
#define  PROFILE_INIT_VPE_SIZE    (PROFILE_INIT_ENTRY_COUNT * 0x8)
#endif

#endif  /* !_BOOT_COMM_H */

