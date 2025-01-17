/*This header file  add  necessary declarations for MIPS CPC*/

#ifndef MIPS_CPC_PRIVATE_H
#define MIPS_CPC_PRIVATE_H

#if defined(MT6763)

#elif defined(ELBRUS)

typedef enum{
	CPC_STAT_PWR_DOWN = 0,
	CPC_STAT_VDD_OK,
	CPC_STAT_UP_DELAY,
	CPC_STAT_UCLK_OFF,
	CPC_STAT_RESET,
	CPC_STAT_RESET_DLY,
	CPC_STAT_NON_COHERENT_EXECUTION,
	CPC_STAT_COHREENT_EXECUTION,
	CPC_STAT_ISOLATE,
	CPC_STAT_CLR_BUS,
	CPC_STAT_DCLK_OFF,
	CPC_STAT_MAX /*This is a maximum seperator*/
} CPC_SEQ_STAT_e;


#define LTE_MIPS_CPC_GLOBAL_BASE			   (0x1BDE0000)
#define LTE_MIPS_CPC_ACCESS_REG 			   (LTE_MIPS_CPC_GLOBAL_BASE + 0x000U)
   #define CPC_ACCESS_REG_CM_EN_MASK		   (0xff)
   #define CPC_ACCESS_REG_CM_EN_OFFSET		   (0x0)
#define LTE_MIPS_CPC_SEQDEL_REG 			   (LTE_MIPS_CPC_GLOBAL_BASE + 0x008U)
   #define CPC_SEQDEL_MICROSTEP_MASK		   (0x3ff)
   #define CPC_SEQDEL_MICROSTEP_OFFSET	   (0x0)
#define LTE_MIPS_CPC_RAIL_REG				   (LTE_MIPS_CPC_GLOBAL_BASE + 0x010U)
   #define CPC_RAIL_RAIL_DELAY_MASK 		   (0x3ff)
   #define CPC_RAIL_RAIL_DELAY_OFFSET	   (0)
#define LTE_MIPS_CPC_RESETLEN_REG			   (LTE_MIPS_CPC_GLOBAL_BASE + 0x018U)
   #define CPC_RESETLEN_LENGTH_MASK 		   (0x3ff)
   #define CPC_RESETLEN_LENGTH_OFFSET	   (0x0)
#define LTE_MIPS_CPC_REVISION_REG			   (LTE_MIPS_CPC_GLOBAL_BASE + 0x020U)
   #define CPC_REVISION_MAJOR_MASK		   (0xff)
   #define CPC_REVISION_MAJOR_OFFSET		   (0x8)
   #define CPC_REVISION_MINOR_MASK		   (0xff)
   #define CPC_REVISION_MINOR_OFFSET		   (0x0)
#define LTE_MIPS_CPC_LOCAL_BASE 			   (0x1BDE2000)
#define LTE_MIPS_CPC_CMD_REG				   (LTE_MIPS_CPC_LOCAL_BASE  + 0x000U)
   #define CPC_CMD_CLOCK_OFF				   (1 << 0)
   #define CPC_CMD_PWR_DOWN 				   (2 << 0)
   #define CPC_CMD_PWR_UP					   (3 << 0)
   #define CPC_CMD_RESET						   (4 << 0)
#define LTE_MIPS_CPC_STAT_CONF_REG			   (LTE_MIPS_CPC_LOCAL_BASE  + 0x008U)
   #define CPC_STAT_PWRUP_EVENT_OFFSET	   (23)
   #define CPC_STAT_SEQ_STATE_MASK		   (0xf)
   #define CPC_STAT_SEQ_STATE_OFFSET		   (19)
   #define CPC_STAT_CLKGAT_IMPL_OFFSET		(17)
   #define CPC_STAT_PWRDN_IMPL_OFFSET 		(16)
   #define CPC_STAT_EJTAG_PROBE_OFFSET		(15)
   #define CPC_STAT_PWUP_POLICY_MASK			(0x3)
   #define CPC_STAT_PWUP_POLICY_OFFSET		(8)
   #define CPC_STAT_IOTRFFC_EN_OFFSET		(4)
   #define CPC_STAT_CMD_MASK					(0xf)
   #define CPC_STAT_CMD_OFFSET					(0)


#define LTE_MIPS_CPC_OTHER_REG				(LTE_MIPS_CPC_LOCAL_BASE + 0x010U)
	#define CPC_OTHER_CORENUM_MASK				(0x7)
	#define CPC_OTHER_CORENUM_OFFSET			(16)

#define LTE_MIPS_CPC_OTHER_CORE_BASE 			(0x1BDE4000)
#define LTE_MIPS_CPC_CO_CMD_REG				(LTE_MIPS_CPC_OTHER_CORE_BASE + 0x000U)
#define LTE_MIPS_CPC_CO_STAT_CONF_REG			(LTE_MIPS_CPC_OTHER_CORE_BASE + 0x008U)
#define LTE_MIPS_CPC_CO_OTHER_REG			(LTE_MIPS_CPC_OTHER_CORE_BASE + 0x008U)


#endif

#endif

