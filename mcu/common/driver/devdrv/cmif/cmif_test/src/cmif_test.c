/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2014
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   
 *   
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#if defined(__SSDVT_CMIF_TEST__)

#include "ssdvt_typedef.h"
#include "ssdvt_header.h"
#include "ssdvt_util.h"

#include "memory_test.h"
#include "cmif_test.h"

/*******************************************************************************
* Global vairable 
*******************************************************************************/
// list all test cases
SSDVT_MEM_TestCaseFun cmif_test_case[] = {SSDVT_MEM_basic_test_XXIF,
                                          SSDVT_MEM_full_size_test_XXIF,
                                          SSDVT_MEM_half_size_test_XXIF,
                                          SSDVT_MEM_interleave_test_base_8_XXIF,
                                          SSDVT_MEM_interleave_test_base_16_XXIF,
                                          SSDVT_MEM_interleave_test_base_32_XXIF,
                                          SSDVT_MEM_init_test_XXIF,
                                         };

ssdvt_uint32 cmif_test_case_size = sizeof(cmif_test_case)/ sizeof(SSDVT_MEM_TestCaseFun);
ssdvt_uint32 ssdvt_cmif_interrupt_enter = 0xFFFFFFFF;
ssdvt_uint32 ssdvt_cmif_interrupt_test_case_num;

ssdvt_uint32 ssdvt_cmif_m2c_wfi_interrupt_test_enable = 1;

/*******************************************************************************
* External Global variable 
*******************************************************************************/
extern SSDVT_MEM_TestType ssdvt_mem_test_type;
extern ssdvt_uint32       ssdvt_mem_test_current_status_base;
extern ssdvt_uint32       ssdvt_mem_test_mem_range_num;

/*******************************************************************************
* Function  
*******************************************************************************/
extern void cmif_test_sync(const ssdvt_uint32    client,
                           const ssdvt_uint32_p  sync);

extern void SSDVT_CMIF_InterruptTestInternal_MD32(ssdvt_uint32 master,
                                                  volatile ssdvt_uint32* irq_set,
                                                  volatile ssdvt_uint32* irq_check,
                                                  volatile ssdvt_uint32* sync);

extern void SSDVT_CMIF_InterruptTestInternal_L1CORE(ssdvt_uint32 master,
                                                    volatile ssdvt_uint32* irq_set,
                                                    volatile ssdvt_uint32* irq_check,
                                                    volatile ssdvt_uint32* sync);


ssdvt_uint32 cmif_test_internal(ssdvt_uint32 client,
                                const ssdvt_uint32 check_by_all_client,
                                const SSDVT_MEM_MemInfo_ptr mem_info)
{
    // Assume CR4 would initial client with 0.
    ssdvt_uint32 i;

    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 1);

    // Start to test
    dbg_print("cmif test wait for staring...");
    cmif_test_sync(client, mem_info->sync);

    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 2);

    dbg_print("cmif test starts ...");
    for(i=0; i<cmif_test_case_size; ++i){
        ssdvt_mem_test_mem_range_num = i + 1;
        /* Master */
        SSDVT_CMIF_EXCHANGE_CLIENT_NUMBER(client)
        (*cmif_test_case[i])(client, check_by_all_client, mem_info, cmif_test_sync, cmif_test_sync);

        /* Slave */
        SSDVT_CMIF_EXCHANGE_CLIENT_NUMBER(client)
        (*cmif_test_case[i])(client, check_by_all_client, mem_info, cmif_test_sync, cmif_test_sync);
    } 

    ssdvt_mem_test_mem_range_num = 0x0;
    SSDVT_SET_CURRENT_STATUS(ssdvt_mem_test_current_status_base + (ssdvt_mem_test_mem_range_num << 8) + 3);

    return 0;
}

void SSDVT_CMIF_RamTest() {
#if SSDVT_MD32_CHECK
    /* MD32 side */
    extern void SSDVT_CMIF_RamTest_MD32();
    SSDVT_CMIF_RamTest_MD32();
#else
    /* CR4 side */
    extern void SSDVT_CMIF_RamTest_L1CORE();
    SSDVT_CMIF_RamTest_L1CORE();
#endif
}

/*******************************************************************************
* CMIF Interrupt Test 
*******************************************************************************/
void SSDVT_CMIF_InterruptTestInternal(ssdvt_uint32 master,
                                      volatile ssdvt_uint32* irq_set,
                                      volatile ssdvt_uint32* irq_check,
                                      volatile ssdvt_uint32* sync)
{
    // master == 1: send interrupt
    // master == 0: receive interrupt
#if SSDVT_MD32_CHECK
    SSDVT_CMIF_InterruptTestInternal_MD32(master, irq_set, irq_check, sync);
#else
    SSDVT_CMIF_InterruptTestInternal_L1CORE(master, irq_set, irq_check, sync);
#endif
}


void SSDVT_CMIF_InterruptTest()
{
#if SSDVT_MD32_CHECK
    /* MD32 side */
    extern void SSDVT_CMIF_InterruptTest_MD32();
    SSDVT_CMIF_InterruptTest_MD32();
#else
    /* CR4 side */
    extern void SSDVT_CMIF_InterruptTest_USIP();
    SSDVT_CMIF_InterruptTest_USIP();
#endif
}

void SSDVT_CMIF_M2CWFIInterruptTest()
{
#if SSDVT_MD32_CHECK
    /* MD32 side */
    extern void SSDVT_CMIF_M2CWFIInterruptTest_MD32();
    SSDVT_CMIF_M2CWFIInterruptTest_MD32();
#else
    /* CR4 side */
    extern void SSDVT_CMIF_M2CWFIInterruptTest_L1CORE();
    SSDVT_CMIF_M2CWFIInterruptTest_L1CORE();
#endif
}

void SSDVT_CMIF_TestPreprocess(){
#if SSDVT_MD32_CHECK
#if !defined(__CORE_RAKE__)
    IRQDirectMaskAll();
#endif  /* !__CORE_RAKE__  */
#endif

#if !SSDVT_MD32_CHECK
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif
}


void SSDVT_CMIF_TestPostprocess(){

}


ssdvt_uint32 SSDVT_CMIF_Test(void)
{
    SSDVT_CMIF_TestPreprocess();

    /* Ram test */
    SSDVT_CMIF_RamTest();

    /* interrupt test*/
    SSDVT_CMIF_InterruptTest();

    /* M2C WFI Interrupt test case */
    if(ssdvt_cmif_m2c_wfi_interrupt_test_enable == 1){
        SSDVT_CMIF_M2CWFIInterruptTest();
    }

    SSDVT_CMIF_TestPostprocess();

    return 0;
}

#define SSDVT_CMIF_TEST_SUCCESS_PATTERN    0x39383938 

unsigned int ssdvt_cmif_test_success = 0;
unsigned int ssdvt_cmif_test_enter = 0;
unsigned int ssdvt_cmif_test_success_while_value = 1;

void SS_MD32_CMIF_TestSuccess(){
    ssdvt_cmif_test_success = SSDVT_CMIF_TEST_SUCCESS_PATTERN;

    ssdvt_test_pass_notification();
    while(ssdvt_cmif_test_success_while_value == 1);
}

void SS_MD32_CMIF_Test(){
    if(ssdvt_cmif_test_enter == 0x0){
        ssdvt_cmif_test_enter = 0x1;

        SSDVT_CMIF_Test();

        SS_MD32_CMIF_TestSuccess();
    }
}
#endif /* __SSDVT_CMIF_TEST__ */

