// ICD_EL1_PSS_INFORMATION Definition
// RECORD Code: 0x3005

#ifndef _EL1_PSS_INFORMATION_H
#define _EL1_PSS_INFORMATION_H

#include "icd_codes.h"

#define ICD_EL1_PSS_INFO_CONTENT_V1     1

#define ICD_PSS_INFO_STRUCT_V1_MAX_SIZE     8

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
    kal_uint32      index:2;    // INTERGER(0..2)
                                // PSS Index
    kal_uint32      reserved:8;
    kal_int16       peak_value;     // PSS peak value in dB.
    kal_uint16      peak_position;      // INTERGER(0..9599)
                                        // Sample position with 5ms
                                        // resolution
} icd_pss_info_struct_v1;


#endif /* _EL1_PSS_INFORMATION_H */

