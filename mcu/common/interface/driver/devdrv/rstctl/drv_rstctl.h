#ifndef __DRV_RSTCTL_H__
#define __DRV_RSTCTL_H__

/*Set wdt timeout interval as 30 sec(32768*15=0xF0000)*/
/*System default value is 16 secs (32768*16) = 0x80000*/
/*Reason to change this vlaue: to distinguish system is WDT reset or simply reboot*/
#define VPE_NUM 8
#define WDT_RSTINTERVAL_VALUE	(0xF0000)
#define WDT_RSTINTERVAL_VALUE2	(0x140000)


/*For RGU framework purpose. */

typedef enum{
    UT_REPORT_FAIL = -1,
    UT_REPORT_PASS = 0,
    UT_REPORT_NA
}UT_REPORT_STATUS;


typedef UT_REPORT_STATUS (*ut_testcase_fn_ptr)(kal_uint32 flags, void *param);


typedef struct
{
    ut_testcase_fn_ptr _main_fn;
    kal_uint32         flags;
    void               *para;
	kal_char           *description;
	kal_char           *testplan_section;
}ut_testcase_struct;


typedef enum
{
 	APSYS = 8, 
	MD1SYS = 4, 
	ARM7SYS = 2, 
	L1SYS = 1
}subsystem_e; 


typedef enum
{
 	VPE0 = 0, 
	VPE1,
	VPE2,
	VPE3,
	VPE4,
	VPE5,
	VPE6,
	VPE7,	
}vpeid_e;

/*For software  reset purpose. */
typedef enum
{
	RST_TARGET_MIN=0,

    RST_IA_LOGGER,
    RST_MDUART0,
    RST_MDUART1,
    RST_SOE,
    RST_USIM1,
    RST_USIM2,
    RST_GPT,
    RST_MDTOPSM,
    RST_MDOST,
    RST_TRACE,
    RST_L1SYS,
    RST_MML2,

    /* Below enums in Gen93 is for dummy */
	RST_MDGDMA,				//MDPERI:0
	RST_MDGPTM,				//MDPERI:4
	RST_MDMISC,				//MDPERI:5
	RST_MDCIRQ,				//MDPERI:6
	RST_I2C,				//MDPERI:7
	RST_MDDBGSYS,			//MDPERI:8
	RST_MDDBGSIB,			//MDPERI:9
	//RST_GPIOMUX,			//Remove in ELBRUS
	RST_MDEINT,				//MDPERI:10    New in ELBRUS
	RST_MDCFGCTL,			//MDPERI:13
	RST_MDECT,				//MDPERI:14  	!!NEW!!
	RST_MDECTDBG,			//MDPERI:15  	!!NEW!!
	RST_MDCLKBUS,			//MDPERI:16  	!!NEW!!
	RST_MDCLK,				//MDPERI:17 	!!NEW!!
	RST_PSLITE_GPT, 		//MDPERI:19   !!NEW!!
	//RST_ARM7_PCCIF, 		//Remove in ELBRUS
	RST_SDF,				//MDPERI:20	New in ELBRUS
	RST_THERM,				//MDPERI:21	New in ELBRUS
	RST_MDGPTM_L1,			//MDPERI:23	New in ELBRUS
	RST_PSLITE_GPT_L1,		//MDPERI:24	New in ELBRUS

	RST_MDINFRA_BUSMON,		//MDINFRA:0
	//RST_MDINFRA_BOOTROM,	//Remove in ELBRUS
	//RST_ABM,				//Remove in ELBRUS
	RST_MDUART2, 			//MDINFRA:2
	RST_PSPERI, 			//MDINFRA:3
	RST_BUS_RECORD,			//MDINFRA:4
	RST_MDMCU_PCCIF,		//MDINFRA:6		New in ELBRUS
	RST_CK208M,				//MDINFRA:7		New in ELBRUS
	RST_CK150M,				//MDINFRA:8		New in ELBRUS
	RST_PPC,				//MDINFRA:9		New in ELBRUS
	RST_MDINFRA_MDMISC,		//MDINFRA:10		New in ELBRUS
	RST_LOGGDMA,			//MDINFRA:11		New in ELBRUS
	RST_MDINFRA_ABM,		//MDINFRA:12		New in ELBRUS
	RST_MDINFRA_ELM,		//MDINFRA:13		New in ELBRUS

	RST_MIPS_DBG,			//MDMCU: 0
	RST_MIPS_NRESET,			//MDMCU: 1
	RST_MIPS_BUSMON,			//MDMCU: 2
	//RST_PF,				//Remove in ELBRUS
	//RST_PCMON_FIFO,		//Remove in ELBRUS
	RST_PCMON_REG,			//MDMCU: 3
	RST_ABM,				//MDMCU: 4	New in ELBRUS
	RST_ELM,				//MDMCU: 5	New in ELBRUS
	RST_MOBR,				//MDMCU: 6	New in ELBRUS
	RST_MMBR,				//MDMCU: 7	New in ELBRUS
	RST_L2SRAM,				//MDMCU: 8	New in ELBRUS
	RST_ULS,				//MDMCU: 9	New in ELBRUS
	RST_IOCU_ELM,			//MDMCU: 10	New in ELBRUS

	RST_L2COP, 				//LTEL2: 0 	

	RST_HSPAL2, 			//HSPAL2: 0
	RST_TARGET_MAX,		/**< Maximum value of reset item : for correctness check */
	RST_NULL,				//Used in drv_UT_within_RGU_framework. Some IPs do not tolerate software while programe is running. 
	

	RST_BSI_ALL,
	RST_MDALL,

	RST_MDALL_WO_SPI,
	RST_MDALL_WO_USB,
	RST_MDALL_WO_GPIO,
	RST_CLDMA,			//for Yts'sreset CLDMA
	RST_CLDMA_AO		//for Yts'sreset CLDMA
} rst_target_e;

typedef enum
{
	WDT_RESET,
	WDT_IRQ_ONLY,
} wdt_irq_e;

typedef enum
{
	WDT,
	AUX_WDT,
} wdt_e;

typedef enum
{
    RST_MIPS_LOCK = 0,
    RST_MIPS_UNLOCK = 1,
}rst_mips_lock_e;


/*****************************************************************************
 *						 function declaration                                *
 *****************************************************************************/

extern kal_bool drv_rstctl_sw_reset(rst_target_e targetIP);


/*************************************************************************
* FUNCTION
*  drv_rstctl_wdt_reset
*
* DESCRIPTION
*  This function is to do wdt reset
*
* PARAMETERS
*    none
*
* RETURN VALUES
*	none
*
*************************************************************************/
extern void drv_rstctl_wdt_reset(void);

extern void drv_rstctl_wdt_reset_aux(void);


/*************************************************************************
* FUNCTION
*  drv_rstctl_wdt_abnReset
*
* DESCRIPTION
*  This function is used to do abnormal reset
*
* PARAMETERS
*    none
*
* RETURN VALUES
*	none
*
*************************************************************************/
extern void drv_rstctl_wdt_abnReset(void);

/*************************************************************************
* FUNCTION
*  drv_rstctl_wdt_enableInterrupt
*
* DESCRIPTION
*  This function is used to on/off irq mode
*       reset or trigger interrupt while watchdog timout happening
*
* PARAMETERS
*    none
*
* RETURN VALUES
*	none
*
*************************************************************************/
extern void drv_rstctl_wdt_enableInterrupt(kal_bool enable);

extern void drv_rstctl_wdt_enableInterrupt_aux(kal_bool enable);


/*************************************************************************
* FUNCTION
*  drv_rstctl_wd_clrSta
*
* DESCRIPTION
*  This function is used to get wd timer interval(uint:512*T(32k))
*
* PARAMETERS
*	none
*
* RETURN VALUES
*	none
*************************************************************************/
extern kal_uint32 drv_rstctl_wd_getInterval(void);

extern kal_uint32 drv_rstctl_wd_getInterval_aux(void);


/*************************************************************************
* FUNCTION
*  drv_rstctl_wd_clrCnt
*
* DESCRIPTION
*  This function is used to clear wdt cnt
*
* PARAMETERS
*	cntMaskToClear
*   0: clear both AP/MD WD Cnt
*   MD_WDCNT_CLR: clear MD WD Cnt
*   AP_WDCNT_CLR: clear AP WD Cnt
*
* RETURN VALUES
*	none
*************************************************************************/
//extern void drv_rstctl_wd_clrCnt(kal_uint32 cntMaskToClear);

/*************************************************************************
* FUNCTION
*  drv_rstctl_wdt_setInterval
*
* DESCRIPTION
*  This function is used to set wd tiemr
*
* PARAMETERS
*    none
*
* RETURN VALUES
*	none
*
* NOTE
*    Need to restart wdt timer to apply this value
*************************************************************************/
extern void drv_rstctl_wdt_setInterval(kal_uint32 wdtInterval);

extern void drv_rstctl_wdt_setInterval_aux(kal_uint32 wdtInterval);


/*************************************************************************
* FUNCTION
*  drv_rstctl_wd_kick
*
* DESCRIPTION
*  This function is used to retart wd tiemr
*
* PARAMETERS
*    none
*
* RETURN VALUES
*	none
*************************************************************************/
extern void drv_rstctl_restartWDT(void);

/*************************************************************************
* FUNCTION
*  drv_rstctl_wdt_init
*
* DESCRIPTION
*  This function is to initialize the WDT module
*
* PARAMETERS
*    none
*
* RETURN VALUES
*	none
*
*************************************************************************/
extern void drv_rstctl_wdt_init(void);

extern void drv_rstctl_wdt_init_aux(void);


/*************************************************************************
* FUNCTION
*  drv_rstctl_wdt_enableDebugMode
*
* DESCRIPTION
*  This function is used to on/off debug mode
*
* PARAMETERS
*	cntMaskToClear
*   0: clear both AP/MD WD Cnt
*   MD_WDCNT_CLR: clear MD WD Cnt
*   AP_WDCNT_CLR: clear AP WD Cnt
*
* RETURN VALUES
*	none
*************************************************************************/
extern void drv_rstctl_wdt_enableDebugMode(kal_bool enable);

/*************************************************************************
* FUNCTION
*  drv_rstctl_wdt_enable
*
* DESCRIPTION
*  This function is used to on/off wd timer
*
* PARAMETERS
*    none
*
* RETURN VALUES
*	none
*
* NOTE
*    Need to restart wdt timer to apply this value
*************************************************************************/
extern void drv_rstctl_wdt_enable(kal_bool en);

extern void drv_rstctl_wdt_enable_aux(kal_bool en);

extern void drv_rstctl_set_check_bit(vpeid_e vpe);

extern void drv_rstctl_clr_check_bit(vpeid_e vpe);

extern void drv_rstctl_set_kick_bit(vpeid_e vpe);

extern void drv_rstctl_clr_kick_bit(vpeid_e vpe);

/*************************************************************************
* FUNCTION
*  drv_rstctl_disable_all_WDTs
*
* DESCRIPTION
*  This function is used to disable all WDTs (APRGU, MDRGU, L1RGU, ARM7RGU)
* 
*
* PARAMETERS
*   None. 
*
* RETURN VALUES
*	KAL_TRUE: SUCCESSFULY disable all WDTs. 
*	KAL_FALSE: FAIL to disable all WDTs.  
*
* NOTE
*************************************************************************/
extern kal_bool drv_rstctl_disable_all_WDTs(void); 


/*************************************************************************
* FUNCTION
*  drv_rstctl_A7_unlock
*
* DESCRIPTION
*  This function is used to unlock ARM7 hrst
*
* PARAMETERS
*	lock:   RST_A7_LOCK:
*            RST_A7_UNLOCK:
*
* RETURN VALUES
*	none
*
*************************************************************************/

void drv_rstctl_MIPS_unlock(rst_mips_lock_e lock);

extern void mips_isr_mdwdt_handler(void);

extern void invalidate_WDTBASE(void);

extern UT_REPORT_STATUS drv_UT_within_RGU_framework(rst_target_e targetIP, subsystem_e target_system, subsystem_e system_coverage,
													   ut_testcase_struct *testcase_ptr, kal_uint32 test_items, kal_uint32 delay_cycles);
/*
kal_uint32 Get_WATCHDOG_BASE(void);

kal_uint32 Get_WATCHDOG_RESTART_CMD(void);
*/
kal_bool Is_WDT_Init(void);

void WDT_init(void);
void wdt_enable(kal_bool en);

/*nucleus schedule for WDT restart******************************************/
extern const kal_uint32 g_WATCHDOG_RESTART_REG;
extern const kal_uint32 g_WATCHDOG_RESTART_VALUE;
extern const kal_uint32 g_ABNORMAL_RST_REG;
extern const kal_uint32 g_ABNORMAL_RST_VAL;

#endif /* end of __DRV_RSTCLT_H__ */

