// ICD_EL2_MAC_UL_TX_STATISTICS Definition
// RECORD Code: 0x7085

#ifndef _EL2_MAC_UL_TX_STATISTICS_H
#define _EL2_MAC_UL_TX_STATISTICS_H

#include "icd_codes.h"

#define ICD_EL2_EL2_MAC_UL_TX_STATISTICS_V1     1

#define ICD_EL2_MAC_UL_TX_STATISTICS_STRUCT_V1_MAX_SIZE     28

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      num_received_grants:12;     // Number of received grants
    kal_uint32      reserved:12;
    kal_uint32      num_padding_bsr;    // Padding BSR number
    kal_uint32      num_normal_bsr;     // Normal BSR number
    kal_uint32      num_periodic_bsr;       // Periodic BSR number
    kal_uint32      num_cancelled_bsr;      // 36.321 5.4.5 "All triggered BSRs shall be cancelled..."
    kal_uint32      received_grant_bytes;       // Total grant bytes received
    kal_uint32      used_grant_bytes;       // Total used bytes
} icd_el2_mac_ul_tx_statistics_struct_v1;


#endif /* _EL2_MAC_UL_TX_STATISTICS_H */

