/*******************************************************************************
 * Filename:
 * ---------
 * l4c_smu_msg.h
 *
 * Project:
 * --------
 *  UMOLY
 *
 * Description:
 * ------------
 *  This file is intends for SMU message handlers in L4C
 *
 * Author:
 * -------
 * -------
 *
********************************************************************************/

#ifndef _L4C_SMU_MSG_H
#define _L4C_SMU_MSG_H

#include "kal_public_defs.h"

#ifdef __VZW_RSU_SUPPORT__
extern void l4csmu_vzw_rsu_initiate_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4csmu_vzw_rsu_response_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4csmu_vzw_rsu_delay_timer_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4csmu_vzw_rsu_data_reset_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif

#ifdef __SBP_OP129_SIMME_LOCK__
extern void l4csmu_op129_update_simlock_setting_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
extern void l4csmu_op129_get_simlock_data_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);
#endif


#endif /* _L4C_SMU_MSG_H */
