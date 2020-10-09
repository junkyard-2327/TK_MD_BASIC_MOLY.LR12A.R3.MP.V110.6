/*
Here should add MTK standard header.
//copyright
//file information
//History
*/
#ifndef __CUEX_NVRAM_DEF_H__
#define __CUEX_NVRAM_DEF_H__

#ifdef __cplusplus
extern "C"
{
#endif  /*__cplusplus */

//head files

#include "nvram_defs.h"
#include "nvram_enums.h"
#include "ps_public_enum.h"
#include "device.h"


// LID Enums
typedef enum
{
    NVRAM_EF_CUEX_SAMPLE_LID      = NVRAM_LID_GRP_CUEX(0),     
    // Last LID of Group, please add new before NVRAM_EF_CUSTOM_LAST_LID
    NVRAM_EF_CUEX_LAST_LID       = NVRAM_LID_GRP_CUEX(255)   //Large group should set to 255, little group should set to 63
}nvram_lid_cust_enum;

// VERNO
#define NVRAM_EF_CUEX_SAMPLE_LID_VERNO          "000"   // Must be LID + "_VERNO"

// Data Structure of Each LID
typedef struct
{
    kal_int8   val_byte;
    kal_int16  val_short;
    kal_int32  val_int;
    kal_int64  val_long;
    double     val_double;
    float      val_float;
} nvram_cuex_sample_struct;


// Size and Total 
#define NVRAM_EF_CUEX_SAMPLE_TOTAL  4           // Number of records
#define NVRAM_EF_CUEX_SAMPLE_SIZE   sizeof(nvram_cuex_sample_struct)    // Size of each record


#ifdef __cplusplus
}
#endif  /*__cplusplus */

#endif