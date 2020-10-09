// ICD_EL1_PUSCH_REPORT Definition
// RECORD Code: 0x3020

#ifndef _EL1_PUSCH_REPORT_H
#define _EL1_PUSCH_REPORT_H

#include "icd_codes.h"

#define ICD_EL1_PUSCH_REPORT_INFO_V1    1

#define MAX_ICD_PUSCH_REPORT_STRUCT_V1_NUMBER_OF_REPORTS    20

#define ICD_PUSCH_REPORT_STRUCT_V1_MAX_SIZE     404

typedef struct {
    kal_uint16      sfn:10;     // This is the SFN based on the occurrence of the record
                                // range[0, 1023]
    kal_uint16      subframe:4;     // This is the SF based on the occurrence of the record
                                    // range[0, 9]
    kal_uint16      modulation_order:2;     // QPSK, 16QAM, 64QAM, 256QAM
    kal_uint16      tb_size;    // in bytes
    kal_uint16      path_loss:8;    // range[0, 255]
    kal_uint16      harq_id:3;      // range[0, 7]
    kal_uint16      ack_exists:1;       // 0: False, 1: True
    kal_uint16      cqi_exists:1;       // 0: False, 1: True
    kal_uint16      ri_exists:1;    // 0: False, 1: True
    kal_uint16      frequency_hopping:2;    // 0: Disabled
                                            // 1: Inter SF
                                            // 2: Intra+Inter
                                            // 3: Undefined
    kal_uint16      start_rb_slot_0:7;      // range[0, 110]
    kal_uint16      start_rb_slot_1:7;      // range[0, 110]
    kal_uint16      reserved:2;
    kal_uint32      dmrs_seq_slot_0:5;      // range[0, 11]
    kal_uint32      dmrs_seq_slot_1:5;      // range[0, 11]
    kal_uint32      number_of_rbs:7;    // range[1, 100]
    kal_uint32      number_of_ack_bits:3;       // range[0, 7]
    kal_uint32      number_of_ri_bits:2;    // range[0, 3]
    kal_uint32      number_of_cqi_bits:8;       // range[0, 127]
    kal_uint32      reserved_1:2;
    kal_uint32      retx_index:5;       // range[1, 28]
    kal_uint32      reserved_2:27;
    kal_int8    power;      // range[-50, 23]
    kal_int8    tpc;    // range[-6, 8]
    kal_int16       fi;     // range[-141,141]
} pusch_tx_report_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      serving_cell_id:9;      // range[0, 503]
    kal_uint32      carrier_index:3;    // range[0, 7]
    kal_uint32      reserved:7;
    kal_uint32      number_of_reports:5;    // range[0, 20]
    pusch_tx_report_v1      pusch_tx_reports[FLEXIBLE_ARRAY_SIZE];      // N := Number of Reports
} icd_pusch_report_struct_v1;


#endif /* _EL1_PUSCH_REPORT_H */

