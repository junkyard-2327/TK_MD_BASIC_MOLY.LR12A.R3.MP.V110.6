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
 * custom_dmf_app_reg.h
 *
 * Project:
 * --------
 * UMOLYA
 *
 * Description:
 * ------------
 * DM Framework - Reigster needed EM/Peer/ICD and its handler function.
 *
 * Author:
 * -------
 * -------
 *
 *
 * ==========================================================================
 * $Log$
 *
 *
 *
 ****************************************************************************/
#ifndef DMF_REG_EM
#define DMF_REG_EM(EM_INFO, EM_MSG_ID, HDLR)
#endif
#ifndef DMF_REG_PEER
#define DMF_REG_PEER(PEER_ID, HDLR)
#endif
#ifndef DMF_REG_ICD_EVENT
#define DMF_REG_ICD_EVENT(ICD_EVENT_CODE, HDLR)
#endif
#ifndef DMF_REG_ICD_RECORD
#define DMF_REG_ICD_RECORD(ICD_RECORD_CODE, HDLR)
#endif

//Register EM and corresponding handler function
DMF_REG_EM(EMM_EM_REG_EVENT_INFO, MSG_ID_EM_EMM_REG_EVENT_INFO_IND, dmf_custom_emm_em_reg_event_info_handler)

//Register Peer Message and corresponding handler function
//DMF_REG_PEER(PROTOCOL_SECTION__LTE_RRC_PCCH, dmf_info_collect_sample_handler)

#ifdef __ICD_LOGGING_SUPPORT__
//Register ICD Event and corresponding handler function
//DMF_REG_ICD_EVENT(ICD_ENAS_ESM_OTA_EVENT, dmf_info_collect_sample_handler)

//Register ICD Record and corresponding handler function
//DMF_REG_ICD_RECORD(ICD_ENAS_OTA_MESSAGE, dmf_info_collect_sample_handler)

#endif /* __ICD_LOGGING_SUPPORT__ */

#undef DMF_REG_EM
#undef DMF_REG_PEER
#undef DMF_REG_ICD_EVENT
#undef DMF_REG_ICD_RECORD
