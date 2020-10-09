// ICD_EL2_MAC_DL_TRANSPORT_BLOCK Definition
// RECORD Code: 0x7083

#ifndef _EL2_MAC_DL_TRANSPORT_BLOCK_H
#define _EL2_MAC_DL_TRANSPORT_BLOCK_H

#include "icd_codes.h"

#define ICD_EL2_EL2_MAC_DL_TRANSPORT_BLOCK_INFO_V1      1

#define MAX_ICD_EL2_MAC_DL_TRANSPORT_BLOCK_STRUCT_V1_NUMBER_OF_RECORDS      20

#define ICD_EL2_MAC_DL_TRANSPORT_BLOCK_STRUCT_V1_MAX_SIZE       964

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
    kal_uint32      harq_id:4;      // HARQ ID
    kal_uint32      transport_channel:3;    // 1: BCH
                                            // 2: DL-SCH
                                            // 3: PCH
                                            // 4: MCH
                                            // 5: UL-SCH
                                            // 6: RACH
    kal_uint32      reserved:7;
    kal_uint32      num_padding_bytes;      // Padding size
    kal_uint32      tb;     // Total transport block size assigned to the UE for data reception on the DL
    kal_uint32      num_rlc_pdus:16;    // Number of RLC PDUs
    kal_uint32      mac_header_len:8;       // Length of MAC header
    kal_uint32      reserved_1:2;
    kal_uint32      mac_pdu_data_len:6;     // Logged MAC PDU Data length, max is 32
    kal_uint8       mac_pdu_data[32];       // First 32 bytes of MAC PDU
} el2_mac_dl_transport_block_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      mac_release:6;      // 3GPP release number (e.g. 13)
    kal_uint32      mac_major_version:6;    // Major version number
    kal_uint32      mac_minor_version:4;    // Minor version number
    kal_uint32      number_of_records:5;    // range[0, 20]
    kal_uint32      reserved:3;
    el2_mac_dl_transport_block_record_v1    dl_tb_records[MAX_ICD_EL2_MAC_DL_TRANSPORT_BLOCK_STRUCT_V1_NUMBER_OF_RECORDS];      // N := Number of Records
} icd_el2_mac_dl_transport_block_struct_v1;


#endif /* _EL2_MAC_DL_TRANSPORT_BLOCK_H */

