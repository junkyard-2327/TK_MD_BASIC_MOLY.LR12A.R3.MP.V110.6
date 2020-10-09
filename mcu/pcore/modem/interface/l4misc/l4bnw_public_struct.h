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

/*******************************************************************************
 * Filename:
 * ---------
 *	l4bnw_public_struct.h
 *
 *
 * Description:
 * ------------
 *  This is the header file of l4bnw_public_struct.c
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/
     
#ifndef  _L4BNW_PUBLIC_STRUCT_H
#define  _L4BNW_PUBLIC_STRUCT_H
     
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "l3_inc_enums_public.h"
     
typedef struct {

    /** Only expects the below values from rat_enum: 
    *    RAT_NONE     = 0,
    *    RAT_GSM      = 1,
    *    RAT_UMTS     = 2,
    *    RAT_LTE      = 4,
    *    RAT_C2K      = 16,
    *    RAT_1xRTT    = 32,
    *    RAT_HRPD     = 64,
    */
    rat_enum currently_attached_rat;
    rat_enum cs_currently_attached_rat;

    kal_uint8 plmn[MAX_PLMN_LEN+1]; /* in string format, from +EOPS */
    kal_uint8 cs_plmn[MAX_PLMN_LEN+1]; /* in string format, from +EOPS */

    kal_uint16 lac; /* from +CGREG */
    kal_uint16 cs_lac; /* from +CREG */

    kal_uint32 ci; /* from +CGREG */
    kal_uint32 cs_ci; /* from +CREG */

    kal_uint8 is_roaming;
    kal_uint8 cs_is_roaming;

    kal_uint8 ps_state; /* from +EGREG */
    kal_uint8 cs_state; /* from +EREG */

	kal_bool is_hplmn;
	kal_bool is_display_optimized;

    /* C2K cell info */
    kal_uint16 sid;
    kal_uint16 nid;
    kal_uint8  pzid;
    kal_uint16 base_id;
    kal_uint32 sector_id[4];
    kal_uint8  subnet_length;
    kal_uint8  carrier_id[7];
    //kal_uint8 sid[IMC_MAX_SID_LEN]; /* in string format */
    //kal_uint8 nid[IMC_MAX_NID_LEN]; /* in string format */
    //kal_uint8 pzid[IMC_MAX_PZID_LEN]; /* in string format */
    //kal_uint8 base_id[IMC_MAX_BASE_ID_LEN]; /* in string format */
    //kal_uint8 sector_id[IMC_MAX_SECTOR_ID_LEN]; /* in string format */
    //kal_uint8 subnet_length[IMC_MAX_SUBNET_LENGTH_LEN]; /* in string format */
    //kal_uint8 carrier_id[IMC_MAX_CARRIER_ID_LEN]; /* in string format */
} l4bnw_public_attached_network_info_struct;

typedef struct {
    LOCAL_PARA_HDR
    l4bnw_public_attached_network_info_struct attached_network_info;
} l4bnw_attached_rat_ind_struct, imsm_l4bnw_attached_rat_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
	kal_bool is_international_roaming;
    l4bnw_public_attached_network_info_struct attached_network_info;
} iwlan_l4bnw_attached_rat_ind_struct;


#endif /* _L4BNW_PUBLIC_STRUCT_H */


