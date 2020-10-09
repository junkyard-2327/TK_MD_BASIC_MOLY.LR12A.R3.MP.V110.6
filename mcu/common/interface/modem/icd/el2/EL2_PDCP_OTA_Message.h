// ICD_EL2_PDCP_OTA_MESSAGE Definition
// RECORD Code: 0x708F

#ifndef _EL2_PDCP_OTA_MESSAGE_H
#define _EL2_PDCP_OTA_MESSAGE_H

#include "icd_codes.h"

#define ICD_EL2_EL2_PDCP_OTA_MESSAGE_INFO_V1    1

#define MAX_ICD_EL2_PDCP_OTA_MESSAGE_STRUCT_V1_NUMBER_OF_RECORDS    20

#define ICD_EL2_PDCP_OTA_MESSAGE_STRUCT_V1_MAX_SIZE     224

typedef struct {
    kal_uint8       radio_bearer_index:6;       // Unique radio bearer configuration index
                                                // 0~31: DRB1~DRB32
                                                // 32~34: SRB0~SRB2
    kal_uint8       radio_bearer_type:1;    // drb:0 , srb:1
    kal_uint8       direction:1;    // up stream:0 , down stream:1
    kal_uint8       rlc_mode:1;     // am:0 , um:1
    kal_uint8       reserved:6;
    kal_uint8       message_type:1;     // data pdu for drb/srb:0
                                        // control pdu for drb:1
    kal_uint8       ciphered:1;     // ciphered: 0
                                    // non-ciphered: 1
    kal_uint8       pdcp_sn_bit:3;      // null:0
                                        // 7-bit:1
                                        // 12-bit:2
                                        // 15-bit:3
                                        // 18-bit:4
    kal_uint8       pdcp_header_length:4;       // Indicate the length of "PDCP HDR" field
    kal_uint8       pdcp_hdr[8];    // PDCP header raw data (record up to 8 bytes)
} el2_pdcp_ota_message_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      pdcp_release:6;     // 3GPP release number
                                        // (e.g. 13 means Rel 13)
    kal_uint32      pdcp_major_version:6;       // Major version number
    kal_uint32      pdcp_minor_version:4;       // Minor version number
    kal_uint32      number_of_records:5;    // range[0, 20]
    kal_uint32      reserved:3;
    el2_pdcp_ota_message_record_v1      ota_records[MAX_ICD_EL2_PDCP_OTA_MESSAGE_STRUCT_V1_NUMBER_OF_RECORDS];      // N := Number of Records
} icd_el2_pdcp_ota_message_struct_v1;


#endif /* _EL2_PDCP_OTA_MESSAGE_H */

