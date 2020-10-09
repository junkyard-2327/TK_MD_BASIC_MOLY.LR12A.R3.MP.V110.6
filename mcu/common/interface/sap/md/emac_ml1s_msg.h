/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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
 * Filename:
 * ---------
 *   emac_ml1s_msg.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   Interface header for EMAC-ML1S interface
 *
 * Author:
 * -------
 * -------
 *   
 *
 * ==========================================================================
 * $Log$
 *
 * 03 30 2017 nicole.hsu
 * [MOLY00194987] [MT6293][UMOLYA/PS DEV] EMAC maintenance
 * [TRUNK] Modify Force NEWTX interface as ML1S request
 *
 * 03 15 2017 mf.jhang
 * [MOLY00194987] [MT6293][UMOLYA/PS DEV] EMAC maintenance
 * . add emac_ml1s_msg.h to libParseDbModem
 *
 * 03 13 2017 nicole.hsu
 * [MOLY00194987] [MT6293][UMOLYA/PS DEV] EMAC maintenance
 * ML1S
 * - Force NEWTX when ML1S request is sent
 *
 * 02 24 2017 mf.jhang
 * [MOLY00194987] [MT6293][UMOLYA/PS DEV] EMAC maintenance
 * .Add ML1S ILM handler
 *
 ****************************************************************************/
#ifndef  EMAC_ML1S_MSG_H
#define  EMAC_ML1S_MSG_H

// MSG_ID_ML1S_EMAC_CONN_EST_RA_REQ
typedef struct 
{
    LOCAL_PARA_HDR

    kal_uint16    c_rnti; /* 1 - 65523 */
    kal_uint16    ptag_ta_value; /* 1 - 1282 */
} ml1s_emac_conn_est_ra_req_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 lcid;
    kal_uint8 mac_ce_content[3];
} ml1s_emac_mac_ce_trigger_req_struct;


#endif   /* ----- #ifndef EMAC_ML1S_MSG  ----- */
