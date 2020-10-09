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

/*******************************************************************************
 * Filename:
 * ---------
 *   imsm_struct.h
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
 *
 * ==========================================================================
 * $Log$
 *
 * 07 26 2017 ke.cheng
 * [MOLY00265660] [Rose][Bianco][N1]The CMCC can not camp on volte network
 * 	
 * 	sync the code from R1.MP to UMOLYA
 *
 * 04 10 2017 mingchun.cheng
 * [MOLY00221513] [Gen93] L4 Integration M1 check in
 * to support SSDS.
 *
 ****************************************************************************/

#ifndef  _IMSM_STRUCT_H
#define  _IMSM_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "ps_public_enum.h"
#include "netinfo_common_struct.h"

typedef enum {
    MAPPING_MOD_IMSM = 0,
    MAPPING_MOD_SIMMNGR = 1,
    MAPPING_MOD_D2CM = 2,
    MAPPING_MOD_ATP = 3,
    MAPPING_MOD_SSDS = 4,
} mapping_mod_id_enum;

typedef ip_info_struct imsm_ip_info_struct;
typedef net_info_struct imsm_net_info_struct;
typedef if_info_struct imsm_if_info_struct;

#define IMSM_REQ_LOCAL_PARA_HDR \
    LOCAL_PARA_HDR \
    kal_uint32          src_id;

#define IMSM_CNF_LOCAL_PARA_HDR \
    LOCAL_PARA_HDR \
    kal_uint32          src_id; \
    kal_bool            is_success; \
    kal_uint16          err_cause;

#define IMSM_IND_LOCAL_PARA_HDR \
    LOCAL_PARA_HDR

//request to IMSM
typedef struct {
    IMSM_REQ_LOCAL_PARA_HDR

    kal_uint32 trans_id;

    kal_bool add; //add(KAL_TRUE) or delete(KAL_FALSE)

    imsm_ip_info_struct ip_info;     //IP address
    imsm_net_info_struct net_info;   //DNS
    imsm_if_info_struct if_info;     //network interface
} imsm_set_route_dns_req_struct;

//response from IMSM
typedef struct {
    IMSM_CNF_LOCAL_PARA_HDR

    kal_uint32 trans_id;
    kal_uint32 ps_id;
    kal_uint32 network_id;
} imsm_set_route_dns_cnf_struct;

//indication from IMSM
typedef struct {
    IMSM_IND_LOCAL_PARA_HDR

    kal_bool isWFC;
} imsm_wfc_ind_struct;

#endif /* _IMSM_STRUCT_H */
