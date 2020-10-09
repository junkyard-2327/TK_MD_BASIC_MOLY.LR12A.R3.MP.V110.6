#ifndef __EXT_CUIF_FEC_region_H__
#define __EXT_CUIF_FEC_region_H__
#include "FEC_LTPC_EMI_DATA.h"
#include "FEC_CRX_EMI_DATA.h"
#include "FEC_CTX_EMI_DATA.h"

typedef struct {
    LTE_TX_PS_CON_T        PS_CON[FEC_ROUTE_NUM];
    LTE_TX_L1_FEC_TPC_DM_T rL1_TO_FEC_TPC_CFG_DM;                                                             
}EXT_CUIF_FEC_l_tx_t;

typedef volatile struct {
    EXT_CUIF_FEC_l_tx_t         ext_cuif_fec_l_tx;
    EXT_CUIF_FEC_CRX_INFO_t     ext_cuif_fec_crx;
    EXT_CUIF_FEC_CTX_INFO_t     ext_cuif_fec_ctx;
}EXT_CUIF_FEC_region;



#endif // __CUIF_SS_region_H__


