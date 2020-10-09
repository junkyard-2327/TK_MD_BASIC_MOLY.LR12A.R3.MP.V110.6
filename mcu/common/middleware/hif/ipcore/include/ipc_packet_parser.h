#ifndef __INC_IPC_PACKET_PARSER_H
#define __INC_IPC_PACKET_PARSER_H

#include "kal_public_api.h"
#include "ipc_api.h"
#include "qmu_bm_util.h"
#include "qmu_bm.h"

extern kal_bool ipc_get_packet_info(kal_uint8 *p_packet, kal_uint16 packet_len, ipc_packet_info_t *p_info);
extern kal_bool ipc_get_packet_info_gpd(kal_uint8 *p_packet, qbm_gpd *gpd, qbm_gpd *base_bd, ipc_packet_info_t *p_info);
extern kal_bool ipc_get_packet_info_did(kal_uint8 *p_packet, upcm_did *did, kal_uint32 base_si_idx, ipc_packet_info_t *p_info);
extern kal_bool ipc_shift_gpd_content_ptr(kal_uint8 *base_addr_p, qbm_gpd *gpd, qbm_gpd *base_bd, kal_uint32 offset, kal_uint8 **offset_addr_pp, qbm_gpd **offset_bd_p);
extern kal_bool ipc_get_continuous_content(kal_uint8 *base_addr_p, kal_uint32 offset, qbm_gpd *gpd, qbm_gpd *base_bd, kal_uint32 len, kal_uint8 **cont_addr_pp, kal_uint8 *cont_buff_p);
extern kal_bool ipc_shift_did_content_ptr(kal_uint8 *base_addr_p, upcm_did *did, kal_uint32 base_si_idx, kal_uint32 offset, kal_uint8 **offset_addr_pp, kal_uint32 *offset_si_idx_p);
extern kal_bool ipc_get_continuous_content_did(kal_uint8 *base_addr_p, kal_uint32 offset, upcm_did *did, kal_uint32 base_si_idx, kal_uint32 len, kal_uint8 **cont_addr_pp,kal_uint8 *cont_buff_p);

#endif  //INC_IPC_PACKET_PARSER_H
