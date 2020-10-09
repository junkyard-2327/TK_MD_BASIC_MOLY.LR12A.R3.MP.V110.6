#ifndef _UAS_EAS_ENUMS_H
#define _UAS_EAS_ENUMS_H

#include "irat_common_enums.h"

/* MACRO goes here */
#define MAX_NUM_CELL_INFO_UTRA (16)
#define MAX_NUM_REDIRECTION_FREQ_UTRA (6)

typedef enum {
    CGI_INFO_NOT_CSG_CELL    = 0x00,
    CGI_INFO_CSG_CLOSED_CELL = 0x01,
    CGI_INFO_HYBRID_CELL     = 0x02,
} cell_type_enum;

typedef enum {
		FDD_MOB_MEME_MEAS_STOP_CAUSE_REGULAR, /*normal stop*/
		FDD_MOB_MEME_MEAS_STOP_CAUSE_4G3IRHO /*stop triggered by 4G3 IRHO*/
}FDD_MOB_MEME_MEASUREMENT_STOP_CAUSE;


#endif  /* UAS_EAS_ENUMS_H */
