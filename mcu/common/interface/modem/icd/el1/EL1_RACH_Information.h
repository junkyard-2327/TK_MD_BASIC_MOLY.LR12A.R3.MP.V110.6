// ICD_EL1_RACH_INFORMATION Definition
// RECORD Code: 0x3007

#ifndef _EL1_RACH_INFORMATION_H
#define _EL1_RACH_INFORMATION_H

#include "icd_codes.h"

#define ICD_EL1_RACH_INFO_CONTENT_V1    1

#define ICD_RACH_INFO_STRUCT_V1_MAX_SIZE    32

typedef struct {
    kal_uint32      msg4_valid:1;       // 0: invalid, 1: valid
    kal_uint32      contention_decoding_result:1;       // 0: fail, 1: success
    kal_uint32      reserved:30;
} rach_msg4_content_v1;

typedef struct {
    kal_uint32      msg3_valid:1;       // 0: invalid, 1: valid
    kal_uint32      mcs:5;      // range[0, 31]
    kal_uint32      modulation_type:2;      // 0: QPSK
                                            // 1: 16QAM
                                            // 2: 64QAM
                                            // 3: 256QAM
    kal_uint32      start_rb:7;     // range[0, 110]
    kal_uint32      number_of_rb:7;     // range[0, 110]
    kal_uint32      tbs_idx:6;      // range[0, 33]
    kal_uint32      csi_request:1;      // 0: off, 1: on
    kal_uint32      ul_delay:1;     // 0: off, 1: on
    kal_uint32      rv:2;       // range[0,3]
    kal_uint16      reserved:6;
    kal_uint16      msg3_sfn:10;    // This is the SFN based on the occurrence of msg3, range[0,1023]
    kal_uint8       msg3_subframe_number:4;     // This is the SF based on the occurrence of msg3, range[0,9]
    kal_uint8       harq_id:3;      // range[0,7]
    kal_uint8       hopping_flag:1;     // 0: hopping disable, 1:hopping enable
    kal_int8    tpc;    // range[-6, 8]
} rach_msg3_content_v1;

typedef struct {
    kal_uint32      msg2_valid:1;       // 0: invalid, 1: valid
    kal_uint32      contention_type:1;      // 0: contention-based
                                            // 1: non-contention-based
    kal_uint32      rnti_type:1;    // 0: TC-RNTI
                                    // 1: C-RNTI
    kal_uint32      rnti_value:16;      // Radio Network Temporary Identifier
    kal_uint32      timing_advance_valid:1;     // 0: invalid, 1: valid
    kal_uint32      timing_advance_value:11;    // range[0,1282]
    kal_uint32      reserved:1;
    kal_uint32      riv:14;     // Resource Indicator Value
    kal_uint32      reserved_1:18;
} rach_msg2_content_v1;

typedef struct {
    kal_uint32      msg1_valid:1;       // 0: invalid, 1: valid
    kal_uint32      zadoff_sequence_number:10;      // range[0, 837]
    kal_uint32      cyclic_shift:10;    // range[0, 839]
    kal_uint32      duplex_mode:1;      // 0: FDD, 1: TDD
    kal_uint32      high_speed_flag:1;      // 0: False, 1: True
    kal_uint32      reserved:9;
    kal_int16       prach_tx_power;     // PRACH power, range[-128,127]
    kal_uint16      prach_config:6;     // range[0, 63]
    kal_uint16      preamble_format:3;      // range[0, 4]
    kal_uint16      frequency_offset:7;     // range[0, 104]
} rach_msg1_content_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      sfn:10;     // This is the SFN based on reporting time of this record, range[0,1023]
    kal_uint32      subframe:4;     // This is the SF based on reporting time of this record, range[0,9]
    kal_uint32      reserved:10;
    rach_msg1_content_v1    rach_msg1;
    rach_msg2_content_v1    rach_msg2;
    rach_msg3_content_v1    rach_msg3;
    rach_msg4_content_v1    rach_msg4;
} icd_rach_info_struct_v1;


#endif /* _EL1_RACH_INFORMATION_H */

