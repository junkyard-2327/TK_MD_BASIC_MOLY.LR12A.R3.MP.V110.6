#include "elm.h"
#include "drv_comm.h"
#include "us_timer.h"
#include "kal_public_api.h"
#include "kal_hrt_api.h"
#include "intrCtrl.h"
#include "drv_mdap_interface.h"	//for show MD_DVFS_CON in trace

#if (defined(__MTK_TARGET__) && !defined(__MAUI_BASIC__))
// for profiling ELM log
#include "kal_trace.h"	//for kal_sys_trace
#include "TrcMod.h"		//for L1 Trace API
#endif


#define REG_MCUSYS_EMI_ELM_CODA_VERSION				(BASE_ADDR_MCUSYS_ELM_EMI+0x0)
#define REG_MCUSYS_EMI_ELM_EN_REG					(BASE_ADDR_MCUSYS_ELM_EMI+0x8)
#define REG_MCUSYS_EMI_ELM_CTRL_REG					(BASE_ADDR_MCUSYS_ELM_EMI+0xC)
#define REG_MCUSYS_EMI_ELM_LAT_CNT_CTRL_REG			(BASE_ADDR_MCUSYS_ELM_EMI+0x10)
#define REG_MCUSYS_EMI_ELM_AXI_ID0_CTRL_REG			(BASE_ADDR_MCUSYS_ELM_EMI+0x20)
#define REG_MCUSYS_EMI_ELM_AXI_ID0_CTRL_MASK		(BASE_ADDR_MCUSYS_ELM_EMI+0x24)
#define REG_MCUSYS_EMI_ELM_AXI_ID1_CTRL_REG			(BASE_ADDR_MCUSYS_ELM_EMI+0x28)
#define REG_MCUSYS_EMI_ELM_AXI_ID1_CTRL_MASK		(BASE_ADDR_MCUSYS_ELM_EMI+0x2C)
#define REG_MCUSYS_EMI_ELM_AXI_ID2_CTRL_REG			(BASE_ADDR_MCUSYS_ELM_EMI+0x30)
#define REG_MCUSYS_EMI_ELM_AXI_ID2_CTRL_MASK		(BASE_ADDR_MCUSYS_ELM_EMI+0x34)
#define REG_MCUSYS_EMI_ELM_AXI_ID3_CTRL_REG			(BASE_ADDR_MCUSYS_ELM_EMI+0x38)
#define REG_MCUSYS_EMI_ELM_AXI_ID3_CTRL_MASK		(BASE_ADDR_MCUSYS_ELM_EMI+0x3C)
#define REG_MCUSYS_EMI_ELM_ID0_TRANS_TH				(BASE_ADDR_MCUSYS_ELM_EMI+0x40)
#define REG_MCUSYS_EMI_ELM_ID1_TRANS_TH				(BASE_ADDR_MCUSYS_ELM_EMI+0x44)
#define REG_MCUSYS_EMI_ELM_CNT0						(BASE_ADDR_MCUSYS_ELM_EMI+0x50)
#define REG_MCUSYS_EMI_ELM_CNT1						(BASE_ADDR_MCUSYS_ELM_EMI+0x54)
#define REG_MCUSYS_EMI_ELM_CNT2						(BASE_ADDR_MCUSYS_ELM_EMI+0x58)
#define REG_MCUSYS_EMI_ELM_CNT3						(BASE_ADDR_MCUSYS_ELM_EMI+0x5C)
#define REG_MCUSYS_EMI_ELM_OVERRUN_CNT_ST			(BASE_ADDR_MCUSYS_ELM_EMI+0x60)
#define REG_MCUSYS_EMI_ELM_INT_STATUS				(BASE_ADDR_MCUSYS_ELM_EMI+0x64)
#define REG_MCUSYS_EMI_ELM_AO_STATUS0				(BASE_ADDR_MCUSYS_ELM_EMI+0x68)
#define REG_MCUSYS_EMI_ELM_AO_STATUS1				(BASE_ADDR_MCUSYS_ELM_EMI+0x6C)
#define REG_MCUSYS_EMI_ELM_ID0_WORST_AVG_LAT		(BASE_ADDR_MCUSYS_ELM_EMI+0x70)
#define REG_MCUSYS_EMI_ELM_ID0_WORST_TOT_LAT		(BASE_ADDR_MCUSYS_ELM_EMI+0x74)
#define REG_MCUSYS_EMI_ELM_ID1_WORST_AVG_LAT		(BASE_ADDR_MCUSYS_ELM_EMI+0x78)
#define REG_MCUSYS_EMI_ELM_ID1_WORST_TOT_LAT		(BASE_ADDR_MCUSYS_ELM_EMI+0x7C)
#define REG_MCUSYS_EMI_ELM_ID0_TRANS_IN_WORST_AVG	(BASE_ADDR_MCUSYS_ELM_EMI+0x80)
#define REG_MCUSYS_EMI_ELM_ID1_TRANS_IN_WORST_AVG	(BASE_ADDR_MCUSYS_ELM_EMI+0x84)
#define REG_MDMCU_ELM_AO_STATUS0_CFG0				(BASE_ADDR_MDPERIMISC+0x70)	//0xA0060070
#define REG_MDMCU_ELM_AO_STATUS0_CFG1				(BASE_ADDR_MDPERIMISC+0x74)	//0xA0060074


#define REG_MDINFRA_EMI_ELM_CTRL_REG				(BASE_ADDR_MDINFRA_ELM+0xC)
#define REG_MDINFRA_EMI_ELM_INT_STATUS				(BASE_ADDR_MDINFRA_ELM+0x64)
#define REG_MDINFRA_EMI_ELM_ID0_WORST_AVG_LAT		(BASE_ADDR_MDINFRA_ELM+0x70)
#define REG_MDINFRA_EMI_ELM_ID0_WORST_TOT_LAT		(BASE_ADDR_MDINFRA_ELM+0x74)
#define REG_MDINFRA_EMI_ELM_ID1_WORST_AVG_LAT		(BASE_ADDR_MDINFRA_ELM+0x78)
#define REG_MDINFRA_EMI_ELM_ID1_WORST_TOT_LAT		(BASE_ADDR_MDINFRA_ELM+0x7C)
#define REG_MDINFRA_EMI_ELM_ID0_TRANS_IN_WORST_AVG	(BASE_ADDR_MDINFRA_ELM+0x80)
#define REG_MDINFRA_EMI_ELM_ID1_TRANS_IN_WORST_AVG	(BASE_ADDR_MDINFRA_ELM+0x84)

#define REG_MDINFRA_EMI_ELM_ID0_TRANS_TH				(BASE_ADDR_MDINFRA_ELM+0x40)
#define REG_MDINFRA_EMI_ELM_ID1_TRANS_TH				(BASE_ADDR_MDINFRA_ELM+0x44)
#define REG_MDINFRA_EMI_ELM_INT_STATUS				(BASE_ADDR_MDINFRA_ELM+0x64)
#define REG_MDINFRA_ELM_AO_STATUS0_CFG0				(BASE_ADDR_MDPERIMISC+0x78)	//0xA0060078
#define REG_MDINFRA_ELM_AO_STATUS0_CFG1				(BASE_ADDR_MDPERIMISC+0x7C)	//0xA006007C
#if defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#define AP_VCORE_DVFS_CURRENT		(volatile kal_uint32 *)(BASE_ADDR_AP_VCORE_DVFS+0xDC)  // current dvfsrc level
#define AP_VCORE_DVFS_LAST			(volatile kal_uint32 *)(BASE_ADDR_AP_VCORE_DVFS+0x308)  // last dvfsrc level
#define AP_VCORE_DVFS_HISTORY_BASE	(volatile kal_uint32 *)(BASE_ADDR_AP_VCORE_DVFS+0x400)  // dvfsrc history start address, end address should be 0x15C
#define AP_VCORE_DVFS_HISTORY_SIZE  24
#else
#define AP_VCORE_DVFS_CURRENT		(volatile kal_uint32 *)(BASE_ADDR_AP_VCORE_DVFS+0x50)  // current dvfsrc level
#define AP_VCORE_DVFS_LAST			(volatile kal_uint32 *)(BASE_ADDR_AP_VCORE_DVFS+0x88)  // last dvfsrc level
#define AP_VCORE_DVFS_HISTORY_BASE	(volatile kal_uint32 *)(BASE_ADDR_AP_VCORE_DVFS+0x100)  // dvfsrc history start address, end address should be 0x13C
#define AP_VCORE_DVFS_HISTORY_SIZE  16
#endif
#if defined(MT6771)
#define AP_TXZQ_OCCUR_TICK                              (volatile kal_uint32 *)(BASE_ADDR_AP_SPM+0x618)  // AP  TX/ZQ occur time
#else
#define AP_TXZQ_OCCUR_TICK                              (volatile kal_uint32 *)(BASE_ADDR_AP_SPM+0x65C)  // AP  TX/ZQ occur time
#endif

//AP  DVFS occur time
#if defined(MT6765) || defined(MT6761) || defined(MT6768)
#define AP_DVFS_OCCUR_TICK                              (volatile kal_uint32 *)(BASE_ADDR_AP_SPM+0x680)  // Cervino / Merlot
#else
#define AP_DVFS_OCCUR_TICK                              (volatile kal_uint32 *)(BASE_ADDR_AP_SPM+0x658)  // Bianco / Sylvia
#endif


#if defined(MT6739)
#define AP_DDREN_OCCUR_TICK                             (volatile kal_uint32 *)(BASE_ADDR_AP_SPM+0x64C)  // AP  DDREN occur time
#else 
//if defined(MT6761)
#define AP_DDREN_OCCUR_TICK                             (volatile kal_uint32 *)(BASE_ADDR_AP_SPM+0x65C)  // AP  DDREN occur time
#endif

#include "sleepdrv_interface.h"




// ELM Set Mode (HW/SW Mode)
enum {
	ELM_MODE_0_LATENCY = 0,   //write transaction, write latency, read transaction, read latency
	ELM_MODE_1_WORD_COUNT = 1,   //
	ELM_MODE_2_SPECIAL = 2,
	
};

enum {
	ELM_MASTER_ALL = 0,
	ELM_MASTER_USIP = 1,
	ELM_MASTER_MDMCU = 2,
	
};

#define DECODE_ID0(x) ((x)<<0)
#define LAT_TH_ID0(x) ((x)<<5)
#define LAT_TH_ID1(x) ((x)<<15)
#define ELM_ACCURACY(x) ((x)<<25)
	#define ELM_unit_1us 0
	#define ELM_unit_10us 1
	#define ELM_unit_100us 2
	#define ELM_unit_1000us 3
#define ELM_ENABLE  (1<<27)
#define ELM_DISABLE (0<<27)


#define ELM_INT_MASK(x) ((x)<<0)
	#define ID1 (3<<2)
	#define ID0 (3<<0)
#define EMI_BLOCK(x) ((x)<<4)
	#define E_NOT_MASK 0
	#define E_MASK 1
#define ELM_DURATION(x) ((x)<<5)
	#define ELM_200US 1  // need to pair EMI_unit_xxxus  0:means 1, 1:means 2
	#define ELM_400US 3
	#define ELM_1000US 0
#define DECODE_ID1(x) ((x)<<12)
	#define ELM_READ (0<<4)
	#define ELM_WRITE (1<<4)
	#define ELM_ALL_MASTER (0<<2)
	#define ELM_MDMCU_ONLY (1<<2)
	#define ELM_USIP_ONLY (2<<2)
	#define ELM_ALL_PRIO (0<<0)
	#define ELM_PRE_ULTRA (1<<0)
	#define ELM_ULTRA (2<<0)
#define ELM_EMI_TOP_BLOCK(x) ((x)<<24)

#define ELM_AO_DECODE(x) ((x)<<13)
	#define ELM_DECODE_FROM_AO  1
	#define ELM_DECODE_FROM_APB 0
#define ELM_AO_CONTROL_DEFAULT 0x73F73FFF

#define ELM_VPE_SEL(x) ((x)<<28)
	#define ELM_SEL_VPE0 0x0
	#define ELM_SEL_VPE1 0x4
	#define ELM_SEL_VPE2 0x1
	#define ELM_SEL_VPE3 0x5
#define ELM_MASTER_SEL(x) ((x)<<0)
	#define ELM_MASTER_IA_MASK 0x3	
	
#define ELM_USIP_CORE_SEL(x) (((x)<<4)|0x2)
#define ELM_USIP_PORT_SEL(x) ((x)<<2)
	#define ELM_USIP_PORT_ENABLE_MASK 0x3
	#define ELM_USIP_PORT_DISABLE_MASK 0x0
	#define ELM_SEL_USIP_ALL 0x0
	#define ELM_SEL_USIP_ICACHE 0x0
	#define ELM_SEL_USIP_DCACHE 0x1
	#define ELM_SEL_USIP_DNOCACHE 0x2


//MCUSYS fixed clock 208Mhz, 1T = 4.8ns 
#define ELM_TRANS2NS(X) ((((((X)*1000)<<4)/208)>>4))
#define ELM_NS2TRAN(X) ((((X)*208)/1000))

//MDINFRA fixed clock 100Mhz, 1T = 10ns 
#define ELM_MDIFRA_TRANS2NS(X) (((X)*10))
#define ELM_MDIFRA_NS2TRAN(X) (((X)/10))

#define ELM_HISTORY_SIZE 64

//for assert information
#define KAL_ERROR_EMI_ELM_EXCEP		0x4100
//#define KAL_ERROR_IOCU_ELM_EXCEP	0x4101
#define KAL_ERROR_DMA_ELM_EXCEP		0x4102
//#define KAL_ERROR_L1_ELM_EXCEP		0x4103

#define KAL_ERROR_EMI_ELM_CHANGE_THRESHOLD	0x4200

#if (defined(__MTK_TARGET__) && !defined(__MAUI_BASIC__))   
  #define __ELM_TRACE__
	#define ELM_IF_DEF_TRACE(def_statement, undef_statement) def_statement
#else  /* __MCU_DORMANT_MODE__ */
    #define ELM_IF_DEF_TRACE(def_statement, undef_statement) undef_statement
#endif


/*
#define REG_MDINFRA_ELM_CFG0	0xA0060078
#define REG_MDINFRA_ELM_CFG0	0xA006007C
*/
#ifdef __MTK_TARGET__

#ifdef ELM_AMIF_ENABLE
kal_uint32 elm_read_lat_threshold = 2000;
kal_uint32 elm_write_lat_threshold = 2000;
#else
kal_uint32 elm_read_lat_threshold = 400;
kal_uint32 elm_write_lat_threshold = 300;
#endif
kal_uint32 elm_infra_read_lat_threshold = 2000;
kal_uint32 elm_infra_write_lat_threshold = 2000;


kal_uint32 elm_dynamic_lat_threshold_disable = 0; //0 enable, 1 disable
kal_uint32 elm_lat_duration = 200;
kal_uint32 elm_trans_threshold = 100;
kal_uint32 elm_mode = ELM_MODE_0_LATENCY;
kal_uint32 elm_id0_master = ELM_ALL_MASTER;
kal_uint32 elm_id0_rw = ELM_READ;
kal_uint32 elm_id0_prio = ELM_ALL_PRIO;

kal_uint32 elm_id1_master = ELM_ALL_MASTER;
kal_uint32 elm_id1_rw = ELM_WRITE;
kal_uint32 elm_id1_prio = ELM_ALL_PRIO;

kal_uint32 elm_ao_decode_cfg = ELM_DECODE_FROM_AO;
kal_uint32 elm_ao_id0_value = 0;
kal_uint32 elm_ao_id0_mask = ELM_AO_CONTROL_DEFAULT;
kal_uint32 elm_ao_id1_value = 0;
kal_uint32 elm_ao_id1_mask = ELM_AO_CONTROL_DEFAULT;




#if defined(__PRODUCTION_RELEASE__)
elm_exception_type EMI_ELM_lat_irq_exception_type = ELM_NONE;   //EMI latency irq default use trace
elm_exception_type L1_DMA_irq_exception_type = ELM_NONE;        //L1 and DMA default use trace
#else
/* under construction !*/
/* under construction !*/
#endif


/*--- ELM history variable ---*/
//EMI ELM
#define	ELM_RUNTIME_HISTORY_SIZE	8
kal_uint32 emi_elm_runtime_lat_history_idx = 0;
ELM_RUNTIME_PROFILE_LAT_T emi_elm_runtime_lat_history[ELM_RUNTIME_HISTORY_SIZE];

//DMA ELM
kal_uint32 dma_elm_runtime_lat_history_idx = 0;
ELM_RUNTIME_PROFILE_LAT_T dma_elm_runtime_lat_history[ELM_RUNTIME_HISTORY_SIZE];





void elmtop_emi_isr_handler();
void elm_dma_isr_handler();



kal_uint32 elm_profile_history_idx_0 = 0;
ELM_FULL_LOG_T elm_profile_history_0[ELM_HISTORY_SIZE];


void ELM_INIT(void)
{
	/*MDMCU EMI ELM*/
	DRV_WriteReg32_NPW(REG_MDMCU_ELM_AO_STATUS0_CFG0, ELM_DISABLE);
	DRV_WriteReg32(REG_MCUSYS_EMI_ELM_INT_STATUS, 0x0F); //clear ELM interrup
	DRV_ClrReg32(REG_MCUSYS_EMI_ELM_CTRL_REG, (0x3<<4)); // clear ELM mode
	DRV_SetReg32(REG_MCUSYS_EMI_ELM_CTRL_REG, ((elm_mode&0x3)<<4));//select ELM mode
	
	DRV_WriteReg32(REG_MCUSYS_EMI_ELM_ID0_TRANS_TH, elm_trans_threshold);
	DRV_WriteReg32(REG_MCUSYS_EMI_ELM_ID1_TRANS_TH, elm_trans_threshold);
	DRV_WriteReg32(REG_MDMCU_ELM_AO_STATUS0_CFG1, ELM_EMI_TOP_BLOCK(0xff)|DECODE_ID1(elm_id1_rw|elm_id1_master|elm_id1_prio)| \
		ELM_DURATION(ELM_200US)|EMI_BLOCK(E_NOT_MASK)|ELM_INT_MASK(0));
	DRV_WriteReg32_NPW(REG_MDMCU_ELM_AO_STATUS0_CFG0, ELM_ENABLE|ELM_ACCURACY(ELM_unit_100us)| \
		LAT_TH_ID1(ELM_NS2TRAN(elm_write_lat_threshold))|LAT_TH_ID0(ELM_NS2TRAN(elm_read_lat_threshold))| \
		DECODE_ID0(elm_id0_rw|elm_id0_master|elm_id0_prio)); //ELM enable for MDMCU Reset

	MDCIRQ_IRQ_Register_LISR(IRQ_ELMTOP_EMI_IRQ_CODE, (void *)elmtop_emi_isr_handler, "ELMTOP_EMI_LISR");
	MDCIRQ_IRQSensitivity(IRQ_ELMTOP_EMI_IRQ_CODE, KAL_FALSE);  // level trigger
	MDCIRQ_IRQUnmask(IRQ_ELMTOP_EMI_IRQ_CODE);



	/*MDINFRA EMI ELM*/
	DRV_WriteReg32_NPW(REG_MDINFRA_ELM_AO_STATUS0_CFG0, ELM_DISABLE);
	DRV_WriteReg32(REG_MDINFRA_EMI_ELM_INT_STATUS, 0x0F); //clear ELM interrupt
	DRV_WriteReg32(REG_MDINFRA_EMI_ELM_ID0_TRANS_TH, elm_trans_threshold);
	DRV_WriteReg32(REG_MDINFRA_EMI_ELM_ID1_TRANS_TH, elm_trans_threshold);
	DRV_WriteReg32(REG_MDINFRA_ELM_AO_STATUS0_CFG1, ELM_EMI_TOP_BLOCK(0xff)|DECODE_ID1(elm_id1_rw|elm_id1_prio)| \
		ELM_DURATION(ELM_1000US)|EMI_BLOCK(E_NOT_MASK)|ELM_INT_MASK(0));
	DRV_WriteReg32_NPW(REG_MDINFRA_ELM_AO_STATUS0_CFG0, ELM_ENABLE|ELM_ACCURACY(ELM_unit_1000us)| \
		LAT_TH_ID1(ELM_MDIFRA_NS2TRAN(elm_infra_write_lat_threshold))|LAT_TH_ID0(ELM_MDIFRA_NS2TRAN(elm_infra_read_lat_threshold))| \
		DECODE_ID0(elm_id0_rw|elm_id0_prio)); //ELM enable for MDMCU Reset

	MDCIRQ_IRQ_Register_LISR(IRQ_ELM_DMA_IRQ_CODE, (void *)elm_dma_isr_handler, "ELM_DMA_LISR");
	MDCIRQ_IRQSensitivity(IRQ_ELM_DMA_IRQ_CODE, KAL_FALSE);  // level trigger
	MDCIRQ_IRQUnmask(IRQ_ELM_DMA_IRQ_CODE);
	
}


void ELM_Config_DormantLeave(void)
{
	kal_uint32 vpe_idx;
	vpe_idx = kal_get_current_vpe_id();
	if(0 == vpe_idx)
	{
		ELM_INIT();
		emi_elm_runtime_lat_history_idx =0;
		memset((void*)emi_elm_runtime_lat_history,0, sizeof(ELM_RUNTIME_PROFILE_LAT_T)*ELM_RUNTIME_HISTORY_SIZE);
	}
}

void ELM_GET_FULL_LOG(ELM_FULL_LOG_T* data)
{
	if(NULL==data)
	{
		return;
	}
	
#ifdef __ELM_RUNTIME_PROFILE__
	elm_profile_history_0[elm_profile_history_idx_0].fma_stamp = ust_get_current_time();
	ELM_GET_LOG(0,elm_profile_history_0[elm_profile_history_idx_0]);
	elm_profile_history_0[elm_profile_history_idx_0].r_lat_thr = elm_read_lat_threshold;
	elm_profile_history_0[elm_profile_history_idx_0].w_lat_thr = elm_write_lat_threshold;
	memcpy(data,&elm_profile_history_0[elm_profile_history_idx_0], sizeof(ELM_FULL_LOG_T));	
	elm_profile_history_idx_0 = (elm_profile_history_idx_0 + 1) % ELM_HISTORY_SIZE ;		
#else
	data->fma_stamp = ust_get_current_time();
	ELM_GET_CNT(ELM_WR, ELM_TYPE_TRANS, 0, &(data->w_trans));
	ELM_GET_CNT(ELM_WR, ELM_TYPE_LATENCY, 0, &(data->w_latency));
	ELM_GET_CNT(ELM_RD, ELM_TYPE_TRANS, 0, &(data->r_trans));
	ELM_GET_CNT(ELM_RD, ELM_TYPE_LATENCY, 0, &(data->r_latency));
#endif
	
}

kal_uint32 debug_emi_elm_runtime_counter = 0;
kal_uint32 debug_MDMCU_elm_last_INT_FRC = 0;
kal_uint32 debug_MDIFRA_elm_last_INT_FRC = 0;


#define ID0_AVG_LAT_INT (1<<0)
#define ID0_TOT_LAT_INT (1<<1)
#define ID1_AVG_LAT_INT (1<<2)
#define ID1_TOT_LAT_INT (1<<3)

#define E_MAX16(x) ((x>0xFFFF)? 0xFFFF : x)

//#define MD2SPM_DVFS_CON (volatile kal_uint32 *)(0xF013000 + 0xC00)

kal_uint32 elm_md_dvfs_con = 0;
kal_uint32 elm_ap_vcore_dvfs_current = 0;
kal_uint32 elm_ap_vcore_dvfs_last = 0;
kal_uint32 elm_ap_vcore_dvfs_history[AP_VCORE_DVFS_HISTORY_SIZE] = {0};

void elmtop_emi_isr_handler()
{
	// TODO: ELM mutex need here

	kal_uint32 curr_frc = 0;
	kal_uint32 int_status = 0;
	kal_uint32 read_worst_latency_count = 0;
	kal_uint32 write_worst_latency_count = 0;
	kal_uint32 read_trans_count = 0;
	kal_uint32 write_trans_count = 0;
	kal_uint32 read_worst_latency_ns = 0;
	kal_uint32 write_worst_latency_ns = 0;
	kal_uint32 read_total_count = 0;
	kal_uint32 write_total_count = 0;
	kal_uint32 ia_13m_tick = 0, txzq_13m_tick = 0, dvfs_13m_tick = 0;
	debug_emi_elm_runtime_counter++;




	//Mask cirq ELM interrupt
	MDCIRQ_IRQMask(IRQ_ELMTOP_EMI_IRQ_CODE);

	//DRV_WriteReg32_NPW(REG_MCUSYS_EMI_ELM_ELM_EN_REG, 0); //stop ELM
	DRV_WriteReg32_NPW(REG_MDMCU_ELM_AO_STATUS0_CFG0, ELM_DISABLE);

	curr_frc = ust_get_current_time();
	ia_13m_tick = SleepDrv_GetWallClk();
	txzq_13m_tick = DRV_Reg32(AP_TXZQ_OCCUR_TICK);
	dvfs_13m_tick = DRV_Reg32(AP_DVFS_OCCUR_TICK);
#if defined(MT6739) || defined(MT6761) || defined(MT6768)
        kal_uint32 ddren_13m_tick = 0;
        ddren_13m_tick = DRV_Reg32(AP_DDREN_OCCUR_TICK);
        /* If ddren_13m_tick == 0, imply AP load SPM don't support DDREN system tick feature */
        /* So, just print trace. Otherwise, ELM should assert! */
#if !defined(__PRODUCTION_RELEASE__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif  //!defined(__PRODUCTION_RELEASE__)
#endif  //defined(MT6739)
	int_status = DRV_Reg32(REG_MCUSYS_EMI_ELM_INT_STATUS); //clear ELM interrupt

	read_worst_latency_count = DRV_Reg32(REG_MCUSYS_EMI_ELM_ID0_WORST_AVG_LAT);
	write_worst_latency_count = DRV_Reg32(REG_MCUSYS_EMI_ELM_ID1_WORST_AVG_LAT);
	read_worst_latency_ns = ELM_TRANS2NS(read_worst_latency_count);
	write_worst_latency_ns = ELM_TRANS2NS(write_worst_latency_count);
	
	read_trans_count = DRV_Reg32(REG_MCUSYS_EMI_ELM_ID0_TRANS_IN_WORST_AVG);
	write_trans_count = DRV_Reg32(REG_MCUSYS_EMI_ELM_ID1_TRANS_IN_WORST_AVG);
	read_total_count = DRV_Reg32(REG_MCUSYS_EMI_ELM_ID0_WORST_TOT_LAT);
	write_total_count = DRV_Reg32(REG_MCUSYS_EMI_ELM_ID1_WORST_TOT_LAT);

	
	emi_elm_runtime_lat_history[emi_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].cur_frc = curr_frc;
	emi_elm_runtime_lat_history[emi_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].int_status= int_status;
	emi_elm_runtime_lat_history[emi_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].r_alat = read_worst_latency_ns;
	emi_elm_runtime_lat_history[emi_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].w_alat = write_worst_latency_ns;//write_worst_latency_count;
	emi_elm_runtime_lat_history[emi_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].r_trans = read_trans_count;
	emi_elm_runtime_lat_history[emi_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].w_trans = write_trans_count;
	emi_elm_runtime_lat_history[emi_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].r_l2_tot_lat = read_total_count;
	emi_elm_runtime_lat_history[emi_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].w_l2_tot_lat = write_total_count;
	emi_elm_runtime_lat_history[emi_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].ap_dvfs_tick = dvfs_13m_tick;
	emi_elm_runtime_lat_history[emi_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].txzq_dvfs_tick = txzq_13m_tick;
#if defined(MT6739) || defined(MT6761) || defined(MT6768)
	emi_elm_runtime_lat_history[emi_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].ddren_tick = ddren_13m_tick;
#endif
	emi_elm_runtime_lat_history[emi_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].md_tick = ia_13m_tick;
	emi_elm_runtime_lat_history_idx++;
	//Clear ELM interrupt after read irq type
	DRV_WriteReg32(REG_MCUSYS_EMI_ELM_INT_STATUS, 0x0F); //clear ELM interrupt
    
	elm_md_dvfs_con = *MD2SPM_DVFS_CON;
	elm_ap_vcore_dvfs_current = *AP_VCORE_DVFS_CURRENT;
	elm_ap_vcore_dvfs_last = *AP_VCORE_DVFS_LAST;
	
#if defined(MT6739) || defined(MT6761) || defined(MT6768)
    /* read total latency over criteria */
    if(int_status & ID0_TOT_LAT_INT)
    {
        if(EMI_ELM_lat_irq_exception_type == ELM_ASSERT)
        {
            EXT_ASSERT(0,(E_MAX16(elm_read_lat_threshold)<<16)|(E_MAX16(read_worst_latency_ns)), \
            (E_MAX16(read_trans_count)<<16)|(E_MAX16(read_total_count)), \
            (E_MAX16(*MD2SPM_DVFS_CON)<<16)|(E_MAX16(int_status)));
        }
        else if(EMI_ELM_lat_irq_exception_type == ELM_ASSERT_AT_2nd)
        {
            if(debug_MDMCU_elm_last_INT_FRC == 0)
            {
                debug_MDMCU_elm_last_INT_FRC = curr_frc;
                ELM_IF_DEF_TRACE(EMI_ELM_R_LAT_WARN(curr_frc, read_worst_latency_ns, elm_read_lat_threshold, read_total_count, read_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last),);
            }
            else
            {
                if(ust_us_duration(debug_MDMCU_elm_last_INT_FRC, curr_frc) < 300)
                {
                    EXT_ASSERT(0,(E_MAX16(elm_read_lat_threshold)<<16)|(E_MAX16(read_worst_latency_ns)), \
                    (E_MAX16(read_trans_count)<<16)|(E_MAX16(read_total_count)), \
                    (E_MAX16(*MD2SPM_DVFS_CON)<<16)|(E_MAX16(int_status)));
                }
                else
                {
                    debug_MDMCU_elm_last_INT_FRC = curr_frc;
                    ELM_IF_DEF_TRACE(EMI_ELM_R_LAT_WARN(curr_frc, read_worst_latency_ns, elm_read_lat_threshold, read_total_count, read_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last),);
                }
            }
        }
        else
        {
            ELM_IF_DEF_TRACE(EMI_ELM_R_LAT_WARN(curr_frc, read_worst_latency_ns, elm_read_lat_threshold, read_total_count, read_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last),);
        }
    }
    /* write total latency over criteria */
    else if(int_status & ID1_TOT_LAT_INT)
    {
        if(EMI_ELM_lat_irq_exception_type == ELM_ASSERT)
        {
            EXT_ASSERT(0,(E_MAX16(elm_write_lat_threshold)<<16)|(E_MAX16(write_worst_latency_ns)), \
            (E_MAX16(write_trans_count)<<16)|(E_MAX16(write_total_count)), \
            (E_MAX16(*MD2SPM_DVFS_CON)<<16)|(E_MAX16(int_status)));
        }
        else if(EMI_ELM_lat_irq_exception_type == ELM_ASSERT_AT_2nd)
        {
            if(debug_MDMCU_elm_last_INT_FRC == 0)
            {
                debug_MDMCU_elm_last_INT_FRC = curr_frc;
                ELM_IF_DEF_TRACE(EMI_ELM_W_LAT_WARN(curr_frc, write_worst_latency_ns, elm_write_lat_threshold, write_total_count, write_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last),);
            }
            else
            {
                if(ust_us_duration(debug_MDMCU_elm_last_INT_FRC, curr_frc) < 300)
                {
                    EXT_ASSERT(0,(E_MAX16(elm_write_lat_threshold)<<16)|(E_MAX16(write_worst_latency_ns)), \
                    (E_MAX16(write_trans_count)<<16)|(E_MAX16(write_total_count)), \
                    (E_MAX16(*MD2SPM_DVFS_CON)<<16)|(E_MAX16(int_status)));
                }
                else
                {
                    debug_MDMCU_elm_last_INT_FRC = curr_frc;
                    ELM_IF_DEF_TRACE(EMI_ELM_W_LAT_WARN(curr_frc, write_worst_latency_ns, elm_write_lat_threshold, write_total_count, write_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last),);
                }
            }
        }
        else
        {
            ELM_IF_DEF_TRACE(EMI_ELM_W_LAT_WARN(curr_frc, write_worst_latency_ns, elm_write_lat_threshold, write_total_count, write_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last),);
        }
    }
    /* read/write averge latency case */
    else
    {
        // 1000us(Ibit off maximum) + 200us (IRQ priority prempt) + 200us(detect window) = 1400us
        if(ust_us_duration(txzq_13m_tick, ia_13m_tick) < 18200) //1400us * 13 = 18200 system tick
        {
            //debug_MDMCU_elm_last_INT_FRC = 0;
            ELM_IF_DEF_TRACE(EMI_TXZQ_WARN(curr_frc, ia_13m_tick, txzq_13m_tick),);
        }
        else if(ust_us_duration(ddren_13m_tick, ia_13m_tick) < 18200) //1400us * 13 = 18200 system tick
        {
            //debug_MDMCU_elm_last_INT_FRC = 0;
            ELM_IF_DEF_TRACE(EMI_AP_DDREN_WARN(curr_frc, ia_13m_tick, ddren_13m_tick),);
        }
        else if(ust_us_duration(dvfs_13m_tick, ia_13m_tick) < 18200) //1400us * 13 = 18200 system tick
        {
            //debug_MDMCU_elm_last_INT_FRC = 0;
            ELM_IF_DEF_TRACE(EMI_AP_DVFS_WARN(curr_frc, ia_13m_tick, dvfs_13m_tick),);
        }
        else
        {
            ELM_IF_DEF_TRACE(EMI_TXZQ_WARN(curr_frc, ia_13m_tick, txzq_13m_tick),);
            ELM_IF_DEF_TRACE(EMI_AP_DVFS_WARN(curr_frc, ia_13m_tick, dvfs_13m_tick),);
            ELM_IF_DEF_TRACE(EMI_AP_DDREN_WARN(curr_frc, ia_13m_tick, ddren_13m_tick),);

            /* read average latency over criteria */
            if(int_status & ID0_AVG_LAT_INT)
            {
                if(EMI_ELM_lat_irq_exception_type == ELM_ASSERT)
                {
                    EXT_ASSERT(0,(E_MAX16(elm_read_lat_threshold)<<16)|(E_MAX16(read_worst_latency_ns)), \
                    (E_MAX16(read_trans_count)<<16)|(E_MAX16(read_total_count)), \
                    (E_MAX16(*MD2SPM_DVFS_CON)<<16)|(E_MAX16(int_status)));
                }
                else if(EMI_ELM_lat_irq_exception_type == ELM_ASSERT_AT_2nd)
                {
                    if(debug_MDMCU_elm_last_INT_FRC == 0)
                    {
                        debug_MDMCU_elm_last_INT_FRC = curr_frc;
                        ELM_IF_DEF_TRACE(EMI_ELM_R_LAT_WARN(curr_frc, read_worst_latency_ns, elm_read_lat_threshold, read_total_count, read_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last),);
                    }
                    else
                    {
                        if(ust_us_duration(debug_MDMCU_elm_last_INT_FRC, curr_frc) < 300)
                        {
                            EXT_ASSERT(0,(E_MAX16(elm_read_lat_threshold)<<16)|(E_MAX16(read_worst_latency_ns)), \
                            (E_MAX16(read_trans_count)<<16)|(E_MAX16(read_total_count)), \
                            (E_MAX16(*MD2SPM_DVFS_CON)<<16)|(E_MAX16(int_status)));
                        }
                        else
                        {
                            debug_MDMCU_elm_last_INT_FRC = curr_frc;
                            ELM_IF_DEF_TRACE(EMI_ELM_R_LAT_WARN(curr_frc, read_worst_latency_ns, elm_read_lat_threshold, read_total_count, read_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last),);
                        }
                    }
                }
                else
                {
                    ELM_IF_DEF_TRACE(EMI_ELM_R_LAT_WARN(curr_frc, read_worst_latency_ns, elm_read_lat_threshold, read_total_count, read_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last),);
                }
            }
            /* write average latency over criteria */
            else
            {
                if(EMI_ELM_lat_irq_exception_type == ELM_ASSERT)
                {
                    EXT_ASSERT(0,(E_MAX16(elm_write_lat_threshold)<<16)|(E_MAX16(write_worst_latency_ns)), \
                    (E_MAX16(write_trans_count)<<16)|(E_MAX16(write_total_count)), \
                    (E_MAX16(*MD2SPM_DVFS_CON)<<16)|(E_MAX16(int_status)));
                }
                else if(EMI_ELM_lat_irq_exception_type == ELM_ASSERT_AT_2nd)
                {
                    if(debug_MDMCU_elm_last_INT_FRC == 0)
                    {
                        debug_MDMCU_elm_last_INT_FRC = curr_frc;
                        ELM_IF_DEF_TRACE(EMI_ELM_W_LAT_WARN(curr_frc, write_worst_latency_ns, elm_write_lat_threshold, write_total_count, write_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last),);
                    }
                    else
                    {
                        if(ust_us_duration(debug_MDMCU_elm_last_INT_FRC, curr_frc) < 300)
                        {
                            EXT_ASSERT(0,(E_MAX16(elm_write_lat_threshold)<<16)|(E_MAX16(write_worst_latency_ns)), \
                            (E_MAX16(write_trans_count)<<16)|(E_MAX16(write_total_count)), \
                            (E_MAX16(*MD2SPM_DVFS_CON)<<16)|(E_MAX16(int_status)));
                        }
                        else
                        {
                            debug_MDMCU_elm_last_INT_FRC = curr_frc;
                            ELM_IF_DEF_TRACE(EMI_ELM_W_LAT_WARN(curr_frc, write_worst_latency_ns, elm_write_lat_threshold, write_total_count, write_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last),);
                        }
                    }
                }
                else
                {
                    ELM_IF_DEF_TRACE(EMI_ELM_W_LAT_WARN(curr_frc, write_worst_latency_ns, elm_write_lat_threshold, write_total_count, write_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last),);
                }
            }
        }
    }
#else
        // 1000us(Ibit off maximum) + 200us (IRQ priority prempt) + 200us(detect window) = 1400us
        if(ust_us_duration(txzq_13m_tick, ia_13m_tick) < 18200) //1400us * 13 = 18200 system tick
        {
            //debug_MDMCU_elm_last_INT_FRC = 0;
            ELM_IF_DEF_TRACE(EMI_TXZQ_WARN(curr_frc, ia_13m_tick, txzq_13m_tick),);
        }
        else if(ust_us_duration(dvfs_13m_tick, ia_13m_tick) < 18200) //1400us * 13 = 18200 system tick
        {
            //debug_MDMCU_elm_last_INT_FRC = 0;
            ELM_IF_DEF_TRACE(EMI_AP_DVFS_WARN(curr_frc, ia_13m_tick, dvfs_13m_tick),);
        }
        else
        {
            ELM_IF_DEF_TRACE(EMI_TXZQ_WARN(curr_frc, ia_13m_tick, txzq_13m_tick),);
            ELM_IF_DEF_TRACE(EMI_AP_DVFS_WARN(curr_frc, ia_13m_tick, dvfs_13m_tick),);
        }
        switch(EMI_ELM_lat_irq_exception_type)
        {            
                case ELM_NONE:
                {                
#ifdef __ELM_TRACE__

			if(int_status & (ID0_AVG_LAT_INT|ID0_TOT_LAT_INT))
			{
				//US_CNT %l us, R_ave_lat %l ns, R_Threhsold %l ns, R_Latency %l T, R_tran %l, MD_DVFS_CON %xl, AP_VCORE_DVFS %xl"
				EMI_ELM_R_LAT_WARN(curr_frc, read_worst_latency_ns, elm_read_lat_threshold, read_total_count, read_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last);
			}
			else
			{
				//warn EMI_ELM_R_LAT_WARN		ELM_Basic_Info_H	"[WARN][ELM][MDMCU][EMI][M3][Read Latency Violation] US_CNT %l us, R_ave_lat %l ns, R_Threhsold %l ns, R_Latency %l T, R_tran %l, MD_DVFS_CON %xl, AP_VCORE_DVFS %xl"
				EMI_ELM_W_LAT_WARN(curr_frc, write_worst_latency_ns, elm_write_lat_threshold, write_total_count, write_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last);
			}
#endif					
			break;
		}
		
		case ELM_ASSERT:
		{
			if(int_status & (ID0_AVG_LAT_INT|ID0_TOT_LAT_INT))
			{
				EXT_ASSERT(0,(E_MAX16(elm_read_lat_threshold)<<16)|(E_MAX16(read_worst_latency_ns)), \
				(E_MAX16(read_trans_count)<<16)|(E_MAX16(read_total_count)), \
				(E_MAX16(*MD2SPM_DVFS_CON)<<16)|(E_MAX16(int_status)));
			}
			else //write latency over criteria
			{
				EXT_ASSERT(0,(E_MAX16(elm_write_lat_threshold)<<16)|(E_MAX16(write_worst_latency_ns)), \
				(E_MAX16(write_trans_count)<<16)|(E_MAX16(write_total_count)), \
				(E_MAX16(*MD2SPM_DVFS_CON)<<16)|(E_MAX16(int_status)));
			}
			break;
		}
		case ELM_ASSERT_AT_2nd:
		{
			// just show trace on first time over criteria in 300us
			if(debug_MDMCU_elm_last_INT_FRC == 0)
			{
				debug_MDMCU_elm_last_INT_FRC = curr_frc;
#ifdef __ELM_TRACE__
				if(int_status & (ID0_AVG_LAT_INT|ID0_TOT_LAT_INT))
				{
					//US_CNT %l us, R_ave_lat %l ns, R_Threhsold %l ns, R_Latency %l T, R_tran %l, MD_DVFS_CON %xl, AP_VCORE_DVFS %xl"
					EMI_ELM_R_LAT_WARN(curr_frc, read_worst_latency_ns, elm_read_lat_threshold, read_total_count, read_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last);
				}
				else
				{
					//warn EMI_ELM_R_LAT_WARN		ELM_Basic_Info_H	"[WARN][ELM][MDMCU][EMI][M3][Read Latency Violation] US_CNT %l us, R_ave_lat %l ns, R_Threhsold %l ns, R_Latency %l T, R_tran %l, MD_DVFS_CON %xl, AP_VCORE_DVFS %xl"
					EMI_ELM_W_LAT_WARN(curr_frc, write_worst_latency_ns, elm_write_lat_threshold, write_total_count, write_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last);
				}
#endif
			}
			else
			{
				if(ust_us_duration(debug_MDMCU_elm_last_INT_FRC, curr_frc) < 300)
				{
					kal_uint32 i;
					for(i=0;i<AP_VCORE_DVFS_HISTORY_SIZE;i++)
					{
						elm_ap_vcore_dvfs_history[i] = *(AP_VCORE_DVFS_HISTORY_BASE + i);
					}
					
                                        if(int_status & (ID0_AVG_LAT_INT|ID0_TOT_LAT_INT)) //read latency over criteria
					{
						EXT_ASSERT(0,(E_MAX16(elm_read_lat_threshold)<<16)|(E_MAX16(read_worst_latency_ns)), \
						(E_MAX16(read_trans_count)<<16)|(E_MAX16(read_total_count)), \
						(E_MAX16(*MD2SPM_DVFS_CON)<<16)|(E_MAX16(int_status)));
					}
					else //write latency over criteria
					{
						EXT_ASSERT(0,(E_MAX16(elm_write_lat_threshold)<<16)|(E_MAX16(write_worst_latency_ns)), \
						(E_MAX16(write_trans_count)<<16)|(E_MAX16(write_total_count)), \
						(E_MAX16(*MD2SPM_DVFS_CON)<<16)|(E_MAX16(int_status)));
					}
				}
				else
				{
					debug_MDMCU_elm_last_INT_FRC = curr_frc;
#ifdef __ELM_TRACE__
					if(int_status & (ID0_AVG_LAT_INT|ID0_TOT_LAT_INT))
					{
						//US_CNT %l us, R_ave_lat %l ns, R_Threhsold %l ns, R_Latency %l T, R_tran %l, MD_DVFS_CON %xl, AP_VCORE_DVFS %xl"
						EMI_ELM_R_LAT_WARN(curr_frc, read_worst_latency_ns, elm_read_lat_threshold, read_total_count, read_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last);
					}
					else
					{
						//warn EMI_ELM_R_LAT_WARN		ELM_Basic_Info_H	"[WARN][ELM][MDMCU][EMI][M3][Read Latency Violation] US_CNT %l us, R_ave_lat %l ns, R_Threhsold %l ns, R_Latency %l T, R_tran %l, MD_DVFS_CON %xl, AP_VCORE_DVFS %xl"
						EMI_ELM_W_LAT_WARN(curr_frc, write_worst_latency_ns, elm_write_lat_threshold, write_total_count, write_trans_count, elm_md_dvfs_con, elm_ap_vcore_dvfs_current, elm_ap_vcore_dvfs_last);
					}
#endif
				}
			}	
			break;
		}
		default:
			break;
	}
#endif  //defined(MT6739)

	DRV_WriteReg32_NPW(REG_MDMCU_ELM_AO_STATUS0_CFG0, ELM_ENABLE|ELM_ACCURACY(ELM_unit_100us)| \
		LAT_TH_ID1(ELM_NS2TRAN(elm_write_lat_threshold))|LAT_TH_ID0(ELM_NS2TRAN(elm_read_lat_threshold))| \
		DECODE_ID0(elm_id0_rw|elm_id0_master|elm_id0_prio)); //ELM enable for MDMCU Reset
		
	MDCIRQ_IRQUnmask(IRQ_ELMTOP_EMI_IRQ_CODE);

}

void elm_dma_isr_handler()
{

	// TODO: ELM mutex need here

	kal_uint32 curr_frc = 0;
	kal_uint32 int_status = 0;
	kal_uint32 read_worst_latency_count = 0;
	kal_uint32 write_worst_latency_count = 0;
	kal_uint32 read_trans_count = 0;
	kal_uint32 write_trans_count = 0;
	kal_uint32 read_worst_latency_ns = 0;
	kal_uint32 write_worst_latency_ns = 0;
	kal_uint32 read_total_count = 0;
	kal_uint32 write_total_count = 0;
	




	//Mask cirq ELM interrupt
	MDCIRQ_IRQMask(IRQ_ELM_DMA_IRQ_CODE);

	//DRV_WriteReg32_NPW(REG_MCUSYS_EMI_ELM_ELM_EN_REG, 0); //stop ELM
	DRV_WriteReg32_NPW(REG_MDINFRA_ELM_AO_STATUS0_CFG0, ELM_DISABLE);

	curr_frc = ust_get_current_time();

	//SET_ELM_RW_LAT_FLAG(REG_MCUSYS_EMI_ELM_ELM_INT_STATUS, &lat_flag, &r_flag);	
	int_status = DRV_Reg32(REG_MDINFRA_EMI_ELM_INT_STATUS); //clear ELM interrupt

	read_worst_latency_count = DRV_Reg32(REG_MDINFRA_EMI_ELM_ID0_WORST_AVG_LAT);
	write_worst_latency_count = DRV_Reg32(REG_MDINFRA_EMI_ELM_ID1_WORST_AVG_LAT);
	read_worst_latency_ns = ELM_TRANS2NS(read_worst_latency_count);
	write_worst_latency_ns = ELM_TRANS2NS(write_worst_latency_count);
	
	read_trans_count = DRV_Reg32(REG_MDINFRA_EMI_ELM_ID0_TRANS_IN_WORST_AVG);
	write_trans_count = DRV_Reg32(REG_MDINFRA_EMI_ELM_ID1_TRANS_IN_WORST_AVG);
	read_total_count = DRV_Reg32(REG_MDINFRA_EMI_ELM_ID0_WORST_TOT_LAT);
	write_total_count = DRV_Reg32(REG_MDINFRA_EMI_ELM_ID1_WORST_TOT_LAT);

	
	dma_elm_runtime_lat_history[dma_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].cur_frc = curr_frc;
	dma_elm_runtime_lat_history[dma_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].int_status= int_status;
	dma_elm_runtime_lat_history[dma_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].r_alat = read_worst_latency_ns;
	dma_elm_runtime_lat_history[dma_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].w_alat = write_worst_latency_ns;//write_worst_latency_count;
	dma_elm_runtime_lat_history[dma_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].r_trans = read_trans_count;
	dma_elm_runtime_lat_history[dma_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].w_trans = write_trans_count;
	dma_elm_runtime_lat_history[dma_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].r_l2_tot_lat = read_total_count;
	dma_elm_runtime_lat_history[dma_elm_runtime_lat_history_idx%ELM_RUNTIME_HISTORY_SIZE].w_l2_tot_lat = write_total_count;
	dma_elm_runtime_lat_history_idx++;
	
	//Clear ELM interrupt after read irq type
	DRV_WriteReg32(REG_MDINFRA_EMI_ELM_INT_STATUS, 0x0F); //clear ELM interrupt
	
	switch(L1_DMA_irq_exception_type)
	{			
		case ELM_NONE:
		{
#ifdef __ELM_TRACE__
			if(int_status & (ID0_AVG_LAT_INT|ID0_TOT_LAT_INT))
			{
				//US_CNT %l us, R_ave_lat %l ns, R_Threhsold %l ns, R_Latency %l T, R_tran %l"
				DMA_ELM_R_LAT_WARN(curr_frc, read_worst_latency_ns, elm_infra_read_lat_threshold, read_total_count, read_trans_count);
			}
			else
			{
				//US_CNT %l us, R_ave_lat %l ns, R_Threhsold %l ns, R_Latency %l T, R_tran %l"
				DMA_ELM_W_LAT_WARN(curr_frc, write_worst_latency_ns, elm_infra_write_lat_threshold, write_total_count, write_trans_count);
			}
#endif					
			break;
		}
		
		default:
			break;
	}


	DRV_WriteReg32_NPW(REG_MDINFRA_ELM_AO_STATUS0_CFG0, ELM_ENABLE|ELM_ACCURACY(ELM_unit_1000us)| \
		LAT_TH_ID1(ELM_MDIFRA_NS2TRAN(elm_infra_write_lat_threshold))|LAT_TH_ID0(ELM_MDIFRA_NS2TRAN(elm_infra_read_lat_threshold))| \
		DECODE_ID0(elm_id0_rw|elm_id0_prio)); //ELM enable for MDMCU Reset
		
	MDCIRQ_IRQUnmask(IRQ_ELM_DMA_IRQ_CODE);

}

void ELM_MCU_threshold_change(kal_uint32 read_avg_lat_ns, kal_uint32 write_avg_lat_ns, kal_uint32 dur_us)
{
	kal_uint32 mask_state=0;

	if(elm_dynamic_lat_threshold_disable)
	{
		return;
	}

	if((read_avg_lat_ns<200) || (write_avg_lat_ns<200) || (dur_us<200))
	{
		kal_uint32 lr = 0;
		kal_uint32 sub_error_code = 0;
		GET_RETURN_ADDRESS(lr);	
		if(read_avg_lat_ns<200)
		{
			sub_error_code = 1;
		}
		else if(write_avg_lat_ns<200)
		{
			sub_error_code = 2;
		}
		else
		{
			sub_error_code = 3;
		}
		EXT_ASSERT(0, lr, KAL_ERROR_EMI_ELM_CHANGE_THRESHOLD, sub_error_code);
	}



	mask_state = IRQMask_Status(IRQ_ELMTOP_EMI_IRQ_CODE);

	//Mask cirq ELM interrupt
	MDCIRQ_IRQMask(IRQ_ELMTOP_EMI_IRQ_CODE);

	DRV_WriteReg32_NPW(REG_MDMCU_ELM_AO_STATUS0_CFG0, ELM_DISABLE); //disable ELM
	
	kal_hrt_take_itc_lock(KAL_ITC_ELM_LOCK, KAL_INFINITE_WAIT);
	
	
	elm_read_lat_threshold = read_avg_lat_ns;
	elm_write_lat_threshold = write_avg_lat_ns;
	elm_lat_duration = dur_us;

	DRV_WriteReg32(REG_MCUSYS_EMI_ELM_INT_STATUS, 0x0F); //clear ELM interrupt
	DRV_WriteReg32_NPW(REG_MDMCU_ELM_AO_STATUS0_CFG0, ELM_ENABLE|ELM_ACCURACY(ELM_unit_100us)| \
		LAT_TH_ID1(ELM_NS2TRAN(elm_write_lat_threshold))|LAT_TH_ID0(ELM_NS2TRAN(elm_read_lat_threshold))| \
		DECODE_ID0(elm_id0_rw|elm_id0_master|elm_id0_prio)); //ELM enable for MDMCU Reset

	kal_hrt_give_itc_lock(KAL_ITC_ELM_LOCK);

#ifdef __ELM_TRACE__
	{
		// L1 trace
		kal_uint32 curr_frc = 0;
		curr_frc = ust_get_current_time();
		EMI_ELM_SET_R_TH(curr_frc, elm_read_lat_threshold);
		EMI_ELM_SET_W_TH(curr_frc, elm_write_lat_threshold);
	}
#endif

	if(!mask_state)
	{
		MDCIRQ_IRQUnmask(IRQ_ELMTOP_EMI_IRQ_CODE);
	}
	
}

void _ELM_exception_saved(void)
{
#if 0//def __ELM_RUNTIME_PROFILE__
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
}

kal_uint32 g_elm_read_worst_latency_count;
kal_uint32 g_elm_write_worst_latency_count;
kal_uint32 g_elm_read_worst_latency_ns;
kal_uint32 g_elm_write_worst_latency_ns;

kal_uint8 _ELM_latency_status(void)
{
#if 1//def  __ELM_RUNTIME_PROFILE__

	//if emi_elm_runtime_lat_history_idx == 0, means that it didn't enter ELM isr handler once, it will all be zero
	if(emi_elm_runtime_lat_history_idx != 0)
	{
		kal_uint32 int_status = 0;
		int_status = emi_elm_runtime_lat_history[(emi_elm_runtime_lat_history_idx-1)%ELM_RUNTIME_HISTORY_SIZE].int_status;

		if(int_status & (ID0_AVG_LAT_INT|ID0_TOT_LAT_INT))
		{
			return 0xAE; //EMI read latency may be too long
		}
		else 
		{
			return 0xBE; //EMI write latency may be too long
		}		
	}
	return 0xDE; // EMI read/write latency are OK.
#else
/* under construction !*/
#endif	
}

/******************************************************************************
*   Function : void Set_EMI_ELM_ExceptionType(kal_bool lat_flag, kal_uint8 exception_type)
*   Description : this function is called when set EMI ELM Read/Write Latency/WordCount Exception Type
*   Parameter : kal_uint8 exception_type: 0,1,2
*   Return    : void
******************************************************************************/
kal_bool Set_EMI_ELM_ExceptionType(kal_uint8 exception_type)
{
	switch (exception_type)
	{
		case ELM_NONE:
		{
			EMI_ELM_lat_irq_exception_type = ELM_NONE;
			break;
		}
		
		case ELM_ASSERT:
		{		
			EMI_ELM_lat_irq_exception_type = ELM_ASSERT;			
			break;
		}
		case ELM_ASSERT_AT_2nd:
		{		
			EMI_ELM_lat_irq_exception_type = ELM_ASSERT_AT_2nd;			
			break;
		}		
		default:
			return KAL_FALSE;
			break;
	}
	return KAL_TRUE;
}

kal_bool Set_EMI_ELM_Threshold(kal_uint8 info, kal_uint32 threshold)
{
	ELM_IF_DEF_TRACE(kal_uint32 curr_frc = 0,);
	ELM_IF_DEF_TRACE(curr_frc = ust_get_current_time(),);
	elm_dynamic_lat_threshold_disable = 1; //disable dynamic latency threshold
	if((info&0xF0))
	{	// infra
		//Disable before re-configure
		DRV_WriteReg32_NPW(REG_MDINFRA_ELM_AO_STATUS0_CFG0, ELM_DISABLE);
		if( info & 0x01 )
		{
			elm_infra_read_lat_threshold = threshold;			
			ELM_IF_DEF_TRACE(DMA_ELM_SET_R_TH(curr_frc, threshold),);
		}
		else
		{
			elm_infra_write_lat_threshold = threshold;
			ELM_IF_DEF_TRACE(DMA_ELM_SET_W_TH(curr_frc, threshold),);
		}
		DRV_WriteReg32_NPW(REG_MDINFRA_ELM_AO_STATUS0_CFG0, ELM_ENABLE|ELM_ACCURACY(ELM_unit_1000us)| \
		LAT_TH_ID1(ELM_MDIFRA_NS2TRAN(elm_infra_write_lat_threshold))|LAT_TH_ID0(ELM_MDIFRA_NS2TRAN(elm_infra_read_lat_threshold))| \
		DECODE_ID0(elm_id0_rw|elm_id0_prio)); 
	}
	else
	{   //mdmcu
	
		//Disable before re-configure
		DRV_WriteReg32_NPW(REG_MDMCU_ELM_AO_STATUS0_CFG0, ELM_DISABLE);
		if( info & 0x01 )
		{
			elm_read_lat_threshold = threshold;			
			ELM_IF_DEF_TRACE(EMI_ELM_SET_R_TH(curr_frc, threshold),);
		}
		else
		{
			elm_write_lat_threshold = threshold;
			ELM_IF_DEF_TRACE(EMI_ELM_SET_W_TH(curr_frc, threshold),);
		}
		DRV_WriteReg32_NPW(REG_MDMCU_ELM_AO_STATUS0_CFG0, ELM_ENABLE|ELM_ACCURACY(ELM_unit_100us)| \
		LAT_TH_ID1(ELM_NS2TRAN(elm_write_lat_threshold))|LAT_TH_ID0(ELM_NS2TRAN(elm_read_lat_threshold))| \
		DECODE_ID0(elm_id0_rw|elm_id0_master|elm_id0_prio)); 
	}

	
	return KAL_TRUE;
}

kal_bool Set_EMI_ELM_Config(kal_uint8 id, kal_uint8 m_sel, kal_uint8 rw)
{
	kal_bool rtn = KAL_TRUE;

	//Disable before re-configure
	DRV_WriteReg32_NPW(REG_MDMCU_ELM_AO_STATUS0_CFG0, ELM_DISABLE);
	elm_dynamic_lat_threshold_disable = 1; //disable dynamic latency threshold
	
	if( id == 1 ) // id 1 (default write)
	{		
		if(m_sel==0)
		{
			elm_id1_master = ELM_ALL_MASTER;
		}
		else if(m_sel==1)
		{
			elm_id1_master = ELM_MDMCU_ONLY;
		}
		else if(m_sel==2)
		{
			elm_id1_master = ELM_USIP_ONLY;
		}
		else
		{
			rtn = KAL_FALSE;
		}

		if(rw == 0)
		{
			elm_id1_rw = ELM_READ;
		}
		else if(rw == 1)
		{
			elm_id1_rw = ELM_WRITE;
		}
		else
		{
			rtn = KAL_FALSE;
		}
	}
	else if(id == 0)// id 0
	{
		if(m_sel==0)
		{
			elm_id0_master = ELM_ALL_MASTER;
		}
		else if(m_sel==1)
		{
			elm_id0_master = ELM_MDMCU_ONLY;
		}
		else if(m_sel==2)
		{
			elm_id0_master = ELM_USIP_ONLY;
		}
		else
		{
			rtn = KAL_FALSE;
		}

		if(rw == 0)
		{
			elm_id0_rw = ELM_READ;
		}
		else if(rw == 1)
		{
			elm_id0_rw = ELM_WRITE;
		}
		else
		{
			rtn = KAL_FALSE;
		}
				
	}
	else if(id == 2)// ID 0/1 are the same 
	{
		if(m_sel==0)
		{
			elm_id0_master = ELM_ALL_MASTER;
			elm_id1_master = ELM_ALL_MASTER;
		}
		else if(m_sel==1)
		{
			elm_id0_master = ELM_MDMCU_ONLY;
			elm_id1_master = ELM_MDMCU_ONLY;
		}
		else if(m_sel==2)
		{
			elm_id0_master = ELM_USIP_ONLY;
			elm_id1_master = ELM_USIP_ONLY;
		}
		else
		{
			rtn = KAL_FALSE;
		}				
	}
	else
	{
		rtn = KAL_FALSE;
	}
	DRV_WriteReg32(REG_MDMCU_ELM_AO_STATUS0_CFG1, ELM_EMI_TOP_BLOCK(0xff)|DECODE_ID1(elm_id1_rw|elm_id1_master|elm_id1_prio)| \
		ELM_DURATION(ELM_200US)|EMI_BLOCK(E_NOT_MASK)|ELM_INT_MASK(0));

	DRV_WriteReg32_NPW(REG_MDMCU_ELM_AO_STATUS0_CFG0, ELM_ENABLE|ELM_ACCURACY(ELM_unit_100us)| \
		LAT_TH_ID1(ELM_NS2TRAN(elm_write_lat_threshold))|LAT_TH_ID0(ELM_NS2TRAN(elm_read_lat_threshold))| \
		DECODE_ID0(elm_id0_rw|elm_id0_master|elm_id0_prio)); //ELM enable for MDMCU Reset
	return rtn;
	
}

kal_bool Set_EMI_ELM_Mode(kal_uint8 mode)
{
	kal_bool rtn = KAL_TRUE;
	//Disable before re-configure
	DRV_WriteReg32_NPW(REG_MDMCU_ELM_AO_STATUS0_CFG0, ELM_DISABLE);
	DRV_WriteReg32_NPW(REG_MDINFRA_ELM_AO_STATUS0_CFG0, ELM_DISABLE);
	elm_dynamic_lat_threshold_disable = 1; //disable dynamic latency threshold
	
	if( mode == 0)
	{		
		elm_mode = ELM_MODE_0_LATENCY;
	}
	else if( mode == 1)
	{
		elm_mode = ELM_MODE_1_WORD_COUNT;
	}
	else if( mode == 2)
	{
		elm_mode = ELM_MODE_2_SPECIAL;
		elm_ao_decode_cfg = ELM_DECODE_FROM_APB;
		DRV_ClrReg32(REG_MCUSYS_EMI_ELM_CTRL_REG, (ELM_AO_DECODE(ELM_DECODE_FROM_AO))); // clear AO decode
		DRV_SetReg32(REG_MCUSYS_EMI_ELM_CTRL_REG, (ELM_AO_DECODE(elm_ao_decode_cfg))); // set AO decode
		DRV_ClrReg32(REG_MDINFRA_EMI_ELM_CTRL_REG, (ELM_AO_DECODE(ELM_DECODE_FROM_AO))); // clear AO decode
		DRV_SetReg32(REG_MDINFRA_EMI_ELM_CTRL_REG, (ELM_AO_DECODE(elm_ao_decode_cfg))); // set AO decode
	}
	else
	{
		rtn = KAL_FALSE;
	}
	DRV_ClrReg32(REG_MCUSYS_EMI_ELM_CTRL_REG, (0x3<<4)); // clear ELM mode
	DRV_SetReg32(REG_MCUSYS_EMI_ELM_CTRL_REG, ((elm_mode&0x3)<<4));//select ELM mode

	DRV_WriteReg32(REG_MDMCU_ELM_AO_STATUS0_CFG1, ELM_EMI_TOP_BLOCK(0xff)|DECODE_ID1(elm_id1_rw|elm_id1_master|elm_id1_prio)| \
		ELM_DURATION(ELM_200US)|EMI_BLOCK(E_NOT_MASK)|ELM_INT_MASK(0));

	DRV_WriteReg32_NPW(REG_MDMCU_ELM_AO_STATUS0_CFG0, ELM_ENABLE|ELM_ACCURACY(ELM_unit_100us)| \
		LAT_TH_ID1(ELM_NS2TRAN(elm_write_lat_threshold))|LAT_TH_ID0(ELM_NS2TRAN(elm_read_lat_threshold))| \
		DECODE_ID0(elm_id0_rw|elm_id0_master|elm_id0_prio)); //ELM enable for MDMCU Reset

	
	DRV_ClrReg32(REG_MDINFRA_EMI_ELM_CTRL_REG, (0x3<<4)); // clear ELM mode
	DRV_SetReg32(REG_MDINFRA_EMI_ELM_CTRL_REG, ((elm_mode&0x3)<<4));//select ELM mode

	DRV_WriteReg32(REG_MDINFRA_ELM_AO_STATUS0_CFG1, ELM_EMI_TOP_BLOCK(0xff)|DECODE_ID1(elm_id1_rw|elm_id1_prio)| \
		ELM_DURATION(ELM_1000US)|EMI_BLOCK(E_NOT_MASK)|ELM_INT_MASK(0));

	DRV_WriteReg32_NPW(REG_MDINFRA_ELM_AO_STATUS0_CFG0, ELM_ENABLE|ELM_ACCURACY(ELM_unit_1000us)| \
		LAT_TH_ID1(ELM_MDIFRA_NS2TRAN(elm_infra_write_lat_threshold))|LAT_TH_ID0(ELM_MDIFRA_NS2TRAN(elm_infra_read_lat_threshold))| \
		DECODE_ID0(elm_id0_rw|elm_id0_prio)); //ELM enable for MDMCU Reset
	return rtn;
}



kal_bool Set_EMI_ELM_uSIP_Core(kal_uint8 id, kal_uint8 vpe_sel, kal_uint8 port_sel)
{
	kal_bool rtn = KAL_TRUE;
	
	//Disable before re-configure
	DRV_WriteReg32_NPW(REG_MDMCU_ELM_AO_STATUS0_CFG0, ELM_DISABLE);
	elm_dynamic_lat_threshold_disable = 1; //disable dynamic latency threshold

	elm_ao_id0_value = 0;
	elm_ao_id0_mask = ELM_AO_CONTROL_DEFAULT;
	elm_ao_id1_value = 0;
	elm_ao_id1_mask = ELM_AO_CONTROL_DEFAULT;
	
	if( id == 1 ) // id 1 (default write)
	{		
		if (port_sel==0)
		{
			elm_ao_id1_mask &=~ (ELM_USIP_CORE_SEL(1)|ELM_MASTER_SEL(ELM_MASTER_IA_MASK)|ELM_USIP_PORT_SEL(ELM_USIP_PORT_DISABLE_MASK));
		}
		else
		{
			elm_ao_id1_mask &=~ (ELM_USIP_CORE_SEL(1)|ELM_MASTER_SEL(ELM_MASTER_IA_MASK)|ELM_USIP_PORT_SEL(ELM_USIP_PORT_ENABLE_MASK));
		}
		
		if(vpe_sel==0)
		{
			if (port_sel == 0)
			{
				elm_ao_id1_value = ELM_USIP_CORE_SEL(0)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_ALL);
			}
			else if (port_sel == 1)
			{
				elm_ao_id1_value = ELM_USIP_CORE_SEL(0)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_ICACHE);
			}
			else if (port_sel == 2)
			{
				elm_ao_id1_value = ELM_USIP_CORE_SEL(0)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_DCACHE);
			}			
			else if (port_sel == 3)
			{
				elm_ao_id1_value = ELM_USIP_CORE_SEL(0)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_DNOCACHE);
			}
			else
			{
				rtn = KAL_FALSE;
				elm_ao_id1_mask = ELM_AO_CONTROL_DEFAULT;
			}
		}
		else if(vpe_sel==1)
		{
			if (port_sel == 0)
			{
				elm_ao_id1_value = ELM_USIP_CORE_SEL(1)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_ALL);
			}
			else if (port_sel == 1)
			{
				elm_ao_id1_value = ELM_USIP_CORE_SEL(1)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_ICACHE);
			}
			else if (port_sel == 2)
			{
				elm_ao_id1_value = ELM_USIP_CORE_SEL(1)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_DCACHE);
			}			
			else if (port_sel == 3)
			{
				elm_ao_id1_value = ELM_USIP_CORE_SEL(1)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_DNOCACHE);
			}
			else
			{
				rtn = KAL_FALSE;
				elm_ao_id1_mask = ELM_AO_CONTROL_DEFAULT;
			}
		}
		else
		{
			rtn = KAL_FALSE;
			elm_ao_id1_mask = ELM_AO_CONTROL_DEFAULT;
		}
	}
	else if(id == 0)// id 0
	{
		if (port_sel==0)
		{
			elm_ao_id0_mask &=~ (ELM_USIP_CORE_SEL(1)|ELM_MASTER_SEL(ELM_MASTER_IA_MASK)|ELM_USIP_PORT_SEL(ELM_USIP_PORT_DISABLE_MASK));
		}
		else
		{
			elm_ao_id0_mask &=~ (ELM_USIP_CORE_SEL(1)|ELM_MASTER_SEL(ELM_MASTER_IA_MASK)|ELM_USIP_PORT_SEL(ELM_USIP_PORT_ENABLE_MASK));
		}
		
		if(vpe_sel==0)
		{
			if (port_sel == 0)
			{
				elm_ao_id0_value = ELM_USIP_CORE_SEL(0)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_ALL);
			}
			else if (port_sel == 1)
			{
				elm_ao_id0_value = ELM_USIP_CORE_SEL(0)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_ICACHE);
			}
			else if (port_sel == 2)
			{
				elm_ao_id0_value = ELM_USIP_CORE_SEL(0)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_DCACHE);
			}			
			else if (port_sel == 3)
			{
				elm_ao_id0_value = ELM_USIP_CORE_SEL(0)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_DNOCACHE);
			}
			else
			{
				rtn = KAL_FALSE;
				elm_ao_id0_mask = ELM_AO_CONTROL_DEFAULT;
			}
		}
		else if(vpe_sel==1)
		{
			if (port_sel == 0)
			{
				elm_ao_id0_value = ELM_USIP_CORE_SEL(1)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_ALL);
			}
			else if (port_sel == 1)
			{
				elm_ao_id0_value = ELM_USIP_CORE_SEL(1)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_ICACHE);
			}
			else if (port_sel == 2)
			{
				elm_ao_id0_value = ELM_USIP_CORE_SEL(1)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_DCACHE);
			}			
			else if (port_sel == 3)
			{
				elm_ao_id0_value = ELM_USIP_CORE_SEL(1)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_DNOCACHE);
			}
			else
			{
				rtn = KAL_FALSE;
				elm_ao_id0_mask = ELM_AO_CONTROL_DEFAULT;
			}
		}
		else
		{
			rtn = KAL_FALSE;
			elm_ao_id0_mask = ELM_AO_CONTROL_DEFAULT;
		}
	}
	else if(id == 2)// ID 0/1 are the same 
	{
		if (port_sel==0)
		{
			elm_ao_id0_mask &=~ (ELM_USIP_CORE_SEL(1)|ELM_MASTER_SEL(ELM_MASTER_IA_MASK)|ELM_USIP_PORT_SEL(ELM_USIP_PORT_DISABLE_MASK));
			elm_ao_id1_mask &=~ (ELM_USIP_CORE_SEL(1)|ELM_MASTER_SEL(ELM_MASTER_IA_MASK)|ELM_USIP_PORT_SEL(ELM_USIP_PORT_DISABLE_MASK));
		}
		else
		{
			elm_ao_id0_mask &=~ (ELM_USIP_CORE_SEL(1)|ELM_MASTER_SEL(ELM_MASTER_IA_MASK)|ELM_USIP_PORT_SEL(ELM_USIP_PORT_ENABLE_MASK));
			elm_ao_id1_mask &=~ (ELM_USIP_CORE_SEL(1)|ELM_MASTER_SEL(ELM_MASTER_IA_MASK)|ELM_USIP_PORT_SEL(ELM_USIP_PORT_ENABLE_MASK));
		}

		if(vpe_sel==0)
		{
			if (port_sel == 0)
			{
				elm_ao_id0_value = ELM_USIP_CORE_SEL(0)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_ALL);
				elm_ao_id1_value = ELM_USIP_CORE_SEL(0)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_ALL);
			}
			else if (port_sel == 1)
			{
				elm_ao_id0_value = ELM_USIP_CORE_SEL(0)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_ICACHE);
				elm_ao_id1_value = ELM_USIP_CORE_SEL(0)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_ICACHE);
			}
			else if (port_sel == 2)
			{
				elm_ao_id0_value = ELM_USIP_CORE_SEL(0)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_DCACHE);
				elm_ao_id1_value = ELM_USIP_CORE_SEL(0)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_DCACHE);
			}			
			else if (port_sel == 3)
			{
				elm_ao_id0_value = ELM_USIP_CORE_SEL(0)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_DNOCACHE);
				elm_ao_id1_value = ELM_USIP_CORE_SEL(0)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_DNOCACHE);
			}
			else
			{
				rtn = KAL_FALSE;
				elm_ao_id0_mask = ELM_AO_CONTROL_DEFAULT;
				elm_ao_id1_mask = ELM_AO_CONTROL_DEFAULT;
			}		
		}
		else if(vpe_sel==1)
		{
			if (port_sel == 0)
			{
				elm_ao_id0_value = ELM_USIP_CORE_SEL(1)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_ALL);
				elm_ao_id1_value = ELM_USIP_CORE_SEL(1)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_ALL);
			}
			else if (port_sel == 1)
			{
				elm_ao_id0_value = ELM_USIP_CORE_SEL(1)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_ICACHE);
				elm_ao_id1_value = ELM_USIP_CORE_SEL(1)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_ICACHE);
			}
			else if (port_sel == 2)
			{
				elm_ao_id0_value = ELM_USIP_CORE_SEL(1)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_DCACHE);
				elm_ao_id1_value = ELM_USIP_CORE_SEL(1)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_DCACHE);
			}			
			else if (port_sel == 3)
			{
				elm_ao_id0_value = ELM_USIP_CORE_SEL(1)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_DNOCACHE);
				elm_ao_id1_value = ELM_USIP_CORE_SEL(1)|ELM_USIP_PORT_SEL(ELM_SEL_USIP_DNOCACHE);
			}
			else
			{
				rtn = KAL_FALSE;
				elm_ao_id0_mask = ELM_AO_CONTROL_DEFAULT;
				elm_ao_id1_mask = ELM_AO_CONTROL_DEFAULT;
			}
		}
		else
		{
			rtn = KAL_FALSE;
			elm_ao_id0_mask = ELM_AO_CONTROL_DEFAULT;
			elm_ao_id1_mask = ELM_AO_CONTROL_DEFAULT;
		}				
	}
	else
	{
		rtn = KAL_FALSE;
	}

	if(rtn == KAL_FALSE)
	{
		elm_ao_decode_cfg = ELM_DECODE_FROM_AO;
	}
	else
	{
		elm_ao_decode_cfg = ELM_DECODE_FROM_APB;
	}

	DRV_ClrReg32(REG_MCUSYS_EMI_ELM_CTRL_REG, (ELM_AO_DECODE(ELM_DECODE_FROM_AO))); // clear AO decode
	DRV_SetReg32(REG_MCUSYS_EMI_ELM_CTRL_REG, (ELM_AO_DECODE(elm_ao_decode_cfg))); // set AO decode

	DRV_WriteReg32(REG_MCUSYS_EMI_ELM_AXI_ID0_CTRL_REG, elm_ao_id0_value);
	DRV_WriteReg32(REG_MCUSYS_EMI_ELM_AXI_ID0_CTRL_MASK, elm_ao_id0_mask); 
	DRV_WriteReg32(REG_MCUSYS_EMI_ELM_AXI_ID1_CTRL_REG, elm_ao_id1_value);
	DRV_WriteReg32(REG_MCUSYS_EMI_ELM_AXI_ID1_CTRL_MASK, elm_ao_id1_mask); 
	
	DRV_WriteReg32(REG_MDMCU_ELM_AO_STATUS0_CFG1, ELM_EMI_TOP_BLOCK(0xff)|DECODE_ID1(elm_id1_rw|elm_id1_master|elm_id1_prio)| \
		ELM_DURATION(ELM_200US)|EMI_BLOCK(E_NOT_MASK)|ELM_INT_MASK(0));

	DRV_WriteReg32_NPW(REG_MDMCU_ELM_AO_STATUS0_CFG0, ELM_ENABLE|ELM_ACCURACY(ELM_unit_100us)| \
		LAT_TH_ID1(ELM_NS2TRAN(elm_write_lat_threshold))|LAT_TH_ID0(ELM_NS2TRAN(elm_read_lat_threshold))| \
		DECODE_ID0(elm_id0_rw|elm_id0_master|elm_id0_prio)); //ELM enable for MDMCU Reset
	return rtn;

}

kal_bool Set_EMI_ELM_VPE(kal_uint8 id, kal_uint8 vpe_sel)
{
	kal_bool rtn = KAL_TRUE;
	
	//Disable before re-configure
	DRV_WriteReg32_NPW(REG_MDMCU_ELM_AO_STATUS0_CFG0, ELM_DISABLE);
	elm_dynamic_lat_threshold_disable = 1; //disable dynamic latency threshold

	elm_ao_id0_value = 0;
	elm_ao_id0_mask = ELM_AO_CONTROL_DEFAULT;
	elm_ao_id1_value = 0;
	elm_ao_id1_mask = ELM_AO_CONTROL_DEFAULT;
	
	if( id == 1 ) // id 1 (default write)
	{		
		elm_ao_id1_mask &=~ (ELM_VPE_SEL(0X7)|ELM_MASTER_SEL(ELM_MASTER_IA_MASK));
		if(vpe_sel==0)
		{
			elm_ao_id1_value = ELM_VPE_SEL(ELM_SEL_VPE0);
		}
		else if(vpe_sel==1)
		{
			elm_ao_id1_value = ELM_VPE_SEL(ELM_SEL_VPE1);
		}
		else if(vpe_sel==2)
		{
			elm_ao_id1_value = ELM_VPE_SEL(ELM_SEL_VPE2);
		}
		else if(vpe_sel==3)
		{
			elm_ao_id1_value = ELM_VPE_SEL(ELM_SEL_VPE3);
		}
		else
		{
			rtn = KAL_FALSE;
			elm_ao_id1_mask = ELM_AO_CONTROL_DEFAULT;
		}
	}
	else if(id == 0)// id 0
	{
		elm_ao_id0_mask &=~ (ELM_VPE_SEL(0X7)|ELM_MASTER_SEL(ELM_MASTER_IA_MASK));
		if(vpe_sel==0)
		{
			elm_ao_id0_value = ELM_VPE_SEL(ELM_SEL_VPE0);
		}
		else if(vpe_sel==1)
		{
			elm_ao_id0_value = ELM_VPE_SEL(ELM_SEL_VPE1);
		}
		else if(vpe_sel==2)
		{
			elm_ao_id0_value = ELM_VPE_SEL(ELM_SEL_VPE2);
		}
		else if(vpe_sel==3)
		{
			elm_ao_id0_value = ELM_VPE_SEL(ELM_SEL_VPE3);
		}
		else
		{
			rtn = KAL_FALSE;
			elm_ao_id0_mask = ELM_AO_CONTROL_DEFAULT;
		}
				
	}
	else if(id == 2)// ID 0/1 are the same 
	{
		elm_ao_id0_mask &=~ (ELM_VPE_SEL(0x7)|ELM_MASTER_SEL(ELM_MASTER_IA_MASK));
		elm_ao_id1_mask &=~ (ELM_VPE_SEL(0x7)|ELM_MASTER_SEL(ELM_MASTER_IA_MASK));
		if(vpe_sel==0)
		{
			elm_ao_id0_value = ELM_VPE_SEL(ELM_SEL_VPE0);
			elm_ao_id1_value = ELM_VPE_SEL(ELM_SEL_VPE0);
		}
		else if(vpe_sel==1)
		{
			elm_ao_id0_value = ELM_VPE_SEL(ELM_SEL_VPE1);
			elm_ao_id1_value = ELM_VPE_SEL(ELM_SEL_VPE1);
		}
		else if(vpe_sel==2)
		{
			elm_ao_id0_value = ELM_VPE_SEL(ELM_SEL_VPE2);
			elm_ao_id1_value = ELM_VPE_SEL(ELM_SEL_VPE2);
		}
		else if(vpe_sel==3)
		{
			elm_ao_id0_value = ELM_VPE_SEL(ELM_SEL_VPE3);
			elm_ao_id1_value = ELM_VPE_SEL(ELM_SEL_VPE3);
		}
		else
		{
			rtn = KAL_FALSE;
			elm_ao_id0_mask = ELM_AO_CONTROL_DEFAULT;
			elm_ao_id1_mask = ELM_AO_CONTROL_DEFAULT;
		}				
	}
	else
	{
		rtn = KAL_FALSE;
	}

	if(rtn == KAL_FALSE)
	{
		elm_ao_decode_cfg = ELM_DECODE_FROM_AO;
	}
	else
	{
		elm_ao_decode_cfg = ELM_DECODE_FROM_APB;
	}

	DRV_ClrReg32(REG_MCUSYS_EMI_ELM_CTRL_REG, (ELM_AO_DECODE(ELM_DECODE_FROM_AO))); // clear AO decode
	DRV_SetReg32(REG_MCUSYS_EMI_ELM_CTRL_REG, (ELM_AO_DECODE(elm_ao_decode_cfg))); // set AO decode

	DRV_WriteReg32(REG_MCUSYS_EMI_ELM_AXI_ID0_CTRL_REG, elm_ao_id0_value);
	DRV_WriteReg32(REG_MCUSYS_EMI_ELM_AXI_ID0_CTRL_MASK, elm_ao_id0_mask); 
	DRV_WriteReg32(REG_MCUSYS_EMI_ELM_AXI_ID1_CTRL_REG, elm_ao_id1_value);
	DRV_WriteReg32(REG_MCUSYS_EMI_ELM_AXI_ID1_CTRL_MASK, elm_ao_id1_mask); 
	
	DRV_WriteReg32(REG_MDMCU_ELM_AO_STATUS0_CFG1, ELM_EMI_TOP_BLOCK(0xff)|DECODE_ID1(elm_id1_rw|elm_id1_master|elm_id1_prio)| \
		ELM_DURATION(ELM_200US)|EMI_BLOCK(E_NOT_MASK)|ELM_INT_MASK(0));

	DRV_WriteReg32_NPW(REG_MDMCU_ELM_AO_STATUS0_CFG0, ELM_ENABLE|ELM_ACCURACY(ELM_unit_100us)| \
		LAT_TH_ID1(ELM_NS2TRAN(elm_write_lat_threshold))|LAT_TH_ID0(ELM_NS2TRAN(elm_read_lat_threshold))| \
		DECODE_ID0(elm_id0_rw|elm_id0_master|elm_id0_prio)); //ELM enable for MDMCU Reset
	return rtn;

}



#endif


