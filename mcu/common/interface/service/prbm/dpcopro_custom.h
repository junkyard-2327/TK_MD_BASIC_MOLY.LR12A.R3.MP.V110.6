/*******************************************************************************
 * Filename:
 * ---------
 *   dpcopro_custom.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *  Copro & VRB related API released for Customer
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 01 25 2018 chi-yen.yu
 * [MOLY00299272] [MT6763][Bianco][O1][MP2][TMO][MTBF][PHONE][HQ][Lab][Ericsson][Fatal error(task)] err_code10x00000B34 err_code20x90284CA1 err_code30xCCCCCCCC CaDeFa Supported
 * For IPCore customer release
 *
 * 11 13 2017 chao-hung.hsu
 * [MOLY00252913] MT6295 MML2 driver porting
 * . 95 DEV code merge
 *
 * 11 13 2017 chao-hung.hsu
 * [MOLY00252913] MT6295 MML2 driver porting
 * . dpcopro 95 DEV code sync back to R3/TRUNK
 *
 * 09 01 2017 yi-chih.tsai
 * [MOLY00274580] [MT6293][SMO- source code release] remove unnecessary include header file
 * .copy ctrl pkt and key API to customer header
 *
 * 08 09 2017 chi-yen.yu
 * [MOLY00252913] MT6295 MML2 driver porting
 * Add API declare for cursomer release
 *
 * 04 13 2017 chi-yen.yu
 * [MOLY00240758] [Bianco][N1][Blocking]Externel (EE),0,0,99,/data/core/,1,modem,
 * For customer release
****************************************************************************/
#ifndef __DPCOPRO_CUSTOM_H__
#define __DPCOPRO_CUSTOM_H__

enum{
VRB_USER_TX_LISR,			// EMAC Module
VRB_USER_ERT_TASK,			// EMAC Module
VRB_USER_EMACDL_TASK,		// EMAC/ERLCUL Module
VRB_USER_UL2_TASK,			// 3G L2 module, high priority
VRB_RTBL_NUM,
VRB_USER_USBCORE_TASK=VRB_RTBL_NUM,	// USB Core
VRB_USER_IPCORE_TASK,		// IPCore Module
VRB_USER_LHIF_TASK, 		// LHIF Core
VRB_USER_EL2H_TASK, 		// EL2H Module
VRB_USER_EL2_TASK,			// EL2 Module
VRB_USER_ERRC_TASK, 		// ERRC Module (for SRB)
VRB_USER_IMC_TASK,			// LTE CSR Module
VRB_USER_UL2D_TASK, 		// 3G L2 module, lower priority than UL2 Task
//VRB_USER_L1_LISR,			// 3G UL module, not used by 3G user
VRB_USER_NUM
};

void copro_vrb_release(void* addr, kal_uint16 len, kal_uint8 task_id);
void dpcopro_phy_to_vrb_mem_cpy(kal_uint8 *des_vrb_addr, kal_uint8 *src_addr, kal_uint32 len);
typedef struct{
	kal_uint32	v_addr;
	kal_uint32	p_addr[5];
	kal_uint16	v_len;
	kal_uint16	p_len[5];// use 3 phy len for structure align
}v2p_addr_t;
kal_uint16 copro_vrb_to_phy_addr(v2p_addr_t *v2p);
void dpcopro_vrb_copy(kal_uint8 *des, kal_uint8 *src, kal_uint32 len);

//---------- L2 Key setting API ------------
//!@brief cipher and integrity algorithm list
typedef enum{
	L2_ALGO_NULL = 0,
	L2_ALGO_KASUMI,
	L2_ALGO_SNOW3G,
	L2_ALGO_AES,
	L2_ALGO_ZUC
}l2_key_algo;

//!@brief key type list
typedef enum{
	L2_KEY_NULL = 0,
	//single key
	L2_KEY_ENAS_INT,
	L2_KEY_ENAS_ENC,
	L2_KEY_ERRC_INT,
	L2_KEY_ERRC_ENC,
	L2_KEY_EUP_ENC,
	L2_KEY_EUP_S_ENC,
	L2_KEY_UUP_ENC1,
	L2_KEY_UUP_ENC2,
	L2_KEY_UUP_ENC3,
	L2_KEY_UUP_ENC4,
	L2_KEY_UUP_ENC5,
	//dual key, Support Ping Pong Switch
}l2_key_type;

//!@brief the key configuration struct
typedef struct l2_key_cfg_t{
	kal_uint32 algo;
	kal_uint8  key[16];
} l2_key_cfg;

/*!
 * @brief get key index by key type
 * @param type: key type
 * @return key index
 */
kal_uint32 l2_key_get_index(kal_uint32 type);

/*!
 * @brief get key configuration by key index
 * @param key_idx: the key index, which get from "l2_key_get_index" or "l2_key_set_config"
 * @param cfg: the key configuration info
 * @return 0: failure, 1: success
 */
kal_uint32 l2_key_get_config(kal_uint32 key_idx, l2_key_cfg* cfg);

/*!
 * @brief set key and algorithm by key type
 * single key: sw need to make sure hw don't use it
 * dual key  : driver will set another key index
 * @param type: key type
 * @param cfg:  the key configuration info
 * @return key index for key select
 */
kal_uint32 l2_key_set_config(kal_uint32 type, l2_key_cfg* cfg);

//------- the control packet queue API -------
//!@brief the arguments for integrity function
typedef struct l2_cp_eia_info_t{
	kal_uint8  dir;
	kal_uint8  bearer;
	kal_uint16 length;
	kal_uint32 count;
	kal_uint8* src_addr;
	kal_uint8* dst_addr;
}l2_cp_eia_info;

//!@brief the arguments for cipher function
typedef l2_cp_eia_info l2_cp_eea_info;

/*!
 * @brief Do integrity for ENAS. (task only!!!)
 * This function will block task until HW done.
 * @param nas: integrity parameters info
 */
void l2_cp_int_enas(l2_cp_eia_info *nas);

/*!
 * @brief Do cipher for ENAS. (task only!!!)
 * This function will block task until HW done.
 * @param nas: cipher parameters info
 */
void l2_cp_cip_enas(l2_cp_eea_info *nas);

/*!
 * @brief Do integrity for ERRC.(task only!!!)
 * This function will block task until HW done
 * @param rrc: integrity parameters info
 * @param gen_hdr: if gen_hdr = 1, driver will generate pdcp header by count
 */
void l2_cp_int_errc(l2_cp_eia_info *rrc, kal_uint32 gen_hdr);

/*!
 * @brief Generate PDCP header and do integrity for EPDCP.(task only!!!)
 * This function DON'T block task, SW need to poll "handle id" by itself
 * @param pdcp: integrity parameters info
 * @return handle id
 */
kal_uint32 l2_cp_int_epdcp(l2_cp_eia_info *pdcp);

/*!
 * @brief Check that HW is done or not
 * @param handle: handle id which is got from "l2_cp_int_epdcp"
 * @return 0: undone, 1: done
 */
kal_uint32 l2_cp_is_hid_done(kal_uint32 handle);

/*!
 * @brief Check that HW is done and get mac_i
 * @param handle: handle id which is got from "l2_cp_int_epdcp"
 * @return 0: undone, 1: done
 */
kal_uint32 l2_cp_int_pdcp_get_maci(kal_uint32 handle, kal_uint32 *p_maci);

//!@brief the arguments for cipher function
typedef struct l2_cp_uea_info_t{
	kal_uint8  dir:1;
	kal_uint8  key_type:7;
	kal_uint8  bearer;
	kal_uint16 length;
	kal_uint32 count;
	kal_uint8* src_addr;
	kal_uint8* dst_addr;
}l2_cp_uea_info;

/*!
 * @brief Do cipher for 3G Lisr.
 * This function will block Lisr until HW done.
 * @param uea: cipher parameters info
 */
void l2_cp_cip_3g_lisr(l2_cp_uea_info *uea);

void dpcopro_rbuf_release(void *addr,kal_uint16 len);
#if defined(__MD95__)
typedef enum{
	UL_IPF_META_MR_HPC_MATCH=0,
	UL_IPF_META_MR_HPC_NEW,
	UL_IPF_META_MR_NAT_MATCH,
	UL_IPF_META_MR_NAT_MATCH_NO_TRAN,
	UL_IPF_META_MR_NAT_DEL_MATCH,
	UL_IPF_META_MR_NAT_DEL_NO_MATCH,
	UL_IPF_META_MR_NAT_ADD,
	UL_IPF_META_MR_UNKNOWN,
	UL_IPF_META_MR_NUM
}UL_IPF_META_MR;

typedef enum{
	DL_IPF_META_MR_AP=0,
	DL_IPF_META_MR_FILTER_MATCH,
	DL_IPF_META_MR_UNKNOWN,
	DL_IPF_META_MR_NET_INVALID,
	DL_IPF_META_MR_PN_NO_MATCH,
	DL_IPF_META_MR_NAT_MATCH,
	DL_IPF_META_MR_NAT_NO_MATCH,
	DL_IPF_META_MR_NAT_MATCH_NO_TRAN,
	DL_IPF_META_MR_NUM
}DL_IPF_META_MR;

typedef struct ipv4_filter_rule_t{
	kal_uint8 	pdn_sim_id;
	kal_uint8 	protocol;
	kal_uint8 	valid;
	kal_uint8 	resv0:4;
	kal_uint8 	ip:4;
	kal_uint32 	f_pro_word;
	kal_uint32 	remote_addr0;
	kal_uint32 	resv1;
}ipv4_filter_rule;

typedef struct ipv6_filter_rule_t{
	kal_uint8 	pdn_sim_id;
	kal_uint8 	protocol;
	kal_uint8 	valid;
	kal_uint8 	resv0:4;
	kal_uint8 	ip:4;
	kal_uint32 	f_pro_word;
	kal_uint32 	remote_addr0;
	kal_uint32 	resv1;
	kal_uint32	resv2:28;
	kal_uint32	ip1:4;
	kal_uint32 	remote_addr1;
	kal_uint32 	remote_addr2;
	kal_uint32 	remote_addr3;
}ipv6_filter_rule;

typedef struct ipf_dl_meta_t{
	kal_uint16	count;
	kal_uint8 	channel_id;
	kal_uint8	net_type:3;
	kal_uint8	resv:5;
	kal_uint16 	len;
	kal_uint8 	rbid;
	kal_uint8 	pdn_sim_id;
	kal_uint32 	addr;
	kal_uint8 	match_idx;
	kal_uint8 	mr:3;
	kal_uint8 	rsv0:1;
	kal_uint8 	ip:1;
	kal_uint8 	fil_tog:2;
	kal_uint8 	rsv1:1;
	kal_uint8 	tcp_flag;
	kal_uint8 	filter_idx;
}ipf_dl_meta;
#endif

#endif
