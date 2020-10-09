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
 *   middleWare_task_config.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   This file provides the task configuration.
 *
 * Author:
 * -------
 *   
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
 * removed!
 * removed!

 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifdef TASK_PRIORITY_MACRO
 /*Put tasks for debug and test purpose only together to save priority*/
/*if debug_leak*/
#define TASK_PRIORITY_SSDEBUG      (KAL_PRIORITY_CLASS1  + 3)

#define TASK_PRIORITY_FT           (KAL_PRIORITY_CLASS3  + 6)

/* higher than UL2D. Universal Bin, "+2/+3" for both UL2D_FDD and UL2D_TDD */
#define TASK_PRIORITY_LTECSR       (KAL_PRIORITY_CLASS6  + 9)

#define TASK_PRIORITY_SLT_NL_00    (KAL_PRIORITY_CLASS11 + 9)

#ifdef MTK_SYSSERV_DEBUG
#define TASK_PRIORITY_SSDBG1       (KAL_PRIORITY_CLASS13 + 2)
#define TASK_PRIORITY_SSDBG2       (KAL_PRIORITY_CLASS13 + 3)
#endif /* MTK_SYSSERV_DEBUG */

#define TASK_PRIORITY_USBCORE      (KAL_PRIORITY_CLASS14 + 4)
#define TASK_PRIORITY_CLDMACORE    (KAL_PRIORITY_CLASS14 + 9)

#define TASK_PRIORITY_CCIFCORE     (KAL_PRIORITY_CLASS15 + 0)
#define TASK_PRIORITY_UARTCORE     (KAL_PRIORITY_CLASS15 + 2)
#define TASK_PRIORITY_GMMGR        (KAL_PRIORITY_CLASS15 + 3)

#define TASK_PRIORITY_VT           (KAL_PRIORITY_CLASS16 + 5)

#define TASK_PRIORITY_FTC          (KAL_PRIORITY_CLASS17 + 3)

/* L4 & FTC run in different boot mode */
#define TASK_PRIORITY_LBS          (KAL_PRIORITY_CLASS18 + 2)
#define TASK_PRIORITY_ETHERCORE    (KAL_PRIORITY_CLASS18 + 4)

#define TASK_PRIORITY_NMU          (KAL_PRIORITY_CLASS18 + 5)
#define TASK_PRIORITY_AOMGR	       (KAL_PRIORITY_CLASS18 + 6)

#define TASK_PRIORITY_USBCLASS     (KAL_PRIORITY_CLASS20 + 6)
#define TASK_PRIORITY_CCCIDEV      (KAL_PRIORITY_CLASS20 + 8)

#define TASK_PRIORITY_IPCORE       (KAL_PRIORITY_CLASS21 + 0)
#define TASK_PRIORITY_USBMSD       (KAL_PRIORITY_CLASS21 + 2)
#define TASK_PRIORITY_BTT          (KAL_PRIORITY_CLASS21 + 7)
#define TASK_PRIORITY_CCCIITDEV1   (KAL_PRIORITY_CLASS21 + 8)
#define TASK_PRIORITY_CCCIITDEV2   (KAL_PRIORITY_CLASS21 + 9)
#define TASK_PRIORITY_DPCOPRO      (KAL_PRIORITY_CLASS20 + 7)

#define TASK_PRIORITY_CCCIITDEV3   (KAL_PRIORITY_CLASS22 + 0)
#define TASK_PRIORITY_CCCIITDEV4   (KAL_PRIORITY_CLASS22 + 1)
#define TASK_PRIORITY_TTY_UT       (KAL_PRIORITY_CLASS22 + 2) // tty unit test1
#define TASK_PRIORITY_TTY_UT2      (KAL_PRIORITY_CLASS22 + 3) // tty unit test2
#define TASK_PRIORITY_TTY_UT3      (KAL_PRIORITY_CLASS22 + 4) // tty unit test3
#define TASK_PRIORITY_EXCP_TTYUT   (KAL_PRIORITY_CLASS22 + 6) // exception tty ut
#define TASK_PRIORITY_CCCIITFS     (KAL_PRIORITY_CLASS22 + 8)

#define TASK_PRIORITY_SYS_TEST     (KAL_PRIORITY_CLASS23 + 0)
#define TASK_PRIORITY_KPALV        (KAL_PRIORITY_CLASS22 + 5)

#define TASK_PRIORITY_LTASK        (KAL_PRIORITY_CLASS24 + 2)

#define TASK_PRIORITY_USBIDLE      (KAL_PRIORITY_CLASS24 + 7) // USB idle task
 
#else
 /*module id are divided into 3 parts. 
  * 1: module id that maps to task
  * 2: module id that maps to no task but can be used as src module id
  * to allocate ilm, like HISR's module id
  * 3: module id that is used to print trace only.  * */
 
/*************************Task CFG Begin****************/
/*task_indx_type*/
 
/* this is a fake task for task id grouping*/
task_index(INDX_MW_START = TASK_ID_MW_CODE_BEGIN)
/*module_type and mod_task_g*/
task_module_map(INDX_MW_START, MOD_MW_DUMMY_BEGIN = MOD_ID_MIDDLEWARE_CODE_BEGIN)
/*task's parameters*/
task_name("")
task_queue_name("")
task_priority(KAL_TASK_INITIAL_PRIORITY , KAL_TASK_INITIAL_PRIORITY)
task_stack_size(0)
null_task_create_entry(NULL)
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(0)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/
 

 
/*************************Task CFG Begin****************/
#ifdef MTK_SYSSERV_DEBUG
/*task_indx_type*/
task_index(INDX_SSDBG1) 
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_SSDBG1,MOD_DUMMY_SSDBG1)
#ifdef MTK_SYSSERV_DEBUG
//this is for codegen
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_SSDBG2,MOD_DUMMY_SSDBG2)
#endif

/*module_type and mod_task_g*/
task_module_map(INDX_SSDBG1, MOD_SSDBG1)

/*task's parameters*/
task_name("SS1DBG")
task_queue_name("SS1DBG Q")
task_priority(TASK_PRIORITY_SSDBG1 , KAL_TASK_INITIAL_PRIORITY )
task_stack_size(2048)
task_create_function(ssdbg1_create)
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
#endif
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
#ifdef MTK_SYSSERV_DEBUG
/*task_indx_type*/
task_index(INDX_SSDBG2) 
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
//task_module_map(INDX_SSDBG2,MOD_DUMMY_SSDBG2)
/*module_type and mod_task_g*/
task_module_map(INDX_SSDBG2, MOD_SSDBG2)

/*task's parameters*/
task_name("SS2DBG")
task_queue_name("SS2DBG Q")
#if ( defined(__NAND_FLASH_HARDWARE_TEST__) && defined(__NANDFDM_MULTI_INSTANCE__) \
        && defined(__NAND_FDM_50__) )
task_priority(TASK_PRIORITY_SSDBG1 + 1 , KAL_TASK_INITIAL_PRIORITY )
#else
task_priority(TASK_PRIORITY_SSDBG2 , KAL_TASK_INITIAL_PRIORITY )
#endif
task_stack_size(2048)
#if (defined(__NAND_FLASH_HARDWARE_TEST__) && defined(__NANDFDM_MULTI_INSTANCE__) && \
         defined(__NAND_FDM_50__)) \
    || (!defined (__NAND_FLASH_HARDWARE_TEST__) && !defined (__NOR_FLASH_HARDWARE_TEST__))
task_create_function(ssdbg2_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
#endif
/*************************Task CFG END******************/


/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_SYSDEBUG) 
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_SYSDEBUG,MOD_DUMMY_SYSDEBUG)
/*module_type and mod_task_g*/
task_module_map(INDX_SYSDEBUG, MOD_SYSDEBUG)

/*task's parameters*/
task_name("SYSDEBUG")
task_queue_name("SYSDEBUG Q")
task_priority(TASK_PRIORITY_SSDEBUG , KAL_TASK_INITIAL_PRIORITY )
task_stack_size(1536)
#if defined(DEBUG_LEAK) && !defined(__SYSDEBUG_TASK_DISABLE__)
task_create_function(sysdebug_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_VT) 
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_VT,MOD_DUMMY_VT)
/*module_type and mod_task_g*/
task_module_map(INDX_VT, MOD_VT)
#ifdef __GEMINI_WCDMA__
task_module_map(INDX_VT, MOD_VT_2)
#if (GEMINI_PLUS_WCDMA >= 3)
task_module_map(INDX_VT, MOD_VT_3)
#if (GEMINI_PLUS_WCDMA >= 4)
task_module_map(INDX_VT, MOD_VT_4)
#endif/*(GEMINI_PLUS_WCDMA >= 4)*/
#endif/*(GEMINI_PLUS_WCDMA >= 3)*/
#endif/*__GEMINI_WCDMA__*/
/*task's parameters*/
task_name("VT")
task_queue_name("VT Q")
task_priority(TASK_PRIORITY_VT , KAL_TASK_INITIAL_PRIORITY )
task_stack_size(1952)
#if defined(__VIDEO_CALL_SUPPORT__) && !defined(__VC_TASK_DISABLE__)
task_create_function(vt_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(50)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(VPE2_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_FT) 
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_FT,MOD_DUMMY_FT)
/*module_type and mod_task_g*/
task_module_map(INDX_FT, MOD_FT)
/*task's parameters*/
task_name("FT")
task_queue_name("FT Q")
task_priority(TASK_PRIORITY_FT , KAL_TASK_INITIAL_PRIORITY )
task_stack_size(3584)
#if defined(__MTK_TARGET__)  && !defined(__MAUI_BASIC__) && !defined(__FT_TASK_DISABLE__)
task_create_function(ft_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M | FACTORY_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_FTC) 
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_FTC,MOD_DUMMY_FTC)

/*module_type and mod_task_g*/
task_module_map(INDX_FTC, MOD_FTC)

/*task's parameters*/
task_name("FTC")
task_queue_name("FTC Q")
task_priority(TASK_PRIORITY_FTC , KAL_TASK_INITIAL_PRIORITY )
task_stack_size(1440)
#if defined(__MTK_TARGET__) && !defined(__MAUI_BASIC__) && !defined(__FTC_TASK_DISABLE__)
task_create_function(ftc_create)
#else
null_task_create_entry(NULL)
#endif 
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M | FACTORY_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_LBS)  
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_LBS,MOD_DUMMY_LBS)
/*module_type and mod_task_g*/
task_module_map(INDX_LBS, MOD_GPS)
task_module_map(INDX_LBS, MOD_LBS)

/*task's parameters*/
task_name("LBS")
task_queue_name("LBS Q")
task_priority(TASK_PRIORITY_LBS , KAL_TASK_INITIAL_PRIORITY )

#if defined(__MTK_TARGET__)
task_stack_size(4128)
#else
task_stack_size(10912)
#endif

#if !defined(LBS_NOT_PRESENT) && !defined(__LBS_TASK_DISABLE__)
task_create_function(lbs_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(40)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(VPE2_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_IPCORE)

/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_IPCORE, MOD_DUMMY_IPCORE)

/*module_type and mod_task_g*/
task_module_map(INDX_IPCORE, MOD_TFT_PF)
task_module_map(INDX_IPCORE, MOD_LTM_SIM)
task_module_map(INDX_IPCORE, MOD_TMC)
task_module_map(INDX_IPCORE, MOD_MDT)
task_module_map(INDX_IPCORE, MOD_IPC_FRAGMENT)

#if defined(__EUTEST_ENABLE__)
#else
    task_module_map(INDX_IPCORE, MOD_IPCORE)

    task_module_map(INDX_IPCORE, MOD_UPCM)
    #if defined(__GEMINI__)
    task_module_map(INDX_IPCORE, MOD_UPCM_2)
    #if (GEMINI_PLUS >= 3)
    task_module_map(INDX_IPCORE, MOD_UPCM_3)
    #if (GEMINI_PLUS >= 4)
    task_module_map(INDX_IPCORE, MOD_UPCM_4)
    #endif /* GEMINI_PLUS >= 4 */
    #endif /* GEMINI_PLUS >= 3 */
    #endif /* __GEMINI__ */   

    task_module_map(INDX_IPCORE, MOD_RATDM)
    #if defined(__GEMINI__) || defined(__SGLTE__)
    task_module_map(INDX_IPCORE, MOD_RATDM_2)
    #if (GEMINI_PLUS >= 3)
    task_module_map(INDX_IPCORE, MOD_RATDM_3)
    #if (GEMINI_PLUS >= 4)
    task_module_map(INDX_IPCORE, MOD_RATDM_4)
    #endif /* GEMINI_PLUS >= 4 */
    #endif /* GEMINI_PLUS >= 3 */
    #endif /* __GEMINI__ */
    
#endif

/*task's parameters*/
task_name("IPCORE")
task_queue_name("IPCORE Q")
task_priority(TASK_PRIORITY_IPCORE, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if defined(__IPCORE_SUPPORT__) && !defined(IPCORE_NOT_PRESENT) && !defined(__IPCORE_TASK_DISABLE__)
task_create_function(ipc_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(90)
task_internal_queue_size(10)
task_boot_mode(NORMAL_M | FACTORY_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_ETHERCORE)

/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_ETHERCORE, MOD_DUMMY_ETHERCORE)

/*module_type and mod_task_g*/
task_module_map(INDX_ETHERCORE, MOD_ETHERCORE)

/*task's parameters*/
task_name("ETHERCORE")
task_queue_name("ETHERCORE Q")
task_priority(TASK_PRIORITY_ETHERCORE, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if defined(__ETHERCORE_SUPPORT__) && !defined(ETHERCORE_NOT_PRESENT) && !defined(__ETHERCORE_TASK_DISABLE__)
task_create_function(ethc_core_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M | FACTORY_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_USBCLASS)

/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_USBCLASS, MOD_DUMMY_USBCLASS)

/*module_type and mod_task_g*/
task_module_map(INDX_USBCLASS, MOD_USBCLASS)
task_module_map(INDX_USBCLASS, MOD_ACM)
task_module_map(INDX_USBCLASS, MOD_RNDIS)
task_module_map(INDX_USBCLASS, MOD_MBIM)
task_module_map(INDX_USBCLASS, MOD_ECM)

/*task's parameters*/
task_name("USBcLASS")
task_queue_name("USBcLASS Q")
task_priority(TASK_PRIORITY_USBCLASS, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if defined(__USBCLASS_SUPPORT__) && !defined(USBCLASS_NOT_PRESENT) && !defined(__USBCLASS_TASK_DISABLE__)
task_create_function(ucd_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(40)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M | FACTORY_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_USBCORE)

/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_USBCORE, MOD_DUMMY_USBCORE)

/*module_type and mod_task_g*/
task_module_map(INDX_USBCORE, MOD_USBCORE)
task_module_map(INDX_USBCORE, MOD_UFPM)

/*task's parameters*/
task_name("USBCORE")
task_queue_name("USBCORE Q")
task_priority(TASK_PRIORITY_USBCORE, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if defined(__USBCORE_SUPPORT__) && !defined(USBCORE_NOT_PRESENT) && !defined(__USBCORE_TASK_DISABLE__)
task_create_function(usbc_core_create)
#else
null_task_create_entry(NULL)
#endif

task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M | FACTORY_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_NMU)

/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_NMU, MOD_DUMMY_NMU)

/*module_type and mod_task_g*/
task_module_map(INDX_NMU, MOD_NMU)
task_module_map(INDX_NMU, MOD_DHCP4C)
task_module_map(INDX_NMU, MOD_NDPC)

/*task's parameters*/
task_name("NMU")
task_queue_name("NMU Q")
task_priority(TASK_PRIORITY_NMU, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(1760)
#if defined(__NMU_ENABLE__) && !defined(NMU_NOT_PRESENT) && !defined(__NMU_TASK_DISABLE__)
task_create_function(nmu_create)
#else
null_task_create_entry(NULL)
#endif

task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(20)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M | FACTORY_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_CLDMACORE)
/*module_type and mod_task_g*/
task_module_map(INDX_CLDMACORE, MOD_CLDMACORE)

/*task's parameters*/
task_name("CORCLDMA")
task_queue_name("CORCLDMA Q")
task_priority(TASK_PRIORITY_CLDMACORE, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if (defined(__MTK_TARGET__) || defined(__MODIS_CLDMA_TAP_ACCESS__)) && defined(__CLDMACORE_SUPPORT__) && !defined(CLDMACORE_NOT_PRESENT) && !defined(__CLDMACORE_TASK_DISABLE__)
task_create_function(cldmac_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(0)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M | FACTORY_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_CCIFCORE)
/*module_type and mod_task_g*/
task_module_map(INDX_CCIFCORE, MOD_CCIFCORE)
 
/*task's parameters*/
task_name("CCIFCORE")
task_queue_name("CCIFCORE Q")
task_priority(TASK_PRIORITY_CCIFCORE, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
 
MODULE_ID_MAP_TO_NULL_TASK_CAN_ALLOCATE_ILM(MOD_CCCI_HISR)
#if defined(__CCIFCORE_SUPPORT__) && !defined(CCIFCORE_NOT_PRESENT) && !defined(__CCIFCORE_TASK_DISABLE__)
task_create_function(ccifc_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M | FACTORY_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/
 
/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_UARTCORE)
/*module_type and mod_task_g*/
task_module_map(INDX_UARTCORE, MOD_UARTCORE)

/*task's parameters*/
task_name("CORUART")
task_queue_name("CORUART Q")
task_priority(TASK_PRIORITY_UARTCORE, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if defined(__UARTCORE_SUPPORT__) && !defined(UARTCORE_NOT_PRESENT) && !defined(__UARTCORE_TASK_DISABLE__)
task_create_function(uart_core_create)
#else
null_task_create_entry(NULL)
#endif

task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M | FACTORY_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_USBMSD)

/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_USBMSD, MOD_DUMMY_USBMSD)

/*module_type and mod_task_g*/
task_module_map(INDX_USBMSD, MOD_USBMSD)

/*task's parameters*/
task_name("USBMSD")
task_queue_name("USBMSD Q")
task_priority(TASK_PRIORITY_USBMSD, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if defined(__USB_MSD_SUPPORT__) && !defined(__USBMSD_TASK_DISABLE__)
task_create_function(ms_task_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(70)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M | FACTORY_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_CCCIDEV)

/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_CCCIDEV, MOD_DUMMY_CCCIDEV)

/*module_type and mod_task_g*/
task_module_map(INDX_CCCIDEV, MOD_CCCIDEV)
task_module_map(INDX_CCCIDEV, MOD_CCMNI)
task_module_map(INDX_CCCIDEV, MOD_CCCITTY)

/*task's parameters*/
task_name("DEVCCCI")
task_queue_name("DEVCCCI Q")
task_priority(TASK_PRIORITY_CCCIDEV, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(1824)
#if defined(__CCCIDEV_SUPPORT__) && !defined(CCCIDEV_NOT_PRESENT) && !defined(__CCCIDEV_TASK_DISABLE__)
task_create_function(cccidev_task_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(30)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M | FACTORY_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_CCCIITDEV1)
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_CCCIITDEV1, MOD_DUMMY_CCCIITDEV1)
/*module_type and mod_task_g*/
task_module_map(INDX_CCCIITDEV1, MOD_CCCIITDEV1)
/*task's parameters*/
task_name("1DEVCCCI")
task_queue_name("1DEVCCCI Q")
task_priority(TASK_PRIORITY_CCCIITDEV1, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if (defined(__CCCI_LB_IT__) || defined(__CCCI_TTY_IT__)) && !defined(__CCCIIT_DEV1_TASK_DISABLE__)
task_create_function(ccciitdev1_task_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/
/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_CCCIITDEV2)
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_CCCIITDEV2, MOD_DUMMY_CCCIITDEV2)
/*module_type and mod_task_g*/
task_module_map(INDX_CCCIITDEV2, MOD_CCCIITDEV2)
/*task's parameters*/
task_name("2DEVCCCI")
task_queue_name("2DEVCCCI Q")
task_priority(TASK_PRIORITY_CCCIITDEV2, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if (defined(__CCCI_LB_IT__) || defined(__CCCI_TTY_IT__)) && !defined(__CCCIIT_DEV2_TASK_DISABLE__)
task_create_function(ccciitdev2_task_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_CCCIITDEV3)
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_CCCIITDEV3, MOD_DUMMY_CCCIITDEV3)
/*module_type and mod_task_g*/
task_module_map(INDX_CCCIITDEV3, MOD_CCCIITDEV3)
/*task's parameters*/
task_name("3DEVCCCI")
task_queue_name("3DEVCCCI Q")
task_priority(TASK_PRIORITY_CCCIITDEV3, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if (defined(__CCCI_LB_IT__) || defined(__CCCI_TTY_IT__)) && !defined(__CCCIIT_DEV3_TASK_DISABLE__)
task_create_function(ccciitdev3_task_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/
/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_CCCIITDEV4)
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_CCCIITDEV4, MOD_DUMMY_CCCIITDEV4)
/*module_type and mod_task_g*/
task_module_map(INDX_CCCIITDEV4, MOD_CCCIITDEV4)
/*task's parameters*/
task_name("4DEVCCCI")
task_queue_name("4DEVCCCI Q")
task_priority(TASK_PRIORITY_CCCIITDEV4, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if (defined(__CCCI_LB_IT__) || defined(__CCCI_TTY_IT__))  && !defined(__CCCIIT_DEV4_TASK_DISABLE__)
task_create_function(ccciitdev4_task_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)

/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_CCCIITFS)
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_CCCIITFS, MOD_DUMMY_CCCIITFS)
/*module_type and mod_task_g*/
task_module_map(INDX_CCCIITFS, MOD_CCCIITFS)
/*task's parameters*/
task_name("ITFSCCCI")
task_queue_name("ITFSCCCI Q")
task_priority(TASK_PRIORITY_CCCIITFS, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if defined(__CCCI_FS_IT__) && !defined(__CCCIIT_FS_TASK_DISABLE__)
task_create_function(cccifsit_task_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/* TTY unit test module */
/*task_indx_type*/
task_index(INDX_TTY_UT)
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_TTY_UT, MOD_DUMMY_TTY_UT)
/*module_type and mod_task_g*/
task_module_map(INDX_TTY_UT, MOD_TTY_UT)

/*task's parameters*/
task_name("UT_TTY")
task_queue_name("UT_TTY Q")
task_priority(TASK_PRIORITY_TTY_UT, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if defined(__TTY_UT__)  && !defined(__TTYUT1_TASK_DISABLE__)
task_create_function(ttyut_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/* TTY unit test 2 module */
/*task_indx_type*/
task_index(INDX_TTY_UT2)
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_TTY_UT2, MOD_DUMMY_TTY_UT2)
/*module_type and mod_task_g*/
task_module_map(INDX_TTY_UT2, MOD_TTY_UT2)

/*task's parameters*/
task_name("UT2TTY")
task_queue_name("UT2TTY Q")
task_priority(TASK_PRIORITY_TTY_UT2, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if defined(__TTY_UT__)  && !defined(__TTYUT2_TASK_DISABLE__)
task_create_function(ttyut_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/* TTY unit test 3 module */
/*task_indx_type*/
task_index(INDX_TTY_UT3)
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_TTY_UT3, MOD_DUMMY_TTY_UT3)
/*module_type and mod_task_g*/
task_module_map(INDX_TTY_UT3, MOD_TTY_UT3)

/*task's parameters*/
task_name("UT3TTY")
task_queue_name("UT3TTY Q")
task_priority(TASK_PRIORITY_TTY_UT3, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if defined(__TTY_UT__) && !defined(__TTYUT3_TASK_DISABLE__)
task_create_function(ttyut_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/* Exception TTY unit test module */
/*task_indx_type*/
task_index(INDX_EXCP_TTYUT)
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_EXCP_TTYUT, MOD_DUMMY_EXCP_TTYUT)
/*module_type and mod_task_g*/
task_module_map(INDX_EXCP_TTYUT, MOD_EXCP_TTYUT)

/*task's parameters*/
task_name("EXCP_TTYUT")
task_queue_name("EXCP_TTYUT Q")
task_priority(TASK_PRIORITY_EXCP_TTYUT, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if defined(__EXCEPT_TTY_UT__) && !defined(__TTYUT_EXCP_TASK_DISABLE__)
task_create_function(excp_ttyut_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_SYS_TEST)
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_SYS_TEST, MOD_DUMMY_SYS_TTY)
/*module_type and mod_task_g*/
task_module_map(INDX_SYS_TEST, MOD_SYS_TEST)

/*task's parameters*/
task_name("SYS_TEST")
task_queue_name("SYS_TEST Q")
task_priority(TASK_PRIORITY_SYS_TEST, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if defined (ATEST_SYS_ENABLE)
task_create_function(sys_test_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin******************/
/*task_indx_type*/
task_index(INDX_BTT)
/*module_type and mod_task_g*/
task_module_map(INDX_BTT, MOD_BTT)

//task's parameters
task_name("BTT")
task_queue_name("BTT Q")
task_priority(TASK_PRIORITY_BTT, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if defined (__BTT_AGENT_ENABLE__) && !defined(__BTT_TASK_DISABLE__) && !defined(__ESL_COSIM_LTE__) 
task_create_function(btt_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(20)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M | FACTORY_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_AOMGR)

/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_AOMGR, MOD_AOMGR)

/*task's parameters*/
task_name("AOMGR")
task_queue_name("AOMGR Q")
task_priority(TASK_PRIORITY_AOMGR, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if defined(__MTK_TARGET__) && defined(__HIF_AOMGR_SUPPORT__) 
task_create_function(aomgr_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M | FACTORY_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/


/*************************Task CFG Begin****************/ 
task_index(INDX_SLT_NL_00)
task_module_map(INDX_SLT_NL_00, MOD_SLT_NL)
task_name("SLT_NL_00")
task_queue_name("ST_Q_SLT_NL")
task_priority(TASK_PRIORITY_SLT_NL_00, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(33280)
#if defined(__MTK_TARGET__) && defined(__IC_SLT__) && !defined(ATEST_DRV_ENABLE) 
task_create_function(slt_task_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
MODULE_ID_FOR_PRINT_TRACE(MOD_SLT)
/*************************Task CFG END******************/


/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_USBIDLE)
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_USBIDLE, MOD_DUMMY_USBIDLE)
/*module_type and mod_task_g*/
task_module_map(INDX_USBIDLE, MOD_USBIDLE)
/*task's parameters*/
task_name("USBIDLE")
task_queue_name("USBIDLE Q")
task_priority(TASK_PRIORITY_USBIDLE, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if defined(__USBCORE_SUPPORT__) && !defined(USBCORE_NOT_PRESENT) && !defined(__USBCORE_TASK_DISABLE__)
task_create_function(usb_idle_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M | FACTORY_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/
 
/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_LTECSR)

/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_LTECSR, MOD_DUMMY_LTECSR)

/*module_type and mod_task_g*/
task_module_map(INDX_LTECSR, MOD_LTECSR)

/*task's parameters*/
task_name("LTECSR")
task_queue_name("LTECSR Q")
task_priority(TASK_PRIORITY_LTECSR, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(4608)
#if defined(__VOLTE_SUPPORT__) && !defined(__LTECSR_TASK_DISABLE__)
task_create_function(ltecsr_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M | USB_M | FACTORY_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_DPCOPRO)
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_DPCOPRO, MOD_DUMMY_DPCOPRO)
/*module_type and mod_task_g*/
task_module_map(INDX_DPCOPRO, MOD_DPCOPRO)
/*task's parameters*/
task_name("DPCOPRO")
task_queue_name("DPC Q")
task_priority(TASK_PRIORITY_DPCOPRO, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(2048)
#if defined(__MTK_TARGET__) && (defined(__LTE_RAT__)|| defined(ATEST_DPCOPRO_EN)|| defined(__LHIFCORE_SUPPORT__) ) && !defined(__DPCOPRO_TASK_DISABLE__)
task_create_function(dpcopro_task_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(10)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

/*************************Task CFG Begin****************/
/*task_indx_type*/
task_index(INDX_KPALV)
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_KPALV, MOD_DUMMY_KPALV)
/*module_type and mod_task_g*/
task_module_map(INDX_KPALV, MOD_KPALV)

/*task's parameters*/
task_name("KPALV")
task_queue_name("KPALV Q")
task_priority(TASK_PRIORITY_KPALV, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(1888)
#if defined(__KPALV_SUPPORT__)
task_create_function(kpalv_create)
#else
null_task_create_entry(NULL)
#endif
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(5)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/
/*************************Task CFG Begin****************/
#if !defined(__MAUI_BASIC__)
/*task_indx_type*/
task_index(INDX_GMMGR)
/*dummy mod is specified to get task id by mod id, use mod_task_g*/
task_module_map(INDX_GMMGR, MOD_DUMMY_GMMGR)
/*module_type and mod_task_g*/
task_module_map(INDX_GMMGR, MOD_GMMGR)
/*task's parameters*/
task_name("GMMGR")
task_queue_name("GMMGR Q")
task_priority(TASK_PRIORITY_GMMGR, KAL_TASK_INITIAL_PRIORITY)
task_stack_size(2048)
task_create_function(gmmgr_create)
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(120)
task_internal_queue_size(10)
task_boot_mode(NORMAL_M | FACTORY_M)
task_affinity_group(VPE2_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
#endif
/*************************Task CFG END******************/ 

MODULE_ID_MAP_TO_NULL_TASK_CAN_ALLOCATE_ILM(MOD_TTY_UT99)
 
MODULE_ID_MAP_TO_NULL_TASK_CAN_ALLOCATE_ILM(MOD_PPP)
MODULE_ID_MAP_TO_NULL_TASK_CAN_ALLOCATE_ILM(MOD_PFC_SW)


/**** customer added task or module id is started  *****/

/**** customer added task or module id is ended    *****/


/*************************Task CFG Begin****************/
/*task_indx_type*/
/* this is a fake task for task id grouping*/
task_index(TASK_ID_MW_CODE_TAIL)
/*module_type and mod_task_g*/
task_module_map(TASK_ID_MW_CODE_TAIL, MODULE_TAG_MW_DUMMY_TAIL)
/*task's parameters*/
task_name("")
task_queue_name("")
task_priority(KAL_TASK_INITIAL_PRIORITY , KAL_TASK_INITIAL_PRIORITY)
task_stack_size(0)
null_task_create_entry(NULL)
task_stack_internalRAM(KAL_FALSE)
task_external_queue_size(0)
task_internal_queue_size(0)
task_boot_mode(NORMAL_M)
task_affinity_group(SMP_NORMAL_Group)
task_affinity_group_id(AFFI_GROUP_ID_NONE)
/*************************Task CFG END******************/

#endif /*TASK_PRIORITY_MACRO*/
