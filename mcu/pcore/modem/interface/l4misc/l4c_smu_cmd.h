/*******************************************************************************
 * Filename:
 * ---------
 * l4c_smu_cmd.h
 *
 * Project:
 * --------
 *   UMOLYA
 *
 * Description:
 * ------------
 *   This file is intends for VZW SIM related function prototype
 *
 * Author:
 * -------
 * -------
 *
 *******************************************************************************/

#ifndef _L4C_VZW_SIM_CMD_H
#define _L4C_VZW_SIM_CMD_H

#include "kal_general_types.h"

#ifdef __VZW_RSU_SUPPORT__
extern kal_bool l4c_smu_vzw_rsu_initiate_req(kal_uint8 src_id);
extern kal_bool l4c_smu_vzw_rsu_proc_lock_data_req(kal_uint8 src_id, kal_uint8 *sim_lock_data, kal_uint16 data_len);
extern kal_bool l4c_smu_vzw_rsu_get_lock_status_req(kal_uint8 *status, kal_uint16 *unlock_time);
extern kal_bool l4c_smu_vzw_rsu_delay_timer_req(kal_uint8 src_id, kal_uint8 start_stop);
extern kal_bool l4c_smu_vzw_rsu_data_reset_req(l4c_source_id_enum src_id);
#endif

#ifdef __SBP_OP129_SIMME_LOCK__
extern kal_bool l4c_smu_op129_update_sim_lock_setting_req(kal_uint8 src_id, kal_bool is_last_data, kal_uint16 offset, kal_uint16 sls_len, kal_uint8 *sls);
extern kal_bool l4c_smu_op129_get_simlock_data_req(kal_uint8 src_id, kal_uint8 list_type);
#endif


#endif /* _L4C_VZW_SIM_CMD_H */ 

