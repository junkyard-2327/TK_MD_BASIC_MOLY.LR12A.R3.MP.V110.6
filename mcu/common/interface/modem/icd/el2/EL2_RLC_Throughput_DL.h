// ICD_EL2_RLC_THROUGHPUT_DL Definition
// RECORD Code: 0x7086

#ifndef _EL2_RLC_THROUGHPUT_DL_H
#define _EL2_RLC_THROUGHPUT_DL_H

#include "icd_codes.h"

#define ICD_EL2_EL2_RLC_THROUGHPUT_DL_V1    1

#define ICD_EL2_RLC_THROUGHPUT_DL_STRUCT_V1_MAX_SIZE    16

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      reserved:24;
    kal_uint32      dl_rb_rcv_bits;     // Recieved bits per second on all SRBs and DRBs (bps)
    kal_uint32      dl_mcch_rcv_bits;       // Received bits per second on MCCH (bps)
    kal_uint32      dl_mrb_rcv_bits;    // Received bits per second on MTCH (bps)
} icd_el2_rlc_throughput_dl_struct_v1;


#endif /* _EL2_RLC_THROUGHPUT_DL_H */

