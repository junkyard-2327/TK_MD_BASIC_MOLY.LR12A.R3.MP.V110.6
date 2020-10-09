


#include "kal_general_types.h"
#include "cl1d_rf_public.h"
#include "cl1_rf_common.h"
#include "nvram_enums.h"
#include "cl1_rf_public.h"
#include "cl1_nvram_def.h"
#include "nvram_cl1def.h"
#include "cl1_data_defs.h"
#include "cl1_drdi.h"

#include "mml1_custom_drdi.h" /* open drdi in mml1 */
#include "mml1_custom_mipi.h"
#include "mml1_custom_drdi.h" /* use MML1 total set nums */
#include "c2k_custom_drdi.h"
#include "c2k_custom_drdi.c"

#include "mml1_fe_public.h" /* use MML1_ELNA index */
#include "mml1_rf_public.h" /* use PA source contol */
#define DRDI_DEF_INCLUDE_FILE
#define DRDI_DEF_VAR_DEFINE
#include "cl1_drdi_defs.h"

const CL1D_RF_CUST_DATA_SET_INFO_T* set_info_ptr;

#define DRDI_DEF_SET_PTR_ARRAY
const CL1D_RF_CUST_DATA_SET_INFO_T c1ld_rf_cust_data_drdi_set_ptr[C2K_TOTAL_REAL_SET_NUMS+1][CL1D_RF_NVRAM_ITEM_MAX_NUM] =
{
	/* +1 means including SetDefault */
    #include "cl1_drdi_defs.h"
};

