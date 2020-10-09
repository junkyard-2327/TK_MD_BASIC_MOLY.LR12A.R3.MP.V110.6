#ifndef __MDGDMA_REG_H__
#define __MDGDMA_REG_H__

#include <reg_base.h>
#include <irqid.h>

/* Register Address Definition */
#if defined(DRV_MDGDMA)
    #define MDGDMA_BASE             (BASE_ADDR_MDGDMA)
    #define GDMA_FDMA0_INTR_ID       17
    #define GDMA_FDMA1_INTR_ID       18
#elif defined(DRV_LOGDMA)
    #define MDGDMA_BASE             (BASE_ADDR_MDLOGDMA)
    #define GDMA_INTR_ID            255  //(IRQ_LOGGDMA0_LV_CODE) for build pass
#else
    #error "Unsupported DMA Module"
#endif

/* Register Definition */
#define GDMA_CODA_VERSION           (MDGDMA_BASE)

#define GDMA_FDCSR(n)               (MDGDMA_BASE + 0x10U + (n * 4))
    #define FDMA_STAT               (0x1 << 0)
    #define FDMA_CS_EN              (0x1 << 8)
    #define FDMA_MODE_LINKLIST      (0x0 << 9)
    #define FDMA_MODE_BASIC         (0x1 << 9)
    #define FDMA_MODE_DESCRIPTOR    (0x2 << 9)
    #define FDMA_CS16B_EN           (0x1 << 31)

#define GDMA_CH_REG_OFFSET          0x20
#define GDMA_FDCR(n)                (MDGDMA_BASE + 0x20U + (n*GDMA_CH_REG_OFFSET))
    #define FDMA_START              (0x1 << 0)
    #define FDMA_RESUME             (0x1 << 1)
    #define FDMA_STOP               (0x1 << 2)

    #define XFER_SIZE_OFFSET        (16)

    #define BST_SIZE_OFFSET         (12)
    #define BST_SIZE_256            (8 << BST_SIZE_OFFSET)
    #define BST_SIZE_128            (7 << BST_SIZE_OFFSET)
    #define BST_SIZE_64             (6 << BST_SIZE_OFFSET)
    #define BST_SIZE_32             (5 << BST_SIZE_OFFSET)
    #define BST_SIZE_16             (4 << BST_SIZE_OFFSET)
    #define BST_SIZE_8              (3 << BST_SIZE_OFFSET)
    #define BST_SIZE(n)             ((n) << BST_SIZE_OFFSET)

    #define DA_FIXED                (1 << 9)
    #define SA_FIXED                (1 << 8)

    #define DST_BUS_WIDTH_OFFSET    (6)
    #define DST_BUS_WIDTH_8         (3 << DST_BUS_WIDTH_OFFSET)
    #define DST_BUS_WIDTH_4         (2 << DST_BUS_WIDTH_OFFSET)
    #define DST_BUS_WIDTH_2         (1 << DST_BUS_WIDTH_OFFSET)
    #define DST_BUS_WIDTH_1         (0 << DST_BUS_WIDTH_OFFSET)
    #define DST_BUS_WIDTH(n)        ((n) << DST_BUS_WIDTH_OFFSET)

    #define SRC_BUS_WIDTH_OFFSET    (4)
    #define DST_BUS_WIDTH_8         (3 << DST_BUS_WIDTH_OFFSET)
    #define SRC_BUS_WIDTH_4         (2 << SRC_BUS_WIDTH_OFFSET)
    #define SRC_BUS_WIDTH_2         (1 << SRC_BUS_WIDTH_OFFSET)
    #define SRC_BUS_WIDTH_1         (0 << SRC_BUS_WIDTH_OFFSET)
    #define SRC_BUS_WIDTH(n)        ((n) << SRC_BUS_WIDTH_OFFSET)

#define GDMA_FDSAR(n)               (MDGDMA_BASE + 0x24U + (n*GDMA_CH_REG_OFFSET))
#define GDMA_FDDAR(n)               (MDGDMA_BASE + 0x28U + (n*GDMA_CH_REG_OFFSET))
#define GDMA_FDSCPR(n)              (MDGDMA_BASE + 0x30U + (n*GDMA_CH_REG_OFFSET))
#define GDMA_FDDCPR(n)              (MDGDMA_BASE + 0x34U + (n*GDMA_CH_REG_OFFSET))
#define GDMA_FSIZE(n)               (MDGDMA_BASE + 0x38U + (n*GDMA_CH_REG_OFFSET))

#define GDMA_UCR                    (MDGDMA_BASE + 0x530U)
    #define PRE_ULTRA               (1 << 0)
    #define ULTRA                   (1 << 1)

#define GDMA_GISAR0                 (MDGDMA_BASE + 0x600U)
#define GDMA_GISAR1                 (MDGDMA_BASE + 0x604U)
#define GDMA_GIMRK0                 (MDGDMA_BASE + 0x620U)
#define GDMA_GIMRK1                 (MDGDMA_BASE + 0x624U)
#define GDMA_GIMRKS0                (MDGDMA_BASE + 0x640U)
#define GDMA_GIMRKC0                (MDGDMA_BASE + 0x644U)
#define GDMA_GIMRKS1                (MDGDMA_BASE + 0x648U)
#define GDMA_GIMRKC1                (MDGDMA_BASE + 0x64CU)
    #define FDMA_SRC_DONE           (0x1 << 0)
    #define FDMA_DST_DONE           (0x1 << 4)
    #define FDMA_QE_SRC_INT         (0x1 << 8)
    #define FDMA_QE_DST_INT         (0x1 << 12)
    #define FDMA_LEN_ERR_INT        (0x1 << 16)
    #define FDMA_ALO_LEN_ERR_INT    (0x1 << 20)
    #define FDMA_BD_CSERR_INT       (0x1 << 24)
    #define FDMA_GPD_CSERR_INT      (0x1 << 28)
    #define FDMA_RGN_ACSERR_INT     (0x1 << 31)
    #define FDMA_INT_BITS_MASK      (0x91111111)

#define GDMA_IRQCON                 (MDGDMA_BASE + 0x660U)
    #define FDMA1_IRQ_TO_IA         (0x0 << 0)
    #define FDMA1_IRQ_TO_USIP0      (0x1 << 0)
    
#define GDMA_LMCR                   (MDGDMA_BASE + 0x744U)
#define GDMA_RSAR(chn,region)       (MDGDMA_BASE + 0x748U + (chn*GDMA_CH_REG_OFFSET) + (region*0x8))

#endif // __MDGDMA_REG_H__
