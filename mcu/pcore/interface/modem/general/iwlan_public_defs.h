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
 * iwlan_public_defs.h
 *
 * Project:
 * --------
 * 
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 * 
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __IWLAN_PUBLIC_DEFS_H__
#define __IWLAN_PUBLIC_DEFS_H__

typedef enum {
    IWLAN_RAN_UNSPEC = 0,
    IWLAN_RAN_MOBILE_3GPP = 1,
    IWLAN_RAN_WIFI = 2,
    //IWLAN_RAN_MOBILE_3GPP2, remove snce 93 is combined under L4
    IWLAN_RAN_TYPE_CNT,
    IWLAN_RAN_TYPE_NONE = 254,
    IWLAN_RAN_TYPE_ERR = 255,
} iwlan_ran_e;

typedef enum {
    IWLAN_PDN_APN_TYPE_UNKNOWN = 0,
    IWLAN_PDN_APN_TYPE_DEFAULT,
    IWLAN_PDN_APN_TYPE_IMS,
    IWLAN_PDN_APN_TYPE_MMS,
    IWLAN_PDN_APN_TYPE_EMERGENCY,
    IWLAN_PDN_APN_TYPE_XCAP,
    IWLAN_PDN_APN_TYPE_RCS,
    IWLAN_PDN_APN_TYPE_BIP,
    IWLAN_PDN_APN_TYPE_SUPL,
    IWLAN_PDN_APN_TYPE_VSIM,
    IWLAN_PDN_APN_TYPE_MAX,
} iwlan_pdn_apn_type_e;

typedef enum {
    IWLAN_RPLEVNT_RSV = 0,
    IWLAN_RPLEVNT_NORM,
    IWLAN_RPLEVNT_WUIOFF,
} iwlan_rpl_evnt_e;

typedef struct {
    iwlan_pdn_apn_type_e type;
    kal_bool is_forroam;
} iwlan_rpl_param_struct;

typedef enum {
    RPL_REQ_NONE = 0,
    RPL_REQ_SBSCRIBE,
    RPL_REQ_UPDATE,
    RPL_REQ_UNSBSCRIBE,
} rpl_reqtype_e;

typedef enum {
    IWLAN_PDN_TYPRSV,
    IWLAN_PDN_TYPNONIMS,
    IWLAN_PDN_TYPIMS,
    IWLAN_PDN_TYPEMGIMS,
} iwlan_pdntype_e;

typedef enum
{
    RPL_RAN_PRI = 0, //primary ran
    RPL_RAN_SEC,     //secondary ran
    RPL_RAN_PRIOR_MAX
} rpl_ran_prior_e;

#endif //__IWLAN_PUBLIC_DEFS_H__


