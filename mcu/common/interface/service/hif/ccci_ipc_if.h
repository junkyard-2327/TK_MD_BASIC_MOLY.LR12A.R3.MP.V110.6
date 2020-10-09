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
 *   ccci_ipc_if.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Interface of CCCI_IPC service.
 *
 * Author:
 * -------
 * -------
 *
 *
 * ==========================================================================
 * $Log$
 *
 * 04 05 2017 chien-hui.lu
 * [MOLY00239611] [CCCI_IPC][CCCI] add CCCI IPC and runtime feature
 * [CCCI_IPC][CCCI] add CCCI IPC config for WIPC.
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
 * 11 13 2014 cs.huang
 * [MOLY00084393] [UMOLY][CCCI] CCCI common header arrangement
 * Merging
 * 	
 * 	//UMOLY/TRUNK/UMOLY/mcu/pcore/interface/service/hif/ccci_ch_cfg.h
 * 	
 * 	to //UMOLY/TRUNK/UMOLY/mcu/common/interface/service/hif/ccci_ch_cfg.h
 *
 * 08 04 2014 ian.cheng
 * [MOLY00074458] UMOLY CCCI service
 * 	[UMOLY_DEV CCCI PCore Service]
 *
 * 06 11 2014 ian.cheng
 * [MOLY00069231] [TK6291] MOLY CCCI merge
 * 	TK6291 CCCI migration
 *
 * 03 04 2014 ap.wang
 * [MOLY00058262] [CCCI_IPC] Add new API for IDC
 * Add  ipc_msgsvc_send_ext_queue_no_wait API
 *
 * 10 08 2013 ap.wang
 * [MOLY00040424] [CCCI_IPC] Modify for IDC
 * 	Add MOD_EL1 and AP_MOD_WMT
 *
 * 06 04 2013 ap.wang
 * [MOLY00024894] [CCCI IPC] Add new AP Module ID for l4c
 * .
 ****************************************************************************/

#ifndef __CCCI_IPC_IF_H__
#define __CCCI_IPC_IF_H__

/*******************************************************************************
 * Define constants.
 *******************************************************************************/

/* define AP side virtual module id as destination */
#define APMOD_AGPS          0x0401
#define APMOD_DHCP          0x0402
#define APMOD_GPS           0x0403
#define APMOD_WMT           0x0404
#define APMOD_MISCTA        0x0405
#define APMOD_CCCI          0x0406
#define APMOD_GF            0x0407
#define APMOD_PKTTRC        0x0408
#define APMOD_USB           0x0409
#define APMOD_LWXN          0x040A
/*******************************************************************************
 * Define data structures.
 *******************************************************************************/

/* Struct to define the communication ilm between two cores */
typedef struct ipc_ilm_struct
{
    kal_uint32           src_mod_id;
    kal_uint32           dest_mod_id;
    kal_uint32           sap_id;
    kal_uint32           msg_id;
    local_para_struct    *local_para_ptr;
    peer_buff_struct     *peer_buff_ptr;
} ipc_ilm_t;


/*******************************************************************************
 * Define macros.
 *******************************************************************************/


/*******************************************************************************
 * Define export variables.
 *******************************************************************************/



/*******************************************************************************
 * Define export function.
 *******************************************************************************/
extern ipc_ilm_t* ipc_msgsvc_allocate_ilm(module_type module_id);
extern kal_bool ipc_msgsvc_send_ext_queue(ipc_ilm_t*ipc_ilm_t_ptr);
extern kal_bool ipc_msgsvc_send_ext_queue_no_wait(ipc_ilm_t*ipc_ilm_t_ptr);
extern void ipc_msgsvc_init(void);
typedef void (*CCCI_IPC_CB_FUNP)(ilm_struct *ilm);
extern kal_bool ccci_register_ipc_cb_funp(kal_uint32 msg_id, CCCI_IPC_CB_FUNP funp);


#endif  /* !__CCCI_IPC_IF_H__ */


