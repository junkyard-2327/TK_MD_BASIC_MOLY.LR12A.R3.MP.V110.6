

#ifndef _ATCMD_STRUCT_H
#define _ATCMD_STRUCT_H

/*
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGPIAF_REQ,    l4c_ps_null_test_mode,      l4c_ps_cgpiaf_read_mode,    l4c_ps_cgpiaf_set_mode,     l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGDCONT_REQ,   l4c_ps_null_test_mode,      l4c_ps_cgdcont_read_mode,   l4c_ps_cgdcont_set_mode,    l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGDSCONT_REQ,  l4c_ps_null_test_mode,      l4c_ps_cgdscont_read_mode,  l4c_ps_cgdscont_set_mode,   l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGTFT_REQ,     l4c_ps_null_test_mode,      l4c_ps_cgtft_read_mode,     l4c_ps_cgtft_set_mode,      l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGQREQ_REQ,    l4c_ps_null_test_mode,      l4c_ps_cgqreq_read_mode,    l4c_ps_cgqreq_set_mode,     l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGQMIN_REQ,    l4c_ps_null_test_mode,      l4c_ps_cgqmin_read_mode,    l4c_ps_cgqmin_set_mode,     l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGEQREQ_REQ,   l4c_ps_null_test_mode,      l4c_ps_cgeqreq_read_mode,   l4c_ps_cgeqreq_set_mode,    l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGEQMIN_REQ,   l4c_ps_null_test_mode,      l4c_ps_cgeqmin_read_mode,   l4c_ps_cgeqmin_set_mode,    l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGEQNEG_REQ,   l4c_ps_null_test_mode,      l4c_ps_cgeqneg_read_mode,   l4c_ps_cgeqneg_set_mode,    l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGACT_REQ,     l4c_ps_null_test_mode,      l4c_ps_cgact_read_mode,     l4c_ps_cgact_set_mode,      l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGCMOD_REQ,    l4c_ps_null_test_mode,      l4c_ps_cgcmod_read_mode,    l4c_ps_cgcmod_set_mode,     l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGDATA_REQ,    l4c_ps_null_test_mode,      l4c_ps_cgdata_read_mode,    l4c_ps_cgdata_set_mode,     l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGPADDR_REQ,   l4c_ps_null_test_mode,      l4c_ps_cgpaddr_read_mode,   l4c_ps_cgpaddr_set_mode,    l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGAUTO_REQ,    l4c_ps_null_test_mode,      l4c_ps_cgauto_read_mode,    l4c_ps_cgauto_set_mode,     l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGANS_REQ,     l4c_ps_null_test_mode,      l4c_ps_cgans_read_mode,     l4c_ps_cgans_set_mode,      l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGEREP_REQ,    l4c_ps_null_test_mode,      l4c_ps_cgerep_read_mode,    l4c_ps_cgerep_set_mode,     l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGCONTRDP_REQ, l4c_ps_null_test_mode,      l4c_ps_cgcontrdp_read_mode, l4c_ps_cgcontrdp_set_mode,  l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGSCONTRDP_REQ,l4c_ps_null_test_mode,      l4c_ps_cgscontrdp_read_mode,l4c_ps_cgscontrdp_set_mode, l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGTFTRDP_REQ,  l4c_ps_null_test_mode,      l4c_ps_cgtftrdp_read_mode,  l4c_ps_cgtftrdp_set_mode,   l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGEQOS_REQ,    l4c_ps_null_test_mode,      l4c_ps_cgeqos_read_mode,    l4c_ps_cgeqos_set_mode,     l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGEQOSRDP_REQ, l4c_ps_null_test_mode,      l4c_ps_cgeqosrdp_read_mode, l4c_ps_cgeqosrdp_set_mode,  l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGDEL_REQ,     l4c_ps_null_test_mode,      l4c_ps_cgdel_read_mode,     l4c_ps_cgdel_set_mode,      l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGAUTH_REQ,    l4c_ps_null_test_mode,      l4c_ps_cgauth_read_mode,    l4c_ps_cgauth_set_mode,     l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_ECNCFG_REQ,    l4c_ps_null_test_mode,      l4c_ps_ecncfg_read_mode,    l4c_ps_ecncfg_set_mode,     l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_EGDCONT_REQ,   l4c_ps_null_test_mode,      l4c_ps_egdcont_read_mode,   l4c_ps_egdcont_set_mode,    l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_VZWAPNETMR_REQ,l4c_ps_null_test_mode,      l4c_ps_vzwapnetmr_read_mode,l4c_ps_vzwapnetmr_set_mode, l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_VZWAPNE_REQ,   l4c_ps_null_test_mode,      l4c_ps_vzwapne_read_mode,   l4c_ps_vzwapne_set_mode,    l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_EGPAU_REQ,     l4c_ps_null_test_mode,      l4c_ps_egpau_read_mode,     l4c_ps_egpau_set_mode,      l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_EGACT_REQ,     l4c_ps_null_test_mode,      l4c_ps_egact_read_mode,     l4c_ps_egact_set_mode,      l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_CGSDATA_REQ,   l4c_ps_null_test_mode,      l4c_ps_cgsdata_read_mode,   l4c_ps_cgsdata_set_mode,    l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_ACTTEST_REQ,   l4c_ps_null_test_mode,      l4c_ps_acttest_read_mode,   l4c_ps_acttest_set_mode,    l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_PSBEARER_REQ,  l4c_ps_null_test_mode,      l4c_ps_psbearer_read_mode,  l4c_ps_psbearer_set_mode,   l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_EGFB_REQ,      l4c_ps_null_test_mode,      l4c_ps_egfb_read_mode,      l4c_ps_egfb_set_mode,       l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_EGLD_REQ,      l4c_ps_null_test_mode,      l4c_ps_egld_read_mode,      l4c_ps_egld_set_mode,       l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_EGDELPF_REQ,   l4c_ps_null_test_mode,      l4c_ps_egdelpf_read_mode,   l4c_ps_egdelpf_set_mode,    l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_EGLNKPF_REQ,   l4c_ps_null_test_mode,      l4c_ps_eglnkpf_read_mode,   l4c_ps_eglnkpf_set_mode,    l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_EGPCORDP_REQ,  l4c_ps_null_test_mode,      l4c_ps_egpcordp_read_mode,  l4c_ps_egpcordp_set_mode,   l4c_ps_null_active_mode)
L4C_PS_REQ(MSG_ID_L4BPDN_L4C_EDALLOW_REQ,   l4c_ps_null_test_mode,      l4c_ps_edallow_read_mode,   l4c_ps_edallow_set_mode,    l4c_ps_null_active_mode)
extern kal_bool l4c_ps_cgpiaf_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgpiaf_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgpiaf_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgdcont_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgdcont_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgdcont_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgdscont_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgdscont_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgdscont_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgtft_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgtft_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgtft_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgqreq_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgqreq_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgqreq_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgqmin_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgqmin_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgqmin_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgeqreq_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgeqreq_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgeqreq_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgeqmin_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgeqmin_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgeqmin_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgeqneg_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgeqneg_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgeqneg_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgact_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgact_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgact_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgcmod_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgcmod_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_cgdata_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgdata_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_cgpaddr_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgpaddr_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgpaddr_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgauto_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgauto_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgauto_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgans_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgans_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_cgerep_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgerep_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgerep_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgcontrdp_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgcontrdp_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgcontrdp_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgscontrdp_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgscontrdp_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgscontrdp_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgtftrdp_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgtftrdp_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgtftrdp_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgeqos_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgeqos_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgeqos_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgeqosrdp_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgeqosrdp_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgeqosrdp_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgdel_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgdel_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgdel_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_cgauth_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgauth_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_cgauth_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_ecncfg_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_ecncfg_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_egdcont_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_egdcont_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_vzwapnetmr_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_vzwapnetmr_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_vzwapnetmr_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_vzwapne_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_vzwapne_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_vzwapne_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_egpau_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_egpau_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_egpau_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_egact_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_egact_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_cgsdata_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_cgsdata_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_acttest_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_acttest_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_psbearer_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_psbearer_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_psbearer_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_egfb_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_egfb_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_egfb_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_egld_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_egld_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern kal_bool l4c_ps_egdelpf_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_egdelpf_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_egdelpf_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_eglnkpf_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_eglnkpf_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_eglnkpf_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_egpcordp_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_egpcordp_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
extern void l4c_at_egpcordp_ind_hdlr(local_para_struct * local_para_ptr, peer_buff_struct * peer_buff_ptr);
extern kal_bool l4c_ps_edallow_read_mode(kal_uint32 src_id);
extern kal_bool l4c_ps_edallow_set_mode(local_para_struct *local_para_ptr, kal_uint16 *err_cause);
 */

#include "atcmd_enum.h"
//#include "kal_public_defs.h"
#include "atp_public_defs.h"
#include "ps_public_enum_public.h"
//#define atp_cmd_mode_enum   kal_uint32

#define ATCMD_LOCAL_PARA_HDR \
    kal_uint32          src_id; \
    atp_cmd_mode_enum   cmd_mode;

#define ATCMD_HDR ATCMD_LOCAL_PARA_HDR

/*  common ATCMD local_para header */
typedef struct 
{
    ATCMD_HDR
} at_cmd_common_header_req_struct;

typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                is_success;
    kal_uint16                              err_cause;
} at_cmd_cnf_struct;

typedef struct
{
    pdp_addr_len_enum                       len;
    kal_uint8                               val[MAXIMUM_POSSIBLE_ADDR_LEN];
} at_addr_struct;

typedef struct
{
    pdp_addr_len_enum                       len;
    kal_uint8                               val[MAXIMUM_POSSIBLE_ADDR_LEN*2];
} at_addr_and_mask_struct;

//  +CGEV:
/*  +CGEV: NW DETACH
    +CGEV: ME DETACH
    +CGEV: NW CLASS <class>
    +CGEV: ME CLASS <class>
    +CGEV: NW PDN ACT <cid>[,<WLAN_Offload>]
    +CGEV: ME PDN ACT <cid>[,<reason>[,<cid_other>]][,<WLAN_Offload>]   
    +CGEV: NW ACT <p_cid>, <cid>, <event_type>[,<WLAN_Offload>]
    +CGEV: ME ACT <p_cid>, <cid>, <event_type>[,<WLAN_Offload>]
    XX +CGEV: NW DEACT <PDP_type>, <PDP_addr>, [<cid>] XX
    XX +CGEV: ME DEACT <PDP_type>, <PDP_addr>, [<cid>] XX
    +CGEV: NW PDN DEACT <cid>[,<WLAN_Offload>]
    +CGEV: ME PDN DEACT <cid>
    +CGEV: NW DEACT <p_cid>, <cid>, <event_type>[,<WLAN_Offload>]
    +CGEV: ME DEACT <p_cid>, <cid>, <event_type>
    +CGEV: NW MODIFY <cid>, <change_reason>, <event_type>[,<WLAN_Offload>]
    +CGEV: ME MODIFY <cid>, <change_reason>, <event_type>[,<WLAN_Offload>]
    +CGEV: REJECT <PDP_type>, <PDP_addr>
    +CGEV: NW REACT <PDP_type>, <PDP_addr>, [<cid>]
 */
 
//  +CGEV: NW PDN ACT <cid>[,<WLAN_Offload>]
typedef struct
{
    kal_bool                    cid_present;
    kal_uint32                  cid;
    kal_bool                    WLAN_Offload_present;
    atcmd_WLAN_Offload_enum     WLAN_Offload;
} cgev_nw_pdn_act_struct;

//  +CGEV: ME PDN ACT <cid>[,<reason>[,<cid_other>]][,<WLAN_Offload>]   
typedef struct
{
    kal_bool                    cid_present;
    kal_uint32                  cid;
    kal_bool                    reason_present;
    atcmd_reason_enum           reason;
    kal_bool                    cid_other_present;
    kal_uint32                  cid_other;
    kal_bool                    WLAN_Offload_present;
    atcmd_WLAN_Offload_enum     WLAN_Offload;
} cgev_me_pdn_act_struct;

//  +CGEV: NW ACT <p_cid>, <cid>, <event_type>[,<WLAN_Offload>]
typedef struct
{
    kal_bool                    p_cid_present;
    kal_uint32                  p_cid;
    kal_bool                    cid_present;
    kal_uint32                  cid;
    kal_bool                    event_type_present;
    atcmd_event_type_enum       event_type;
    kal_bool                    WLAN_Offload_present;
    atcmd_WLAN_Offload_enum     WLAN_Offload;
} cgev_nw_act_struct;

//  +CGEV: ME ACT <p_cid>, <cid>, <event_type>[,<WLAN_Offload>]
#if 1
typedef cgev_nw_act_struct cgev_me_act_struct;
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

//  +CGEV: NW PDN DEACT <cid>[,<WLAN_Offload>]
typedef struct
{
    kal_bool                    cid_present;
    kal_uint32                  cid;
    kal_bool                    WLAN_Offload_present;
    atcmd_WLAN_Offload_enum     WLAN_Offload;
} cgev_nw_pdn_deact_struct;

//  +CGEV: ME PDN DEACT <cid>
typedef struct
{
    kal_bool                    cid_present;
    kal_uint32                  cid;
} cgev_me_pdn_deact_struct;

//  +CGEV: NW DEACT <p_cid>, <cid>, <event_type>[,<WLAN_Offload>]
typedef struct
{
    kal_bool                    p_cid_present;
    kal_uint32                  p_cid;
    kal_bool                    cid_present;
    kal_uint32                  cid;
    kal_bool                    event_type_present;
    atcmd_event_type_enum       event_type;
    kal_bool                    WLAN_Offload_present;
    atcmd_WLAN_Offload_enum     WLAN_Offload;
} cgev_nw_deact_struct;

//  +CGEV: ME DEACT <p_cid>, <cid>, <event_type>
typedef struct
{
    kal_bool                    p_cid_present;
    kal_uint32                  p_cid;
    kal_bool                    cid_present;
    kal_uint32                  cid;
    kal_bool                    event_type_present;
    atcmd_event_type_enum       event_type;
} cgev_me_deact_struct;

//  +CGEV: NW MODIFY <cid>, <change_reason>, <event_type>[,<WLAN_Offload>]
typedef struct
{
    kal_bool                    cid_present;
    kal_uint32                  cid;
    kal_bool                    change_reason_present;
    kal_uint32                  change_reason;
    kal_bool                    event_type_present;
    atcmd_event_type_enum       event_type;
    kal_bool                    WLAN_Offload_present;
    atcmd_WLAN_Offload_enum     WLAN_Offload;
} cgev_nw_modify_struct;
    
//  +CGEV: ME MODIFY <cid>, <change_reason>, <event_type>[,<WLAN_Offload>]
#if 1
typedef cgev_nw_modify_struct cgev_me_modify_struct;
#else
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

//  +CGEV: REJECT <PDP_type>, <PDP_addr>
typedef struct
{
    kal_bool                    PDP_type_present;
    kal_uint8                   PDP_type[PDP_TYPE_STRING_LEN];
    kal_bool                    PDP_addr_present;
    at_addr_struct              PDP_addr;
} cgev_reject_struct;

//  +CGEV: NW REACT <PDP_type>, <PDP_addr>, [<cid>]
typedef struct
{
    kal_bool                    PDP_type_present;
    kal_uint8                   PDP_type[PDP_TYPE_STRING_LEN];
    kal_bool                    PDP_addr_present;
    at_addr_struct              PDP_addr;
    kal_bool                    cid_present;
    kal_uint32                  cid;
} cgev_nw_react_struct;

// +EGEV: REVIVE START <cid>, <rat>
// +EGEV: REVIVE SUCCESS <cid>, <rat>
typedef struct
{
    kal_uint8 cid;
    kal_uint8 rat[RAT_STRING_LEN];
} egev_revive_struct;

// +EGEV: REVIVE FINISH <rat>
typedef struct
{
    kal_uint8 rat[RAT_STRING_LEN];
} egev_revive_finish_struct;

typedef struct
{
    kal_uint32                      src_id;
    cgev_event_enum                 event;

    union {
        cgev_nw_pdn_act_struct      nw_pdn_act;
        cgev_me_pdn_act_struct      me_pdn_act;
        cgev_nw_act_struct          nw_act;
        cgev_me_act_struct          me_act;
        cgev_nw_pdn_deact_struct    nw_pdn_deact;
        cgev_me_pdn_deact_struct    me_pdn_deact;
        cgev_nw_deact_struct        nw_deact;
        cgev_me_deact_struct        me_deact;
        cgev_nw_modify_struct       nw_modify;
        cgev_me_modify_struct       me_modify;
        cgev_reject_struct          reject;
        cgev_nw_react_struct        nw_react;
    } info;    
} at_cgev_ind_struct;

typedef struct
{
    kal_uint32                      src_id;
    egev_event_enum                 event;

    union {
        egev_revive_struct      revive_start;
        egev_revive_struct      revive_success;
        egev_revive_finish_struct      revive_finish;
    } info;    
} at_egev_ind_struct;

//+CGPIAF
//SET command: +CGPIAF=[<IPv6_AddressFormat>[,<IPv6_SubnetNotation>[,<IPv6_LeadingZeros>[,<IPv6_CompressZeros>]]]]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              IPv6_AddressFormat_parse_result;
    atcmd_IPv6_AddressFormat_enum           IPv6_AddressFormat;                                                 // integer type
    at_token_parse_result_enum              IPv6_SubnetNotation_parse_result;
    atcmd_IPv6_SubnetNotation_enum          IPv6_SubnetNotation;                                                // integer type
    at_token_parse_result_enum              IPv6_LeadingZeros_parse_result;
    atcmd_IPv6_LeadingZeros_enum            IPv6_LeadingZeros;                                                  // integer type
    at_token_parse_result_enum              IPv6_CompressZeros_parse_result;
    atcmd_IPv6_CompressZeros_enum           IPv6_CompressZeros;                                                 // integer type
} at_cgpiaf_req_struct;

//READ response = +CGPIAF: <IPv6_AddressFormat>,<IPv6_SubnetNotation>,<IPv6_LeadingZeros>,<IPv6_CompressZeros>
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                IPv6_AddressFormat_present;
    atcmd_IPv6_AddressFormat_enum           IPv6_AddressFormat;                                                 // integer type
    kal_bool                                IPv6_SubnetNotation_present;
    atcmd_IPv6_SubnetNotation_enum          IPv6_SubnetNotation;                                                // integer type
    kal_bool                                IPv6_LeadingZeros_present;
    atcmd_IPv6_LeadingZeros_enum            IPv6_LeadingZeros;                                                  // integer type
    kal_bool                                IPv6_CompressZeros_present;
    atcmd_IPv6_CompressZeros_enum           IPv6_CompressZeros;                                                 // integer type
} at_cgpiaf_ind_struct;

//+CGDCONT
//SET command: +CGDCONT=[<cid>[,<PDP_type>[,<APN>[,<PDP_addr>[,<d_comp>[,<h_comp>[,<IPv4AddrAlloc>[,<request_type>[,<P-CSCF_discovery>[,<IM_CN_Signalling_Flag_Ind>[,<NSLPI>[,<securePCO>[,<IPv4_MTU_discovery>][,<Local_Addr_Ind>]]]]]]]]]]]]]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
    at_token_parse_result_enum              PDP_type_parse_result;
    kal_uint8                               PDP_type[PDP_TYPE_STRING_LEN];                                      // string type
    at_token_parse_result_enum              APN_parse_result;
    kal_uint8                               APN[APN_STRING_LEN];                                                // string type
    at_token_parse_result_enum              PDP_addr_parse_result;
    at_addr_struct                          PDP_addr;                                                           // string type
    at_token_parse_result_enum              d_comp_parse_result;
    atcmd_d_comp_enum                       d_comp;                                                             // integer type
    at_token_parse_result_enum              h_comp_parse_result;
    atcmd_h_comp_enum                       h_comp;                                                             // integer type
    at_token_parse_result_enum              IPv4AddrAlloc_parse_result;
    atcmd_IPv4AddrAlloc_enum                IPv4AddrAlloc;                                                      // integer type
    at_token_parse_result_enum              request_type_parse_result;
    atcmd_request_type_enum                 request_type;                                                       // integer type
    at_token_parse_result_enum              P_CSCF_discovery_parse_result;
    atcmd_P_CSCF_discovery_enum             P_CSCF_discovery;                                                   // integer type
    at_token_parse_result_enum              IM_CN_Signalling_Flag_Ind_parse_result;
    atcmd_IM_CN_Signalling_Flag_Ind_enum    IM_CN_Signalling_Flag_Ind;                                          // integer type
    at_token_parse_result_enum              NSLPI_parse_result;
    atcmd_NSLPI_enum                        NSLPI;                                                              // integer type
    at_token_parse_result_enum              securePCO_parse_result;
    atcmd_securePCO_enum                    securePCO;                                                          // integer type
    at_token_parse_result_enum              IPv4_MTU_discovery_parse_result;
    atcmd_IPv4_MTU_discovery_enum           IPv4_MTU_discovery;                                                 // integer type
    at_token_parse_result_enum              Local_Addr_Ind_parse_result;
    atcmd_Local_Addr_Ind_enum               Local_Addr_Ind;                                                     // integer type
} at_cgdcont_req_struct;

//READ response = [+CGDCONT: <cid>,<PDP_type>,<APN>,<PDP_addr>,<d_comp>,<h_comp>[,<IPv4AddrAlloc>[,<request_type>[,<P-CSCF_discovery>[,<IM_CN_Signalling_Flag_Ind>[,<NSLPI>[,<securePCO>[,<IPv4_MTU_discovery>[,<Local_Addr_Ind>]]]]]]]]]
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                PDP_type_present;
    kal_uint8                               PDP_type[PDP_TYPE_STRING_LEN];                                      // string type
    kal_bool                                APN_present;
    kal_uint8                               APN[APN_STRING_LEN];                                                // string type
    kal_bool                                PDP_addr_present;
    at_addr_struct                          PDP_addr;                                                           // string type
    kal_bool                                d_comp_present;
    atcmd_d_comp_enum                       d_comp;                                                             // integer type
    kal_bool                                h_comp_present;
    atcmd_h_comp_enum                       h_comp;                                                             // integer type
    kal_bool                                IPv4AddrAlloc_present;
    atcmd_IPv4AddrAlloc_enum                IPv4AddrAlloc;                                                      // integer type
    kal_bool                                request_type_present;
    atcmd_request_type_enum                 request_type;                                                       // integer type
    kal_bool                                P_CSCF_discovery_present;
    atcmd_P_CSCF_discovery_enum             P_CSCF_discovery;                                                   // integer type
    kal_bool                                IM_CN_Signalling_Flag_Ind_present;
    atcmd_IM_CN_Signalling_Flag_Ind_enum    IM_CN_Signalling_Flag_Ind;                                          // integer type
    kal_bool                                NSLPI_present;
    atcmd_NSLPI_enum                        NSLPI;                                                              // integer type
    kal_bool                                securePCO_present;
    atcmd_securePCO_enum                    securePCO;                                                          // integer type
    kal_bool                                IPv4_MTU_discovery_present;
    atcmd_IPv4_MTU_discovery_enum           IPv4_MTU_discovery;                                                 // integer type
    kal_bool                                Local_Addr_Ind_present;
    atcmd_Local_Addr_Ind_enum               Local_Addr_Ind;                                                     // integer type
} at_cgdcont_ind_struct;

//+CGDSCONT
//SET command: +CGDSCONT=[<cid>,<p_cid>[,<d_comp>[,<h_comp>[,<IM_CN_Signalling_Flag_Ind>]]]]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
    at_token_parse_result_enum              p_cid_parse_result;
    kal_uint32                              p_cid;                                                              // integer type
    at_token_parse_result_enum              d_comp_parse_result;
    atcmd_d_comp_enum                       d_comp;                                                             // integer type
    at_token_parse_result_enum              h_comp_parse_result;
    atcmd_h_comp_enum                       h_comp;                                                             // integer type
    at_token_parse_result_enum              IM_CN_Signalling_Flag_Ind_parse_result;
    atcmd_IM_CN_Signalling_Flag_Ind_enum    IM_CN_Signalling_Flag_Ind;                                          // integer type
} at_cgdscont_req_struct;

//READ response = [+CGDSCONT: <cid>,<p_cid>,<d_comp>,<h_comp>,<IM_CN_Signalling_Flag_Ind>]
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                p_cid_present;
    kal_uint32                              p_cid;                                                              // integer type
    kal_bool                                d_comp_present;
    atcmd_d_comp_enum                       d_comp;                                                             // integer type
    kal_bool                                h_comp_present;
    atcmd_h_comp_enum                       h_comp;                                                             // integer type
    kal_bool                                IM_CN_Signalling_Flag_Ind_present;
    atcmd_IM_CN_Signalling_Flag_Ind_enum    IM_CN_Signalling_Flag_Ind;                                          // integer type
} at_cgdscont_ind_struct;

//+CGTFT
//SET command: +CGTFT=[<cid>,[<packet filter identifier>,<evaluation precedence index>[,<remote address and subnet mask>[,<protocol number (ipv4) / next header (ipv6)>[,<local port range>[,<remote port range>[,<ipsec security parameter index (spi)>[,<type of service (tos) (ipv4) and mask / traffic class (ipv6) and mask>[,<flow label (ipv6)>[,<direction>[,<local address and subnet mask>]]]]]]]]]]]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
    at_token_parse_result_enum              packet_filter_identifier_parse_result;
    kal_uint32                              packet_filter_identifier;                                           // integer type
    at_token_parse_result_enum              evaluation_precedence_index_parse_result;
    kal_uint32                              evaluation_precedence_index;                                        // integer type
    at_token_parse_result_enum              remote_address_and_subnet_mask_parse_result;
    at_addr_and_mask_struct                 remote_address_and_subnet_mask;                                     // string type
    at_token_parse_result_enum              protocol_number_next_header_parse_result;                           
    kal_uint32                              protocol_number_next_header;                                        // integer type
    at_token_parse_result_enum              local_port_range_parse_result;
    kal_uint8                               local_port_range[LOCAL_PORT_RANGE_STRING_LEN];                      // string type
    at_token_parse_result_enum              remote_port_range_parse_result;
    kal_uint8                               remote_port_range[REMOTE_PORT_RANGE_STRING_LEN];                    // string type
    at_token_parse_result_enum              ipsec_spi_parse_result;                                             
    kal_uint32                              ipsec_spi;                                                          // numeric value
    at_token_parse_result_enum              tos_traffic_class_and_mask_parse_result;                            
    kal_uint8                               tos_traffic_class_and_mask[TOS_TRAFFIC_CLASS_AND_MASK_STRING_LEN];  // string type
    at_token_parse_result_enum              flow_label_parse_result;                                            
    kal_uint32                              flow_label;                                                         // numeric value
    at_token_parse_result_enum              direction_parse_result;
    atcmd_direction_enum                    direction;                                                          // integer type
    at_token_parse_result_enum              local_address_and_subnet_mask_parse_result;
    at_addr_and_mask_struct                 local_address_and_subnet_mask;                                      // string type
} at_cgtft_req_struct;

//READ response = [+CGTFT: <cid>,<packet filter identifier>,<evaluation precedence index>,<remote address and subnet mask>,<protocol number (ipv4) / next header (ipv6)>,<local port range>,<remote port range>,<ipsec security parameter index (spi)>,<type of service (tos) (ipv4) and mask / traffic class (ipv6) and mask>,<flow label (ipv6)>,<direction>,<local address and subnet mask>]
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                packet_filter_identifier_present;
    kal_uint32                              packet_filter_identifier;                                           // integer type
    kal_bool                                evaluation_precedence_index_present;
    kal_uint32                              evaluation_precedence_index;                                        // integer type
    kal_bool                                remote_address_and_subnet_mask_present;
    at_addr_and_mask_struct                 remote_address_and_subnet_mask;                                     // string type
    kal_bool                                protocol_number_next_header_present;                                
    kal_uint32                              protocol_number_next_header;                                        // integer type
    kal_bool                                local_port_range_present;
    kal_uint8                               local_port_range[LOCAL_PORT_RANGE_STRING_LEN];                      // string type
    kal_bool                                remote_port_range_present;
    kal_uint8                               remote_port_range[REMOTE_PORT_RANGE_STRING_LEN];                    // string type
    kal_bool                                ipsec_spi_present;                                                  
    kal_uint32                              ipsec_spi;                                                          // numeric value
    kal_bool                                tos_traffic_class_and_mask_present;                                 
    kal_uint8                               tos_traffic_class_and_mask[TOS_TRAFFIC_CLASS_AND_MASK_STRING_LEN];  // string type
    kal_bool                                flow_label_present;                                                 
    kal_uint32                              flow_label;                                                         // numeric value
    kal_bool                                direction_present;
    atcmd_direction_enum                    direction;                                                          // integer type
    kal_bool                                local_address_and_subnet_mask_present;
    at_addr_and_mask_struct                 local_address_and_subnet_mask;                                      // string type
} at_cgtft_ind_struct;

typedef struct
{
    kal_uint32         src_id ;
    kal_bool           apn_present ;
    kal_uint8          apn[APN_STRING_LEN] ;
    kal_bool           residual_backoff_timer_present ;
    kal_uint32         residual_backoff_timer ;
    kal_bool           re_attempt_rat_indicator_present ;
    kal_bool           re_attempt_rat_indicator ;
    kal_bool           re_attempt_eplmn_indicator_present ;
    kal_bool           re_attempt_eplmn_indicator ;
    kal_bool           NSLPI_present ;
    kal_bool           NSLPI ;
} at_cabtsri_ind_struct;

//+CGQREQ
//SET command: +CGQREQ=[<cid>[,<precedence>[,<delay>[,<reliability>[,<peak>[,<mean>]]]]]]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
    at_token_parse_result_enum              precedence_parse_result;
    kal_uint32                              precedence;                                                         // integer type
    at_token_parse_result_enum              delay_parse_result;
    kal_uint32                              delay;                                                              // integer type
    at_token_parse_result_enum              reliability_parse_result;
    kal_uint32                              reliability;                                                        // integer type
    at_token_parse_result_enum              peak_parse_result;
    kal_uint32                              peak;                                                               // integer type
    at_token_parse_result_enum              mean_parse_result;
    kal_uint32                              mean;                                                               // integer type
} at_cgqreq_req_struct;

//READ response = [+CGQREQ: <cid>,<precedence>,<delay>,<reliability>,<peak>,<mean>]
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                precedence_present;
    kal_uint32                              precedence;                                                         // integer type
    kal_bool                                delay_present;
    kal_uint32                              delay;                                                              // integer type
    kal_bool                                reliability_present;
    kal_uint32                              reliability;                                                        // integer type
    kal_bool                                peak_present;
    kal_uint32                              peak;                                                               // integer type
    kal_bool                                mean_present;
    kal_uint32                              mean;                                                               // integer type
} at_cgqreq_ind_struct;

//+CGQMIN
//SET command: +CGQMIN=[<cid>[,<precedence>[,<delay>[,<reliability>[,<peak>[,<mean>]]]]]]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
    at_token_parse_result_enum              precedence_parse_result;
    kal_uint32                              precedence;                                                         // integer type
    at_token_parse_result_enum              delay_parse_result;
    kal_uint32                              delay;                                                              // integer type
    at_token_parse_result_enum              reliability_parse_result;
    kal_uint32                              reliability;                                                        // integer type
    at_token_parse_result_enum              peak_parse_result;
    kal_uint32                              peak;                                                               // integer type
    at_token_parse_result_enum              mean_parse_result;
    kal_uint32                              mean;                                                               // integer type
} at_cgqmin_req_struct;

//READ response = [+CGQMIN: <cid>,<precedence>,<delay>,<reliability>,<peak>,<mean>]
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                precedence_present;
    kal_uint32                              precedence;                                                         // integer type
    kal_bool                                delay_present;
    kal_uint32                              delay;                                                              // integer type
    kal_bool                                reliability_present;
    kal_uint32                              reliability;                                                        // integer type
    kal_bool                                peak_present;
    kal_uint32                              peak;                                                               // integer type
    kal_bool                                mean_present;
    kal_uint32                              mean;                                                               // integer type
} at_cgqmin_ind_struct;

//+CGEQREQ
//SET command: +CGEQREQ=[<cid>[,<Traffic class>[,<Maximum bitrate UL>[,<Maximum bitrate DL>[,<Guaranteed bitrate UL>[,<Guaranteed bitrate DL>[,<Delivery order>[,<Maximum SDU size>[,<SDU error ratio>[,<Residual bit error ratio>[,<Delivery of erroneous SDUs>[,<Transfer delay>[,<Traffic handling priority>[,<Source statistics descriptor>[,<Signalling indication>]]]]]]]]]]]]]]]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
    at_token_parse_result_enum              Traffic_class_parse_result;
    atcmd_Traffic_class_enum                Traffic_class;                                                      // integer type
    at_token_parse_result_enum              Maximum_bitrate_UL_parse_result;
    kal_uint32                              Maximum_bitrate_UL;                                                 // integer type
    at_token_parse_result_enum              Maximum_bitrate_DL_parse_result;
    kal_uint32                              Maximum_bitrate_DL;                                                 // integer type
    at_token_parse_result_enum              Guaranteed_bitrate_UL_parse_result;
    kal_uint32                              Guaranteed_bitrate_UL;                                              // integer type
    at_token_parse_result_enum              Guaranteed_bitrate_DL_parse_result;
    kal_uint32                              Guaranteed_bitrate_DL;                                              // integer type
    at_token_parse_result_enum              Delivery_order_parse_result;
    atcmd_Delivery_order_enum               Delivery_order;                                                     // integer type
    at_token_parse_result_enum              Maximum_SDU_size_parse_result;
    kal_uint32                              Maximum_SDU_size;                                                   // integer type
    at_token_parse_result_enum              SDU_error_ratio_parse_result;
    kal_uint8                               SDU_error_ratio[SDU_ERROR_RATIO_STRING_LEN];                        // string type
    at_token_parse_result_enum              Residual_bit_error_ratio_parse_result;
    kal_uint8                               Residual_bit_error_ratio[RESIDUAL_BIT_ERROR_RATIO_STRING_LEN];      // string type
    at_token_parse_result_enum              Delivery_of_erroneous_SDUs_parse_result;
    atcmd_Delivery_of_erroneous_SDUs_enum   Delivery_of_erroneous_SDUs;                                         // integer type
    at_token_parse_result_enum              Transfer_delay_parse_result;
    kal_uint32                              Transfer_delay;                                                     // integer type
    at_token_parse_result_enum              Traffic_handling_priority_parse_result;
    kal_uint32                              Traffic_handling_priority;                                          // integer type
    at_token_parse_result_enum              Source_statistics_descriptor_parse_result;
    atcmd_Source_statistics_descriptor_enum Source_statistics_descriptor;                                       // integer type
    at_token_parse_result_enum              Signalling_indication_parse_result;
    atcmd_Signalling_indication_enum        Signalling_indication;                                              // integer type
} at_cgeqreq_req_struct;

typedef at_cgeqreq_req_struct at_cgeq_common_req_struct;


//READ response = [+CGEQREQ: <cid>,<Traffic class>,<Maximum bitrate UL>,<Maximum bitrate DL>, <Guaranteed bitrate UL>,<Guaranteed bitrate DL>,<Delivery order>,<Maximum SDU size>,<SDU error ratio>,<Residual bit error ratio>,<Delivery of erroneous SDUs>,<Transfer delay>,<Traffic handling priority>,<Source statistics descriptor>,<Signalling indication>]
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                Traffic_class_present;
    atcmd_Traffic_class_enum                Traffic_class;                                                      // integer type
    kal_bool                                Maximum_bitrate_UL_present;
    kal_uint32                              Maximum_bitrate_UL;                                                 // integer type
    kal_bool                                Maximum_bitrate_DL_present;
    kal_uint32                              Maximum_bitrate_DL;                                                 // integer type
    kal_bool                                Guaranteed_bitrate_UL_present;
    kal_uint32                              Guaranteed_bitrate_UL;                                              // integer type
    kal_bool                                Guaranteed_bitrate_DL_present;
    kal_uint32                              Guaranteed_bitrate_DL;                                              // integer type
    kal_bool                                Delivery_order_present;
    atcmd_Delivery_order_enum               Delivery_order;                                                     // integer type
    kal_bool                                Maximum_SDU_size_present;
    kal_uint32                              Maximum_SDU_size;                                                   // integer type
    kal_bool                                SDU_error_ratio_present;
    kal_uint8                               SDU_error_ratio[SDU_ERROR_RATIO_STRING_LEN];                        // string type
    kal_bool                                Residual_bit_error_ratio_present;
    kal_uint8                               Residual_bit_error_ratio[RESIDUAL_BIT_ERROR_RATIO_STRING_LEN];      // string type
    kal_bool                                Delivery_of_erroneous_SDUs_present;
    atcmd_Delivery_of_erroneous_SDUs_enum   Delivery_of_erroneous_SDUs;                                         // integer type
    kal_bool                                Transfer_delay_present;
    kal_uint32                              Transfer_delay;                                                     // integer type
    kal_bool                                Traffic_handling_priority_present;
    kal_uint32                              Traffic_handling_priority;                                          // integer type
    kal_bool                                Source_statistics_descriptor_present;
    atcmd_Source_statistics_descriptor_enum Source_statistics_descriptor;                                       // integer type
    kal_bool                                Signalling_indication_present;
    atcmd_Signalling_indication_enum        Signalling_indication;                                              // integer type
} at_cgeqreq_ind_struct;

typedef at_cgeqreq_ind_struct at_cgeq_common_ind_struct;

//+CGEQMIN
//SET command: +CGEQMIN=[<cid>[,<Traffic class>[,<Maximum bitrate UL>[,<Maximum bitrate DL>[,<Guaranteed bitrate UL>[,<Guaranteed bitrate DL>[,<Delivery order>[,<Maximum SDU size>[,<SDU error ratio>[,<Residual bit error ratio>[,<Delivery of erroneous SDUs> [,<Transfer delay>[,<Traffic handling priority>[,<Source statistics descriptor>[,<Signalling indication>]]]]]]]]]]]]]]]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
    at_token_parse_result_enum              Traffic_class_parse_result;
    atcmd_Traffic_class_enum                Traffic_class;                                                      // integer type
    at_token_parse_result_enum              Maximum_bitrate_UL_parse_result;
    kal_uint32                              Maximum_bitrate_UL;                                                 // integer type
    at_token_parse_result_enum              Maximum_bitrate_DL_parse_result;
    kal_uint32                              Maximum_bitrate_DL;                                                 // integer type
    at_token_parse_result_enum              Guaranteed_bitrate_UL_parse_result;
    kal_uint32                              Guaranteed_bitrate_UL;                                              // integer type
    at_token_parse_result_enum              Guaranteed_bitrate_DL_parse_result;
    kal_uint32                              Guaranteed_bitrate_DL;                                              // integer type
    at_token_parse_result_enum              Delivery_order_parse_result;
    atcmd_Delivery_order_enum               Delivery_order;                                                     // integer type
    at_token_parse_result_enum              Maximum_SDU_size_parse_result;
    kal_uint32                              Maximum_SDU_size;                                                   // integer type
    at_token_parse_result_enum              SDU_error_ratio_parse_result;
    kal_uint8                               SDU_error_ratio[SDU_ERROR_RATIO_STRING_LEN];                        // string type
    at_token_parse_result_enum              Residual_bit_error_ratio_parse_result;
    kal_uint8                               Residual_bit_error_ratio[RESIDUAL_BIT_ERROR_RATIO_STRING_LEN];      // string type
    at_token_parse_result_enum              Delivery_of_erroneous_SDUs_parse_result;
    atcmd_Delivery_of_erroneous_SDUs_enum   Delivery_of_erroneous_SDUs;                                         // integer type
    at_token_parse_result_enum              Transfer_delay_parse_result;
    kal_uint32                              Transfer_delay;                                                     // integer type
    at_token_parse_result_enum              Traffic_handling_priority_parse_result;
    kal_uint32                              Traffic_handling_priority;                                          // integer type
    at_token_parse_result_enum              Source_statistics_descriptor_parse_result;
    atcmd_Source_statistics_descriptor_enum Source_statistics_descriptor;                                       // integer type
    at_token_parse_result_enum              Signalling_indication_parse_result;
    atcmd_Signalling_indication_enum        Signalling_indication;                                              // integer type
} at_cgeqmin_req_struct;

//READ response = [+CGEQMIN: <cid>,<Traffic class>,<Maximum bitrate UL>,<Maximum bitrate DL>,<Guaranteed bitrate UL>,<Guaranteed bitrate DL>,<Delivery order>,<Maximum SDU size>,<SDU error ratio>,<Residual bit error ratio>,<Delivery of erroneous SDUs>,<Transfer delay>,<Traffic handling priority>,<Source statistics descriptor>,<Signalling indication>]
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                Traffic_class_present;
    atcmd_Traffic_class_enum                Traffic_class;                                                      // integer type
    kal_bool                                Maximum_bitrate_UL_present;
    kal_uint32                              Maximum_bitrate_UL;                                                 // integer type
    kal_bool                                Maximum_bitrate_DL_present;
    kal_uint32                              Maximum_bitrate_DL;                                                 // integer type
    kal_bool                                Guaranteed_bitrate_UL_present;
    kal_uint32                              Guaranteed_bitrate_UL;                                              // integer type
    kal_bool                                Guaranteed_bitrate_DL_present;
    kal_uint32                              Guaranteed_bitrate_DL;                                              // integer type
    kal_bool                                Delivery_order_present;
    atcmd_Delivery_order_enum               Delivery_order;                                                     // integer type
    kal_bool                                Maximum_SDU_size_present;
    kal_uint32                              Maximum_SDU_size;                                                   // integer type
    kal_bool                                SDU_error_ratio_present;
    kal_uint8                               SDU_error_ratio[SDU_ERROR_RATIO_STRING_LEN];                        // string type
    kal_bool                                Residual_bit_error_ratio_present;
    kal_uint8                               Residual_bit_error_ratio[RESIDUAL_BIT_ERROR_RATIO_STRING_LEN];      // string type
    kal_bool                                Delivery_of_erroneous_SDUs_present;
    atcmd_Delivery_of_erroneous_SDUs_enum   Delivery_of_erroneous_SDUs;                                         // integer type
    kal_bool                                Transfer_delay_present;
    kal_uint32                              Transfer_delay;                                                     // integer type
    kal_bool                                Traffic_handling_priority_present;
    kal_uint32                              Traffic_handling_priority;                                          // integer type
    kal_bool                                Source_statistics_descriptor_present;
    atcmd_Source_statistics_descriptor_enum Source_statistics_descriptor;                                       // integer type
    kal_bool                                Signalling_indication_present;
    atcmd_Signalling_indication_enum        Signalling_indication;                                              // integer type
} at_cgeqmin_ind_struct;

//+CGEQNEG
//SET command: +CGEQNEG[=<cid>[,<cid>[,...]]]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
} at_cgeqneg_req_struct;

//READ response = [+CGEQNEG: <cid>,<Traffic class>,<Maximum bitrate UL>,<Maximum bitrate DL>,<Guaranteed bitrate UL>,<Guaranteed bitrate DL>,<Delivery order>,<Maximum SDU size>,<SDU error ratio>,<Residual bit error ratio>,<Delivery of erroneous SDUs>,<Transfer delay>,<Traffic handling priority>]
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                Traffic_class_present;
    atcmd_Traffic_class_enum                Traffic_class;                                                      // integer type
    kal_bool                                Maximum_bitrate_UL_present;
    kal_uint32                              Maximum_bitrate_UL;                                                 // integer type
    kal_bool                                Maximum_bitrate_DL_present;
    kal_uint32                              Maximum_bitrate_DL;                                                 // integer type
    kal_bool                                Guaranteed_bitrate_UL_present;
    kal_uint32                              Guaranteed_bitrate_UL;                                              // integer type
    kal_bool                                Guaranteed_bitrate_DL_present;
    kal_uint32                              Guaranteed_bitrate_DL;                                              // integer type
    kal_bool                                Delivery_order_present;
    atcmd_Delivery_order_enum               Delivery_order;                                                     // integer type
    kal_bool                                Maximum_SDU_size_present;
    kal_uint32                              Maximum_SDU_size;                                                   // integer type
    kal_bool                                SDU_error_ratio_present;
    kal_uint8                               SDU_error_ratio[SDU_ERROR_RATIO_STRING_LEN];                        // string type
    kal_bool                                Residual_bit_error_ratio_present;
    kal_uint8                               Residual_bit_error_ratio[RESIDUAL_BIT_ERROR_RATIO_STRING_LEN];      // string type
    kal_bool                                Delivery_of_erroneous_SDUs_present;
    atcmd_Delivery_of_erroneous_SDUs_enum   Delivery_of_erroneous_SDUs;                                         // integer type
    kal_bool                                Transfer_delay_present;
    kal_uint32                              Transfer_delay;                                                     // integer type
    kal_bool                                Traffic_handling_priority_present;
    kal_uint32                              Traffic_handling_priority;                                          // integer type
} at_cgeqneg_ind_struct;

//+CGACT
//SET command: +CGACT=[<state>[,<cid>[,<cid>[,...]]]]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              state_parse_result;
    atcmd_state_enum                        state;                                                              // integer type
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
} at_cgact_req_struct;

//READ response = [+CGACT: <cid>,<state>]
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                state_present;
    atcmd_state_enum                        state;                                                              // integer type
} at_cgact_ind_struct;

//+CGCMOD
//SET command: +CGCMOD[=<cid>[,<cid>[,...]]]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
} at_cgcmod_req_struct;

//+CGDATA
//SET command: +CGDATA[=<L2P>[,<cid>[,<cid>[,...]]]]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              L2P_parse_result;
    kal_uint8                               L2P[L2P_STRING_LEN];                                                // string type
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
} at_cgdata_req_struct;

//+CGPADDR
//SET command: +CGPADDR[=<cid>[,<cid>[,...]]]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
} at_cgpaddr_req_struct;

//READ response = [+CGPADDR: <cid>[,<PDP_addr_1>[,<PDP_addr_2>]]]
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                PDP_addr_1_present;
    at_addr_struct                          PDP_addr_1;                                                         // string type
    kal_bool                                PDP_addr_2_present;
    at_addr_struct                          PDP_addr_2;                                                         // string type
} at_cgpaddr_ind_struct;

//+CGAUTO
//SET command: +CGAUTO=[<n>]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cgauto_n_parse_result;
    atcmd_cgauto_n_enum                     cgauto_n;                                                           // integer type
} at_cgauto_req_struct;

//READ response = +CGAUTO: <n>
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cgauto_n_present;
    atcmd_cgauto_n_enum                     cgauto_n;                                                           // integer type
} at_cgauto_ind_struct;

//+CGANS
//SET command: +CGANS[=<response>,[<L2P>,[<cid>]]]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              response_parse_result;
    atcmd_response_enum                     response;                                                           // integer type
    at_token_parse_result_enum              L2P_parse_result;
    kal_uint8                               L2P[L2P_STRING_LEN];                                                // string type
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
} at_cgans_req_struct;

//+CGEREP
//SET command: +CGEREP=[<mode>[,<bfr>]]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cgerep_mode_parse_result;
    atcmd_cgerep_mode_enum                  cgerep_mode;                                                        // integer type
    at_token_parse_result_enum              bfr_parse_result;
    atcmd_bfr_enum                          bfr;                                                                // integer type
} at_cgerep_req_struct;

//READ response = +CGEREP: <mode>,<bfr>
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cgerep_mode_present;
    atcmd_cgerep_mode_enum                  cgerep_mode;                                                        // integer type
    kal_bool                                bfr_present;
    atcmd_bfr_enum                          bfr;                                                                // integer type
} at_cgerep_ind_struct;

//+CGCONTRDP
//SET command: +CGCONTRDP[=<cid>]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
} at_cgcontrdp_req_struct;

//READ response = [+CGCONTRDP: <cid>,<bearer_id>,<apn>[,<local_addr and subnet_mask>[,<gw_addr>[,<DNS_prim_addr>[,<DNS_sec_addr>[,<P-CSCF_prim_addr>[,<P-CSCF_sec_addr>[,<IM_CN_Signalling_Flag>[,<LIPA_indication>[,<IPv4_MTU>[,<WLAN_Offload>[,<Local_Addr_Ind>]]]]]]]]]]]]
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                bearer_id_present;
    kal_uint32                              bearer_id;                                                          // integer type
    kal_bool                                apn_present;
    kal_uint8                               apn[APN_STRING_LEN];                                                // string type
    kal_bool                                local_addr_and_subnet_mask_present;
    at_addr_and_mask_struct                 local_addr_and_subnet_mask;                                         // string type
    kal_bool                                gw_addr_present;
    at_addr_struct                          gw_addr;                                                            // string type
    kal_bool                                DNS_prim_addr_present;
    at_addr_struct                          DNS_prim_addr;                                                      // string type
    kal_bool                                DNS_sec_addr_present;
    at_addr_struct                          DNS_sec_addr;                                                       // string type
    kal_bool                                P_CSCF_prim_addr_present;
    at_addr_struct                          P_CSCF_prim_addr;                                                   // string type
    kal_bool                                P_CSCF_sec_addr_present;
    at_addr_struct                          P_CSCF_sec_addr;                                                    // string type
    kal_bool                                IM_CN_Signalling_Flag_present;
    atcmd_IM_CN_Signalling_Flag_enum        IM_CN_Signalling_Flag;                                              // integer type
    kal_bool                                LIPA_indication_present;
    atcmd_LIPA_indication_enum              LIPA_indication;                                                    // integer type
    kal_bool                                IPv4_MTU_present;
    kal_uint32                              IPv4_MTU;                                                           // integer type
    kal_bool                                WLAN_Offload_present;
    atcmd_WLAN_Offload_enum                 WLAN_Offload;                                                       // integer type
    kal_bool                                Local_Addr_Ind_present;
    atcmd_Local_Addr_Ind_enum               Local_Addr_Ind;                                                     // integer type
} at_cgcontrdp_ind_struct;

//+CGSCONTRDP
//SET command: +CGSCONTRDP[=<cid>]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
} at_cgscontrdp_req_struct;

//READ response = [+CGSCONTRDP: <cid>,<p_cid>,<bearer_id>[,<IM_CN_Signalling_Flag>[,<WLAN_Offload>]]]
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                p_cid_present;
    kal_uint32                              p_cid;                                                              // integer type
    kal_bool                                bearer_id_present;
    kal_uint32                              bearer_id;                                                          // integer type
    kal_bool                                IM_CN_Signalling_Flag_present;
    atcmd_IM_CN_Signalling_Flag_enum        IM_CN_Signalling_Flag;                                              // integer type
    kal_bool                                WLAN_Offload_present;
    atcmd_WLAN_Offload_enum                 WLAN_Offload;                                                       // integer type
} at_cgscontrdp_ind_struct;

//+CGTFTRDP
//SET command: +CGTFTRDP[=<cid>]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
} at_cgtftrdp_req_struct;

//READ response = [+CGTFTRDP: <cid>,<packet filter identifier>,<evaluation precedence index>,<remote address and subnet mask>,<protocol number (ipv4) / next header (ipv6)>,<local port range>,<remote port range>,<ipsec security parameter index (spi)>,<type of service (tos) (ipv4) and mask / traffic class (ipv6) and mask>,<flow label (ipv6)>,<direction>,<NW packet filter Identifier>,<local address and subnet mask>]
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                packet_filter_identifier_present;
    kal_uint32                              packet_filter_identifier;                                           // integer type
    kal_bool                                evaluation_precedence_index_present;
    kal_uint32                              evaluation_precedence_index;                                        // integer type
    kal_bool                                remote_address_and_subnet_mask_present;
    at_addr_and_mask_struct                 remote_address_and_subnet_mask;                                     // string type
    kal_bool                                protocol_number_next_header_present;                                
    kal_uint32                              protocol_number_next_header;                                        // integer type
    kal_bool                                local_port_range_present;
    kal_uint8                               local_port_range[LOCAL_PORT_RANGE_STRING_LEN];                      // string type
    kal_bool                                remote_port_range_present;
    kal_uint8                               remote_port_range[REMOTE_PORT_RANGE_STRING_LEN];                    // string type
    kal_bool                                ipsec_spi_present;                                                  
    kal_uint32                              ipsec_spi;                                                          // numeric value
    kal_bool                                tos_traffic_class_and_mask_present;                                 
    kal_uint8                               tos_traffic_class_and_mask[TOS_TRAFFIC_CLASS_AND_MASK_STRING_LEN];  // string type
    kal_bool                                flow_label_present;                                                 
    kal_uint32                              flow_label;                                                         // numeric value
    kal_bool                                direction_present;
    atcmd_direction_enum                    direction;                                                          // integer type
    kal_bool                                NW_packet_filter_Identifier_present;
    kal_uint32                              NW_packet_filter_Identifier;                                        // integer type
    kal_bool                                local_address_and_subnet_mask_present;
    at_addr_and_mask_struct                 local_address_and_subnet_mask;                                      // string type
} at_cgtftrdp_ind_struct;

//+CGEQOS
//SET command: +CGEQOS=[<cid>[,<QCI>[,<DL_GBR>,<UL_GBR>[,<DL_MBR>,<UL_MBR>]]]]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
    at_token_parse_result_enum              QCI_parse_result;
    kal_uint32                              QCI;                                                                // integer type
    at_token_parse_result_enum              DL_GBR_parse_result;
    kal_uint32                              DL_GBR;                                                             // integer type
    at_token_parse_result_enum              UL_GBR_parse_result;
    kal_uint32                              UL_GBR;                                                             // integer type
    at_token_parse_result_enum              DL_MBR_parse_result;
    kal_uint32                              DL_MBR;                                                             // integer type
    at_token_parse_result_enum              UL_MBR_parse_result;
    kal_uint32                              UL_MBR;                                                             // integer type
} at_cgeqos_req_struct;

//READ response = [+CGEQOS: <cid>,<QCI>,[<DL_GBR>,<UL_GBR>],[<DL_MBR>,<UL_MBR>]]
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                QCI_present;
    kal_uint32                              QCI;                                                                // integer type
    kal_bool                                DL_GBR_present;
    kal_uint32                              DL_GBR;                                                             // integer type
    kal_bool                                UL_GBR_present;
    kal_uint32                              UL_GBR;                                                             // integer type
    kal_bool                                DL_MBR_present;
    kal_uint32                              DL_MBR;                                                             // integer type
    kal_bool                                UL_MBR_present;
    kal_uint32                              UL_MBR;                                                             // integer type
} at_cgeqos_ind_struct;

//+CGEQOSRDP
//SET command: +CGEQOSRDP[=<cid>]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
} at_cgeqosrdp_req_struct;

//READ response = [+CGEQOSRDP: <cid>,<QCI>,[<DL_GBR>,<UL_GBR>],[<DL_MBR>,<UL_MBR>][,<DL_AMBR>,<UL_AMBR>]]
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                QCI_present;
    kal_uint32                              QCI;                                                                // integer type
    kal_bool                                DL_GBR_present;
    kal_uint32                              DL_GBR;                                                             // integer type
    kal_bool                                UL_GBR_present;
    kal_uint32                              UL_GBR;                                                             // integer type
    kal_bool                                DL_MBR_present;
    kal_uint32                              DL_MBR;                                                             // integer type
    kal_bool                                UL_MBR_present;
    kal_uint32                              UL_MBR;                                                             // integer type
    kal_bool                                DL_AMBR_present;
    kal_uint32                              DL_AMBR;                                                            // integer type
    kal_bool                                UL_AMBR_present;
    kal_uint32                              UL_AMBR;                                                            // integer type
} at_cgeqosrdp_ind_struct;

//+CGDEL
//SET command: +CGDEL[=<cid>]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
} at_cgdel_req_struct;

//READ response = [+CGDEL: <cid>[,<cid>[,...]]]
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
} at_cgdel_ind_struct;

//+CGAUTH
//SET command: +CGAUTH=<cid>[,<auth_prot>[,<userid>[,<password>]]]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
    at_token_parse_result_enum              auth_prot_parse_result;
    atcmd_auth_prot_enum                    auth_prot;                                                          // integer type
    at_token_parse_result_enum              userid_parse_result;
    kal_uint8                               userid[USERID_STRING_LEN];                                          // string type
    at_token_parse_result_enum              password_parse_result;
    kal_uint8                               password[PASSWORD_STRING_LEN];                                      // string type
} at_cgauth_req_struct;

//READ response = [+CGAUTH: <cid>,<auth_prot>,<userid>,<password>]
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                auth_prot_present;
    atcmd_auth_prot_enum                    auth_prot;                                                          // integer type
    kal_bool                                userid_present;
    kal_uint8                               userid[USERID_STRING_LEN];                                          // string type
    kal_bool                                password_present;
    kal_uint8                               password[PASSWORD_STRING_LEN];                                      // string type
} at_cgauth_ind_struct;

//+ECNCFG
//SET command: +ECNCFG=[<mobile_data>], [<data_roaming>],[<volte>], [<ims_test_mode>]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              mobile_data_parse_result;
    atcmd_mobile_data_enum                  mobile_data;                                                        // integer type
    at_token_parse_result_enum              data_roaming_parse_result;
    atcmd_data_roaming_enum                 data_roaming;                                                       // integer type
    at_token_parse_result_enum              volte_parse_result;
    atcmd_volte_enum                        volte;                                                              // integer type
    at_token_parse_result_enum              ims_test_mode_parse_result;
    atcmd_ims_test_mode_enum                ims_test_mode;                                                      // integer type
} at_ecncfg_req_struct;

//+EGDCONT
//SET command: +EGDCONT=<cid>,<roaming_ip_type>
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
    at_token_parse_result_enum              roaming_ip_type_parse_result;
    kal_uint8                               roaming_ip_type[ROAMING_IP_TYPE_STRING_LEN];                        // string type
} at_egdcont_req_struct;

//+VZWAPNETMR
//SET command: +VZWAPNETMR=<wapn>,<max_conn>,<max_conn_t>,<wait_time>,<throttle_time>
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              wapn_parse_result;
    kal_uint32                              wapn;                                                               // integer type
    at_token_parse_result_enum              max_conn_parse_result;
    kal_uint32                              max_conn;                                                           // integer type
    at_token_parse_result_enum              max_conn_t_parse_result;
    kal_uint32                              max_conn_t;                                                         // integer type
    at_token_parse_result_enum              wait_time_parse_result;
    kal_uint32                              wait_time;                                                          // integer type
    at_token_parse_result_enum              throttle_time_parse_result;
    kal_uint32                              throttle_time;                                                      // integer type
} at_vzwapnetmr_req_struct;

//READ response = +VZWAPNETMR:  <wapn>,<max_conn>,<max_conn_t>,<wait_time>,<throttle_time>
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                wapn_present;
    kal_uint32                              wapn;                                                               // integer type
    kal_bool                                max_conn_present;
    kal_uint32                              max_conn;                                                           // integer type
    kal_bool                                max_conn_t_present;
    kal_uint32                              max_conn_t;                                                         // integer type
    kal_bool                                wait_time_present;
    kal_uint32                              wait_time;                                                          // integer type
    kal_bool                                throttle_time_present;
    kal_uint32                              throttle_time;                                                      // integer type
} at_vzwapnetmr_ind_struct;

//+VZWAPNE
//SET command: +VZWAPNE[=<wapn>,<apncl>,<apnni>,<apntype>,<apnb>,<apned>,<apntimer>]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              wapn_parse_result;
    kal_uint32                              wapn;                                                               // integer type
    at_token_parse_result_enum              apncl_parse_result;
    kal_uint32                              apncl;                                                              // integer type
    at_token_parse_result_enum              apnni_parse_result;
    kal_uint8                               apnni[APNNI_STRING_LEN];                                            // string type
    at_token_parse_result_enum              apntype_parse_result;
    kal_uint8                               apntype[APNTYPE_STRING_LEN];                                        // string type
    at_token_parse_result_enum              apnb_parse_result;
    kal_uint8                               apnb[APNB_STRING_LEN];                                              // string type
    at_token_parse_result_enum              apned_parse_result;
    kal_uint8                               apned[APNED_STRING_LEN];                                            // string type
    at_token_parse_result_enum              apntimer_parse_result;
    kal_uint32                              apntimer;                                                           // integer type
} at_vzwapne_req_struct;

//READ response = +VZWAPNE: <wapn>,<apncl>,<apnni>,<apntype>,<apnb>,<apned>,<apntimer>
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                wapn_present;
    kal_uint32                              wapn;                                                               // integer type
    kal_bool                                apncl_present;
    kal_uint32                              apncl;                                                              // integer type
    kal_bool                                apnni_present;
    kal_uint8                               apnni[APNNI_STRING_LEN];                                            // string type
    kal_bool                                apntype_present;
    kal_uint8                               apntype[APNTYPE_STRING_LEN];                                        // string type
    kal_bool                                apnb_present;
    kal_uint8                               apnb[APNB_STRING_LEN];                                              // string type
    kal_bool                                apned_present;
    kal_uint8                               apned[APNED_STRING_LEN];                                            // string type
    kal_bool                                apntimer_present;
    kal_uint32                              apntimer;                                                           // integer type
} at_vzwapne_ind_struct;

//+EGPAU
//SET command: +EGPAU=<op>,<cid>[,<auth_type>]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              op_parse_result;
    atcmd_op_enum                           op;                                                                 // integer type
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
    at_token_parse_result_enum              auth_type_parse_result;
    atcmd_auth_type_enum                    auth_type;                                                          // integer type
} at_egpau_req_struct;

//READ response = +EGPAU: <auth_type>
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                auth_type_present;
    atcmd_auth_type_enum                    auth_type;                                                          // integer type
} at_egpau_ind_struct;

//+EGACT
//SET command: +EGACT=<state>,<cid>,<rat>,<deact_cause>
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              state_parse_result;
    atcmd_state_enum                        state;                                                              // integer type
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
    at_token_parse_result_enum              rat_parse_result;
    atcmd_rat_enum                          rat;                                                                // integer type
    at_token_parse_result_enum              deact_cause_parse_result;
    atcmd_deact_cause_enum                  deact_cause;                                                        // integer type
} at_egact_req_struct;

//+CGSDATA
//SET command: +CGSDATA=<byte>,<cid>
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              byte_parse_result;
    kal_uint32                              byte;                                                               // integer type
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
} at_cgsdata_req_struct;

//+ACTTEST
//SET command: +ACTTEST=<state> ,<cid>
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              state_parse_result;
    atcmd_state_enum                        state;                                                              // integer type
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
} at_acttest_req_struct;

//+PSBEARER
//SET command:  +PSBEARER=<mode>
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              psbearer_mode_parse_result;
    atcmd_psbearer_mode_enum                psbearer_mode;                                                      // integer type
} at_psbearer_req_struct;

//READ response = +PSBEARER: <cell_data_speed_support>,<max_data_bearer_capability>,<scell_number_dl>,<scell_number_ul>
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cell_data_speed_support_present;
    atcmd_cell_data_speed_support_enum      cell_data_speed_support;                                            // integer type
    kal_bool                                max_data_bearer_capability_present;
    atcmd_max_data_bearer_capability_enum   max_data_bearer_capability;                                         // integer type
    kal_bool                                scell_number_dl_present;
    kal_uint32                              scell_number_dl;                                                    // integer type
    kal_bool                                scell_number_ul_present;
    kal_uint32                              scell_number_ul;                                                    // integer type
} at_psbearer_ind_struct;

//+EGFB
//SET command: +EGFB=<fallback_enable>,<ipv4_first>
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              fallback_enable_parse_result;
    atcmd_fallback_enable_enum              fallback_enable;                                                    // integer type
    at_token_parse_result_enum              ipv4_first_parse_result;
    atcmd_ipv4_first_enum                   ipv4_first;                                                         // integer type
} at_egfb_req_struct;

//READ response = +EGFB: <fallback_enable>,<ipv4_first>
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                fallback_enable_present;
    atcmd_fallback_enable_enum              fallback_enable;                                                    // integer type
    kal_bool                                ipv4_first_present;
    atcmd_ipv4_first_enum                   ipv4_first;                                                         // integer type
} at_egfb_ind_struct;

//+EGLD
//SET command: +EGLD=<cid>
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
} at_egld_req_struct;

//+EGDELPF
//SET command:  +EGDELPF=<cid>,<pfid>
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
    at_token_parse_result_enum              pfid_parse_result;
    kal_uint32                              pfid;                                                               // integer type
} at_egdelpf_req_struct;

//READ response = +EGDELPF: <cid>
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_uint32                              egdel_pfid_count;
    kal_uint32                              egdel_pfid[MAX_PACKET_FILTER_COUNT];
} at_egdelpf_ind_struct;

//+EGLNKPF
//SET command:  +EGLNKPF=<cid>,<linked_pfid>
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
    at_token_parse_result_enum              linked_pfid_parse_result;
    kal_uint32                              linked_pfid;                                                        // integer type
} at_eglnkpf_req_struct;

//READ response = +EGLNKPF: <cid>
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_uint32                              eglnk_pfid_count;
    kal_uint32                              eglnk_pfid[MAX_PACKET_FILTER_COUNT];
} at_eglnkpf_ind_struct;

//+EGPCORDP
//SET command: +EGPCORDP=<cid>[,<IE>]
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
    at_token_parse_result_enum              IE_parse_result;
    kal_uint8                               IE[IE_STRING_LEN];                                                  // string type
} at_egpcordp_req_struct;
typedef at_egpcordp_req_struct at_bgpcordp_req_struct;

//READ response = +EGPCORDP: <cid>, <IE>, <contents>
typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                                // integer type
    kal_bool                                IE_present;
    kal_uint8                               IE[IE_STRING_LEN];                                                  // string type
    kal_bool                                contents_present;
    kal_uint8                               contents[AT_EGPCORDP_CONTENTS_STRING_LEN];                                      // string type
} at_egpcordp_ind_struct;
typedef at_egpcordp_ind_struct at_bgpcordp_ind_struct;

//+EGPCO
//SET command: +EGPCO=<cid>,<IE>,<content>[,<IE>,<content>[,...]]
typedef struct{
    at_token_parse_result_enum              ID_parse_result;
    kal_uint8                               ID[IE_STRING_LEN];                                                  // string type
    at_token_parse_result_enum              contents_parse_result;
    kal_uint8                               contents[EGPCO_IE_CONTENTS_STRING_LEN];                                      // string type
}egpco_ie_struct;

typedef struct
{
    ATCMD_HDR 
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                                // integer type
    kal_uint8                               IE_count;
    egpco_ie_struct                         IE[MAX_IE_COUNT];
} at_egpco_req_struct;

typedef struct
{
    kal_uint32            src_id;
    kal_bool              cid_present;
    kal_uint32            cid;                                                                // integer type
    kal_bool              ID_present;
    kal_uint8             ID[IE_STRING_LEN];                                                  // string type
    kal_bool              contents_present;
    kal_uint8             contents[EGPCO_IE_CONTENTS_STRING_LEN];                                      // string type
} at_egpco_ind_struct;

//+EDALLOW
//SET command: +EDALLOW=<is_data_allowed>
typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              is_data_allowed_parse_result;
    atcmd_is_data_allowed_enum              is_data_allowed;                                                    // integer type
} at_edallow_req_struct;



typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                apn_index_present;
    kal_uint8                               apn_index;                                                    // integer type
    kal_bool                                apn_present;
    kal_uint8                               apn[APN_STRING_LEN];                                          // string type
    kal_bool                                inactivity_time_present;
    kal_uint32                              inactivity_time;                                              // integer type
} at_eapnsync_ind_struct;

typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              apn_index_parse_result;
    kal_uint8                               apn_index;                                                    // integer type
    at_token_parse_result_enum              apn_parse_result;
    kal_uint8                               apn[APN_STRING_LEN];                                          // string type
    at_token_parse_result_enum              inactivity_time_parse_result;
    kal_uint32                              inactivity_time;                                              // integer type
} at_eapnsync_req_struct;

typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                mode_present;
    kal_uint8                               mode;                                                    // integer type
} at_evzwapfcia_ind_struct;

typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              mode_parse_result;
    kal_uint8                               mode;                                                    // integer type
} at_evzwapfcia_req_struct;

typedef struct
{
    kal_uint32                              src_id;
    kal_bool                                cid_present;
    kal_uint32                              cid;                                                     // integer type
    kal_bool                                processing_time_limit_in_secs_present;
    kal_uint32                              processing_time_limit_in_secs;                           // integer type
} at_eggrntrspt_ind_struct;

typedef struct
{
    ATCMD_HDR
    at_token_parse_result_enum              cid_parse_result;
    kal_uint32                              cid;                                                     // integer type
    at_token_parse_result_enum              processing_time_limit_in_secs_parse_result;
    kal_uint32                              processing_time_limit_in_secs;                           // integer type
} at_eggrntrspt_req_struct;

typedef struct
{
    ATCMD_HDR
} at_egpcap_req_struct;

typedef struct 
{
    kal_uint32      src_id;
    kal_bool        max_pdp_support_num_present;
    kal_uint32      max_pdp_support_num;
    kal_bool        max_epsb_support_num_present;
    kal_uint32      max_epsb_support_num;
} at_egpcap_test_mode_ind_struct;

#endif /* _ATCMD_STRUCT_H */ 

