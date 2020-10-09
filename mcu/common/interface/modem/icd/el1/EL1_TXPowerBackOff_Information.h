// ICD_EL1_TXPOWERBACKOFF_INFORMATION Definition
// RECORD Code: 0x300F

#ifndef _EL1_TXPOWERBACKOFF_INFORMATION_H
#define _EL1_TXPOWERBACKOFF_INFORMATION_H

#include "icd_codes.h"

#define ICD_EL1_L1_TX_POWERBACKOFF_INFO_CONTENT_V1      1

#define ICD_L1_TX_POWERBACKOFF_INFO_STRUCT_V1_MAX_SIZE      8

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      sfn:10;     // This is the SFN based on reporting time of this record, range[0,1023]
    kal_uint32      subframe:4;     // This is the SF based on reporting time of this record, range[0,9]
    kal_uint32      reserved:10;
    kal_uint32      tx_power_backoff:16;    // TX power backoff gain, bit0~bit10: mantissa of backoff gain, bit11~bit15: exponent of backoff gain
    kal_uint32      reserved_1:16;
} icd_l1_tx_powerbackoff_info_struct_v1;


#endif /* _EL1_TXPOWERBACKOFF_INFORMATION_H */

