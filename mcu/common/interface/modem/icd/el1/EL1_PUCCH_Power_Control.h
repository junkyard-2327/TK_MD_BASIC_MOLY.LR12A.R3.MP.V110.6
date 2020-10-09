// ICD_EL1_PUCCH_POWER_CONTROL Definition
// RECORD Code: 0x301E

#ifndef _EL1_PUCCH_POWER_CONTROL_H
#define _EL1_PUCCH_POWER_CONTROL_H

#include "icd_codes.h"

#define ICD_EL1_PUCCH_POWER_CONTROL_INFO_V1     1

#define MAX_ICD_PUCCH_POWER_CONTROL_STRUCT_V1_NUMBER_OF_RECORDS     20
#define MAX_PUCCH_POWER_CONTROL_RECORD_V1_M     9

#define ICD_PUCCH_POWER_CONTROL_STRUCT_V1_MAX_SIZE      964

typedef struct {
    kal_uint16      dci_format:4;       // 0: 0
                                        // 1: 1
                                        // 2: 1A
                                        // 3: 1B
                                        // 4: 1C
                                        // 5: 1D
                                        // 6: 2
                                        // 7: 2A
                                        // 8: 2B
                                        // 9: 2C
                                        // 10: 2D
                                        // 11: 3
                                        // 12: 3A
                                        // 13: 4
    kal_uint16      reserved:12;
    kal_int16       tpc;    // range[-1, 3]
} pucch_power_dl_v1;

typedef struct {
    kal_uint32      sfn:10;     // This is the SFN based on the occurrence of the record
                                // range[0, 1023]
    kal_uint32      subframe:4;     // This is the SF based on the occurrence of the record
                                    // range[0, 9]
    kal_uint32      tx_format:4;    // 0 - UCI format 1
                                    // 1 - UCI format 1a
                                    // 2 - UCI format 1b
                                    // 3 - UCI format 2
                                    // 4 - UCI format 2a
                                    // 5 - UCI format 2b
                                    // 6 - UCI format 3
                                    // 7 - UCI format 4
                                    // 8 - UCI format 5
    kal_uint32      number_of_harq_bits:2;      // range[0, 2]
    kal_uint32      number_of_cqi_bits:4;       // range[0, 13]
    kal_uint32      path_loss:8;    // range[0, 255]
    kal_uint32      power_backoff:16;       // TX power backoff, bit0~bit6: mantissa of power backoff
                                            // , bit7~bit15: exponent of power backoff
    kal_uint32      reserved:16;
    kal_int8    power;      // range[-50, 23]
    kal_int8    m;      // Number of DL or special subframes associated with this
                        // subframe. For FDD, the maximum value of M is 1. For
                        // TDD, refer to 36.213 table 10.1.3.1-1
                        // range[1, 9]
    kal_int16       gi;     // range[-141, 141]
    pucch_power_dl_v1       assoc_dl[FLEXIBLE_ARRAY_SIZE];      // N := M
} pucch_power_control_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      serving_cell_id:9;      // range[0, 503]
    kal_uint32      carrier_index:3;    // range[0, 7]
    kal_uint32      reserved:7;
    kal_uint32      number_of_records:5;    // range[0, 20]
    pucch_power_control_record_v1       pucch_power_control_records[FLEXIBLE_ARRAY_SIZE];       // N := Number of Records
} icd_pucch_power_control_struct_v1;


#endif /* _EL1_PUCCH_POWER_CONTROL_H */

