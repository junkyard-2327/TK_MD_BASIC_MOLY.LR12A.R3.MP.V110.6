/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*****************************************************************************/
#include "ssdvt_header.h"
#include "ssdvt_util.h"

/*******************************************************************************
 * Definition 
 *******************************************************************************/
#if defined(__SIMULATION__)
#define SYSREG_PASS         ((volatile ssdvt_uint32 *)(0xe0000004))
#define SYSREG_FAIL         ((volatile ssdvt_uint32 *)(0xe0000008))
#endif

#define SSDVT_GET_VIC_VEC()           SCU_IO_READ(VIC_VEC)

/*******************************************************************************
 * Global Variable 
 *******************************************************************************/
ssdvt_uint32  ssdvt_stored_stack_pointer;
ssdvt_uint32  ssdvt_stored_return_address;
ssdvt_uint32  ssdvt_current_status;

/*******************************************************************************
 * Functions 
 *******************************************************************************/
void ssdvt_test_fail_notification()
{
#if defined(__SIMULATION__)
    *SYSREG_FAIL = 0xDEAD;
#endif

#if defined(__MD32S_SSDVT_RTLCOSIM__)
    *SSDVT_RTLCOSIM_ERROR_PC = ssdvt_stored_return_address;
    *SSDVT_RTLCOSIM_STATUS = 2;
#endif

    while(1);
}

void ssdvt_test_pass_notification()
{
#if defined(__SIMULATION__)
    *SYSREG_PASS = 0xABBA;
#endif

#if defined(__MD32S_SSDVT_RTLCOSIM__)
    *SSDVT_RTLCOSIM_STATUS = 1;
#endif

    while(1);
}

void ssdvt_set_current_status(ssdvt_uint32 status)
{
    ssdvt_current_status = status;
#if defined(__MD32S_SSDVT_RTLCOSIM__)
    *SSDVT_RTLCOSIM_ERROR_PC = status;
#endif
}

