

#if C2K_TOTAL_REAL_SET_NUMS > DRDI_CUR_SET_IDX
    #ifdef DRDI_DEF_INCLUDE_FILE
        #include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/c2k_custom_rf.h)
        #include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/c2k_custom_rf.c)
		#include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/mml1_custom_mipi.h)
        #include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/c2k_custom_mipi.h)
        #include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/c2k_custom_mipi.c)
        #include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/c2k_custom_etm.h)
        #include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/c2k_custom_etm.c)

		#include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/c2k_custom_rf_tas.h)
		#include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/c2k_custom_rf_tas_tst.h)
		#include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/c2k_custom_rf_tas.c)
		#include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/c2k_custom_rf_tuner.h)
		#include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/c2k_custom_rf_tuner.c)
		
		#include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/c2k_custom_elna.h)
		#include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/c2k_custom_elna.c)
	#if IS_C2K_DAT_RFD_CTRL_EN	
		#include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/c2k_custom_rf_dat.h)
		#include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/c2k_custom_rf_dat.c)
	#endif
		#include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/c2k_custom_rf_dpd.h)
		#include CL1_STR_(CL1_CAT_(DRDI/Set, DRDI_CUR_SET_IDX)/c2k_custom_rf_dpd.c)
    #endif /* DRDI_DEF_INCLUDE_FILE */

    #ifdef DRDI_DEF_VAR_DECLARE        
    #undef NVRAM_ITEM_RF_CUST
    #undef NVRAM_ITEM_MIPI
    #undef NVRAM_ITEM_RF_CAL
    #undef NVRAM_ITEM_RF_POC
	#undef NVRAM_ITEM_RF_TAS_VAR
	#undef NVRAM_ITEM_RF_TAS_ARRAY
	#undef NVRAM_ITEM_ELNA_VAR
	#undef NVRAM_ITEM_ELNA_ARRAY
	#undef NVRAM_ITEM_TX_POWER_VAR
	#undef NVRAM_ITEM_RF_TAS_TST
    #define NVRAM_ITEM_RF_CUST(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
        extern const CL1D_RF_##tYPE NVRAM_ITEM_RF_CUST_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX));
    #define NVRAM_ITEM_MIPI(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
        extern const CL1D_RF_##tYPE NVRAM_ITEM_MIPI_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX))[];
    #define NVRAM_ITEM_RF_CAL(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
        extern CL1D_RF_##tYPE NVRAM_ITEM_RF_CAL_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX));
	#define NVRAM_ITEM_RF_TAS_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
		extern const C2K_CUSTOM_##tYPE NVRAM_ITEM_RF_TAS_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX));
	#define NVRAM_ITEM_RF_TAS_ARRAY(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
		extern const CL1D_RF_##tYPE NVRAM_ITEM_RF_TAS_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX))[];
    #define NVRAM_ITEM_RF_POC(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC)
	#define NVRAM_ITEM_ELNA_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
		extern const CL1D_RF_##tYPE NVRAM_ITEM_RF_ELNA_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX));
	#define NVRAM_ITEM_ELNA_ARRAY(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
		extern const CL1D_RF_##tYPE NVRAM_ITEM_RF_ELNA_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX))[];
	#define NVRAM_ITEM_TX_POWER_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
		extern const CL1D_RF_##tYPE NVRAM_ITEM_RF_TX_POWER_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX));
	#define NVRAM_ITEM_RF_TAS_TST(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
		extern const CL1D_RF_##tYPE NVRAM_ITEM_RF_TAS_TST_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX));
    #include "cl1_nvram_id.h"
    #endif /* DRDI_DEF_VAR_DECLARE */

    #ifdef DRDI_DEF_VAR_DEFINE
    CL1D_RF_CUST_PARAM_DEFINE(CL1_CAT_(Set, DRDI_CUR_SET_IDX));
    CL1D_RF_CUST_BPI_CFG_DEFINE(BAND_A, CL1_CAT_(Set, DRDI_CUR_SET_IDX));
    CL1D_RF_CUST_BPI_CFG_DEFINE(BAND_B, CL1_CAT_(Set, DRDI_CUR_SET_IDX));
    CL1D_RF_CUST_BPI_CFG_DEFINE(BAND_C, CL1_CAT_(Set, DRDI_CUR_SET_IDX));
    CL1D_RF_CUST_BPI_CFG_DEFINE(BAND_D, CL1_CAT_(Set, DRDI_CUR_SET_IDX));
    CL1D_RF_CUST_BPI_CFG_DEFINE(BAND_E, CL1_CAT_(Set, DRDI_CUR_SET_IDX));
    CL1D_RF_MIPI_PARAM_DEFINE(CL1_CAT_(Set, DRDI_CUR_SET_IDX));
    

	CL1D_RF_TAS_BY_RAT_DATA_DEFINE(CL1_CAT_(Set, DRDI_CUR_SET_IDX));
	CL1D_RF_TAS_CONFIGURE_DEFINE(CL1_CAT_(Set, DRDI_CUR_SET_IDX));
	CL1D_RF_TAS_TUNNER_CONFIGURE_DEFINE(CL1_CAT_(Set, DRDI_CUR_SET_IDX));
	/*TAS TST macro define */
	CL1D_RF_TAS_TST_CONFIG_DEFINE(CL1_CAT_(Set, DRDI_CUR_SET_IDX));
	/*ELNA*/
	CL1D_RF_ELNA_CONFIG_DEFINE(CL1_CAT_(Set, DRDI_CUR_SET_IDX));
	#if IS_C2K_DAT_RFD_CTRL_EN
	/*DAT*/
	CL1D_RF_DAT_FE_ROUTE_DATABASE_DEFINE(CL1_CAT_(Set, DRDI_CUR_SET_IDX));
	#endif
	/* Other values are all defined in custom files */    
    #endif /* DRDI_DEF_VAR_DEFINE */

    #ifdef DRDI_DEF_SET_PTR_ARRAY
    #undef NVRAM_ITEM_RF_CUST
    #undef NVRAM_ITEM_MIPI
    #undef NVRAM_ITEM_RF_CAL
    #undef NVRAM_ITEM_RF_POC
	#undef NVRAM_ITEM_RF_TAS_VAR
	#undef NVRAM_ITEM_RF_TAS_ARRAY
	#undef NVRAM_ITEM_ELNA_VAR
	#undef NVRAM_ITEM_ELNA_ARRAY
	#undef NVRAM_ITEM_TX_POWER_VAR
	#undef NVRAM_ITEM_RF_TAS_TST
    #define NVRAM_ITEM_RF_CUST(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
        (void*)&NVRAM_ITEM_RF_CUST_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX)),
    #define NVRAM_ITEM_MIPI(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
        (void*)NVRAM_ITEM_MIPI_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX)),
    #define NVRAM_ITEM_RF_CAL(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
        (void*)&NVRAM_ITEM_RF_CAL_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX)),
    #define NVRAM_ITEM_RF_TAS_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
        (void*)&NVRAM_ITEM_RF_TAS_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX)),
    #define NVRAM_ITEM_RF_TAS_ARRAY(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
        (void*)NVRAM_ITEM_RF_TAS_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX)),
    #define NVRAM_ITEM_RF_POC(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
        (void*)&NVRAM_ITEM_RF_POC_DEFAULT(nAME, aFFIX, Default),
    #define NVRAM_ITEM_ELNA_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
        (void*)&NVRAM_ITEM_RF_ELNA_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX)),
    #define NVRAM_ITEM_ELNA_ARRAY(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
        (void*)NVRAM_ITEM_RF_ELNA_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX)),
    #define NVRAM_ITEM_TX_POWER_VAR(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
        (void*)&NVRAM_ITEM_RF_TX_POWER_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX)),
    #define NVRAM_ITEM_RF_TAS_TST(nAME, aFFIX, rECnUM, tYPE, tYPEnUM, fUNC) \
        (void*)&NVRAM_ITEM_RF_TAS_TST_DEFAULT(nAME, aFFIX, CL1_CAT_(Set, DRDI_CUR_SET_IDX)),
	{
		#include "cl1_nvram_id.h"
	},
    #endif /* DRDI_DEF_SET_PTR_ARRAY */
#endif

