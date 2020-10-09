/*******************************************************************************
 * Filename:
 * ---------
 *  smu_vzw_handler.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   This is the header file for VZW related SMU feature.
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/
#ifndef _SMU_VZW_HANDLER_H
#define _SMU_VZW_HANDLER_H

#include "kal_general_types.h"
#include "kal_public_defs.h"

extern void smu_vzw_check_sml(kal_uint8 check_mask, kal_uint8 src_id);
extern void l4csmu_vzw_rsu_initiate_req_handler(ilm_struct *smu_ilm_ptr);
extern void l4csmu_vzw_rsu_response_req_handler(ilm_struct *smu_ilm_ptr);
extern kal_bool l4csmu_vzw_get_remain_delay_timer(kal_uint8 ps_id, kal_uint16 *remaining_timer);
extern kal_bool smu_vzw_rsu_temporary_unlock_proc(kal_bool is_enable);
extern kal_bool smu_vzw_rsu_delay_timer_expiry_callback(void *param);
extern void l4csmu_vzw_delay_timer_req_handler(ilm_struct *smu_ilm_ptr);
extern void l4csmu_vzw_rsu_data_reset_req_handler(ilm_struct *smu_ilm_ptr);

#ifdef __CARRIER_RESTRICTION__
extern void smu_process_crrst(void);
#endif

#endif /* _SMU_VZW_HANDLER_H */

