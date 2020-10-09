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
 *   ipcore_upcm_struct.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *   
 *
 * ==========================================================================
 * $Log$
 *
 * 06 18 2019 andy-wc.chang
 * [MOLY00412903] [Merlot][Q0][BSP+] SIM1 registers VoLTE in more 30 sec
 * 	
 * 	[LR12A][R3] queue RA - pdn info indication to ipcore
 *
 * 12 28 2016 cammie.yang
 * [MOLY00221324] [6293][EL2][UPCM] C2K feature integrations
 * [TRUNK][UPCM] modifications for C2K feature integrations
 *
 * 12 27 2016 cammie.yang
 * [MOLY00221324] [6293][EL2][UPCM] C2K feature integrations
 * [UMOLYA][UPCM] Interface change for C2K integration
 *
 * 09 26 2016 cammie.yang
 * [MOLY00195563] [6293][EL2][UPCM][RATDM][EPDCP] Initial feature integrations
 * [TRUNK] UPCM/RATDM/EPDCP feature integrations from PS.DEV
 *
 * 02 05 2015 stan.chen
 * [MOLY00094939] MASE UMOLY check in
 * MASE/4GESL code checkin.
 *
 * 10 21 2013 moja.hsu
 * [MOLY00041018] [MT6290E1][WWFT][HK](2013HKFT_VP)Add Inject ILM for EMAC to TA timeout for testing
 * 	Reply to MOD_TCM_N for many TCM instance case
 *
 * 06 04 2013 moja.hsu
 * [MOLY00024881] Network Interface Bind Confirm
 * add PDN Bind related structure and enum.
 *
 * 03 29 2013 moja.hsu
 * [MOLY00007625] Maintain code
 * add dns info for bearer act and pdn bind.
 *
 * 01 14 2013 moja.hsu
 * [MOLY00007625] Maintain code
 * add upcm_rcv_ul_by_ebi and add EBI for DL Deliver for IMS requirement.
 ****************************************************************************/
/*
 * =====================================================================================
 *
 *       Filename:  ipcore_upcm_struct.h
 *
 *    Description:  IPCORE and UPCM ILM structures
 *
 *        Created:  2012/3/21 �W�� 11:30:09
 *        Author:  mtk01641 (moja)
 * =====================================================================================
 */
#ifndef  IPCORE_UPCM_STRUCT_INC
#define  IPCORE_UPCM_STRUCT_INC

#include "kal_public_api.h"
#include "ps_public_enum.h"
#include "ps_public_struct.h"
#include "ddm_common_struct.h"
#include "ue_testmode_struct.h"
#include "upcm_enum.h"

/* Valid bit length of IPv6 interface identifier from UPCM */
#define IPV6_VALID_IID_BITS (64)

/*
 * IPCORE just copy back the info to UPCM
 */
typedef struct
{
    kal_uint32 reply_dest_mod_id;
    kal_uint8 context_id;
}upcm_ipcore_back_info_t;

typedef struct 
{
    LOCAL_PARA_HDR

    kal_uint32 network_interface_id;
    kal_uint8 pdn_id;
    apn_type_info_struct apn_type_info;

	/* 
	 * Currently we don't know how to handle PPP_ADDR_TYPE
	 * So UPCM will assert when meet this type
	 */
    ip_addr_struct  ip_addr;

    /* DNS info. */
    dns_struct dns;

    /*
     * IPCORE just copy back the info to UPCM
     */
    upcm_ipcore_back_info_t back_info;
}ipcore_upcm_pdn_bind_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR

    /* Same to ipcore_upcm_pdn_bind_ind_struct */
    kal_uint32 network_interface_id;
    kal_uint8 pdn_id;
    apn_type_info_struct apn_type_info;

    ip_addr_struct ip_addr;
    dns_struct dns;

    /* return value */
    ps_cause_enum result;   /* Success: HIF_IPC_OK, Error cause : HIF_IPC_PDN_BIND_RSP_XXX */

    /*
     * IPCORE just copy back the info to UPCM
     */
    upcm_ipcore_back_info_t back_info;
}ipcore_upcm_pdn_bind_rsp_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_uint8 pdn_id;
}ipcore_upcm_pdn_unbind_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32 network_interface_id;
    kal_uint8 new_pdn_id;
    kal_uint8 old_pdn_id;

    ip_addr_struct  ip_addr;
    dns_struct dns;
}ipcore_upcm_pdn_rebind_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32 network_interface_id;
    kal_uint8 new_pdn_id;
    kal_uint8 old_pdn_id;

    ip_addr_struct  ip_addr;
    dns_struct dns;
    
    /* return value */
    ps_cause_enum result;   /* Success: HIF_IPC_OK, Error cause : HIF_IPC_PDN_BIND_RSP_XXX */
}ipcore_upcm_pdn_rebind_rsp_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_uint8 pdn_id;
    upcm_pdn_info_e pdn_info;
}ipcore_upcm_pdn_info_ind_struct;

/*
 * UPCM will fill DL info only on head GPD's SW control Info.
 * user use  QBM_DES_GET_SW_CTRL_FIELD(_p) to get this structure
 */
typedef struct
{
    kal_uint8 ebi;
}upcm_dlvr_dl_info_t;

/*
 * IPCORE notifties UPCM the network interface id under ESL simulation.
 */
typedef struct 
{
    LOCAL_PARA_HDR
    
    /* Selected network interface id. */
    kal_uint32 network_interface_id;

}ipcore_upcm_esl_pdn_bind_req_struct;

typedef testloop_cfg_struct ipcore_upcm_testloop_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR

    kal_uint32 is_success; // test loop operation success/failure
}ipcore_upcm_testloop_rsp_struct;

#endif   /* ----- #ifndef IPCORE_UPCM_STRUCT_INC  ----- */

