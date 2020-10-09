/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2016
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS (""MEDIATEK SOFTWARE"")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN ""AS-IS"" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
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
/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.  
* 
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
* 
* Copyright (c) 2002-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef _DO_MSGDEFS_H_
#define _DO_MSGDEFS_H_
/*****************************************************************************
 
  FILE NAME:  do_msgdefs.h
 
  DESCRIPTION:
  
    This file contains message defines for DO system

*****************************************************************************/

/*-----------------------------------------------------------------------**
** DO mailbox message ID range, 0x00002000~0x00003FFF                    **
**Notes: DO mailbox message ID will be unique in the system, differnt to **
**       1xRTT, which is unique in mailbox.                              **
**       DO message ID can map to DO SPY ID for automatic mailbox log. **
**-----------------------------------------------------------------------*/
#define DO_MBOX_MSG_ID_BASE             0x00002000

/*-----------------------------------------------------------------------**
** DO mailbox message ID block defines                                   **
**Notes: DO mailbox message ID will be unique in the system, differnt to **
**       those in 1xRTT, which are unique in mailbox.                    **
**       DO message IDs are partitioned into 64 blocks, each block has  **
**       128 IDs. A mailbox can have multiple ID blocks if needed.       **
**-----------------------------------------------------------------------*/

/* Mailbox message block start address. 59 blocks used. Total allows 64 blocks */
/* one command block, one data block and one OtaMsg block for each task */
/* one command block for each component */ 

#define HSC_MPA_MSGID_START                 0x00002000
#define HSC_SPDO_MSGID_START                    0x00002040
#define HSC_SP1X_MSGID_START                    0x00002080
#define HSC_CMD_MSGID_START                 0x000020C0
#define SLC_CMD_MSGID_START                 0x00002180
#define SLC_CMD_MSGID_SMP_START                 0x00002200
#define SLC_CMD_MSGID_SCP_START                 0x00002280
#define SLC_CMD_MSGID_AMP_START                 0x00002300
#define SLC_OTAMSG_MSGID_START                  0x00002380
#define CLC_CMD_MSGID_START                 0x00002400
#define CLC_CMD_MSGID_ALMP_START                0x00002480
#define CLC_CMD_MSGID_INSP_START                0x00002500
#define CLC_CMD_MSGID_IDP_START                 0x00002580
#define CLC_CMD_MSGID_CSP_START                 0x00002600
#define	CLC_CMD_MSGID_OMP_START	                0x00002680
#define CLC_CMD_MSGID_IRATM_START               0x000026A0
#define CLC_OTAMSG_MSGID_START                  0x00002700
#define RMC_CMD_MSGID_START                     0x00002780
#define RMC_CMD_MSGID_SCH_START                 0x00002800
#define RMC_CMD_MSGID_FMP_START                 0x00002880
#define RMC_CMD_MSGID_CSM_START                 0x00002900
#define RMC_CMD_MSGID_RFC_START                 0x00002980
#define RMC_CMD_MSGID_RUP_START                 0x00002A00
#define CLC_CMD_MSGID_RUP_IRATM_START           0x00002A60
#define RMC_OTAMSG_MSGID_START                  0x00002B00
#define FCP_CMD_MSGID_START                     0x00002B80
#define FCP_CMD_MSGID_FTM_START         0x00002C00
#define FCP_CMD_MSGID_CCM_START         0x00002C80
#define FCP_CMD_MSGID_PCPF_START        0x00002D00
#define FCP_CMD_MSGID_DSPR_START        0x00002D80
#define FCP_CMD_MSGID_VSPF_START        0x00002E00
#define FCP_CMD_MSGID_AESF_START        0x00002E80
#define FCP_CMD_MSGID_AUPF_START        0x00002F00
#define FCP_CMD_MSGID_SECF_START        0x00002F80
#define FCP_CMD_MSGID_DSAF_START        0x00003000
#define FCP_CMD_MSGID_CSNR_START        0x00003080
#define FCP_CMD_MSGID_DPAR_START        0x00003100
#define FCP_CMD_MSGID_MFPAR_START       0x00003180
#define FCP_CMD_MSGID_EMFAR_START       0x00003200
#define FCP_CMD_MSGID_FTAP_START        0x00003280
#define FCP_DATA_MSGID_START                    0x00003300
#define FCP_OTAMSG_MSGID_START                  0x00003380
#define RCP_CMD_MSGID_START                     0x00003400
#define RCP_CMD_MSGID_ACM_START         0x00003480
#define RCP_CMD_MSGID_RTM_START         0x00003500
#define RCP_CMD_MSGID_PCPR_START        0x00003580
#define RCP_CMD_MSGID_DSPR_START        0x00003600
#define RCP_CMD_MSGID_VSPR_START        0x00003680
#define RCP_CMD_MSGID_AESR_START        0x00003700
#define RCP_CMD_MSGID_AUPR_START        0x00003780
#define RCP_CMD_MSGID_SECR_START        0x00003800
#define RCP_CMD_MSGID_DSAR_START        0x00003880
#define RCP_CMD_MSGID_CSNR_START        0x00003900
#define RCP_CMD_MSGID_DPAR_START        0x00003980
#define RCP_CMD_MSGID_MFPAR_START       0x00003A00
#define RCP_CMD_MSGID_EMFAR_START       0x00003A80
#define RCP_CMD_MSGID_RTAP_START        0x00003B00
#define RCP_CMD_MSGID_TXH_START                 0x00003B80
#define RCP_DATA_MSGID_START                    0x00003C00
#define RCP_OTAMSG_MSGID_START                  0x00003C80
#define RCP_TEST_MSGID_START                    0x00003D00
#define RCP_CMD_MSGID_SL_START                  0x00003D80
#define     SEC_CMD_MSGID_START                 0x00003E00
#define     SEC_CMD_MSGID_EAKA_START            0x00003E20
#define TLS_CMD_MSGID_START                     0x00003F00
#define	DO_MAILBOX_MSGID_END                    0x00003F00


/*-----------------------------------------------------------------------**
** END                                                                   **
**-----------------------------------------------------------------------*/
#endif

