/*****************************************************************************
 *
 * Filename:
 * ---------
 *   CSIF_PRETEST_MAIN.c
 *
 * Project:
 * --------
 *   R11GX Project depend on makefile configuration
 *
 * Description:
 * ------------
 *   History for each file.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by Perforce. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by Perforce. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*
**********************************************************************************************************************************************************
*[File         ]       CSIF_PRETEST_MAIN.c
*[Version      ]       v1.0
*[Revision Date]       2014-06-18
*[Author       ]       Peng-Chih Wang
*[Description  ]
*    The program is CSIF related APIs implementation.
*
*[Copyright]
*    Copyright (C) 2005 MediaTek Incorporation. All Rights Reserved.
**********************************************************************************************************************************************************
*/

//related header file
#include "csif_global_extern.h"
#include "intrCtrl.h"
#include "drv_comm.h"
#include "sync_data.h"
//#include "mdm.h"

//redefine macro
#define WRITE_CR(addr, value)   DRV_WriteReg32(addr, value); Data_Sync_Barrier()
#define READ_CR(addr, value)    value=DRV_Reg32(addr)

//PC: open the define when interrupt is ready
#define IT_WITH_DSP
//#define CSIF_TIME_OUT
#define CSIF_HW_TEST
#define CSIF_NEW_TEST
#define CSIF_EXCEPTION_TEST
#define CSIF_INTERRUPT_TEST
#define CSIF_CONFLICT_TEST
#define CSIF_LIGHT_TEST //option for reduce run time 
//#define TEMP_BYPASS
//#define CSIF_API_TEST
//#define CSIF_SYNC_TEST
//prototype declaration
void CSIF_PreTest(void);
void CSIF_SSDVT_EXCEPTION(void);
void CSIF_Interrupt_Test(void);
void CSIF_Conflict_Test(void);
void CSIF_Interrupt_Handler(kal_uint32 status_index);
#if defined(CSIF_HW_TEST)
static void CSIF_SSDVT_TEST(void);
#endif
#if defined(CSIF_API_TEST)
static void CSIF_DRIVER_TEST(void);
#endif

#if defined(CSIF_LIGHT_TEST)
#define CSIF_ADD_CNT 0x40
#else
#define CSIF_ADD_CNT 4
#endif

//Implementation
volatile kal_uint32 csif_pretest_case = 0;
#if defined(CSIF_TIME_OUT)
volatile kal_uint32 csif_time_out = 0;
#endif

//case0
#define SRAM_PATTERN_ARRAY 4
volatile kal_uint32 csif_debug_sram_pattern_index=0;
volatile kal_uint32 csif_debug_sram_pattern[SRAM_PATTERN_ARRAY]={0x0, 0xFFFFFFFF, 0x5a5a5a5a, 0xa5a5a5a5};
volatile kal_uint32* csif_debug_icc_sram_addr = (kal_uint32*)ICC_CSIF_DSM_BASE;
volatile kal_uint32* csif_debug_imc_sram_addr = (kal_uint32*)IMC_CSIF_DSM_BASE;
volatile kal_uint32* csif_debug_mpc_sram_addr = (kal_uint32*)MPC_CSIF_DSM_BASE;

//case1
volatile kal_uint8 csif_debug_reg_index = 0;

//case2
volatile kal_uint32 csif_debug_interrupt_index = 0;

//case3
volatile kal_uint32 csif_debug_icc_handshake_ack_flag = 0;
volatile kal_uint32 csif_debug_imc_handshake_ack_flag = 0;
volatile kal_uint32 csif_debug_mpc_handshake_ack_flag = 0;

volatile unsigned int icc_csif_debug_interrupt_index=0;
volatile unsigned int imc_csif_debug_interrupt_index=0;
volatile unsigned int mpc_csif_debug_interrupt_index=0;
volatile unsigned int counter_buffer = 0;
/*
****************************************************************************************************************************
* CSIF_PreTest.
*
* This function is for testing the CSIF HW/SW
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_PreTest(void)
{
    //run in idle task
    //DVT test
    
    #if defined(CSIF_HW_TEST)
    CSIF_SSDVT_TEST();
    #endif

    extern void CSIF_Init(void);
    CSIF_Init();

    #if defined(CSIF_EXCEPTION_TEST)
    CSIF_SSDVT_EXCEPTION(); 
    #endif

    WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xFFFF0002);
    WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xFFFF0002);
    WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xFFFF0002);

    #if defined(CSIF_CONFLICT_TEST)
    CSIF_Conflict_Test();
    #endif

    WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xFFFF0008);
    WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xFFFF0008);
    WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xFFFF0008);

    #if defined(CSIF_INTERRUPT_TEST)
    CSIF_Interrupt_Test();
    #endif

    //Driver test
    #if defined(CSIF_API_TEST)
    CSIF_DRIVER_TEST();
    #endif

    WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xFFFF000D);
    WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xFFFF000D);
    WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xFFFF000D);

}

/*
****************************************************************************************************************************
* CSIF_SSDVT_TEST.
*
* This function is for CSIF HW testing
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
volatile kal_uint32 count=0;
volatile kal_uint32 icc_error_addr=0, imc_error_addr=0, mpc_error_addr=0;
volatile kal_uint32 icc_mpu_buffer=0, imc_mpu_buffer=0, mpc_mpu_buffer=0;
#if defined(CSIF_HW_TEST)
static void CSIF_SSDVT_TEST(void)
{
    #if defined(IT_WITH_DSP)
        //sync point 1
        READ_CR(ICC_DSPCSIF_TASK_ID, csif_debug_icc_handshake_ack_flag);
        READ_CR(IMC_DSPCSIF_TASK_ID, csif_debug_imc_handshake_ack_flag);
        READ_CR(MPC_DSPCSIF_TASK_ID, csif_debug_mpc_handshake_ack_flag);
        while( (csif_debug_icc_handshake_ack_flag != 0xFFFF0001) || (csif_debug_imc_handshake_ack_flag != 0xFFFF0001) || (csif_debug_mpc_handshake_ack_flag != 0xFFFF0001) )
        {
            //read update register
            READ_CR(ICC_DSPCSIF_TASK_ID, csif_debug_icc_handshake_ack_flag);
            READ_CR(IMC_DSPCSIF_TASK_ID, csif_debug_imc_handshake_ack_flag);
            READ_CR(MPC_DSPCSIF_TASK_ID, csif_debug_mpc_handshake_ack_flag);
        }
    #endif

volatile kal_uint32 index=0;
#if defined(CSIF_SYNC_TEST)
    MDM_TM_END_SUCC_WRITE;
#endif

    WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xA0000001);
    WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xA0000001);
    WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xA0000001);

    //case0: SRAM read/write
    csif_pretest_case = 0;
    //MDM_INT32_WRITE(0xB5B50200);
    while(csif_debug_sram_pattern_index < SRAM_PATTERN_ARRAY)
    {
        //write memory pattern
        for(index=0; index<ICC_DSM_LEN; index++)
        {
            *(csif_debug_icc_sram_addr+index) = csif_debug_sram_pattern[csif_debug_sram_pattern_index];
        }
        for(index=0; index<IMC_DSM_LEN; index++)
        {
            *(csif_debug_imc_sram_addr+index) = csif_debug_sram_pattern[csif_debug_sram_pattern_index];
        }
        for(index=0; index<MPC_DSM_LEN; index++)
        {
            *(csif_debug_mpc_sram_addr+index) = csif_debug_sram_pattern[csif_debug_sram_pattern_index];
        }
        //read memory pattern 
        for(index=0; index<ICC_DSM_LEN; index++)
        {
            if( *(csif_debug_icc_sram_addr+index) != csif_debug_sram_pattern[csif_debug_sram_pattern_index] )
            {
                //MDM_INT32_WRITE(0xB5B50300+index);
                //MDM_TM_END_FAIL_WRITE;
                ASSERT(0);
            }
        }
        for(index=0; index<IMC_DSM_LEN; index++)
        {
            if( *(csif_debug_imc_sram_addr+index) != csif_debug_sram_pattern[csif_debug_sram_pattern_index] )
            {
                //MDM_INT32_WRITE(0xB5B50500+index);
                //MDM_TM_END_FAIL_WRITE;
                ASSERT(0);
            }
        }
        for(index=0; index<MPC_DSM_LEN; index++)
        {
            if( *(csif_debug_mpc_sram_addr+index) != csif_debug_sram_pattern[csif_debug_sram_pattern_index] )
            {
                //MDM_INT32_WRITE(0xB5B50800+index);
                //MDM_TM_END_FAIL_WRITE;
                ASSERT(0);
            }
        }
        csif_debug_sram_pattern_index++;
    }

    //write memory pattern
    for(index=0; index<ICC_DSM_LEN; index++)
    {
        *(csif_debug_icc_sram_addr+index) = (index*17);
    }
    for(index=0; index<IMC_DSM_LEN; index++)
    {
        *(csif_debug_imc_sram_addr+index) = (index*13);
    }
    for(index=0; index<MPC_DSM_LEN; index++)
    {
        *(csif_debug_mpc_sram_addr+index) = (index*23);
    }
    //read memory pattern 
    for(index=0; index<ICC_DSM_LEN; index++)
    {
        if( *(csif_debug_icc_sram_addr+index) != (index*17) )
        {
            ASSERT(0);
        }
    }
    for(index=0; index<IMC_DSM_LEN; index++)
    {
        if( *(csif_debug_imc_sram_addr+index) != (index*13) )
        {
            ASSERT(0);
        }
    }
    for(index=0; index<MPC_DSM_LEN; index++)
    {
        if( *(csif_debug_mpc_sram_addr+index) != (index*23) )
        {
            ASSERT(0);
        }
    }

    //case0: SRAM read/write
    WRITE_CR(ICC_DSPCSIF_POLLING_MODE_RANGE, (ICC_DSM_LEN));
    WRITE_CR(IMC_DSPCSIF_POLLING_MODE_RANGE, (IMC_DSM_LEN));
    WRITE_CR(MPC_DSPCSIF_POLLING_MODE_RANGE, (MPC_DSM_LEN));
    csif_pretest_case = 0;
    //MDM_INT32_WRITE(0xB5B50200);
    while(csif_debug_sram_pattern_index < SRAM_PATTERN_ARRAY)
    {
        //write memory pattern
        for(index=0; index<ICC_DSM_LEN; index++)
        {
            *(csif_debug_icc_sram_addr+index) = csif_debug_sram_pattern[csif_debug_sram_pattern_index];
        }
        for(index=0; index<IMC_DSM_LEN; index++)
        {
            *(csif_debug_imc_sram_addr+index) = csif_debug_sram_pattern[csif_debug_sram_pattern_index];
        }
        for(index=0; index<MPC_DSM_LEN; index++)
        {
            *(csif_debug_mpc_sram_addr+index) = csif_debug_sram_pattern[csif_debug_sram_pattern_index];
        }
        //read memory pattern 
        for(index=0; index<ICC_DSM_LEN; index++)
        {
            if( *(csif_debug_icc_sram_addr+index) != csif_debug_sram_pattern[csif_debug_sram_pattern_index] )
            {
                //MDM_INT32_WRITE(0xB5B50300+index);
                //MDM_TM_END_FAIL_WRITE;
                ASSERT(0);
            }
        }
        for(index=0; index<IMC_DSM_LEN; index++)
        {
            if( *(csif_debug_imc_sram_addr+index) != csif_debug_sram_pattern[csif_debug_sram_pattern_index] )
            {
                //MDM_INT32_WRITE(0xB5B50500+index);
                //MDM_TM_END_FAIL_WRITE;
                ASSERT(0);
            }
        }
        for(index=0; index<MPC_DSM_LEN; index++)
        {
            if( *(csif_debug_mpc_sram_addr+index) != csif_debug_sram_pattern[csif_debug_sram_pattern_index] )
            {
                //MDM_INT32_WRITE(0xB5B50800+index);
                //MDM_TM_END_FAIL_WRITE;
                ASSERT(0);
            }
        }
        csif_debug_sram_pattern_index++;
    }

    //write memory pattern
    for(index=0; index<ICC_DSM_LEN; index++)
    {
        *(csif_debug_icc_sram_addr+index) = (index*13);
    }
    for(index=0; index<IMC_DSM_LEN; index++)
    {
        *(csif_debug_imc_sram_addr+index) = (index*23);
    }
    for(index=0; index<MPC_DSM_LEN; index++)
    {
        *(csif_debug_mpc_sram_addr+index) = (index*17);
    }
    //read memory pattern 
    for(index=0; index<ICC_DSM_LEN; index++)
    {
        if( *(csif_debug_icc_sram_addr+index) != (index*13) )
        {
            ASSERT(0);
        }
    }
    for(index=0; index<IMC_DSM_LEN; index++)
    {
        if( *(csif_debug_imc_sram_addr+index) != (index*23) )
        {
            ASSERT(0);
        }
    }
    for(index=0; index<MPC_DSM_LEN; index++)
    {
        if( *(csif_debug_mpc_sram_addr+index) != (index*17) )
        {
            ASSERT(0);
        }
    }

    WRITE_CR(ICC_DSPCSIF_POLLING_MODE_RANGE, (0));
    WRITE_CR(IMC_DSPCSIF_POLLING_MODE_RANGE, (0));
    WRITE_CR(MPC_DSPCSIF_POLLING_MODE_RANGE, (0));
   
    //case1: CR4 Reg RW test
    csif_pretest_case++;
    //MDM_INT32_WRITE(0xB5B50E00);
    
    //disable CR4 to receive DSP interrupt
    WRITE_CR(ICC_DSPCSIF_S2C_IRQ_ENABLE, 0x0);  
    WRITE_CR(IMC_DSPCSIF_S2C_IRQ_ENABLE, 0x0); 
    WRITE_CR(MPC_DSPCSIF_S2C_IRQ_ENABLE, 0x0); 
    
    //disable CR4 error interrupt 
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);  
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x0); 
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x0); 
      
    //for ACD register test
    for(csif_debug_reg_index=0; csif_debug_reg_index<32; csif_debug_reg_index++)
    {
        //write C2S ACD index       
        WRITE_CR(ICC_DSPCSIF_GPI_C_SET, 0x1<<csif_debug_reg_index);  
        WRITE_CR(IMC_DSPCSIF_GPI_C_SET, 0x1<<csif_debug_reg_index); 
        WRITE_CR(MPC_DSPCSIF_GPI_C_SET, 0x1<<csif_debug_reg_index); 
        
        
        //read C2S ACD index
        READ_CR(ICC_DSPCSIF_GPI_C_READ, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B50F00+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_GPI_C_READ, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B51000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_GPI_C_READ, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B52000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
        //clear C2S ACD index
        WRITE_CR(ICC_DSPCSIF_GPI_C_CLEAR, 0x1<<csif_debug_reg_index);  
        WRITE_CR(IMC_DSPCSIF_GPI_C_CLEAR, 0x1<<csif_debug_reg_index); 
        WRITE_CR(MPC_DSPCSIF_GPI_C_CLEAR, 0x1<<csif_debug_reg_index); 
        
        //read C2S ACD index
        READ_CR(ICC_DSPCSIF_GPI_C_READ, index);
        if(index!=0)
        {
            //MDM_INT32_WRITE(0xB5B53000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_GPI_C_READ, index);
        if(index!=0)
        {
            //MDM_INT32_WRITE(0xB5B54000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_GPI_C_READ, index);
        if(index!=0)
        {
            //MDM_INT32_WRITE(0xB5B55000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
    }
    
    //for S2C enable test
    for(csif_debug_reg_index=0; csif_debug_reg_index<32; csif_debug_reg_index++)
    {
        //write s2c enable register
        WRITE_CR(ICC_DSPCSIF_S2C_IRQ_ENABLE, 0x1<<csif_debug_reg_index);  
        WRITE_CR(IMC_DSPCSIF_S2C_IRQ_ENABLE, 0x1<<csif_debug_reg_index); 
        WRITE_CR(MPC_DSPCSIF_S2C_IRQ_ENABLE, 0x1<<csif_debug_reg_index); 
        
        //read s2c enable register
        READ_CR(ICC_DSPCSIF_S2C_IRQ_ENABLE, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B56000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
        
        READ_CR(IMC_DSPCSIF_S2C_IRQ_ENABLE, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B57000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
        
        READ_CR(MPC_DSPCSIF_S2C_IRQ_ENABLE, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B58000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
    }
    
    //for Valid enable test
    //for(csif_debug_reg_index=0; csif_debug_reg_index<32; csif_debug_reg_index++)
    //{
        //write valid register
    //    WRITE_CR(ICC_DSPCSIF_VAS_VALID, 0x1<<csif_debug_reg_index);
    //    WRITE_CR(IMC_DSPCSIF_VAS_VALID, 0x1<<csif_debug_reg_index);
    //    WRITE_CR(MPC_DSPCSIF_VAS_VALID, 0x1<<csif_debug_reg_index);
        
        //read valid register
    //    READ_CR(ICC_DSPCSIF_VAS_VALID, index);
    //    if(index!= (0x1<<csif_debug_reg_index) )
    //    {
    //        MDM_INT32_WRITE(0xB5B59000+csif_debug_reg_index);
    //        MDM_TM_END_FAIL_WRITE;
    //        ASSERT(0);
    //    }
        
    //    READ_CR(IMC_DSPCSIF_VAS_VALID, index);
    //    if(index!= (0x1<<csif_debug_reg_index) )
    //    {
    //        MDM_INT32_WRITE(0xB5B5a000+csif_debug_reg_index);
    //        MDM_TM_END_FAIL_WRITE;
    //        ASSERT(0);
    //    }
        
    //    READ_CR(MPC_DSPCSIF_VAS_VALID, index);
    //    if(index!= (0x1<<csif_debug_reg_index) )
    //    {
    //        MDM_INT32_WRITE(0xB5B5b000+csif_debug_reg_index);
    ///       MDM_TM_END_FAIL_WRITE;
    //        ASSERT(0);
    //    }
    //}
   
    //for CR4 error type test
    for(csif_debug_reg_index=0; csif_debug_reg_index<4; csif_debug_reg_index++)
    {
        //skip s2c ovfl interrupt
        //if(csif_debug_reg_index == 2)
        //    continue;
            
        //write CR4 error register
        WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<csif_debug_reg_index);
        WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<csif_debug_reg_index);
        WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<csif_debug_reg_index);
        
        //read CR4 error register
        READ_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B5c000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
        
        READ_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B5d000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
        
        READ_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B5e000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
    }
    
    //for DSP MPU start test
    for(csif_debug_reg_index=0; csif_debug_reg_index<8; csif_debug_reg_index++)
    {
        //write DSP MPU start register
        WRITE_CR(ICC_DSPCSIF_DSP_RANGE_START_ADDR, 0x1<<csif_debug_reg_index);
        WRITE_CR(IMC_DSPCSIF_DSP_RANGE_START_ADDR, 0x1<<csif_debug_reg_index);
        WRITE_CR(MPC_DSPCSIF_DSP_RANGE_START_ADDR, 0x1<<csif_debug_reg_index);
        
        //read DSP MPU start register
        READ_CR(ICC_DSPCSIF_DSP_RANGE_START_ADDR, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B5f000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
        
        READ_CR(IMC_DSPCSIF_DSP_RANGE_START_ADDR, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B60000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
        
        READ_CR(MPC_DSPCSIF_DSP_RANGE_START_ADDR, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B61000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
    }
    
    //for DSP MPU size test
    for(csif_debug_reg_index=0; csif_debug_reg_index<8; csif_debug_reg_index++)
    {
        //write DSP MPU size register
        WRITE_CR(ICC_DSPCSIF_DSP_RANGE_SIZE, 0x1<<csif_debug_reg_index);
        WRITE_CR(IMC_DSPCSIF_DSP_RANGE_SIZE, 0x1<<csif_debug_reg_index);
        WRITE_CR(MPC_DSPCSIF_DSP_RANGE_SIZE, 0x1<<csif_debug_reg_index);
        
        //read DSP MPU size register
        READ_CR(ICC_DSPCSIF_DSP_RANGE_SIZE, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B62000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
        
        READ_CR(IMC_DSPCSIF_DSP_RANGE_SIZE, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B63000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
        
        READ_CR(MPC_DSPCSIF_DSP_RANGE_SIZE, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B64000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
    }
    
     //for CR4 MPU start test
    for(csif_debug_reg_index=0; csif_debug_reg_index<8; csif_debug_reg_index++)
    {
        //write CR4 MPU start register
        WRITE_CR(ICC_DSPCSIF_CR4_RANGE_START_ADDR, 0x1<<csif_debug_reg_index);
        WRITE_CR(IMC_DSPCSIF_CR4_RANGE_START_ADDR, 0x1<<csif_debug_reg_index);
        WRITE_CR(MPC_DSPCSIF_CR4_RANGE_START_ADDR, 0x1<<csif_debug_reg_index);
        
        //read CR4 MPU start register
        READ_CR(ICC_DSPCSIF_CR4_RANGE_START_ADDR, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B65000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
        
        READ_CR(IMC_DSPCSIF_CR4_RANGE_START_ADDR, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B66000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
        
        READ_CR(MPC_DSPCSIF_CR4_RANGE_START_ADDR, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B67000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
    }
    
    //for CR4 MPU size test
    for(csif_debug_reg_index=0; csif_debug_reg_index<8; csif_debug_reg_index++)
    {
        //write CR4 MPU size register
        WRITE_CR(ICC_DSPCSIF_CR4_RANGE_SIZE, 0x1<<csif_debug_reg_index);
        WRITE_CR(IMC_DSPCSIF_CR4_RANGE_SIZE, 0x1<<csif_debug_reg_index);
        WRITE_CR(MPC_DSPCSIF_CR4_RANGE_SIZE, 0x1<<csif_debug_reg_index);
        
        //read CR4 MPU size register
        READ_CR(ICC_DSPCSIF_CR4_RANGE_SIZE, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B68000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
        
        READ_CR(IMC_DSPCSIF_CR4_RANGE_SIZE, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B69000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
        
        READ_CR(MPC_DSPCSIF_CR4_RANGE_SIZE, index);
        if(index!= (0x1<<csif_debug_reg_index) )
        {
            //MDM_INT32_WRITE(0xB5B6a000+csif_debug_reg_index);
            //MDM_TM_END_FAIL_WRITE;
            ASSERT(0);
        }
    }
  
    //case2: Error exception: overflow interrupt testing
    csif_pretest_case++;
    
    //CSIF_Init();
    
    //MDM_INT32_WRITE(0xB5B6b000);
    //disable Coresonic interrupt
    WRITE_CR(ICC_DSPCSIF_S2C_IRQ_ENABLE, 0x0);  
    WRITE_CR(IMC_DSPCSIF_S2C_IRQ_ENABLE, 0x0); 
    WRITE_CR(MPC_DSPCSIF_S2C_IRQ_ENABLE, 0x0);
    
    //enable overflow error type
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x1);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x1);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x1);
    
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<32; csif_debug_interrupt_index++)
    {
        WRITE_CR(ICC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index));  
        WRITE_CR(ICC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index)); 
        WRITE_CR(IMC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index));
        WRITE_CR(IMC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index));  
        WRITE_CR(MPC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index)); 
        WRITE_CR(MPC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index));    
    }
    for(index=0; index<10; index++)
    {
        count = count + index;
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<32; csif_debug_interrupt_index++)
    {
        WRITE_CR(ICC_DSPCSIF_ERROR_C2S_OVFL_CLR, (0x1<<csif_debug_interrupt_index));  
        WRITE_CR(IMC_DSPCSIF_ERROR_C2S_OVFL_CLR, (0x1<<csif_debug_interrupt_index)); 
        WRITE_CR(MPC_DSPCSIF_ERROR_C2S_OVFL_CLR, (0x1<<csif_debug_interrupt_index));    
    }
    for(index=0; index<10; index++)
    {
        count = count + index;
    }
    
    //disable overflow error type
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<32; csif_debug_interrupt_index++)
    {
        WRITE_CR(ICC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index));  
        WRITE_CR(ICC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index)); 
        WRITE_CR(IMC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index));
        WRITE_CR(IMC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index));  
        WRITE_CR(MPC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index)); 
        WRITE_CR(MPC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index));    
    }
    for(index=0; index<10; index++)
    {
        count = count + index;
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<32; csif_debug_interrupt_index++)
    {
        WRITE_CR(ICC_DSPCSIF_ERROR_C2S_OVFL_CLR, (0x1<<csif_debug_interrupt_index));  
        WRITE_CR(IMC_DSPCSIF_ERROR_C2S_OVFL_CLR, (0x1<<csif_debug_interrupt_index)); 
        WRITE_CR(MPC_DSPCSIF_ERROR_C2S_OVFL_CLR, (0x1<<csif_debug_interrupt_index));    
    }
    for(index=0; index<10; index++)
    {
        count = count + index;
    }
    
    //enable conflict error type
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x4);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x4);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x4);
    
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<32; csif_debug_interrupt_index++)
    {
        WRITE_CR(ICC_DSPCSIF_GPI_C_SET, (0x1<<csif_debug_interrupt_index));  
        WRITE_CR(IMC_DSPCSIF_GPI_C_SET, (0x1<<csif_debug_interrupt_index)); 
        WRITE_CR(MPC_DSPCSIF_GPI_C_SET, (0x1<<csif_debug_interrupt_index));   

        WRITE_CR(ICC_DSPCSIF_GPI_C_CLEAR, (0x1<<csif_debug_interrupt_index));  
        WRITE_CR(IMC_DSPCSIF_GPI_C_CLEAR, (0x1<<csif_debug_interrupt_index)); 
        WRITE_CR(MPC_DSPCSIF_GPI_C_CLEAR, (0x1<<csif_debug_interrupt_index));  
        
        WRITE_CR(ICC_DSPCSIF_ERROR_ACD_CONFLICT_CLR, (0x1<<csif_debug_interrupt_index));  
        WRITE_CR(IMC_DSPCSIF_ERROR_ACD_CONFLICT_CLR, (0x1<<csif_debug_interrupt_index)); 
        WRITE_CR(MPC_DSPCSIF_ERROR_ACD_CONFLICT_CLR, (0x1<<csif_debug_interrupt_index));  
    }
    for(index=0; index<10; index++)
    {
        count = count + index;
    }
    
    //disable conflict error type
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<32; csif_debug_interrupt_index++)
    {
        WRITE_CR(ICC_DSPCSIF_GPI_C_SET, (0x1<<csif_debug_interrupt_index));  
        WRITE_CR(IMC_DSPCSIF_GPI_C_SET, (0x1<<csif_debug_interrupt_index)); 
        WRITE_CR(MPC_DSPCSIF_GPI_C_SET, (0x1<<csif_debug_interrupt_index));   

        WRITE_CR(ICC_DSPCSIF_GPI_C_CLEAR, (0x1<<csif_debug_interrupt_index));  
        WRITE_CR(IMC_DSPCSIF_GPI_C_CLEAR, (0x1<<csif_debug_interrupt_index)); 
        WRITE_CR(MPC_DSPCSIF_GPI_C_CLEAR, (0x1<<csif_debug_interrupt_index));  
        
        WRITE_CR(ICC_DSPCSIF_ERROR_ACD_CONFLICT_CLR, (0x1<<csif_debug_interrupt_index));  
        WRITE_CR(IMC_DSPCSIF_ERROR_ACD_CONFLICT_CLR, (0x1<<csif_debug_interrupt_index)); 
        WRITE_CR(MPC_DSPCSIF_ERROR_ACD_CONFLICT_CLR, (0x1<<csif_debug_interrupt_index));  
    }
    for(index=0; index<10; index++)
    {
        count = count + index;
    }

    WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xA0000002);
    WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xA0000002);
    WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xA0000002);

//    #if defined(CSIF_NEW_TEST)
    //for MPU violate exception
    
    //DP WMPU test
    //enable mpu error type
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x8);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x8);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x8);
    
    WRITE_CR(ICC_DSPCSIF_CR4_RANGE_START_ADDR, 0x00000000);
    WRITE_CR(ICC_DSPCSIF_CR4_RANGE_SIZE, ICC_DSM_LEN);
    WRITE_CR(IMC_DSPCSIF_CR4_RANGE_START_ADDR, 0x00000000);
    WRITE_CR(IMC_DSPCSIF_CR4_RANGE_SIZE, IMC_DSM_LEN);
    WRITE_CR(MPC_DSPCSIF_CR4_RANGE_START_ADDR, 0x00000000);
    WRITE_CR(MPC_DSPCSIF_CR4_RANGE_SIZE, MPC_DSM_LEN);
    //test ICC
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<ICC_DSM_LEN; csif_debug_interrupt_index++)
    {
        //write illegal address
        *(csif_debug_icc_sram_addr+(csif_debug_interrupt_index)) = 0x12345678;
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR, icc_error_addr);
        
        if( (icc_error_addr != csif_debug_interrupt_index))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != (0x8)){
            ASSERT(0);
        }
        WRITE_CR(ICC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR_CLR, 0x1);
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != 0){
            ASSERT(0);
        }        
        READ_CR(ICC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR, icc_error_addr);
        
        if( (icc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<IMC_DSM_LEN; csif_debug_interrupt_index++)
    {
        //write illegal address
        *(csif_debug_imc_sram_addr+(csif_debug_interrupt_index)) = 0x12345678;
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR, imc_error_addr);
        
        if( (imc_error_addr != csif_debug_interrupt_index))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != (0x8)){
            ASSERT(0);
        }        
        WRITE_CR(IMC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR_CLR, 0x1);
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(IMC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR, imc_error_addr);
        
        if( (imc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<MPC_DSM_LEN; csif_debug_interrupt_index++)
    {
        //write illegal address
        *(csif_debug_mpc_sram_addr+(csif_debug_interrupt_index)) = 0x12345678;
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR, mpc_error_addr);
        
        if( (mpc_error_addr != csif_debug_interrupt_index))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != (0x8)){
            ASSERT(0);
        }        
        WRITE_CR(MPC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR_CLR, 0x1);
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != 0){
            ASSERT(0);
        }        
        READ_CR(MPC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR, mpc_error_addr);
        
        if( (mpc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }
    //MDM_TM_END_SUCC_WRITE;
    WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xA0000003);
    WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xA0000003);
    WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xA0000003);
    
    //DP RMPU test
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<8);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<8);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<8);
    
    WRITE_CR(ICC_DSPCSIF_CR4_READ_MPU_RANGE_START_ADDR, 0x00000000);
    WRITE_CR(ICC_DSPCSIF_CR4_READ_MPU_RANGE_SIZE, ICC_DSM_LEN);
    WRITE_CR(IMC_DSPCSIF_CR4_READ_MPU_RANGE_START_ADDR, 0x00000000);
    WRITE_CR(IMC_DSPCSIF_CR4_READ_MPU_RANGE_SIZE, IMC_DSM_LEN);
    WRITE_CR(MPC_DSPCSIF_CR4_READ_MPU_RANGE_START_ADDR, 0x00000000);
    WRITE_CR(MPC_DSPCSIF_CR4_READ_MPU_RANGE_SIZE, MPC_DSM_LEN);
    
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<ICC_DSM_LEN; csif_debug_interrupt_index++)
    {
        //write illegal address
        icc_mpu_buffer = *(csif_debug_icc_sram_addr+(csif_debug_interrupt_index));
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(ICC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR, icc_error_addr);
        
        if( (icc_error_addr != csif_debug_interrupt_index))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != (0x1<<8)){
            ASSERT(0);
        }
        WRITE_CR(ICC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(ICC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR, icc_error_addr);
        
        if( (icc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<IMC_DSM_LEN; csif_debug_interrupt_index++)
    {
        //write illegal address
        imc_mpu_buffer = *(csif_debug_imc_sram_addr+(csif_debug_interrupt_index));
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(IMC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR, imc_error_addr);
        
        if( (imc_error_addr != csif_debug_interrupt_index))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != (0x1<<8)){
            ASSERT(0);
        }        
        WRITE_CR(IMC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(IMC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR, imc_error_addr);
        
        if( (imc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<MPC_DSM_LEN; csif_debug_interrupt_index++)
    {
        //write illegal address
        mpc_mpu_buffer = *(csif_debug_mpc_sram_addr+(csif_debug_interrupt_index));
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(MPC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR, mpc_error_addr);
        
        if( (mpc_error_addr != csif_debug_interrupt_index))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != (0x1<<8)){
            ASSERT(0);
        }        
        WRITE_CR(MPC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != 0){
            ASSERT(0);
        }        
        READ_CR(MPC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR, mpc_error_addr);
        
        if( (mpc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }    
    WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xA0000004);
    WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xA0000004);
    WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xA0000004);
 
    //set SP region 
    WRITE_CR(ICC_DSPCSIF_POLLING_MODE_RANGE, ((ICC_DSM_LEN)));
    WRITE_CR(IMC_DSPCSIF_POLLING_MODE_RANGE, ((IMC_DSM_LEN)));
    WRITE_CR(MPC_DSPCSIF_POLLING_MODE_RANGE, ((MPC_DSM_LEN)));
    
    //SP RMPU test
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<14|0x1<<8|0x8);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<14|0x1<<8|0x8);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<14|0x1<<8|0x8);
    
    WRITE_CR(ICC_DSPCSIF_CR4_POL_WMPU_START_ADDR, 0x00000000);
    WRITE_CR(ICC_DSPCSIF_CR4_POL_WMPU_SIZE, ((ICC_DSM_LEN)));
    WRITE_CR(IMC_DSPCSIF_CR4_POL_WMPU_START_ADDR, 0x00000000);
    WRITE_CR(IMC_DSPCSIF_CR4_POL_WMPU_SIZE, ((IMC_DSM_LEN)));
    WRITE_CR(MPC_DSPCSIF_CR4_POL_WMPU_START_ADDR, 0x00000000);
    WRITE_CR(MPC_DSPCSIF_CR4_POL_WMPU_SIZE, ((MPC_DSM_LEN)));
    //test ICC
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<(ICC_DSM_LEN); csif_debug_interrupt_index++)
    { 
        //write illegal address
        *(csif_debug_icc_sram_addr+(csif_debug_interrupt_index)) = 0x12345678;
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(ICC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR, icc_error_addr);
        
        if((icc_error_addr != csif_debug_interrupt_index))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != (0x1<<14)){
            ASSERT(0);
        }        
        WRITE_CR(ICC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(ICC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR, icc_error_addr);
        
        if((icc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<((IMC_DSM_LEN)); csif_debug_interrupt_index++)
    {
        //write illegal address
        *(csif_debug_imc_sram_addr+(csif_debug_interrupt_index)) = 0x12345678;
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(IMC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR, imc_error_addr);
        
        if( (imc_error_addr != csif_debug_interrupt_index))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != (0x1<<14)){
            ASSERT(0);
        }
        WRITE_CR(IMC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(IMC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR, imc_error_addr);
        
        if( (imc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<(MPC_DSM_LEN); csif_debug_interrupt_index++)
    {
        //write illegal address
        *(csif_debug_mpc_sram_addr+(csif_debug_interrupt_index)) = 0x12345678;
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(MPC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR, mpc_error_addr);
        
        if( (mpc_error_addr != csif_debug_interrupt_index))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != (0x1<<14)){
            ASSERT(0);
        }        
        WRITE_CR(MPC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != 0){
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR, mpc_error_addr);
        
        if( (mpc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }
    WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xA0000005);
    WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xA0000005);
    WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xA0000005);
    
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<15|0x1<<8|0x8);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<15|0x1<<8|0x8);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<15|0x1<<8|0x8);
    
    WRITE_CR(ICC_DSPCSIF_CR4_POL_RMPU_START_ADDR, 0x00000000);
    WRITE_CR(ICC_DSPCSIF_CR4_POL_RMPU_SIZE, ((ICC_DSM_LEN)));
    WRITE_CR(IMC_DSPCSIF_CR4_POL_RMPU_START_ADDR, 0x00000000);
    WRITE_CR(IMC_DSPCSIF_CR4_POL_RMPU_SIZE, ((IMC_DSM_LEN)));
    WRITE_CR(MPC_DSPCSIF_CR4_POL_RMPU_START_ADDR, 0x00000000);
    WRITE_CR(MPC_DSPCSIF_CR4_POL_RMPU_SIZE, ((MPC_DSM_LEN)));
    //test ICC
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<((ICC_DSM_LEN)); csif_debug_interrupt_index++)
    {
        //write illegal address
        icc_mpu_buffer = *(csif_debug_icc_sram_addr+(csif_debug_interrupt_index));
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(ICC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR, icc_error_addr);
        
        if( (icc_error_addr != csif_debug_interrupt_index))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != (0x1<<15)){
            ASSERT(0);
        }        
        WRITE_CR(ICC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(ICC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR, icc_error_addr);
        
        if( (icc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<(IMC_DSM_LEN); csif_debug_interrupt_index++)
    {
        //write illegal address
        imc_mpu_buffer = *(csif_debug_imc_sram_addr+(csif_debug_interrupt_index));
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(IMC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR, imc_error_addr);
        
        if( (imc_error_addr != csif_debug_interrupt_index))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != (0x1<<15)){
            ASSERT(0);
        }
        WRITE_CR(IMC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(IMC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR, imc_error_addr);
        
        if( (imc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<(MPC_DSM_LEN); csif_debug_interrupt_index++)
    {
        //write illegal address
        mpc_mpu_buffer = *(csif_debug_mpc_sram_addr+(csif_debug_interrupt_index));
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(MPC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR, mpc_error_addr);
        
        if( (mpc_error_addr != csif_debug_interrupt_index))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != (0x1<<15)){
            ASSERT(0);
        }        
        WRITE_CR(MPC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != 0){
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR, mpc_error_addr);
        
        if( (mpc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }    

    WRITE_CR(ICC_DSPCSIF_CR4_RANGE_SIZE, 0);
    WRITE_CR(IMC_DSPCSIF_CR4_RANGE_SIZE, 0);
    WRITE_CR(MPC_DSPCSIF_CR4_RANGE_SIZE, 0);

    WRITE_CR(ICC_DSPCSIF_CR4_READ_MPU_RANGE_SIZE, 0);
    WRITE_CR(IMC_DSPCSIF_CR4_READ_MPU_RANGE_SIZE, 0);
    WRITE_CR(MPC_DSPCSIF_CR4_READ_MPU_RANGE_SIZE, 0);

    WRITE_CR(ICC_DSPCSIF_CR4_POL_RMPU_SIZE, 0);
    WRITE_CR(IMC_DSPCSIF_CR4_POL_RMPU_SIZE, 0);
    WRITE_CR(MPC_DSPCSIF_CR4_POL_RMPU_SIZE, 0);

    WRITE_CR(ICC_DSPCSIF_CR4_POL_WMPU_SIZE, 0);
    WRITE_CR(IMC_DSPCSIF_CR4_POL_WMPU_SIZE, 0);
    WRITE_CR(MPC_DSPCSIF_CR4_POL_WMPU_SIZE, 0);

    WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xA0000006);
    WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xA0000006);
    WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xA0000006);
    //undefined addres test
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 1<<4);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 1<<4);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 1<<4);
// temp bypass
#if !defined(TEMP_BYPASS)
    for(csif_debug_interrupt_index=ICC_CSIF_BASE+(0xE4); csif_debug_interrupt_index<(ICC_CSIF_DSM_BASE); csif_debug_interrupt_index+= CSIF_ADD_CNT)
    {
        //write illegal address
        *(((volatile unsigned int*)csif_debug_interrupt_index)) = 0x12345678;
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(ICC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, icc_error_addr);
        if( (icc_error_addr != ((csif_debug_interrupt_index-ICC_CSIF_BASE)/4) ))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != (0x1<<4)){
            ASSERT(0);
        }        
        WRITE_CR(ICC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(ICC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, icc_error_addr);
        if( (icc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }

    for(csif_debug_interrupt_index=IMC_CSIF_BASE+(0xE4); csif_debug_interrupt_index<(IMC_CSIF_DSM_BASE); csif_debug_interrupt_index+= CSIF_ADD_CNT)
    {
        //write illegal address
        *(((volatile unsigned int*)csif_debug_interrupt_index)) = 0x12345678;
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(IMC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, imc_error_addr);
        if( (imc_error_addr != ((csif_debug_interrupt_index-IMC_CSIF_BASE)/4) ))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != (0x1<<4)){
            ASSERT(0);
        }        
        WRITE_CR(IMC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(IMC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, imc_error_addr);
        if( (imc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }

    for(csif_debug_interrupt_index=MPC_CSIF_BASE+(0xE4); csif_debug_interrupt_index<(MPC_CSIF_DSM_BASE); csif_debug_interrupt_index+= CSIF_ADD_CNT)
    {
        //write illegal address
        *(((volatile unsigned int*)csif_debug_interrupt_index)) = 0x12345678;
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(MPC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, mpc_error_addr);
        if( (mpc_error_addr != ((csif_debug_interrupt_index-MPC_CSIF_BASE)/4) ))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != (0x1<<4)){
            ASSERT(0);
        }        
        WRITE_CR(MPC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(MPC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, mpc_error_addr);
        if( (mpc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }
#endif
    WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xA0000007);
    WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xA0000007);
    WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xA0000007);
    //undefined addres test
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 1<<5);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 1<<5);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 1<<5);

    for(csif_debug_interrupt_index=ICC_CSIF_BASE+(0xE4); csif_debug_interrupt_index<(ICC_CSIF_DSM_BASE); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        //write illegal address
        icc_mpu_buffer = *(((volatile unsigned int*)csif_debug_interrupt_index));
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        if(icc_mpu_buffer != 0x0){
            #if !defined(TEMP_BYPASS)
            ASSERT(0);
            #endif
        }
        READ_CR(ICC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, icc_error_addr);
        if( (icc_error_addr != ((csif_debug_interrupt_index-ICC_CSIF_BASE)/4) ))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != (0x1<<5)){
            ASSERT(0);
        }        
        WRITE_CR(ICC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(ICC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, icc_error_addr);
        if( (icc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }

    for(csif_debug_interrupt_index=IMC_CSIF_BASE+(0xE4); csif_debug_interrupt_index<(IMC_CSIF_DSM_BASE); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        //write illegal address
        imc_mpu_buffer = *(((volatile unsigned int*)csif_debug_interrupt_index));
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        if(imc_mpu_buffer != 0x0){
            #if !defined(TEMP_BYPASS)
            ASSERT(0);
            #endif
        }
        READ_CR(IMC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, imc_error_addr);
        if( (imc_error_addr != ((csif_debug_interrupt_index-IMC_CSIF_BASE)/4) ))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != (0x1<<5)){
            ASSERT(0);
        }        
        WRITE_CR(IMC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(IMC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, imc_error_addr);
        if( (imc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }

    for(csif_debug_interrupt_index=MPC_CSIF_BASE+(0xE4); csif_debug_interrupt_index<(MPC_CSIF_DSM_BASE); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        //write illegal address
        mpc_mpu_buffer = *(((volatile unsigned int*)csif_debug_interrupt_index));
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        if(mpc_mpu_buffer != 0x0){
            #if !defined(TEMP_BYPASS)
            ASSERT(0);
            #endif
        }
        READ_CR(MPC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, mpc_error_addr);
        if( (mpc_error_addr != ((csif_debug_interrupt_index-MPC_CSIF_BASE)/4) ))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != (0x1<<5)){
            ASSERT(0);
        }        
        WRITE_CR(MPC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(MPC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, mpc_error_addr);
        if( (mpc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }
    
    WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xA0000008);
    WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xA0000008);
    WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xA0000008);
    //undefined addres test
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 1<<9);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 1<<9);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 1<<9);

    for(csif_debug_interrupt_index=ICC_CSIF_DSM_BASE+(ICC_DSM_LEN*4); csif_debug_interrupt_index<(ICC_CSIF_DSM_BASE+0x40000); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        //write illegal address
        *(((volatile unsigned int*)csif_debug_interrupt_index)) = 0x12345678;
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(ICC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, icc_error_addr);
        if( (icc_error_addr != ((csif_debug_interrupt_index-ICC_CSIF_DSM_BASE)/4) ))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != (0x1<<9)){
            ASSERT(0);
        }        
        WRITE_CR(ICC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(ICC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, icc_error_addr);
        if( (icc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }

    for(csif_debug_interrupt_index=IMC_CSIF_DSM_BASE+(IMC_DSM_LEN*4); csif_debug_interrupt_index<(IMC_CSIF_DSM_BASE+0x40000); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        //write illegal address
        *(((volatile unsigned int*)csif_debug_interrupt_index)) = 0x12345678;
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(IMC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, imc_error_addr);
        if( (imc_error_addr != ((csif_debug_interrupt_index-IMC_CSIF_DSM_BASE)/4) ))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != (0x1<<9)){
            ASSERT(0);
        }        
        WRITE_CR(IMC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(IMC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, imc_error_addr);
        if( (imc_error_addr != 0))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }

    for(csif_debug_interrupt_index=MPC_CSIF_DSM_BASE+(MPC_DSM_LEN*4); csif_debug_interrupt_index<(MPC_CSIF_DSM_BASE+0x40000); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        //write illegal address
        *(((volatile unsigned int*)csif_debug_interrupt_index)) = 0x12345678;
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        READ_CR(MPC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, mpc_error_addr);
        if( (mpc_error_addr != ((csif_debug_interrupt_index-MPC_CSIF_DSM_BASE)/4) ))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != (0x1<<9)){
            ASSERT(0);
        }        
        WRITE_CR(MPC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(MPC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, mpc_error_addr);
        if( (mpc_error_addr != (0) ))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }

    WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xA0000009);
    WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xA0000009);
    WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xA0000009);
    //undefined addres test
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 1<<10);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 1<<10);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 1<<10);

    for(csif_debug_interrupt_index=ICC_CSIF_DSM_BASE+(ICC_DSM_LEN*4); csif_debug_interrupt_index<(ICC_CSIF_DSM_BASE+0x40000); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        //write illegal address
        icc_mpu_buffer = *(((volatile unsigned int*)csif_debug_interrupt_index));
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        if(icc_mpu_buffer != 0x0){
            #if !defined(TEMP_BYPASS)
            ASSERT(0);
            #endif
        }
        READ_CR(ICC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, icc_error_addr);
        if( (icc_error_addr != ((csif_debug_interrupt_index-ICC_CSIF_DSM_BASE)/4) ))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != (0x1<<10)){
            ASSERT(0);
        }        
        WRITE_CR(ICC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(ICC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, icc_error_addr);
        if( icc_error_addr != 0 )
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }

    for(csif_debug_interrupt_index=IMC_CSIF_DSM_BASE+(IMC_DSM_LEN*4); csif_debug_interrupt_index<(IMC_CSIF_DSM_BASE+0x40000); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        //write illegal address
        imc_mpu_buffer = *(((volatile unsigned int*)csif_debug_interrupt_index));
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        if(imc_mpu_buffer != 0x0){
            #if !defined(TEMP_BYPASS)
            ASSERT(0);
            #endif
        }
        READ_CR(IMC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, imc_error_addr);
        if( (imc_error_addr != ((csif_debug_interrupt_index-IMC_CSIF_DSM_BASE)/4) ))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != (0x1<<10)){
            ASSERT(0);
        }        
        WRITE_CR(IMC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(IMC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, imc_error_addr);
        if( imc_error_addr != 0)
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }

    for(csif_debug_interrupt_index=MPC_CSIF_DSM_BASE+(MPC_DSM_LEN*4); csif_debug_interrupt_index<(MPC_CSIF_DSM_BASE+0x40000); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        //write illegal address
        mpc_mpu_buffer = *(((volatile unsigned int*)csif_debug_interrupt_index));
        
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        if(mpc_mpu_buffer != 0x0){
            #if !defined(TEMP_BYPASS)
            ASSERT(0);
            #endif
        }
        READ_CR(MPC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, mpc_error_addr);
        if( (mpc_error_addr != ((csif_debug_interrupt_index-MPC_CSIF_DSM_BASE)/4) ))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != (0x1<<10)){
            ASSERT(0);
        }        
        WRITE_CR(MPC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(MPC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, mpc_error_addr);
        if( (mpc_error_addr != (0) ))
        {
            //MDM_INT32_WRITE(0xB5DD0000+csif_debug_interrupt_index);
            ASSERT(0);
        }
    }
    //#endif //CSIF_NEW_TEST
}
#endif //CSIF_HW_TEST

volatile kal_uint32 exception_id = 0;
volatile kal_uint32 icc_exception = 0;
volatile kal_uint32 imc_exception = 0;
volatile kal_uint32 mpc_exception = 0;
void CSIF_SSDVT_EXCEPTION(void)
{
    WRITE_CR(ICC_DSPCSIF_POLLING_MODE_RANGE, 0);
    WRITE_CR(IMC_DSPCSIF_POLLING_MODE_RANGE, 0);
    WRITE_CR(MPC_DSPCSIF_POLLING_MODE_RANGE, 0);

    volatile kal_uint32 index=0;
    //overflow test
    exception_id = 0;
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x1);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x1);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x1);
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<32; csif_debug_interrupt_index++)
    {
        icc_exception = 0xffffffff;
        WRITE_CR(ICC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index));  
        WRITE_CR(ICC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index)); 
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(icc_exception != (0x1<<csif_debug_interrupt_index)){
            ASSERT(0);
        }

        imc_exception = 0xffffffff;
        WRITE_CR(IMC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index));
        WRITE_CR(IMC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index));  
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(imc_exception != (0x1<<csif_debug_interrupt_index)){
            ASSERT(0);
        }

        mpc_exception = 0xffffffff;
        WRITE_CR(MPC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index)); 
        WRITE_CR(MPC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index));    
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(mpc_exception != (0x1<<csif_debug_interrupt_index)){
            ASSERT(0);
        }
    }
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    //dp write
    exception_id = 1;
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x8);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x8);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x8);
    WRITE_CR(ICC_DSPCSIF_CR4_RANGE_START_ADDR, 0x00000000);
    WRITE_CR(ICC_DSPCSIF_CR4_RANGE_SIZE, ICC_DSM_LEN);
    WRITE_CR(IMC_DSPCSIF_CR4_RANGE_START_ADDR, 0x00000000);
    WRITE_CR(IMC_DSPCSIF_CR4_RANGE_SIZE, IMC_DSM_LEN);
    WRITE_CR(MPC_DSPCSIF_CR4_RANGE_START_ADDR, 0x00000000);
    WRITE_CR(MPC_DSPCSIF_CR4_RANGE_SIZE, MPC_DSM_LEN);

    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<ICC_DSM_LEN; csif_debug_interrupt_index++)
    {
        icc_exception = 0x123;
        *(csif_debug_icc_sram_addr+(csif_debug_interrupt_index)) = 0x12345678;
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(icc_exception != 0xFF){
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<IMC_DSM_LEN; csif_debug_interrupt_index++)
    {
        imc_exception = 0x123;
        *(csif_debug_imc_sram_addr+(csif_debug_interrupt_index)) = 0x12345678;
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(imc_exception != 0xFF){
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<MPC_DSM_LEN; csif_debug_interrupt_index++)
    {
        mpc_exception = 0x123;
        *(csif_debug_mpc_sram_addr+(csif_debug_interrupt_index)) = 0x12345678;
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(mpc_exception != 0xFF){
            ASSERT(0);
        }
    }
    //dp read
    exception_id = 2;
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<8);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<8);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<8);
    
    WRITE_CR(ICC_DSPCSIF_CR4_READ_MPU_RANGE_START_ADDR, 0x00000000);
    WRITE_CR(ICC_DSPCSIF_CR4_READ_MPU_RANGE_SIZE, ICC_DSM_LEN);
    WRITE_CR(IMC_DSPCSIF_CR4_READ_MPU_RANGE_START_ADDR, 0x00000000);
    WRITE_CR(IMC_DSPCSIF_CR4_READ_MPU_RANGE_SIZE, IMC_DSM_LEN);
    WRITE_CR(MPC_DSPCSIF_CR4_READ_MPU_RANGE_START_ADDR, 0x00000000);
    WRITE_CR(MPC_DSPCSIF_CR4_READ_MPU_RANGE_SIZE, MPC_DSM_LEN);

    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<ICC_DSM_LEN; csif_debug_interrupt_index++)
    {
        icc_exception = 0x123;
        icc_mpu_buffer = *(csif_debug_icc_sram_addr+(csif_debug_interrupt_index));
        
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(icc_exception != 0xFF){
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<IMC_DSM_LEN; csif_debug_interrupt_index++)
    {
        imc_exception = 0x123;
        imc_mpu_buffer = *(csif_debug_imc_sram_addr+(csif_debug_interrupt_index));
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(imc_exception != 0xFF){
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<MPC_DSM_LEN; csif_debug_interrupt_index++)
    {
        mpc_exception = 0x123;
        mpc_mpu_buffer = *(csif_debug_mpc_sram_addr+(csif_debug_interrupt_index));
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(mpc_exception != 0xFF){
            ASSERT(0);
        }
    }    
    //sp write
    exception_id = 3;
    WRITE_CR(ICC_DSPCSIF_POLLING_MODE_RANGE, ((ICC_DSM_LEN)));
    WRITE_CR(IMC_DSPCSIF_POLLING_MODE_RANGE, ((IMC_DSM_LEN)));
    WRITE_CR(MPC_DSPCSIF_POLLING_MODE_RANGE, ((MPC_DSM_LEN)));
    
    //SP RMPU test
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<14|0x1<<8|0x8);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<14|0x1<<8|0x8);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<14|0x1<<8|0x8);
    
    WRITE_CR(ICC_DSPCSIF_CR4_POL_WMPU_START_ADDR, 0x00000000);
    WRITE_CR(ICC_DSPCSIF_CR4_POL_WMPU_SIZE, ((ICC_DSM_LEN)));
    WRITE_CR(IMC_DSPCSIF_CR4_POL_WMPU_START_ADDR, 0x00000000);
    WRITE_CR(IMC_DSPCSIF_CR4_POL_WMPU_SIZE, ((IMC_DSM_LEN)));
    WRITE_CR(MPC_DSPCSIF_CR4_POL_WMPU_START_ADDR, 0x00000000);
    WRITE_CR(MPC_DSPCSIF_CR4_POL_WMPU_SIZE, ((MPC_DSM_LEN)));

    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<(ICC_DSM_LEN); csif_debug_interrupt_index++)
    { 
        icc_exception = 0x123;
        *(csif_debug_icc_sram_addr+(csif_debug_interrupt_index)) = 0x12345678;
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(icc_exception != 0xFF){
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<((IMC_DSM_LEN)); csif_debug_interrupt_index++)
    {
        imc_exception = 0x123;
        *(csif_debug_imc_sram_addr+(csif_debug_interrupt_index)) = 0x12345678;
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(imc_exception != 0xFF){
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<(MPC_DSM_LEN); csif_debug_interrupt_index++)
    {
        mpc_exception = 0x123;
        *(csif_debug_mpc_sram_addr+(csif_debug_interrupt_index)) = 0x12345678;
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(mpc_exception != 0xFF){
            ASSERT(0);
        }
    }
    //sp read
    exception_id = 4;
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<15|0x1<<8|0x8);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<15|0x1<<8|0x8);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<15|0x1<<8|0x8);
    
    WRITE_CR(ICC_DSPCSIF_CR4_POL_RMPU_START_ADDR, 0x00000000);
    WRITE_CR(ICC_DSPCSIF_CR4_POL_RMPU_SIZE, ((ICC_DSM_LEN)));
    WRITE_CR(IMC_DSPCSIF_CR4_POL_RMPU_START_ADDR, 0x00000000);
    WRITE_CR(IMC_DSPCSIF_CR4_POL_RMPU_SIZE, ((IMC_DSM_LEN)));
    WRITE_CR(MPC_DSPCSIF_CR4_POL_RMPU_START_ADDR, 0x00000000);
    WRITE_CR(MPC_DSPCSIF_CR4_POL_RMPU_SIZE, ((MPC_DSM_LEN)));

    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<((ICC_DSM_LEN)); csif_debug_interrupt_index++)
    {
        icc_exception = 0x123;
        icc_mpu_buffer = *(csif_debug_icc_sram_addr+(csif_debug_interrupt_index));
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(icc_exception != 0xFF){
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<(IMC_DSM_LEN); csif_debug_interrupt_index++)
    {
        imc_exception = 0x123;
        imc_mpu_buffer = *(csif_debug_imc_sram_addr+(csif_debug_interrupt_index));
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(imc_exception != 0xFF){
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<(MPC_DSM_LEN); csif_debug_interrupt_index++)
    {
        mpc_exception = 0x123;
        mpc_mpu_buffer = *(csif_debug_mpc_sram_addr+(csif_debug_interrupt_index));
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(mpc_exception != 0xFF){
            ASSERT(0);
        }
    }    

    WRITE_CR(ICC_DSPCSIF_CR4_RANGE_SIZE, 0);
    WRITE_CR(IMC_DSPCSIF_CR4_RANGE_SIZE, 0);
    WRITE_CR(MPC_DSPCSIF_CR4_RANGE_SIZE, 0);

    WRITE_CR(ICC_DSPCSIF_CR4_READ_MPU_RANGE_SIZE, 0);
    WRITE_CR(IMC_DSPCSIF_CR4_READ_MPU_RANGE_SIZE, 0);
    WRITE_CR(MPC_DSPCSIF_CR4_READ_MPU_RANGE_SIZE, 0);

    WRITE_CR(ICC_DSPCSIF_CR4_POL_RMPU_SIZE, 0);
    WRITE_CR(IMC_DSPCSIF_CR4_POL_RMPU_SIZE, 0);
    WRITE_CR(MPC_DSPCSIF_CR4_POL_RMPU_SIZE, 0);

    WRITE_CR(ICC_DSPCSIF_CR4_POL_WMPU_SIZE, 0);
    WRITE_CR(IMC_DSPCSIF_CR4_POL_WMPU_SIZE, 0);
    WRITE_CR(MPC_DSPCSIF_CR4_POL_WMPU_SIZE, 0);
    //DSR undefined write
    exception_id = 5;
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 1<<4);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 1<<4);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 1<<4);
#if !defined(TEMP_BYPASS)
    for(csif_debug_interrupt_index=ICC_CSIF_BASE+(0xE4); csif_debug_interrupt_index<(ICC_CSIF_DSM_BASE); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        icc_exception = 0x123;
        *(((volatile unsigned int*)csif_debug_interrupt_index)) = 0x12345678;
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(icc_exception != 0xFF){
            ASSERT(0);
        }
    }

    for(csif_debug_interrupt_index=IMC_CSIF_BASE+(0xE4); csif_debug_interrupt_index<(IMC_CSIF_DSM_BASE); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        imc_exception = 0x123;
        *(((volatile unsigned int*)csif_debug_interrupt_index)) = 0x12345678;
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(imc_exception != 0xFF){
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=MPC_CSIF_BASE+(0xE4); csif_debug_interrupt_index<(MPC_CSIF_DSM_BASE); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        mpc_exception = 0x123;
        *(((volatile unsigned int*)csif_debug_interrupt_index)) = 0x12345678;
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(mpc_exception != 0xFF){
            ASSERT(0);
        }
    }
#endif
    //DSR undefined read
    exception_id = 6;
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 1<<5);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 1<<5);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 1<<5);

    for(csif_debug_interrupt_index=ICC_CSIF_BASE+(0xE4); csif_debug_interrupt_index<(ICC_CSIF_DSM_BASE); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        icc_exception = 0x123;
        icc_mpu_buffer = *(((volatile unsigned int*)csif_debug_interrupt_index));
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(icc_mpu_buffer != 0x0){
            #if !defined(TEMP_BYPASS)
            ASSERT(0);
            #endif
        }
        if(icc_exception != 0xFF){
            ASSERT(0);
        }
    }

    for(csif_debug_interrupt_index=IMC_CSIF_BASE+(0xE4); csif_debug_interrupt_index<(IMC_CSIF_DSM_BASE); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        imc_exception = 0x123;
        imc_mpu_buffer = *(((volatile unsigned int*)csif_debug_interrupt_index));
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(imc_mpu_buffer != 0x0){
            #if !defined(TEMP_BYPASS)
            ASSERT(0);
            #endif
        }
        if(imc_exception != 0xFF){
            ASSERT(0);
        }
    }

    for(csif_debug_interrupt_index=MPC_CSIF_BASE+(0xE4); csif_debug_interrupt_index<(MPC_CSIF_DSM_BASE); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        mpc_exception = 0x123;
        mpc_mpu_buffer = *(((volatile unsigned int*)csif_debug_interrupt_index));
        for(index=0; index<100; index++)
        {
            count = count + index;
        }
        if(mpc_mpu_buffer != 0x0){
            #if !defined(TEMP_BYPASS)
            ASSERT(0);
            #endif
        }
        if(mpc_exception != 0xFF){
            ASSERT(0);
        }
    }
    //DSM undefined write
    exception_id = 7;
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 1<<9);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 1<<9);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 1<<9);

    for(csif_debug_interrupt_index=ICC_CSIF_DSM_BASE+(ICC_DSM_LEN*4); csif_debug_interrupt_index<(ICC_CSIF_DSM_BASE+0x40000); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        icc_exception = 0x123;
        *(((volatile unsigned int*)csif_debug_interrupt_index)) = 0x12345678;
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        if(icc_exception != 0xFF){
            ASSERT(0);
        }
    }
    for(csif_debug_interrupt_index=IMC_CSIF_DSM_BASE+(IMC_DSM_LEN*4); csif_debug_interrupt_index<(IMC_CSIF_DSM_BASE+0x40000); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        imc_exception = 0x123;
        *(((volatile unsigned int*)csif_debug_interrupt_index)) = 0x12345678;
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        if(imc_exception != 0xFF){
            ASSERT(0);
        }
    }

    for(csif_debug_interrupt_index=MPC_CSIF_DSM_BASE+(MPC_DSM_LEN*4); csif_debug_interrupt_index<(MPC_CSIF_DSM_BASE+0x40000); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        mpc_exception = 0x123;
        *(((volatile unsigned int*)csif_debug_interrupt_index)) = 0x12345678;
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        if(mpc_exception != 0xFF){
            ASSERT(0);
        }
    }
    //DSM undefined read
    exception_id = 8;
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 1<<10);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 1<<10);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 1<<10);

    for(csif_debug_interrupt_index=ICC_CSIF_DSM_BASE+(ICC_DSM_LEN*4); csif_debug_interrupt_index<(ICC_CSIF_DSM_BASE+0x40000); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        icc_exception = 0x123;
        icc_mpu_buffer = *(((volatile unsigned int*)csif_debug_interrupt_index));
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        if(icc_mpu_buffer != 0x0){
            #if !defined(TEMP_BYPASS)
            ASSERT(0);
            #endif
        }
        if(icc_exception != 0xFF){
            ASSERT(0);
        }
    }

    for(csif_debug_interrupt_index=IMC_CSIF_DSM_BASE+(IMC_DSM_LEN*4); csif_debug_interrupt_index<(IMC_CSIF_DSM_BASE+0x40000); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        imc_exception = 0x123;
        imc_mpu_buffer = *(((volatile unsigned int*)csif_debug_interrupt_index));
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        if(imc_mpu_buffer != 0x0){
            #if !defined(TEMP_BYPASS)
            ASSERT(0);
            #endif
        }
        if(imc_exception != 0xFF){
            ASSERT(0);
        }
    }

    for(csif_debug_interrupt_index=MPC_CSIF_DSM_BASE+(MPC_DSM_LEN*4); csif_debug_interrupt_index<(MPC_CSIF_DSM_BASE+0x40000); csif_debug_interrupt_index+=CSIF_ADD_CNT)
    {
        mpc_exception = 0x123;
        mpc_mpu_buffer = *(((volatile unsigned int*)csif_debug_interrupt_index));
        for(index=0; index<10; index++)
        {
            count = count + index;
        }
        if(mpc_mpu_buffer != 0x0){
            #if !defined(TEMP_BYPASS)
            ASSERT(0);
            #endif
        }
        if(mpc_exception != 0xFF){
            ASSERT(0);
        }
    }
    
}

/*
****************************************************************************************************************************
* CSIF_Interrupt_Test.
*
* This function is for interrupt test
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_Interrupt_Test(void)
{
//#if defined(CSIF_Interrupt_Test)
    volatile kal_uint32 index=0;
    volatile kal_uint32 count=0;
    
    //case3: handshake with Coresonic (interrupt testing)
    csif_pretest_case++;
    //MDM_INT32_WRITE(0xB5B6c000);

    READ_CR(ICC_DSPCSIF_TASK_ID, csif_debug_icc_handshake_ack_flag);
    READ_CR(IMC_DSPCSIF_TASK_ID, csif_debug_imc_handshake_ack_flag);
    READ_CR(MPC_DSPCSIF_TASK_ID, csif_debug_mpc_handshake_ack_flag);
    while( (csif_debug_icc_handshake_ack_flag != 0xFFFF0009) || (csif_debug_imc_handshake_ack_flag != 0xFFFF0009) || (csif_debug_mpc_handshake_ack_flag != 0xFFFF0009) )
    {
        #if defined(CSIF_TIME_OUT)
        if(csif_time_out++ > 1000)
        {
           ASSERT(0);
        }
        #endif
        READ_CR(ICC_DSPCSIF_TASK_ID, csif_debug_icc_handshake_ack_flag);
        READ_CR(IMC_DSPCSIF_TASK_ID, csif_debug_imc_handshake_ack_flag);
        READ_CR(MPC_DSPCSIF_TASK_ID, csif_debug_mpc_handshake_ack_flag);
    }
    
    //clear  Coresonic interrupt
    WRITE_CR(ICC_DSPCSIF_S2C_IRQ_CLR, 0xffffffff);  
    WRITE_CR(IMC_DSPCSIF_S2C_IRQ_CLR, 0xffffffff); 
    WRITE_CR(MPC_DSPCSIF_S2C_IRQ_CLR, 0xffffffff);
    
    //enable Coresonic interrupt
    WRITE_CR(ICC_DSPCSIF_S2C_IRQ_ENABLE, 0xfffffffe);  
    WRITE_CR(IMC_DSPCSIF_S2C_IRQ_ENABLE, 0xfffffffe); 
    WRITE_CR(MPC_DSPCSIF_S2C_IRQ_ENABLE, 0xfffffffe);
    
    //disable error type
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    
    //re-init CSIF HW
    //CSIF_Init();
    icc_csif_debug_interrupt_index = 1;
    imc_csif_debug_interrupt_index = 1;
    mpc_csif_debug_interrupt_index = 1;
    
    WRITE_CR(ICC_DSPCSIF_VAS_VALID, 0xFFFF000A);
    WRITE_CR(IMC_DSPCSIF_VAS_VALID, 0xFFFF000A);
    WRITE_CR(MPC_DSPCSIF_VAS_VALID, 0xFFFF000A);
    
    #if defined(CSIF_TIME_OUT)
    csif_time_out = 0;
    #endif
    //sync for interrupt test
    READ_CR(ICC_DSPCSIF_TASK_ID, csif_debug_icc_handshake_ack_flag);
    READ_CR(IMC_DSPCSIF_TASK_ID, csif_debug_imc_handshake_ack_flag);
    READ_CR(MPC_DSPCSIF_TASK_ID, csif_debug_mpc_handshake_ack_flag);
    while( (csif_debug_icc_handshake_ack_flag != 0xFFFF000B) || (csif_debug_imc_handshake_ack_flag != 0xFFFF000B) || (csif_debug_mpc_handshake_ack_flag != 0xFFFF000B) )
    {
        #if defined(CSIF_TIME_OUT)
        if(csif_time_out++ > 1000)
        {
           ASSERT(0);
        }
        #endif
        READ_CR(ICC_DSPCSIF_TASK_ID, csif_debug_icc_handshake_ack_flag);
        READ_CR(IMC_DSPCSIF_TASK_ID, csif_debug_imc_handshake_ack_flag);
        READ_CR(MPC_DSPCSIF_TASK_ID, csif_debug_mpc_handshake_ack_flag);
    }
    
    for(csif_debug_interrupt_index=0; csif_debug_interrupt_index<32; csif_debug_interrupt_index++)
    {
        WRITE_CR(ICC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index));  
        WRITE_CR(IMC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index)); 
        WRITE_CR(MPC_DSPCSIF_C2S_IRQ_SET, (0x1<<csif_debug_interrupt_index));
    }
    
    //add delay for interrupt handling
    for(count=0; count<100; count++)
    {
        index = index + count;
    }
    
    WRITE_CR(ICC_DSPCSIF_VAS_VALID, 0xFFFF000C);
    WRITE_CR(IMC_DSPCSIF_VAS_VALID, 0xFFFF000C);
    WRITE_CR(MPC_DSPCSIF_VAS_VALID, 0xFFFF000C);
    
    //MDM_TM_END_SUCC_WRITE; bit 0 in DSP is for core idle signal
    if(icc_csif_debug_interrupt_index != 32 || imc_csif_debug_interrupt_index!= 32 || mpc_csif_debug_interrupt_index != 32){
        //MDM_TM_END_FAIL_WRITE;
        ASSERT(0);
    }       
//#endif //CSIF_Interrupt_Test
}

volatile kal_uint32 icc_conflict_count = 0;
volatile kal_uint32 imc_conflict_count = 0;
volatile kal_uint32 mpc_conflict_count = 0;

void CSIF_Conflict_Test(void){
    volatile kal_uint32 index=0;
    volatile kal_uint32 count=0;
    volatile kal_uint32 icc_error_addr=0, imc_error_addr=0, mpc_error_addr=0;
    volatile kal_uint32 icc_mpu_buffer=0, imc_mpu_buffer=0, mpc_mpu_buffer=0;
    
    //sync for conflict test
    READ_CR(ICC_DSPCSIF_TASK_ID, csif_debug_icc_handshake_ack_flag);
    READ_CR(IMC_DSPCSIF_TASK_ID, csif_debug_imc_handshake_ack_flag);
    READ_CR(MPC_DSPCSIF_TASK_ID, csif_debug_mpc_handshake_ack_flag);
    while( (csif_debug_icc_handshake_ack_flag != 0xFFFF0003) || (csif_debug_imc_handshake_ack_flag != 0xFFFF0003) || (csif_debug_mpc_handshake_ack_flag != 0xFFFF0003) )
    {
        #if defined(CSIF_TIME_OUT)
        if(csif_time_out++ > 1000)
        {
           ASSERT(0);
        }
        #endif
        READ_CR(ICC_DSPCSIF_TASK_ID, csif_debug_icc_handshake_ack_flag);
        READ_CR(IMC_DSPCSIF_TASK_ID, csif_debug_imc_handshake_ack_flag);
        READ_CR(MPC_DSPCSIF_TASK_ID, csif_debug_mpc_handshake_ack_flag);
    }
    WRITE_CR(ICC_DSPCSIF_POLLING_MODE_RANGE, 0);
    WRITE_CR(IMC_DSPCSIF_POLLING_MODE_RANGE, 0);
    WRITE_CR(MPC_DSPCSIF_POLLING_MODE_RANGE, 0);
     
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, (1<<12));
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, (1<<12));
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, (1<<12));
    
    exception_id = 9;

    WRITE_CR(ICC_DSPCSIF_VAS_ACK, 0x0);
    WRITE_CR(ICC_DSPCSIF_VAS_VALID, 0xBABABABA);
    for(count = 0 ; count < 100; count++){
    }
    icc_exception = 0;
    icc_conflict_count = 0;    
    // icc write conflic test
    for(count = 0 ; count < 10000 ; count ++){
        *(((volatile unsigned int*)(ICC_CSIF_DSM_BASE+4))) = 0x12345678;
    }
    if( (icc_conflict_count == 0) || (icc_exception != 0xFF)){
        ASSERT(0);
    }
    for(count = 0, index = 0 ; count < 100 ; count ++ ){
        index = count + index;
    }
    icc_exception = 0;
    icc_conflict_count = 0;    
    // icc read conflic test
    for(count = 0 ; count < 10000 ; count ++){
        icc_mpu_buffer = *(((volatile unsigned int*)(ICC_CSIF_DSM_BASE+4)));
    }
    if( (icc_conflict_count != 0) || (icc_exception == 0xFF)){
        ASSERT(0);
    }
    for(count = 0, index = 0 ; count < 100 ; count ++ ){
        index = count + index;
    }

    WRITE_CR(ICC_DSPCSIF_VAS_VALID, 0xCACACACA);
    icc_exception = 0;
    icc_conflict_count = 0;    
    // icc write conflic test
    for(count = 0 ; count < 10000 ; count ++){
        *(((volatile unsigned int*)(ICC_CSIF_DSM_BASE+4))) = 0x12345678;
    }
    if( (icc_conflict_count == 0) || (icc_exception != 0xFF)){
        #if !defined(TEMP_BYPASS)
        ASSERT(0);
        #endif
    }
    for(count = 0, index = 0 ; count < 100 ; count ++ ){
        index = count + index;
    }
    icc_exception = 0;
    icc_conflict_count = 0;    
    // icc read conflic test
    for(count = 0 ; count < 10000 ; count ++){
        icc_mpu_buffer = *(((volatile unsigned int*)(ICC_CSIF_DSM_BASE+4)));
    }
    if( (icc_conflict_count == 0) || (icc_exception != 0xFF)){
        ASSERT(0);
    }
    for(count = 0, index = 0 ; count < 100 ; count ++ ){
        index = count + index;
    }


    WRITE_CR(IMC_DSPCSIF_VAS_ACK, 0x0);
    WRITE_CR(IMC_DSPCSIF_VAS_VALID, 0xBABABABA);
    imc_exception = 0;
    imc_conflict_count = 0;    
    // imc write conflic test
    for(count = 0 ; count < 10000 ; count ++){
        *(((volatile unsigned int*)(IMC_CSIF_DSM_BASE+4))) = 0x12345678;
    }
    if( (imc_conflict_count == 0) || (imc_exception != 0xFF)){
        ASSERT(0);
    }
    for(count = 0, index = 0 ; count < 100 ; count ++ ){
        index = count + index;
    }
    imc_exception = 0;
    imc_conflict_count = 0;    
    // imc read conflic test
    for(count = 0 ; count < 10000 ; count ++){
        imc_mpu_buffer = *(((volatile unsigned int*)(IMC_CSIF_DSM_BASE+4)));
    }
    if( (imc_conflict_count != 0) || (imc_exception == 0xFF)){
        ASSERT(0);
    }
    for(count = 0, index = 0 ; count < 100 ; count ++ ){
        index = count + index;
    }

    WRITE_CR(IMC_DSPCSIF_VAS_VALID, 0xCACACACA);
    imc_exception = 0;
    imc_conflict_count = 0;    
    // imc write conflic test
    for(count = 0 ; count < 10000 ; count ++){
        *(((volatile unsigned int*)(IMC_CSIF_DSM_BASE+4))) = 0x12345678;
    }
    if( (imc_conflict_count == 0) || (imc_exception != 0xFF)){
        #if !defined(TEMP_BYPASS)
        ASSERT(0);
        #endif
    }
    for(count = 0, index = 0 ; count < 100 ; count ++ ){
        index = count + index;
    }
    imc_exception = 0;
    imc_conflict_count = 0;    
    // imc read conflic test
    for(count = 0 ; count < 10000 ; count ++){
        imc_mpu_buffer = *(((volatile unsigned int*)(IMC_CSIF_DSM_BASE+4)));
    }
    if( (imc_conflict_count == 0) || (imc_exception != 0xFF)){
        ASSERT(0);
    }
    for(count = 0, index = 0 ; count < 100 ; count ++ ){
        index = count + index;
    }

    WRITE_CR(MPC_DSPCSIF_VAS_ACK, 0x0);
    WRITE_CR(MPC_DSPCSIF_VAS_VALID, 0xBABABABA);
    mpc_exception = 0;
    mpc_conflict_count = 0;    
    // mpc write conflic test
    for(count = 0 ; count < 10000 ; count ++){
        *(((volatile unsigned int*)(MPC_CSIF_DSM_BASE+4))) = 0x12345678;
    }
    if( (mpc_conflict_count == 0) || (mpc_exception != 0xFF)){
        ASSERT(0);
    }
    for(count = 0, index = 0 ; count < 100 ; count ++ ){
        index = count + index;
    }
    mpc_exception = 0;
    mpc_conflict_count = 0;    
    // mpc read conflic test
    for(count = 0 ; count < 10000 ; count ++){
        mpc_mpu_buffer = *(((volatile unsigned int*)(MPC_CSIF_DSM_BASE+4)));
    }
    if( (mpc_conflict_count != 0) || (mpc_exception == 0xFF)){
        ASSERT(0);
    }
    for(count = 0, index = 0 ; count < 100 ; count ++ ){
        index = count + index;
    }

    WRITE_CR(MPC_DSPCSIF_VAS_VALID, 0xCACACACA);
    mpc_exception = 0;
    mpc_conflict_count = 0;    
    // mpc write conflic test
    for(count = 0 ; count < 10000 ; count ++){
        *(((volatile unsigned int*)(MPC_CSIF_DSM_BASE+4))) = 0x12345678;
    }
    if( (mpc_conflict_count == 0) || (mpc_exception != 0xFF)){
        #if !defined(TEMP_BYPASS)
        ASSERT(0);
        #endif
    }
    for(count = 0, index = 0 ; count < 100 ; count ++ ){
        index = count + index;
    }
    mpc_exception = 0;
    mpc_conflict_count = 0;    
    // mpc read conflic test
    for(count = 0 ; count < 10000 ; count ++){
        mpc_mpu_buffer = *(((volatile unsigned int*)(MPC_CSIF_DSM_BASE+4)));
    }
    if( (mpc_conflict_count == 0) || (mpc_exception != 0xFF)){
        ASSERT(0);
    }
    for(count = 0, index = 0 ; count < 100 ; count ++ ){
        index = count + index;
    }

    WRITE_CR(ICC_DSPCSIF_POLLING_MODE_RANGE, ICC_DSM_LEN);
    WRITE_CR(IMC_DSPCSIF_POLLING_MODE_RANGE, IMC_DSM_LEN);
    WRITE_CR(MPC_DSPCSIF_POLLING_MODE_RANGE, MPC_DSM_LEN);

    exception_id = 0xFFFFFFFF; //invalid number

    WRITE_CR(ICC_DSPCSIF_VAS_ACK, 0xABCDABCD);
    WRITE_CR(ICC_DSPCSIF_VAS_VALID, 0xBABABABA);
    icc_exception = 0;
    icc_conflict_count = 0;    
    // icc write conflic test
    for(count = 0 ; count < 10000 ; count ++){
        *(((volatile unsigned int*)(ICC_CSIF_DSM_BASE+4))) = 0x12345678;
    }
    if( (icc_conflict_count != 0) || (icc_exception == 0xFF)){
        ASSERT(0);
    }
    icc_exception = 0;
    icc_conflict_count = 0;    
    // icc read conflic test
    for(count = 0 ; count < 10000 ; count ++){
        icc_mpu_buffer = *(((volatile unsigned int*)(ICC_CSIF_DSM_BASE+4)));
    }
    if( (icc_conflict_count != 0) || (icc_exception == 0xFF)){
        ASSERT(0);
    }

    WRITE_CR(ICC_DSPCSIF_VAS_VALID, 0xCACACACA);
    icc_exception = 0;
    icc_conflict_count = 0;    
    // icc write conflic test
    for(count = 0 ; count < 10000 ; count ++){
        *(((volatile unsigned int*)(ICC_CSIF_DSM_BASE+4))) = 0x12345678;
    }
    if( (icc_conflict_count != 0) || (icc_exception == 0xFF)){
        ASSERT(0);
    }
    icc_exception = 0;
    icc_conflict_count = 0;    
    // icc read conflic test
    for(count = 0 ; count < 10000 ; count ++){
        icc_mpu_buffer = *(((volatile unsigned int*)(ICC_CSIF_DSM_BASE+4)));
    }
    if( (icc_conflict_count != 0) || (icc_exception == 0xFF)){
        ASSERT(0);
    }

    WRITE_CR(IMC_DSPCSIF_VAS_ACK, 0xABCDABCD);
    WRITE_CR(IMC_DSPCSIF_VAS_VALID, 0xBABABABA);
    imc_exception = 0;
    imc_conflict_count = 0;    
    // imc write conflic test
    for(count = 0 ; count < 10000 ; count ++){
        *(((volatile unsigned int*)(IMC_CSIF_DSM_BASE+4))) = 0x12345678;
    }
    if( (imc_conflict_count != 0) || (imc_exception == 0xFF)){
        ASSERT(0);
    }
    imc_exception = 0;
    imc_conflict_count = 0;    
    // imc read conflic test
    for(count = 0 ; count < 10000 ; count ++){
        imc_mpu_buffer = *(((volatile unsigned int*)(IMC_CSIF_DSM_BASE+4)));
    }
    if( (imc_conflict_count != 0) || (imc_exception == 0xFF)){
        ASSERT(0);
    }

    WRITE_CR(IMC_DSPCSIF_VAS_VALID, 0xCACACACA);
    imc_exception = 0;
    imc_conflict_count = 0;    
    // imc write conflic test
    for(count = 0 ; count < 10000 ; count ++){
        *(((volatile unsigned int*)(IMC_CSIF_DSM_BASE+4))) = 0x12345678;
    }
    if( (imc_conflict_count != 0) || (imc_exception == 0xFF)){
        ASSERT(0);
    }
    imc_exception = 0;
    imc_conflict_count = 0;    
    // imc read conflic test
    for(count = 0 ; count < 10000 ; count ++){
        imc_mpu_buffer = *(((volatile unsigned int*)(IMC_CSIF_DSM_BASE+4)));
    }
    if( (imc_conflict_count != 0) || (imc_exception == 0xFF)){
        ASSERT(0);
    }

    WRITE_CR(MPC_DSPCSIF_VAS_ACK, 0xABCDABCD);
    WRITE_CR(MPC_DSPCSIF_VAS_VALID, 0xBABABABA);
    mpc_exception = 0;
    mpc_conflict_count = 0;    
    // mpc write conflic test
    for(count = 0 ; count < 10000 ; count ++){
        *(((volatile unsigned int*)(MPC_CSIF_DSM_BASE+4))) = 0x12345678;
    }
    if( (mpc_conflict_count != 0) || (mpc_exception == 0xFF)){
        ASSERT(0);
    }
    mpc_exception = 0;
    mpc_conflict_count = 0;    
    // mpc read conflic test
    for(count = 0 ; count < 10000 ; count ++){
        mpc_mpu_buffer = *(((volatile unsigned int*)(MPC_CSIF_DSM_BASE+4)));
    }
    if( (mpc_conflict_count != 0) || (mpc_exception == 0xFF)){
        ASSERT(0);
    }

    WRITE_CR(MPC_DSPCSIF_VAS_VALID, 0xCACACACA);
    mpc_exception = 0;
    mpc_conflict_count = 0;    
    // mpc write conflic test
    for(count = 0 ; count < 10000 ; count ++){
        *(((volatile unsigned int*)(MPC_CSIF_DSM_BASE+4))) = 0x12345678;
    }
    if( (mpc_conflict_count != 0) || (mpc_exception == 0xFF)){
        ASSERT(0);
    }
    mpc_exception = 0;
    mpc_conflict_count = 0;    
    // mpc read conflic test
    for(count = 0 ; count < 10000 ; count ++){
        mpc_mpu_buffer = *(((volatile unsigned int*)(MPC_CSIF_DSM_BASE+4)));
    }
    if( (mpc_conflict_count != 0) || (mpc_exception == 0xFF)){
        ASSERT(0);
    }

    WRITE_CR(ICC_DSPCSIF_POLLING_MODE_RANGE, 0);
    WRITE_CR(IMC_DSPCSIF_POLLING_MODE_RANGE, 0);
    WRITE_CR(MPC_DSPCSIF_POLLING_MODE_RANGE, 0);
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0);


    WRITE_CR(ICC_DSPCSIF_TASK_ID, 0x0);
    WRITE_CR(IMC_DSPCSIF_TASK_ID, 0x0);
    WRITE_CR(MPC_DSPCSIF_TASK_ID, 0x0);

    WRITE_CR(ICC_DSPCSIF_VAS_VALID, 0xAAA12345);
    WRITE_CR(IMC_DSPCSIF_VAS_VALID, 0xAAA12345);
    WRITE_CR(MPC_DSPCSIF_VAS_VALID, 0xAAA12345);


    READ_CR(ICC_DSPCSIF_VAS_VALID, csif_debug_icc_handshake_ack_flag);
    READ_CR(IMC_DSPCSIF_VAS_VALID, csif_debug_imc_handshake_ack_flag);
    READ_CR(MPC_DSPCSIF_VAS_VALID, csif_debug_mpc_handshake_ack_flag);
    while( (csif_debug_icc_handshake_ack_flag != 0xFFFF0004) || (csif_debug_imc_handshake_ack_flag != 0xFFFF0004) || (csif_debug_mpc_handshake_ack_flag != 0xFFFF0004) )
    {
        #if defined(CSIF_TIME_OUT)
        if(csif_time_out++ > 1000)
        {
           ASSERT(0);
        }
        #endif
        READ_CR(ICC_DSPCSIF_VAS_VALID, csif_debug_icc_handshake_ack_flag);
        READ_CR(IMC_DSPCSIF_VAS_VALID, csif_debug_imc_handshake_ack_flag);
        READ_CR(MPC_DSPCSIF_VAS_VALID, csif_debug_mpc_handshake_ack_flag);
    }
    
    //sync for gpi test     
    READ_CR(ICC_DSPCSIF_TASK_ID, csif_debug_icc_handshake_ack_flag);
    READ_CR(IMC_DSPCSIF_TASK_ID, csif_debug_imc_handshake_ack_flag);
    READ_CR(MPC_DSPCSIF_TASK_ID, csif_debug_mpc_handshake_ack_flag);
    while( (csif_debug_icc_handshake_ack_flag != 0xFFFF0005) || (csif_debug_imc_handshake_ack_flag != 0xFFFF0005) || (csif_debug_mpc_handshake_ack_flag != 0xFFFF0005) )
    {
        READ_CR(ICC_DSPCSIF_TASK_ID, csif_debug_icc_handshake_ack_flag);
        READ_CR(IMC_DSPCSIF_TASK_ID, csif_debug_imc_handshake_ack_flag);
        READ_CR(MPC_DSPCSIF_TASK_ID, csif_debug_mpc_handshake_ack_flag);
    }
    
    exception_id = 10;
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<2);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<2);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x1<<2);

    csif_debug_imc_handshake_ack_flag = 0;
    for(csif_debug_icc_handshake_ack_flag = 0 ; csif_debug_icc_handshake_ack_flag < 32 ; csif_debug_icc_handshake_ack_flag ++){
        csif_debug_imc_handshake_ack_flag |= (1 << csif_debug_icc_handshake_ack_flag);
        WRITE_CR(ICC_DSPCSIF_GPI_C_SET, (csif_debug_imc_handshake_ack_flag));
        for(count = 0 ; count <100 ; count ++){
        }
        READ_CR(ICC_DSPCSIF_GPI_C_READ, count);
        if(count != csif_debug_imc_handshake_ack_flag){
            ASSERT(0);
        }
    }

    csif_debug_imc_handshake_ack_flag = 0;
    for(csif_debug_icc_handshake_ack_flag = 0 ; csif_debug_icc_handshake_ack_flag < 32 ; csif_debug_icc_handshake_ack_flag ++){
        csif_debug_imc_handshake_ack_flag |= (1 << csif_debug_icc_handshake_ack_flag);
        WRITE_CR(IMC_DSPCSIF_GPI_C_SET, (csif_debug_imc_handshake_ack_flag));
        for(count = 0 ; count <100 ; count ++){
        }
        READ_CR(IMC_DSPCSIF_GPI_C_READ, count);
        if(count != csif_debug_imc_handshake_ack_flag){
            ASSERT(0);
        }
    }

    csif_debug_imc_handshake_ack_flag = 0;
    for(csif_debug_icc_handshake_ack_flag = 0 ; csif_debug_icc_handshake_ack_flag < 32 ; csif_debug_icc_handshake_ack_flag ++){
        csif_debug_imc_handshake_ack_flag |= (1 << csif_debug_icc_handshake_ack_flag);
        WRITE_CR(MPC_DSPCSIF_GPI_C_SET, (csif_debug_imc_handshake_ack_flag));
        for(count = 0 ; count <100 ; count ++){
        }
        READ_CR(MPC_DSPCSIF_GPI_C_READ, count);
        if(count != csif_debug_imc_handshake_ack_flag){
            ASSERT(0);
        }
    }

    icc_exception = 0;
    imc_exception = 0;
    mpc_exception = 0;

    WRITE_CR(ICC_DSPCSIF_VAS_VALID, 0xFFFF0006);
    READ_CR(ICC_DSPCSIF_VAS_VALID, csif_debug_icc_handshake_ack_flag);
    while( (csif_debug_icc_handshake_ack_flag != 0xFFFF0007)){
        READ_CR(ICC_DSPCSIF_VAS_VALID, csif_debug_icc_handshake_ack_flag);
    }
    if(icc_exception != 32){
        ASSERT(0);
    }

    WRITE_CR(IMC_DSPCSIF_VAS_VALID, 0xFFFF0006);
    READ_CR(IMC_DSPCSIF_VAS_VALID, csif_debug_imc_handshake_ack_flag);
    while( (csif_debug_imc_handshake_ack_flag != 0xFFFF0007)){
        READ_CR(IMC_DSPCSIF_VAS_VALID, csif_debug_imc_handshake_ack_flag);
    }
    if(imc_exception != 32){
        ASSERT(0);
    }
    WRITE_CR(MPC_DSPCSIF_VAS_VALID, 0xFFFF0006);
    READ_CR(MPC_DSPCSIF_VAS_VALID, csif_debug_mpc_handshake_ack_flag);
    while( (csif_debug_mpc_handshake_ack_flag != 0xFFFF0007)){
        READ_CR(MPC_DSPCSIF_VAS_VALID, csif_debug_mpc_handshake_ack_flag);
    }
    if(mpc_exception != 32){
        ASSERT(0);
    }

    csif_debug_imc_handshake_ack_flag = 0xFFFFFFFF;
    for(csif_debug_icc_handshake_ack_flag = 0 ; csif_debug_icc_handshake_ack_flag < 32 ; csif_debug_icc_handshake_ack_flag ++){
        csif_debug_imc_handshake_ack_flag &= ~(1 << csif_debug_icc_handshake_ack_flag);
        WRITE_CR(ICC_DSPCSIF_GPI_C_CLEAR, (1 << csif_debug_icc_handshake_ack_flag));
        for(count = 0 ; count <100 ; count ++){
        }
        READ_CR(ICC_DSPCSIF_GPI_C_READ, count);
        if(count != csif_debug_imc_handshake_ack_flag){
            ASSERT(0);
        }
    }

    csif_debug_imc_handshake_ack_flag = 0xFFFFFFFF;
    for(csif_debug_icc_handshake_ack_flag = 0 ; csif_debug_icc_handshake_ack_flag < 32 ; csif_debug_icc_handshake_ack_flag ++){
        csif_debug_imc_handshake_ack_flag &= ~(1 << csif_debug_icc_handshake_ack_flag);
        WRITE_CR(IMC_DSPCSIF_GPI_C_CLEAR, (1 << csif_debug_icc_handshake_ack_flag));
        for(count = 0 ; count <100 ; count ++){
        }
        READ_CR(IMC_DSPCSIF_GPI_C_READ, count);
        if(count != csif_debug_imc_handshake_ack_flag){
            ASSERT(0);
        }
    }

    csif_debug_imc_handshake_ack_flag = 0xFFFFFFFF;
    for(csif_debug_icc_handshake_ack_flag = 0 ; csif_debug_icc_handshake_ack_flag < 32 ; csif_debug_icc_handshake_ack_flag ++){
        csif_debug_imc_handshake_ack_flag &= ~(1 << csif_debug_icc_handshake_ack_flag);
        WRITE_CR(MPC_DSPCSIF_GPI_C_CLEAR, (1 << csif_debug_icc_handshake_ack_flag));
        for(count = 0 ; count <100 ; count ++){
        }
        READ_CR(MPC_DSPCSIF_GPI_C_READ, count);
        if(count != csif_debug_imc_handshake_ack_flag){
            ASSERT(0);
        }
    }
}

/*
****************************************************************************************************************************
* CSIF_ICC_Interrupt_Handler.
*
* This function is for ICC normal interrupt handler
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_ICC_Interrupt_Handler(kal_uint32 status_index)
{
    if(status_index == icc_csif_debug_interrupt_index){
        icc_csif_debug_interrupt_index++;
    }
    else{
        ASSERT(0);
    }
}

/*
****************************************************************************************************************************
* CSIF_ICC_C2S_OVFL_Interrupt_Handler.
*
* This function is for ICC c2s overflow interrupt handler
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_ICC_Exception_Test(kal_uint32 status_index)
{
    volatile kal_uint32 temp;
    if(exception_id == 0){ //overflow
        READ_CR(ICC_DSPCSIF_CR4_ERROR, temp);
        if( (temp & 0x1<<0) != 0x1<<0){
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_ERROR_C2S_OVFL, icc_exception);
        WRITE_CR(ICC_DSPCSIF_ERROR_C2S_OVFL_CLR, icc_exception);
        READ_CR(ICC_DSPCSIF_ERROR_C2S_OVFL, temp);
        if( temp != 0){
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, temp);
        if( temp != 0){
            ASSERT(0);
        }
    }
    else if(exception_id == 1){ //DP write MPU
        READ_CR(ICC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR, icc_error_addr);
        if( (icc_error_addr != csif_debug_interrupt_index))
        {
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != (0x8)){
            ASSERT(0);
        }        
        WRITE_CR(ICC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR_CLR, 0x1);
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(ICC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR, icc_error_addr);
        if( (icc_error_addr != 0))
        {
            ASSERT(0);
        }
        icc_exception = 0xFF;
    }
    else if(exception_id == 2){ //DP read MPU
        READ_CR(ICC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR, icc_error_addr);
        if( (icc_error_addr != csif_debug_interrupt_index))
        {
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != (0x1<<8)){
            ASSERT(0);
        }        
        WRITE_CR(ICC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(ICC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR, icc_error_addr);
        if( (icc_error_addr != 0))
        {
            ASSERT(0);
        }
        icc_exception = 0xFF;
    }
    else if(exception_id == 3){ //SP write MPU
        READ_CR(ICC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR, icc_error_addr);
        if( (icc_error_addr != csif_debug_interrupt_index))
        {
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != (0x1<<14)){
            ASSERT(0);
        }
        WRITE_CR(ICC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(ICC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR, icc_error_addr);
        if( (icc_error_addr != 0))
        {
            ASSERT(0);
        }
        icc_exception = 0xFF;
    }
    else if(exception_id == 4){ //SP read MPU
        READ_CR(ICC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR, icc_error_addr);
        if( (icc_error_addr != csif_debug_interrupt_index))
        {
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != (0x1<<15)){
            ASSERT(0);
        }
        WRITE_CR(ICC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(ICC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR, icc_error_addr);
        if( (icc_error_addr != 0))
        {
            ASSERT(0);
        }
        icc_exception = 0xFF;
    }
    else if(exception_id == 5){ //DSR undefined write
        READ_CR(ICC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, icc_error_addr);
        if( (icc_error_addr != ((csif_debug_interrupt_index-ICC_CSIF_BASE)/4) ))
        {
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != (0x1<<4)){
            ASSERT(0);
        }        
        WRITE_CR(ICC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(ICC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, icc_error_addr);
        if( (icc_error_addr != 0))
        {
            ASSERT(0);
        }
    
        icc_exception = 0xFF;
    }
    else if(exception_id == 6){ //DSR undefined read
        READ_CR(ICC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, icc_error_addr);
        if( (icc_error_addr != ((csif_debug_interrupt_index-ICC_CSIF_BASE)/4) ))
        {
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != (0x1<<5)){
            ASSERT(0);
        }        
        WRITE_CR(ICC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(ICC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, icc_error_addr);
        if( (icc_error_addr != 0))
        {
            ASSERT(0);
        }
        icc_exception = 0xFF;
    }
    else if(exception_id == 7){ //DSR undefined write
        READ_CR(ICC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, icc_error_addr);
        if( (icc_error_addr != ((csif_debug_interrupt_index-ICC_CSIF_DSM_BASE)/4) ))
        {
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != (0x1<<9)){
            ASSERT(0);
        }        
        WRITE_CR(ICC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(ICC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, icc_error_addr);
        if( (icc_error_addr != 0))
        {
            ASSERT(0);
        }
        icc_exception = 0xFF;
    }
    else if(exception_id == 8){ //DSR undefined read
        READ_CR(ICC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, icc_error_addr);
        if( (icc_error_addr != ((csif_debug_interrupt_index-ICC_CSIF_DSM_BASE)/4) ))
        {
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != (0x1<<10)){
            ASSERT(0);
        }        
        WRITE_CR(ICC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if(icc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(ICC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, icc_error_addr);
        if( icc_error_addr != 0)
        {
            ASSERT(0);
        }
        icc_exception = 0xFF;
    }
    else if(exception_id == 9 ){ //conflict
        READ_CR(ICC_DSPCSIF_COLLISION_ERROR_ADDR, icc_error_addr);
        if( icc_error_addr != 1)
        {
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if( icc_error_addr != (0x1<<12) )
        {
            ASSERT(0);
        }
        while(1){
            READ_CR(ICC_DSPCSIF_TASK_ID, icc_error_addr);
            if( icc_error_addr == 0x998765 ){
                break;
           } 
        }
        WRITE_CR(ICC_DSPCSIF_COLLISION_ERROR_CLR, 0x1);

        READ_CR(ICC_DSPCSIF_COLLISION_ERROR_ADDR, icc_error_addr);
        if( icc_error_addr != 0)
        {
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if( icc_error_addr != (0) )
        {
            ASSERT(0);
        }
        WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xDDDDDDFD);
        while(1){
            READ_CR(ICC_DSPCSIF_TASK_ID, icc_error_addr);
            if( icc_error_addr == 0x99999999 ){
                break;
           } 
        }
        icc_exception = 0xFF;
        icc_conflict_count ++;
    }
    else if(exception_id == 10 ){ //GPIO
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if( icc_error_addr != (0x1<<2) )
        {
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_ERROR_ACD_CONFLICT, icc_error_addr);
        READ_CR(ICC_DSPCSIF_GPI_S_READ, icc_conflict_count);
        if( icc_error_addr != icc_conflict_count)
        {
            ASSERT(0);
        }
        WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xA01); 
        while(1){
            READ_CR(ICC_DSPCSIF_TASK_ID, csif_debug_icc_handshake_ack_flag);
            if(csif_debug_icc_handshake_ack_flag == 0xA02){
                break;
            }
        }
        READ_CR(ICC_DSPCSIF_ERROR_ACD_CONFLICT, icc_error_addr);
        if( icc_error_addr != (0))
        {
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if( icc_error_addr != (0) )
        {
            ASSERT(0);
        }

        WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xA03); 
        icc_exception ++;
        /*
        WRITE_CR(ICC_DSPCSIF_GPI_C_SET, (0xffffffff)); 
        for(counter_buffer = 0; counter_buffer < 200; counter_buffer ++){
        }
            
        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if( icc_error_addr != (0x1<<2) )
        {
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_ERROR_ACD_CONFLICT, icc_error_addr);
        if( icc_error_addr != (1<<csif_debug_reg_index))
        {
            ASSERT(0);
        }

        WRITE_CR(ICC_DSPCSIF_GPI_C_CLEAR, (0xffffffff)); 
        for(counter_buffer = 0; counter_buffer < 200; counter_buffer ++){
        }

        READ_CR(ICC_DSPCSIF_CR4_ERROR, icc_error_addr);
        if( icc_error_addr != (0x1<<2) )
        {
            ASSERT(0);
        }
        READ_CR(ICC_DSPCSIF_ERROR_ACD_CONFLICT, icc_error_addr);
        if( icc_error_addr != (1<<csif_debug_reg_index))
        {
            ASSERT(0);
        }

        WRITE_CR(ICC_DSPCSIF_ERROR_ACD_CONFLICT_CLR, 1); 
        for(counter_buffer = 0; counter_buffer < 200; counter_buffer ++){
        }
        */ 
    }
    else{
        ASSERT(0);
    }
    /*
    unsigned int index=0;
    READ_CR(ICC_DSPCSIF_CR4_ERROR, index);
    if((index&0x2) != 0x2)
    {
        //MDM_INT32_WRITE(0xB5B6b200+index);
        //MDM_TM_END_FAIL_WRITE;
        ASSERT(0);
    }
    
    //MDM_INT32_WRITE(0xB5B6b001);
    READ_CR(ICC_DSPCSIF_ERROR_C2S_OVFL, index);
    if( !(index &(0x1<<status_index)) )
    {
        //MDM_INT32_WRITE(0xB5B6b100+status_index);
        //MDM_TM_END_FAIL_WRITE;
        ASSERT(0);
    }
    WRITE_CR(ICC_DSPCSIF_ERROR_C2S_OVFL_CLR, 0x1<<status_index);
    */
}

/*
****************************************************************************************************************************
* CSIF_IMC_Interrupt_Handler.
*
* This function is for IMC normal interrupt handler
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_IMC_Interrupt_Handler(kal_uint32 status_index)
{
    //imc_csif_debug_interrupt_index++;
    if(status_index == imc_csif_debug_interrupt_index){
        imc_csif_debug_interrupt_index++;
    }
    else{
        ASSERT(0);
    }    
}

/*
****************************************************************************************************************************
* CSIF_IMC_Interrupt_Handler.
*
* This function is for IMC c2s overflow interrupt handler
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_IMC_Exception_Test(kal_uint32 status_index)
{
    volatile kal_uint32 temp;
    if(exception_id == 0){ //overflow
        READ_CR(IMC_DSPCSIF_CR4_ERROR, temp);
        if( (temp & 0x1<<0) != 0x1<<0){
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_ERROR_C2S_OVFL, imc_exception);
        WRITE_CR(IMC_DSPCSIF_ERROR_C2S_OVFL_CLR, imc_exception);
        READ_CR(IMC_DSPCSIF_ERROR_C2S_OVFL, temp);
        if( temp != 0){
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, temp);
        if( temp != 0){
            ASSERT(0);
        }
    }
    else if(exception_id == 1){ //DP write MPU
        READ_CR(IMC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR, imc_error_addr);
        if( (imc_error_addr != csif_debug_interrupt_index))
        {
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != (0x8)){
            ASSERT(0);
        }        
        WRITE_CR(IMC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR_CLR, 0x1);
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(IMC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR, imc_error_addr);
        if( (imc_error_addr != 0))
        {
            ASSERT(0);
        }
        imc_exception = 0xFF;
    }
    else if(exception_id == 2){ //DP read MPU
        READ_CR(IMC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR, imc_error_addr);
        if( (imc_error_addr != csif_debug_interrupt_index))
        {
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != (0x1<<8)){
            ASSERT(0);
        }        
        WRITE_CR(IMC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(IMC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR, imc_error_addr);
        if( (imc_error_addr != 0))
        {
            ASSERT(0);
        }
        imc_exception = 0xFF;
    }
    else if(exception_id == 3){ //SP write MPU
        READ_CR(IMC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR, imc_error_addr);
        if( (imc_error_addr != csif_debug_interrupt_index))
        {
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != (0x1<<14)){
            ASSERT(0);
        }
        WRITE_CR(IMC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(IMC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR, imc_error_addr);
        if( (imc_error_addr != 0))
        {
            ASSERT(0);
        }
        imc_exception = 0xFF;
    }
    else if(exception_id == 4){ //SP read MPU
        READ_CR(IMC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR, imc_error_addr);
        if( (imc_error_addr != csif_debug_interrupt_index))
        {
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != (0x1<<15)){
            ASSERT(0);
        }
        WRITE_CR(IMC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(IMC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR, imc_error_addr);
        if( (imc_error_addr != 0))
        {
            ASSERT(0);
        }
        imc_exception = 0xFF;
    }
    else if(exception_id == 5){ //DSR undefined write
        READ_CR(IMC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, imc_error_addr);
        if( (imc_error_addr != ((csif_debug_interrupt_index-IMC_CSIF_BASE)/4) ))
        {
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != (0x1<<4)){
            ASSERT(0);
        }        
        WRITE_CR(IMC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(IMC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, imc_error_addr);
        if( (imc_error_addr != 0))
        {
            ASSERT(0);
        }
    
        imc_exception = 0xFF;
    }
    else if(exception_id == 6){ //DSR undefined read
        READ_CR(IMC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, imc_error_addr);
        if( (imc_error_addr != ((csif_debug_interrupt_index-IMC_CSIF_BASE)/4) ))
        {
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != (0x1<<5)){
            ASSERT(0);
        }        
        WRITE_CR(IMC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(IMC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, imc_error_addr);
        if( (imc_error_addr != 0))
        {
            ASSERT(0);
        }
        imc_exception = 0xFF;
    }
    else if(exception_id == 7){ //DSR undefined write
        READ_CR(IMC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, imc_error_addr);
        if( (imc_error_addr != ((csif_debug_interrupt_index-IMC_CSIF_DSM_BASE)/4) ))
        {
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != (0x1<<9)){
            ASSERT(0);
        }        
        WRITE_CR(IMC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(IMC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, imc_error_addr);
        if( (imc_error_addr != 0))
        {
            ASSERT(0);
        }
        imc_exception = 0xFF;
    }
    else if(exception_id == 8){ //DSR undefined read
        READ_CR(IMC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, imc_error_addr);
        if( (imc_error_addr != ((csif_debug_interrupt_index-IMC_CSIF_DSM_BASE)/4) ))
        {
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != (0x1<<10)){
            ASSERT(0);
        }        
        WRITE_CR(IMC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if(imc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(IMC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, imc_error_addr);
        if( imc_error_addr != 0)
        {
            ASSERT(0);
        }
        imc_exception = 0xFF;
    }
    else if(exception_id == 9 ){ //conflict
        READ_CR(IMC_DSPCSIF_COLLISION_ERROR_ADDR, imc_error_addr);
        if( imc_error_addr != 1)
        {
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if( imc_error_addr != (0x1<<12) )
        {
            ASSERT(0);
        }
        while(1){
            READ_CR(IMC_DSPCSIF_TASK_ID, imc_error_addr);
            if( imc_error_addr == 0x998765 ){
                break;
           } 
        }
        WRITE_CR(IMC_DSPCSIF_COLLISION_ERROR_CLR, 0x1);

        READ_CR(IMC_DSPCSIF_COLLISION_ERROR_ADDR, imc_error_addr);
        if( imc_error_addr != 0)
        {
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if( imc_error_addr != (0) )
        {
            ASSERT(0);
        }
        WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xDDDDDDFD);
        while(1){
            READ_CR(IMC_DSPCSIF_TASK_ID, imc_error_addr);
            if( icc_error_addr == 0x99999999 ){
                break;
           } 
        }
        imc_exception = 0xFF;
        imc_conflict_count ++;
    }
    else if(exception_id == 10 ){ //GPIO
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if( imc_error_addr != (0x1<<2) )
        {
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_ERROR_ACD_CONFLICT, imc_error_addr);
        READ_CR(IMC_DSPCSIF_GPI_S_READ, imc_conflict_count);
        if( imc_error_addr != imc_conflict_count)
        {
            ASSERT(0);
        }
        WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xA01); 
        while(1){
            READ_CR(IMC_DSPCSIF_TASK_ID, csif_debug_imc_handshake_ack_flag);
            if(csif_debug_imc_handshake_ack_flag == 0xA02){
                break;
            }
        }
        READ_CR(IMC_DSPCSIF_ERROR_ACD_CONFLICT, imc_error_addr);
        if( imc_error_addr != (0))
        {
            ASSERT(0);
        }
        READ_CR(IMC_DSPCSIF_CR4_ERROR, imc_error_addr);
        if( imc_error_addr != (0) )
        {
            ASSERT(0);
        }
        WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xA03); 
        imc_exception ++;
    }
    else{
        ASSERT(0);
    }
    /*
    unsigned int index=0;
    READ_CR(IMC_DSPCSIF_CR4_ERROR, index);
    if((index&0x2) != 0x2)
    {
        //MDM_INT32_WRITE(0xB5B6b400+index);
        //MDM_TM_END_FAIL_WRITE;
        ASSERT(0);
    }
    
    //MDM_INT32_WRITE(0xB5B6b002);
    READ_CR(IMC_DSPCSIF_ERROR_C2S_OVFL, index);
    if( !(index &(0x1<<status_index)) )
    {
        //MDM_INT32_WRITE(0xB5B6b300+status_index);
        //MDM_TM_END_FAIL_WRITE;
        ASSERT(0);
    }
    WRITE_CR(IMC_DSPCSIF_ERROR_C2S_OVFL_CLR, 0x1<<status_index);
    */
}

/*
****************************************************************************************************************************
* CSIF_MPC_Interrupt_Handler.
*
* This function is for MPC normal interrupt handler
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_MPC_Interrupt_Handler(kal_uint32 status_index)
{
    //mpc_csif_debug_interrupt_index++;
    if(status_index == mpc_csif_debug_interrupt_index){
        mpc_csif_debug_interrupt_index++;
    }
    else{
        ASSERT(0);
    }
}

/*
****************************************************************************************************************************
* CSIF_MPC_Interrupt_Handler.
*
* This function is for MPC c2s overflow interrupt handler
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_MPC_Exception_Test(kal_uint32 status_index)
{
    volatile kal_uint32 temp;
    if(exception_id == 0){ //overflow
        READ_CR(MPC_DSPCSIF_CR4_ERROR, temp);
        if( (temp & 0x1<<0) != 0x1<<0){
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_ERROR_C2S_OVFL, mpc_exception);
        WRITE_CR(MPC_DSPCSIF_ERROR_C2S_OVFL_CLR, mpc_exception);
        READ_CR(MPC_DSPCSIF_ERROR_C2S_OVFL, temp);
        if( temp != 0){
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, temp);
        if( temp != 0){
            ASSERT(0);
        }
    }
    else if(exception_id == 1){ //DP write MPU
        READ_CR(MPC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR, mpc_error_addr);
        if( (mpc_error_addr != csif_debug_interrupt_index))
        {
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != (0x8)){
            ASSERT(0);
        }        
        WRITE_CR(MPC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR_CLR, 0x1);
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(MPC_DSPCSIF_CR4_ERROR_DSM_ACCESS_ADDR, mpc_error_addr);
        if( (mpc_error_addr != 0))
        {
            ASSERT(0);
        }
        mpc_exception = 0xFF;
    }
    else if(exception_id == 2){ //DP read MPU
        READ_CR(MPC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR, mpc_error_addr);
        if( (mpc_error_addr != csif_debug_interrupt_index))
        {
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != (0x1<<8)){
            ASSERT(0);
        }        
        WRITE_CR(MPC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(MPC_DSPCSIF_CR4_READ_MPU_ACCESS_ADDR, mpc_error_addr);
        if( (mpc_error_addr != 0))
        {
            ASSERT(0);
        }
        mpc_exception = 0xFF;
    }
    else if(exception_id == 3){ //SP write MPU
        READ_CR(MPC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR, mpc_error_addr);
        if( (mpc_error_addr != csif_debug_interrupt_index))
        {
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != (0x1<<14)){
            ASSERT(0);
        }
        WRITE_CR(MPC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(MPC_DSPCSIF_CR4_POL_WMPU_ACCESS_ADDR, mpc_error_addr);
        if( (mpc_error_addr != 0))
        {
            ASSERT(0);
        }
        mpc_exception = 0xFF;
    }
    else if(exception_id == 4){ //SP read MPU
        READ_CR(MPC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR, mpc_error_addr);
        if( (mpc_error_addr != csif_debug_interrupt_index))
        {
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != (0x1<<15)){
            ASSERT(0);
        }
        WRITE_CR(MPC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR_CLR, 0x1);
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(MPC_DSPCSIF_CR4_POL_RMPU_ACCESS_ADDR, mpc_error_addr);
        if( (mpc_error_addr != 0))
        {
            ASSERT(0);
        }
        mpc_exception = 0xFF;
    }
    else if(exception_id == 5){ //DSR undefined write
        READ_CR(MPC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, mpc_error_addr);
        if( (mpc_error_addr != ((csif_debug_interrupt_index-MPC_CSIF_BASE)/4) ))
        {
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != (0x1<<4)){
            ASSERT(0);
        }        
        WRITE_CR(MPC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(MPC_DSPCSIF_CR4_DSR_WRITE_ERR_ADDR, mpc_error_addr);
        if( (mpc_error_addr != 0))
        {
            ASSERT(0);
        }
    
        mpc_exception = 0xFF;
    }
    else if(exception_id == 6){ //DSR undefined read
        READ_CR(MPC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, mpc_error_addr);
        if( (mpc_error_addr != ((csif_debug_interrupt_index-MPC_CSIF_BASE)/4) ))
        {
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != (0x1<<5)){
            ASSERT(0);
        }        
        WRITE_CR(MPC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(MPC_DSPCSIF_CR4_DSR_READ_ERR_ADDR, mpc_error_addr);
        if( (mpc_error_addr != 0))
        {
            ASSERT(0);
        }
        mpc_exception = 0xFF;
    }
    else if(exception_id == 7){ //DSR undefined write
        READ_CR(MPC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, mpc_error_addr);
        if( (mpc_error_addr != ((csif_debug_interrupt_index-MPC_CSIF_DSM_BASE)/4) ))
        {
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != (0x1<<9)){
            ASSERT(0);
        }        
        WRITE_CR(MPC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(MPC_DSPCSIF_CR4_DSM_WRITE_ERR_ADDR, mpc_error_addr);
        if( (mpc_error_addr != 0))
        {
            ASSERT(0);
        }
        mpc_exception = 0xFF;
    }
    else if(exception_id == 8){ //DSM undefined read
        READ_CR(MPC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, mpc_error_addr);
        if( (mpc_error_addr != ((csif_debug_interrupt_index-MPC_CSIF_DSM_BASE)/4) ))
        {
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != (0x1<<10)){
            ASSERT(0);
        }        
        WRITE_CR(MPC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, 0xFFFFFFFF);
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if(mpc_error_addr != 0){
            ASSERT(0);
        }            
        READ_CR(MPC_DSPCSIF_CR4_DSM_READ_ERR_ADDR, mpc_error_addr);
        if( mpc_error_addr != 0)
        {
            ASSERT(0);
        }
        mpc_exception = 0xFF;
    }
    else if(exception_id == 9 ){ //conflict
        READ_CR(MPC_DSPCSIF_COLLISION_ERROR_ADDR, mpc_error_addr);
        if( mpc_error_addr != 1)
        {
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if( mpc_error_addr != (0x1<<12) )
        {
            ASSERT(0);
        }
        while(1){
            READ_CR(MPC_DSPCSIF_TASK_ID, mpc_error_addr);
            if( mpc_error_addr == 0x998765 ){
                break;
           } 
        }
        WRITE_CR(MPC_DSPCSIF_COLLISION_ERROR_CLR, 0x1);

        READ_CR(MPC_DSPCSIF_COLLISION_ERROR_ADDR, mpc_error_addr);
        if( mpc_error_addr != 0)
        {
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if( mpc_error_addr != (0) )
        {
            ASSERT(0);
        }
        WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xDDDDDDFD);
        while(1){
            READ_CR(MPC_DSPCSIF_TASK_ID, mpc_error_addr);
            if( mpc_error_addr == 0x99999999 ){
                break;
           } 
        }
        mpc_exception = 0xFF;
        mpc_conflict_count ++;
    }
    else if(exception_id == 10 ){ //GPI
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if( mpc_error_addr != (0x1<<2) )
        {
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_ERROR_ACD_CONFLICT, mpc_error_addr);
        READ_CR(MPC_DSPCSIF_GPI_S_READ,  mpc_conflict_count);
        if( mpc_error_addr != mpc_conflict_count)
        {
            ASSERT(0);
        }
        WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xA01); 
        while(1){
            READ_CR(MPC_DSPCSIF_TASK_ID, csif_debug_mpc_handshake_ack_flag);
            if(csif_debug_mpc_handshake_ack_flag == 0xA02){
                break;
            }
        }
        READ_CR(MPC_DSPCSIF_ERROR_ACD_CONFLICT, mpc_error_addr);
        if( mpc_error_addr != (0))
        {
            ASSERT(0);
        }
        READ_CR(MPC_DSPCSIF_CR4_ERROR, mpc_error_addr);
        if( mpc_error_addr != (0) )
        {
            ASSERT(0);
        }
        WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xA03); 
        mpc_exception ++;
    }
    else{
        ASSERT(0);
    }
    /*
    unsigned int index=0;
    READ_CR(MPC_DSPCSIF_CR4_ERROR, index);
    if((index&0x2) != 0x2)
    {
        //MDM_INT32_WRITE(0xB5B6b600+index);
        //MDM_TM_END_FAIL_WRITE;
        ASSERT(0);
    }
    
    //MDM_INT32_WRITE(0xB5B6b003);
    READ_CR(MPC_DSPCSIF_ERROR_C2S_OVFL, index);
    if( !(index &(0x1<<status_index)) )
    {
        //MDM_INT32_WRITE(0xB5B6b500+status_index);
        //MDM_TM_END_FAIL_WRITE;
        ASSERT(0);
    }
    WRITE_CR(MPC_DSPCSIF_ERROR_C2S_OVFL_CLR, 0x1<<status_index);
    */
}

/*
****************************************************************************************************************************
* CSIF_Interrupt_Handler.
*
* This function is for un-test error interrupt callback
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
void CSIF_Interrupt_Handler(kal_uint32 status_index)
{
    if(csif_debug_interrupt_index != status_index)
    {
        //MDM_INT32_WRITE(0xB5B6b700 + status_index);
        //MDM_TM_END_FAIL_WRITE;
    }
}

/*
****************************************************************************************************************************
* CSIF_DRIVER_TEST.
*
* This function is for CSIF HW testing
* 
* Input: None
*
* Output: None
*
****************************************************************************************************************************
*/
#if defined(CSIF_API_TEST)
static void CSIF_DRIVER_TEST(void)
{
    kal_uint32 index = 0;
    kal_uint32 result = 0;
    
    //disable error interrupt
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    
    //disable coresonic interrrupt
     WRITE_CR(ICC_DSPCSIF_S2C_IRQ_ENABLE, 0x0);
     WRITE_CR(IMC_DSPCSIF_S2C_IRQ_ENABLE, 0x0);
     WRITE_CR(MPC_DSPCSIF_S2C_IRQ_ENABLE, 0x0);
    
    #if defined(IT_WITH_DSP)
    //MDM_INT32_WRITE(0xB5B70000);
    //sync point 1
    READ_CR(ICC_DSPCSIF_TASK_ID, csif_debug_icc_handshake_ack_flag);
    READ_CR(IMC_DSPCSIF_TASK_ID, csif_debug_imc_handshake_ack_flag);
    READ_CR(MPC_DSPCSIF_TASK_ID, csif_debug_mpc_handshake_ack_flag);
    while( (csif_debug_icc_handshake_ack_flag != 0xffff0001) || (csif_debug_imc_handshake_ack_flag != 0xffff0001) || (csif_debug_mpc_handshake_ack_flag != 0xffff0001) )
    {
    #if defined(CSIF_TIME_OUT)
        if(csif_time_out++ > 1000)
        {
           ASSERT(0);
        }
    #endif
        //read update register
        READ_CR(ICC_DSPCSIF_TASK_ID, csif_debug_icc_handshake_ack_flag);
        READ_CR(IMC_DSPCSIF_TASK_ID, csif_debug_imc_handshake_ack_flag);
        READ_CR(MPC_DSPCSIF_TASK_ID, csif_debug_mpc_handshake_ack_flag);
    }
    #endif
    
    //CSIF_C2S_SWI_SET & CSIF_C2S_SWI_Read UT
    for(index=0; index<32; index++)
    {
        //MDM_INT32_WRITE(0xB5B80000 + index);
        //ICC
        CSIF_C2S_SWI_Set(ICC_CORE, index);
        READ_CR(ICC_DSPCSIF_C2S_IRQ_READ, result);
        if((result & (1<<index)) == 0)
        {
            //MDM_INT32_WRITE(0xB5B80100 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
        
        //IMC
        CSIF_C2S_SWI_Set(IMC_CORE, index);
        READ_CR(IMC_DSPCSIF_C2S_IRQ_READ, result);
        if((result & (1<<index)) == 0)
        {
            //MDM_INT32_WRITE(0xB5B80200 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
        
        //MPC
        CSIF_C2S_SWI_Set(MPC_CORE, index);
        READ_CR(MPC_DSPCSIF_C2S_IRQ_READ, result);
        if((result & (1<<index)) == 0)
        {
            //MDM_INT32_WRITE(0xB5B80300 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
    }
    
    //CSIF_S2C_SWI_Enable & CSIF_S2C_SWI_Enable_Read
    for(index=0; index<32; index++)
    {
        //MDM_INT32_WRITE(0xB5B80400 + index);
        //ICC
        CSIF_S2C_SWI_Enable(ICC_CORE, 1<<index);
        READ_CR(ICC_DSPCSIF_S2C_IRQ_ENABLE, result);
        if((result & (1<<index)) == 0)
        {
            //MDM_INT32_WRITE(0xB5B80500 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
        
        //IMC
        CSIF_S2C_SWI_Enable(IMC_CORE, 1<<index);
        READ_CR(IMC_DSPCSIF_S2C_IRQ_ENABLE, result);
        if((result & (1<<index)) == 0)
        {
            //MDM_INT32_WRITE(0xB5B80600 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
        
        //MPC
        CSIF_S2C_SWI_Enable(MPC_CORE, 1<<index);
        READ_CR(MPC_DSPCSIF_S2C_IRQ_ENABLE, result);
        if((result & (1<<index)) == 0)
        {
            //MDM_INT32_WRITE(0xB5B80700 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
    }
    
    //CSIF_ACD_C2S_Set & CSIF_ACD_C2S_Clear & CSIF_ACD_C2S_Read
    for(index=0; index<32; index++)
    {
        //MDM_INT32_WRITE(0xB5B80800 + index);
        //ICC
        CSIF_ACD_C2S_Set(ICC_CORE, index);
        result = CSIF_ACD_C2S_Read(ICC_CORE);
        if((result & (1<<index)) == 0)
        {
            //MDM_INT32_WRITE(0xB5B80900 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
        CSIF_ACD_C2S_Clear(ICC_CORE, index);
        result = CSIF_ACD_C2S_Read(ICC_CORE);
        if((result & (1<<index)))
        {
            //MDM_INT32_WRITE(0xB5B80a00 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
        
        //IMC
        CSIF_ACD_C2S_Set(IMC_CORE, index);
        result = CSIF_ACD_C2S_Read(IMC_CORE);
        if((result & (1<<index)) == 0)
        {
            //MDM_INT32_WRITE(0xB5B80b00 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
        CSIF_ACD_C2S_Clear(IMC_CORE, index);
        result = CSIF_ACD_C2S_Read(IMC_CORE);
        if((result & (1<<index)))
        {
            //MDM_INT32_WRITE(0xB5B80c00 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
        
        //MPC
        CSIF_ACD_C2S_Set(MPC_CORE, index);
        result = CSIF_ACD_C2S_Read(MPC_CORE);
        if((result & (1<<index)) == 0)
        {
            //MDM_INT32_WRITE(0xB5B80d00 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
        CSIF_ACD_C2S_Clear(MPC_CORE, index);
        result = CSIF_ACD_C2S_Read(MPC_CORE);
        if((result & (1<<index)))
        {
            //MDM_INT32_WRITE(0xB5B80e00 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
    }
    
    //disable error interrupt
    WRITE_CR(ICC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    WRITE_CR(IMC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    WRITE_CR(MPC_DSPCSIF_CR4_ERROR_ENABLE, 0x0);
    
    //test overflow 
    for(index=0; index<32; index++)
    {
        //MDM_INT32_WRITE(0xB5B81300 + index);
        //trigger overflow
        //ICC
        CSIF_C2S_SWI_Set(ICC_CORE, index);
        READ_CR(ICC_DSPCSIF_ERROR_C2S_OVFL, result);
        if((result & (1<<index)) == 0)
        {
            //MDM_INT32_WRITE(0xB5B81400 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
        CSIF_C2S_Overflow_clear(ICC_CORE, index);
        READ_CR(ICC_DSPCSIF_ERROR_C2S_OVFL, result);
        if((result & (1<<index)))
        {
            //MDM_INT32_WRITE(0xB5B81400 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
        //IMC
        CSIF_C2S_SWI_Set(IMC_CORE, index);
        READ_CR(IMC_DSPCSIF_ERROR_C2S_OVFL, result);
        if((result & (1<<index)) == 0)
        {
            //MDM_INT32_WRITE(0xB5B81500 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
        CSIF_C2S_Overflow_clear(IMC_CORE, index);
        READ_CR(IMC_DSPCSIF_ERROR_C2S_OVFL, result);
        if((result & (1<<index)))
        {
            //MDM_INT32_WRITE(0xB5B81600 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
        //MPC
        CSIF_C2S_SWI_Set(MPC_CORE, index);
        READ_CR(MPC_DSPCSIF_ERROR_C2S_OVFL, result);
        if((result & (1<<index)) == 0)
        {
            //MDM_INT32_WRITE(0xB5B81700 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
        CSIF_C2S_Overflow_clear(MPC_CORE, index);
        READ_CR(MPC_DSPCSIF_ERROR_C2S_OVFL, result);
        if((result & (1<<index)))
        {
            //MDM_INT32_WRITE(0xB5B81800 + index);
            //MDM_TM_END_FAIL_WRITE;
        }
    }
}
#endif //CSIF_API_TEST

#if (defined(CSIF_MOMORY_BACKUP_TEST))
#include "csif_local_define.h"
#include "intrCtrl.h"
#include "drv_comm.h"
#include "dsp_header_define_csif.h"
#define WRITE_CR(addr, value)   DRV_WriteReg32(addr, value); Data_Sync_Barrier()
#define READ_CR(addr, value)    value=DRV_Reg32(addr)
extern volatile CSIF_ZI_Table_Backup CSIF_ZI_Table_Backup_ICC[10];
extern volatile CSIF_ZI_Table_Backup CSIF_ZI_Table_Backup_IMC[10];
extern volatile CSIF_ZI_Table_Backup CSIF_ZI_Table_Backup_MPC[10];
extern volatile kal_uint32 csif_zi_table_backup_icc_index; 
extern volatile kal_uint32 csif_zi_table_backup_imc_index; 
extern volatile kal_uint32 csif_zi_table_backup_mpc_index; 
void CSIF_Memory_Callback_Pass(kal_uint32 core_index){
    kal_uint32 index, temp;
    switch(core_index){
        case ICC_CORE:
            if(csif_zi_table_backup_icc_index != 0){
                WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA0003);//fail
                return;     
            }
            for(index = 0; index < 10 ; index++){
                if(CSIF_ZI_Table_Backup_ICC[index].zi_reason != 0xa5a5a5a5+index){
                    WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA0002);//fail
                    return;     
                }
                if(CSIF_ZI_Table_Backup_ICC[index].table_start != 0xa5a5a5a5+index+1){
                    WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA0002);//fail
                    return;     
                }
                if(CSIF_ZI_Table_Backup_ICC[index].table_lengh != 0xa5a5a5a5+index+2){
                    WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA0002);//fail
                    return;  
                }
                for(temp = 0 ; temp < 32 ; temp ++){
                    if(CSIF_ZI_Table_Backup_ICC[index].zi_table[temp] != 0x5a5a5a5a+index+temp){
                        WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA0002);//fail
                        return;  
                    }  
                }
            }
            WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA0001);//pass
            break;
        case IMC_CORE:
            if(csif_zi_table_backup_imc_index != 0){
                WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xAAAA0003);//fail
                return;     
            }
            for(index = 0; index < 10 ; index++){
                if(CSIF_ZI_Table_Backup_IMC[index].zi_reason != 0xa5a5a5a5+index){
                    WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xAAAA0002);//fail
                    return;     
                }
                if(CSIF_ZI_Table_Backup_IMC[index].table_start != 0xa5a5a5a5+index+1){
                    WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xAAAA0002);//fail
                    return;     
                }
                if(CSIF_ZI_Table_Backup_IMC[index].table_lengh != 0xa5a5a5a5+index+2){
                    WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xAAAA0002);//fail
                    return;  
                }
                for(temp = 0 ; temp < 32 ; temp ++){
                    if(CSIF_ZI_Table_Backup_IMC[index].zi_table[temp] != 0x5a5a5a5a+index+temp){
                        WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xAAAA0002);//fail
                        return;  
                    }  
                }
            }
            WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xAAAA0001);//pass
            break;
        case MPC_CORE:
            if(csif_zi_table_backup_mpc_index != 0){
                WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xAAAA0003);//fail
                return;     
            }
            for(index = 0; index < 10 ; index++){
                if(CSIF_ZI_Table_Backup_MPC[index].zi_reason != 0xa5a5a5a5+index){
                    WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xAAAA0002);//fail
                    return;     
                }
                if(CSIF_ZI_Table_Backup_MPC[index].table_start != 0xa5a5a5a5+index+1){
                    WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xAAAA0002);//fail
                    return;     
                }
                if(CSIF_ZI_Table_Backup_MPC[index].table_lengh != 0xa5a5a5a5+index+2){
                    WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xAAAA0002);//fail
                    return;  
                }
                for(temp = 0 ; temp < 32 ; temp ++){
                    if(CSIF_ZI_Table_Backup_MPC[index].zi_table[temp] != 0x5a5a5a5a+index+temp){
                        WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xAAAA0002);//fail
                        return;  
                    }  
                }
            }
            WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xAAAA0001);//pass
            break;
        default:
            ASSERT(0);
            break;
    }
}

#endif

#if (defined(CSIF_REMOTE_TEST))
#include "csif_local_define.h"
#include "intrCtrl.h"
#include "drv_comm.h"
#include "CSIF_ICC_ALL.h"
#include "CSIF_IMC_ALL.h"
#include "CSIF_MPC_ALL.h"
#define WRITE_CR(addr, value)   DRV_WriteReg32(addr, value); Data_Sync_Barrier()
#define READ_CR(addr, value)    value=DRV_Reg32(addr)
void CSIF_Prestest_0(kal_uint32 core_index){
    switch(core_index){
        case ICC_CORE:
            WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA0000);
            break;
        case IMC_CORE:
            WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xBBBB0000);
            break;
        case MPC_CORE:
            WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xCCCC0000);
            break;
        default:
            ASSERT(0);
    }
}
void CSIF_Prestest_1(kal_uint32 core_index){
    switch(core_index){
        case ICC_CORE:
            WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA0001);
            break;
        case IMC_CORE:
            WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xBBBB0001);
            break;
        case MPC_CORE:
            WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xCCCC0001);
            break;
        default:
            ASSERT(0);
    }
}
void CSIF_Prestest_2(kal_uint32 core_index){
    switch(core_index){
        case ICC_CORE:
            WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA0002);
            break;
        case IMC_CORE:
            WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xBBBB0002);
            break;
        case MPC_CORE:
            WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xCCCC0002);
            break;
        default:
            ASSERT(0);
    }
}
void CSIF_Prestest_3(kal_uint32 core_index){
    switch(core_index){
        case ICC_CORE:
            WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA0003);
            break;
        case IMC_CORE:
            WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xBBBB0003);
            break;
        case MPC_CORE:
            WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xCCCC0003);
            break;
        default:
            ASSERT(0);
    }
}
void CSIF_Prestest_4(kal_uint32 core_index){
    switch(core_index){
        case ICC_CORE:
            WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA0004);
            break;
        case IMC_CORE:
            WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xBBBB0004);
            break;
        case MPC_CORE:
            WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xCCCC0004);
            break;
        default:
            ASSERT(0);
    }
}
void CSIF_Prestest_5(kal_uint32 core_index){
    switch(core_index){
        case ICC_CORE:
            WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA0005);
            break;
        case IMC_CORE:
            WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xBBBB0005);
            break;
        case MPC_CORE:
            WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xCCCC0005);
            break;
        default:
            ASSERT(0);
    }
}
void CSIF_Prestest_6(kal_uint32 core_index){
    switch(core_index){
        case ICC_CORE:
            WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA0006);
            break;
        case IMC_CORE:
            WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xBBBB0006);
            break;
        case MPC_CORE:
            WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xCCCC0006);
            break;
        default:
            ASSERT(0);
    }
}
void CSIF_Prestest_7(kal_uint32 core_index){
    switch(core_index){
        case ICC_CORE:
            WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA0007);
            break;
        case IMC_CORE:
            WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xBBBB0007);
            break;
        case MPC_CORE:
            WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xCCCC0007);
            break;
        default:
            ASSERT(0);
    }
}
void CSIF_Prestest_8(kal_uint32 core_index){
    switch(core_index){
        case ICC_CORE:
            WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA0008);
            break;
        case IMC_CORE:
            WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xBBBB0008);
            break;
        case MPC_CORE:
            WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xCCCC0008);
            break;
        default:
            ASSERT(0);
    }
}
void CSIF_Prestest_9(kal_uint32 core_index){
    switch(core_index){
        case ICC_CORE:
            WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA0009);
            break;
        case IMC_CORE:
            WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xBBBB0009);
            break;
        case MPC_CORE:
            WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xCCCC0009);
            break;
        default:
            ASSERT(0);
    }
}
void CSIF_Prestest_10(kal_uint32 core_index){
    switch(core_index){
        case ICC_CORE:
            WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA000A);
            break;
        case IMC_CORE:
            WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xBBBB000A);
            break;
        case MPC_CORE:
            WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xCCCC000A);
            break;
        default:
            ASSERT(0);
    }
}
void CSIF_Prestest_11(kal_uint32 core_index){
    switch(core_index){
        case ICC_CORE:
            WRITE_CR(ICC_DSPCSIF_TASK_ID, 0xAAAA000B);
            break;
        case IMC_CORE:
            WRITE_CR(IMC_DSPCSIF_TASK_ID, 0xBBBB000B);
            break;
        case MPC_CORE:
            WRITE_CR(MPC_DSPCSIF_TASK_ID, 0xCCCC000B);
            break;
        default:
            ASSERT(0);
    }
}
#endif
