/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 *	  drv_iomux.h
 *
 * Project:
 * --------
 *	 drv_iomux
 *
 * Description:
 * ------------
 *	 This file is intends for iomux driver.
 *
 * Author:
 * -------
 * -------
 *
 *===========================================================
 ******************************************************************************/


#ifndef IOMUX_HW_H
#define IOMUX_HW_H

#include "drv_comm.h"
#include "kal_general_types.h"
#include "kal_debug.h"

#ifndef BASE_MADDR_IOMUX0 
#define BASE_MADDR_IOMUX0               (0xC3710000)
#endif
#ifndef BASE_MADDR_IOMUX1
#define BASE_MADDR_IOMUX1               (0xC3720000)
#endif
#ifndef BASE_MADDR_IOMUX2
#define BASE_MADDR_IOMUX2               (0xC3730000)
#endif

#define IOMUX0_CODA_VERSION		(BASE_MADDR_IOMUX0+0x0)		/* Read only */
#define IOMUX0_TOP_DUMMY			(BASE_MADDR_IOMUX0+0x04)
#define IOMUX0_TOP_STATUS			(BASE_MADDR_IOMUX0+0x08)
#define IOMUX1_CODA_VERSION		(BASE_MADDR_IOMUX1+0x0)		/* Read only */
#define IOMUX1_TOP_DUMMY			(BASE_MADDR_IOMUX1+0x04)
#define IOMUX1_TOP_STATUS			(BASE_MADDR_IOMUX1+0x08)
#define IOMUX2_CODA_VERSION		(BASE_MADDR_IOMUX2+0x0)		/* Read only */
#define IOMUX2_TOP_DUMMY			(BASE_MADDR_IOMUX2+0x04)
#define IOMUX2_TOP_STATUS			(BASE_MADDR_IOMUX2+0x08)

#define IOMUX0_MODE_SEL_1			(BASE_MADDR_IOMUX0+0x100)
#define IOMUX0_MODE_SEL_2			(BASE_MADDR_IOMUX0+0x104)
#define IOMUX0_MODE_SEL_3			(BASE_MADDR_IOMUX0+0x108)
#define IOMUX1_MODE_SEL_0			(BASE_MADDR_IOMUX1+0x100)
#define IOMUX1_MODE_SEL_1			(BASE_MADDR_IOMUX1+0x104)
#define IOMUX2_MODE_SEL_0			(BASE_MADDR_IOMUX2+0x100)
#define IOMUX2_MODE_SEL_1			(BASE_MADDR_IOMUX2+0x104)
#define IOMUX2_MODE_SEL_2			(BASE_MADDR_IOMUX2+0x108)
#define IOMUX2_MODE_SEL_3			(BASE_MADDR_IOMUX2+0x10C)
#define IOMUX2_MODE_SEL_4			(BASE_MADDR_IOMUX2+0x110)
#define IOMUX2_MODE_SEL_5			(BASE_MADDR_IOMUX2+0x114)

#define IOMUX_CFG_GLOBAL			(BASE_MADDR_IOMUX0+0x110)
#define IOMUX_CFG_MDUART			(BASE_MADDR_IOMUX0+0x120)
#define IOMUX_CFG_APUART			(BASE_MADDR_IOMUX0+0x124)
#define IOMUX_CFG_SUART0			(BASE_MADDR_IOMUX0+0x128)
#define IOMUX_CFG_SUART1			(BASE_MADDR_IOMUX0+0x12C)
#define IOMUX_CFG_SDIO				(BASE_MADDR_IOMUX0+0x130)
#define IOMUX_CFG_MSDC0P_0		(BASE_MADDR_IOMUX0+0x140)
#define IOMUX_CFG_MSDC0P_1		(BASE_MADDR_IOMUX0+0x144)
#define IOMUX_CFG_MSDC0P_2		(BASE_MADDR_IOMUX0+0x148)
#define IOMUX_CFG_MSDC1P			(BASE_MADDR_IOMUX0+0x150)
#define IOMUX_CFG_PMIC_BSI_0		(BASE_MADDR_IOMUX0+0x160)
#define IOMUX_CFG_PMIC_BSI_1		(BASE_MADDR_IOMUX0+0x164)
#define IOMUX_CFG_PMIC_BSI_2		(BASE_MADDR_IOMUX0+0x168)
#define IOMUX_CFG_RFIC2_BSI_0		(BASE_MADDR_IOMUX0+0x170)
#define IOMUX_CFG_RFIC2_BSI_1		(BASE_MADDR_IOMUX0+0x174)
#define IOMUX_CFG_CV				(BASE_MADDR_IOMUX0+0x180)
#define IOMUX_CFG_SB				(BASE_MADDR_IOMUX0+0x184)
#define IOMUX_CFG_I2C				(BASE_MADDR_IOMUX0+0x190)
#define IOMUX_CFG_SDIO_INT			(BASE_MADDR_IOMUX0+0x1A0)
#define IOMUX_CFG_MSDC1P_CLK		(BASE_MADDR_IOMUX0+0x1B0)
#define IOMUX_CFG_MSDC1P_CMD		(BASE_MADDR_IOMUX0+0x1B4)
#define IOMUX_CFG_MSDC1P_DATA0	(BASE_MADDR_IOMUX0+0x1B8)
#define IOMUX_CFG_MSDC1P_DATA1	(BASE_MADDR_IOMUX0+0x1BC)
#define IOMUX_CFG_MSDC1P_DATA2	(BASE_MADDR_IOMUX0+0x1C0)
#define IOMUX_CFG_MSDC1P_DATA3	(BASE_MADDR_IOMUX0+0x1C4)
#define IOMUX_CFG_MSDC1P_RCLK		(BASE_MADDR_IOMUX0+0x1C8)
#define IOMUX0_CFG_BIAS_TUNE		(BASE_MADDR_IOMUX0+0x1D0)

#define IOMUX_CFG_RFIC1_BSI		(BASE_MADDR_IOMUX1+0x110)
#define IOMUX_CFG_MISC_BSI_0		(BASE_MADDR_IOMUX1+0x120)
#define IOMUX_CFG_MISC_BSI_1		(BASE_MADDR_IOMUX1+0x124)
#define IOMUX_CFG_GPIO_0			(BASE_MADDR_IOMUX1+0x130)
#define IOMUX_CFG_GPIO_1			(BASE_MADDR_IOMUX1+0x134)
#define IOMUX_CFG_GPIO_2			(BASE_MADDR_IOMUX1+0x138)
#define IOMUX_CFG_GPIO_3			(BASE_MADDR_IOMUX1+0x13C)
#define IOMUX1_CFG_BIAS_TUNE		(BASE_MADDR_IOMUX1+0x140)

#define IOMUX_CFG_JTAG				(BASE_MADDR_IOMUX2+0x120)
#define IOMUX_CFG_SPI_0			(BASE_MADDR_IOMUX2+0x130)
#define IOMUX_CFG_SPI_1			(BASE_MADDR_IOMUX2+0x134)
#define IOMUX_CFG_NFI_0			(BASE_MADDR_IOMUX2+0x140)
#define IOMUX_CFG_NFI_1			(BASE_MADDR_IOMUX2+0x144)
#define IOMUX_CFG_NFI_2			(BASE_MADDR_IOMUX2+0x148)
#define IOMUX_CFG_NFI_3			(BASE_MADDR_IOMUX2+0x14C)
#define IOMUX_CFG_NFI_4			(BASE_MADDR_IOMUX2+0x150)
#define IOMUX_CFG_BPI_0			(BASE_MADDR_IOMUX2+0x160)
#define IOMUX_CFG_BPI_1			(BASE_MADDR_IOMUX2+0x164)
#define IOMUX_CFG_BPI_2			(BASE_MADDR_IOMUX2+0x168)
#define IOMUX_CFG_BPI_3			(BASE_MADDR_IOMUX2+0x16C)
#define IOMUX_CFG_BPI_4			(BASE_MADDR_IOMUX2+0x170)
#define IOMUX_CFG_BPI_5			(BASE_MADDR_IOMUX2+0x174)
#define IOMUX_CFG_BPI_6			(BASE_MADDR_IOMUX2+0x178)
#define IOMUX_CFG_BPI_7			(BASE_MADDR_IOMUX2+0x17C)
#define IOMUX_CFG_BPI_8			(BASE_MADDR_IOMUX2+0x180)
#define IOMUX_CFG_BPI_9			(BASE_MADDR_IOMUX2+0x184)
#define IOMUX_CFG_BPI_10			(BASE_MADDR_IOMUX2+0x188)
#define IOMUX_CFG_BPI_11			(BASE_MADDR_IOMUX2+0x18C)
#define IOMUX_CFG_USIM1			(BASE_MADDR_IOMUX2+0x190)
#define IOMUX_CFG_USIM2			(BASE_MADDR_IOMUX2+0x194)
#define IOMUX2_CFG_BIAS_TUNE		(BASE_MADDR_IOMUX2+0x1B0)



/*IOMUX0_MODE_SEL_1*/
#define S_SDIO0				(0x00)
#define S_MSDC0P_0			(0x03)
#define S_MSDC0P_1			(0x06)
#define S_MSDC0P_2			(0x09)
#define S_MSDC1P				(0x0C)
#define S_MDUART				(0x10)
#define S_APUART				(0x13)
#define S_SUART0				(0x16)
#define S_SUART1				(0x19)
#define S_SUART2				(0x1C)

/*IOMUX0_MODE_SEL_2	*/
#define S_PMIC_BSI_0			(0x00)
#define S_PMIC_BSI_1			(0x03)
#define S_PMIC_BSI_2			(0x06)
#define S_I2C					(0x09)
#define S_RFIC2_BSI_0			(0x0C)
#define S_RFIC2_BSI_1			(0x10)
#define S_SDIO_INT			(0x13)
#define S_GLOBAL_0			(0x16)
#define S_GLOBAL_1			(0x19)

/*IOMUX0_MODE_SEL_3*/
#define S_C2K_UT0				(0x00)
#define S_SRCLK_IN			(0x03)
#define S_IDC_RXD				(0x06)
#define S_EXT_FRAME_SYNC		(0x09)
#define S_UIM0_HOTPLUG		(0x0C)
#define S_UIM1_HOTPLUG		(0x10)
#define S_MD2_EINT0			(0x13)
#define S_MD2_EINT1			(0x16)
#define S_MD2_EINT2			(0x19)

/*IOMUX1_MODE_SEL_0	*/
#define S_MISC_BSI_0			(0x00)
#define S_MISC_BSI_1			(0x03)
/*IOMUX1_MODE_SEL_1	*/
#define S_GPIO_0				(0x00)
#define S_GPIO_1				(0x03)
#define S_GPIO_2				(0x06)
#define S_GPIO_3				(0x09)

/*IOMUX2_MODE_SEL_0	*/
#define S_BPI_0				(0x00)
#define S_BPI_1				(0x03)
#define S_BPI_2				(0x06)
#define S_BPI_3				(0x09)
#define S_BPI_4				(0x0C)
#define S_BPI_5				(0x10)
#define S_BPI_6				(0x13)
#define S_BPI_7				(0x16)
#define S_BPI_8				(0x19)
#define S_BPI_9				(0x1C)
/*IOMUX2_MODE_SEL_1	*/
#define S_BPI_10				(0x00)
#define S_BPI_11				(0x03)
#define S_BPI_12				(0x06)

/*IOMUX2_MODE_SEL_2	*/
#define S_NFI_0				(0x00)
#define S_NFI_1				(0x03)
#define S_NFI_2				(0x06)
#define S_NFI_3				(0x09)
#define S_NFI_4				(0x0C)
#define S_NFI_5				(0x10)
#define S_NFI_6				(0x13)
#define S_NFI_7				(0x16)
#define S_NFI_8				(0x19)
#define S_NFI_9				(0x1C)
/*IOMUX2_MODE_SEL_3	*/
#define S_NFI_10				(0x00)
#define S_NFI_11				(0x03)
#define S_NFI_12				(0x06)
#define S_NFI_13				(0x09)
#define S_NFI_14				(0x0C)
#define S_NFI_15				(0x10)
#define S_NFI_16				(0x13)
#define S_NFI_17				(0x16)
#define S_NFI_18				(0x19)
#define S_NFI_19				(0x1C)
/*IOMUX2_MODE_SEL_4	*/
#define S_NFI_20				(0x00)
#define S_NFI_21				(0x03)
#define S_NFI_22				(0x06)
#define S_NFI_23				(0x09)

/*IOMUX2_MODE_SEL_5	*/
#define S_USIM_1				(0x00)
#define S_USIM_2				(0x03)
#define S_JTAG					(0x06)
#define S_SPI_0				(0x09)
#define S_SPI_1				(0x0C)

/*IOMUX2_BIAS_TUNE	*/
#define SEL_BPI_BIAS_TUNE		(0x00)
#define SEL_SPI_BIAS_TUNE		(0x03)
#define SEL_SIM0P_BIAS_TUNE	(0x06)
#define SEL_SIM1P_BIAS_TUNE	(0x09)


#define IOMUX_OK    (0)
#define IOMUX_FAIL  (-1)
#define IOMUX_MEM_SIZE 4096

#define EN_IOMUX_PRINTF 1
extern void dbg_print(char *fmt,...);

#if EN_IOMUX_PRINTF
#define IOMUX_PRINT(fmt, var ...)	do {dbg_print(fmt"\n\r", ##var);} while (0)
#define IOMUX_PRINTN(fmt, var ...)	do {dbg_print(fmt, ##var);} while (0)
#define IOMUX_ERR(fmt, var ...)		do {IOMUX_PRINT("ERROR [%s:%d]"fmt, __FUNCTION__, __LINE__, ##var);} while (0)
#define IOMUX_WARN(fmt, var ...)	do {IOMUX_PRINT("WARNING [%s:%d]"fmt, __FUNCTION__, __LINE__, ##var);} while (0)
#else 
#define IOMUX_PRINT(fmt, var ...)	
#define IOMUX_PRINTN(fmt, var ...)	
#define IOMUX_ERR(fmt, var ...)		
#define IOMUX_WARN(fmt, var ...)	
#endif



typedef enum{
/*IOMUX0_MODE_SEL_1*/
SEL_SDIO0 = 0,
SEL_MSDC0P_0,
SEL_MSDC0P_1,		
SEL_MSDC0P_2,		
SEL_MSDC1P	,		
SEL_MDUART,		
SEL_SUART0	,	
SEL_SUART1,		
SEL_SUART2,		

/*IOMUX0_MODE_SEL_2	*/
SEL_PMIC_BSI_0,			
SEL_PMIC_BSI_1,			
SEL_PMIC_BSI_2,			
SEL_I2C,				
SEL_RFIC2_BSI_0,			
SEL_RFIC2_BSI_1,		
SEL_SDIO_INT,			
SEL_GLOBAL_0,			
SEL_GLOBAL_1,			

/*IOMUX0_MODE_SEL_3*/
SEL_C2K_UT0,			
SEL_SRCLK_IN,		
SEL_IDC_RXD	,		
SEL_EXT_FRAME_SYNC,		
SEL_UIM0_HOTPLUG,		
SEL_UIM1_HOTPLUG,		
SEL_MD2_EINT0,			
SEL_MD2_EINT1,			
SEL_MD2_EINT2,			

/*IOMUX1_MODE_SEL_0	*/
SEL_MISC_BSI_0,			
SEL_MISC_BSI_1,			
/*IOMUX1_MODE_SEL_1	*/
SEL_GPIO_0,	
SEL_GPIO_1,				
SEL_GPIO_2,				
SEL_GPIO_3,			

/*IOMUX2_MODE_SEL_0	*/
SEL_BPI_0,				
SEL_BPI_1,				
SEL_BPI_2,			
SEL_BPI_3,			
SEL_BPI_4,			
SEL_BPI_5,			
SEL_BPI_6,			
SEL_BPI_7,			
SEL_BPI_8,				
SEL_BPI_9,			
/*IOMUX2_MODE_SEL_1	*/
SEL_BPI_10,			
SEL_BPI_11,				
SEL_BPI_12,				

/*IOMUX2_MODE_SEL_2	*/
SEL_NFI_0,			
SEL_NFI_1,			
SEL_NFI_2,			
SEL_NFI_3,			
SEL_NFI_4,			
SEL_NFI_5,			
SEL_NFI_6,			
SEL_NFI_7,				
SEL_NFI_8,				
SEL_NFI_9,			
/*IOMUX2_MODE_SEL_3	*/
SEL_NFI_10,				
SEL_NFI_11,				
SEL_NFI_12,			
SEL_NFI_13,			
SEL_NFI_14,			
SEL_NFI_15,			
SEL_NFI_16,			
SEL_NFI_17,				
SEL_NFI_18,			
SEL_NFI_19,				
/*IOMUX2_MODE_SEL_4	*/
SEL_NFI_20,				
SEL_NFI_21,			
SEL_NFI_22,				
SEL_NFI_23,			

/*IOMUX2_MODE_SEL_5	*/
SEL_USIM_1,			
SEL_USIM_2,				
SEL_JTAG,				
SEL_SPI_0,				
SEL_SPI_1,				
sel_count
}mod_sel_t;


typedef enum{
CFG_GLOBAL	= 0,		
CFG_MDUART	,		
CFG_APUART,			
CFG_SUART0	,		
CFG_SUART1	,		
CFG_SDIO	,			
CFG_MSDC0P_0,		
CFG_MSDC0P_1	,	
CFG_MSDC0P_2	,	
CFG_MSDC1P		,	
CFG_PMIC_BSI_0	,	
CFG_PMIC_BSI_1	,	
CFG_PMIC_BSI_2	,	
CFG_RFIC2_BSI_0	,	
CFG_RFIC2_BSI_1	,	
CFG_CV			,	
CFG_SB			,	
CFG_I2C			,	
CFG_SDIO_INT	,		
CFG_MSDC1P_CLK,		
CFG_MSDC1P_CMD,		
CFG_MSDC1P_DATA0,	
CFG_MSDC1P_DATA1,	
CFG_MSDC1P_DATA2,	
CFG_MSDC1P_DATA3,	
CFG_MSDC1P_RCLK,		
CFG_BIAS_TUNE_0,	

CFG_RFIC1_BSI,		
CFG_MISC_BSI_0,		
CFG_MISC_BSI_1,		
CFG_GPIO_0,			
CFG_GPIO_1,			
CFG_GPIO_2,			
CFG_GPIO_3,			
CFG_BIAS_TUNE_1,		

CFG_JTAG,				
CFG_SPI_0,			
CFG_SPI_1,			
CFG_NFI_0,			
CFG_NFI_1,			
CFG_NFI_2,			
CFG_NFI_3,			
CFG_NFI_4,			
CFG_BPI_0,			
CFG_BPI_1,			
CFG_BPI_2,			
CFG_BPI_3,			
CFG_BPI_4,			
CFG_BPI_5,			
CFG_BPI_6,			
CFG_BPI_7,			
CFG_BPI_8,			
CFG_BPI_9,			
CFG_BPI_10,			
CFG_BPI_11,			
CFG_USIM1,			
CFG_USIM2,			
CFG_BIAS_TUNE_2,		
cfg_count,
}config_sel_t;


typedef enum{
	normal = 0,
	msdc0p,
	msdc1,
	sdio,
	ddrphy,
	dmcmdphy
}module_type_t;


typedef struct{
	config_sel_t  cfg_sel;
	module_type_t type;
	kal_uint32 rdsel;
	kal_uint32 tdsel;
	kal_uint32 drive;
	kal_uint8 r0;
	kal_uint8 r1;
	kal_uint8 smt;
	kal_uint8 sr;
	
	
}module_conf_t;


/*
 *  @brief     Set the module  IOPAD group driving.
 *  @param 
 *		cfg_sel:  configure IOPAD group selection, valied value please see enum config_sel_t;
 *		drv_sel: driving value table list. SDIO: 000'b~111'b; Others: 00'b~11'b
 */
extern void IOMUX_set_module_driving(config_sel_t cfg_sel, kal_uint32 drv_sel);
/*
 *  @brief     Get the module  IOPAD group driving.
 *  @param 
 *		cfg_sel:  configure IOPAD group selection, valied value please see enum config_sel_t;
 *  @return 
 		return the  function mode, valid value please check driving table;
 */
extern kal_uint32 IOMUX_get_module_driving(config_sel_t cfg_sel );
/*
 *  @brief     Check the function num is valid or not for IOPAD group . 
 *  @param 
 *		funciton_num:  function mode selection  valid value 0~5;
 *		module_num:  IOPAD group selection, valied value please see enum module_sel;
 *		sip_flag: 		choose the chip is SIP or Non-SIP. 
 *					0: non-sip ; 1: sip
 *  @return  
 *           0:  is valid setting;
 * 		1: invaild funtion setting;
 */	

extern kal_uint32 IOMUX_funcValid_check(kal_uint32 function_num, mod_sel_t mod_num, kal_uint32 sip_flag);


/*
 *  @brief     set IOPAD group to special funciton mode
 *  @param 
 *		funciton_num:  function mode selection  valid value 0~5;
 *		mod_num:  IOPAD group selection, valied value please see enum module_sel;
 *		sip_flag: 		choose the chip is SIP or Non-SIP. 
 *					0: non-sip ; 1: sip
 *  @return  
 */
extern void IOMUX_set_module_func( mod_sel_t mod_num, kal_uint32 function_num);

/*
 *  @brief     Get the special function mode of the IOPAD group.
 *  @param 
 *		mod_num:  IOPAD group selection, valied value please see enum module_sel;
 *  @return 
 		return the  function mode, valid value 0~5;
 */
extern kal_uint32 IOMUX_get_module_func(mod_sel_t module_num);


/*****************************************************************
*some fields control the IOPAD behavior when these IOPAD groups operate in non F0 mode.
*
******************************************************************/

extern void IOMUX_init(void);
extern void IOMUX_set_moduleconfig(module_conf_t* cfg);
extern module_conf_t* IOMUX_get_moduleconfig(config_sel_t cfg_sel, module_type_t  type);

#define CONFIG_ADDR(cfg_sel)			   
#define IOMUX_set_module_drive(cfg_sel, data) 
#define IOMUX_set_msdc_drive(cfg_sel, data)   
#define IOMUX_set_module_tdsel(cfg_sel, data) 
#define IOMUX_set_msdc_tdsel(cfg_sel, data)   
#define IOMUX_set_module_rdsel(cfg_sel, data) 
#define IOMUX_set_msdc_rdsel(cfg_sel, data)   
#define IOMUX_set_msdc0_smt(cfg_sel, data)    
#define IOMUX_set_msdc0_sr(cfg_sel, data)     
#define IOMUX_set_sdio_r1(cfg_sel, data)      
#define IOMUX_set_sdio_r0(cfg_sel, data)      
#define IOMUX_set_sdio_smt(cfg_sel, data)     
#define IOMUX_set_sdio_sr(cfg_sel, data)      
#define IOMUX_set_ddrphy_cfg(data)			  
#define IOMUX_set_dmcmdphy_cfg(data)		




#define IOMUX_get_module_drive(cfg_sel) 
#define IOMUX_get_msdc_drive(cfg_sel)   
#define IOMUX_get_module_tdsel(cfg_sel)
#define IOMUX_get_msdc_tdsel(cfg_sel)   
#define IOMUX_get_module_rdsel(cfg_sel) 
#define IOMUX_get_msdc_rdsel(cfg_sel)   

#define IOMUX_get_msdc0_smt(cfg_sel)	
#define IOMUX_get_msdc0_sr(cfg_sel)  


#define IOMUX_get_sdio_r0(cfg_sel)		
#define IOMUX_get_sdio_r1(cfg_sel)		
#define IOMUX_get_sdio_sr(cfg_sel)		
#define IOMUX_get_sdio_smt(cfg_sel)		
#define IOMUX_get_ddrphy_cfg()			
#define IOMUX_get_dmcmdphy_cfg()		


#ifndef DRV_SetReg3
#define DRV_SetReg3(addr,offset,data) DRV_WriteReg32(addr, ((DRV_Reg32(addr) & ~(0x7<<offset))|(data << offset)))
#endif


#endif /*IOMUX_HW_H*/