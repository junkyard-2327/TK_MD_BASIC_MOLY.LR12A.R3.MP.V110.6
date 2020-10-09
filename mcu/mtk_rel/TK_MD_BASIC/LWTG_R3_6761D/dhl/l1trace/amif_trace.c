#ifdef L1_CATCHER

#include "TrcMod.h"

#if defined(__MTK_TARGET__)
  #if defined (__ARMCC_VERSION)
    #pragma diag_suppress 177
  #elif defined (__GNUC__)
    #pragma GCC diagnostic ignored "-Wunused-variable"
  #endif
#endif

/****************/
/* Filter array */
/****************/
DECLARE_TMD_FILTER(unsigned char, AMIF_Trace_Filter, 5, 0x1, 0x1, 0x0, 0x0, 0x0);
/***********************/
/* Set filter function */
/***********************/
void Set_AMIF_Filter(unsigned char *setting)
{
	SET_TMD_FILTER(AMIF_Trace_Filter, setting, 5);
}

#else
DECLARE_TMD_FILTER(unsigned char, AMIF_Trace_Filter, 5, 0x1, 0x1, 0x0, 0x0, 0x0);
#endif
