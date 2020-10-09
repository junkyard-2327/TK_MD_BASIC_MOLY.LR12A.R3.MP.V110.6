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
 *   ipc_if.c
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   IP Core public interface implementation.
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *                 HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 *
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#include "kal_public_api.h"
#include "sysservice_msgid.h"
#include "em_struct.h"
#include "em_msgid.h"
#include "intrCtrl.h"
#include "mw_sap.h"
#include "ps_public_enum.h"
#include "l4_msgid.h"
#include "l4c_ipcore_struct.h"
#include "d2_msgid.h"

#include "upcm.h"
#include "ipcore_upcm_struct.h"
#include "upcm_msgid.h"
#if defined(__LTM_SIMULATION_SUPPORT__)
    #include "lms_api.h"
#endif
#include "qmu_bm.h"
#include "qmu_bm_size.h"
#include "qmu_bm_util.h"

#include "nmu.h"
#include "nmu_util.h"
#include "hmu.h"

#ifdef __ESL_COSIM_HIF__
    #include "hif_esl_common.h"
#endif

#include "ccci_ipc_msgid.h"

#include "pfm_api.h"

#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
    #include "mdt_api.h"
#endif

#include "ipc_api.h"
#include "ipc_defs.h"
#include "ipc_debug.h"
#include "ipc_utils.h"
#include "ipc_filter.h"
#include "ipc_dhcp_adp.h"
#include "ipc_notify.h"
#include "ipc_data.h"

#include "hif_swla.h"

#if defined (__HIF_CCCI_SUPPORT__)
#include "ccci_if.h"
#endif

#if !defined(__MTK_TARGET__) && defined(_MSC_VER) && (_MSC_VER >= 1500)
#pragma warning( disable : 4100 )
#endif

/*------------------------------------------------------------------------------
 * Global variables.
 *----------------------------------------------------------------------------*/
kal_spinlockid ipc_spinlock_g = NULL;
static volatile kal_bool ipc_in_reset_s = KAL_FALSE;

/*------------------------------------------------------------------------------
 * Private fucntions.
 *----------------------------------------------------------------------------*/

void ipc_on_lte_tick_source(kal_bool is_lte_tick)
{
    if (is_lte_tick) {
        hmu_switch_hif_timer(HMU_TIMER_SOURCE_DSP);
    } else {
        hmu_switch_hif_timer(HMU_TIMER_SOURCE_SYS);
    }
}

ipc_netif_type_e
ipc_get_netif_type_by_apn_type(kal_uint32 apn_type)
{
    switch (apn_type) {
        case DDM_APN_TYPE_DEFAULT:
            return IPC_NETIF_TYPE_NORMAL;
        case DDM_APN_TYPE_IMS:
        case DDM_APN_TYPE_EMERGENCY:
        case DDM_APN_TYPE_XCAP:
            return IPC_NETIF_TYPE_LATENCY_CONCERN;
        default:
            return IPC_NETIF_TYPE_NORMAL;
    }
}

void ipc_config_pdn_info_ipv4(ipc_session_t *session, kal_uint32 session_ip_id, ip_addr_struct *ip_addr, dns_struct *dns, kal_uint32 netif_id, kal_uint32 netif_features, kal_bool *trigger_linkup)
{
    kal_uint32 input_dns_idx;
    kal_uint32 total_dns_cnt;

    /*
       Configure IPv4 address
       */
    IPC_ASSERT( (IPV4_ADDR_TYPE == ip_addr->ip_addr_type) ||
                (IPV4V6_ADDR_TYPE == ip_addr->ip_addr_type) );

    /* Set IPv4 information into nmu */
    total_dns_cnt = 0;
    for (input_dns_idx = 0 ; input_dns_idx < NUM_OF_DNS_ADDR ; input_dns_idx ++)
    {
        if (KAL_TRUE == dns->v4[input_dns_idx].is_dnsv4_present)
        {
            hif_trace_debug(IPC_TR_SESSION_BINDING_CFG_IPV4_DNS,
                    session_ip_id,
                    total_dns_cnt,
                    dns->v4[input_dns_idx].dnsv4[0],
                    dns->v4[input_dns_idx].dnsv4[1],
                    dns->v4[input_dns_idx].dnsv4[2],
                    dns->v4[input_dns_idx].dnsv4[3]);
            nmu_set_ip4_dns(session_ip_id, total_dns_cnt, dns->v4[input_dns_idx].dnsv4);
            total_dns_cnt ++;
        }
    }
    hif_trace_info(IPC_TR_SESSION_BINDING_CFG_IPV4_DNS_NUM, total_dns_cnt, session_ip_id);
    nmu_set_ip4_dns_num(session_ip_id, total_dns_cnt);

    hif_trace_debug(IPC_TR_SESSION_BINDING_CFG_IPV4_ADDR,
            session_ip_id,
            ip_addr->ipv4[0],
            ip_addr->ipv4[1],
            ip_addr->ipv4[2],
            ip_addr->ipv4[3]);
    nmu_set_ip4_ip(session_ip_id, ip_addr->ipv4);

    hif_trace_debug(IPC_TR_SESSION_BINDING_CFG_IPV4_FAKE_INFO,
            session_ip_id,
            ip_addr->ipv4[0],
            ip_addr->ipv4[1],
            ip_addr->ipv4[2],
            ip_addr->ipv4[3]);
    nmu_set_ip4_fake_mask_and_gateway(session_ip_id, ip_addr->ipv4);

    if (IPC_IS_V4_UNSPECIFIED_ADDR(ip_addr->ipv4))
    {   /* IPv4 information is not complete in control path */

        /* set IPv4 down */
        hif_trace_info(IPC_TR_SESSION_BINDING_CFG_IPV4_DOWN, session_ip_id);
        nmu_set_ip4_down(session_ip_id);

        /* Trigger DHCPv4 client if needed */
        if (netif_features & IPC_F_DHCP4C)
        {   /* enable DHCPv4 if necessary */
            hif_trace_info(IPC_TR_SESSION_BINDING_DHCP4C, netif_id, netif_features);
            ipc_enable_dhcp4c(session);

            /* Stop triggering link up if DHCPv4 client is enabled */
            *trigger_linkup = KAL_FALSE;
        }
    } else
    {   /* IPv4 information is complete, set IPv4 up */
        hif_trace_info(IPC_TR_SESSION_BINDING_CFG_IPV4_UP, session_ip_id);
        nmu_set_ip4_up(session_ip_id);
    }
}

void ipc_config_pdn_info_ipv6(kal_uint32 session_ip_id, ip_addr_struct *ip_addr, dns_struct *dns)
{
    kal_uint32 input_dns_idx;
    kal_uint32 total_dns_cnt;

    /*
       Configure IPv6 address
       Always only configure network interface identifier /64
       */
    IPC_ASSERT( (IPV6_ADDR_TYPE == ip_addr->ip_addr_type) ||
                (IPV4V6_ADDR_TYPE == ip_addr->ip_addr_type) );

    /* Set IPv6 information into nmu */
    total_dns_cnt = 0;
    for (input_dns_idx = 0 ; input_dns_idx < NUM_OF_DNS_ADDR ; input_dns_idx ++)
    {
        if (KAL_TRUE == dns->v6[input_dns_idx].is_dnsv6_present)
        {
            hif_trace_debug(IPC_TR_SESSION_BINDING_CFG_IPV6_DNS,
                    session_ip_id,
                    total_dns_cnt,
                    dns->v6[input_dns_idx].dnsv6[0],
                    dns->v6[input_dns_idx].dnsv6[1],
                    dns->v6[input_dns_idx].dnsv6[2],
                    dns->v6[input_dns_idx].dnsv6[3],
                    dns->v6[input_dns_idx].dnsv6[4],
                    dns->v6[input_dns_idx].dnsv6[5],
                    dns->v6[input_dns_idx].dnsv6[6],
                    dns->v6[input_dns_idx].dnsv6[7],
                    dns->v6[input_dns_idx].dnsv6[8],
                    dns->v6[input_dns_idx].dnsv6[9],
                    dns->v6[input_dns_idx].dnsv6[10],
                    dns->v6[input_dns_idx].dnsv6[11],
                    dns->v6[input_dns_idx].dnsv6[12],
                    dns->v6[input_dns_idx].dnsv6[13],
                    dns->v6[input_dns_idx].dnsv6[14],
                    dns->v6[input_dns_idx].dnsv6[15]);
            nmu_set_ip6_dns(session_ip_id, total_dns_cnt, dns->v6[input_dns_idx].dnsv6);
            total_dns_cnt ++;
        }
    }
    hif_trace_info(IPC_TR_SESSION_BINDING_CFG_IPV6_DNS_NUM, total_dns_cnt, session_ip_id);
    nmu_set_ip6_dns_num(session_ip_id, total_dns_cnt);

    if (IPC_IS_V6_UNSPECIFIED_ADDR(ip_addr->ipv6))
    {
        hif_trace_info(IPC_TR_SESSION_BINDING_CFG_IPV6_ZERO_IID_LEN, session_ip_id);
        nmu_set_ip6_iid_len(session_ip_id, 0);

        hif_trace_info(IPC_TR_SESSION_BINDING_CFG_IPV6_DOWN, session_ip_id);
        nmu_set_ip6_down(session_ip_id);
    } else
    {
        hif_trace_debug(IPC_TR_SESSION_BINDING_CFG_IPV6_IID,
                session_ip_id,
                IPV6_VALID_IID_BITS,
                ip_addr->ipv6[0],
                ip_addr->ipv6[1],
                ip_addr->ipv6[2],
                ip_addr->ipv6[3],
                ip_addr->ipv6[4],
                ip_addr->ipv6[5],
                ip_addr->ipv6[6],
                ip_addr->ipv6[7],
                ip_addr->ipv6[8],
                ip_addr->ipv6[9],
                ip_addr->ipv6[10],
                ip_addr->ipv6[11],
                ip_addr->ipv6[12],
                ip_addr->ipv6[13],
                ip_addr->ipv6[14],
                ip_addr->ipv6[15]);
        nmu_set_ip6_iid(session_ip_id, ip_addr->ipv6);
        nmu_set_ip6_iid_len(session_ip_id, IPV6_VALID_IID_BITS);

        hif_trace_info(IPC_TR_SESSION_BINDING_CFG_IPV6_UP, session_ip_id);
        nmu_set_ip6_up(session_ip_id);
    }
}

void ipc_on_pdn_bind_bot(module_type src_mod_id, kal_uint32 netif_features, local_para_struct *local_para_ptr, ps_cause_enum result)
{
    ipcore_upcm_pdn_bind_ind_struct *param = (ipcore_upcm_pdn_bind_ind_struct *)local_para_ptr;
    ipc_session_t                   *session;
    kal_uint32                       session_ip_id;
    kal_uint8                        ip_type;
    kal_bool                         trigger_linkup;

    if (HIF_IPC_OK == result) {
        session = ipc_find_session_by_context(param->pdn_id);
        if (session)
        {
            session_ip_id = session->ip_id;
            ip_type = session->type;
            IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);

            ipc_update_session_state(session, IPC_SESSION_STATE_BIND);

            hif_trace_info(IPC_TR_SESSION_BINDING_CFG_IP_INFO, param->network_interface_id, param->pdn_id, param->ip_addr.ip_addr_type, session_ip_id);

            trigger_linkup = KAL_TRUE;

            /*
               Configure IPv6 address
               Always only configure network interface identifier /64
               */
            if (IPC_IP_TYPE_IPV6 == ip_type || IPC_IP_TYPE_MIXED == ip_type)
            {
                ipc_config_pdn_info_ipv6(session_ip_id, &(param->ip_addr), &(param->dns));
            }

            /*
               Configure IPv4 address
               */
            if (IPC_IP_TYPE_IPV4 == ip_type || IPC_IP_TYPE_MIXED == ip_type)
            {
                ipc_config_pdn_info_ipv4(session, session_ip_id, &(param->ip_addr), &(param->dns), param->network_interface_id, netif_features, &trigger_linkup);
            }

            if (KAL_TRUE == trigger_linkup)
            {
                ipc_update_session_state(session, IPC_SESSION_STATE_PRE_LINKUP);
            }
        }else
        {
            hif_trace_error(IPC_TR_SESSION_BIND_SESSION_RLOCK_FAIL, param->network_interface_id, param->pdn_id);
            result = HIF_IPC_PDN_BIND_RSP_SESSION_RLOCK_FAIL;
        }
    }

    hif_trace_info(IPC_TR_SESSION_BINDING_RESULT, result);
    if (MOD_NIL != src_mod_id)
    {
        ipcore_upcm_pdn_bind_rsp_struct *rsp_msg_p;

        rsp_msg_p = (ipcore_upcm_pdn_bind_rsp_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_bind_rsp_struct), TD_RESET);
        IPC_ASSERT(rsp_msg_p);

        /* Fill response from indication structure */
        if (param)
        {
            hif_trace_info( IPC_TR_SESSION_BINDING_RSP_PARAM_GEN,
                            param->network_interface_id,
                            param->pdn_id,
                            sizeof(ip_addr_struct),
                            sizeof(dns_struct),
                            sizeof(upcm_ipcore_back_info_t));

            rsp_msg_p->network_interface_id = param->network_interface_id;
            /*
             * 2016/4/28 Peter.Hsu
             * The MSB of pdn id is used as sim idx in IPCore internal design for Multiple PS feature.
             * Therefore, we mask out the MSB before sent the pdn id information to other module.
             */
            rsp_msg_p->pdn_id = IPC_UNMASK_PROTOID_FROM_PDNID(param->pdn_id);
            kal_mem_cpy(&(rsp_msg_p->ip_addr), &(param->ip_addr), sizeof(ip_addr_struct));
            kal_mem_cpy(&(rsp_msg_p->dns), &(param->dns), sizeof(dns_struct));
            kal_mem_cpy(&(rsp_msg_p->back_info), &(param->back_info), sizeof(upcm_ipcore_back_info_t));
        }

        /* Fill result */
        rsp_msg_p->result = result;

        hif_trace_info(IPC_TR_SESSION_BINDING_RSP, result, src_mod_id);

#ifdef ATEST_SYS_IPCORE
        ipc_ut_msg_send6(
                MOD_IPCORE,
                src_mod_id,
                IPCORE_SAP,
                MSG_ID_IPCORE_UPCM_PDN_BIND_RSP,
                (local_para_struct*)rsp_msg_p,
                NULL
                );
#elif !defined(__LTM_SIMULATION_SUPPORT__)
        msg_send6(
                MOD_IPCORE,
                src_mod_id,
                IPCORE_SAP,
                MSG_ID_IPCORE_UPCM_PDN_BIND_RSP,
                (local_para_struct*)rsp_msg_p,
                NULL
                );
#endif
    }
}

void ipc_on_pdn_bind_top(module_type src_mod_id, local_para_struct *local_para_ptr)
{
    ipcore_upcm_pdn_bind_ind_struct *param = (ipcore_upcm_pdn_bind_ind_struct *)local_para_ptr;
    ipc_netif_t                 *netif;
    ipc_session_t               *session;
    kal_uint32                   features = 0;
    void                        *netif_cbk_context;
    module_type                  netif_module_id;
    ipc_netif_type_e             netif_type = IPC_NETIF_TYPE_NORMAL;
    kal_uint8                    ip_type;
    ps_cause_enum                result;

    result = HIF_IPC_OK;

    hif_trace_info(IPC_TR_SESSION_BINDING_START);

    if (param) {
        IPC_ASSERT(local_para_ptr->msg_len == sizeof(ipcore_upcm_pdn_bind_ind_struct));
        hif_trace_info(IPC_TR_SESSION_BINDING_INFO, param->network_interface_id, param->pdn_id, param->ip_addr.ip_addr_type);

        switch (param->ip_addr.ip_addr_type) {
        case IPV4_ADDR_TYPE:
            ip_type = IPC_IP_TYPE_IPV4;
            break;
        case IPV6_ADDR_TYPE:
            ip_type = IPC_IP_TYPE_IPV6;
            break;
        case IPV4V6_ADDR_TYPE:
            ip_type = IPC_IP_TYPE_MIXED;
            break;
        default:
            hif_trace_error(IPC_TR_SESSION_BIND_UNSUPPORTED_IP_ADDR_TYPE, param->ip_addr.ip_addr_type, param->pdn_id);
            result = HIF_IPC_PDN_BIND_RSP_UNSUPPORTED_IP_ADDR_TYPE;
            goto rsp;
        }

        netif = ipc_find_netif(param->network_interface_id);
        if (netif) {
            session = ipc_new_session(netif, param->pdn_id, ip_type, IPC_SESSION_STATE_PRE_BIND);
            features = netif->config.features;
            netif_cbk_context = netif->config.callback_context;
            netif_module_id = netif->config.module_id;
            if (session) {
                netif_type = ipc_get_netif_type_by_apn_type(param->apn_type_info.apn_type_activate);
                if (IPC_NETIF_TYPE_LATENCY_CONCERN == netif_type) {
                    IPC_R_TO_W_LOCK_OBJECT(netif, ipc_spinlock_g);
                    netif->config.features |= IPC_F_LATENCY_CONCERN;
                    IPC_W_TO_R_LOCK_OBJECT(netif, ipc_spinlock_g);
                }
            }
            IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);

            if (session) {
            #ifndef ATEST_SYS_IPCORE
                /*
                 * Send netif type to LHIF for dynamic queue mapping.
                 */
                if (features & IPC_F_DYNAMIC_Q_MAPPING) {
                    ipc_lhifcore_q_mapping_msg_t *req_msg_p;

                    req_msg_p = (ipc_lhifcore_q_mapping_msg_t *)construct_local_para(sizeof(ipc_lhifcore_q_mapping_msg_t), TD_RESET);
                    IPC_ASSERT(req_msg_p);

                    /* Fill request from indication structure */
                    kal_mem_cpy(&(req_msg_p->bind_ind), param, sizeof(ipcore_upcm_pdn_bind_ind_struct));

                    req_msg_p->netif_features = features;
                    req_msg_p->callback_context = netif_cbk_context;
                    req_msg_p->bind_src_mod_id = src_mod_id;
                    req_msg_p->netif_type = netif_type;

                    msg_send6(
                            MOD_IPCORE,
                            netif_module_id,
                            IPCORE_SAP,
                            MSG_ID_IPCORE_LHIFCORE_QUEUE_MAPPING_REQ,
                            (local_para_struct*)req_msg_p,
                            NULL
                            );
                    return;
                }
             #endif
            }else {
                hif_trace_error(IPC_TR_SESSION_BIND_NEW_SESSION_FAIL, param->network_interface_id, param->pdn_id, ip_type);
                result = HIF_IPC_PDN_BIND_RSP_NEW_SESSION_FAIL;
            }
        } else {
            hif_trace_error(IPC_TR_SESSION_BIND_INVALID_NETIF, param->network_interface_id);
            result = HIF_IPC_PDN_BIND_RSP_INVALID_NETIF;
        }
    } else {
        hif_trace_error(IPC_TR_SESSION_BIND_NULL_PARAM);
        result = HIF_IPC_PDN_BIND_RSP_NULL_PARAM;
    }

rsp:
    ipc_on_pdn_bind_bot(src_mod_id, features, local_para_ptr, result);
}

void ipc_on_pdn_unbind(local_para_struct *local_para_ptr)
{
    ipcore_upcm_pdn_unbind_ind_struct *param = (ipcore_upcm_pdn_unbind_ind_struct *)local_para_ptr;
    ipc_session_t               *session;
    kal_uint32                  session_ip_id;
    kal_uint8                   session_type;

    if (param) {
        IPC_ASSERT(local_para_ptr->msg_len == sizeof(ipcore_upcm_pdn_unbind_ind_struct));
        hif_trace_info(IPC_TR_SESSION_DEACTIVATING, param->pdn_id);

        session = ipc_find_session_by_context(param->pdn_id);
        if (session) {
            session_ip_id = session->ip_id;
            session_type = session->type;
            IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);

            if (IPC_IP_TYPE_IPV6 == session_type || IPC_IP_TYPE_MIXED == session_type) {
                nmu_set_ip6_dns_num(session_ip_id, 0);
                nmu_set_ip6_down(session_ip_id);
            }
            if (IPC_IP_TYPE_IPV4 == session_type || IPC_IP_TYPE_MIXED == session_type) {
                nmu_set_ip4_dns_num(session_ip_id, 0);
                nmu_set_ip4_down(session_ip_id);
            }

            ipc_disable_dhcp4c(session); /* disable DHCPv4 it's been enabled */
            ipc_update_session_state(session, IPC_SESSION_STATE_UNBIND);
            ipc_del_session(session);
        } else {
            hif_trace_error(IPC_TR_SESSION_DEACTIVATE_NO_SESSION_FOUND, param->pdn_id);
            ipc_ut_set_error(IPC_UT_SESSION_DEACTIVATE_NO_SESSION_FOUND);
        }
    } else {
        hif_trace_error(IPC_TR_SESSION_DEACTIVATE_NULL_PARAM);
    }
}

void ipc_on_pdn_rebind(module_type src_mod_id, local_para_struct *local_para_ptr)
{
    ipcore_upcm_pdn_rebind_ind_struct *param = (ipcore_upcm_pdn_rebind_ind_struct *)local_para_ptr;
    ipc_session_t              *session;
    ipc_netif_t                *netif;
    kal_uint32                  session_ip_id;
    kal_uint8                   old_session_type;
    kal_uint8                   old_ipv4_addr[4];
    kal_uint8                   old_ipv6_addr[16];
    kal_uint8                   new_session_type;
    kal_uint32                  netif_features;
    kal_bool                    trigger_linkup = KAL_TRUE;
    ps_cause_enum               result = HIF_IPC_OK;

    if (param) {
        IPC_ASSERT(local_para_ptr->msg_len == sizeof(ipcore_upcm_pdn_rebind_ind_struct));
        hif_trace_info(IPC_TR_SESSION_REBINDING_INFO, param->network_interface_id, param->old_pdn_id, param->new_pdn_id, param->ip_addr.ip_addr_type);

        switch (param->ip_addr.ip_addr_type) {
        case IPV4_ADDR_TYPE:
            new_session_type = IPC_IP_TYPE_IPV4;
            break;
        case IPV6_ADDR_TYPE:
            new_session_type = IPC_IP_TYPE_IPV6;
            break;
        case IPV4V6_ADDR_TYPE:
            new_session_type = IPC_IP_TYPE_MIXED;
            break;
        default:
            hif_trace_error(IPC_TR_SESSION_REBIND_UNSUPPORTED_IP_ADDR_TYPE, param->ip_addr.ip_addr_type, param->new_pdn_id);
            result = HIF_IPC_PDN_BIND_RSP_UNSUPPORTED_IP_ADDR_TYPE;
            goto rsp;
        }

        netif = ipc_find_netif(param->network_interface_id);
        if (netif) {
            netif_features = netif->config.features;
            IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);

            session = ipc_find_session_by_context((kal_uint8)(param->old_pdn_id));
            if (session) {
                session_ip_id = session->ip_id;
                old_session_type = session->type;
                IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);

                session = ipc_replace_session(netif, session, param->new_pdn_id, new_session_type, IPC_SESSION_STATE_LINKUP);
                if (session) {
                    if (IPC_IP_TYPE_IPV6 == old_session_type || IPC_IP_TYPE_MIXED == old_session_type) {
                        if (IPC_IP_TYPE_IPV6 == new_session_type || IPC_IP_TYPE_MIXED == new_session_type) {
                            nmu_get_ip6_iid(session_ip_id, &old_ipv6_addr);
                            if (0 != kal_mem_cmp(param->ip_addr.ipv6, &old_ipv6_addr, sizeof(old_ipv6_addr))) {
                                /*
                                 * IPv6 addr has been changed.
                                 * Update addr/dns to nmu.
                                 */
                                /* Delete old info */
                                nmu_set_ip6_dns_num(session_ip_id, 0);
                                nmu_set_ip6_down(session_ip_id);

                                ipc_update_session_state(session, IPC_SESSION_STATE_IP_REVOKE);

                                /* Update new info */
                                ipc_config_pdn_info_ipv6(session_ip_id, &(param->ip_addr), &(param->dns));

                                ipc_update_session_state(session, IPC_SESSION_STATE_LINKUP);
                            }
                        } else {
                            /* Delete old info */
                            nmu_set_ip6_dns_num(session_ip_id, 0);
                            nmu_set_ip6_down(session_ip_id);
                        }
                    }

                    if (IPC_IP_TYPE_IPV4 == old_session_type || IPC_IP_TYPE_MIXED == old_session_type) {
                        if (IPC_IP_TYPE_IPV4 == new_session_type || IPC_IP_TYPE_MIXED == new_session_type) {
                            nmu_get_ip4_ip(session_ip_id, &old_ipv4_addr);
                            if (0 != kal_mem_cmp(param->ip_addr.ipv4, &old_ipv4_addr, sizeof(old_ipv4_addr))) {
                                /*
                                 * IPv4 addr has been changed.
                                 * Update addr/dns to nmu.
                                 */
                                /* Delete old info */
                                nmu_set_ip4_dns_num(session_ip_id, 0);
                                nmu_set_ip4_down(session_ip_id);
                                ipc_disable_dhcp4c(session); /* disable DHCPv4 it's been enabled */

                                ipc_update_session_state(session, IPC_SESSION_STATE_IP_REVOKE);

                                /* Update new info */
                                ipc_config_pdn_info_ipv4(session, session_ip_id, &(param->ip_addr), &(param->dns), param->network_interface_id, netif_features, &trigger_linkup);

                                ipc_update_session_state(session, IPC_SESSION_STATE_LINKUP);
                            }
                        } else {
                            /* Delete old info */
                            nmu_set_ip4_dns_num(session_ip_id, 0);
                            nmu_set_ip4_down(session_ip_id);
                            ipc_disable_dhcp4c(session); /* disable DHCPv4 it's been enabled */
                        }
                    }
                } else {
                    hif_trace_error(IPC_TR_SESSION_REBIND_REPLACE_SESSION_FAIL, param->network_interface_id, param->old_pdn_id, param->new_pdn_id);
                    result = HIF_IPC_PDN_BIND_RSP_NEW_SESSION_FAIL;
                }
            } else {
                hif_trace_error(IPC_TR_SESSION_REBIND_SESSION_RLOCK_FAIL, param->network_interface_id, param->old_pdn_id);
                result = HIF_IPC_PDN_BIND_RSP_SESSION_RLOCK_FAIL;
            }
        } else {
            hif_trace_error(IPC_TR_SESSION_REBIND_INVALID_NETIF, param->network_interface_id);
            result = HIF_IPC_PDN_BIND_RSP_INVALID_NETIF;
        }
    } else {
        hif_trace_error(IPC_TR_SESSION_DEACTIVATE_NULL_PARAM);
        result = HIF_IPC_PDN_BIND_RSP_NULL_PARAM;
    }

rsp:
    hif_trace_info(IPC_TR_SESSION_REBINDING_RESULT, result);
    if (MOD_NIL != src_mod_id)
    {
        ipcore_upcm_pdn_rebind_rsp_struct *rsp_msg_p;

        rsp_msg_p = (ipcore_upcm_pdn_rebind_rsp_struct *)construct_local_para(sizeof(ipcore_upcm_pdn_rebind_rsp_struct), TD_RESET);
        IPC_ASSERT(rsp_msg_p);

        /* Fill response from indication structure */
        if (param)
        {
            hif_trace_info( IPC_TR_SESSION_REBINDING_RSP_PARAM_GEN,
                            param->network_interface_id,
                            param->old_pdn_id,
                            param->new_pdn_id,
                            sizeof(ip_addr_struct),
                            sizeof(dns_struct),
                            sizeof(upcm_ipcore_back_info_t));

            rsp_msg_p->network_interface_id = param->network_interface_id;
            rsp_msg_p->old_pdn_id = IPC_UNMASK_PROTOID_FROM_PDNID(param->old_pdn_id);
            rsp_msg_p->new_pdn_id = IPC_UNMASK_PROTOID_FROM_PDNID(param->new_pdn_id);
            kal_mem_cpy(&(rsp_msg_p->ip_addr), &(param->ip_addr), sizeof(ip_addr_struct));
            kal_mem_cpy(&(rsp_msg_p->dns), &(param->dns), sizeof(dns_struct));
        }

        /* Fill result */
        rsp_msg_p->result = result;

        hif_trace_info(IPC_TR_SESSION_REBINDING_RSP, result, src_mod_id);

#ifdef ATEST_SYS_IPCORE
        ipc_ut_msg_send6(
                MOD_IPCORE,
                src_mod_id,
                IPCORE_SAP,
                MSG_ID_IPCORE_UPCM_PDN_REBIND_RSP,
                (local_para_struct*)rsp_msg_p,
                NULL
                );
#else
        msg_send6(
                MOD_IPCORE,
                src_mod_id,
                IPCORE_SAP,
                MSG_ID_IPCORE_UPCM_PDN_REBIND_RSP,
                (local_para_struct*)rsp_msg_p,
                NULL
                );
#endif
    }
}

#if defined(__MD_DIRECT_TETHERING_SUPPORT__)
void ipc_bind_lan_netif(kal_uint32 netif_id_1, kal_uint32 netif_id_2)
{
    ipc_netif_t                 *netif_1, *netif_2;
    kal_uint32                   features_1, features_2;
    ipc_link_req_t              *link_req;
    void                        *context_1, *context_2;
    module_type                  module_id_1, module_id_2;

    netif_1 = ipc_find_netif(netif_id_1);
    netif_2 = ipc_find_netif(netif_id_2);
    IPC_R_TO_W_LOCK_OBJECT(netif_1, ipc_spinlock_g);
    hif_data_trace(IPC_BIND_LAN_NETIF, 0, netif_1, netif_id_1, netif_2, netif_id_2);

    /* Setup LAN netif 1 */
    if (netif_1 && netif_2) {
        features_1 = netif_1->config.features;

        IPC_ASSERT(features_1 & IPC_F_LAN);
        IPC_ASSERT(!netif_1->lan_netif && !netif_2->lan_netif);

        /* Bind to one another netif */
        netif_1->lan_netif = netif_2;

        context_1 = netif_1->config.callback_context;
        module_id_1 = netif_1->config.module_id;
    } else {
        hif_trace_error(IPC_TR_LAN_NETIF_BIND_INVALID_NETIF, netif_1, netif_id_1, netif_2, netif_id_2);
        if (netif_1) {
            IPC_W_UNLOCK_OBJECT(netif_1, ipc_spinlock_g);
        }
        if (netif_2) {
            IPC_R_UNLOCK_OBJECT(netif_2, ipc_spinlock_g);
        }
        IPC_ASSERT(KAL_FALSE);
    }

    IPC_W_TO_R_LOCK_OBJECT(netif_1, ipc_spinlock_g);
    IPC_R_TO_W_LOCK_OBJECT(netif_2, ipc_spinlock_g);

    /* Setup LAN netif 2 */
    if (netif_2) {
        features_2 = netif_2->config.features;

        IPC_ASSERT(features_2 & IPC_F_LAN);
        IPC_ASSERT(!netif_2->lan_netif);

        /* Bind to one another netif */
        netif_2->lan_netif = netif_1;

        context_2 = netif_2->config.callback_context;
        module_id_2 = netif_2->config.module_id;
    } else {
        hif_trace_error(IPC_TR_LAN_NETIF_BIND_INVALID_NETIF, netif_1, netif_id_1, netif_2, netif_id_2);
        if (netif_2) {
            IPC_W_UNLOCK_OBJECT(netif_2, ipc_spinlock_g);
        }
        IPC_R_UNLOCK_OBJECT(netif_1, ipc_spinlock_g);
        IPC_ASSERT(KAL_FALSE);
    }

    IPC_W_UNLOCK_OBJECT(netif_2, ipc_spinlock_g);
    IPC_R_UNLOCK_OBJECT(netif_1, ipc_spinlock_g);

    /* Link up LAN netif 1 */
    link_req = (ipc_link_req_t *)construct_local_para(sizeof(ipc_link_req_t), TD_RESET);
    IPC_ASSERT(link_req);

    link_req->callback_context = context_1;
    link_req->ip_type = IPC_IP_TYPE_MIXED;
    link_req->req_type = IPC_LINK_REQ_TYPE_MDT;

    msg_send6(MOD_IPCORE, /* src_mod_id */
            module_id_1, /* dest_mod_id */
            IPCORE_SAP, /* sap_id */
            MSG_ID_IPCORE_LINK_UP_REQ, /* msg_id */
            (struct local_para_struct *)link_req, /* local_para_ptr */
            NULL); /* peer_buff_ptr */

    /* Link up LAN netif 2 */
    link_req = (ipc_link_req_t *)construct_local_para(sizeof(ipc_link_req_t), TD_RESET);
    IPC_ASSERT(link_req);

    link_req->callback_context = context_2;
    link_req->ip_type = IPC_IP_TYPE_MIXED;
    link_req->req_type = IPC_LINK_REQ_TYPE_MDT;

    msg_send6(MOD_IPCORE, /* src_mod_id */
            module_id_2, /* dest_mod_id */
            IPCORE_SAP, /* sap_id */
            MSG_ID_IPCORE_LINK_UP_REQ, /* msg_id */
            (struct local_para_struct *)link_req, /* local_para_ptr */
            NULL); /* peer_buff_ptr */
}

void ipc_unbind_lan_netif(kal_uint32 netif_id_1, kal_uint32 netif_id_2)
{
    ipc_netif_t                 *netif_1, *netif_2;
    kal_uint32                   features_1, features_2;
    ipc_link_req_t              *link_req;
    void                        *context_1, *context_2;
    module_type                  module_id_1, module_id_2;

    netif_1 = ipc_find_netif(netif_id_1);
    netif_2 = ipc_find_netif(netif_id_2);
    IPC_R_TO_W_LOCK_OBJECT(netif_1, ipc_spinlock_g);
    hif_data_trace(IPC_UNBIND_LAN_NETIF, 0, netif_1, netif_id_1, netif_2, netif_id_2);

    /* Setup LAN netif 1 */
    if (netif_1 && netif_2) {
        features_1 = netif_1->config.features;

        IPC_ASSERT(features_1 & IPC_F_LAN);
        IPC_ASSERT(netif_1->lan_netif && netif_2->lan_netif);

        /* Unbind netif */
        netif_1->lan_netif = NULL;

        context_1 = netif_1->config.callback_context;
        module_id_1 = netif_1->config.module_id;
    } else {
        hif_trace_error(IPC_TR_LAN_NETIF_UNBIND_INVALID_NETIF, netif_1, netif_id_1, netif_2, netif_id_2);
        if (netif_1) {
            IPC_W_UNLOCK_OBJECT(netif_1, ipc_spinlock_g);
        }
        if (netif_2) {
            IPC_R_UNLOCK_OBJECT(netif_2, ipc_spinlock_g);
        }
        IPC_ASSERT(KAL_FALSE);
    }

    IPC_W_TO_R_LOCK_OBJECT(netif_1, ipc_spinlock_g);
    IPC_R_TO_W_LOCK_OBJECT(netif_2, ipc_spinlock_g);

    /* Setup LAN netif 2 */
    if (netif_2) {
        features_2 = netif_2->config.features;

        IPC_ASSERT(features_2 & IPC_F_LAN);
        IPC_ASSERT(netif_2->lan_netif);

        /* Unbind netif */
        netif_2->lan_netif = NULL;

        context_2 = netif_2->config.callback_context;
        module_id_2 = netif_2->config.module_id;
    } else {
        hif_trace_error(IPC_TR_LAN_NETIF_UNBIND_INVALID_NETIF, netif_1, netif_id_1, netif_2, netif_id_2);
        if (netif_2) {
            IPC_W_UNLOCK_OBJECT(netif_2, ipc_spinlock_g);
        }
        IPC_R_UNLOCK_OBJECT(netif_1, ipc_spinlock_g);
        IPC_ASSERT(KAL_FALSE);
    }

    IPC_W_UNLOCK_OBJECT(netif_2, ipc_spinlock_g);
    IPC_R_UNLOCK_OBJECT(netif_1, ipc_spinlock_g);

    /* Link down LAN netif 1 */
    link_req = (ipc_link_req_t *)construct_local_para(sizeof(ipc_link_req_t), TD_RESET);
    IPC_ASSERT(link_req);

    link_req->callback_context = context_1;
    link_req->ip_type = IPC_IP_TYPE_MIXED;
    link_req->req_type = IPC_LINK_REQ_TYPE_MDT;

    msg_send6(MOD_IPCORE, /* src_mod_id */
            module_id_1, /* dest_mod_id */
            IPCORE_SAP, /* sap_id */
            MSG_ID_IPCORE_LINK_DOWN_REQ, /* msg_id */
            (struct local_para_struct *)link_req, /* local_para_ptr */
            NULL); /* peer_buff_ptr */

    /* Link down LAN netif 2 */
    link_req = (ipc_link_req_t *)construct_local_para(sizeof(ipc_link_req_t), TD_RESET);
    IPC_ASSERT(link_req);

    link_req->callback_context = context_2;
    link_req->ip_type = IPC_IP_TYPE_MIXED;
    link_req->req_type = IPC_LINK_REQ_TYPE_MDT;

    msg_send6(MOD_IPCORE, /* src_mod_id */
            module_id_2, /* dest_mod_id */
            IPCORE_SAP, /* sap_id */
            MSG_ID_IPCORE_LINK_DOWN_REQ, /* msg_id */
            (struct local_para_struct *)link_req, /* local_para_ptr */
            NULL); /* peer_buff_ptr */
}
#endif

void ipc_on_query_info(module_type src_mod_id, local_para_struct *local_para_ptr)
{
    ipc_netif_list_t netif_list_info;

    hif_trace_info(IPC_TR_QUERY_INFO_START, src_mod_id, local_para_ptr);

    /* ---------- Initiate information for response ---------- */
    kal_mem_set(&netif_list_info, 0, sizeof(ipc_netif_list_t));

    /* ---------- Collect information ---------- */
    ipc_query_netif_list(&netif_list_info);

    /* ---------- Response ---------- */
    if (MOD_NIL != src_mod_id)
    {
        ipc_query_info_t *cnf_msg_p;

        cnf_msg_p = (ipc_query_info_t *)construct_local_para(sizeof(ipc_query_info_t), TD_RESET);
        IPC_ASSERT(cnf_msg_p);

        /* Fill response from indication structure */
        kal_mem_cpy(&(cnf_msg_p->netif), &netif_list_info, sizeof(ipc_netif_list_t));

        hif_trace_info(IPC_TR_QUERY_INFO_CNF, src_mod_id);

#ifdef ATEST_SYS_IPCORE
        ipc_ut_msg_send6(
                MOD_IPCORE,
                src_mod_id,
                IPCORE_SAP,
                MSG_ID_IPCORE_QUERY_INFO_CNF,
                (local_para_struct*)cnf_msg_p,
                NULL
                );
#else
        msg_send6(
                MOD_IPCORE,
                src_mod_id,
                IPCORE_SAP,
                MSG_ID_IPCORE_QUERY_INFO_CNF,
                (local_para_struct*)cnf_msg_p,
                NULL
                );
#endif
    }else
    {
        hif_trace_error(IPC_TR_QUERY_INFO_NO_MOD_ID_FOR_CFN, src_mod_id, MOD_NIL);
    }
    hif_trace_info(IPC_TR_QUERY_INFO_END);
}

static void ipc_reg_callbacks(void)
{
    /*
     * Register the callback functions with UPCM.
     */
    IPC_REG_CBK_DLVR_DL_SDU(ipc_on_did_downlink_multiple_ps); /* LTE downlink callback. */
    IPC_REG_CBK_NOTIFY_LTE_TICK_SOURCE(ipc_on_lte_tick_source); /* LTE change polling source */
}

kal_uint16 ipc_calc_checksum16(
        kal_uint8  *data,
        kal_uint32  length)
{
    kal_uint32 odd = ((kal_uint32)data & 0x1);
    kal_uint32 offset;
    kal_uint32 sum32;
    kal_uint32 idx;
    kal_uint16 sum16;

    if (!odd) {
        sum32 = 0;
    } else {
        sum32 = ((kal_uint16)(*data) << 8);
        data++;
        length--;
    }

    offset = ((length >> 1) << 1);
    for (idx = 0; idx < offset; idx += 2) {
        sum32 += *((kal_uint16 *)(data + idx));
    }
    if ((length & 0x1)) {
        sum32 += (kal_uint16)(*(data + length - 1));
    }

    sum32 = (sum32 & 0xffff) + (sum32 >> 16); /* add high word and low word. */
    sum16 = (kal_uint16)((sum32 & 0xffff) + (sum32 >> 16)); /* add carry */
    if (odd) {
        sum16 = (sum16 >> 8) | ((sum16 & 0xff) << 8);
    }
    return sum16;
}

kal_uint16 ipc_calc_tcp_checksum(
        kal_bool    is_ipv4,
        kal_uint8  *src_addr,
        kal_uint8  *dst_addr,
        kal_uint8  *tcp_header,
        kal_uint32  tcp_len)
{
    kal_uint32 sum32;
    kal_uint32 length;
    kal_uint16 sum16;

    /*
     * It's designed for length < 2^16.
     */
    IPC_ASSERT(tcp_len <= (kal_uint32)(is_ipv4 ? 65507 : 65487));

    /*
     * Pseudo-header.
     */
    sum32 = IPC_H2N_2B(tcp_len); /* TCP length, assue it's less than 2^16. */
    sum32 += IPC_H2N_2B(IPC_HDR_PROT_TCP); /* Next Header */
    length = ((is_ipv4) ? IPC_HDR_V4_ADDR_SIZE : IPC_HDR_V6_ADDR_SIZE);
    sum32 += ipc_calc_checksum16(src_addr, length);
    sum32 += ipc_calc_checksum16(dst_addr, length);

    /*
     * TCP header and data.
     */
    sum32 += ipc_calc_checksum16(tcp_header, tcp_len);

    sum32 = (sum32 & 0xffff) + (sum32 >> 16); /* add high word and low word. */
    sum16 = (kal_uint16)((sum32 & 0xffff) + (sum32 >> 16)); /* add carry */
    sum16 = ~sum16;
    return IPC_H2N_2B(sum16);
}

kal_uint16 ipc_calc_udp_checksum(
        kal_bool    is_ipv4,
        kal_uint8  *src_addr,
        kal_uint8  *dst_addr,
        kal_uint8  *udp_header,
        kal_uint32  udp_len)
{
    kal_uint32 sum32;
    kal_uint32 length;
    kal_uint16 sum16;

    /*
     * It's designed for length < 2^16.
     */
    IPC_ASSERT(udp_len <= (kal_uint32)(is_ipv4 ? 65507 : 65487));

    /*
     * Pseudo-header.
     */
    sum32 = IPC_H2N_2B(udp_len); /* UDP length, assue it's less than 2^16. */
    sum32 += IPC_H2N_2B(IPC_HDR_PROT_UDP); /* Next Header */
    length = ((is_ipv4) ? IPC_HDR_V4_ADDR_SIZE : IPC_HDR_V6_ADDR_SIZE);
    sum32 += ipc_calc_checksum16(src_addr, length);
    sum32 += ipc_calc_checksum16(dst_addr, length);

    /*
     * UDP header and data.
     */
    sum32 += ipc_calc_checksum16(udp_header, udp_len);

    sum32 = (sum32 & 0xffff) + (sum32 >> 16); /* add high word and low word. */
    sum16 = (kal_uint16)((sum32 & 0xffff) + (sum32 >> 16)); /* add carry */
    sum16 = ~sum16;

    /*
     * 2015/07/07 Peter.Hsu
     * IPv6 UDP with zero-checksum is invalid. (RFC 6935)
     * If the checksum computation is 0, it should be replaced by 0xFFFF.
     */
    if (0 == sum16) {
        sum16 = ~sum16;
    }
    return IPC_H2N_2B(sum16);
}

kal_uint16 ipc_calc_ipv4_checksum(kal_uint8  *ip_header)
{
    kal_uint16  sum16;

    sum16 = ipc_calc_checksum16(ip_header, IPC_HDR_V4_GET_IHL(ip_header));
    sum16 = ~sum16;
    return IPC_H2N_2B(sum16);
}

static void ipc_get_qbm_datahead(void* gpd, kal_uint32 *datalen_ptr, void **payload_ptr)
{
    IPC_ASSERT(gpd && datalen_ptr && payload_ptr);

    /* Get total data length */
    *datalen_ptr = QBM_DES_GET_DATALEN(gpd);

    /* Get first data pointer */
    if (QBM_DES_GET_BDP(gpd))
    {
        if (*datalen_ptr)   /* GPD with data : get 1st BD with-data for payload head */
        {
            qbm_gpd* bd;

            /* get bd data ptr */
            bd = QBM_DES_GET_DATAPTR(gpd);

            /* Loop to trace 1st DL BD with data buffer */
            while (bd && (QBM_DES_GET_DATALEN(bd) == 0))
            {
                bd = (QBM_DES_GET_EOL(bd))?(NULL):((qbm_gpd*)QBM_DES_GET_NEXT(bd));
            }

            if (bd)
            {
                *payload_ptr = (kal_uint8 *)QBM_DES_GET_DATAPTR(bd);
            } else
            {
                hif_trace_error(IPC_TR_GET_QBM_DATAHEAD_ZERO_LENGTH_BD, gpd, QBM_DES_GET_DATALEN(gpd));
                *payload_ptr = NULL;
            }
        }else   /* GPD without data : get 1st BD */
        {
            void* bd;

            /* get bd data ptr */
            bd = QBM_DES_GET_DATAPTR(gpd);

            *payload_ptr = (kal_uint8 *)QBM_DES_GET_DATAPTR(bd);
        }
    } else {
        *payload_ptr = (kal_uint8*)QBM_DES_GET_DATAPTR(gpd);
    }
}


static void ipc_push_qbm_datahead(void* gpd, kal_uint32 offset, kal_uint32 *datalen_ptr, void **payload_ptr)
{
    kal_uint8* data_ptr = NULL;
    kal_uint32 data_len = 0;

    IPC_ASSERT(gpd && datalen_ptr && payload_ptr);

    if (QBM_DES_GET_BDP(gpd)) {
        void* bd;

        /* set bd data ptr */
        bd = QBM_DES_GET_DATAPTR(gpd);

        data_ptr = (kal_uint8*)QBM_DES_GET_DATAPTR(bd);
        QBM_DES_SET_DATAPTR(bd, data_ptr-offset);

        /* set bd data len */
        data_len = QBM_DES_GET_DATALEN(bd);
        QBM_DES_SET_DATALEN(bd, data_len+offset);

        /* set bd checksum */
        qbm_cal_set_checksum(bd);
    } else {
        data_ptr = (kal_uint8*)QBM_DES_GET_DATAPTR(gpd);
        QBM_DES_SET_DATAPTR(gpd, data_ptr-offset);
    }

    /* set gpd data len */
    data_len = QBM_DES_GET_DATALEN(gpd);
    QBM_DES_SET_DATALEN(gpd, data_len+offset);

    /* set gpd checksum */
    qbm_cal_set_checksum(gpd);

    *datalen_ptr = data_len + offset;
    *payload_ptr = (void*)(data_ptr - offset);
}

#ifdef __ESL_COSIM_HIF__
void ipc_on_esl_netif_attach_done(local_para_struct *local_para_ptr)
{
    hif_esl_netif_parm *in_parm = (hif_esl_netif_parm *)local_para_ptr;
    hif_esl_netif_parm *out_parm;

    out_parm = (hif_esl_netif_parm *)construct_local_para(sizeof(hif_esl_netif_parm), TD_RESET);
    out_parm->netif_id = in_parm->netif_id;

    /* In ESL environment, IPCore needs to send ILM to UPCM to request binding if network interface sent the ILM MSG_ID_HIF_IPCORE_ESL_ATTACH_DONE_IND */
    msg_send6(MOD_IPCORE, /* src_mod_id */
              MOD_UPCM, /* dest_mod_id */
              IPCORE_SAP, /* sap_id */
              MSG_ID_IPCORE_UPCM_ESL_PDN_BIND_REQ, /* msg_id */
              (local_para_struct *)out_parm, /* local_para_ptr */
              NULL); /* peer_buff_ptr */
}
#endif

static void ipc_atp_edallow_req_hdlr(ilm_struct *ilm)
{
    kal_uint8 atp_mod_idx = ilm->src_mod_id - MOD_ATP;
    atp_ipcore_edallow_req_struct *edallow_ind = (atp_ipcore_edallow_req_struct *) ilm->local_para_ptr;
    if (edallow_ind->result == KAL_TRUE) {
        ipc_set_data_allowed_info(atp_mod_idx, edallow_ind->edallow_value, edallow_ind->para);
    }
}

static void ipc_atp_ecncfg_req_hdlr(ilm_struct *ilm)
{
    kal_uint8 atp_mod_idx = ilm->src_mod_id - MOD_ATP;
    atp_ipcore_ecncfg_req_struct *ecncfg_ind = (atp_ipcore_ecncfg_req_struct *) ilm->local_para_ptr;
    if (ecncfg_ind->result == KAL_TRUE) {
        ipc_set_mobile_data_info(atp_mod_idx, ecncfg_ind->mobile_data);
    }
}

static void ipc_em_update_req_hdlr(local_para_struct *local_para_ptr)
{
    l4cps_em_update_req_struct *p_req = (l4cps_em_update_req_struct *)local_para_ptr;

    /*
     * only process Tool source,
     * Ingore AP.
     * AP EM needed to be discussed.
     */
    if (p_req->em_src == EM_FROM_ELT) {
        switch (p_req->info_request[IPC_EM_UL_THROTTLE_STATUS]) {
            case EM_ON:
                ipc_em_on_s = 1;
                break;

            case EM_OFF:
                ipc_em_on_s = 0;
                break;

            case EM_NC:
                /* no change */
                break;

            default:
                /*can't reach here*/
                IPC_ASSERT(KAL_FALSE);
        }

        /* For EM ELT update info*/
        ipc_em_send_ul_throttle_status();
    }
}

static void ipc_plmn_list_ind_handler(local_para_struct *local_para_ptr)
{
    l4c_ipcore_plmn_list_ind_struct *p_ind = (l4c_ipcore_plmn_list_ind_struct *)local_para_ptr;
    kal_bool to_send_msg;

    switch (p_ind->plmn_list_action) {
        case PLMN_LIST_NO_ACTION:
            ipc_ul_enable_g = KAL_TRUE;

            /*
             * IPCORE need to process ul queue if ul pending queue is not empty
             */
            IPC_SPIN_LOCK(ipc_spinlock_g);
            to_send_msg = ( (!ipc_ul_processing_s) &&
                            (!ipc_are_ul_queues_empty()) );
            if (to_send_msg) {
                ipc_ul_processing_s = KAL_TRUE;
            }
            IPC_SPIN_UNLOCK(ipc_spinlock_g);

            /*
             * Switch to IPCORE context.
             */
            if (to_send_msg) {
                msg_send6(  MOD_NIL, /* src_mod_id */
                            MOD_IPCORE, /* dest_mod_id */
                            IPCORE_DATAPATH_SAP, /* sap_id */
                            MSG_ID_IPCORE_PROCESS_UL_QUEUE_REQ, /* msg_id */
                            NULL, /* local_para_ptr */
                            NULL); /* peer_buff_ptr */
            }
            break;
        case PLMN_LIST_ONGOING:
            ipc_ul_enable_g = KAL_FALSE;
            break;
        case PLMN_LIST_ABORTING:
        default:
            break;
    }
}

static void ipc_query_ccci_runtime_data()
{
#if defined(__HIF_CCCI_SUPPORT__)
    kal_uint32  mtu, ccci_fast_runtime;
    CCCI_RUNTIME_FEATURE_SUPPORT_T result;

    /* MTU */
    result = ccci_runtime_data_query(AP_CCCI_RUNTIME_NETWORK_MTU_SIZE, &mtu, 4);
    if (CCCI_RUNTIME_FEATURE_MUST_SUPPORT == result.support_mask) {
        ipc_dl_valid_packet_len_s = mtu;
    } else {
        ipc_dl_valid_packet_len_s = IPC_DL_INVALID_LEN_DEFAULT;
    }

#if defined(__FAST_CCCI_HEADER__)
    /* CCCI Fast Header */
    result = ccci_runtime_data_query(AP_CCCI_RUNTIME_CCCI_FAST_HEADER, &ccci_fast_runtime, 4);
    if (CCCI_RUNTIME_FEATURE_MUST_SUPPORT == result.support_mask) {
        ipc_is_support_ccci_fast_header_s = KAL_TRUE;
    } else {
        ipc_is_support_ccci_fast_header_s = KAL_FALSE;
    }
#endif // __FAST_CCCI_HEADER__
#else
    /* MTU */
    ipc_dl_valid_packet_len_s = IPC_DL_INVALID_LEN_DEFAULT;

#if defined(__FAST_CCCI_HEADER__)
    /* CCCI Fast Header */
    ipc_is_support_ccci_fast_header_s = KAL_FALSE;
#endif // __FAST_CCCI_HEADER__
#endif
}

static void ipc_spinlock_init()
{
    IPC_ASSERT(!ipc_spinlock_g);
    ipc_spinlock_g = kal_create_spinlock(IPC_LOCK_NAME);
}

static void ipc_test_loopback_ind_handler(ilm_struct *ilm)
{
    ipcore_upcm_testloop_ind_struct    *ind = (ipcore_upcm_testloop_ind_struct *)(ilm->local_para_ptr);
    ipcore_upcm_testloop_rsp_struct    *rsp;

    switch (ind->cmd) {
        case TESTLOOP_CMD_MODE_A_ACTIVATE:
            IPC_ASSERT(ipc_test_loopback_mode_s == IPC_TEST_LOOPBACK_MODE_OFF);
            ipc_test_loopback_mode_s = IPC_TEST_LOOPBACK_MODE_A;
            IPC_REG_CBK_DLVR_DL_SDU(ipc_on_did_downlink_test_mode);
            break;
        case TESTLOOP_CMD_MODE_A_DEACTIVATE:
            IPC_ASSERT(ipc_test_loopback_mode_s == IPC_TEST_LOOPBACK_MODE_A);
            ipc_test_loopback_mode_s = IPC_TEST_LOOPBACK_MODE_OFF;
            IPC_REG_CBK_DLVR_DL_SDU(ipc_on_did_downlink_multiple_ps);
            break;
        case TESTLOOP_CMD_MODE_B_ACTIVATE:
            IPC_ASSERT(ipc_test_loopback_mode_s == IPC_TEST_LOOPBACK_MODE_OFF);
            ipc_test_loopback_mode_s = IPC_TEST_LOOPBACK_MODE_B;
            IPC_REG_CBK_DLVR_DL_SDU(ipc_on_did_downlink_test_mode);
            break;
        case TESTLOOP_CMD_MODE_B_DEACTIVATE:
            IPC_ASSERT(ipc_test_loopback_mode_s == IPC_TEST_LOOPBACK_MODE_B);
            ipc_test_loopback_mode_s = IPC_TEST_LOOPBACK_MODE_OFF;
            IPC_REG_CBK_DLVR_DL_SDU(ipc_on_did_downlink_multiple_ps);
            break;
        default:
            /*can't reach here*/
            IPC_ASSERT(KAL_FALSE);
    }

    rsp = (ipcore_upcm_testloop_rsp_struct *)construct_local_para(sizeof(ipcore_upcm_testloop_rsp_struct), TD_RESET);
    IPC_ASSERT(rsp);

    /* Fill result */
    rsp->is_success = KAL_TRUE;

    msg_send6(MOD_IPCORE, /* src_mod_id */
              ilm->src_mod_id, /* dest_mod_id */
              IPCORE_SAP, /* sap_id */
              MSG_ID_IPCORE_UPCM_TESTLOOP_RSP, /* msg_id */
              (struct local_para_struct *)rsp, /* local_para_ptr */
              NULL); /* peer_buff_ptr */
}

static void ipc_pdn_info_notify(module_type src_mod_id, local_para_struct *local_para_ptr)
{
    ipcore_upcm_pdn_info_ind_struct *param = (ipcore_upcm_pdn_info_ind_struct*)local_para_ptr;
    kal_uint32 pdn_id = param->pdn_id;
    kal_uint32 proto_idx = 0;

    IPC_GET_PROTOID_FROM_MODID(src_mod_id, proto_idx);
    IPC_MASK_PROTOID_ON_PDNID(pdn_id, proto_idx);

    switch(param->pdn_info) {
        case UPCM_PDN_ACT:
            break;

        case UPCM_PDN_DEACT:
            IPC_ASSERT(IPC_PROXY_IPV6_RA_POOL_SIZE > pdn_id);
            ipc_proxy_ipv6_ra_pool_push(pdn_id, NULL);      // Reset RA pool when PDN is deactivated
            break;

        default:
            IPC_ASSERT(KAL_FALSE);
            break;
    }

    return;
}

kal_bool ipc_query_pdn_by_netif(kal_uint32 netif_id,
                                kal_uint8 ip_type,
                                kal_int32 *pdn_id)
{
    ipc_netif_t *netif = NULL;
    kal_bool ret = KAL_FALSE;

    if (NULL == pdn_id) {
        hif_trace_error(IPC_TR_INVALID_ARGS, __FUNCTION__);
        return KAL_FALSE;
    }

    netif = ipc_find_netif(netif_id);
    if (netif) {
        *pdn_id = ipc_map_netif_to_pdn_id(netif, ip_type);
        if (IPC_INVALID_PDN_ID != *pdn_id) {
            ret = KAL_TRUE;
        }
        IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
    }

    return ret;
}

static void ipc_send_ra_pkt(ilm_struct *p_ilm)
{
    qbm_gpd *p_ra_gpd = NULL;
    d2cm_ipcore_info_ind_struct *p_ind = NULL;
    kal_int32 pdn_id = 0;
    kal_uint32 netif_id = 0;

    p_ind = (d2cm_ipcore_info_ind_struct *)p_ilm->local_para_ptr;
    netif_id = IPC_NETIF_ID_LHIF_BEGIN | p_ind->netif_id;
    if (KAL_FALSE == ipc_query_pdn_by_netif(netif_id, IPC_IP_TYPE_IPV6, &pdn_id)) {
        hif_trace_error(IPC_TR_GET_PDN_ID_FAILED, __FUNCTION__);
        return;
    }

    /* Forward previous IPv6 RA to AP here */
    p_ra_gpd = ipc_proxy_ipv6_ra_pool_pop(pdn_id);
    if(p_ra_gpd) {
        ipc_pkt_t pkt;

        pkt.buf_type = IPC_PKT_DES_TYPE_GPD;
        pkt.head = p_ra_gpd;
        pkt.tail = p_ra_gpd;

        hif_trace_info(IPC_TR_SEND_RA_GPD_NETIF, __FUNCTION__, p_ra_gpd, netif_id);
        ipc_send_dl_pkt_in_did(&pkt, NULL, netif_id);
    }
}

/*------------------------------------------------------------------------------
 * Public fucntions.
 *----------------------------------------------------------------------------*/
kal_bool ipc_init(void)
{
    nmu_init();
    hmu_boot_init();

    ipc_spinlock_init();
    ipc_object_init();
    ipc_queue_init();
    ipc_reg_callbacks();
    ipc_timer_init();
    ipc_query_ccci_runtime_data();

    pfm_init();

    return KAL_TRUE;
}

void ipc_on_ilm(ilm_struct *ilm)
{
    switch (ilm->msg_id) {
    case MSG_ID_IPCORE_PROCESS_UL_QUEUE_REQ:
        ipc_on_process_ul_queue();
        break;

    case MSG_ID_IPCORE_PROCESS_DL_QUEUE_REQ:
        ipc_did_downlink_dequeue();
        break;

    case MSG_ID_IPCORE_RETRY_UL_RELOAD_REQ:
        ipc_on_retry_ul_reload();
        break;

    case MSG_ID_IPCORE_UPCM_PDN_BIND_IND:
        {
            ipcore_upcm_pdn_bind_ind_struct *param = (ipcore_upcm_pdn_bind_ind_struct *)ilm->local_para_ptr;
            kal_uint8 proto_idx;

            IPC_GET_PROTOID_FROM_MODID(ilm->src_mod_id, proto_idx);
            IPC_MASK_PROTOID_ON_PDNID(param->pdn_id, proto_idx);
        }
        ipc_on_pdn_bind_top(ilm->src_mod_id, ilm->local_para_ptr);
        break;

    case MSG_ID_IPCORE_UPCM_PDN_UNBIND_IND:
        {
            ipcore_upcm_pdn_unbind_ind_struct *param = (ipcore_upcm_pdn_unbind_ind_struct *)ilm->local_para_ptr;
            kal_uint8 proto_idx;

            IPC_GET_PROTOID_FROM_MODID(ilm->src_mod_id, proto_idx);
            IPC_MASK_PROTOID_ON_PDNID(param->pdn_id, proto_idx);
        }
        ipc_on_pdn_unbind(ilm->local_para_ptr);
        break;

    case MSG_ID_IPCORE_UPCM_PDN_REBIND_IND:
        {
            ipcore_upcm_pdn_rebind_ind_struct *param = (ipcore_upcm_pdn_rebind_ind_struct *)ilm->local_para_ptr;
            kal_uint8 proto_idx;

            IPC_GET_PROTOID_FROM_MODID(ilm->src_mod_id, proto_idx);
            IPC_MASK_PROTOID_ON_PDNID(param->old_pdn_id, proto_idx);
            IPC_MASK_PROTOID_ON_PDNID(param->new_pdn_id, proto_idx);
        }
        ipc_on_pdn_rebind(ilm->src_mod_id, ilm->local_para_ptr);
        break;

    case MSG_ID_IPCORE_LHIFCORE_QUEUE_MAPPING_RSP:
        {
            ipc_lhifcore_q_mapping_msg_t *msg = (ipc_lhifcore_q_mapping_msg_t *)ilm->local_para_ptr;
            ipc_on_pdn_bind_bot(msg->bind_src_mod_id, msg->netif_features, (local_para_struct *)&(msg->bind_ind), HIF_IPC_OK);
            break;
        }

    case MSG_ID_DHCP4C_ACTIVATE_RSP:
        ipc_on_dhcp4c_activate_rsp(ilm->local_para_ptr);
        break;

    case MSG_ID_DHCP4C_DEACTIVATE_RSP:
        ipc_on_dhcp4c_deactivate_rsp(ilm->local_para_ptr);
        break;

    case MSG_ID_DHCP4C_IP_UP_IND:
        ipc_on_dhcp4c_ip_up_ind(ilm->local_para_ptr);
        break;

    case MSG_ID_DHCP4C_IP_DOWN_IND:
        ipc_on_dhcp4c_ip_down_ind(ilm->local_para_ptr);
        break;

    case MSG_ID_DHCP4C_PACKET_IND:
        ipc_on_dhcp4c_packet_ind(ilm->local_para_ptr);
        break;

#ifdef ATEST_SYS_IPCORE
    case MSG_ID_IPCORE_UL_PACKET_FILTERED_REQ:
        ipc_ut_on_ul_packet_filtered_req(ilm->local_para_ptr);
        break;

    case MSG_ID_IPCORE_DL_PACKET_FILTERED_REQ:
        ipc_ut_on_dl_packet_filtered_req(ilm->local_para_ptr);
        break;

    case MSG_ID_IPCORE_UL_PACKET_FILTERED_WITH_INFO_REQ:
        ipc_ut_on_ul_packet_filtered_with_info_req(ilm->local_para_ptr);
        break;

    case MSG_ID_IPCORE_DL_PACKET_FILTERED_WITH_INFO_REQ:
        ipc_ut_on_dl_packet_filtered_with_info_req(ilm->local_para_ptr);
        break;

#endif

    case MSG_ID_IPCORE_LINK_UP_IND:
        ipc_on_ipcore_link_up_ind(ilm->local_para_ptr);
        break;

    case MSG_ID_IPCORE_IP_UP_IND:
        ipc_on_ipcore_ip_up_ind(ilm->local_para_ptr);
        break;

    case MSG_ID_IPCORE_LINK_UP_RSP:
        ipc_on_ipcore_up_rsp(ilm->local_para_ptr);
        break;

    case MSG_ID_IPCORE_IP_UP_RSP:
        ipc_on_ipcore_up_rsp(ilm->local_para_ptr);
        break;

    case MSG_ID_IPCORE_QUERY_INFO_REQ:
        ipc_on_query_info(ilm->src_mod_id, ilm->local_para_ptr);
        break;

#ifdef __ESL_COSIM_HIF__
    case MSG_ID_HIF_IPCORE_ESL_ATTACH_DONE_IND:
        ipc_on_esl_netif_attach_done(ilm->local_para_ptr);
        break;
#endif

    case MSG_ID_IPCORE_SET_UL_THROTTLE:
        ipc_set_ul_throttle(ilm->local_para_ptr);
        break;

    case MSG_ID_IPCORE_VDM_IMS_EMERGENCY_CALL_IND:
        ipc_ims_emergency_call_ind_handler(ilm->local_para_ptr);
        break;

    case MSG_ID_IPCORE_REGISTER_FILTER_REQ:
        ipc_register_filter_req_handler(ilm->local_para_ptr);
        break;

    case MSG_ID_IPCORE_DEREGISTER_FILTER_REQ:
        ipc_deregister_filter_req_handler(ilm->local_para_ptr);
        break;

    case MSG_ID_TIMER_EXPIRY:
    {
#ifndef ATEST_SYS_IPCORE
        switch (evshed_get_index(ilm)) {
            case IPC_ES_INDEX_UL_THROTTLE:
                evshed_timer_handler(ipc_es_ul_throttle_s);
                break;
            default:
                IPC_ASSERT(0);
                break;
        }
#else
        ipc_ul_throttle_timeout(NULL);
#endif
        break;
    }

    case MSG_ID_L4CPS_EM_UPDATE_REQ:
        ipc_em_update_req_hdlr(ilm->local_para_ptr);
        break;

    case MSG_ID_ATP_IPCORE_ECNCFG_REQ:
        ipc_atp_ecncfg_req_hdlr(ilm);
        break;

    case MSG_ID_ATP_IPCORE_EDALLOW_REQ:
        ipc_atp_edallow_req_hdlr(ilm);
        break;

    case MSG_ID_L4C_IPCORE_PLMN_LIST_IND:
#ifndef __NOT_BLOCK_TX_WHEN_PLMN_LIST__
        ipc_plmn_list_ind_handler(ilm->local_para_ptr);
#endif
        break;

    /* MSG for Test loopback mode */
    case MSG_ID_IPCORE_UPCM_TESTLOOP_IND:
        ipc_test_loopback_ind_handler(ilm);
        break;

    case MSG_ID_IPCORE_UPCM_PDN_INFO_IND:
        ipc_pdn_info_notify(ilm->src_mod_id, ilm->local_para_ptr);
        break;

    case MSG_ID_D2CM_IPCORE_INFO_IND:
        ipc_send_ra_pkt(ilm);
        break;

    /* MSG to PFM (Packet Filter Manager) */
    case MSG_ID_PFM_REGISTER_FILTER_REQ:
    case MSG_ID_PFM_DEREGISTER_FILTER_REQ:
    case MSG_ID_AP_STATUS_IND:
        pfm_on_ilm(ilm);
        break;

    default:
        IPC_UT_ASSERT(KAL_FALSE, IPC_UT_NO_ERROR);
        break;
    }
}

void ipc_clean_private_data(void)
{
    ipc_filter_init();
    pfm_reset();
}

kal_bool ipc_reset(void)
{
    kal_uint64      idx;
    ipc_session_t  *session;
    kal_uint32      session_ip_id;
    kal_uint8       session_type;

    hif_trace_info(IPC_TR_RESET_START);

    ipc_in_reset_s = KAL_TRUE;

    /*
     * 2012/07/24, per moja.hsu MoDIS unit test requirement,
     * deactivate all sessions and register callback functions with UPCM at reset.
     */
    for (idx = 0; idx < IPC_MAX_SESSION_CNT; idx++) {
        session = ipc_find_session_by_context(idx);

        hif_trace_info(IPC_TR_DEL_SESSION, session, idx);

        if (session) {
            session_ip_id = session->ip_id;
            session_type = session->type;
            IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);

            hif_trace_info(IPC_TR_DEL_SESSION_INFO, session_type, session->ip_id, idx);

            if (IPC_IP_TYPE_IPV6 == session_type || IPC_IP_TYPE_MIXED == session_type) {
                nmu_set_ip6_dns_num(session_ip_id, 0);
                nmu_set_ip6_down(session_ip_id);
            }
            if (IPC_IP_TYPE_IPV4 == session_type || IPC_IP_TYPE_MIXED == session_type) {
                nmu_set_ip4_dns_num(session_ip_id, 0);
                nmu_set_ip4_down(session_ip_id);
            }

            ipc_disable_dhcp4c(session); /* disable DHCPv4 it's been enabled */
            ipc_update_session_state(session, IPC_SESSION_STATE_UNBIND);
            ipc_del_session(session);
        }
    }

    /* Remove all attached network interface during reset */
    for (idx = 0 ; idx < IPC_MAX_NETIF_CNT ; idx ++)
    {
        ipc_netif_t *netif;

        netif = ipc_find_netif_by_bit_id(1 << idx);

        hif_trace_info(IPC_TR_DEL_NETIF, netif, idx);

        if (netif) {
            IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
            ipc_del_netif(netif);
        }
    }

    ipc_filter_init();
    ipc_ntfy_init();

    ipc_queue_init();
    ipc_reg_callbacks();

    pfm_reset();

    ipc_in_reset_s = KAL_FALSE;

    hif_trace_info(IPC_TR_RESET_END);

    return KAL_TRUE;
}

kal_bool ipc_is_in_reset(void)
{
    return ipc_in_reset_s;
}

kal_bool ipc_attach(
    ipc_conf_t             *config,
    ipc_handle_t           *handle)
{
    ipc_netif_t     *netif;

    *handle = IPC_INVALID_HANDLE;

    if (NULL == config) {
        IPC_ASSERT(KAL_FALSE);
        return KAL_FALSE;
    }
    hif_trace_info(IPC_TR_NETIF_ATTACHING, config->module_id, config->netif_id, config->callback_context, config->features);

    netif = ipc_new_netif(config);
    if (netif) {
        /*
         * For Test loopback mode.
         * IPCore will save the ID of the netif which set the IPC_F_TEST_LOOPBACK_X flag.
         */
        if (config->features & IPC_F_TEST_LOOPBACK_A) {
            ipc_test_loopback_a_netif_id_s = config->netif_id;
        } else if (config->features & IPC_F_TEST_LOOPBACK_B) {
            ipc_test_loopback_b_netif_id_s = config->netif_id;
        }

        *handle = (ipc_handle_t)netif;

        /* Notify for attach event */
        ipc_do_ntfy(netif, IPC_NTFY_TYPE_ATTACH);

        return KAL_TRUE;
    } else {
        return KAL_FALSE;
    }
}

kal_bool ipc_detach(
    ipc_handle_t           handle)
{
    hif_trace_info(IPC_TR_NETIF_DETACHING, handle);

    /* Notify for detach event "before" actually detach network interface */
    ipc_do_ntfy((ipc_netif_t *)handle, IPC_NTFY_TYPE_DETACH);

    return ipc_del_netif((ipc_netif_t *)handle);
}

kal_bool ipc_uplink(
    ipc_handle_t            handle,
    ipc_io_request_t       *ior)
{
    ipc_io_request_t           *curr_ior;
    ipc_io_request_t           *tail_ior;
    kal_uint32                  ior_cnt;
    kal_bool                    to_send_msg;
    ipc_netif_t                *netif = (ipc_netif_t *)handle;
    kal_uint32                  netif_features;
    ipc_ul_queue_priority_e     q_priority;

    HIF_SWLA_START("IU1");

    /*
     * Note that, since we reload UL buffers in IPCORE context (ipc_on_process_ul_queue()),
     * all exception cases reuquired for dropping UL packets discard will be done there
     * for simplicity. So, netif lock is not required here.
     */

    if (ior) {
        /*
         * Enqueue the IOR list and keep the information about the corresponding netif.
         */
        curr_ior = ior;
        ior_cnt = 0;
        do {
            ((ipc_internal_ior_t *)curr_ior)->netif = netif;
            tail_ior = curr_ior;
            ior_cnt ++;

            curr_ior = curr_ior->next_request;
        } while (curr_ior);

        netif_features = netif->config.features;

        hif_data_trace(IPC_UL_UPLINK_CALLBACK, 0, ior, netif, netif_features);

        if ( !(netif_features & IPC_F_LATENCY_CONCERN) ) {
            /* IOR from normal Netif should be low-priority */
            q_priority = IPC_UL_QUEUE_PRIORITY_LOW;
        } else {
            /* IOR from LATENCY-CONCERN Netif should be high-priority */
            q_priority = IPC_UL_QUEUE_PRIORITY_HIGH;
        }
        ipc_push_ior_list_to_ior_queue(ior, tail_ior, ior_cnt, q_priority);

        IPC_SPIN_LOCK(ipc_spinlock_g);
        to_send_msg = (!ipc_ul_processing_s);
        ipc_ul_processing_s = KAL_TRUE;
        IPC_SPIN_UNLOCK(ipc_spinlock_g);

        /*
         * Switch to IPCORE context.
         */
        if (to_send_msg) {
            msg_send6(  MOD_NIL, /* src_mod_id */
                        MOD_IPCORE, /* dest_mod_id */
                        IPCORE_DATAPATH_SAP, /* sap_id */
                        MSG_ID_IPCORE_PROCESS_UL_QUEUE_REQ, /* msg_id */
                        NULL, /* local_para_ptr */
                        NULL); /* peer_buff_ptr */
        }

        HIF_SWLA_STOP("IU1");
        return KAL_TRUE;
    } else {
        hif_trace_error(IPC_TR_UL_INVALID_PARAM, handle, ior);
        HIF_SWLA_STOP("IU1");
        return KAL_FALSE;
    }
}

kal_int32 ipc_get_ip_id(
    ipc_handle_t            handle)
{
    ipc_netif_t *netif = (ipc_netif_t *)handle;
    kal_int32   ip_id;

    IPC_R_LOCK_OBJECT(netif, ipc_spinlock_g);
    if (netif) {
        ip_id = ipc_map_netif_to_ip_id(netif);
        IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
    } else {
        ip_id = -1;
    }

    return ip_id;
}

void ipc_need_ul_reload(
    ipc_handle_t            handle)
{
    ipc_netif_t *netif = (ipc_netif_t *)handle;

    IPC_R_LOCK_OBJECT(netif, ipc_spinlock_g);
    if (netif) {
        ipc_set_netif_ul_reload_retry(netif, KAL_TRUE);
        ipc_set_netif_ul_set_need_reload(netif, KAL_TRUE);
        IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
    }
}

void ipc_check_ul_reload_retry(void)
{
    kal_uint64      netif_ul_reload_retry;
    kal_bool        to_send_msg;

    netif_ul_reload_retry = ipc_get_all_netif_ul_reload_retry();

    if (0 != netif_ul_reload_retry)
    {
        hif_data_trace(IPC_UL_CHECK_UL_RELOAD_RETRY, 0, netif_ul_reload_retry);

        IPC_SPIN_LOCK(ipc_spinlock_g);
        to_send_msg = (!ipc_ul_reload_retrying_s);
        ipc_ul_reload_retrying_s = KAL_TRUE;
        IPC_SPIN_UNLOCK(ipc_spinlock_g);

        if (to_send_msg) {
            msg_send6(  MOD_NIL, /* src_mod_id */
                        MOD_IPCORE, /* dest_mod_id */
                        IPCORE_DATAPATH_SAP, /* sap_id */
                        MSG_ID_IPCORE_RETRY_UL_RELOAD_REQ, /* msg_id */
                        NULL, /* local_para_ptr */
                        NULL); /* peer_buff_ptr */
        }
        hmu_hifeg_start(HIF_DRV_EG_HIF_RELOAD_EVNET);
    }else{
        hmu_hifeg_stop(HIF_DRV_EG_HIF_RELOAD_EVNET);
    }
}

void ipc_notify_link_change(kal_uint32 netif_id, kal_uint8 ip_type, kal_bool link_update, kal_bool is_up)
{
    ipc_netif_t *netif;

    hif_trace_info(IPC_TR_NOTIFY_LINK_CHANGE_BEGIN, netif_id, ip_type, link_update, is_up);

    netif = ipc_find_netif(netif_id);
    if (netif)
    {
        IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);

        hif_trace_info(IPC_TR_NOTIFY_LINK_CHANGE_FOR_NETIF_BEGIN, netif, netif_id, ip_type, link_update, is_up);
        ipc_notify_netif_link_change(netif, ip_type, link_update, is_up);
        hif_trace_info(IPC_TR_NOTIFY_LINK_CHANGE_FOR_NETIF_END, netif, netif_id, ip_type, link_update, is_up);
    } else
    {
        hif_trace_info(IPC_TR_NOTIFY_LINK_CHANGE_UNKNOWN_NETIF, netif_id);
    }

    hif_trace_info(IPC_TR_NOTIFY_LINK_CHANGE_END, netif_id, ip_type, link_update, is_up);
}

kal_int32
ipc_register_ul_filter_cbk(
    ipc_filter_rules_t     *rules,
    ipc_filter_callback_t   callback_func,
    void                   *callback_context)
{
    hif_trace_info(IPC_TR_REG_UL_FILTER_CBK_BEGIN, rules, callback_func, callback_context);
    return ipc_register_filter_by_ilm(KAL_TRUE, KAL_FALSE, rules, callback_func, callback_context, MOD_NIL);
}

kal_int32
ipc_register_dl_filter_cbk(
    ipc_filter_rules_t     *rules,
    ipc_filter_callback_t   callback_func,
    void                   *callback_context)
{
    hif_trace_info(IPC_TR_REG_DL_FILTER_CBK_BEGIN, rules, callback_func, callback_context);
    return ipc_register_filter_by_ilm(KAL_FALSE, KAL_FALSE, rules, callback_func, callback_context, MOD_NIL);
}

kal_int32
ipc_register_ul_filter_msg(
    ipc_filter_rules_t     *rules,
    module_type             callback_module,
    void                   *callback_context)
{
    hif_trace_info(IPC_TR_REG_UL_FILTER_MSG_BEGIN, rules, callback_module, callback_context);
    return ipc_register_filter_by_ilm(KAL_TRUE, KAL_FALSE, rules, ipc_forward_ul_packet_by_msg, callback_context, callback_module);
}

kal_int32
ipc_register_dl_filter_msg(
    ipc_filter_rules_t     *rules,
    module_type             callback_module,
    void                   *callback_context)
{
    hif_trace_info(IPC_TR_REG_DL_FILTER_MSG_BEGIN, rules, callback_module, callback_context);
    return ipc_register_filter_by_ilm(KAL_FALSE, KAL_FALSE, rules, ipc_forward_dl_packet_by_msg, callback_context, callback_module);
}

kal_int32
ipc_register_ul_filter_with_info_cbk(
    ipc_filter_rules_t               *rules,
    ipc_filter_with_info_callback_t   callback_func,
    void                             *callback_context)
{
    hif_trace_info(IPC_TR_REG_UL_FILTER_WITH_INFO_CBK_BEGIN, rules, callback_func, callback_context);
    return ipc_register_filter_by_ilm(KAL_TRUE, KAL_TRUE, rules, callback_func, callback_context, MOD_NIL);
}

kal_int32
ipc_register_dl_filter_with_info_cbk(
    ipc_filter_rules_t               *rules,
    ipc_filter_with_info_callback_t   callback_func,
    void                             *callback_context)
{
    hif_trace_info(IPC_TR_REG_DL_FILTER_WITH_INFO_CBK_BEGIN, rules, callback_func, callback_context);
    return ipc_register_filter_by_ilm(KAL_FALSE, KAL_TRUE, rules, callback_func, callback_context, MOD_NIL);
}

kal_int32
ipc_register_ul_filter_with_info_msg(
    ipc_filter_rules_t     *rules,
    module_type             callback_module,
    void                   *callback_context)
{
    hif_trace_info(IPC_TR_REG_UL_FILTER_WITH_INFO_MSG_BEGIN, rules, callback_module, callback_context);
    return ipc_register_filter_by_ilm(KAL_TRUE, KAL_TRUE, rules, ipc_forward_ul_packet_with_info_by_msg, callback_context, callback_module);
}

kal_int32
ipc_register_dl_filter_with_info_msg(
    ipc_filter_rules_t     *rules,
    module_type             callback_module,
    void                   *callback_context)
{
    hif_trace_info(IPC_TR_REG_DL_FILTER_WITH_INFO_MSG_BEGIN, rules, callback_module, callback_context);
    return ipc_register_filter_by_ilm(KAL_FALSE, KAL_TRUE, rules, ipc_forward_dl_packet_with_info_by_msg, callback_context, callback_module);
}

void
ipc_deregister_ul_filter(
    kal_int32               filter_id)
{
    hif_trace_info(IPC_TR_DEREG_UL_FILTER_BEGIN, filter_id);
    ipc_deregister_filter_by_ilm(filter_id);
}

void
ipc_deregister_dl_filter(
    kal_int32               filter_id)
{
    hif_trace_info(IPC_TR_DEREG_DL_FILTER_BEGIN, filter_id);
    ipc_deregister_filter_by_ilm(filter_id);
}

kal_bool
ipc_gpd_copy(
    kal_uint8              *dst_buffer,
    kal_uint32              dst_max_len,
    kal_uint32             *dst_len_copied,
    qbm_gpd                *src_head_gpd,
    qbm_gpd                *src_tail_gpd)
{
    kal_bool retval;

    IPC_ASSERT(dst_buffer);
    IPC_ASSERT(dst_len_copied);
    IPC_ASSERT(src_head_gpd);
    IPC_ASSERT(src_tail_gpd);

    hif_trace_info(IPC_TR_GPD_COPY_BEGIN, dst_buffer, dst_max_len, dst_len_copied, src_head_gpd, src_tail_gpd);
    retval = ipc_do_gpd_copy(dst_buffer, dst_max_len, dst_len_copied, src_head_gpd, src_tail_gpd);
    hif_trace_info(IPC_TR_GPD_COPY_END, retval, dst_max_len, *dst_len_copied);

    return retval;
}

static INLINE kal_bool
ipc_pack_pkt(
    kal_bool    uplink,
    ipc_pkt_t   *pkt,
    ipc_hdr_t   *hdr,
    qbm_gpd     **head_gpd,
    qbm_gpd     **tail_gpd)
{
    kal_bool    fill_in_headroom = KAL_FALSE;

    IPC_ASSERT(pkt);
    IPC_ASSERT(head_gpd);
    IPC_ASSERT(tail_gpd);

    if (NULL == pkt) {
        return KAL_FALSE;
    }

    if (KAL_TRUE == pkt->isGPD) {

        hif_data_trace(IPC_GE_HANDLE_GPD, 0, pkt->head, pkt->tail);

        /* For GPD TX : Set GPD pointer */
        *head_gpd = pkt->head;
        *tail_gpd = pkt->tail;

        /* Per-discussion with user (IMS), caller does NOT reserve IP/UDP header fields in GPD, and IP Core needs to fill them using headroom */
        fill_in_headroom = KAL_TRUE;
    } else {
        /* For Buffer TX : Allocate single GPD and execute memory copy */
        kal_uint32      ip_header_len;
        kal_uint32      udp_header_len;
        kal_uint32      total_len;
        kal_uint8       *ip_header;

        /* Check total packet length */
        if (hdr) {
            /* Reserve for IP/UDP header fields if needed */
            ip_header_len = ((IPC_IP_TYPE_IPV4 == hdr->ip_type) ? IPC_HDR_V4_HEADER_SIZE : IPC_HDR_V6_HEADER_SIZE);
            udp_header_len = IPC_HDR_UDP_HEADER_SIZE;
        } else {
            ip_header_len = 0;
            udp_header_len = 0;
        }

        total_len = ip_header_len + udp_header_len + pkt->data_len;

        hif_data_trace(IPC_GE_SET_ALLOC_DATA, pkt->data_len, pkt->data, ip_header_len, udp_header_len);

        if (total_len > ((KAL_TRUE == uplink)?((kal_uint32)QBM_SIZE_NET_UL_SHRD):((kal_uint32)QBM_SIZE_NET_DL)))
        {
            hif_trace_error(IPC_TR_PACK_PKT_UDP_SIZE_NG,
                    uplink, ip_header_len, udp_header_len, pkt->data_len, ((KAL_TRUE == uplink)?QBM_SIZE_NET_UL_SHRD:QBM_SIZE_NET_DL));
            return KAL_FALSE;
        }

        /* Allocate single GPD */
        if (1 != qbmt_alloc_q_no_tail(
                        (KAL_TRUE == uplink)?QBM_TYPE_NET_UL_SHRD/*UL*/:QBM_TYPE_NET_DL/*DL*/, /* type */
                        1, /* buff_num */
                        (void**)head_gpd, /* pp_head */
                        (void**)tail_gpd)) { /* pp_tail */
            hif_trace_error(IPC_TR_PACK_PKT_ALLOC_GPD_NG, total_len);
            return KAL_FALSE;
        }

        ipc_set_gpd_datalen(*head_gpd, total_len, (void**)&ip_header);

        /* IP/UDP header has reserved in payload field, no more headroom is needed in following header fill */
        fill_in_headroom = KAL_FALSE;

        /* Memory copy from data buffer to GPD */
        kal_mem_cpy(ip_header + (ip_header_len + udp_header_len), pkt->data, pkt->data_len);

        QBM_CACHE_FLUSH(ip_header + (ip_header_len + udp_header_len), pkt->data_len);

    }

    /* Fill header */
    if (hdr) {
        qbm_gpd     *curr_gpd;
        kal_bool    end_of_gpd_list = KAL_FALSE;

        /* Trace GPD list to configure UDP/IP headers one-by-one */
        for (   curr_gpd = *head_gpd;
                curr_gpd && (KAL_FALSE == end_of_gpd_list);
                curr_gpd = (qbm_gpd *)QBM_DES_GET_NEXT(curr_gpd)) {

            /* Fill IP/UDP header */
            static kal_uint32   ip_v4_local_id_s = 0;
            kal_uint16          sum16;
            kal_uint32          ip_header_len;
            kal_uint32          udp_header_len;
            kal_uint32          total_len;
            kal_uint8           *ip_header;
            kal_uint8           *udp_header;

            ip_header_len = ((IPC_IP_TYPE_IPV4 == hdr->ip_type) ? IPC_HDR_V4_HEADER_SIZE : IPC_HDR_V6_HEADER_SIZE);
            udp_header_len = IPC_HDR_UDP_HEADER_SIZE;

            /* Push and get IP/UDP header pointers */
            if (KAL_TRUE == fill_in_headroom) {
                ipc_push_qbm_datahead(curr_gpd, ip_header_len + udp_header_len, &total_len, (void**)&ip_header);
            } else {
                ipc_get_qbm_datahead(curr_gpd, &total_len, (void**)&ip_header);
            }

            if (ip_header)
            {
                udp_header = ip_header + ip_header_len;

                hif_data_trace(IPC_GE_FILL_HEADER, total_len, curr_gpd, ip_header_len, udp_header_len);

                IPC_ASSERT(total_len >= (ip_header_len + udp_header_len));

                /* Fill UDP header */
                IPC_HDR_UDP_SET_SRC_PORT(udp_header, hdr->src_port);
                IPC_HDR_UDP_SET_DST_PORT(udp_header, hdr->dst_port);
                IPC_HDR_UDP_SET_LENGTH(udp_header, total_len - ip_header_len/* UDP length */);
                IPC_HDR_UDP_SET_CHECKSUM(udp_header, 0);
                sum16 = ipc_calc_udp_checksum(  (IPC_IP_TYPE_IPV4 == hdr->ip_type)?KAL_TRUE:KAL_FALSE,
                                                hdr->src_addr,
                                                hdr->dst_addr,
                                                udp_header,
                                                total_len - ip_header_len/* UDP length */);
                IPC_HDR_UDP_SET_CHECKSUM(udp_header, sum16);

                if (IPC_IP_TYPE_IPV4 == hdr->ip_type) {
                    IPC_HDR_V4_RESET_VER_IHL_DSCP_ECN(ip_header);
                    IPC_HDR_V4_SET_DSCP(ip_header, hdr->dscp_tc);
                    IPC_HDR_V4_SET_TOTAL_LENGTH(ip_header, total_len);
                    IPC_HDR_V4_SET_IDENTITY(ip_header, ip_v4_local_id_s);
                    ip_v4_local_id_s++;
                    IPC_HDR_V4_SET_FLAGS(ip_header, 0);
                    IPC_HDR_V4_SET_FRAG_OFFSET(ip_header, 0);
                    IPC_HDR_V4_SET_TTL(ip_header, IPC_DEF_TTL);
                    IPC_HDR_V4_SET_PROTOCOL(ip_header, IPC_HDR_PROT_UDP);
                    IPC_HDR_V4_SET_HEADER_CHECKSUM(ip_header, 0);
                    IPC_HDR_V4_SET_SRC_ADDR(ip_header, hdr->src_addr);
                    IPC_HDR_V4_SET_DST_ADDR(ip_header, hdr->dst_addr);
                    sum16 = ipc_calc_ipv4_checksum(ip_header);
                    IPC_HDR_V4_SET_HEADER_CHECKSUM(ip_header, sum16);
                } else {
                    IPC_HDR_V6_RESET_VER_TC_FL(ip_header);
                    IPC_HDR_V6_SET_TC(ip_header, hdr->dscp_tc);
                    IPC_HDR_V6_SET_LENGTH(ip_header, total_len - ip_header_len/* UDP length */);
                    IPC_HDR_V6_SET_NH_TYPE(ip_header, IPC_HDR_PROT_UDP);
                    IPC_HDR_V6_SET_HOP_LIMIT(ip_header, IPC_DEF_TTL);
                    IPC_HDR_V6_SET_SRC_ADDR(ip_header, hdr->src_addr);
                    IPC_HDR_V6_SET_DST_ADDR(ip_header, hdr->dst_addr);
                }

                QBM_CACHE_FLUSH(ip_header, total_len);
            } else
            {
                hif_trace_error(IPC_TR_PACK_PKT_SKIP_INVALID_GPD, curr_gpd, QBM_DES_GET_DATALEN(curr_gpd));
            }

            /* Check if current GPD is last one or not */
            end_of_gpd_list = (curr_gpd == (*tail_gpd))?KAL_TRUE:KAL_FALSE;
        }
    }

    return KAL_TRUE;
}

kal_bool
ipc_pack_pkt_public (
    kal_bool    uplink,
    ipc_pkt_t   *pkt,
    ipc_hdr_t   *hdr,
    qbm_gpd     **head_gpd,
    qbm_gpd     **tail_gpd)
{
    hif_data_trace(IPC_GE_PACK_PACKET_PUBLIC, 0);

    if (KAL_FALSE == ipc_pack_pkt(uplink, pkt, hdr, head_gpd, tail_gpd)) {
        hif_trace_error(IPC_TR_PACK_PKT_PUBLIC_FAILED, pkt->isGPD, hdr);
        return KAL_FALSE;
    }

    return KAL_TRUE;
}

kal_bool
ipc_send_ul_pkt (
    ipc_pkt_t  *pkt,
    ipc_hdr_t  *hdr,
    kal_uint32  ebi)
{
    qbm_gpd                        *head_gpd;
    qbm_gpd                        *tail_gpd;
    ipc_internal_ior_t             *ior;
    kal_bool                        to_send_msg;

    IPC_ASSERT(pkt);

    if (KAL_FALSE == ipc_pack_pkt(  KAL_TRUE,
                                    pkt,
                                    hdr,
                                    &head_gpd,
                                    &tail_gpd))
    {
        hif_trace_error(IPC_TR_UL_PKT_PKT_PACK_FAILED, pkt->isGPD, hdr);
        return KAL_FALSE;
    }

    /*
     * New throttling level needs to block latency-concern packets as well.
     * Queue packets till throttling policy changes.
     */
    hif_data_trace(IPC_UL_SEND_PKT, ebi, head_gpd, tail_gpd);

    ior = (ipc_internal_ior_t *)QBM_DES_GET_SW_CTRL_FIELD(head_gpd);
    kal_mem_set(ior, 0, sizeof(ipc_internal_ior_t));
    ior->public.next_request = NULL;
    ior->public.first_gpd = head_gpd;
    ior->public.last_gpd = tail_gpd;
    ior->public.ip_type = 0xFF; //to distinquish from ipc_send_ul_pkt_by_pdn()
    ior->public.reserved[0] = 1; //to distinquish from normal data path
    ior->ebi = ebi;

    ipc_push_ior_list_to_ior_queue((ipc_io_request_t *)ior, (ipc_io_request_t *)ior, 1, IPC_UL_QUEUE_PRIORITY_HIGH);

    IPC_SPIN_LOCK(ipc_spinlock_g);
    to_send_msg = (!ipc_ul_processing_s);
    ipc_ul_processing_s = KAL_TRUE;
    IPC_SPIN_UNLOCK(ipc_spinlock_g);

    /*
     * Switch to IPCORE context.
     */
    if (to_send_msg) {
        msg_send6(  MOD_NIL, /* src_mod_id */
                    MOD_IPCORE, /* dest_mod_id */
                    IPCORE_DATAPATH_SAP, /* sap_id */
                    MSG_ID_IPCORE_PROCESS_UL_QUEUE_REQ, /* msg_id */
                    NULL, /* local_para_ptr */
                    NULL); /* peer_buff_ptr */
    }

    return KAL_TRUE;
}

kal_bool
ipc_send_ul_pkt_by_pdn (
    ipc_pkt_t  *pkt,
    ipc_hdr_t  *hdr,
    kal_uint32  pdn,
    kal_uint8   ip_type)
{
    qbm_gpd                        *head_gpd;
    qbm_gpd                        *tail_gpd;
    ipc_internal_ior_t             *ior;
    kal_bool                        to_send_msg;

    IPC_ASSERT(pkt);
    IPC_ASSERT( (ip_type == IPC_IP_TYPE_IPV4) || (ip_type == IPC_IP_TYPE_IPV6) );

    if (KAL_FALSE == ipc_pack_pkt(  KAL_TRUE,
                pkt,
                hdr,
                &head_gpd,
                &tail_gpd))
    {
        hif_trace_error(IPC_TR_UL_PKT_PKT_PACK_FAILED, pkt->isGPD, hdr);
        return KAL_FALSE;
    }

    /*
     * New throttling level needs to block latency-concern packets as well.
     * Queue packets till throttling policy changes.
     */

    hif_data_trace(IPC_UL_SEND_PKT_BY_PDN, pdn, ip_type, head_gpd, tail_gpd);

    ior = (ipc_internal_ior_t *)QBM_DES_GET_SW_CTRL_FIELD(head_gpd);
    kal_mem_set(ior, 0, sizeof(ipc_internal_ior_t));
    ior->public.next_request = NULL;
    ior->public.first_gpd = head_gpd;
    ior->public.last_gpd = tail_gpd;
    ior->public.ip_type = ip_type;
    ior->public.reserved[0] = 1; //to distinquish from normal data path
    ior->pdn = pdn;

    ipc_push_ior_list_to_ior_queue((ipc_io_request_t *)ior, (ipc_io_request_t *)ior, 1, IPC_UL_QUEUE_PRIORITY_HIGH);

    IPC_SPIN_LOCK(ipc_spinlock_g);
    to_send_msg = (!ipc_ul_processing_s);
    ipc_ul_processing_s = KAL_TRUE;
    IPC_SPIN_UNLOCK(ipc_spinlock_g);

    /*
     * Switch to IPCORE context.
     */
    if (to_send_msg) {
        msg_send6(  MOD_NIL, /* src_mod_id */
                    MOD_IPCORE, /* dest_mod_id */
                    IPCORE_DATAPATH_SAP, /* sap_id */
                    MSG_ID_IPCORE_PROCESS_UL_QUEUE_REQ, /* msg_id */
                    NULL, /* local_para_ptr */
                    NULL); /* peer_buff_ptr */
    }

    return KAL_TRUE;
}

kal_bool
ipc_send_ul_pkt_by_netif_id (
    ipc_pkt_t   *pkt,
    ipc_hdr_t   *hdr,
    kal_uint32   netif_id,
    kal_uint8    ip_type)
{
    qbm_gpd                        *head_gpd;
    qbm_gpd                        *tail_gpd;
    ipc_netif_t                    *netif;
    ipc_session_t                  *session;
    ipc_internal_ior_t             *ior;
    kal_bool                        to_send_msg;

    IPC_ASSERT(pkt);
    IPC_ASSERT( (ip_type == IPC_IP_TYPE_IPV4) ||
                (ip_type == IPC_IP_TYPE_IPV6) ||
                (ip_type == IPC_IP_TYPE_MIXED) );

    if (KAL_FALSE == ipc_pack_pkt(  KAL_TRUE,
                                    pkt,
                                    hdr,
                                    &head_gpd,
                                    &tail_gpd))
    {
        hif_trace_error(IPC_TR_UL_PKT_BY_NETIF_ID_PKT_PACK_FAILED, pkt->isGPD, hdr);
        return KAL_FALSE;
    }

    /*
     * New throttling level needs to block latency-concern packets as well.
     * Queue packets till throttling policy changes.
     */

    netif = ipc_find_netif(netif_id);
    if (netif) {
        session = ipc_find_session_by_netif(netif, ip_type);
        if (session) {
            hif_data_trace(IPC_UL_SEND_PKT_BY_NETIF_ID, netif_id, ip_type, head_gpd, tail_gpd);

            ior = (ipc_internal_ior_t *)QBM_DES_GET_SW_CTRL_FIELD(head_gpd);
            kal_mem_set(ior, 0, sizeof(ipc_internal_ior_t));
            ior->public.next_request = NULL;
            ior->public.first_gpd = head_gpd;
            ior->public.last_gpd = tail_gpd;
            ior->public.ip_type = ip_type;
            ior->public.reserved[0] = 1; //to distinquish from normal data path
            ior->pdn = session->context;

            ipc_push_ior_list_to_ior_queue((ipc_io_request_t *)ior, (ipc_io_request_t *)ior, 1, IPC_UL_QUEUE_PRIORITY_HIGH);

            IPC_SPIN_LOCK(ipc_spinlock_g);
            to_send_msg = (!ipc_ul_processing_s);
            ipc_ul_processing_s = KAL_TRUE;
            IPC_SPIN_UNLOCK(ipc_spinlock_g);

            /*
             * Switch to IPCORE context.
             */
            if (to_send_msg) {
                msg_send6(  MOD_NIL, /* src_mod_id */
                            MOD_IPCORE, /* dest_mod_id */
                            IPCORE_DATAPATH_SAP, /* sap_id */
                            MSG_ID_IPCORE_PROCESS_UL_QUEUE_REQ, /* msg_id */
                            NULL, /* local_para_ptr */
                            NULL); /* peer_buff_ptr */
            }
            IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);
        } else {
            hif_trace_error(IPC_TR_UL_PKT_BY_NETIF_ID_SESSION_NOT_FOUND, netif_id, ip_type);
            qbmt_dest_q(head_gpd, tail_gpd);
        }
        IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
    } else {
        hif_trace_error(IPC_TR_UL_PKT_BY_NETIF_ID_NETIF_NOT_FOUND, netif_id);
        qbmt_dest_q(head_gpd, tail_gpd);
    }

    return KAL_TRUE;
}

kal_bool
ipc_send_ul_pkt_multiple_ps (
    ipc_pkt_t  *pkt,
    ipc_hdr_t  *hdr,
    kal_uint32  ebi,
    kal_uint8   proto_idx)
{
    hif_data_trace(IPC_UL_SEND_PKT_MULTI_PS, ebi, proto_idx);

    IPC_MASK_PROTOID_ON_PDNID(ebi, proto_idx);
    return ipc_send_ul_pkt(pkt, hdr, ebi);
}

kal_bool
ipc_send_ul_pkt_by_pdn_multiple_ps (
    ipc_pkt_t  *pkt,
    ipc_hdr_t  *hdr,
    kal_uint32  pdn,
    kal_uint8   ip_type,
    kal_uint8   proto_idx)
{
    hif_data_trace(IPC_UL_SEND_PKT_BY_PDN_MULTI_PS, pdn, proto_idx);

    IPC_MASK_PROTOID_ON_PDNID(pdn, proto_idx);
    return ipc_send_ul_pkt_by_pdn(pkt, hdr, pdn, ip_type);
}

kal_bool
ipc_send_dl_pkt(
    ipc_pkt_t   *pkt,
    ipc_hdr_t   *hdr,
    kal_uint32  netif_id)
{
    ipc_netif_t *netif;
    qbm_gpd     *head_gpd;
    qbm_gpd     *tail_gpd;
    qbm_gpd     *ipv4_first_gpd;
    qbm_gpd     *ipv4_last_gpd;
    qbm_gpd     *ipv6_first_gpd;
    qbm_gpd     *ipv6_last_gpd;

    IPC_ASSERT(pkt);

    /* Packet and Clarify IPv4/IPv6 GPDs */
    if (KAL_FALSE == ipc_pack_pkt(  KAL_FALSE,
                                    pkt,
                                    hdr,
                                    &head_gpd,
                                    &tail_gpd))
    {
        hif_trace_error(IPC_TR_DL_PKT_PKT_PACK_FAILED, pkt->isGPD, hdr);

        if (KAL_TRUE == pkt->isGPD)
        {
            qbmt_dest_q(pkt->head, pkt->tail);
        }

        return KAL_FALSE;
    }

    ipc_clarify_gpd(    head_gpd,
                        tail_gpd,
                        &ipv4_first_gpd,
                        &ipv4_last_gpd,
                        &ipv6_first_gpd,
                        &ipv6_last_gpd);

    netif = ipc_find_netif(netif_id);
    if (netif)
    {
        ipc_io_request_t *ior;

        hif_data_trace(IPC_DL_SEND_IPV4_PKT, 0, netif->config.netif_id, ipv4_first_gpd, ipv4_last_gpd);

        /* Sent to corresponding network interface */
        if (ipv4_first_gpd)
        {
            ior = (ipc_io_request_t *)QBM_DES_GET_SW_CTRL_FIELD(ipv4_first_gpd);
            ior->next_request = NULL;
            ior->first_gpd = ipv4_first_gpd;
            ior->last_gpd = ipv4_last_gpd;
            ior->ip_type = IPC_IP_TYPE_IPV4;
            ior->qos_priority = 0;

            netif->config.ipc_dlink_callback_t(
                netif->config.callback_context,
                ior);
        }

        hif_data_trace(IPC_DL_SEND_IPV6_PKT, 0, netif->config.netif_id, ipv6_first_gpd, ipv6_last_gpd);

        if (ipv6_first_gpd)
        {
            ior = (ipc_io_request_t *)QBM_DES_GET_SW_CTRL_FIELD(ipv6_first_gpd);
            ior->next_request = NULL;
            ior->first_gpd = ipv6_first_gpd;
            ior->last_gpd = ipv6_last_gpd;
            ior->ip_type = IPC_IP_TYPE_IPV6;
            ior->qos_priority = 0;

            netif->config.ipc_dlink_callback_t(
                netif->config.callback_context,
                ior);
        }

        IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
        return KAL_TRUE;
    }

    hif_trace_error(IPC_TR_DL_PKT_NETIF_NOT_FOUND, netif_id);
    IPC_UT_ASSERT(KAL_FALSE, IPC_UT_DL_PKT_NETIF_NOT_FOUND);

    if (ipv4_first_gpd)
    {
        qbmt_dest_q(ipv4_first_gpd, ipv4_last_gpd);
    }
    if (ipv6_first_gpd)
    {
        qbmt_dest_q(ipv6_first_gpd, ipv6_last_gpd);
    }

    /* Network interface is not found */
    return KAL_FALSE;

}

kal_int32 ipc_register_ntfy(
    ipc_ntfy_callback_t callback_func,
    void                *callback_context){
    kal_int32 ntfy_id;

    hif_trace_info(IPC_TR_REG_NTFY_BEGIN, callback_func, callback_context);
    ntfy_id = ipc_new_ntfy(callback_func, callback_context);
    hif_trace_info(IPC_TR_REG_NTFY_END, ntfy_id);

    return ntfy_id;
}

void ipc_deregister_ntfy(kal_int32 ntfy_id){

    hif_trace_info(IPC_TR_DEREG_NTFY_BEGIN, ntfy_id);
    ipc_del_ntfy(ntfy_id);
    hif_trace_info(IPC_TR_DEREG_NTFY_END, ntfy_id);
}

kal_bool ipc_register_link_up_ind_handler(module_type module_id)
{
    hif_trace_info(IPC_TR_REG_LINK_UP_IND_HDLR_BEGIN, module_id);
    ipc_update_link_up_ind_handler(module_id);
    hif_trace_info(IPC_TR_REG_LINK_UP_IND_HDLR_END, module_id);
    return KAL_TRUE;
}

void ipc_deregister_link_up_ind_handler(void)
{
    hif_trace_info(IPC_TR_DEREG_LINK_UP_IND_HDLR_BEGIN);
    ipc_update_link_up_ind_handler(MOD_IPCORE);
    hif_trace_info(IPC_TR_DEREG_LINK_UP_IND_HDLR_END);
}

kal_bool ipc_register_ip_up_ind_handler(module_type module_id)
{
    hif_trace_info(IPC_TR_REG_IP_UP_IND_HDLR_BEGIN, module_id);
    ipc_update_ip_up_ind_handler(module_id);
    hif_trace_info(IPC_TR_REG_IP_UP_IND_HDLR_END, module_id);
    return KAL_TRUE;
}

void ipc_deregister_ip_up_ind_handler(void)
{
    hif_trace_info(IPC_TR_DEREG_IP_UP_IND_HDLR_BEGIN);
    ipc_update_ip_up_ind_handler(MOD_IPCORE);
    hif_trace_info(IPC_TR_DEREG_IP_UP_IND_HDLR_END);
}

kal_bool ipc_is_netif_bind(kal_uint32 netif_id)
{
    //TODO
    return KAL_TRUE;
}

/*------------------------------------------------------------------------------
 * Public functions. (Gen93)
 *----------------------------------------------------------------------------*/
kal_bool ipc_meta_uplink(kal_uint16 start_idx, kal_uint16 end_idx, LHIF_QUEUE_TYPE queue_type)
{
    kal_bool            to_send_msg;

    HIF_SWLA_START("IU1");

    hif_data_trace(IPC_UL_META_UPLINK_CALLBACK, start_idx, end_idx, queue_type);

    ipc_push_meta_list_to_meta_queue(start_idx, end_idx, queue_type);

    IPC_SPIN_LOCK(ipc_spinlock_g);
    to_send_msg = (!ipc_ul_processing_s);
    ipc_ul_processing_s = KAL_TRUE;
    IPC_SPIN_UNLOCK(ipc_spinlock_g);

    /*
     * Switch to IPCORE context.
     */
    if (to_send_msg) {
        msg_send6(  MOD_NIL, /* src_mod_id */
                    MOD_IPCORE, /* dest_mod_id */
                    IPCORE_DATAPATH_SAP, /* sap_id */
                    MSG_ID_IPCORE_PROCESS_UL_QUEUE_REQ, /* msg_id */
                    NULL, /* local_para_ptr */
                    NULL); /* peer_buff_ptr */
    }

    HIF_SWLA_STOP("IU1");
    return KAL_TRUE;
}

kal_bool ipc_find_pdn_id_by_netif_id(kal_uint32 netif_id, kal_uint8 ip_type, kal_uint32 *p_pdn_id, kal_uint8 *p_proto_idx)
{
    ipc_netif_t    *netif;
    ipc_session_t  *session;
    kal_bool        ret = KAL_FALSE;

    netif = ipc_find_netif(netif_id);
    if (netif) {
        session = ipc_find_session_by_netif(netif, ip_type);
        if (session) {
            *p_pdn_id = session->context;
            IPC_RETRIEVE_PROTOID_FROM_PDNID(*p_pdn_id, *p_proto_idx);
            IPC_UNMASK_PROTOID_FROM_PDNID(*p_pdn_id);
            IPC_R_UNLOCK_OBJECT(session, ipc_spinlock_g);

            ret = KAL_TRUE;
        } else {
            hif_trace_error(IPC_TR_FIND_PDN_BY_NETIF_SESSION_RLOCK_FAILED, netif_id, ip_type);
        }
        IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
    } else {
        hif_trace_error(IPC_TR_FIND_PDN_BY_NETIF_NETIF_RLOCK_FAILED, netif_id, ip_type);
    }

    return ret;
}

kal_bool
ipc_send_dl_pkt_in_did_internal(
    ipc_pkt_t   *pkt,
    ipc_hdr_t   *hdr,
    kal_uint32  netif_id)
{
    ipc_netif_t    *netif;
    upcm_did       *did_head;
    upcm_did       *did_tail;
    upcm_did       *did;
    upcm_did       *retry_prev_did = NULL;
    upcm_did       *next_did;
    upcm_did       *retry_did = NULL;
    kal_bool        end_of_list;
    kal_bool        dl_cbk_ret;

    IPC_ASSERT(pkt);

    if (IPC_PKT_DES_TYPE_DID == pkt->buf_type) {
        did_head = pkt->did_head;
        did_tail = pkt->did_tail;
    } else if (IPC_PKT_DES_TYPE_GPD == pkt->buf_type) {
        ipc_si_hif_type_e   hif_type = ipc_get_hif_type_from_netif_id(netif_id);

        /* Copy GPD list to DID/SIT + PRB format */
        did = upcm_did_alloc_one();
        if (!did) {
            hif_trace_error(IPC_TR_DL_PKT_NETIF_DID_ALLOC_DID_NG, pkt->head, pkt->tail, netif_id);
            return KAL_FALSE;
        }

        if (KAL_TRUE != ipc_copy_gpd_to_did(pkt->head, pkt->tail, did, hif_type)) {
            upcm_did_free_one(did);
            return KAL_FALSE;
        }

        did_head = did;
        did_tail = did;
        hif_data_trace(IPC_DL_TRNAS_GPD_TO_DID, pkt->head, did_head, did_tail);

        /* Free the original GPD list */
        qbmt_dest_q(pkt->head, pkt->tail);
    } else {
        IPC_ASSERT(KAL_FALSE);
        return KAL_FALSE;
    }

    netif = ipc_find_netif(netif_id);
    if (netif)
    {
        hif_data_trace(IPC_DL_SEND_PKT_DID, netif_id, did_head, did_tail);

        end_of_list = KAL_FALSE;
        for (did = did_head; did && !end_of_list; did = next_did) {
            next_did = UPCM_DID_GET_NEXT(did);
            end_of_list = (did == did_tail);

            if (!retry_did) {
                HIF_SWLA_START("ID3");
                dl_cbk_ret = netif->config.ipc_dlink_did_cb_t(
                        netif->config.callback_context,
                        did);
                HIF_SWLA_STOP("ID3");

                if (!dl_cbk_ret) {
                    retry_did = did;

                    IPC_ASSERT(0 == (netif_id & 0xFFFF0000));
                    UPCM_DID_SET_SW_CTRL_FIELD(did, (kal_uint16)(netif_id & 0x0000FFFF));
                } else {
                    retry_prev_did = did;
                }
            } else {
                IPC_ASSERT(0 == (netif_id & 0xFFFF0000));
                UPCM_DID_SET_SW_CTRL_FIELD(did, (kal_uint16)(netif_id & 0x0000FFFF));
            }
        }

        if (retry_did) {
            kal_bool            to_send_msg;

            hif_data_trace(IPC_DL_SEND_PKT_DID_PENDING, retry_did, did_tail);

            if (retry_did != did_head) {
                /* Free DID which have been sent */
                if (retry_prev_did) {
                    IPC_ASSERT(UPCM_DID_GET_NEXT(retry_prev_did) == retry_did);
                    UPCM_DID_SET_NEXT(retry_prev_did, NULL);
                }
                upcm_did_dest_q(did_head, retry_prev_did);
            }

            /* Enqueue all remaining DID */
            ipc_did_enqueue_wo_filter_queue(retry_did, did_tail, _IPC_GET_DL_QUEUE_INDEX(0, KAL_TRUE));

            /* Send ILM to IPCore for processing DL queue */
            IPC_SPIN_LOCK(ipc_spinlock_g);
            to_send_msg = (!ipc_dl_processing_s);
            ipc_dl_processing_s = KAL_TRUE;
            IPC_SPIN_UNLOCK(ipc_spinlock_g);

            /*
             * Switch to IPCORE context.
             */
            if (to_send_msg) {
                msg_send6(  MOD_NIL, /* src_mod_id */
                            MOD_IPCORE, /* dest_mod_id */
                            IPCORE_DATAPATH_SAP, /* sap_id */
                            MSG_ID_IPCORE_PROCESS_DL_QUEUE_REQ, /* msg_id */
                            NULL, /* local_para_ptr */
                            NULL); /* peer_buff_ptr */
            }
        } else {
            upcm_did_dest_q(did_head, did_tail);
        }

        IPC_R_UNLOCK_OBJECT(netif, ipc_spinlock_g);
        return KAL_TRUE;
    } else {
        hif_trace_error(IPC_TR_DL_PKT_NETIF_DID_NOT_FOUND, netif_id);
    }

    return KAL_FALSE;
}

kal_bool
ipc_send_dl_pkt_in_did(
    ipc_pkt_t   *pkt,
    ipc_hdr_t   *hdr,
    kal_uint32  netif_id)
{
    ipc_si_hif_type_e   hif_type = ipc_get_hif_type_from_netif_id(netif_id);

    IPC_ASSERT(pkt);

    if (IPC_PKT_DES_TYPE_DID == pkt->buf_type) {
        ipc_packet_dump_did(pkt->did_head, pkt->did_tail, hif_type);
    } else if (IPC_PKT_DES_TYPE_GPD == pkt->buf_type) {
        ipc_packet_dump_continues_buff_gpd_list(pkt->head, pkt->tail, KAL_FALSE);
    } else {
        IPC_ASSERT(KAL_FALSE);
        return KAL_FALSE;
    }
    return ipc_send_dl_pkt_in_did_internal(pkt, hdr, netif_id);
}
