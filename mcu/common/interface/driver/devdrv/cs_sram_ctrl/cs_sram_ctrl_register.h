#if (defined(TK6291))
    #include "cs_sram_ctrl_register_tk6291.h"
#elif (defined(MT6755))
    #include "cs_sram_ctrl_register_mt6755.h"
#elif (defined(ELBRUS))
    #include "cs_sram_ctrl_register_elbrus.h"
#elif (defined(MT6763))

#else
    #error "SRAM control didn't support on this chip!!!"
#endif
