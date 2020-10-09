// ICD_EL1_PUSCH_POWER_CONTROL Definition
// RECORD Code: 0x3021

#ifndef _EL1_PUSCH_POWER_CONTROL_H
#define _EL1_PUSCH_POWER_CONTROL_H

#include "icd_codes.h"

#define ICD_EL1_PUSCH_POWER_CONTROL_INFO_V1     1

#define MAX_ICD_PUSCH_POWER_CONTROL_STRUCT_V1_NUMBER_OF_RECORDS     20

#define ICD_PUSCH_POWER_CONTROL_STRUCT_V1_MAX_SIZE      244

typedef struct {
    kal_uint32      sfn:10;     // This is the SFN based on the occurrence of the record
                                // range[0,1023]
    kal_uint32      subframe:4;     // This is the SF based on the occurrence of the record
                                    // range[0, 9]
    kal_uint32      path_loss:8;    // range[0, 255]
    kal_uint32      tx_type:2;      // 0: SPS, 1: Dynamic, 2: MSG3
    kal_uint32      number_of_rb:7;     // range[1, 100]
    kal_uint32      reserved:1;
    kal_uint32      tb_size:14;     // in bytes
    kal_uint32      power_backoff:16;       // TX power backoff, bit0~bit6: mantissa of power backoff
                                            // , bit7~bit15: exponent of power backoff
    kal_uint32      reserved_1:2;
    kal_int8    power;      // range[-50, 23]
    kal_int8    tpc;    // range[-6, 8]
    kal_int16       fi;     // range[-141, 141)
} pusch_power_control_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      serving_cell_id:9;      // range[0, 503]
    kal_uint32      carrier_index:3;    // range[0, 7]
    kal_uint32      reserved:7;
    kal_uint32      number_of_records:5;    // range[0, 20]
    pusch_power_control_record_v1       pusch_power_control_records[FLEXIBLE_ARRAY_SIZE];       // N := Number of Records
} icd_pusch_power_control_struct_v1;


#endif /* _EL1_PUSCH_POWER_CONTROL_H */

