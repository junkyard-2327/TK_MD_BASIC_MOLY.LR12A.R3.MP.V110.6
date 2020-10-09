
#ifndef _CL1_DRDI_H_
#define _CL1_DRDI_H_

#define CL1_STR_(tOKEN)         CL1_STR_2(tOKEN)
#define CL1_STR_2(tOKEN)        CL1_STR_1(tOKEN)
#define CL1_STR_1(tOKEN)        CL1_STR_0(tOKEN)
#define CL1_STR_0(tOKEN)        #tOKEN

#define CL1_CAT_(t1, t2)        CL1_CAT_2(t1, t2)
#define CL1_CAT_2(t1, t2)       CL1_CAT_1(t1, t2)
#define CL1_CAT_1(t1, t2)       CL1_CAT_0(t1, t2)
#define CL1_CAT_0(t1, t2)       t1##t2

#define NVRAM_SET_IDX(sETiDX)  sETiDX
#define NVRAM_ITEM_RF_CUST_DEFAULT_PRE(nAME, aFFIX)     CL1D_RF_##nAME##_##aFFIX##_
#define NVRAM_ITEM_MIPI_DEFAULT_PRE(nAME, aFFIX)        C2K_##aFFIX##_##nAME##_

#define NVRAM_ITEM_RF_CUST_DEFAULT(nAME, aFFIX, sETiDX) CL1_CAT_(NVRAM_ITEM_RF_CUST_DEFAULT_PRE(nAME, aFFIX), NVRAM_SET_IDX(sETiDX))
#define NVRAM_ITEM_MIPI_DEFAULT(nAME, aFFIX, sETiDX)    CL1_CAT_(NVRAM_ITEM_MIPI_DEFAULT_PRE(nAME, aFFIX), NVRAM_SET_IDX(sETiDX))
#define NVRAM_ITEM_RF_CAL_DEFAULT(nAME, aFFIX, sETiDX)  CL1_CAT_(NVRAM_ITEM_RF_CUST_DEFAULT_PRE(nAME, aFFIX), NVRAM_SET_IDX(sETiDX))
#define NVRAM_ITEM_RF_POC_DEFAULT(nAME, aFFIX, sETiDX)  CL1_CAT_(NVRAM_ITEM_RF_CUST_DEFAULT_PRE(nAME, aFFIX), NVRAM_SET_IDX(sETiDX))
#define NVRAM_ITEM_RF_TAS_DEFAULT(nAME, aFFIX, sETiDX)	CL1_CAT_(NVRAM_ITEM_RF_CUST_DEFAULT_PRE(nAME, aFFIX), NVRAM_SET_IDX(sETiDX))
#define NVRAM_ITEM_RF_ELNA_DEFAULT(nAME, aFFIX, sETiDX)	CL1_CAT_(NVRAM_ITEM_RF_CUST_DEFAULT_PRE(nAME, aFFIX), NVRAM_SET_IDX(sETiDX))
#define NVRAM_ITEM_RF_TX_POWER_DEFAULT(nAME, aFFIX, sETiDX)	CL1_CAT_(NVRAM_ITEM_RF_CUST_DEFAULT_PRE(nAME, aFFIX), NVRAM_SET_IDX(sETiDX))
#define NVRAM_ITEM_RF_TAS_TST_DEFAULT(nAME, aFFIX, sETiDX) CL1_CAT_(NVRAM_ITEM_RF_CUST_DEFAULT_PRE(nAME, aFFIX), NVRAM_SET_IDX(sETiDX))



#define CL1D_RF_CUST_PARAM_DEFINE(sETiDX)               RF_CUST_CUSTOM_DATA(sETiDX)
#define CL1D_RF_CUST_BPI_CFG_DEFINE(bAND, sETiDX)       RF_CUST_BPI_CFG(bAND, sETiDX)
#define CL1D_RF_MIPI_PARAM_DEFINE(sETiDX)               RF_CUST_MIPI_PARAM(sETiDX)
/*** TAS ***/
/*CL1D_RF_CUST_TAS_CFG_T*/// V 1.0
#define CL1d_RF_TAS_CONFIG_DEFINE(sETiDX)						RF_CUST_TAS_DATA(sETiDX)
/*C2K_CUSTOM_TAS_FEATURE_BY_RAT_T*///Control tas.
#define CL1D_RF_TAS_BY_RAT_DATA_DEFINE(sETiDX)					RF_CUST_TAS_BY_RAT_DATA(sETiDX)
/*C2K_CUSTOM_TAS_FE_ROUTE_DATABASE_T*///Query tas bpi/mipi detail setting by rf_band and state.
#define CL1D_RF_TAS_CONFIGURE_DEFINE(sETiDX)					C2K_SB_TAS_CONFIGURE(sETiDX)
/*C2K_TUNER_FE_ROUTE_TABLE*/// Query tunner bpi/mipi detail setting.
#define CL1D_RF_TAS_TUNNER_CONFIGURE_DEFINE(sETiDX)			C2K_CUSTOM_TUNER_CONFIGURE(sETiDX)

/*** TAS TST ***/
#define CL1D_RF_TAS_TST_CONFIG_DEFINE(sETiDX)					RF_CUST_TAS_TST_CONFIG(sETiDX)
/*ELNA*/
#define CL1D_RF_ELNA_CONFIG_DEFINE(sETiDX)						RF_CUST_ELNA_CFG(sETiDX)

/*DAT*/
#define CL1D_RF_DAT_FE_ROUTE_DATABASE_DEFINE(sETiDX)			C2K_DAT_FE_ROUTE_DATABASE(sETiDX)
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif


#endif /* _CL1_DRDI_H_ */

