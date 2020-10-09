#ifndef INCLUDE_DSP_HEADER_ENABLE_INNER_BRP
    #error "Please include CUIF_WCDMA_ALL.h via dsp_header_define.h"
#endif

#ifndef __CUIF_WCDMA_ALL_H__
#define __CUIF_WCDMA_ALL_H__

#include "CUIF_WCDMA_HRXBRP_c_header_struct.h"
#include "CUIF_WCDMA_HSCTRL.h"
#include "CUIF_WCDMA_HSCE.h"
#include "CUIF_WCDMA_HSEQ.h"
#include "CUIF_WCDMA_HSRP.h"




#define CUIF_WCDMA_CC_NUM         (2)


/* ---------- */


typedef volatile struct {   
    // HSCE
    CUIF_WCDMA_HSCE_REGS      WCDMA_HSCE;

    // HSCTRL  
    CUIF_WCDMA_HSCTRL_REGS    WCDMA_HSCTRL;    

    // HSEQ
    CUIF_WCDMA_HSEQ_REGS      WCDMA_HSEQ;

    // HSSRP
    CUIF_WCDMA_HSRP_REGS      WCDMA_HSRP;

} CUIF_WCDMA_INNER_ALL_REGS;

typedef volatile struct {   
    
    // HRXBRP
    CUIF_WCDMA_HRXBRP_REGS    WCDMA_HRXBRP;
} CUIF_WCDMA_HRXBRP_ALL_REGS;


#endif
