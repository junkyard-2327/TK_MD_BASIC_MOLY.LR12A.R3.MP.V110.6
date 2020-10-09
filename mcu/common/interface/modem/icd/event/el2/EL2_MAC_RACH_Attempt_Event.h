// ICD_EL2_MAC_RACH_ATTEMPT_EVENT Definition
// EVENT Code: 0x7581

#ifndef _EL2_MAC_RACH_ATTEMPT_EVENT_H
#define _EL2_MAC_RACH_ATTEMPT_EVENT_H

#include "icd_codes.h"

#define ICD_EL2_EL2_MAC_RACH_ATTEMPT_EVENT_V1       1

#define ICD_EL2_MAC_RACH_ATTEMPT_EVENT_STRUCT_V1_MAX_SIZE       32

typedef struct {
    kal_uint32      version:8;      // Log event structure ID
    kal_uint32      rach_attempt_counter:8;     // Preamble TX try count
    kal_uint32      rach_result:3;      // 0: Success
                                        // 1: Failed at RAR
                                        // 2: Failed at CR timer expired
                                        // 3: Failed at CR fail
                                        // 4: Aborted
    kal_uint32      contention_based:1;     // Is contention based
    kal_uint32      rach_message:2;     // 0: Msg1 TXed
                                        // 1: Received Msg2
                                        // 2: Msg3 TXed
    kal_uint32      preamble_index:6;       // Preamble index
    kal_uint32      reserved:1;
    kal_uint32      harq_id:3;      // (TX SFN * 10 + TX subframe) % 8
    kal_uint32      msg3_grant:20;      // UL grant field in RAR
    kal_uint32      ta_value:11;    // TA value in RAR
    kal_uint32      rar_success:1;      // RAR reception success
    kal_uint32      temporary_crnti:16;     // TC-RNTI received in RAR
    kal_uint32      physical_cell_id:16;    // Cell ID
    kal_uint32      earfcn:16;      // EARFCN
    kal_uint32      backoff_time:10;    // RA backoff time
    kal_uint32      ra_rnti:6;      // RA-RNTI used
    kal_uint32      preamble_power_offset:8;    // Preamble power offset
    kal_uint32      last_tx_power:6;    // Last preamble TX power headroom
                                        // level for PHR.
                                        // it's the difference between
                                        // PCMAX(dBm) and the PRACH Tx power
                                        // (dBm). Range:0..63
    kal_uint32      reserved_1:18;
    kal_uint8       msg3_mac_pdu[10];       // First 10 bytes of Msg3
    kal_uint16      msg3_grant_size;    // Grant size in bytes
} icd_el2_mac_rach_attempt_event_struct_v1;


#endif /* _EL2_MAC_RACH_ATTEMPT_EVENT_H */

