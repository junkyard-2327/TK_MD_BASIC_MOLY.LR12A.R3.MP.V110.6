#include "dsp_loader.h"

// 1. force to be RW
// 2. do not modify the variable name
__attribute__((section(".rodata"))) const kal_uint32 *g_dsp_bin_ptr = (kal_uint32*)0xDEADDEAD;

kal_uint32 DSP_Load()
{
    // Load the DSP via CCCI FS call

    return (kal_uint32) g_dsp_bin_ptr;
}