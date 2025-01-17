#ifndef __MT6290_EINT_SW_H__
#define __MT6290_EINT_SW_H__
#include "irqid.h"
#include "drv_comm.h"
#include "intrCtrl.h"
//#include "kal_debug.h"
//#include "eint_hw.h"
#ifdef __CUST_NEW__
#include "eint_drv.h"
#endif

#define  IRQ_EIT_CODE     IRQ_EINT_SHARE_CODE
#define  DEDICATED_EINT_IRQ0  IRQ_EINT0_CODE
#define  DEDICATED_EINT_IRQ1  IRQ_EINT1_CODE
#define  DEDICATED_EINT_IRQ2  IRQ_EINT2_CODE
#define  DEDICATED_EINT_IRQ3  IRQ_EINT3_CODE

#define  DEDICATED_EINT_TOTAL_CHANNEL 4
#define  EINT_MAX_CHANNEL     4
#define  EINT_TOTAL_CHANNEL   4
#ifdef __CUST_NEW__
#define  EINT_HARDWARE_DEBOUNCE (((EINT0_DEBOUNCE_TIME_DELAY>0)?1:0)<<0 | ((EINT1_DEBOUNCE_TIME_DELAY>0)?1:0)<<1 | ((EINT2_DEBOUNCE_TIME_DELAY>0)?1:0)<<2 |\
                                ((EINT3_DEBOUNCE_TIME_DELAY>0)?1:0)<<3 | ((EINT4_DEBOUNCE_TIME_DELAY>0)?1:0)<<4 | ((EINT5_DEBOUNCE_TIME_DELAY>0)?1:0)<<5 |\
                                ((EINT6_DEBOUNCE_TIME_DELAY>0)?1:0)<<6 | ((EINT7_DEBOUNCE_TIME_DELAY>0)?1:0)<<7 | ((EINT8_DEBOUNCE_TIME_DELAY>0)?1:0)<<8 |\
                                ((EINT9_DEBOUNCE_TIME_DELAY>0)?1:0)<<9 | ((EINT10_DEBOUNCE_TIME_DELAY>0)?1:0)<<10 |((EINT11_DEBOUNCE_TIME_DELAY>0)?1:0)<<11|\
                                ((EINT12_DEBOUNCE_TIME_DELAY>0)?1:0)<<12|((EINT13_DEBOUNCE_TIME_DELAY>0)?1:0)<<13| ((EINT14_DEBOUNCE_TIME_DELAY>0)?1:0)<<14|\
                                ((EINT15_DEBOUNCE_TIME_DELAY>0)?1:0)<<15)
#else
#define EINT_HARDWARE_DEBOUNCE 0x0000000F
#endif

#define  EINT_OWNERSHIP_AP  1
#define  EINT_OWNERSHIP_MD  0
#define  EINT_NEGATIVE_POLARITY			0
#define  EINT_POSITIVE_POLARITY			1

#define  EINT_SRC_PIN_MAX    5
#define  EINT_SRC_OFFSET	0x4
#define  EINT_SRC_NUM_PER_REG 4
#define  EINT_SRC_SHIFT_BIT  8

#define BU_G_FLD(_i,_ms,_ls)	    (((_i)<<(31-(_ms))) >> (31- (_ms) + (_ls)))
#define BU_G_BIT(_i,_n)				BU_G_FLD(_i, _n, _n)
#ifdef __MTK_TARGET__
#define EN_EINT_PRINTF  1

#if EN_EINT_PRINTF
extern void dbg_print(char *fmt,...);

#define EINT_PRINT(fmt, var ...)	do {dbg_print(fmt"\n\r", ##var);} while (0)
#define EINT_PRINTN(fmt, var ...)	do {dbg_print(fmt, ##var);} while (0)
#define EINT_ERR(fmt, var ...)		do {EINT_PRINT("ERROR [%s:%d]"fmt, __FUNCTION__, __LINE__, ##var);} while (0)
#define EINT_WARN(fmt, var ...)	do {EINT_PRINT("WARNING [%s:%d]"fmt, __FUNCTION__, __LINE__, ##var);} while (0)
#else 
#define EINT_PRINT(fmt, var ...)	
#define EINT_PRINTN(fmt, var ...)	
#define EINT_ERR(fmt, var ...)		
#define EINT_WARN(fmt, var ...)	
#endif
#endif
#define REG32(addr)					(*((volatile unsigned int*)(addr)))
#define REG32_WRITE(addr, value)		do {(*((volatile unsigned int*)(addr))) = (unsigned int)(value);}while (0)


#define EINT_NUM  EINT_TOTAL_CHANNEL
#define EINT_OK    (0)
#define EINT_FAIL  (-1)
#define EINT_ENABLE  1
#define EINT_DISABLE 0
#define EINT_NEGATIVE_POLARITY			0
#define EINT_POSITIVE_POLARITY			1
#define EINT_EDGE_SENSITIVITY		0
#define EINT_LEVEL_SENSITIVITY		1
#define EINT_DB_DUR_DEFAULT 0x400
#define EINT_DB_DUR_MAX	0xFFFF
#define EINT_HW_DB_TIME_MAX 2000 //ms
#define GPIO_DEINT_SENS_EDGE			1
#define GPIO_DEINT_SENS_LEVEL			0

/**
 * @brief	GPIO EINT Configuration Enumeration
 */
typedef enum{  
	GPIO_EINT0=0,
	GPIO_EINT1,
	GPIO_EINT2,
	GPIO_EINT3,
	GPIO_EINT4,
	GPIO_EINT5,
	GPIO_EINT6,
	GPIO_EINT7,
	GPIO_EINT8,
	GPIO_EINT9,
	GPIO_EINT10,
	GPIO_EINT11,
	GPIO_EINT12,
	GPIO_EINT13,
	GPIO_EINT14,
	GPIO_EINT15,
}eint_e;

typedef enum{  
	DEDICATED_EINT0=0,
	DEDICATED_EINT1,
	DEDICATED_EINT2,
	DEDICATED_EINT3,
}dedicated_eint_e;

/**
*  @brief  set the polarity parameter of the eint
*  @param  eint        :  the eint index to be set
*  @param  pol :	the polarity value to set, it should be 0~1
*				  0: set pol to negative polarity
*				  1: set pol to positive polarity
*  @return EINT_OK :   set successful,  EINT_FAIL : set failed
*/
extern kal_int32 eint_set_pol(eint_e eint, kal_uint32 pol);

/**
*  @brief  set the debounce enable parameter of the eint
*  @param  eint        :  the eint index to be set
*  @param  debounce_en :	the debounce enable value to set, it should be 0~1
*				  		0: enable debounce function
*				  		1: disable debounce function
*  @return EINT_OK :   set successful,  EINT_FAIL : set failed
*/
extern kal_int32 eint_set_debounce_enable(eint_e eint, kal_uint32 debounce_en);


/**
*  @brief  set the debounce duration parameter of the eint
*  @param  eint        :  the eint index to be set
*  @param  duration :	the debounce duration value to set, it should be 0~0x3fff
*  @return EINT_OK :   set successful,  EINT_FAIL : set failed
*/
extern kal_int32 eint_set_debounce_duration(eint_e eint, kal_uint32 duration);


/**
*  @brief  set the irqen parameter of the eint
*  @param  eint        :  the eint index to be set
*  @param  enable :	the irq enable register value to set, it should be 0~1
*				  		0: disable eint irq send to cirq/gic module
*				  		1: enable eint irq send to cirq/gic module
*  @return EINT_OK :   set successful,  EINT_FAIL : set failed
*/
extern kal_int32 eint_set_irqen(eint_e eint,kal_uint32 enable);

extern void eint_set_mask_all(kal_uint32 mask_bits);

extern void eint_set_unmask_all(kal_uint32 unmask_bits);


/**
 *  @brief     get  eint debounce enable value of eint
 *  @param  eint :  The eint to be read.
 *  @return   return the eint debounce parameter's value of eint
 *                 0:  current debounce is disable
 *                 1:  current debounce is enable
 *                 EINT_FAIL: eint is out of range
 */
extern kal_int32 eint_get_debounce_enable(eint_e eint);

/**
 *  @brief     get  eint IRQEN value of eint
 *  @return   return the eint debounce parameter's value of eint
 *                 0:  current eint is unmask
 *                 1:  current eint is mask
 *                 EINT_FAIL: eint is out of range
 */
extern kal_int32 eint_get_irqen(void);


/**
*  @brief  set the sensitivity parameter of the eint
*  @param  eint        :  the eint index to be set
*  @param  type :	the sensitivity value to set, it should be 0~1
*				  0: set sensitivity to edge(pulse)
*				  1: set sensitivity to level
*  @return EINT_OK :   set successful,  EINT_FAIL : set failed
*/
extern kal_int32 eint_set_type(eint_e eint, kal_uint32 type);

/**
*  @brief  set eint ownership register
*  @param  eint  : the eint index to set ownerhsip
*  @param  ownership : the ownership register bit value to set ,it should be 0~1
*                                    0: set ownership to MD
*                                    1: set ownership to AP
*  @return GPIO_OK :	set successful,  GPIO_FAIL : set failed
*/
extern kal_int32 eint_set_ownership(kal_uint32 eint,kal_uint32 ownership);

/**
*  @brief  set the source gpio index parameter of the eint
*  @param  eint        :  the eint index to be set
*  @param  gpio_pin :	The pin which is to set as source gpio of eint. it should be 0~63
*  @return GPIO_OK :   set successful,  GPIO_FAIL : set failed
*/
extern kal_int32 gpio_set_eint_src(eint_e eint, kal_uint8 gpio_pin);

/**
 *  @brief     set dedicated eint enable value of deint
 *  @param  deint :  The dedicated eint to be set.
 *  @param  eint: the l2 eint index to set as source eint of deint,it should be 0~15
 *  @param  enable: the enable register value to set,it should be 0~1
 *				   0: enable dedicated eint 
 *				   1: disable dedicated eint 
 *  @return GPIO_OK :	set successful,  GPIO_FAIL : set failed
 */
extern kal_int32 gpio_set_l1_eint(dedicated_eint_e deint,eint_e eint,kal_uint32 enable);

extern kal_int32 eint_get_l1_irqen(dedicated_eint_e deint);
extern kal_int32 eint_set_l1_eint_enable(dedicated_eint_e deint , kal_uint32 enable);
/**
 *  @brief     get  dedicated eint source l2 eint index value of l1_deint
 *  @param  l1_deint :  The dedicated eint to be read.
 *  @return   return the dedicated eint  source l2 eint index value of l1_deint
 *                 src_eint:  0~0xf , l2 eint index
 *                 GPIO_FAIL: l1_deint is out of range
 */
extern kal_int32 gpio_get_l1_eint_src(kal_uint32 l1_deint);


/**
 *  @brief     get  eint type parameter's value of eint
 *  @param  eint :  The eint to be read.
 *  @return   return the eint type parameter's value of eint
 *                 0: current is edge(pulse) sensitivity
 *                 1: current is level sensitivity
 *                 GPIO_FAIL: eint is out of range
 */
extern kal_int32 gpio_get_eint_type(eint_e eint);

/**
 *  @brief     get  eint source gpio id of eint
 *  @param  eint :  The eint to be read.
 *  @return   return the eint source parameter's value of eint
 *                 gpio_pin: 0~64 the gpio index of eint source
 *                 GPIO_FAIL: eint is out of range
 */
extern kal_int32 gpio_get_eint_src(eint_e eint);


/**
 *  @brief     get  eint polarity value of eint
 *  @param  eint :  The eint to be read.
 *  @return   return the eint polarity parameter's value of eint
 *                 0: current is negative polarity
 *                 1: current is positive polarity
 *                 GPIO_FAIL: eint is out of range
 */
extern kal_int32 gpio_get_eint_pol(eint_e eint);
#endif
