#if defined(__MAUI_BASIC__)

#if defined(__MD93__)
    #include "basic_load/mt6293/cuif_u2c_isr_config_n2.h"
#elif defined(__MD95__)
    #include "basic_load/mt6295/cuif_u2c_isr_config_n2.h"
#else
    #error "NOT support this arch!!!!"
#endif


#else // #if defined(__MAUI_BASIC__)

    
#if defined(__MD93__)
    #include "mt6293/cuif_u2c_isr_config_n2.h"
#elif defined(__MD95__)
    #include "mt6295/cuif_u2c_isr_config_n2.h"
#else
    #error "NOT support this arch!!!!"
#endif

    
#endif // #if defined(__MAUI_BASIC__)
