#include "ssdvt_typedef.h"
#include "ssdvt_header.h"
#include "ssdvt_util.h"

#include "usip_power_test.h"
#include "RM_public.h"
#include "drv_comm.h"
/*******************************************************************************
*  Global variables 
*******************************************************************************/
volatile ssdvt_uint32 usip_power_status;
volatile ssdvt_uint32 usip0_th0_boot_pattern;
volatile ssdvt_uint32 usip0_th1_boot_pattern;
volatile ssdvt_uint32 usip1_th0_boot_pattern;
volatile ssdvt_uint32 usip1_th1_boot_pattern;
/*******************************************************************************
* External Global variable 
*******************************************************************************/

/*******************************************************************************
*  Function prototypes 
*******************************************************************************/
void SSDVT_USIP_POWER_TEST_INIT(void);

void SSDVT_CHECK_USIP_POWER_OFF(void);
void SSDVT_CHECK_USIP_POWER_ON(void);

void SSDVT_FORCE_USIP_POWER_OFF(void);
void SSDVT_FORCE_USIP_POWER_ON(void);

void SSDVT_UNGATE_USIP(void);

void SSDVT_CHECK_USIP_BOOT_DONE(ssdvt_uint32 number);

/*******************************************************************************
*  Functions 
*******************************************************************************/
/*
1. check usip power status is off in the beginning
2. force on usip power domain, and un-gate the usip
3. check usip power status is on
4. delay, check usip boot down
5. Turn off force-on usip power domain
6. check usip power status is off
7. force on usip power domain, and un-gate the usip
8. check usip power status is on
9. delay, check usip boot down (2)
*/

volatile ssdvt_uint32 ssdvt_usip_pwr_test_counter;

void SSDVT_USIP_POWER_TEST()
{
    
    
    SSDVT_USIP_POWER_TEST_INIT();

    for (ssdvt_usip_pwr_test_counter = 0; ssdvt_usip_pwr_test_counter < POWER_TEST_NUM; ssdvt_usip_pwr_test_counter++)
    {
        if (0 == ssdvt_usip_pwr_test_counter)
        {
            SSDVT_CHECK_USIP_POWER_OFF();
        }
        else
        {
            SSDVT_FORCE_USIP_POWER_OFF();
        }

        SSDVT_FORCE_USIP_POWER_ON();

        if (0 == ssdvt_usip_pwr_test_counter)
        {
            SSDVT_UNGATE_USIP();
        }
        
        SSDVT_DELAY_LOOP(2000);

        SSDVT_CHECK_USIP_BOOT_DONE(USIP_BOOT_DOWN_PAT | ssdvt_usip_pwr_test_counter);    
    }
    
    ssdvt_test_pass_notification();    
    
    return;
}

void SSDVT_USIP_POWER_TEST_INIT()
{
    // let usip can power down
    //DRV_WriteReg32(0xA0081108, DRV_Reg32(0xA0081108)|(0x2));
    DRV_WriteReg32(0xA00D0300, 0x3);

    // mask 2/3/4G timer of usip
    DRV_WriteReg32(0xA6000160, 0xFFFFFFFF);
}

void SSDVT_CHECK_USIP_POWER_OFF()
{
    do {
        usip_power_status = (volatile ssdvt_uint32)USIP_POWER_STATUS;
    } while (1 == usip_power_status);

    SSDVT_ASSERT_EQ(usip_power_status, 0);
}

void SSDVT_CHECK_USIP_POWER_ON()
{
    do {
        usip_power_status = (volatile ssdvt_uint32)USIP_POWER_STATUS;
    } while (0 == usip_power_status);

    SSDVT_ASSERT_EQ(usip_power_status, 1);
}

void SSDVT_FORCE_USIP_POWER_OFF()
{
    MD_TOPSM_PWR_SW_Control(USIP0_PWR, KAL_FALSE);
    SSDVT_DELAY_LOOP(2000);
    SSDVT_CHECK_USIP_POWER_OFF();
}

void SSDVT_FORCE_USIP_POWER_ON()
{
    MD_TOPSM_PWR_SW_Control(USIP0_PWR, KAL_TRUE);
    SSDVT_DELAY_LOOP(2000);
    SSDVT_CHECK_USIP_POWER_ON();
}

void SSDVT_UNGATE_USIP()
{
    *(volatile ssdvt_uint32 *)USIP_UNGATE_ADDR_U0 = 0;
    *(volatile ssdvt_uint32 *)USIP_UNGATE_ADDR_U1 = 0;
    *(volatile ssdvt_uint32 *)USIP_UNGATE_ADDR_U2 = 0;
    *(volatile ssdvt_uint32 *)USIP_UNGATE_ADDR_U3 = 0;
}

void SSDVT_CHECK_USIP_BOOT_DONE(ssdvt_uint32 check_pattern)
{
    do {
        usip0_th0_boot_pattern = (volatile ssdvt_uint32)INNER_SS_BOOTINFO->BootUpReady;
        usip0_th1_boot_pattern = (volatile ssdvt_uint32)BRP_SS_BOOTINFO->BootUpReady;        
        usip1_th0_boot_pattern = (volatile ssdvt_uint32)FEC_WBRP_SS_BOOTINFO->BootUpReady;
        usip1_th1_boot_pattern = (volatile ssdvt_uint32)SPEECH_SS_BOOTINFO->BootUpReady;
    } while(usip0_th0_boot_pattern != check_pattern || usip0_th1_boot_pattern != check_pattern 
          || usip1_th0_boot_pattern != check_pattern || usip1_th1_boot_pattern != check_pattern);

    SSDVT_ASSERT_EQ(usip0_th0_boot_pattern, check_pattern);
    SSDVT_ASSERT_EQ(usip0_th1_boot_pattern, check_pattern);
    SSDVT_ASSERT_EQ(usip1_th0_boot_pattern, check_pattern);
    SSDVT_ASSERT_EQ(usip1_th1_boot_pattern, check_pattern);
}



