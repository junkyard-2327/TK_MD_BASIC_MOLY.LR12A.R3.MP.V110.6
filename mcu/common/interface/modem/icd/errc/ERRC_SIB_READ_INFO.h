// ICD_ERRC_SIB_READ_INFO Definition
// RECORD Code: 0x3A04

#ifndef _ERRC_SIB_READ_INFO_H
#define _ERRC_SIB_READ_INFO_H

#include "icd_codes.h"

#define ICD_ERRC_ERRC_MIBSIB_READ_INFO_V1       1

#define ICD_ERRC_MIBSIB_READ_INFO_STRUCT_V1_MAX_SIZE    24

typedef struct {
    kal_uint32      sibmask;    // Bit mask for one or more SIB types which were
                                // successfully read (Bit 0 for SIB1, Bit 1 for
                                // SIB 2, ...).
                                // For example, if SibMask=11, the binary format
                                // is 1011, which means SIB1, SIB2, SIB4 were
                                // read.
    kal_uint32      system_info_mask;       // List of SIB types mapped to systeminformation
                                            // message, refer to "SIB-MappingInfo" in 3GPP
                                            // TS 36.331.
                                            // Bit mask for one or more SIB types. (Bit 0 for
                                            // SIB1, Bit 1 for SIB 2, ...). Only applicable
                                            // to SIB1 message, for all other SIB messages,
                                            // report a SEQUENCE with no element.
    kal_uint8       system_info_msg;    // Total number of different SIBs received by UE
    kal_uint8       reserved;
    kal_uint16      reserved_1;
} sib_content_info;

typedef struct {
    kal_uint8       antennas;       // Number of TX antennas detected
    kal_uint8       bandwidth;      // DL bandwidth
                                    // 1: Bandwidth 1.4Mhz
                                    // 2: Bandwidth 3Mhz
                                    // 3: Bandwidth 5Mhz
                                    // 4: Bandwidth 10Mhz
                                    // 5: Bandwidth 15Mhz
                                    // 6: Bandwidth 20Mhz
    kal_uint16      reserved;
} mib_content_info;

typedef struct {
    kal_uint8       version;    // Log event structure ID
    kal_uint8       mibsib_read_result;     // 0: Read Success
                                            // 1: Read Fail, content will be 0.
    kal_uint16      physical_cell_id;       // Physical Cell ID
    kal_uint32      freq;       // Earfcn
    mib_content_info    mib_content;    // MIB Content, MIB is not available
                                        // when MIB content is 0.
    sib_content_info    sib_content;    // SIB Content, SIB is not available
                                        // when SIB content is 0.
} icd_errc_mibsib_read_info_struct_v1;


#endif /* _ERRC_SIB_READ_INFO_H */

