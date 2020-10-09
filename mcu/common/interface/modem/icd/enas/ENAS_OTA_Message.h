// ICD_ENAS_OTA_MESSAGE Definition
// RECORD Code: 0x3C00

#ifndef _ENAS_OTA_MESSAGE_H
#define _ENAS_OTA_MESSAGE_H

#include "icd_codes.h"

#define ICD_ENAS_ENAS_OTA_MESSAGE_V1    1

#define MAX_ICD_ENAS_OTA_MESSAGE_STRUCT_V1_NUM_OF_PAYLOAD_LEN       8192

#define ICD_ENAS_OTA_MESSAGE_STRUCT_V1_MAX_SIZE     8200

typedef struct {
    kal_uint8       version;    // Log record structure ID
    kal_uint8       nas_release_number;     // 3gpp release number (e.g. 13)
                                            // majorVersion is 13
    kal_uint8       nas_release_version;    // 3gpp version number, left 4 bits are for
                                            // x, right 4 bits are for y. (e.g. 01100001
                                            // -> 6.1)
                                            // minorVersion is x.y
                                            // 3gppVersion is majorVersion.minorVersion
    kal_uint8       ota_message_direction;      // upstream (1)
                                                // downstream (2)
    kal_uint8       message_type;       // esm (1)
                                        // emm (2)
    kal_uint8       ciphered;       // BOOLEAN
    kal_uint16      num_of_payload_len;     // Length of the ASN.1 encoded message.
                                            // range[0, 8192]
    kal_uint8       payload[FLEXIBLE_ARRAY_SIZE];       // N := Num of Payload len
                                                        // nasPayload  OCTET STRING(SIZE (1..8192))
                                                        // ASN.1 encoded message
} icd_enas_ota_message_struct_v1;


#endif /* _ENAS_OTA_MESSAGE_H */

