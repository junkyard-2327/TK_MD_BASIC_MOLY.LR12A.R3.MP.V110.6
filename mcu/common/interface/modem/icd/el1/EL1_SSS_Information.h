// ICD_EL1_SSS_INFORMATION Definition
// RECORD Code: 0x3006

#ifndef _EL1_SSS_INFORMATION_H
#define _EL1_SSS_INFORMATION_H

#include "icd_codes.h"

#define ICD_EL1_SSS_INFO_CONTENT_V1     1

#define ICD_SSS_INFO_STRUCT_V1_MAX_SIZE     12

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      sfn:10;     // INTERGER(0..1023)
                                // This is the SFN based on
                                // reporting time of this
                                // record.
    kal_uint32      subframe_number:4;      // INTERGER(0..9)
                                            // This is the SF based on
                                            // reporting time of this
                                            // record.
    kal_uint32      pci:9;      // INTERGER(0..503)
    kal_uint32      reserved:1;
    kal_int16       peak_value;     // SSS peak value in dB.
    kal_uint16      reserved_1;
    kal_uint32      earfcn:18;      // INTERGER(0..262143)
                                    // Center frequency
    kal_uint32      cp_type:1;      // INTERGER(0..1)
                                    // Cyclic prefix type:
                                    // 0: Normal
                                    // 1: Extended
    kal_uint32      reserved_2:13;
} icd_sss_info_struct_v1;


#endif /* _EL1_SSS_INFORMATION_H */

