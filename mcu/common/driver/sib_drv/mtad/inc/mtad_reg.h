#ifndef __MTAD_REG_H__
#define __MTAD_REG_H__

#include <reg_base.h>
#include <irqid.h>


#define DRV_WriteReg(addr,data)     ((*(volatile kal_uint16 *)(addr)) = (kal_uint16)(data))
#define DRV_Reg(addr)                (*(volatile kal_uint16 *)(addr))
#define DRV_WriteReg32(addr,data)   ((*(volatile kal_uint32 *)(addr)) = (kal_uint32)(data))

#define DRV_Reg32(addr)              (*(volatile kal_uint32 *)(addr))
//#define DRV_WriteReg8(addr,data)    ((*(volatile kal_uint8 *) (addr)) = (kal_uint8)(data))
//efine DRV_Reg8(addr)               (*(volatile kal_uint8 *) (addr))



/* Register Address Definition */
#define MDGDMA_BASE          (BASE_ADDR_MDGDMA)
#define APGDMA_BASE          (BASE_ADDR_APGDMA)


/* MTAD registers */

#define GDMA_ATIDCR          (MDGDMA_BASE + 0x0700)
#define GDMA_TDCSR           (MDGDMA_BASE + 0x0704)
#define GDMA_TDCR            (MDGDMA_BASE + 0x0708)
#define GDMA_TDSAR           (MDGDMA_BASE + 0x070C)


#define GDMA_GISAR7_MTAD     (MDGDMA_BASE + 0x061C)                   //GDMA_GISAR7
#define GDMA_GIMRK7_MTAD     (MDGDMA_BASE + 0x063C)                   //GDMA_GIMRK7

#define GDMA_MTAD_CRC32      (MDGDMA_BASE + 0x0714)



#define MTAD_START_BIT              (0x1) //(1<<0x0)
#define MTAD_RESUME_BIT             (1<<0x1)
#define MTAD_STOP_BIT               (1<<0x2)

#define MTAD_STAT                   (0x1)

#define MTAD_ATIDCR(id) \
    DRV_WriteReg32(GDMA_ATIDCR, id)



#define MTAD_CONFIG(_bst, _fix, _bus_width) \
    DRV_WriteReg32(GDMA_TDCR, (DRV_Reg32(GDMA_TDCR) & (~0x0000e13f))  | (_bst << 13) | (_fix << 8) | (_bus_width << 4))


#define MTAD_XFER_SIZE_CONFIG(_xfer) \
    DRV_WriteReg32(GDMA_TDCR, (DRV_Reg32(GDMA_TDCR) & (~0xffff0000)) | (_xfer << 16))

#define MTAD_PROG_ADDR_CONFIG(_addr) \
    DRV_WriteReg32(GDMA_TDSAR, _addr)



#define MTAD_SET_MODE(_md) \
    DRV_WriteReg32(GDMA_TDCSR, (DRV_Reg32(GDMA_TDCSR) & (~(0x3<<9))) | (_md << 9))

#define MTAD_SET_CS_EN() \
    DRV_WriteReg32(GDMA_TDCSR, DRV_Reg32(GDMA_TDCSR)| (0x1 << 8))

#define MTAD_CLR_CS_EN() \
    DRV_WriteReg32(GDMA_TDCSR, DRV_Reg32(GDMA_TDCSR)& (~(0x1 << 8)))

#define MTAD_SET_CS16_EN() \
    DRV_WriteReg32(GDMA_TDCSR, DRV_Reg32(GDMA_TDCSR)| (0x1 << 31))

#define MTAD_CLR_CS16_EN() \
    DRV_WriteReg32(GDMA_TDCSR, DRV_Reg32(GDMA_TDCSR)& (~(0x1 << 31)))

#define MTAD_START() \
    DRV_WriteReg32(GDMA_TDCR, DRV_Reg32(GDMA_TDCR) | MTAD_START_BIT)

#define MTAD_STOP() \
    DRV_WriteReg32(GDMA_TDCR, DRV_Reg32(GDMA_TDCR) | MTAD_STOP_BIT)

#define MTAD_RESUME() \
    DRV_WriteReg32(GDMA_TDCR, DRV_Reg32(GDMA_TDCR) | MTAD_RESUME_BIT)

#define MTAD_STOP_BIT_ASSERT() \
    (DRV_Reg32(GDMA_TDCR) & MTAD_STOP_BIT)

#define MTAD_IS_ACTIVE() \
    (DRV_Reg32(GDMA_TDCSR) & MTAD_STAT)

// write 1 to clear
#define MTAD_INT_CLEAR_ALL() \
    (DRV_WriteReg32(GDMA_GISAR7_MTAD, 0x11010101))


#define MTAD_INT_MASK_ALL() \
    (DRV_WriteReg32(GDMA_GIMRK7_MTAD, 0x11010101))

#define MTAD_INT_UNMASK_ALL() \
    (DRV_WriteReg32(GDMA_GIMRK7_MTAD, 0x00000000))


#define MTAD_INT_CLR_DONE() \
    (DRV_WriteReg32(GDMA_GISAR7_MTAD, BIT0))

#define MTAD_INT_CLR_QE() \
    (DRV_WriteReg32(GDMA_GISAR7_MTAD, BIT8))


#define MTAD_INT_CLR_LEN_ERR() \
        (DRV_WriteReg32(GDMA_GISAR7_MTAD, BIT16))

#define MTAD_INT_CLR_BD_CHKSUM_ERR() \
        (DRV_WriteReg32(GDMA_GISAR7_MTAD, BIT24))

#define MTAD_INT_CLR_GPD_CHKSUM_ERR() \
        (DRV_WriteReg32(GDMA_GISAR7_MTAD, BIT28))


#define MTAD_DONE_INT_UNMASK() \
    (DRV_WriteReg32(GDMA_GIMRK7_MTAD, (DRV_Reg32(GDMA_GIMRK7_MTAD)& (~BIT0))))


#define MTAD_QE_INTR_UNMASK() \
	(DRV_WriteReg32(GDMA_GIMRK7_MTAD, (DRV_Reg32(GDMA_GIMRK7_MTAD) & (~BIT8))))


#define MTAD_LEN_ERR_INTR_UNMASK() \
	(DRV_WriteReg32(GDMA_GIMRK7_MTAD, (DRV_Reg32(GDMA_GIMRK7_MTAD) & (~BIT16))))


#define MTAD_BD_CHKSUM_ERR_INTR_UNMASK() \
	(DRV_WriteReg32(GDMA_GIMRK7_MTAD, (DRV_Reg32(GDMA_GIMRK7_MTAD) & (~BIT24))))

#define MTAD_GPD_CHKSUM_ERR_INTR_UNMASK() \
	(DRV_WriteReg32(GDMA_GIMRK7_MTAD, (DRV_Reg32(GDMA_GIMRK7_MTAD) & (~BIT28))))

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#define MTAD_DONE_INT   (1<<0)
#define MTAD_QE_INT     (1<<8)
#define MTAD_LEN_ERR    (1<<16)
#define MTAD_BD_CSERR   (1<<24)
#define MTAD_GPD_CSERR  (1<<28)


#define IS_MTAD_DONE_INTR(_val) \
	( _val &  MTAD_DONE_INT)
#define IS_MTAD_QE_INTR(_val) \
	( _val &  MTAD_QE_INT)
#define IS_MTAD_LENERR_INTR(_val) \
	( _val &  MTAD_LEN_ERR)
#define IS_MTAD_BD_CSERR_INTR(_val) \
	( _val &  MTAD_BD_CSERR)
#define IS_MTAD_GPD_CSERR_INTR(_val) \
	( _val &  MTAD_GPD_CSERR)



#endif
