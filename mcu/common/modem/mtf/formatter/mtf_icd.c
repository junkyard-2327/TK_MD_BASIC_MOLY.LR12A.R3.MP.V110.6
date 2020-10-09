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
 * mtf_icd.c
 *
 * Project:
 * --------
 * UMOLYA
 *
 * Description:
 * ------------
 * MT_Framework icd formatter implement 
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
 ****************************************************************************/

/*****************************************************************************/
/*                            Includes                                       */
/*****************************************************************************/

#include "mtf_if.h"
#include "mtf_msgid.h"
#include "kal_public_api.h"
#include "mtf_struct.h" //wait for icd_logging.h check in

/*****************************************************************************/
/*                               Define                                      */
/*****************************************************************************/

/*****************************************************************************/
/*                         Global variables                                  */
/*****************************************************************************/

/*****************************************************************************/
/*                         External functions                                */
/*****************************************************************************/

/*****************************************************************************/
/*                         Internal functions                                */
/*****************************************************************************/

/*****************************************************************************/
/*                         Function Body                                     */
/*****************************************************************************/

int
mtf_icd_extract_msginfo(const ilm_struct *ilm, mt_msginfo_t *msginfo)
{

    kal_uint16 length;
    dhl_mt_icd_ind_struct *icd_header;
    icd_header = (dhl_mt_icd_ind_struct*)ilm->local_para_ptr;
    msginfo->code = GET_RULE_CODE(icd_header->icd_type, icd_header->code, icd_header->protocol_id);
//    msginfo->msg = (void *)ilm->peer_buff_ptr;
    msginfo->msg = get_peer_buff_pdu(ilm->peer_buff_ptr, &length);
    msginfo->msg_size = icd_header->raw_data_len;

	return 0;
}

void
mtf_icd_create()
{
	static mt_formatter_t fmt;
	fmt.fmt_id = MT_FMT_ICD;
	fmt.ilm_msg_id = MSG_ID_DHL_MT_ICD_IND;
	fmt.extract_msginfo = mtf_icd_extract_msginfo;
	mt_register_formatter(&fmt);	
}
