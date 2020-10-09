/*******************************************************************************
*   please DO NOT include this file
*   this file is for usip/dsp cmif driver include only 
********************************************************************************/
#ifndef __CMIF_COMMON_DEF_H__
#define __CMIF_COMMON_DEF_H__

#include "xmif_common_def.h"

/*******************************************************************************
  * Enums 
  ******************************************************************************/
#undef irq_index
#undef irq_name 
#undef irq_entry_function
#undef irq_auto_eoi
    
#define irq_index(index) index,
#define irq_name(name)
#define irq_entry_function(fun)
#define irq_auto_eoi(eoi)

typedef enum CMIF_CODE_C2M_U3G_RAKE_Enum{
    #include "cmif_c2m_isr_config_u3g.h"    
    CMIF_C2M_U3G_TOTAL_NUMBER_RAKE
}CMIF_C2M_U3G_Code_t;

typedef enum CMIF_CODE_M2C_U3G_RAKE_Enum{
    #include "cmif_m2c_isr_config_u3g_rake.h"    
    CMIF_M2C_U3G_TOTAL_NUMBER_RAKE
}CMIF_M2C_U3G_Code_t;

typedef enum CMIF_CODE_M2C_FPC_1X_Enum{
    #include "cmif_m2c_isr_config_fpc_1x.h"    
    CMIF_M2C_FPC_1X_TOTAL_NUMBER
}CMIF_M2C_FPC_1X_Code_t;

typedef enum CMIF_CODE_M2C_DO_PD_Enum{
    #include "cmif_m2c_isr_config_do_pd.h"    
    CMIF_M2C_DO_PD_TOTAL_NUMBER
}CMIF_M2C_DO_PD_Code_t;

typedef enum CMIF_CODE_M2C_FOE_1X_Enum{
    #include "cmif_m2c_isr_config_foe_1x.h"    
    CMIF_M2C_FOE_1X_TOTAL_NUMBER
}CMIF_M2C_FOE_1X_Code_t;

    
#undef irq_index
#undef irq_name 
#undef irq_entry_function
#undef irq_auto_eoi
    
#define irq_index(index)
#define irq_name(name)
#define irq_entry_function(fun)
#define irq_auto_eoi(eoi)

#endif /*  __CMIF_COMMON_DEF_H__ */

