/*
Here should add MTK standard header.
//copyright
//file information
//History
*/

#ifndef NVRAM_NOT_PRESENT

#include "kal_general_types.h"
#ifdef NVRAM_AUTO_GEN
#include "nvram_auto_gen.h"
#endif

#include "nvram_enums.h"
#include "nvram_defs.h"

// LID Gorup Definition
#include "cuex_nvram_def.h"
#include "cuex_nvram_editor.h"

// Default Values
nvram_cuex_sample_struct const NVRAM_CUEX_SAMPLE_DEFAULT[NVRAM_EF_CUEX_SAMPLE_TOTAL] =
{
    // val_byte, val_short, val_int, val_long, val_double, val_float
    {1, 2, 3, 4, 5.0, 6.0},
    {7, 8, 9, 10, 11.0, 12.0},
    {5, 6, 7, 8,9.0, 10.0},
    {9, 10, 11, 12, 13.0, 14.0}
};


// LID Declaration
ltable_entry_struct logical_data_item_cuex[] =
{
    //This is just a sample,user can define your lid
    {
        NVRAM_EF_CUEX_SAMPLE_LID,
        NVRAM_EF_CUEX_SAMPLE_TOTAL,
        NVRAM_EF_CUEX_SAMPLE_SIZE,
        NVRAM_NORMAL(NVRAM_CUEX_SAMPLE_DEFAULT),
        NVRAM_CATEGORY_USER,
        NVRAM_ATTR_MULTI_DEFAULT | NVRAM_ATTR_MULTIREC_READ,
       "CUEX",
        VER(NVRAM_EF_CUEX_SAMPLE_LID)
    },
   
    NVRAM_LTABLE_END
};

#endif
 