// ICD_EL1_SRS_TX_INFORMATION Definition
// RECORD Code: 0x7009

#ifndef _EL1_SRS_TX_INFORMATION_H
#define _EL1_SRS_TX_INFORMATION_H

#include "icd_codes.h"

#define ICD_EL1_SRS_TX_INFO_CONTENT_V1      1

#define MAX_ICD_SRS_TX_INFO_STRUCT_V1_NUMBER_OF_RECORDS     20

#define ICD_SRS_TX_INFO_STRUCT_V1_MAX_SIZE      324

typedef struct {
    kal_uint32      sfn:10;     // This is the SFN based on the occurrence of this record, range[0,1023]
    kal_uint32      subframe:4;     // This is the SF based on the occurrence of this record, range[0,9]
    kal_uint32      ue_srs_enable:1;    // 0: enable, 1: disable
    kal_uint32      cell_srs_enable:1;      // 0: enable, 1: disable
    kal_uint32      srs_tx_bw:8;    // SRS bandwidth in RB unit, range[0,96]
    kal_uint32      reserved:8;
    kal_uint32      start_rb:10;    // SRS start RB, range[0,96]
    kal_uint32      rb_number:10;       // SRS RB length, range[0,96]
    kal_uint32      zc_root:12;     // SRS ZC root, range[1,1151]
    kal_uint32      srs_trigger_type:2;     // 0: Type 0
                                            // 1: Type 1 DCI0
                                            // 2: Type 1 DCI1A2B2C
                                            // 3: Type 1 DCI4
    kal_uint32      cyclic_shift:3;     // cyclic shift for SRS, range[0,7]
    kal_uint32      srs_power_offset:4;     // range[0, 15]
    kal_uint32      path_loss:8;    // range[0, 255]
    kal_uint32      uppts_type:2;       // 0: No SRS, 1: Symbol 0, 2: Symbol 1, 3: Both symbols
    kal_uint32      reserved_1:13;
    kal_int16       srs_tx_pwer;    // SRS transmission power, range[-128,127]
    kal_int16       fi;     // range[-141, 141]
} srs_tx_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      serving_cell_id:9;      // range[0, 503]
    kal_uint32      carrier_index:3;    // Indicates this metric is reporting on which serving cell
                                        // (not scell index configured by RRC). range[0, 7],
                                        // Values: 0:PCC, 1:SCC1, 2:SCC2, 3:SCC3, 4:SCC4, 5:SCC5,
                                        // 6:SCC6, 7:SCC7
    kal_uint32      reserved:7;
    kal_uint32      number_of_records:5;    // range[0, 20]
    srs_tx_record_v1    srs_records[FLEXIBLE_ARRAY_SIZE];       // N := Number of Records
} icd_srs_tx_info_struct_v1;


#endif /* _EL1_SRS_TX_INFORMATION_H */

