/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 *   ccci_ipc_module_conf.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Header file of CCCI_IPC_MODULE.
 *
 * Author:
 * -------
 * -------
 *
 *
 * ==========================================================================
 * $Log$
 *
 * 09 24 2019 actory.ou
 * [MOLY00433252] [UMOLYA] create GMMGR task
 * add new IPC mod for MOD_GMMGR.
 *
 * 06 12 2017 chien-hui.lu
 * [MOLY00256760] [MT6763][Bianco][N1][MTBF][PHONE][Overnight][HQ][Lab][Ericsson][HCR][ASSERT] file:mcu/common/service/hif/cccisrv/ccci_ipc/src/ccci_ipc_data.c line:1103
 * [CCCI_IPC] add for MOD_EL1_MPC.
 *
 * 04 06 2017 chien-hui.lu
 * [MOLY00239611] [CCCI_IPC][CCCI] add CCCI IPC and runtime feature
 * [CCCI_IPC] add CCCI IPC config for MDT.
 *
 * 04 05 2017 chien-hui.lu
 * [MOLY00239611] [CCCI_IPC][CCCI] add CCCI IPC and runtime feature
 * [CCCI_IPC][CCCI] add CCCI IPC config for WIPC.
 *
 * 04 05 2017 chien-hui.lu
 * [MOLY00239611] [CCCI_IPC][CCCI] add CCCI IPC and runtime feature
 * [CCCI_IPC][CCCI] fix CCCI IPC no module MDT build fail.
 *
 * 04 05 2017 chien-hui.lu
 * [MOLY00239611] [CCCI_IPC][CCCI] add CCCI IPC and runtime feature
 * [CCCI_IPC][CCCI] add CCCI IPC config for MDT.
 *
 * 04 05 2017 chien-hui.lu
 * [MOLY00239611] [CCCI_IPC][CCCI] add CCCI IPC and runtime feature
 * [CCCI][CCCI_IPC] add runtime feature and IPC config for MDT.
 *
 * 07 29 2015 hsin-jun.tang
 * [MOLY00133114] [CCCI IPC] patch CCCI IPC module ID - APMOD_GF
 * [CCCI] patch CCCI IPC module ID - garbage filter - UMOLY
 *
 * 12 10 2014 cs.huang
 * [MOLY00080351] [MT6291][CCCI] Add L1Core CCCI service (CCCI SYSMSG/RPC/IPC)
 * [CCCI] PCore/L1Core CCCI enhancement
 *
 * 11 25 2014 cs.huang
 * [MOLY00084258] [MT6795][Modem][Feature]Please support Garbage filter from network
 * [CCCI IPC] Add CCCI IPC msgid for garbage filter
 *
 * 11 25 2014 cs.huang
 * [MOLY00084258] [MT6795][Modem][Feature]Please support Garbage filter from network
 * [CCCI IPC] Add CCCI IPC msgid for garbage filter
 *
 * 11 13 2014 cs.huang
 * [MOLY00084258] [MT6795][Modem][Feature]Please support Garbage filter from network
 * [CCCI IPC] Add CCCI IPC msgid for garbage filter
 * 11 12 2014 cs.huang
 * [MOLY00084091] [MT6795] [SYSTEM SERVICE] [CLIB] porting C time function to MD
 * [CCCI IPC] Support Clibtime feature
 *
 * 08 04 2014 ian.cheng
 * [MOLY00074458] UMOLY CCCI service
 * 	[UMOLY_DEV CCCI PCore Service]
 *
 * 01 21 2014 wcpuser_integrator
 * [MOLY00054475] SGLTE option rename
 * .
 *
 * 10 08 2013 ap.wang
 * [MOLY00040424] [CCCI_IPC] Modify for IDC
 * 	Fix EL1 module error
 *
 * 10 08 2013 ap.wang
 * [MOLY00040424] [CCCI_IPC] Modify for IDC
 * 	Add MOD_EL1 and AP_MOD_WMT
 *
 * 07 15 2013 ap.wang
 * [MOLY00029794] [CCCI_IPC] Add compile option __SGLTE__ for MMDC
 *
 * 07 12 2013 aj.tsai
 * [MOLY00029691] check-in AOMGR related code
 * check-in aomgr code 
 * DHCPV4 ok
 *
 * 06 04 2013 ap.wang
 * [MOLY00024894] [CCCI IPC] Add new AP Module ID for l4c
 * .
 ****************************************************************************/

#ifndef __CCCI_IPC_MODULE_CONF_H__
#define __CCCI_IPC_MODULE_CONF_H__

// Cross Core IPC Direction :  AP 2 MD
// Priority   -->   Local module ID -->     External ID     --> Max sent message

X_IPC_MODULE_CONF(1,MOD_L4C,0,1),           //TASK_ID_1
#if defined(__SGLTE__) || defined(__GEMINI__)
    X_IPC_MODULE_CONF(1,MOD_L4C_2,1,1),     //TASK_ID_2
  #if (GEMINI_PLUS >= 3)
    X_IPC_MODULE_CONF(1,MOD_L4C_3,2,1),     //TASK_ID_3
  #endif    /* GEMINI_PLUS >= 3 */
  #if (GEMINI_PLUS >= 4)
    X_IPC_MODULE_CONF(1,MOD_L4C_4,3,1),     //TASK_ID_4
  #endif    /* GEMINI_PLUS >= 4 */
#endif /* __GEMINI__ */
X_IPC_MODULE_CONF(1,MOD_AOMGR,4,1),         //TASK_ID_4
#if defined(__LTE_RAT__)
    X_IPC_MODULE_CONF(1,MOD_EL1, 5,1),      //TASK_ID_5
#endif

// TASK_ID_6 is reserved to MISCTA          //TASK_ID_6

X_IPC_MODULE_CONF(1,MOD_CCCIIPC, 7,1),      //TASK_ID_7

#if defined(__IPCORE_SUPPORT__) && !defined(IPCORE_NOT_PRESENT) && !defined(__IPCORE_TASK_DISABLE__)
X_IPC_MODULE_CONF(1,MOD_IPCORE, 8,1),       //TASK_ID_8
#endif 

X_IPC_MODULE_CONF(1,MOD_MDT, 9,1),          //TASK_ID_9
X_IPC_MODULE_CONF(1,MOD_UFPM, 10,1),        //TASK_ID_10
X_IPC_MODULE_CONF(1,MOD_USBCLASS, 11,1),    //TASK_ID_11

#ifdef WIPC_SUPPORT
X_IPC_MODULE_CONF(1,MOD_WIPC, 12,1),        //TASK_ID_12
#endif

#if defined(__LTE_RAT__)
    X_IPC_MODULE_CONF(1,MOD_EL1_MPC, 5,1),      //TASK_ID_13
#endif

#if defined(__GMMGR_SUPPORT__)
    X_IPC_MODULE_CONF(1,MOD_GMMGR, 13,1),    //TASK_ID_13
#endif

// Cross Core IPC Direction :  MD 2 AP
// Priority   -->   Local module ID -->     External ID     --> Max sent message
#define AP_UINFY_ID_FLAG ((kal_uint32)1<<31)

X_IPC_MODULE_CONF(1,APMOD_AGPS,(0|AP_UINFY_ID_FLAG),1),    
X_IPC_MODULE_CONF(1,APMOD_DHCP,(1|AP_UINFY_ID_FLAG),1),    
X_IPC_MODULE_CONF(1,APMOD_GPS ,(2|AP_UINFY_ID_FLAG),1),    
X_IPC_MODULE_CONF(1,APMOD_WMT ,(3|AP_UINFY_ID_FLAG),1),  
X_IPC_MODULE_CONF(1,APMOD_MISCTA ,(4|AP_UINFY_ID_FLAG),1),
X_IPC_MODULE_CONF(1,APMOD_CCCI ,(5|AP_UINFY_ID_FLAG),1),
X_IPC_MODULE_CONF(1,APMOD_GF ,(6|AP_UINFY_ID_FLAG),1),
X_IPC_MODULE_CONF(1,APMOD_PKTTRC ,(7|AP_UINFY_ID_FLAG),1),
X_IPC_MODULE_CONF(1,APMOD_USB ,(8|AP_UINFY_ID_FLAG),1),
#ifdef WIPC_SUPPORT
X_IPC_MODULE_CONF(1,APMOD_LWXN, (9|AP_UINFY_ID_FLAG),1),
#endif

#endif  /* !__CCCI_IPC_MODULE_CONF_H__ */


