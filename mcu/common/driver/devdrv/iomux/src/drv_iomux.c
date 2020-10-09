/*********************************************************************
  * LEGAL DISCLAIMER
  *
  * (Header of MediaTek Software/Firmware Release or Documentation)
  *
  * BY OPENING OR USING THIS FILE, BUYER HEREBY UNEQUIVOCALLY
  * ACKNOWLEDGES AND AGREES THAT THE SOFTWARE/FIRMWARE AND ITS
  * DOCUMENTATIONS ("MEDIATEK SOFTWARE") RECEIVED FROM MEDIATEK AND/OR
  * ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON AN "AS-IS" BASIS ONLY.
  * MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES, EXPRESS OR
  * IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
  * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
  * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY
  * WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH
  * MAY BE USED BY, INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK
  * SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY
  * WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO NOT BE
  * RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
  * SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
  *
  * BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
  * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED
  * HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
  * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR
  * SERVICE CHARGE PAID BY BUYER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE
  * AT ISSUE.
  *
  * THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN
  * ACCORDANCE WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING
  * ITS CONFLICT OF LAWS PRINCIPLES.
  **********************************************************************
  */


/*******************************************************************************

 * Include files

******************************************************************************/

#include "drv_iomux.h"
#include "kal_public_api.h"
/*******************************************************************************

 * LOCAL CONST DEFINATION

******************************************************************************/


/*******************************************************************************

 * LOCAL TYPE DEFINATION

******************************************************************************/


/*******************************************************************************

 * EXTERN DECLARATION

******************************************************************************/


/*******************************************************************************

 * GLOBAL VARIABLE DEFINATIONS

*******************************************************************************/
kal_uint32 IOMUX_funcValid_check(kal_uint32 function_num, mod_sel_t mod_num, kal_uint32 sip_flag){
	return 0;
	
}
	
	/*
	 *	@brief	   set IOPAD group to special funciton mode
	 *	@param 
	 *		funciton_num:  function mode selection	valid value 0~5;
	 *		mod_num:  IOPAD group selection, valied value please see enum module_sel;
	 *		sip_flag:		choose the chip is SIP or Non-SIP. 
	 *					0: non-sip ; 1: sip
	 *	@return  
	 */
	 
void IOMUX_set_module_func(mod_sel_t mod_num, kal_uint32 function_num){

	kal_uint32 group_offset = 0;
	kal_uint32 mod_offset = 0;
	kal_uint32 gpio_val;
	if(function_num>5){
		ASSERT(0);
	}
	if(mod_num< SEL_PMIC_BSI_0){
		group_offset = IOMUX0_MODE_SEL_1;
		mod_offset = mod_num;
	}else if(mod_num<SEL_C2K_UT0){
		group_offset = IOMUX0_MODE_SEL_2;
		mod_offset = mod_num-SEL_PMIC_BSI_0;
	}else if(mod_num< SEL_MISC_BSI_0){
		group_offset = IOMUX0_MODE_SEL_3;
		mod_offset = mod_num-SEL_C2K_UT0;
	}else if(mod_num< SEL_GPIO_0){
		group_offset = IOMUX1_MODE_SEL_0;
		mod_offset = mod_num-SEL_MISC_BSI_0;
	}else if(mod_num< SEL_BPI_0){
		group_offset = IOMUX1_MODE_SEL_1;
		mod_offset = mod_num-SEL_GPIO_0;
	}else if(mod_num< SEL_BPI_10){
		group_offset = IOMUX2_MODE_SEL_0;
		mod_offset = mod_num-SEL_BPI_0;
	}else if(mod_num< SEL_NFI_0){
		group_offset = IOMUX2_MODE_SEL_1;
		mod_offset = mod_num-SEL_BPI_10;
	}else if(mod_num< SEL_NFI_10){
		group_offset = IOMUX2_MODE_SEL_2;
		mod_offset = mod_num-SEL_NFI_0;
	}else if(mod_num< SEL_NFI_20){
		group_offset = IOMUX2_MODE_SEL_3;
		mod_offset = mod_num-SEL_NFI_10;
	}else if(mod_num< SEL_USIM_1){
		group_offset = IOMUX2_MODE_SEL_4;
		mod_offset = mod_num-SEL_NFI_20;
	}else if(mod_num<= SEL_SPI_1){
		group_offset = IOMUX2_MODE_SEL_5;
		mod_offset = mod_num-SEL_USIM_1;
	}else{
		ASSERT(0);
	}
	gpio_val = DRV_Reg32(group_offset);  			
	gpio_val &= ~(0x7<<mod_offset*3);			
	gpio_val |= (function_num<<mod_offset*3);			
	DRV_WriteReg32(group_offset, gpio_val);
}
	
	/*
	 *	@brief	   Get the special funciton mode of the IOPAD group.
	 *	@param 
	 *		mod_num:  IOPAD group selection, valied value please see enum module_sel;
	 *	@return 
			return the	function mode, valid value 0~5;
	 */
kal_uint32 IOMUX_get_module_func(mod_sel_t mod_num){

	kal_uint32 group_offset = 0;
	kal_uint32 mod_offset = 0;
	kal_uint32 gpio_val;

	if(mod_num< SEL_PMIC_BSI_0){
		group_offset = IOMUX0_MODE_SEL_1;
		mod_offset = mod_num;
	}else if(mod_num<SEL_C2K_UT0){
		group_offset = IOMUX0_MODE_SEL_2;
		mod_offset = mod_num-SEL_PMIC_BSI_0;
	}else if(mod_num< SEL_MISC_BSI_0){
		group_offset = IOMUX0_MODE_SEL_3;
		mod_offset = mod_num-SEL_C2K_UT0;
	}else if(mod_num< SEL_GPIO_0){
		group_offset = IOMUX1_MODE_SEL_0;
		mod_offset = mod_num-SEL_MISC_BSI_0;
	}else if(mod_num< SEL_BPI_0){
		group_offset = IOMUX1_MODE_SEL_1;
		mod_offset = mod_num-SEL_GPIO_0;
	}else if(mod_num< SEL_BPI_10){
		group_offset = IOMUX2_MODE_SEL_0;
		mod_offset = mod_num-SEL_BPI_0;
	}else if(mod_num< SEL_NFI_0){
		group_offset = IOMUX2_MODE_SEL_1;
		mod_offset = mod_num-SEL_BPI_10;
	}else if(mod_num< SEL_NFI_10){
		group_offset = IOMUX2_MODE_SEL_2;
		mod_offset = mod_num-SEL_NFI_0;
	}else if(mod_num< SEL_NFI_20){
		group_offset = IOMUX2_MODE_SEL_3;
		mod_offset = mod_num-SEL_NFI_10;
	}else if(mod_num< SEL_USIM_1){
		group_offset = IOMUX2_MODE_SEL_4;
		mod_offset = mod_num-SEL_NFI_20;
	}else if(mod_num<= SEL_SPI_1){
		group_offset = IOMUX2_MODE_SEL_5;
		mod_offset = mod_num-SEL_USIM_1;
	}else{
		ASSERT(0);
	}
	gpio_val = DRV_Reg32(group_offset);  			
	gpio_val &= (0x7<<mod_offset*3);			
	gpio_val = gpio_val>>mod_offset;

	return gpio_val;

}

/*
SDIO IOPAD drving table:
DRIVE      Driving Current (mA)
000			3
001			6
010			9
011			12
100			15
101			18
110			21
111			24

Other IOPAD Driving table:
DRIVE      Driving Current (mA)
		(3.3V mode)	(1.8V mode)
00			4			3
01			8			6
10			12			9
11			16			12

*/

void IOMUX_set_module_driving(config_sel_t cfg_sel, kal_uint32 drv_sel){
	kal_uint32 gpio_val;
	kal_uint32 group_offset;
	switch(cfg_sel){
		case CFG_GLOBAL: group_offset = IOMUX_CFG_GLOBAL; break;
		case CFG_MDUART: group_offset = IOMUX_CFG_MDUART; break;		
		case CFG_APUART: group_offset = IOMUX_CFG_APUART	; break;		
		case CFG_SUART0: group_offset = 	IOMUX_CFG_SUART0; break;
		case CFG_SUART1	: group_offset = 	IOMUX_CFG_SUART1; break;
		case CFG_SDIO: group_offset = 		IOMUX_CFG_SDIO	; break;
		case CFG_MSDC0P_0: group_offset = IOMUX_CFG_MSDC0P_0; break;	
		case CFG_MSDC0P_1: group_offset = IOMUX_CFG_MSDC0P_1; break;
		case CFG_MSDC0P_2: group_offset = IOMUX_CFG_MSDC0P_2; break;
		case CFG_MSDC1P: group_offset = IOMUX_CFG_MSDC1P; break;
		case CFG_PMIC_BSI_0: group_offset = IOMUX_CFG_PMIC_BSI_0; break;
		case CFG_PMIC_BSI_1: group_offset = IOMUX_CFG_PMIC_BSI_1; break;
		case CFG_PMIC_BSI_2: group_offset = IOMUX_CFG_PMIC_BSI_2; break;
		case CFG_RFIC2_BSI_0: group_offset = IOMUX_CFG_RFIC2_BSI_0; break;
		case CFG_RFIC2_BSI_1: group_offset = IOMUX_CFG_RFIC2_BSI_1; break;
		case CFG_CV	: group_offset = IOMUX_CFG_CV	; break;
		case CFG_SB	: group_offset = IOMUX_CFG_SB; break;
		case CFG_I2C: group_offset = IOMUX_CFG_I2C; break;
		case CFG_SDIO_INT: group_offset = 	CFG_SDIO_INT; break;
		case CFG_MSDC1P_CLK: group_offset = 	IOMUX_CFG_MSDC1P_CLK; break;
		case CFG_MSDC1P_CMD: group_offset =  IOMUX_CFG_MSDC1P_CMD; break;
		case CFG_MSDC1P_DATA0: group_offset = IOMUX_CFG_MSDC1P_DATA0; break;
		case CFG_MSDC1P_DATA1: group_offset = IOMUX_CFG_MSDC1P_DATA1; break;
		case CFG_MSDC1P_DATA2: group_offset = IOMUX_CFG_MSDC1P_DATA2; break;
		case CFG_MSDC1P_DATA3: group_offset = IOMUX_CFG_MSDC1P_DATA3; break;
		case CFG_MSDC1P_RCLK: group_offset = IOMUX_CFG_MSDC1P_RCLK; break;
		case CFG_BIAS_TUNE_0: group_offset = IOMUX0_CFG_BIAS_TUNE; break;
		case CFG_RFIC1_BSI: group_offset = IOMUX_CFG_RFIC1_BSI; break;
		case CFG_MISC_BSI_0: group_offset = 	IOMUX_CFG_MISC_BSI_0; break;
		case CFG_MISC_BSI_1: group_offset = IOMUX_CFG_MISC_BSI_1; break;
		case CFG_GPIO_0: group_offset = 	IOMUX_CFG_GPIO_0; break;	
		case CFG_GPIO_1: group_offset = 	IOMUX_CFG_GPIO_1; break;
		case CFG_GPIO_2: group_offset = 	IOMUX_CFG_GPIO_2; break;	
		case CFG_GPIO_3: group_offset = 	IOMUX_CFG_GPIO_3; break;	
		case CFG_BIAS_TUNE_1: group_offset = IOMUX1_CFG_BIAS_TUNE; break;
		case CFG_JTAG: group_offset = 	IOMUX_CFG_JTAG	; break;
		case CFG_SPI_0: group_offset = 	IOMUX_CFG_SPI_0; break;
		case CFG_SPI_1: group_offset = IOMUX_CFG_SPI_1; break;
		case CFG_NFI_0: group_offset = IOMUX_CFG_NFI_0; break;	
		case CFG_NFI_1: group_offset = IOMUX_CFG_NFI_1; break;	
		case CFG_NFI_2: group_offset = IOMUX_CFG_NFI_2; break;	
		case CFG_NFI_3: group_offset = IOMUX_CFG_NFI_3; break;	
		case CFG_NFI_4: group_offset = IOMUX_CFG_NFI_4; break;
		case CFG_BPI_0: group_offset = IOMUX_CFG_BPI_0; break;	
		case CFG_BPI_1: group_offset = IOMUX_CFG_BPI_1; break;
		case CFG_BPI_2: group_offset = IOMUX_CFG_BPI_2; break;
		case CFG_BPI_3: group_offset = IOMUX_CFG_BPI_3; break;	
		case CFG_BPI_4: group_offset = IOMUX_CFG_BPI_4; break;	
		case CFG_BPI_5: group_offset = IOMUX_CFG_BPI_5; break;	
		case CFG_BPI_6: group_offset = IOMUX_CFG_BPI_6; break;	
		case CFG_BPI_7: group_offset = IOMUX_CFG_BPI_7; break;	
		case CFG_BPI_8: group_offset = IOMUX_CFG_BPI_8; break;	
		case CFG_BPI_9: group_offset = IOMUX_CFG_BPI_9; break;	
		case CFG_BPI_10: group_offset = IOMUX_CFG_BPI_10; break;
		case CFG_BPI_11: group_offset = IOMUX_CFG_BPI_11; break;
		case CFG_USIM1: group_offset = IOMUX_CFG_USIM1; break;	
		case CFG_USIM2: group_offset = IOMUX_CFG_USIM2; break;	
		case CFG_BIAS_TUNE_2: group_offset = IOMUX2_CFG_BIAS_TUNE; break;
		default:
		ASSERT(0);
		break;
	}
	gpio_val = DRV_Reg32(group_offset);  
	if(cfg_sel ==CFG_SDIO){
		gpio_val &= ~(0x7<<10);
		if(drv_sel>0x7){
			ASSERT(0);
		}
		
	}else{
		gpio_val &= ~(0x3<<10);
		if(drv_sel>0x7){
			ASSERT(0);
		}
	}
	gpio_val |= (drv_sel<<10);
	DRV_WriteReg32(group_offset, gpio_val);			

}

kal_uint32 IOMUX_get_module_driving(config_sel_t cfg_sel ){
	kal_uint32 drv_sel;
	kal_uint32 gpio_val;
	kal_uint32 group_offset;

	switch(cfg_sel){
		case CFG_GLOBAL: group_offset = IOMUX_CFG_GLOBAL; break;
		case CFG_MDUART: group_offset = IOMUX_CFG_MDUART; break;		
		case CFG_APUART: group_offset = IOMUX_CFG_APUART	; break;		
		case CFG_SUART0: group_offset = 	IOMUX_CFG_SUART0; break;
		case CFG_SUART1	: group_offset = 	IOMUX_CFG_SUART1; break;
		case CFG_SDIO: group_offset = 		IOMUX_CFG_SDIO	; break;
		case CFG_MSDC0P_0: group_offset = IOMUX_CFG_MSDC0P_0; break;	
		case CFG_MSDC0P_1: group_offset = IOMUX_CFG_MSDC0P_1; break;
		case CFG_MSDC0P_2: group_offset = IOMUX_CFG_MSDC0P_2; break;
		case CFG_MSDC1P: group_offset = IOMUX_CFG_MSDC1P; break;
		case CFG_PMIC_BSI_0: group_offset = IOMUX_CFG_PMIC_BSI_0; break;
		case CFG_PMIC_BSI_1: group_offset = IOMUX_CFG_PMIC_BSI_1; break;
		case CFG_PMIC_BSI_2: group_offset = IOMUX_CFG_PMIC_BSI_2; break;
		case CFG_RFIC2_BSI_0: group_offset = IOMUX_CFG_RFIC2_BSI_0; break;
		case CFG_RFIC2_BSI_1: group_offset = IOMUX_CFG_RFIC2_BSI_1; break;
		case CFG_CV	: group_offset = IOMUX_CFG_CV	; break;
		case CFG_SB	: group_offset = IOMUX_CFG_SB; break;
		case CFG_I2C: group_offset = IOMUX_CFG_I2C; break;
		case CFG_SDIO_INT: group_offset = 	CFG_SDIO_INT; break;
		case CFG_MSDC1P_CLK: group_offset = 	IOMUX_CFG_MSDC1P_CLK; break;
		case CFG_MSDC1P_CMD: group_offset =  IOMUX_CFG_MSDC1P_CMD; break;
		case CFG_MSDC1P_DATA0: group_offset = IOMUX_CFG_MSDC1P_DATA0; break;
		case CFG_MSDC1P_DATA1: group_offset = IOMUX_CFG_MSDC1P_DATA1; break;
		case CFG_MSDC1P_DATA2: group_offset = IOMUX_CFG_MSDC1P_DATA2; break;
		case CFG_MSDC1P_DATA3: group_offset = IOMUX_CFG_MSDC1P_DATA3; break;
		case CFG_MSDC1P_RCLK: group_offset = IOMUX_CFG_MSDC1P_RCLK; break;
		case CFG_BIAS_TUNE_0: group_offset = IOMUX0_CFG_BIAS_TUNE; break;
		case CFG_RFIC1_BSI: group_offset = IOMUX_CFG_RFIC1_BSI; break;
		case CFG_MISC_BSI_0: group_offset = 	IOMUX_CFG_MISC_BSI_0; break;
		case CFG_MISC_BSI_1: group_offset = IOMUX_CFG_MISC_BSI_1; break;
		case CFG_GPIO_0: group_offset = 	IOMUX_CFG_GPIO_0; break;	
		case CFG_GPIO_1: group_offset = 	IOMUX_CFG_GPIO_1; break;
		case CFG_GPIO_2: group_offset = 	IOMUX_CFG_GPIO_2; break;	
		case CFG_GPIO_3: group_offset = 	IOMUX_CFG_GPIO_3; break;	
		case CFG_BIAS_TUNE_1: group_offset = IOMUX1_CFG_BIAS_TUNE; break;
		case CFG_JTAG: group_offset = 	IOMUX_CFG_JTAG	; break;
		case CFG_SPI_0: group_offset = 	IOMUX_CFG_SPI_0; break;
		case CFG_SPI_1: group_offset = IOMUX_CFG_SPI_1; break;
		case CFG_NFI_0: group_offset = IOMUX_CFG_NFI_0; break;	
		case CFG_NFI_1: group_offset = IOMUX_CFG_NFI_1; break;	
		case CFG_NFI_2: group_offset = IOMUX_CFG_NFI_2; break;	
		case CFG_NFI_3: group_offset = IOMUX_CFG_NFI_3; break;	
		case CFG_NFI_4: group_offset = IOMUX_CFG_NFI_4; break;
		case CFG_BPI_0: group_offset = IOMUX_CFG_BPI_0; break;	
		case CFG_BPI_1: group_offset = IOMUX_CFG_BPI_1; break;
		case CFG_BPI_2: group_offset = IOMUX_CFG_BPI_2; break;
		case CFG_BPI_3: group_offset = IOMUX_CFG_BPI_3; break;	
		case CFG_BPI_4: group_offset = IOMUX_CFG_BPI_4; break;	
		case CFG_BPI_5: group_offset = IOMUX_CFG_BPI_5; break;	
		case CFG_BPI_6: group_offset = IOMUX_CFG_BPI_6; break;	
		case CFG_BPI_7: group_offset = IOMUX_CFG_BPI_7; break;	
		case CFG_BPI_8: group_offset = IOMUX_CFG_BPI_8; break;	
		case CFG_BPI_9: group_offset = IOMUX_CFG_BPI_9; break;	
		case CFG_BPI_10: group_offset = IOMUX_CFG_BPI_10; break;
		case CFG_BPI_11: group_offset = IOMUX_CFG_BPI_11	; break;
		case CFG_USIM1: group_offset = IOMUX_CFG_USIM1; break;	
		case CFG_USIM2: group_offset = IOMUX_CFG_USIM2; break;	
		case CFG_BIAS_TUNE_2: group_offset = IOMUX2_CFG_BIAS_TUNE; break;
		default:
		ASSERT(0);
		break;
	}
	gpio_val = DRV_Reg32(group_offset);  
	if(cfg_sel ==CFG_SDIO){
		gpio_val &= (0x7<<10);
		drv_sel = (gpio_val>>10);
		
	}else{
		gpio_val &= (0x3<<10);
		drv_sel = (gpio_val>>10);
	}
	
	return drv_sel;	
}

void IOMUX_set_moduleconfig(module_conf_t* iomux_cfg){}
module_conf_t* IOMUX_get_moduleconfig(config_sel_t cfg_sel, module_type_t type){
	return 0;
}

void IOMUX_init(){
	//kal_uint32 func_num = 0; 
	//IOMUX_PRINT("IOMUX init");
#if defined(TK6291)
#if __FPGA__
//do nothing
#else
	IOMUX_set_module_func(SEL_MISC_BSI_0, 1);
	IOMUX_set_module_func(SEL_MSDC0P_0, 1);

#endif	
#else
	#error "The chip type is non-supported"
#endif


	
}



