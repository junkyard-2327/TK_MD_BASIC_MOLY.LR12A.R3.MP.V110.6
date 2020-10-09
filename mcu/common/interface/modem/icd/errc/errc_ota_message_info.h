// ICD_ERRC_OTA_MESSAGE_INFO Definition
// RECORD Code: 0x3A02

#ifndef _ERRC_OTA_MESSAGE_INFO_H
#define _ERRC_OTA_MESSAGE_INFO_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_OTA_MESSAGE_INFO_V1       1

#define MAX_ICD_ERRC_OTA_MESSAGE_INFO_STRUCT_V1_NUM_OF_PAYLOAD_LEN      8192

#define ICD_ERRC_OTA_MESSAGE_INFO_STRUCT_V1_MAX_SIZE    8200

typedef struct {
    kal_uint8       version;    // Log record structure ID
    kal_uint8       rrc_release;    // release number (e.g. 13)
    kal_uint8       rrc_version;    // version number, left 4 bits are for x, right 4 bits are for y. (e.g. 01100001 -> 6.1)
                                    // Hence, it is 13.6.1
    kal_uint8       pdu_num;    // pcch (1)
                                // dlCcch (2)
                                // dlDcch (3)
                                // ulCcch (4)
                                // ulDcch (5)
                                // mcch (6)
                                // bcchDlSch (7)
                                // bcch_bch (8)
    kal_uint8       msg_type;       // Message enum
    kal_uint8       reserved;
    kal_uint16      num_of_payload_len;     // Length of the ASN.1 uplink/downloink encoded message. range[0, 8192]
    kal_uint8       rrc_payload[FLEXIBLE_ARRAY_SIZE];       // N := Num of Payload len
                                                            // ASN.1 uplink/downloink encoded message
} icd_errc_ota_message_info_struct_v1;


#endif /* _ERRC_OTA_MESSAGE_INFO_H */

