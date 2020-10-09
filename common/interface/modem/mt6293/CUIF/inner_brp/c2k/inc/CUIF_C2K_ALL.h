#ifndef INCLUDE_DSP_HEADER_ENABLE_INNER_BRP
    #error "Please include CUIF_C2K_ALL.h via dsp_header_define.h"
#endif

#ifndef __CUIF_C2K_ALL_H__
#define __CUIF_C2K_ALL_H__

#include "CUIF_C2K_EVDO.h"
/* ---------- */

// ----------------- CUIF_C2K Register Definition -------------------
typedef volatile struct {   
    CUIF_C2K_EVDO_REGS      C2K_EVDO;
} CUIF_C2K_INNER_ALL_REGS;


#endif


