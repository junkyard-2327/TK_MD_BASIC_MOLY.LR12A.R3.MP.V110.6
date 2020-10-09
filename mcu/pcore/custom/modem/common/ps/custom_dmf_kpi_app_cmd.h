#ifndef DMF_APP
#define DMF_APP(APP_ID)
#endif

#ifndef DMF_APP_END
#define DMF_APP_END
#endif

#ifndef DMF_CMD_REQ
#define DMF_CMD_REQ(STRUCT_NAME, PARA_NAME)
#endif

#ifndef DMF_CMD_REQ_END
#define DMF_CMD_REQ_END(STRUCT_NAME)
#endif

#ifndef DMF_CMD_CNF
#define DMF_CMD_CNF(CNF_TYPE, STRUCT_NAME, PARA_NAME)
#endif

#ifndef DMF_CMD_CNF_END
#define DMF_CMD_CNF_END(STRUCT_NAME)
#endif

#ifndef DMF_URC_IND
#define DMF_URC_IND(IND_TYPE, STRUCT_NAME, PARA_NAME)
#endif

#ifndef DMF_URC_IND_END
#define DMF_URC_IND_END(STRUCT_NAME)
#endif

#ifndef DMF_FIELD_VAR
#define DMF_FIELD_VAR(VAR_TYPE, VAR_NAME, MAX_VAL)
#endif

#ifndef DMF_FIELD_VAR_O
#define DMF_FIELD_VAR_O(VAR_TYPE, VAR_NAME, MAX_VAL)
#endif


#ifndef DMF_FIELD_VAR_ARRAY
#define DMF_FIELD_VAR_ARRAY(VAR_TYPE, VAR_NAME, LENGTH)
#endif

#ifndef DMF_FIELD_STRING
#define DMF_FIELD_STRING(STR_NAME, LENGTH)
#endif


#if !defined(DMF_CMD_REQ_SEC) && !defined(DMF_CMD_CNF_SEC) && !defined(DMF_URC_IND_SEC)
#define DMF_CMD_REQ_SEC
#define DMF_CMD_CNF_SEC
#define DMF_URC_IND_SEC
#endif

#define UNUSED_FIELD    0


/*Define structures*/

DMF_APP(DMF_CUST_KPI_APP_ID)


	#ifdef DMF_CMD_REQ_SEC
		DMF_CMD_REQ(dmf_custom_kpi_app_cmd_req_struct, custom_kpi_app_cmd_req)
			DMF_FIELD_VAR(kal_uint32, urc_query, 2000)
			DMF_FIELD_VAR(kal_uint32, group_id, 2000)
			DMF_FIELD_VAR(kal_uint32, kpi_id, 2000)
		DMF_CMD_REQ_END(dmf_custom_kpi_app_cmd_req_struct)
    #endif 




	#ifdef DMF_URC_IND_SEC
	    DMF_URC_IND(DMF_CUSTOM_KPI_LTE_ATTACH_MAX_COUNT_URC_IND, dmf_custom_kpi_lte_attach_max_count_urc_ind_struct, custom_kpi_lte_attach_max_count_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_req_snd_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_succ_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_with_cause2_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_with_cause3_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_with_cause6_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_with_cause7_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_with_cause8_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_with_cause11_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_with_cause12_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_with_cause13_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_with_cause14_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_with_cause15_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_with_cause16_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_with_cause17_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_with_cause18_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_with_cause22_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_with_cause25_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_with_cause35_cnt, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, eps_attach_fail_with_cause42_cnt, UNUSED_FIELD)
		DMF_URC_IND_END(dmf_custom_kpi_lte_attach_max_count_urc_ind_struct)

		DMF_URC_IND(DMF_CUSTOM_KPI_EPS_BEARER_MAX_COUNT_URC_IND, dmf_custom_kpi_eps_bearer_max_count_urc_ind_struct, custom_kpi_eps_bearer_max_count_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
        	DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, act_default_bearer_req_rcv_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, act_default_bearer_accept_sent_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, act_default_bearer_reject_sent_cnt, UNUSED_FIELD)
        DMF_URC_IND_END(dmf_custom_kpi_eps_bearer_max_count_urc_ind_struct) 

		DMF_URC_IND(DMF_CUSTOM_KPI_SRVCC_MAX_COUNT_URC_IND, dmf_custom_kpi_srvcc_max_count_urc_ind_struct, custom_kpi_srvcc_max_count_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
        	DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, srvcc_ho_req_rcv_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, srvcc_ho_succ_sent_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, srvcc_ho_fail_cnt, UNUSED_FIELD)	
        DMF_URC_IND_END(dmf_custom_kpi_srvcc_max_count_urc_ind_struct) 

		DMF_URC_IND(DMF_CUSTOM_KPI_IMS_REG_MAX_COUNT_URC_IND, dmf_custom_kpi_ims_reg_max_count_urc_ind_struct, custom_kpi_ims_reg_max_count_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
        	DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_reg_req_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, initial_reg_req_with_401_rsp_cnt, UNUSED_FIELD)	
            DMF_FIELD_VAR(kal_uint32, initial_reg_req_with_auc_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, initial_reg_success_cnt,UNUSED_FIELD)
        DMF_URC_IND_END(dmf_custom_kpi_ims_reg_max_count_urc_ind_struct)

		DMF_URC_IND(DMF_CUSTOM_KPI_VOLTE_CALL_DROP_MAX_COUNT_URC_IND, dmf_custom_kpi_volte_call_drop_max_count_urc_ind_struct, custom_kpi_volte_call_drop_max_count_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
        	DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_rsp_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, final_rsp_cnt, UNUSED_FIELD)	
            DMF_FIELD_VAR(kal_uint32, initial_call_drop_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, final_call_drop_cnt, UNUSED_FIELD)
        DMF_URC_IND_END(dmf_custom_kpi_volte_call_drop_max_count_urc_ind_struct) 

		DMF_URC_IND(DMF_CUSTOM_KPI_MO_VOLTE_CALL_MAX_COUNT_URC_IND, dmf_custom_kpi_mo_volte_call_max_count_urc_ind_struct, custom_kpi_mo_volte_call_max_count_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
        	DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mo_call_req_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mo_call_connect_to_nw_cnt, UNUSED_FIELD)	
            DMF_FIELD_VAR(kal_uint32, mo_call_early_release_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mo_call_with_403_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mo_call_with_486_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mo_call_with_480_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mo_call_with_484_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mo_call_with_600_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mo_call_with_604_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mo_call_with_487_cnt, UNUSED_FIELD)
        DMF_URC_IND_END(dmf_custom_kpi_mo_volte_call_max_count_urc_ind_struct) 

		DMF_URC_IND(DMF_CUSTOM_KPI_MT_VOLTE_CALL_MAX_COUNT_URC_IND, dmf_custom_kpi_mt_volte_call_max_count_urc_ind_struct, custom_kpi_mt_volte_call_max_count_urc_ind)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
        	DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, mt_call_req_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mt_call_connect_success_cnt, UNUSED_FIELD)	
            DMF_FIELD_VAR(kal_uint32, mt_call_early_release_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mt_call_with_403_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mt_call_with_486_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mt_call_with_480_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mt_call_with_484_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mt_call_with_600_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mt_call_with_604_cnt, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mt_call_with_487_cnt, UNUSED_FIELD)
        DMF_URC_IND_END(dmf_custom_kpi_mt_volte_call_max_count_urc_ind_struct) 

	#endif	/* DMF_URC_IND_SEC */

	#ifdef DMF_CMD_CNF_SEC
		DMF_CMD_CNF(DMF_CUSTOM_KPI_LTE_ATTACH_COUNT_CNF, dmf_custom_kpi_lte_attach_count_cnf_struct, custom_kpi_lte_attach_count_cnf)
            DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
        	DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_request_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_success_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_with_cause2_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_with_cause3_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_with_cause6_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_with_cause7_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_with_cause8_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_with_cause11_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_with_cause12_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_with_cause13_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_with_cause14_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_with_cause15_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_with_cause16_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_with_cause17_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_with_cause18_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_with_cause22_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_with_cause25_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_with_cause35_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, lte_attach_fail_with_cause42_count, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_custom_kpi_lte_attach_count_cnf_struct)

		DMF_CMD_CNF(DMF_CUSTOM_KPI_ACT_DEFAULT_EPS_BEARER_COUNT_CNF, dmf_custom_kpi_act_default_eps_bearer_count_cnf_struct, custom_kpi_act_default_eps_bearer_count_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
        	DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, esm_act_default_eps_bearer_req_rcv_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, esm_act_default_eps_bearer_accept_sent_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, esm_act_default_eps_bearer_reject_sent_count, UNUSED_FIELD)   
        DMF_CMD_CNF_END(dmf_custom_kpi_act_default_eps_bearer_count_cnf_struct)
        
		DMF_CMD_CNF(DMF_CUSTOM_KPI_SRVCC_COUNT_CNF, dmf_custom_kpi_srvcc_count_cnf_struct, custom_kpi_srvcc_count_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
        	DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, srvcc_ho_req_rcv_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, srvcc_ho_succ_sent_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, srvcc_ho_fail_count, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_custom_kpi_srvcc_count_cnf_struct)

	
		DMF_CMD_CNF(DMF_CUSTOM_KPI_IMS_REG_COUNT_CNF, dmf_custom_kpi_ims_reg_count_cnf_struct, custom_kpi_ims_reg_count_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
        	DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_reg_req_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, initial_reg_req_with_401_rsp_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, initial_reg_req_with_auc_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, initial_reg_success_count, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_custom_kpi_ims_reg_count_cnf_struct)

		DMF_CMD_CNF(DMF_CUSTOM_KPI_VOLTE_CALL_DROP_COUNT_CNF, dmf_custom_kpi_volte_call_drop_count_cnf_struct, custom_kpi_volte_call_drop_count_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
        	DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_rsp_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, final_rsp_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, initial_call_drop_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, final_call_drop_count, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_custom_kpi_volte_call_drop_count_cnf_struct)
		
		DMF_CMD_CNF(DMF_CUSTOM_KPI_MO_VOLTE_CALL_COUNT_CNF, dmf_custom_kpi_mo_volte_call_count_cnf_struct, custom_kpi_mo_volte_call_count_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
        	DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_mo_call_req_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, initial_mo_call_connect_to_nw_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mo_call_early_release_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mo_call_with_403_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mo_call_with_486_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mo_call_with_480_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mo_call_with_484_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mo_call_with_600_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mo_call_with_604_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mo_call_with_487_count, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_custom_kpi_mo_volte_call_count_cnf_struct)

		
		DMF_CMD_CNF(DMF_CUSTOM_KPI_MT_VOLTE_CALL_COUNT_CNF, dmf_custom_kpi_mt_volte_call_count_cnf_struct, custom_kpi_mt_volte_call_count_cnf)
			DMF_FIELD_VAR(kal_uint32, group_id, UNUSED_FIELD)
        	DMF_FIELD_VAR(kal_uint32, kpi_id, UNUSED_FIELD)
			DMF_FIELD_VAR(kal_uint32, initial_mt_call_req_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mt_call_connect_success_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mt_call_early_release_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mt_call_with_486_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mt_call_with_403_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mt_call_with_480_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mt_call_with_484_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mt_call_with_600_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mt_call_with_604_count, UNUSED_FIELD)
            DMF_FIELD_VAR(kal_uint32, mt_call_with_487_count, UNUSED_FIELD)
        DMF_CMD_CNF_END(dmf_custom_kpi_mt_volte_call_count_cnf_struct)
    #endif 

DMF_APP_END


#undef DMF_APP
#undef DMF_APP_END
#undef DMF_CMD_REQ
#undef DMF_CMD_REQ_END
#undef DMF_CMD_CNF
#undef DMF_CMD_CNF_END
#undef DMF_URC_IND
#undef DMF_URC_IND_END
#undef DMF_FIELD_VAR
#undef DMF_FIELD_VAR_O
#undef DMF_FIELD_VAR_ARRAY
#undef DMF_FIELD_STRING
#undef DMF_CMD_REQ_SEC
#undef DMF_CMD_CNF_SEC
#undef DMF_URC_IND_SEC
#undef DMF_CUSTOM_SEC
#undef UNUSED_FIELD
