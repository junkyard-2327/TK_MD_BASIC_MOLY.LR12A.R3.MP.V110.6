/************************************************************************************
* #include
************************************************************************************/
#include "FEC_LTPC_EMI_DATA.h"
#include "dsp_header_define_cuif_fec_wbrp.h"

//#include "kal_general_types.h"                  /* need to check whether sync to xl1sim */

/************************************************************************************
* #variable
************************************************************************************/
#ifdef __LTE_L1SIM__
LTE_TX_PS_CON_T        PS_CON[FEC_ROUTE_NUM];
LTE_TX_L1_FEC_TPC_DM_T rL1_TO_FEC_TPC_CFG_DM = {0};
#else
EXT_CUIF_FEC_l_tx_t *EXT_CUIF_L_TX_ptr = EXT_FEC_WBRP_FEC_L_TX_INFO;
#endif

/*#if defined(__USIP_FEC_PAE__) || defined(__USIP_FEC_COSIM__)
LTE_TX_PS_CON_T        PS_CON[BAND_NUM];
LTE_TX_L1_FEC_TPC_DM_T rL1_TO_FEC_TPC_CFG_DM = {0};
#else
LTE_TX_PS_CON_T        PS_CON[LTE_TARGET_SUPPORT_BAND_NUM_MAX];//TPC_LTE_TARGET_MAX_SUPPORT_BAND_NUM
LTE_TX_L1_FEC_TPC_DM_T rL1_TO_FEC_TPC_CFG_DM;
#endif*/
//__MCURW_HWRO_NC_ALIGNED_RW(128) for L1 DMA calibration data

LTE_TX_PS_CON_T* fec_get_ps_con(UINT16 fec_route_idx)
{
    #ifdef __LTE_L1SIM__
	LTE_TX_PS_CON_T *ps_con_ptr = &PS_CON[fec_route_idx];
    #else
	LTE_TX_PS_CON_T *ps_con_ptr = &(EXT_CUIF_L_TX_ptr->PS_CON[fec_route_idx]);
    #endif

	return ps_con_ptr;
}

LTE_TX_L1_FEC_TPC_DM_T* fec_get_rL1_TO_FEC_TPC_CFG_DM_ptr(void)
{
	#ifdef __LTE_L1SIM__
	LTE_TX_L1_FEC_TPC_DM_T *tpc_cfg_ptr = &rL1_TO_FEC_TPC_CFG_DM;
    #else
    LTE_TX_L1_FEC_TPC_DM_T *tpc_cfg_ptr = &(EXT_CUIF_L_TX_ptr->rL1_TO_FEC_TPC_CFG_DM);
    #endif
    return tpc_cfg_ptr;
}


LTE_TX_FEC_TPC_GAIN_CONFIG_T* fec_get_gain_cfg(UINT8 scen_idx)
{
	#ifdef __LTE_L1SIM__
	LTE_TX_FEC_TPC_GAIN_CONFIG_T *gain_cfg = &(rL1_TO_FEC_TPC_CFG_DM.rTPC_GAIN_EVENT_CONFIG_DM[scen_idx]);
    #else
	LTE_TX_FEC_TPC_GAIN_CONFIG_T *gain_cfg = &(EXT_CUIF_L_TX_ptr->rL1_TO_FEC_TPC_CFG_DM.rTPC_GAIN_EVENT_CONFIG_DM[scen_idx]);
    #endif
	return gain_cfg;
}

LTE_TX_FEC_TPC_DFE_GAIN_CONFIG_T* fec_get_dfe_gain_cfg(void)
{
	#ifdef __LTE_L1SIM__
    LTE_TX_FEC_TPC_DFE_GAIN_CONFIG_T *gain_cfg = &(rL1_TO_FEC_TPC_CFG_DM.rTPC_DFE_GAIN_EVENT_CONFIG_DM);
    #else
	LTE_TX_FEC_TPC_DFE_GAIN_CONFIG_T *gain_cfg = &(EXT_CUIF_L_TX_ptr->rL1_TO_FEC_TPC_CFG_DM.rTPC_DFE_GAIN_EVENT_CONFIG_DM);
    #endif
	return gain_cfg;
}

LTE_TX_FEC_TPC_DDPC_CONFIG_T* fec_get_ddpc_cfg(UINT8 cfg_idx)
{
    #ifdef __LTE_L1SIM__
	LTE_TX_FEC_TPC_DDPC_CONFIG_T* ddpc_cfg = &(rL1_TO_FEC_TPC_CFG_DM.rTPC_DDPC_EVENT_CONFIG_DM[cfg_idx]);
    #else
	LTE_TX_FEC_TPC_DDPC_CONFIG_T* ddpc_cfg = &(EXT_CUIF_L_TX_ptr->rL1_TO_FEC_TPC_CFG_DM.rTPC_DDPC_EVENT_CONFIG_DM[cfg_idx]);
    #endif
	return ddpc_cfg;
}

LTE_TX_FEC_TPC_MIPI_GAIN_CONFIG_T* fec_get_mipi_gain_cfg(void)
{
    #ifdef __LTE_L1SIM__
	LTE_TX_FEC_TPC_MIPI_GAIN_CONFIG_T* gain_cfg = &(rL1_TO_FEC_TPC_CFG_DM.rTPC_MIPI_GAIN_EVENT_CONFIG_DM);
    #else
    LTE_TX_FEC_TPC_MIPI_GAIN_CONFIG_T* gain_cfg = &(EXT_CUIF_L_TX_ptr->rL1_TO_FEC_TPC_CFG_DM.rTPC_MIPI_GAIN_EVENT_CONFIG_DM);
    #endif
	return gain_cfg;
}

LTE_TX_FEC_TXK_PARAM_T* fec_get_txk_param_l1_cfg(UINT8 bw_idx)
{
	#ifdef __LTE_L1SIM__
	LTE_TX_FEC_TXK_PARAM_T* cfg_addr = &(rL1_TO_FEC_TPC_CFG_DM.FEC_TXK_PARAM_L1[bw_idx]);
    #else
    LTE_TX_FEC_TXK_PARAM_T* cfg_addr = &(EXT_CUIF_L_TX_ptr->rL1_TO_FEC_TPC_CFG_DM.FEC_TXK_PARAM_L1[bw_idx]);
    #endif
    return cfg_addr;
}

LTE_TX_FEC_ALGO_EMI_INFO_T* fec_get_algo_emi_info_cfg(void)
{
    #ifdef __LTE_L1SIM__
	LTE_TX_FEC_ALGO_EMI_INFO_T* cfg_addr = &(rL1_TO_FEC_TPC_CFG_DM.FEC_ALGO_EMI_Info_L1);
    #else
    LTE_TX_FEC_ALGO_EMI_INFO_T* cfg_addr = &(EXT_CUIF_L_TX_ptr->rL1_TO_FEC_TPC_CFG_DM.FEC_ALGO_EMI_Info_L1);
    #endif
    return cfg_addr;
}


