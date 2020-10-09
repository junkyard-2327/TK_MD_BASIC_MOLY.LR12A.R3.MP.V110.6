// ICD_EL2_RLC_OTA_MESSAGES Definition
// RECORD Code: 0x7089

#ifndef _EL2_RLC_OTA_MESSAGES_H
#define _EL2_RLC_OTA_MESSAGES_H

#include "icd_codes.h"

#define ICD_EL2_EL2_RLC_OTA_MESSAGE_INFO_V1     1

#define MAX_ICD_EL2_RLC_OTA_MESSAGE_STRUCT_V1_NUMBER_OF_RECORDS     20

#define ICD_EL2_RLC_OTA_MESSAGE_STRUCT_V1_MAX_SIZE      564

typedef struct {
    kal_uint32      direction:1;    // Transmission direction (0: UL, 1: DL)
    kal_uint32      msg_type:1;     // RLC message type (0: data, 1: control)
    kal_uint32      cfg_idx:6;      // Unique radio bearer configuration index (0~31: DRB1~DRB32, 32: SRB0, 33: SRB1, 34: SRB2)
    kal_uint32      rlc_mode:1;     // RLC mode (0: AM, 1: UM)
    kal_uint32      sn_len:1;       // SN field length (0: 5bit, 1: 10bit)
    kal_uint32      li_field:1;     // Indicate LI field exist or not (0: not exist, 1: exist)
    kal_uint32      li_len:4;       // Indicate LI length (11: 11-bit LI, 15: 15-bit LI)
    kal_uint32      fi:2;       // FI, Bit 0 is the Least Significant Bit
    kal_uint32      pdu_status:3;       // Indicate RLC PDU status
    kal_uint32      reserved:12;
    kal_uint16      log_mask;       // logMask, indicate types of logging PDU
                                    // Bit 0 is the Least Significant Bit
                                    // For DL direction:
                                    // For UL direction:
    kal_uint16      pdu_size;       // Raw PDU size in bytes
    kal_uint16      reserved_1;
    kal_uint16      rlc_hdr_len;    // Indicate length of RLC header raw data (range[0, 16])
    kal_uint8       rlc_hdr[16];    // For data PDU, logging RLC PDU header raw data. For control PDU, logging RLC PDU raw data, max 16bytes
} el2_rlc_ota_message_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      rlc_release:6;      // 3GPP release number (e.g. 13)
    kal_uint32      rlc_major_version:6;    // Major version number
    kal_uint32      rlc_minor_version:4;    // Minor version number
    kal_uint32      number_of_records:5;    // range[0, 20]
    kal_uint32      reserved:3;
    el2_rlc_ota_message_record_v1       data_pdu_records[MAX_ICD_EL2_RLC_OTA_MESSAGE_STRUCT_V1_NUMBER_OF_RECORDS];      // N := Number of Records
} icd_el2_rlc_ota_message_struct_v1;


#endif /* _EL2_RLC_OTA_MESSAGES_H */

