// ICD_EL2_EMBMS_MTCH_REPORT_EVENT Definition
// EVENT Code: 0x758A

#ifndef _EL2_EMBMS_MTCH_REPORT_EVENT_H
#define _EL2_EMBMS_MTCH_REPORT_EVENT_H

#include "icd_codes.h"

#define ICD_EL2_EL2_EMBMS_MTCH_REPORT_INFO_V1       1

#define MAX_ICD_EL2_EMBMS_MTCH_REPORT_STRUCT_V1_NUMBER_OF_RECORDS       63

#define ICD_EL2_EMBMS_MTCH_REPORT_STRUCT_V1_MAX_SIZE    256

typedef struct {
    kal_uint32      pmch_id:4;      // ID of the PMCH, range[0,15]
    kal_uint32      lcid:5;     // LCID of the MTCH
    kal_uint32      data_size:14;       // Received MTCH data size in bytes
    kal_uint32      reserved:9;
} el2_embms_mtch_record_v1;

typedef struct {
    kal_uint32      version:8;      // Log record structure ID
    kal_uint32      sfn:10;     // System frame number
    kal_uint32      subframe:4;     // Subframe number
    kal_uint32      number_of_records:6;    // range[1, 63]
    kal_uint32      reserved:4;
    el2_embms_mtch_record_v1    mtch_records[MAX_ICD_EL2_EMBMS_MTCH_REPORT_STRUCT_V1_NUMBER_OF_RECORDS];    // N := Number of Records
} icd_el2_embms_mtch_report_struct_v1;


#endif /* _EL2_EMBMS_MTCH_REPORT_EVENT_H */

