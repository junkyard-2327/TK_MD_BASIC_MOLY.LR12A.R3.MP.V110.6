#include "ssdvt_typedef.h"
#include "ssdvt_header.h"
#include "ssdvt_util.h"

#include "reg_base.h"
#include "mem_access_path_test.h"

#include "RM_public.h"
#include "drv_comm.h"
#include "sync_data.h"

/*******************************************************************************
*  Macro
*******************************************************************************/
//#define __BIG_RAM_TEST__

/*
  * for some component cannot be access from mcu, ex: usip cache/tbuf/btb
  * rake tbuf, so we need to connect to dsp coretracer to check the value
  *
  * there are some problem with csys mask restore, so we can only test power down and sleep mode one by one
  * i.e. don't open __MANUALLY_TEST_POWER_DOWN__ and __MANUALLY_TEST_SLEEP__ at the same time
  */
#if 0
/* under construction !*/
#else
//#define __MANUALLY_TEST_SLEEP__
#endif

#define SRAM_CTRL_WRITE(addr, data) {DRV_WriteReg32(addr, data); MO_Sync();}

typedef enum DSP_SRAM_CTRL {
    DSP_SRAM_CTRL_POWER_DOWN_TYPE,
    DSP_SRAM_CTRL_SLEEP_TYPE
} DSP_SRAM_CTRL_TYPE;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
// #define BASE_MADDR_MDPERI_MD_TOPSM (0xA00D0000)
// #define L1_BASE_MADDR_MODEM_TOPSM (0xA6000000)
#define TOPSM_DSP_PWR_CTRL          (BASE_MADDR_MDPERI_MD_TOPSM + 0x300)
#define TOPSM_USIP_PWR_CTRL         (BASE_MADDR_MDPERI_MD_TOPSM + 0x340)
#define TOPSM_RAKE_PWR_CTRL         (L1_BASE_MADDR_MODEM_TOPSM + 0x344)
#define TOPSM_SCQ16_PWR_CTRL        (L1_BASE_MADDR_MODEM_TOPSM + 0x144)
#define L1_USIP_TIMER_CTRL          (L1_BASE_MADDR_MODEM_TOPSM + 0x160)
#define RAKE_SCQ_FORCE_ON_ADDR      (L1_BASE_MADDR_MODEM_TOPSM + 0x14)

#define SRAM_CTRL_USIP_ADDR         (0xA01D0000)
#define SRAM_CTRL_SCQ16_ADDR        (0xA6120004)
#define SRAM_CTRL_BIGRAM_ADDR       (0xA612000C)
#define SRAM_CTRL_RAKE_ADDR         (0xA6120010)

/* power down type: default value, the data on sram will lost if power-off */
#define SRAM_CTRL_USIP_POWER_DOWN   (0x3)
#define SRAM_CTRL_SCQ16_POWER_DOWN  (0x7FF)
#define SRAM_CTRL_BIGRAM_POWER_DOWN (0x7)
#define SRAM_CTRL_RAKE_POWER_DOWN   (0xFF)

/* sleep type, the data on sram will keep if power-off */
#define SRAM_CTRL_USIP_SLEEP        (0x0)
#define SRAM_CTRL_SCQ16_SLEEP       (0x0)
#define SRAM_CTRL_BIGRAM_SLEEP      (0x0)
#define SRAM_CTRL_RAKE_SLEEP        (0x0)

#define USIP01_PWR_STA              (BASE_MADDR_MDPERI_MD_TOPSM + 0xD4)
#define RAKE_SCQ_PWR_STA            (L1_BASE_MADDR_MODEM_TOPSM + 0xD4)

//bit 2/3 = usip0/1
#define USIP01_PWR_MASK             (0x0000000C)
//bit 5/6 = rake/bram 
#define RAKE_PWR_MASK               (0x00000020)
#define SCQ16_PWR_MASK              (0x00000040)

#define big_ram_base                (0xa9000000)
#define big_rame_size               (0x100000)
#define SRAM_CTRL_WRITE_PATTERN     (0x55668877)

#define USIP_UNGATE_ADDR_U0         (0xA1630400)
#define USIP_UNGATE_ADDR_U1         (0xA1630404)
#define USIP_UNGATE_ADDR_U2         (0xA1630408)
#define USIP_UNGATE_ADDR_U3         (0xA163040c)

#define USIP_EVENT_ADDR_U0          (0xA1630600)
#define USIP_EVENT_ADDR_U1          (0xA1630604)
#define USIP_EVENT_ADDR_U2          (0xA1630608)
#define USIP_EVENT_ADDR_U3          (0xA163060c)

#define USIP_USTIMER_CLR_U0         (0xA1630204)
#define USIP_USTIMER_CLR_U1         (0xA1630284)
#define USIP_USTIMER_CLR_U2         (0xA1630304)
#define USIP_USTIMER_CLR_U3         (0xA1630384)


/*******************************************************************************
*  Global variables 
*******************************************************************************/
volatile ssdvt_uint32 ssdvt_usip_power_status = 0;
volatile ssdvt_uint32 ssdvt_rake_power_status = 0;
volatile ssdvt_uint32 ssdvt_scq16_power_status = 0;

volatile ssdvt_uint32 ssdvt_usip_mask_backup = 0;
volatile ssdvt_uint32 ssdvt_rake_mask_backup = 0;
volatile ssdvt_uint32 ssdvt_scq16_mask_backup = 0;

ssdvt_uint32 dsp_sram_base_addr[] = {usip0_itcm_base,
                                     usip1_itcm_base,
                                     usip0_dtcm_base,
                                     usip1_dtcm_base,
                                     rake_pm_base,
                                     rake_dm_base,
                                     SHARE_PM_base,
                                     SHARE_DM_base,
                                     PRIVATE_DM0_base,
                                     PRIVATE_DM1_base,
#if defined(__BIG_RAM_TEST__)
                                     big_ram_base,
#endif                                     
                                     };
#if 1
ssdvt_uint32 dsp_sram_base_size[] = {usip0_itcm_size,
                                     usip1_itcm_size,
                                     usip0_dtcm_size,
                                     usip1_dtcm_size,
                                     rake_pm_size,
                                     rake_dm_size,
                                     share_pm_size,
                                     share_dm_size,
                                     local_dm_size,
                                     local_dm_size,                        
#if defined(__BIG_RAM_TEST__)
                                     big_rame_size,
#endif
                                     };
#else
/* under construction !*/
/* under construction !*/
#endif
ssdvt_uint32 dsp_sram_number = sizeof(dsp_sram_base_addr) / sizeof(ssdvt_uint32);

#if (defined(__MANUALLY_TEST_POWER_DOWN__) || defined(__MANUALLY_TEST_SLEEP__))
volatile ssdvt_uint32 dsp_sram_test_stop = 1;
#endif
/*******************************************************************************
* External Global variable 
*******************************************************************************/

/*******************************************************************************
*  Functions 
*******************************************************************************/

void SSDVT_USIP_TCM_DATA_BACKUP()
{
    kal_mem_cpy(0xfcc0000, usip0_itcm_base, usip0_itcm_size);
    kal_mem_cpy(0xfcd0000, usip0_dtcm_base, usip0_dtcm_size);
    kal_mem_cpy(0xfce0000, usip1_itcm_base, usip1_itcm_size);
    kal_mem_cpy(0xfcf0000, usip1_dtcm_base, usip1_dtcm_size);
    Data_Sync_Barrier();
}

void SSDVT_USIP_TCM_DATA_RESTORE()
{
    kal_mem_cpy(usip0_itcm_base, 0xfcc0000, usip0_itcm_size);
    kal_mem_cpy(usip0_dtcm_base, 0xfcd0000, usip0_dtcm_size);
    kal_mem_cpy(usip1_itcm_base, 0xfce0000, usip1_itcm_size);
    kal_mem_cpy(usip1_dtcm_base, 0xfcf0000, usip1_dtcm_size);
    Data_Sync_Barrier();
}

void SSDVT_DSP_SRAM_CTRL_TEST_INIT()
{
    L1_RM_Module i;
#if 0    
/* under construction !*/
/* under construction !*/
#endif
    SSDVT_USIP_TCM_DATA_BACKUP();

    // rake mask
    ssdvt_rake_mask_backup = DRV_Reg32(TOPSM_RAKE_PWR_CTRL);
    SRAM_CTRL_WRITE(TOPSM_RAKE_PWR_CTRL, 0x03030302);
    
    // scq16 mask
    ssdvt_scq16_mask_backup = DRV_Reg32(TOPSM_SCQ16_PWR_CTRL);
    SRAM_CTRL_WRITE(TOPSM_SCQ16_PWR_CTRL, 0x3F3F3F21);

    // clean all sw power-on source
    for (i = 0; i < L1_NUMBER_OF_RESOURCE; i++)
    {
        L1_RM_Resource_Control(i, KAL_FALSE);
    }

    // set non force on
    MODEM_TOPSM_NonForceOnMTCMOS(0xff);

    SRAM_CTRL_WRITE(RAKE_SCQ_FORCE_ON_ADDR, 0xB2000D01);
    
    // mask csys and cti, let dsp can power down when use debugger connect to iA
    // set 1: mask it
    ssdvt_usip_mask_backup = DRV_Reg32(TOPSM_DSP_PWR_CTRL);
    // dsp cores mask - bit 0: csys, bit 1: cti
    SRAM_CTRL_WRITE(TOPSM_DSP_PWR_CTRL, 0x3);
    
    // mask 2/3/4G timer of usip
    SRAM_CTRL_WRITE(L1_USIP_TIMER_CTRL, 0xFFFFFFFF);

}

void SSDVT_DSP_SRAM_CTRL_TEST_RESUME_MASK()
{
    SRAM_CTRL_WRITE(TOPSM_RAKE_PWR_CTRL, ssdvt_rake_mask_backup);

    SRAM_CTRL_WRITE(TOPSM_SCQ16_PWR_CTRL, ssdvt_scq16_mask_backup);

    SRAM_CTRL_WRITE(TOPSM_DSP_PWR_CTRL, ssdvt_usip_mask_backup);
}


void SSDVT_UNGATE_USIP()
{
    
    SRAM_CTRL_WRITE(USIP_USTIMER_CLR_U0, 0xFFFFFFFF);
    SRAM_CTRL_WRITE(USIP_USTIMER_CLR_U1, 0xFFFFFFFF);
    SRAM_CTRL_WRITE(USIP_USTIMER_CLR_U2, 0xFFFFFFFF);
    SRAM_CTRL_WRITE(USIP_USTIMER_CLR_U3, 0xFFFFFFFF);

    SRAM_CTRL_WRITE(USIP_UNGATE_ADDR_U0, 0);
    SRAM_CTRL_WRITE(USIP_UNGATE_ADDR_U1, 0);
    SRAM_CTRL_WRITE(USIP_UNGATE_ADDR_U2, 0);
    SRAM_CTRL_WRITE(USIP_UNGATE_ADDR_U3, 0);

    SRAM_CTRL_WRITE(USIP_EVENT_ADDR_U0, 1);
    SRAM_CTRL_WRITE(USIP_EVENT_ADDR_U1, 1);
    SRAM_CTRL_WRITE(USIP_EVENT_ADDR_U2, 1);
    SRAM_CTRL_WRITE(USIP_EVENT_ADDR_U3, 1);
}

void SSDVT_GATE_USIP()
{
    SRAM_CTRL_WRITE(USIP_UNGATE_ADDR_U0, 1);
    SRAM_CTRL_WRITE(USIP_UNGATE_ADDR_U1, 1);
    SRAM_CTRL_WRITE(USIP_UNGATE_ADDR_U2, 1);
    SRAM_CTRL_WRITE(USIP_UNGATE_ADDR_U3, 1);
}


void SSDVT_CHECK_USIP_POWER_ON()
{
    do {
        ssdvt_usip_power_status = DRV_Reg32(USIP01_PWR_STA) & USIP01_PWR_MASK;
    } while (ssdvt_usip_power_status == 0);
}

void SSDVT_CHECK_USIP_POWER_OFF()
{
    do {
        ssdvt_usip_power_status = DRV_Reg32(USIP01_PWR_STA) & USIP01_PWR_MASK;
    } while (ssdvt_usip_power_status != 0);
}


void SSDVT_CHECK_RAKE_POWER_ON()
{
    do {
        ssdvt_rake_power_status = DRV_Reg32(RAKE_SCQ_PWR_STA) & RAKE_PWR_MASK;
    } while (ssdvt_rake_power_status == 0);
}

void SSDVT_CHECK_RAKE_POWER_OFF()
{
    do {
        ssdvt_rake_power_status = DRV_Reg32(RAKE_SCQ_PWR_STA) & RAKE_PWR_MASK;
    } while (ssdvt_rake_power_status != 0);
}

void SSDVT_CHECK_SCQ16_POWER_ON()
{
    do {
        ssdvt_scq16_power_status = DRV_Reg32(RAKE_SCQ_PWR_STA) & SCQ16_PWR_MASK;
    } while (ssdvt_scq16_power_status == 0);

#if defined(__BIG_RAM_TEST__)
    /* turn on bigram clock for bigram access later */
    SRAM_CTRL_WRITE(0xAB810008, 0x7ff);
    SRAM_CTRL_WRITE(0xAB830000, 0x1);
    SRAM_CTRL_WRITE(0xAB860000, 0x10);
    SSDVT_ASSERT_EQ(DRV_Reg32(0xAB810000), 0xFFFFF800);
    SSDVT_ASSERT_EQ(DRV_Reg32(0xAB830000), 0x1);
    SRAM_CTRL_WRITE(0xAB810008, 0x7ff);
    SRAM_CTRL_WRITE(0xAB830000, 0x1);
#endif
}

void SSDVT_CHECK_SCQ16_POWER_OFF()
{
    do {
        ssdvt_scq16_power_status = DRV_Reg32(RAKE_SCQ_PWR_STA) & SCQ16_PWR_MASK;
    } while (ssdvt_scq16_power_status != 0);
}


void SSDVT_FORCE_USIP_ON(void)
{
    MD_TOPSM_PWR_SW_Control(USIP0_PWR, KAL_TRUE);

    SSDVT_CHECK_USIP_POWER_ON();
}

void SSDVT_FORCE_USIP_OFF(void)
{
    MD_TOPSM_PWR_SW_Control(USIP0_PWR, KAL_FALSE);

    SSDVT_CHECK_USIP_POWER_OFF();
}

void SSDVT_FORCE_RAKE_ON(void)
{
    L1_RM_Resource_Control(L1_RAKE_REQ_FDD, KAL_TRUE);
    while(L1_RM_Resource_CheckReady(L1_RAKE_REQ_FDD) == KAL_FALSE);

    SSDVT_CHECK_RAKE_POWER_ON();
}

void SSDVT_FORCE_RAKE_OFF(void)
{
    L1_RM_Resource_Control(L1_RAKE_REQ_FDD, KAL_FALSE);
    while(L1_RM_Resource_CheckReady(L1_RAKE_REQ_FDD) == KAL_TRUE);

    SSDVT_CHECK_RAKE_POWER_OFF();
}

void SSDVT_FORCE_SCQ16_ON(void)
{
    L1_RM_Resource_Control(L1_BRAM_ALL_REQ_FDD, KAL_TRUE);  
    while(L1_RM_Resource_CheckReady(L1_BRAM_ALL_REQ_FDD) == KAL_FALSE);

    SSDVT_CHECK_SCQ16_POWER_ON();
}

void SSDVT_FORCE_SCQ16_OFF(void)
{
    L1_RM_Resource_Control(L1_BRAM_ALL_REQ_FDD, KAL_FALSE);
    while(L1_RM_Resource_CheckReady(L1_BRAM_ALL_REQ_FDD) == KAL_TRUE);  

    SSDVT_CHECK_SCQ16_POWER_OFF();
}

void SSDVT_DSP_POWER_ON()
{
    SSDVT_FORCE_SCQ16_ON();

    SSDVT_FORCE_RAKE_ON();

    SSDVT_FORCE_USIP_ON();   
}

void SSDVT_DSP_POWER_OFF()
{
    SSDVT_FORCE_SCQ16_OFF();

    SSDVT_FORCE_RAKE_OFF();

    SSDVT_FORCE_USIP_OFF();
}

void SSDVT_CHECK_SRAM_CTRL_DEFAULT_VALUE()
{
    SSDVT_ASSERT_EQ(DRV_Reg32(SRAM_CTRL_USIP_ADDR), SRAM_CTRL_USIP_POWER_DOWN);

    SSDVT_ASSERT_EQ(DRV_Reg32(SRAM_CTRL_SCQ16_ADDR), SRAM_CTRL_SCQ16_POWER_DOWN);

    SSDVT_ASSERT_EQ(DRV_Reg32(SRAM_CTRL_RAKE_ADDR), SRAM_CTRL_RAKE_POWER_DOWN);
}

void SSDVT_SET_SRAM_TYPE_SLEEP()
{
    SRAM_CTRL_WRITE(SRAM_CTRL_USIP_ADDR, SRAM_CTRL_USIP_SLEEP);

    SRAM_CTRL_WRITE(SRAM_CTRL_SCQ16_ADDR, SRAM_CTRL_SCQ16_SLEEP);

    SRAM_CTRL_WRITE(SRAM_CTRL_BIGRAM_ADDR, SRAM_CTRL_BIGRAM_SLEEP);

    SRAM_CTRL_WRITE(SRAM_CTRL_RAKE_ADDR, SRAM_CTRL_RAKE_SLEEP);
}

void SSDVT_SET_SRAM_TYPE_POWER_DOWN()
{
    SRAM_CTRL_WRITE(SRAM_CTRL_USIP_ADDR, SRAM_CTRL_USIP_POWER_DOWN);

    SRAM_CTRL_WRITE(SRAM_CTRL_SCQ16_ADDR, SRAM_CTRL_SCQ16_POWER_DOWN);

    SRAM_CTRL_WRITE(SRAM_CTRL_BIGRAM_ADDR, SRAM_CTRL_BIGRAM_POWER_DOWN);

    SRAM_CTRL_WRITE(SRAM_CTRL_RAKE_ADDR, SRAM_CTRL_RAKE_POWER_DOWN);
}


void SSDVT_WRITE_DATA_TO_DSP_SRAM()
{
    ssdvt_uint32 i;
    ssdvt_uint32 j = 0;
    for (i = 0; i < dsp_sram_number; i++)
    {
        for (j = 0; j < dsp_sram_base_size[i]; j += 4)
        {
            SRAM_CTRL_WRITE(dsp_sram_base_addr[i] + j, (dsp_sram_base_addr[i] + j));
        }
    }
}


void SSDVT_READ_DATA_FROM_DSP_SRAM(const DSP_SRAM_CTRL_TYPE sram_ctrl_type, const ssdvt_uint32 expect_value)
{
    ssdvt_uint32 i;
    ssdvt_uint32 j = 0;
    for (i = 0; i < dsp_sram_number; i++)
    {
        for (j = 0; j < dsp_sram_base_size[i]; j += 4)
        {
            if (DSP_SRAM_CTRL_POWER_DOWN_TYPE == sram_ctrl_type)
            {
                if (DRV_Reg32(dsp_sram_base_addr[i] + j) == (dsp_sram_base_addr[i] + j))
                {
                    ERROR_LOOP
                }
            }
            else if (DSP_SRAM_CTRL_SLEEP_TYPE == sram_ctrl_type)
            {
                SSDVT_ASSERT_EQ(DRV_Reg32(dsp_sram_base_addr[i] + j), (dsp_sram_base_addr[i] + j));
            }
            else
            {
                SSDVT_ASSERT_EQ(1, 2);
            }
        }
    }
}

void SSDVT_SRAM_CTRL_TYPE_TEST(const DSP_SRAM_CTRL_TYPE sram_ctrl_type)
{
    if (DSP_SRAM_CTRL_POWER_DOWN_TYPE == sram_ctrl_type)
    {
        SSDVT_SET_SRAM_TYPE_POWER_DOWN();
    }
    else if (DSP_SRAM_CTRL_SLEEP_TYPE == sram_ctrl_type)
    {
        SSDVT_SET_SRAM_TYPE_SLEEP();
    }
    else
    {
        SSDVT_ASSERT_EQ(1, 2);
    }  

    SSDVT_DSP_POWER_ON();

#if !(defined(__MANUALLY_TEST_POWER_DOWN__) || defined(__MANUALLY_TEST_SLEEP__))
    SSDVT_WRITE_DATA_TO_DSP_SRAM();
#else
    SSDVT_DELAY_LOOP(0x1000000);
    SSDVT_DELAY_LOOP(0x1000000);
    SSDVT_DELAY_LOOP(0x1000000);
    SSDVT_GATE_USIP();
#endif

    SSDVT_DSP_POWER_OFF();

    SSDVT_DSP_POWER_ON();

#if !(defined(__MANUALLY_TEST_POWER_DOWN__) || defined(__MANUALLY_TEST_SLEEP__))
    SSDVT_READ_DATA_FROM_DSP_SRAM(sram_ctrl_type, SRAM_CTRL_WRITE_PATTERN);

    //SSDVT_CHECK_DATA(sram_ctrl_type, SRAM_CTRL_WRITE_PATTERN);
#else
    if (DSP_SRAM_CTRL_POWER_DOWN_TYPE == sram_ctrl_type)
    {
        SSDVT_USIP_TCM_DATA_RESTORE();
    }
    SSDVT_UNGATE_USIP();
#endif
}

void SSDVT_SRAM_CTRL_TEST()
{   
    /* let dsp cores can power-ff */
    SSDVT_DSP_SRAM_CTRL_TEST_INIT();

    /* init value test */
    SSDVT_CHECK_SRAM_CTRL_DEFAULT_VALUE();

#if !defined(__MANUALLY_TEST_SLEEP__)
    /* SRAM control type : power down */
    SSDVT_SRAM_CTRL_TYPE_TEST(DSP_SRAM_CTRL_POWER_DOWN_TYPE);

#if defined(__MANUALLY_TEST_POWER_DOWN__)
    SSDVT_DSP_SRAM_CTRL_TEST_RESUME_MASK();

    // stop here to attach dsp debugger to check the data
    while(1 == dsp_sram_test_stop);
    dsp_sram_test_stop = 1;

    //SSDVT_DSP_SRAM_CTRL_TEST_INIT();
#endif // defined(__MANUALLY_TEST_SLEEP__)

#endif // !defined(__MANUALLY_TEST_SLEEP__)
    /* SRAM control type : sleep */
    SSDVT_SRAM_CTRL_TYPE_TEST(DSP_SRAM_CTRL_SLEEP_TYPE);

#if defined(__MANUALLY_TEST_SLEEP__)
    SSDVT_DSP_SRAM_CTRL_TEST_RESUME_MASK();

    // stop here to attach dsp debugger to check the data    
    while(1 == dsp_sram_test_stop);
    dsp_sram_test_stop = 1;
#endif
    
    ssdvt_test_pass_notification();    
    
    return;
}



