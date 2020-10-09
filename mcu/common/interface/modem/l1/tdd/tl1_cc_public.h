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
 *   tl1_cc_public.h
 *
 * Project:
 * --------
 *   UMOLY_Software
 *
 * Description:
 * ------------
 *    TL1 cross core interface declare
 *****************************************************************************/
#ifndef  _TL1_CC_PUBLIC_H_
#define  _TL1_CC_PUBLIC_H_

#include "kal_general_types.h"

/*=======================================TL1 and DHL sharememory=================================*/
//gTdSharedRegisterDumpInfo[0]: dump memory num; gTdSharedRegisterDumpInfo[1]: address, gTdSharedRegisterDumpInfo[2]: size;
//gTdSharedRegisterDumpInfo[3]: address, gTdSharedRegisterDumpInfo[4]: size; ........
//DECLARE_SHARED_ARRAY(kal_uint32, gTdSharedRegisterDumpInfo, 128)
extern kal_uint32 gTdSharedRegisterDumpInfo[128];
//ONLY L1CORE call this API for set MEM DUMP INFO
#define TL1_SHARED_MEM_DUMP_INFO_TO_PCORE(dump_info_ptr, mem_num)        do{\
                                                                             volatile kal_uint32 *info_ptr; \
                                                                             info_ptr = (volatile kal_uint32 *)SHARED_pARRAY(gTdSharedRegisterDumpInfo); \
                                                                             *(volatile kal_uint32 *)info_ptr++ = mem_num; \
                                                                             kal_mem_cpy((void *)info_ptr, (void *)dump_info_ptr, (sizeof(kal_uint32)*mem_num*2)); \
                                                                         }while(0)
//for DHL call TL1's API do memory dump in PCORE
extern void GetTL1MemoryInfo(kal_uint32 **info, kal_uint16 *count);
extern kal_uint32 GetTL1MemoryAccessType(kal_uint32 mem_addr);      


#if 0    //MACRO API test pass, but no used because TL1 provide function API for DHL call
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/*===============================================================================================*/


/*======================================TDD efuse register for PCORE and L1CORE==================*/
//efuse register is AP view, efuse_md1_3g_tdd_disable
#if defined(TK6291)
#define TDD_HW_EFUSE_REGISTER                             (0x93700044)  //bit12 = 1, Disable 3G TDD(TDD_FEATURE_OFF)
#define TDD_FEATURE_OFF_BIT                               (12)
#endif

#if defined(MT6755)
#define TDD_HW_EFUSE_REGISTER                             (0xC0206044)  //bit5 = 1, Disable 3G TDD(TDD_FEATURE_OFF)
#define TDD_FEATURE_OFF_BIT                               (5)
#endif
#if defined(MT6797)
#define TDD_HW_EFUSE_REGISTER                             (0xC020604C)  //bit4 = 1, Disable 3G TDD(TDD_FEATURE_OFF)
#define TDD_FEATURE_OFF_BIT                               (4)
#endif

#if defined(__SMP_ARCH__)  //6292 project: ELBRUS
#define TDD_HW_EFUSE_REGISTER                             (0xA60F0350)  //bit13 = 1, Disable 3G TDD(TDD_FEATURE_OFF). MD side efuse register
#define TDD_FEATURE_OFF_BIT                               (13)
#endif

/*======================================TL1 provide efuse API====================================*/
#define TL1_READ_REG32(addr)                              (*(volatile kal_uint32 *)(addr))
#define TL1_WRITE_REG32(addr, data)                       ((*(volatile kal_uint32 *)(addr)) = (kal_uint32)(data))
/* if (TL1_IS_3G_TDD_EXIST() == KAL_TRUE), 3G TDD exist; if (TL1_IS_3G_TDD_EXIST() == KAL_FALSE), 3G TDD no exist; */
#if (defined(TK6291) || defined(ELBRUS)) && defined(__FPGA__)  //TK6291 V7 FPGA and ELBRUS FPGA no TDD HW, so return 3G TDD no exist
#define TL1_IS_3G_TDD_EXIST()                             (KAL_FALSE)
#elif defined(__UE_SIMULATOR__)  //UESIM doesn't support 3G TDD, so return 3G TDD no exist
#define TL1_IS_3G_TDD_EXIST()                             (KAL_FALSE)
#else
//#define TL1_IS_3G_TDD_EXIST()                             ((((TL1_READ_REG32(TDD_HW_EFUSE_REGISTER) >> TDD_FEATURE_OFF_BIT) & 0x1) == 1) ? (KAL_FALSE) : (KAL_TRUE))  //if 3G TDD Enabled, return KAL_TRUE; if 3G TDD Disabled, return KAL_FALSE;
#define TL1_IS_3G_TDD_EXIST()                             (KAL_TRUE)
#endif
/*======================================TL1 provide efuse API====================================*/
#endif  //#ifndef  _TL1_CC_PUBLIC_H_