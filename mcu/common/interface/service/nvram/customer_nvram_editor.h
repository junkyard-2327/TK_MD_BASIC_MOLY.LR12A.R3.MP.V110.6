/*
Here should add MTK standard header.
//copyright
//file information
//History
*/
#ifndef __CUSTOMER__NVRAM_EDITOR_H__
#define __CUSTOMER__NVRAM_EDITOR_H__

#ifndef NVRAM_NOT_PRESENT

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

/*
 *   Include Headers
 */

/*
 *   NVRAM Basic Headers
 */
#include "nvram_data_items.h"

/*
 *   User Headers
 */
#include "customer_nvram_def.h"

/*
 *   Bit Level Description Language
 */
#ifdef GEN_FOR_PC
    BEGIN_NVRAM_DATA
         LID_BIT VER_LID(NVRAM_EF_CUSTOMER_SAMPLE_LID)
         nvram_customer_sample_struct *NVRAM_EF_CUSTOMER_SAMPLE_TOTAL
         {
             val_byte:"Byte Value (min:0, max: 255)"
             {
                 val_byte:8 "Byte Value"
                 {
                    0x00: "Zero";
                    0xFF: "Max";
                 };
             };

             val_short: "Short Value (min:0, max: 65535)"
             {
                 val_short:16 "Short Value"
                 {
                    0x0000: "Zero";
                    0xFFFF: "Max";
                 };
             };

             val_int: "Short Value (min:0, max: 2^32-1)"
             {
                 val_int:32 "Int Value"
                 {
                    0x00000000: "Zero";
                    0xFFFFFFFF: "Max";
                 };
             };

             val_long: "Long Value (min:0, max: 2^64-1)"
             {
             };

             val_double: "Double"
             {
             };

             val_double: "Float"
             {
             };
    };

#if defined(__NVRAM_CRITICAL_DATA_SIGN_SUPPORT__)
    LID_BIT VER_LID(NVRAM_EF_CUSTOMER_SIGNED_CRITICAL_DATA_LID)
    nvram_ef_oem_crital_data_struct * NVRAM_EF_CUSTOMER_SIGNED_CRITICAL_DATA_TOTAL
    {
        data: "Customer defined raw data"
        {
        };
    };    
#endif


    END_NVRAM_DATA
#endif  /* GEN_FOR_PC */
#ifdef __cplusplus
}
#endif
#endif  /* !NVRAM_NOT_PRESENT */
#endif  // __SAMPLE__NVRAM_EDITOR_H__

