// ICD_EL2_MAC_UL_TRANSPORT_BLOCK Definition
// RECORD Code: 0x7084

#ifndef _EL2_MAC_UL_TRANSPORT_BLOCK_H
#define _EL2_MAC_UL_TRANSPORT_BLOCK_H

#include "icd_codes.h"

#define ICD_EL2_EL2_MAC_UL_TRANSPORT_BLOCK_INFO_V1      1

#define MAX_ICD_EL2_MAC_UL_TRANSPORT_BLOCK_STRUCT_V1_NUMBER_OF_RECORDS      20

#define ICD_EL2_MAC_UL_TRANSPORT_BLOCK_STRUCT_V1_MAX_SIZE       884

typedef struct {
    kal_uint32      sfn:10;     // System Frame Number
    kal_uint32      subframe:4;     // Subframe Number
    kal_uint32      rnti_type:4;    // 0: C-RNTI
                                    // 1: SPS-C-RNTI
                                    // 2: P-RNTI
                                    // 3: RA-RNTI
                                    // 4: TC-RNTI
                                    // 5: SI-RNTI
                                    // 6: TPC-PUSCH-RNTI
                                    // 7: TPC-PUCCH-RNTI
                                    // 8: MBMS-RNTI
    kal_uint32      harq_id:3;      // (TX SFN * 10 + TX subframe) % 8
    kal_uint32      bsr_type:3;     // Values:
                                    // 0: NoBsr
                                    // 1: Cancelled
                                    // 2: LongBsr
                                    // 3: ShortBsr
                                    // 4: PaddingLongBsr
                                    // 5: PaddingShortBsr
                                    // 6: PaddingTruncatedBsr
    kal_uint32      bsr_trigger_cause:2;    // Values:
                                            // 0: Padding BSR included
                                            // 1: periodicBSR-Timer expires
                                            // 2: Regular BSR triggered because of higher priority data arrival
                                            // 3: Regular BSR triggered because of retxBSR-Timer expires
    kal_uint32      transport_channel:3;    // 1: BCH
                                            // 2: DL-SCH
                                            // 3: PCH
                                            // 4: MCH
                                            // 5: UL-SCH
                                            // 6: RACH
    kal_uint32      reserved:3;
    kal_uint32      ul_grant:16;    // Uplink grant size in bytes
    kal_uint32      num_rlc_pdus:16;    // Number of RLC PDUs
    kal_uint32      num_padding_bytes:16;       // Padding size
    kal_uint32      mac_header_len:8;       // Length of MAC header
    kal_uint32      reserved_1:2;
    kal_uint32      mac_pdu_data_len:6;     // Logged MAC PDU Data length, max is 32
    kal_uint8       mac_pdu_data[32];       // First 32 bytes of MAC PDU
} el2_mac_ul_transport_block_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      mac_release:6;      // 3GPP release number (e.g. 13)
    kal_uint32      mac_major_version:6;    // Major version number
    kal_uint32      mac_minor_version:4;    // Minor version number
    kal_uint32      number_of_records:5;    // range[0, 20]
    kal_uint32      reserved:3;
    el2_mac_ul_transport_block_record_v1    ul_tb_records[MAX_ICD_EL2_MAC_UL_TRANSPORT_BLOCK_STRUCT_V1_NUMBER_OF_RECORDS];      // N := Number of Records
} icd_el2_mac_ul_transport_block_struct_v1;


#endif /* _EL2_MAC_UL_TRANSPORT_BLOCK_H */

