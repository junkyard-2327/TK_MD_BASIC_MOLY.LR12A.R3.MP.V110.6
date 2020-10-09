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
 *   tcpip_struct.h
 *
 * Project:
 * --------
 *   UMOLY
 *
 * Description:
 * ------------
 *   Defines TCPIP service ILM structure
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * 
 ****************************************************************************/
#ifndef __TCPIP_STRUCT_H__
#define __TCPIP_STRUCT_H__

#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "kal_general_types.h"
#include "atcmd_struct.h"
/* for net/ip info */
#include "netinfo_common_struct.h"
/* for ran type */
#include "iwlan_public_defs.h"

typedef ip_info_struct tcpip_ip_info_struct_t;
typedef net_info_struct tcpip_net_info_struct_t;
#define TCPIP_RAN_UNSPEC        IWLAN_RAN_UNSPEC
#define TCPIP_RAN_MOBILE_3GPP   IWLAN_RAN_MOBILE_3GPP
#define TCPIP_RAN_WIFI          IWLAN_RAN_WIFI
#define TCPIP_RAN_TYPE_CNT      IWLAN_RAN_TYPE_CNT
#define TCPIP_RAN_TYPE_NONE     IWLAN_RAN_TYPE_NONE
#define TCPIP_RAN_TYPE_ERR      IWLAN_RAN_TYPE_ERR

/************************************************** 
 *  TCPIP ilm struct
 **************************************************/

/*******************************************************************************
* D2CM to STKBRG REQ                                                            *
*******************************************************************************/
typedef struct
{
    kal_uint8 PDPv6_addr[IPV6_ADDR_LEN];
} d2cm_stkbrg_glbaddr_struct;

#define TCPIP_D2CM_REQ_LOCAL_PARA_HDR \
    LOCAL_PARA_HDR \
    kal_uint32      interface_id; /* transaction id + channel id */ \
    kal_uint8       ran_type;     /* d2pm_iwlan_ran_enum */

// MSG_ID_D2CM_STKBRG_ESTABLISHPDN_REQ
typedef struct
{
    TCPIP_D2CM_REQ_LOCAL_PARA_HDR

    kal_uint32      netif_id;     /* network_interface_id in net_info */
    tcpip_ip_info_struct_t  ip_info;
    kal_bool                net_info_present;
    tcpip_net_info_struct_t net_info;
} d2cm_stkbrg_establishpdn_req_struct;

// MSG_ID_D2CM_STKBRG_DISCONNECTPDN_REQ
typedef struct
{
    TCPIP_D2CM_REQ_LOCAL_PARA_HDR
} d2cm_stkbrg_disconnectpdn_req_struct;

// MSG_ID_D2CM_STKBRG_IFCHANGE_REQ
typedef struct
{
    TCPIP_D2CM_REQ_LOCAL_PARA_HDR

    tcpip_ip_info_struct_t  ip_info;
    kal_bool                net_info_present;
    tcpip_net_info_struct_t net_info;
} d2cm_stkbrg_ifchange_req_struct;

// MSG_ID_D2CM_STKBRG_GLBADDR_REQ
typedef struct
{
    TCPIP_D2CM_REQ_LOCAL_PARA_HDR

    d2cm_stkbrg_glbaddr_struct  ip_info;
} d2cm_stkbrg_glbaddr_req_struct;

/*******************************************************************************
* STKBRG TO D2CM CNF                                                            *
*******************************************************************************/
typedef enum
{
    STKBRG_RES_SUCC = 0,
    STKBRG_RES_NONE = 1,
    STKBRG_RES_FAIL = 2,
    STKBRG_RES_MAX  = 0x7FFFFFFF,
} stkbrg_res_enum;

#define TCPIP_D2CM_CNF_LOCAL_PARA_HDR \
    LOCAL_PARA_HDR \
    kal_uint32      interface_id; \
    stkbrg_res_enum res;

typedef struct
{
    TCPIP_D2CM_CNF_LOCAL_PARA_HDR
} d2cm_cnf_info_struct;

// MSG_ID_D2CM_STKBRG_ESTABLISHPDN_CNF
typedef struct
{
    TCPIP_D2CM_CNF_LOCAL_PARA_HDR

    tcpip_ip_info_struct_t  ip_info_original;
    tcpip_ip_info_struct_t  ip_info_updated;

    kal_uint32           stkif_id;
} d2cm_stkbrg_establishpdn_cnf_struct;

// MSG_ID_D2CM_STKBRG_DISCONNECTPDN_CNF
typedef struct
{
    TCPIP_D2CM_CNF_LOCAL_PARA_HDR

    kal_uint32           stkif_id;
} d2cm_stkbrg_disconnectpdn_cnf_struct;

// MSG_ID_D2CM_STKBRG_IFCHANGE_CNF
typedef struct
{
    TCPIP_D2CM_CNF_LOCAL_PARA_HDR

    kal_uint32           stkif_id;
} d2cm_stkbrg_ifchange_cnf_struct;

// MSG_ID_D2CM_STKBRG_GLBADDR_CNF
typedef struct
{
    TCPIP_D2CM_CNF_LOCAL_PARA_HDR

    kal_uint32           stkif_id;
} d2cm_stkbrg_glbaddr_cnf_struct;


/*******************************************************************************
* ATP TO STKBRG IND
*******************************************************************************/
typedef struct {
    LOCAL_PARA_HDR
	
	/* data */
    kal_uint32 pktsize;
} atp_stkbrg_pktsize_ind_struct;

/*******************************************************************************/

/*******************************************************************************
* STATISTIC DUMP IND
*******************************************************************************/
typedef enum {
    STAT_DUMP_NB,
    STAT_DUMP_FIL,
    STAT_DUMP_BW,
    STAT_DUMP_DEV,
}stat_dump_enum;
typedef struct {
    LOCAL_PARA_HDR
	
    stat_dump_enum   req_id;
} stat_stkbrg_dump_ind_struct;

/*******************************************************************************/
/* Type define */
typedef d2cm_stkbrg_glbaddr_struct stkbrg_glbaddr_struct_t;
typedef d2cm_cnf_info_struct d2cm_cnf_info_struct_t;

typedef d2cm_stkbrg_establishpdn_req_struct d2cm_stkbrg_establishpdn_req_struct_t;
typedef d2cm_stkbrg_establishpdn_cnf_struct d2cm_stkbrg_establishpdn_cnf_struct_t;
typedef d2cm_stkbrg_disconnectpdn_req_struct d2cm_stkbrg_disconnectpdn_req_struct_t;
typedef d2cm_stkbrg_disconnectpdn_cnf_struct d2cm_stkbrg_disconnectpdn_cnf_struct_t;
typedef d2cm_stkbrg_ifchange_req_struct d2cm_stkbrg_ifchange_req_struct_t;
typedef d2cm_stkbrg_ifchange_cnf_struct d2cm_stkbrg_ifchange_cnf_struct_t;
typedef d2cm_stkbrg_glbaddr_req_struct d2cm_stkbrg_glbaddr_req_struct_t;
typedef d2cm_stkbrg_glbaddr_cnf_struct d2cm_stkbrg_glbaddr_cnf_struct_t;

typedef atp_stkbrg_pktsize_ind_struct atp_stkbrg_pktsize_ind_struct_t;

typedef stat_stkbrg_dump_ind_struct stat_stkbrg_dump_ind_struct_t;

#endif // __TCPIP_STRUCT_H__
