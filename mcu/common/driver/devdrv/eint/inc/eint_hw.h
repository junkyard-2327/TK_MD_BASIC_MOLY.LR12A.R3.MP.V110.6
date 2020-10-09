#ifndef __EINT_HW_H__
#define __EINT_HW_H__
#include "drv_comm.h"

#define GPIOMUX_BASE_ADDR 				BASE_MADDR_MDEINT
#define EINT_ADDR_OFFSET 0x1000 

#define GPIOMUX_EINT_SRC1		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x0))
//#define GPIOMUX_EINT_SRC2		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x4))
//#define GPIOMUX_EINT_SRC3		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x8))
//#define GPIOMUX_EINT_SRC4		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0xC))
#define GPIOMUX_EINT_DB_EN		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x100))
#define GPIOMUX_EINT_POL		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x180))
#define GPIOMUX_EINT_TYPE		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x200))
#define GPIOMUX_EINT_IRQEN		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x280))
#define GPIOMUX_EINT_IRQSTS		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x300))
#define GPIOMUX_EINT_DBNCSTS   ((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x380))
#define GPIOMUX_EINT_DUR0		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x400))
#define GPIOMUX_EINT_DUR1		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x404))
#define GPIOMUX_EINT_DUR2		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x408))
#define GPIOMUX_EINT_DUR3		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x40C))
//#define GPIOMUX_EINT_DUR4		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x410))
//#define GPIOMUX_EINT_DUR5		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x414))
//#define GPIOMUX_EINT_DUR6		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x418))
//#define GPIOMUX_EINT_DUR7		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x41C))
//#define GPIOMUX_EINT_DUR8		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x420))
//#define GPIOMUX_EINT_DUR9		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x424))
//#define GPIOMUX_EINT_DUR10		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x428))
//#define GPIOMUX_EINT_DUR11		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x42C))
//#define GPIOMUX_EINT_DUR12		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x430))
//#define GPIOMUX_EINT_DUR13		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x434))
//#define GPIOMUX_EINT_DUR14		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x438))
//#define GPIOMUX_EINT_DUR15		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x43C))
#define GPIOMUX_EINT_DIRQ0		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x800))
#define GPIOMUX_EINT_DIRQ1		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x804))
#define GPIOMUX_EINT_DIRQ2		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x808))
#define GPIOMUX_EINT_DIRQ3		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x80C))
#if 0 //!defined(TK6291) && !defined(MT6755)
/* under construction !*/
#endif

/* GPIO_MUX part Set and Clear Registers*/
/* ================================================================= */
#define GPIOMUX_EINT_DB_EN_SET		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x100 + 0x4))
#define GPIOMUX_EINT_POL_SET		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x180 + 0x4))
#define GPIOMUX_EINT_TYPE_SET		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + 0x200 + 0x4))
#define GPIOMUX_EINT_IRQEN_SET		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x280 + 0x4))


#define GPIOMUX_EINT_DB_EN_CLR		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x100 + 0x8))
#define GPIOMUX_EINT_POL_CLR		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x180 + 0x8))
#define GPIOMUX_EINT_TYPE_CLR		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x200 + 0x8))
#define GPIOMUX_EINT_IRQEN_CLR		((volatile unsigned int*)(GPIOMUX_BASE_ADDR + EINT_ADDR_OFFSET +0x280 + 0x8))

#define EINT_L2_STA()				  REG32(GPIOMUX_EINT_IRQSTS)
#define EINT_L2_ACK(irq)			REG32_WRITE(GPIOMUX_EINT_IRQSTS,(1<<irq))
#endif
