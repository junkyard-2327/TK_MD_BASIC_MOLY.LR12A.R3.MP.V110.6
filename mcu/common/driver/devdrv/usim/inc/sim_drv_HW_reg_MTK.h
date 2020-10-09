#ifndef __SIM_DRV_HW_REG_MTK_H__
#define     __SIM_DRV_HW_REG_MTK_H__

//#if ( (!defined(MT6208)) && (!defined(FPGA)) && (!defined(MT6205)) && (!defined(MT6205B)) && (!defined(MT6218)) )
#if !defined(DRV_SIM_REG_6208_SERIES) && !defined(DRV_SIM_REG_6205B_SERIES)
/*MT6218B || MT6219 || MT6217 || MT6226 || MT6227 || MT6228 || MT6229*/
#ifdef SIM_NAMING_FROM_0_ADDRESS

    #ifdef SIM_base
        #undef SIM_base
    #endif
    #define     SIM_base SIM0_base

    #ifdef SIM2_base
        #undef SIM2_base
    #endif
    #define     SIM2_base SIM1_base

#endif //SIM_NAMING_FROM_0_ADDRESS


#define   ACK_NULL_CHAR		0x60

#define     SIM_CTRL            (SIM_base+0x0)
#define     SIM_CONF            (SIM_base+0x4)
#define     SIM_BRR             (SIM_base+0x8)
#define     SIM_IRQEN           (SIM_base+0x10)
#define     SIM_STS	        (SIM_base+0x14)

#define     SIM_RETRY	    (SIM_base+0x20)
#define     SIM_TIDE	       (SIM_base+0x24)

#define     SIM_DATA	       (SIM_base+0x30)
#define     SIM_COUNT	    (SIM_base+0x34)

#define     SIM_ATIME	    (SIM_base+0x40)
#define     SIM_DTIME	    (SIM_base+0x44)
#define     SIM_TOUT	       (SIM_base+0x48)

#define     SIM_INS          (SIM_base+0x60)
#define     SIM_IMP3          (SIM_base+0x64)
#define     SIM_SW1          (SIM_base+0x68)
#define     SIM_SW2          (SIM_base+0x6c)
#define     SIM_REG_STATUS	    (SIM_base+0x74)


/*
	This is the most important define to combine single SIM and multiple SIM macro.
	In DRV_SIM_ALL_SOLUTION_BUILT, single SIM driver's macro will use this variable, too.
	DRV_SIM_BUILD_SINGLE_SIM is only defined in simd.c and usim_drv.c before including this header file.
*/
extern kal_uint32 simBaseAddr, simBaseAddrSpace;
#ifdef DRV_SIM_BUILD_SINGLE_SIM
    #define     SIM0_BASE_ADDR_MTK	(simBaseAddr )
#else
    /*in DRV_SIM_ALL_SOLUTION_BUILT, we use two variables, starting address and adress space, to calculate the actual address*/
    //#define     SIM0_BASE_ADDR_MTK	(simBaseAddr + (simBaseAddrSpace * simInterface))
    #define     SIM0_BASE_ADDR_MTK	(hw_cb->mtk_baseAddr)
#endif

// MTK04122: updated for MT6290
#define     SIM_VERSION_MTK	       	0x0
#define     SIM_CTRL_MTK            0x10
#define     SIM_CONF_MTK	       	0x14
#define     SIM_CONFSTA_MTK         0x18
#define     SIM_BRR_MTK	            0x1C
#define     SIM_IRQEN_MTK	    	0x20
#define     SIM_STS_MTK	            0x24

#define     SIM_RETRY_MTK	    	0x30
#define     SIM_TIDE_MTK	       	0x34

#define     SIM_DATA_MTK	       	0x40
#define     SIM_COUNT_MTK	    	0x44

#if !defined(DRV_SIM_6293_SERIES) && !defined(DRV_SIM_6295_SERIES)
    #define     SIM_ATIME_MTK	    	0x50
#endif
#define     SIM_DTIME_MTK	    	0x54
#define     SIM_TOUT_MTK	       	0x58

#define     SIM_GTIME_MTK           0x5C
#define     SIM_ETIME_MTK           0x60
#define     SIM_EXT_TIME_MTK        0x64
#define     SIM_CGTIME_MTK          0x68


/********************/
//MTK04122: be removed in mt6290
#define     SIM_INS_MTK          	0x60
#define     SIM_IMP3_MTK          	0x64
/********************/

#define     SIM_COMDCTRL_MTK        0x70
#define     SIM_COMDLEN_MTK         0x74
#define     SIM_LEFTLEN_MTK         0x78

#define     SIM_SW1_MTK          	0x7C
#define     SIM_SW2_MTK          	0x80

#define     SIM_ATRSTA_MTK          0x90
#define     SIM_STATUS_MTK	        0x94
#define     SIM_DBG_MTK		        0x98
#define     SIM_DBGDATA_MTK		    0x9C

/*************** Gen93 ***********************/
#if defined(DRV_SIM_6293_SERIES) || defined(DRV_SIM_6295_SERIES)
    #define     SIM_ATIME1_MTK		    0xB0
    #define     SIM_ATIME2_MTK		    0xB4
    #define     SIM_ATIME3_MTK		    0xB8
    #define     SIM_ATIME4_MTK		    0xBC
    #define     SIM_ATIME_MTK		    SIM_ATIME1_MTK

    #define     SIM_SIMOE_MODE_MTK		0xC0
    #define     SIM_MANUAL_CTRL_MTK		0xA4
#endif
/********************************************/

//SIM_CTRL
#define     SIM_CTRL_SIMON	       0x0001
#define     SIM_CTRL_HALT	       0x0002   /* Enable Clk stop mode or disable */
#define     SIM_CTRL_WRST	       0x0004	/* Trigger a warm reset */
#define     SIM_CTRL_RSTLV         0x0008
#define     SIM_CTRL_RSTCTRL       0x0010
#define     SIM_CTRL_IFCLR         0x0020

//SIM_CONF
#define     SIM_CONF_RXHSK	       0x0001
#define     SIM_CONF_TXHSK	       0x0002
#define     SIM_CONF_CLKPO	       0x0004

/********************/
//MTK04122: be removed in mt6290
#define     SIM_CONF_SINV	       0x0008
#define     SIM_CONF_SDIR	       0x0010
#define     SIM_CONF_ODDPARITY	   0x0020

#define     SIM_CONF_Direct	       0x0000
#define     SIM_CONF_InDirect	   0x0038
/********************/
#define     SIM_CONF_CONV          0x0008

#define     SIM_CONF_SIMSEL	       0x0010
#define     SIM_CONF_TOUTEN	       0x0020
#define     SIM_CONF_T1EN	       0x0040
#define     SIM_CONF_T0EN	       0x0080
#define     SIM_CONF_HFEN	       0x0100
#define     SIM_CONF_RXRDIS        0x0200
#define     SIM_CONF_TXRDIS        0x0400
#define     SIM_CONF_T1TX2RXEN     0x0800

//SIM_CONFSTA
#define     SIM_CONFSTA_IFCLR_ON   0x0001
#define     SIM_CONFSTA_TXRDIS_S   0x0400

//SIM_BRR
#if defined(DRV_SIM_6295_SERIES)
#define     SIM_BRR_CLKMSK	          0x3803
#else
#define     SIM_BRR_CLKMSK	          0x0003
#endif
#if defined(DRV_SIM_6292_SERIES) || defined(DRV_SIM_6293_SERIES) || defined(DRV_SIM_6295_SERIES)
    #define     SIM_BRR_CLK_Div6              0x0000
    #define     SIM_BRR_CLK_Div8              0x0001
    #define     SIM_BRR_CLK_Div16             0x0002
    #define     SIM_BRR_CLK_Div32             0x0003
#if defined(DRV_SIM_6295_SERIES)
    #define     SIM_BRR_CLK_Div7              0x0800
#endif
#else
    /********************/
    //MTK04122: be removed in mt6290
    #define     SIM_BRR_CLK_Div2	      0x0000
    /********************/

    #define     SIM_BRR_CLK_Div4	      0x0001
    #define     SIM_BRR_CLK_Div8	      0x0002
    #define     SIM_BRR_CLK_Div12	      0x0003
#endif

#define     SIM_BRR_ETUMSK	          0x07FC

//MTK04122:need to clarify
#define     SIM_BRR_BAUDMSK	          0x000C

//#if ( (defined(MT6218B)) || (defined(MT6219)))
#if defined(DRV_SIM_REG_BAUD_6218B_SERIES)
    #define     SIM_BRR_BAUD_Div372	    (0x16<<2)        //F=372, D=1
    #define     SIM_BRR_BAUD_Div64	    (0x03<<2)        //F=512, D=8
    #define     SIM_BRR_BAUD_Div32	    (0x01<<2)        //F=512, D=16
#else /*!Mt6218B,MT6219, MT6290*/
    #define     SIM_BRR_BAUD_Div372	    (372<<2)        //F=372, D=1
    #define     SIM_BRR_BAUD_Div64	    (64<<2)            //F=512, D=8
    #define     SIM_BRR_BAUD_Div32	    (32<<2)            //F=512, D=16
    #define     SIM_BRR_BAUD_Div16	    (16<<2)            //F=512,D=32
    #define     SIM_BRR_BAUD_Div8	    (8<<2)            //F=512,D=64
#endif   /*MT6218B,MT6219*/

//SIM_IRQEN
#define     SIM_IRQEN_TX            0x0001
#define     SIM_IRQEN_RX            0x0002
#define     SIM_IRQEN_OV            0x0004
#define     SIM_IRQEN_TOUT          0x0008
#define     SIM_IRQEN_TXERR         0x0010
#define     SIM_IRQEN_NATR          0x0020
#define     SIM_IRQEN_SIMOFF        0x0040
#define     SIM_IRQEN_T0END         0x0080
#define     SIM_IRQEN_RXERR           0x0100
#define     SIM_IRQEN_T1END           0x0200
#define     SIM_IRQEN_EDCERR          0x0400
#define     SIM_IRQEN_UDRUN           0x0800

/*TX, RX ,OV, TOUT, TXER, NATR, SIMOFF, RXER*/
#define     SIM_IRQEN_ALL	          0x01bf
#define     SIM_IRQEN_ALLOFF	      0x0000

/* SIM_IRQEN_RXErr, SIM_IRQEN_TXErr, SIM_IRQEN_NATR, SIM_IRQEN_TOUT, SIM_IRQEN_OV, SIM_IRQEN_RX*/
#define     SIM_IRQEN_Normal	      0x013e

/*SIM_IRQEN_RXERR, SIM_IRQEN_T0END,SIM_IRQEN_TXErr, SIM_IRQEN_TOUT, SIM_IRQEN_OV, SIM_IRQEN_RX*/
#define     SIM_IRQEN_CMDNormal	   0x019e
/*#define     SIM_IRQEN_CMDNormal	   0x019c*/

/*SIM_IRQEN_RXERR, SIM_IRQEN_T0END,SIM_IRQEN_TXErr, SIM_IRQEN_TOUT, SIM_IRQEN_OV*/
#define     SIM_IRQEN_CMDDMANormal	   0x019c

#define     USIM_IRQEN_ATR	            (SIM_IRQEN_RX|SIM_IRQEN_NATR)
#define     USIM_IRQEN_NORMAL	        (SIM_STS_RX|SIM_STS_OV|SIM_STS_TOUT|SIM_STS_TXERR|SIM_STS_RXERR)
#define     USIM_IRQEN_CMD_T1	        (SIM_STS_EDCERR|SIM_STS_T1END|SIM_STS_RXERR| \
        SIM_STS_OV|SIM_STS_TOUT)
#define     USIM_IRQEN_CMD_T1_RX	    (SIM_STS_EDCERR|SIM_STS_T1END|SIM_STS_OV|SIM_STS_TOUT|SIM_STS_RX)
#define     USIM_IRQEN_CMD_T1_TX	    (SIM_STS_T1END)

//SIM_STS
#define     SIM_STS_TX	             0x0001
#define     SIM_STS_RX	             0x0002
#define     SIM_STS_OV	             0x0004
#define     SIM_STS_TOUT	         0x0008
#define     SIM_STS_TXERR	         0x0010
#define     SIM_STS_NATR	         0x0020
#define     SIM_STS_SIMOFF	         0x0040
#define     SIM_STS_T0END            0x0080
#define     SIM_STS_RXERR            0x0100
#define     SIM_STS_T1END	         0x0200
#define     SIM_STS_EDCERR	         0x0400
#define     SIM_STS_UDRUN            0x0800

//SIM_TOUT
#define     SIM_TOUT_MSK	          0x3fff //??

//SIM_RETRY
#define     SIM_RETRY_RXMASK	      0x0007
#define     SIM_RETRY_TXMASK	      0x0700

//SIM_TIDE
#define     SIM_TIDE_RXMASK	       0x000f
#define     SIM_TIDE_TXMASK	       0x0f00

//SIM_COUNT
#define     SIM_COUNT_MASK	          0x001f

//SIM_COMDCTRL: shall be re-named
#define     SIM_INS_MASK                0x00ff
#define     SIM_INS_INSD                0x0100
#define     SIM_INS_START                0x8000

//SIM_COMDLEN
#define     SIM_IMP3_MASK           0x00ff

//SIM_ATRSTA
#define     SIM_ATRSTA_OFF		0x0001
#define     SIM_ATRSTA_IR		0x0080
#define     SIM_ATRSTA_AL		0x0100

/*MTK04122: to be update for mt6290 (TBC)*/
// SIM_STATUS
#define     SIM_STATUS_EDC	        	0x40
#define     SIM_STATUS_ACK	        	0x20
#define     SIM_STATUS_NACK	            0x10
#define     SIM_STATUS_IDLE	            0x01
#define     SIM_STATUS_INS	        	0x02
#define     SIM_STATUS_SW1	        	0x04
#define     SIM_STATUS_SW2	        	0x08

#define     SIM_TX_DELAY_LEN	    	0x4
#define     SIM_TX_DELAY_LOOP	    	4000

#define     SIM_SIMOE_ENABLE    		0x1
/*
  *  HDMA Register Definitions
  */
#define     BASE_HDMA BASE_ADDR_MDGDMA
#define     REG_HDMA_HDCSR0        (BASE_HDMA + 0x0100)
#define     HDMA_MODE_0             (1 << 9)        //channel 0
#define     HDMA_MODE_1             (1 << 25)       //channel 1
#define     REG_HDMA_HDSR          (BASE_HDMA + 0x0120) // shared
#define     HDMA_STAT0_0            (1 << 0)   // buffer 0, channel 0
#define     HDMA_STAT0_1            (1 << 1)   // buffer 0, channel 1
#define     HDMA_STAT1_0            (1 << 16)  // buffer 1, channel 0
#define     HDMA_STAT1_1            (1 << 17)  // buffer 1, channel 1
#define     REG_HDMA_HDCPR         (BASE_HDMA + 0x0124) // shared
#define     HDMA_HCURR_PTR_0        (1 << 0)   // channel 0
#define     HDMA_HCURR_PTR_1        (1 << 1)   // channel 1
#define     REG_HDMA_HDCTRR0       (BASE_HDMA + 0x0140) // channel 0
#define     REG_HDMA_HDCTRR1       (BASE_HDMA + 0x0160) // channel 1
#define     HDCTRR_STOP             (1 << 2)
#define     HDCTRR_MEM_BUS_WIDTH(n) ((n) << 4)
#define     HDCTRR_DEV_BUS_WIDTH(n) ((n) << 6)
#define     HDCTRR_BUS_WIDTH_8          0
#define     HDCTRR_BUS_WIDTH_16         1
#define     HDCTRR_BUS_WIDTH_32         2
#define     HDCTRR_BST_SIZE(n)      ((n) << 13)
#define     HDCTRR_BST_SIZE_4           2
#define     HDCTRR_BST_SIZE_8           3
#define     HDCTRR_BST_SIZE_16          4
#define     HDCTRR_BST_SIZE_32          5 // reserved
#define     HDCTRR_BST_SIZE_64          6 // reserved
#define     HDCTRR_BST_SIZE_128         7 // reserved
#define     HDCTRR_RX_SEL0(n)       ((n) << 30)
#define     HDCTRR_RX_SEL1(n)       ((n) << 31)
#define     REG_HDMA_HDC0R0        (BASE_HDMA + 0x0144) // channel 0
#define     REG_HDMA_HDC0R1        (BASE_HDMA + 0x0164) // channel 1
#define     HDCR_XFER_SIZE0(n)      ((n) << 16)
#define     HDCR_START0             (1 << 0)
#define     REG_HDMA_HDC1R0        (BASE_HDMA + 0x0148) // channel 0
#define     REG_HDMA_HDC1R1        (BASE_HDMA + 0x0168) // channel 1
#define     HDCR_XFER_SIZE1(n)      ((n) << 16)
#define     HDCR_START1             (1 << 0)
#define     REG_HDMA_HPRGA0R0      (BASE_HDMA + 0x014C) // channel 0
#define     REG_HDMA_HPRGA0R1      (BASE_HDMA + 0x016C) // channel 1
#define     REG_HDMA_HPRGA1R0      (BASE_HDMA + 0x0150) // channel 0
#define     REG_HDMA_HPRGA1R1      (BASE_HDMA + 0x0170) // channel 1
#define     REG_HDMA_HCCR0         (BASE_HDMA + 0x0154) // channel 0
#define     REG_HDMA_HCCR1         (BASE_HDMA + 0x0174) // channel 1
#define     HDMA_HCURR_CNT0         0x0000FFFF
#define     HDMA_HCURR_CNT1         0xFFFF0000
#define     REG_HDMA_HDCPR0        (BASE_HDMA + 0x0158) // channel 0
#define     REG_HDMA_HDCPR1        (BASE_HDMA + 0x0178) // channel 1

#if defined(SIM_DRV_USE_MDGPIO_I2C)
    #define MD_AP_DUMMY_I2C     (BASE_MADDR_MDPERIMISC+0x100) //0xA0060000
    #define AP_MD_DUMMY_I2C     (BASE_MADDR_MDPERIMISC+0x300)
    #define MD_AP_SCL       (1<<15)
    #define MD_AP_SDA       (1<<14)
    #define MD_AP_SDA_OE    (1<<13)
#endif

#endif   /*MT6218B*/

#if defined(MT6595)
#define     REG_SIM1_PU_PD_SEL	(GPIO_base + 0xE40)
#define     REG_SIM2_PU_PD_SEL	(GPIO_base + 0xE50)
#define     SIMx_PU_PD_HZ	0x0
#define     SIMx_PU_PD_10K	0x1
#define     SIMx_PU_PD_50K	0x2
#define     SIMx_PU_PD_8_3K	0x3
#define     SIMx_PD_SEL	0x4
#define     SIMx_INS	0x888
#define     SIMx_CLK	0x0
#define     SIMx_DAT	0x4
#define     SIMx_RST	0x8

#define     ENABLE_ABNORMAL_SIM(_n) \
    if(_n){DRV_WriteReg32(REG_SIM2_PU_PD_SEL, (DRV_Reg32(REG_SIM2_PU_PD_SEL) | SIMx_INS));} \
    else{DRV_WriteReg32(REG_SIM1_PU_PD_SEL, (DRV_Reg32(REG_SIM1_PU_PD_SEL) | SIMx_INS));}

#define     DISABLE_ABNORMAL_SIM(_n) \
    if(_n){DRV_WriteReg32(REG_SIM2_PU_PD_SEL, (DRV_Reg32(REG_SIM2_PU_PD_SEL) & ~(SIMx_INS)));} \
    else{DRV_WriteReg32(REG_SIM1_PU_PD_SEL, (DRV_Reg32(REG_SIM1_PU_PD_SEL) & ~(SIMx_INS)));}
#elif defined(MT6752) && defined(__MD1__)
#define     IOCFG_T_base		0xA0002C00
#define     IOCFG_R_base		0xA0002800

#define     REG_SR_CFG0	    (IOCFG_T_base + 0x010)
#define     SR_CFG_SIM1_MASK	0x6
#define     REG_PULLEN_CFG0	    (IOCFG_T_base + 0x050)
#define     PULLEN_CFG_SIM1_SCLK_R0	0x01000
#define     PULLEN_CFG_SIM1_SRST_R0	0x02000
#define     PULLEN_CFG_SIM1_SIO_R0	0x04000
#define     PULLEN_CFG_SIM1_SCLK_R1	0x08000
#define     PULLEN_CFG_SIM1_SRST_R1	0x10000
#define     PULLEN_CFG_SIM1_SIO_R1	0x20000
#define     PULLEN_CFG_SIM1_MASK	0x3F000
#define     REG_T_INS_CFG0	    (IOCFG_T_base + 0x080)
#define     INS_CFG_SIMx		0x7

#define     SET_SIM1_SR(_n) \
    DRV_WriteReg32(REG_SR_CFG0, ((DRV_Reg32(REG_SR_CFG0) & (~SR_CFG_SIM1_MASK)) | (_n << 1)));

#define     REG_SR_CFG1	    (IOCFG_R_base + 0x030)
#define     SR_CFG_SIM2_MASK	0x300
#define     REG_PULLEN_CFG2	    (IOCFG_R_base + 0x0A0)
#define     PULLEN_CFG_SIM2_SCLK_R0	0x010
#define     PULLEN_CFG_SIM2_SRST_R0	0x020
#define     PULLEN_CFG_SIM2_SIO_R0	0x040
#define     PULLEN_CFG_SIM2_SCLK_R1	0x080
#define     PULLEN_CFG_SIM2_SRST_R1	0x100
#define     PULLEN_CFG_SIM2_SIO_R1	0x200
#define     PULLEN_CFG_SIM2_MASK	0x3F0
#define     REG_R_INS_CFG0	    (IOCFG_R_base + 0x100)

#define     SET_SIM2_SR(_n) \
    DRV_WriteReg32(REG_SR_CFG1, ((DRV_Reg32(REG_SR_CFG1) & (~SR_CFG_SIM2_MASK)) | (_n << 8)));

#define     ENABLE_ABNORMAL_SIM(_n) \
    if(_n){DRV_WriteReg32(REG_R_INS_CFG0, (DRV_Reg32(REG_R_INS_CFG0) | INS_CFG_SIMx));} \
    else{DRV_WriteReg32(REG_T_INS_CFG0, (DRV_Reg32(REG_T_INS_CFG0) | INS_CFG_SIMx));}

#define     DISABLE_ABNORMAL_SIM(_n) \
    if(_n){DRV_WriteReg32(REG_R_INS_CFG0, (DRV_Reg32(REG_R_INS_CFG0) & ~(INS_CFG_SIMx)));} \
    else{DRV_WriteReg32(REG_T_INS_CFG0, (DRV_Reg32(REG_T_INS_CFG0) & ~(INS_CFG_SIMx)));}

#elif defined(MT6735) && defined(__MD1__)
#define     REG_GPIO_MODE17	    (GPIO_base + 0x400)
#define     GPIO_160_MODE_MD_SIM2		0x00000049
#define     GPIO_160_MODE_MD_SIM1		0x00000092
#define     GPIO_160_MODE_MD_SIMx_MASK	0x000001FF
#define     GPIO_163_MODE_MD_SIM1		0x00011200
#define     GPIO_163_MODE_MD_SIM2		0x00022400
#define     GPIO_163_MODE_MD_SIMx_MASK	0x00077E00
#define     REG_GPIO_PUPD1_G4	(GPIO_base + 0xC90)
#define     SIM1_INS	0x08880000
#define     SIM2_INS	0x00000888

#define     ENABLE_ABNORMAL_SIM(_n) \
    if(_n){DRV_WriteReg32(REG_GPIO_PUPD1_G4, (DRV_Reg32(REG_GPIO_PUPD1_G4) | SIM2_INS));} \
    else{DRV_WriteReg32(REG_GPIO_PUPD1_G4, (DRV_Reg32(REG_GPIO_PUPD1_G4) | SIM1_INS));}

#define     DISABLE_ABNORMAL_SIM(_n) \
    if(_n){DRV_WriteReg32(REG_GPIO_PUPD1_G4, (DRV_Reg32(REG_GPIO_PUPD1_G4) & ~(SIM2_INS)));} \
    else{DRV_WriteReg32(REG_GPIO_PUPD1_G4, (DRV_Reg32(REG_GPIO_PUPD1_G4) & ~(SIM1_INS)));}

#elif defined(TK6291)
#define     REG_IOMUX_CFG_USIM1	        (BASE_MADDR_IOMUX2 + 0x190)
#define     REG_IOMUX_CFG_USIM2	        (BASE_MADDR_IOMUX2 + 0x194)
#define     IOMUX_CFG_USIM_INS		0x00010000
#define     IOMUX_CFG_USIM_R1R0_MASK	0x0000C000
#define     IOMUX_CFG_USIM_R1		0x00008000
#define     IOMUX_CFG_USIM_R0		0x00004000
#define     IOMUX_CFG_USIM_SR_MASK		0x00003000
#define     IOMUX_CFG_USIM_SR_11		0x00003000
#define     IOMUX_CFG_USIM_SR_10		0x00002000

#define     ENABLE_ABNORMAL_SIM(_n) \
    if(_n){DRV_WriteReg32(REG_IOMUX_CFG_USIM2, (DRV_Reg32(REG_IOMUX_CFG_USIM2) | IOMUX_CFG_USIM_INS));} \
    else{DRV_WriteReg32(REG_IOMUX_CFG_USIM1, (DRV_Reg32(REG_IOMUX_CFG_USIM1) | IOMUX_CFG_USIM_INS));}

#define     DISABLE_ABNORMAL_SIM(_n) \
    if(_n){DRV_WriteReg32(REG_IOMUX_CFG_USIM2, (DRV_Reg32(REG_IOMUX_CFG_USIM2) & ~(IOMUX_CFG_USIM_INS)));} \
    else{DRV_WriteReg32(REG_IOMUX_CFG_USIM1, (DRV_Reg32(REG_IOMUX_CFG_USIM1) & ~(IOMUX_CFG_USIM_INS)));}

#define     REG_GPIO_MODE_0_FOR_SIM	    (BASE_MADDR_IOMUX2 + 0x114)
#define     REG_GPIO_MODE_1_FOR_SIM	    (BASE_MADDR_IOMUX2 + 0x114) // same
#define     REG_GPIO_IES_0_FOR_SIM	    (BASE_MADDR_IOMUX2 + 0x000) // N/A
#define     REG_GPIO_IES_1_FOR_SIM	    (BASE_MADDR_IOMUX2 + 0x000) // N/A
#define     REG_GPIO_SMT_0_FOR_SIM	    (BASE_MADDR_IOMUX2 + 0x000) // N/A
#define     REG_GPIO_SMT_1_FOR_SIM	    (BASE_MADDR_IOMUX2 + 0x000) // N/A
#define     REG_GPIO_TDSEL_0_FOR_SIM	(BASE_MADDR_IOMUX2 + 0x190) // [9:6]
#define     REG_GPIO_TDSEL_1_FOR_SIM	(BASE_MADDR_IOMUX2 + 0x194)
#define     REG_GPIO_RDSEL_0_FOR_SIM	(BASE_MADDR_IOMUX2 + 0x190) // [5:0]
#define     REG_GPIO_RDSEL_1_FOR_SIM	(BASE_MADDR_IOMUX2 + 0x194)
#define     REG_GPIO_DRV_0_FOR_SIM	    (BASE_MADDR_IOMUX2 + 0x190) // [11:10]
#define     REG_GPIO_DRV_1_FOR_SIM	    (BASE_MADDR_IOMUX2 + 0x194)
#define     REG_GPIO_PUPD_0_FOR_SIM	    (BASE_MADDR_IOMUX2 + 0x190) // [15:14}
#define     REG_GPIO_PUPD_1_FOR_SIM	    (BASE_MADDR_IOMUX2 + 0x194)

#elif defined(MT6755) // shall use this format afterall
#define     GPIO_base         	0xC0005000
#define     REG_GPIO_MODE_0_FOR_SIM	    (GPIO_base + 0x330)
#define     REG_GPIO_MODE_1_FOR_SIM	    (GPIO_base + 0x340)
#define     IOCFG_0_BASE	    	0xC0002000
#define     REG_GPIO_IES_0_FOR_SIM	    (IOCFG_0_BASE + 0x000)
#define     REG_GPIO_IES_1_FOR_SIM	    (IOCFG_0_BASE + 0x000) // same
#define     REG_GPIO_SMT_0_FOR_SIM	    (IOCFG_0_BASE + 0x010)
#define     REG_GPIO_SMT_1_FOR_SIM	    (IOCFG_0_BASE + 0x010) // same
#define     REG_GPIO_TDSEL_0_FOR_SIM	(IOCFG_0_BASE + 0x030)
#define     REG_GPIO_TDSEL_1_FOR_SIM	(IOCFG_0_BASE + 0x030) // same
#define     REG_GPIO_RDSEL_0_FOR_SIM	(IOCFG_0_BASE + 0x050)
#define     REG_GPIO_RDSEL_1_FOR_SIM	(IOCFG_0_BASE + 0x050) // same
#define     REG_GPIO_DRV_0_FOR_SIM	    (IOCFG_0_BASE + 0x0B0)
#define     REG_GPIO_DRV_1_FOR_SIM	    (IOCFG_0_BASE + 0x0B0) // same
#define     REG_GPIO_PUPD_0_FOR_SIM	    (IOCFG_0_BASE + 0x0D0)
#define     REG_GPIO_PUPD_1_FOR_SIM	    (IOCFG_0_BASE + 0x0D0) // same
#define     SIM1_INS	0x00888000
#define     SIM2_INS	0x00000888

#define     ENABLE_ABNORMAL_SIM(_n) \
    if(_n){DRV_WriteReg32(REG_GPIO_PUPD_0_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_0_FOR_SIM) | SIM2_INS));} \
    else{DRV_WriteReg32(REG_GPIO_PUPD_0_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_0_FOR_SIM) | SIM1_INS));}

#define     DISABLE_ABNORMAL_SIM(_n) \
    if(_n){DRV_WriteReg32(REG_GPIO_PUPD_0_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_0_FOR_SIM) & ~(SIM2_INS)));} \
    else{DRV_WriteReg32(REG_GPIO_PUPD_0_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_0_FOR_SIM) & ~(SIM1_INS)));}

#if defined(__SIM_ACTIVATION_V2__)
    #if defined(__SIM_SAME_GPIO_MODE__)
        #define     GPIO_SIM1_SIMIO 41
        #define     GPIO_SIM2_SIMIO 36
    #else
        #define     GPIO_SIM1_SIMIO 36
        #define     GPIO_SIM2_SIMIO 41
    #endif
#endif
#elif defined(ELBRUS) // shall use this format afterall
#define REG_GPIO_MODE_0_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x3D0)
#define REG_GPIO_MODE_1_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x3E0)
#define REG_GPIO_MODE_2_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x3F0)
#define IO_CFG_TR_BASE			0xC1F20000
#define REG_GPIO_IES_0_FOR_SIM		(IO_CFG_TR_BASE + 0x000)
#define REG_GPIO_IES_1_FOR_SIM		(IO_CFG_TR_BASE + 0x000)
#define REG_GPIO_SMT_0_FOR_SIM		(IO_CFG_TR_BASE + 0x100)
#define REG_GPIO_SMT_1_FOR_SIM		(IO_CFG_TR_BASE + 0x100)
#define REG_GPIO_TDSEL_0_FOR_SIM	(IO_CFG_TR_BASE + 0x200)
#define REG_GPIO_TDSEL_1_FOR_SIM	(IO_CFG_TR_BASE + 0x200)
#define REG_GPIO_RDSEL_0_FOR_SIM	(IO_CFG_TR_BASE + 0x300)
#define REG_GPIO_RDSEL_1_FOR_SIM	(IO_CFG_TR_BASE + 0x300)
#define REG_GPIO_DRV_0_FOR_SIM		(IO_CFG_TR_BASE + 0x600)
#define REG_GPIO_DRV_1_FOR_SIM		(IO_CFG_TR_BASE + 0x600)
#define     REG_GPIO_PUPD_0_FOR_SIM	    (IO_CFG_TR_BASE + 0x700)
#define     REG_GPIO_PUPD_1_FOR_SIM	    (IO_CFG_TR_BASE + 0x710)
#define     SIM1_INS	0x00008880
#define     SIM2_INS	0x00000888

#define     ENABLE_ABNORMAL_SIM(_n) \
    if(_n){DRV_WriteReg32(REG_GPIO_PUPD_0_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_0_FOR_SIM) | SIM2_INS));} \
    else{DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) | SIM1_INS));}

#define     DISABLE_ABNORMAL_SIM(_n) \
    if(_n){DRV_WriteReg32(REG_GPIO_PUPD_0_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_0_FOR_SIM) & ~(SIM2_INS)));} \
    else{DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) & ~(SIM1_INS)));}

#if defined(__SIM_ACTIVATION_V2__)
    #if defined(__SIM_SAME_GPIO_MODE__)
        #define     GPIO_SIM1_SIMIO 23
        #define     GPIO_SIM2_SIMIO 24
    #else
        #define GPIO_SIM1_SIMIO 24
        #define GPIO_SIM2_SIMIO 23
    #endif
#endif
#elif defined(MT6799) // shall use this format afterall
#define REG_GPIO_MODE_0_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x400)
#define REG_GPIO_MODE_1_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x410)
#define IO_CFG_BR_BASE			0xC1D30000
#define REG_GPIO_IES_0_FOR_SIM		(IO_CFG_BR_BASE + 0x000)
#define REG_GPIO_IES_1_FOR_SIM		(IO_CFG_BR_BASE + 0x000)
#define REG_GPIO_SMT_0_FOR_SIM		(IO_CFG_BR_BASE + 0x010)
#define REG_GPIO_SMT_1_FOR_SIM		(IO_CFG_BR_BASE + 0x010)
#define REG_GPIO_TDSEL_0_FOR_SIM	(IO_CFG_BR_BASE + 0x020)
#define REG_GPIO_TDSEL_1_FOR_SIM	(IO_CFG_BR_BASE + 0x020)
#define REG_GPIO_RDSEL_0_FOR_SIM	(IO_CFG_BR_BASE + 0x040)
#define REG_GPIO_RDSEL_1_FOR_SIM	(IO_CFG_BR_BASE + 0x040)
#define REG_GPIO_DRV_0_FOR_SIM		(IO_CFG_BR_BASE + 0x0A0)
#define REG_GPIO_DRV_1_FOR_SIM		(IO_CFG_BR_BASE + 0x0A0)
#define REG_GPIO_PUPD_0_FOR_SIM		(IO_CFG_BR_BASE + 0x0C0)
#define REG_GPIO_PUPD_1_FOR_SIM		(IO_CFG_BR_BASE + 0x0C0)
#define	SIM1_INS	0x00888000
#define	SIM2_INS	0x00000888

#define ENABLE_ABNORMAL_SIM(_n) \
    if(_n) \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~0x6) | 0x4); \
        DRV_WriteReg32(REG_GPIO_PUPD_0_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_0_FOR_SIM) | SIM2_INS)); \
    } \
    else \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~0x60) | 0x40); \
        DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) | SIM1_INS)); \
    }

#define DISABLE_ABNORMAL_SIM(_n) \
    if(_n) \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~0x6) | 0x2); \
        DRV_WriteReg32(REG_GPIO_PUPD_0_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_0_FOR_SIM) & ~(SIM2_INS))); \
    } \
    else \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~0x60) | 0x20); \
        DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) & ~(SIM1_INS))); \
    }


#if defined(__SIM_ACTIVATION_V2__)
    #if defined(__SIM_SAME_GPIO_MODE__)
        #define GPIO_SIM1_SIMIO 139
        #define GPIO_SIM2_SIMIO 136
    #else
        #define GPIO_SIM1_SIMIO 136
        #define GPIO_SIM2_SIMIO 139
    #endif
#endif

#elif defined(MT6763) // shall use this format afterall
#define REG_GPIO_MODE_0_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x340)
#define REG_GPIO_MODE_1_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x350)
#define IO_CFG_LB_BASE			0xC1E70000
#define REG_GPIO_IES_0_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_IES_1_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_SMT_0_FOR_SIM		(IO_CFG_LB_BASE + 0x010)
#define REG_GPIO_SMT_1_FOR_SIM		(IO_CFG_LB_BASE + 0x010)
#define REG_GPIO_TDSEL_0_FOR_SIM	(IO_CFG_LB_BASE + 0x020)
#define REG_GPIO_TDSEL_1_FOR_SIM	(IO_CFG_LB_BASE + 0x020)
#define REG_GPIO_RDSEL_0_FOR_SIM	(IO_CFG_LB_BASE + 0x040)
#define REG_GPIO_RDSEL_1_FOR_SIM	(IO_CFG_LB_BASE + 0x040)
#define REG_GPIO_DRV_0_FOR_SIM		(IO_CFG_LB_BASE + 0x0A0)
#define REG_GPIO_DRV_1_FOR_SIM		(IO_CFG_LB_BASE + 0x0A0)
#define REG_GPIO_PUPD_0_FOR_SIM		(IO_CFG_LB_BASE + 0x0C0)
#define REG_GPIO_PUPD_1_FOR_SIM		(IO_CFG_LB_BASE + 0x0C0)
#define	SIM1_INS	0x00888000
#define	SIM2_INS	0x00000888

#define ENABLE_ABNORMAL_SIM(_n) \
    if(_n) \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~0x07) | 0x04); \
        DRV_WriteReg32(REG_GPIO_PUPD_0_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_0_FOR_SIM) | SIM2_INS)); \
    } \
    else \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~0x70) | 0x40); \
        DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) | SIM1_INS)); \
    }

#define DISABLE_ABNORMAL_SIM(_n) \
    if(_n) \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~0x07) | 0x02); \
        DRV_WriteReg32(REG_GPIO_PUPD_0_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_0_FOR_SIM) & ~(SIM2_INS))); \
    } \
    else \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~0x70) | 0x20); \
        DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) & ~(SIM1_INS))); \
    }



    #if defined(__SIM_SAME_GPIO_MODE__)        
        #define GPIO_SIM2_SIMIO     35
        #define GPIO_SIM2_SIMRST    36
        #define GPIO_SIM2_SIMCLK    37
        #define GPIO_SIM1_SIMCLK    38
        #define GPIO_SIM1_SIMRST    39
        #define GPIO_SIM1_SIMIO     40
    #else
        #define GPIO_SIM1_SIMIO     35
        #define GPIO_SIM1_SIMRST    36
        #define GPIO_SIM1_SIMCLK    37
        #define GPIO_SIM2_SIMCLK    38
        #define GPIO_SIM2_SIMRST    39
        #define GPIO_SIM2_SIMIO     40
    #endif

#elif defined(MT6739)
#define REG_GPIO_MODE_0_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x390)
#define REG_GPIO_MODE_1_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x3A0)
#define IOCFG_LB_BASE			0xC0002400
#define REG_GPIO_IES_0_FOR_SIM		(IOCFG_LB_BASE + 0x020)
#define REG_GPIO_IES_1_FOR_SIM		(IOCFG_LB_BASE + 0x020)
#define REG_GPIO_SMT_0_FOR_SIM		(IOCFG_LB_BASE + 0x090)
#define REG_GPIO_SMT_1_FOR_SIM		(IOCFG_LB_BASE + 0x090)
#define REG_GPIO_TDSEL_0_FOR_SIM	(IOCFG_LB_BASE + 0x0B0)
#define REG_GPIO_TDSEL_1_FOR_SIM	(IOCFG_LB_BASE + 0x0B0)
#define REG_GPIO_RDSEL_0_FOR_SIM	(IOCFG_LB_BASE + 0x070)
#define REG_GPIO_RDSEL_1_FOR_SIM	(IOCFG_LB_BASE + 0x080)
#define REG_GPIO_DRV_0_FOR_SIM		(IOCFG_LB_BASE + 0x000)
#define REG_GPIO_DRV_1_FOR_SIM		(IOCFG_LB_BASE + 0x000)
#define REG_GPIO_PUPD_0_FOR_SIM		(IOCFG_LB_BASE + 0x030)
#define REG_GPIO_PUPD_1_FOR_SIM		(IOCFG_LB_BASE + 0x040)	// for abnormal SIM
#define	SIM1_INS	0x00000007
#define	SIM2_INS	0x00000038
#define REG_GPIO_R0_CFG0_CLR_FOR_SIM	(IOCFG_LB_BASE + 0x058)
#define REG_GPIO_R1_CFG0_SET_FOR_SIM	(IOCFG_LB_BASE + 0x064)

#define ENABLE_ABNORMAL_SIM(_n) \
    if(_n) \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~(0xF0000)) | 0x50000); \
        DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) | SIM2_INS)); \
    } \
    else \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~(0xF000)) | 0x5000); \
        DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) | SIM1_INS)); \
    }

#define DISABLE_ABNORMAL_SIM(_n) \
    if(_n) \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~(0xF0000)) | 0x50000); \
        DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) & ~(SIM2_INS))); \
    } \
    else \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~(0xF000)) | 0x5000); \
        DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) & ~(SIM1_INS))); \
    }

    #if defined(__SIM_SAME_GPIO_MODE__)        
        #define GPIO_SIM2_SIMCLK    80
        #define GPIO_SIM2_SIMRST    81
        #define GPIO_SIM2_SIMIO     82
        #define GPIO_SIM1_SIMCLK    77
        #define GPIO_SIM1_SIMRST    78
        #define GPIO_SIM1_SIMIO     79
    #else
        #define GPIO_SIM1_SIMCLK    80
        #define GPIO_SIM1_SIMRST    81
        #define GPIO_SIM1_SIMIO     82
        #define GPIO_SIM2_SIMCLK    77
        #define GPIO_SIM2_SIMRST    78
        #define GPIO_SIM2_SIMIO     79
    #endif


#elif defined(MT6771)
#define REG_GPIO_MODE_0_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x340)
#define REG_GPIO_MODE_1_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x350)
#define IOCFG_LB_BASE				0xC1E70000
#define REG_GPIO_IES_0_FOR_SIM		(IOCFG_LB_BASE + 0x000)
#define REG_GPIO_IES_1_FOR_SIM		(IOCFG_LB_BASE + 0x000)
#define REG_GPIO_SMT_0_FOR_SIM		(IOCFG_LB_BASE + 0x010)
#define REG_GPIO_SMT_1_FOR_SIM		(IOCFG_LB_BASE + 0x010)
#define REG_GPIO_TDSEL_0_FOR_SIM	(IOCFG_LB_BASE + 0x020)
#define REG_GPIO_TDSEL_1_FOR_SIM	(IOCFG_LB_BASE + 0x020)
#define REG_GPIO_RDSEL_0_FOR_SIM	(IOCFG_LB_BASE + 0x040)
#define REG_GPIO_RDSEL_1_FOR_SIM	(IOCFG_LB_BASE + 0x040)
#define REG_GPIO_DRV_0_FOR_SIM		(IOCFG_LB_BASE + 0x0A0)
#define REG_GPIO_DRV_1_FOR_SIM		(IOCFG_LB_BASE + 0x0A0)
#define REG_GPIO_PULLEN_0_FOR_SIM	(IOCFG_LB_BASE + 0x060)
#define REG_GPIO_PULLEN_1_FOR_SIM	(IOCFG_LB_BASE + 0x060)	// for abnormal SIM
#define REG_GPIO_PULLSEL_0_FOR_SIM	(IOCFG_LB_BASE + 0x080)
#define REG_GPIO_PULLSEL_1_FOR_SIM	(IOCFG_LB_BASE + 0x080)	// for abnormal SIM
#define REG_GPIO_PUPD_0_FOR_SIM		(IOCFG_LB_BASE + 0x0C0)
#define REG_GPIO_PUPD_1_FOR_SIM		(IOCFG_LB_BASE + 0x0C0)	// for abnormal SIM
#define	SIM1_INS	0x00800000
#define	SIM2_INS	0x00000008

#define ENABLE_ABNORMAL_SIM(_n) \
    if(_n) \
    { \
    	DRV_WriteReg32(REG_GPIO_DRV_1_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_1_FOR_SIM) & ~(0x07)) | 0x2); \
        DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) | SIM2_INS)); \
    } \
    else \
    { \
    	DRV_WriteReg32(REG_GPIO_DRV_1_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_1_FOR_SIM) & ~(0x70)) | 0x20); \
        DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) | SIM1_INS)); \
    }

#define DISABLE_ABNORMAL_SIM(_n) \
    if(_n) \
    { \
    	DRV_WriteReg32(REG_GPIO_DRV_1_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_1_FOR_SIM) & ~(0x07)) | 0x02); \
        DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) & ~(SIM2_INS))); \
    } \
    else \
    { \
    	DRV_WriteReg32(REG_GPIO_DRV_1_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_1_FOR_SIM) & ~(0x70)) | 0x20); \
        DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) & ~(SIM1_INS))); \
    }

    #if defined(__SIM_SAME_GPIO_MODE__)        
        #define GPIO_SIM2_SIMCLK    37
        #define GPIO_SIM2_SIMRST    36
        #define GPIO_SIM2_SIMIO     35
        #define GPIO_SIM1_SIMCLK    38
        #define GPIO_SIM1_SIMRST    39
        #define GPIO_SIM1_SIMIO     40
    #else
        #define GPIO_SIM1_SIMCLK    37
        #define GPIO_SIM1_SIMRST    36
        #define GPIO_SIM1_SIMIO     35
        #define GPIO_SIM2_SIMCLK    38
        #define GPIO_SIM2_SIMRST    39
        #define GPIO_SIM2_SIMIO     40
    #endif

#if defined(SIM_DRV_USE_MDGPIO_I2C)
    #define MD_AP_DUMMY_I2C     (BASE_MADDR_MDPERIMISC+0x100) //0xA0060000
    #define AP_MD_DUMMY_I2C     (BASE_MADDR_MDPERIMISC+0x300)
    #define MD_AP_SCL       	(1<<15)
    #define MD_AP_SDA       	(1<<14)
    #define MD_AP_SDA_OE    	(1<<13)
#endif

#elif defined(MT6765) || defined(MT6761)
#define IOCFG_LB_BASE			0xC0002400

#define REG_GPIO_INS_CFG0       (IOCFG_LB_BASE + 0x030)
#define REG_GPIO_INS_CFG0_SET   (IOCFG_LB_BASE + 0x034)
#define REG_GPIO_INS_CFG0_CLR   (IOCFG_LB_BASE + 0x038)

#define REG_GPIO_MODE_0_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x340)
#define REG_GPIO_MODE_1_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x340)

#define REG_GPIO_IES_0_FOR_SIM		(IOCFG_LB_BASE + 0x020)
#define REG_GPIO_IES_1_FOR_SIM		(IOCFG_LB_BASE + 0x020)

#define REG_GPIO_SMT_0_FOR_SIM		(IOCFG_LB_BASE + 0x0B0)
#define REG_GPIO_SMT_1_FOR_SIM		(IOCFG_LB_BASE + 0x0B0)

#define REG_GPIO_TDSEL_0_FOR_SIM	(IOCFG_LB_BASE + 0x0D0)
#define REG_GPIO_TDSEL_1_FOR_SIM	(IOCFG_LB_BASE + 0x0D0)

#define REG_GPIO_RDSEL_0_FOR_SIM	(IOCFG_LB_BASE + 0x090)
#define REG_GPIO_RDSEL_1_FOR_SIM	(IOCFG_LB_BASE + 0x0A0)

#define REG_GPIO_DRV_0_FOR_SIM		(IOCFG_LB_BASE + 0x000)
#define REG_GPIO_DRV_1_FOR_SIM		(IOCFG_LB_BASE + 0x000)

#define REG_GPIO_PUPD_0_FOR_SIM		(IOCFG_LB_BASE + 0x070)     // R0_CFG0
#define REG_GPIO_PUPD_1_FOR_SIM		(IOCFG_LB_BASE + 0x080)     // R1_CFG0

#define	SIM1_INS	0x00000002
#define	SIM2_INS	0x00000010

#define ENABLE_ABNORMAL_SIM(_n) \
    if(_n) \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM)& ~(0xF<<13))|(0x5<<13)); \
        DRV_WriteReg32(REG_GPIO_INS_CFG0_SET, SIM2_INS); \
    } \
    else \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM)& ~(0xF<<9))|(0x5<<9)); \
        DRV_WriteReg32(REG_GPIO_INS_CFG0_SET, SIM1_INS); \
    }

#define DISABLE_ABNORMAL_SIM(_n) \
    if(_n) \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM)& ~(0xF<<13))|(0x5<<13)); \
        DRV_WriteReg32(REG_GPIO_INS_CFG0_CLR, SIM2_INS); \
    } \
    else \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM)& ~(0xF<<9))|(0x5<<9)); \
        DRV_WriteReg32(REG_GPIO_INS_CFG0_CLR, SIM1_INS); \
    }

#if defined(__SIM_SAME_GPIO_MODE__)        
    #define GPIO_SIM2_SIMCLK    37
    #define GPIO_SIM2_SIMRST    36
    #define GPIO_SIM2_SIMIO     35
    #define GPIO_SIM1_SIMCLK    38
    #define GPIO_SIM1_SIMRST    39
    #define GPIO_SIM1_SIMIO     40
#else
    #define GPIO_SIM1_SIMCLK    37
    #define GPIO_SIM1_SIMRST    36
    #define GPIO_SIM1_SIMIO     35
    #define GPIO_SIM2_SIMCLK    38
    #define GPIO_SIM2_SIMRST    39
    #define GPIO_SIM2_SIMIO     40
#endif
#elif defined(MT6768)
#define IOCFG_LB_BASE			0xC0002400

#define REG_GPIO_INS_CFG0       (IOCFG_LB_BASE + 0x020)
#define REG_GPIO_INS_CFG0_SET   (IOCFG_LB_BASE + 0x024)
#define REG_GPIO_INS_CFG0_CLR   (IOCFG_LB_BASE + 0x028)

#define REG_GPIO_MODE_0_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x430)
#define REG_GPIO_MODE_1_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x450)

#define REG_GPIO_IES_0_FOR_SIM		(IOCFG_LB_BASE + 0x010)
#define REG_GPIO_IES_1_FOR_SIM		(IOCFG_LB_BASE + 0x010)

#define REG_GPIO_SMT_0_FOR_SIM		(IOCFG_LB_BASE + 0x080)
#define REG_GPIO_SMT_1_FOR_SIM		(IOCFG_LB_BASE + 0x080)

#define REG_GPIO_TDSEL_0_FOR_SIM	(IOCFG_LB_BASE + 0x0A0)
#define REG_GPIO_TDSEL_1_FOR_SIM	(IOCFG_LB_BASE + 0x0A0)

#define REG_GPIO_RDSEL_0_FOR_SIM	(IOCFG_LB_BASE + 0x060)
#define REG_GPIO_RDSEL_1_FOR_SIM	(IOCFG_LB_BASE + 0x060)

#define REG_GPIO_DRV_0_FOR_SIM		(IOCFG_LB_BASE + 0x000)
#define REG_GPIO_DRV_1_FOR_SIM		(IOCFG_LB_BASE + 0x000)

#define REG_GPIO_PUPD_0_FOR_SIM		(IOCFG_LB_BASE + 0x030)     // R0_CFG0
#define REG_GPIO_PUPD_1_FOR_SIM		(IOCFG_LB_BASE + 0x030)     // R1_CFG0

#define REG_GPIO_R0_CFG0_CLR		(IOCFG_LB_BASE + 0x048)
#define REG_GPIO_R1_CFG0_SET		(IOCFG_LB_BASE + 0x054)

#define REG_GPIO_SR_CFG0_SET		(IOCFG_LB_BASE + 0x094)
#define REG_GPIO_SR_CFG0_CLR		(IOCFG_LB_BASE + 0x098)

#define	SIM1_INS	0x00000002
#define	SIM2_INS	0x00000010

#define ENABLE_ABNORMAL_SIM(_n) \
    if(_n) \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM)& ~(0xF<<13))|(0xA<<13)); \
        DRV_WriteReg32(REG_GPIO_INS_CFG0_SET, SIM2_INS); \
    } \
    else \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM)& ~(0xF<<9))|(0xA<<9)); \
        DRV_WriteReg32(REG_GPIO_INS_CFG0_SET, SIM1_INS); \
    }

#define DISABLE_ABNORMAL_SIM(_n) \
    if(_n) \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM)& ~(0xF<<13))|(0x5<<13)); \
        DRV_WriteReg32(REG_GPIO_INS_CFG0_CLR, SIM2_INS); \
    } \
    else \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM)& ~(0xF<<9))|(0x5<<9)); \
        DRV_WriteReg32(REG_GPIO_INS_CFG0_CLR, SIM1_INS); \
    }

#if defined(__SIM_SAME_GPIO_MODE__)        
    #define GPIO_SIM2_SIMCLK    157
    #define GPIO_SIM2_SIMRST    156
    #define GPIO_SIM2_SIMIO     155
    #define GPIO_SIM1_SIMCLK    172
    #define GPIO_SIM1_SIMRST    173
    #define GPIO_SIM1_SIMIO     174
#else
    #define GPIO_SIM1_SIMCLK    157
    #define GPIO_SIM1_SIMRST    156
    #define GPIO_SIM1_SIMIO     155
    #define GPIO_SIM2_SIMCLK    172
    #define GPIO_SIM2_SIMRST    173
    #define GPIO_SIM2_SIMIO     174
#endif
#elif defined(MT6295M) || defined(MT3967)
#define REG_GPIO_MODE_0_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x000)
#define REG_GPIO_MODE_1_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x000)
#define IO_CFG_LB_BASE			BASE_MADDR_AP_GPIOMUX
#define REG_GPIO_IES_0_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_IES_1_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_SMT_0_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_SMT_1_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_TDSEL_0_FOR_SIM	(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_TDSEL_1_FOR_SIM	(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_RDSEL_0_FOR_SIM	(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_RDSEL_1_FOR_SIM	(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_DRV_0_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_DRV_1_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_PUPD_0_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_PUPD_1_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define	SIM1_INS	0x00000000
#define	SIM2_INS	0x00000000

#define ENABLE_ABNORMAL_SIM(_n) \
		    if(_n) \
    { \
	    	            DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~0x07) | 0x02); \
	    	            DRV_WriteReg32(REG_GPIO_PUPD_0_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_0_FOR_SIM) | SIM2_INS)); \
	    	        } \
    else \
    { \
	    	            DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~0x70) | 0x20); \
	    	            DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) | SIM1_INS)); \
	    	        }

#define DISABLE_ABNORMAL_SIM(_n) \
		    if(_n) \
    { \
	    	            DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~0x07) | 0x01); \
	    	            DRV_WriteReg32(REG_GPIO_PUPD_0_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_0_FOR_SIM) & ~(SIM2_INS))); \
	    	        } \
    else \
    { \
	    	            DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~0x70) | 0x10); \
	    	            DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) & ~(SIM1_INS))); \
	    	        }

    #if defined(__SIM_SAME_GPIO_MODE__)        
        #define GPIO_SIM2_SIMIO     0
        #define GPIO_SIM2_SIMRST    0
        #define GPIO_SIM2_SIMCLK    0
        #define GPIO_SIM1_SIMCLK    0
        #define GPIO_SIM1_SIMRST    0
        #define GPIO_SIM1_SIMIO     0
    #else
        #define GPIO_SIM1_SIMIO     0
        #define GPIO_SIM1_SIMRST    0
        #define GPIO_SIM1_SIMCLK    0
        #define GPIO_SIM2_SIMCLK    0
        #define GPIO_SIM2_SIMRST    0
        #define GPIO_SIM2_SIMIO     0
    #endif

#else
#define REG_GPIO_MODE_0_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x000)
#define REG_GPIO_MODE_1_FOR_SIM		(BASE_MADDR_AP_GPIOMUX + 0x000)
#define IO_CFG_LB_BASE			BASE_MADDR_AP_GPIOMUX
#define REG_GPIO_IES_0_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_IES_1_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_SMT_0_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_SMT_1_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_TDSEL_0_FOR_SIM	(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_TDSEL_1_FOR_SIM	(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_RDSEL_0_FOR_SIM	(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_RDSEL_1_FOR_SIM	(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_DRV_0_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_DRV_1_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_PUPD_0_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define REG_GPIO_PUPD_1_FOR_SIM		(IO_CFG_LB_BASE + 0x000)
#define	SIM1_INS	0x00000000
#define	SIM2_INS	0x00000000

#define ENABLE_ABNORMAL_SIM(_n) \
    if(_n) \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~0x07) | 0x02); \
        DRV_WriteReg32(REG_GPIO_PUPD_0_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_0_FOR_SIM) | SIM2_INS)); \
    } \
    else \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~0x70) | 0x20); \
        DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) | SIM1_INS)); \
    }

#define DISABLE_ABNORMAL_SIM(_n) \
    if(_n) \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~0x07) | 0x01); \
        DRV_WriteReg32(REG_GPIO_PUPD_0_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_0_FOR_SIM) & ~(SIM2_INS))); \
    } \
    else \
    { \
        DRV_WriteReg32(REG_GPIO_DRV_0_FOR_SIM, (DRV_Reg32(REG_GPIO_DRV_0_FOR_SIM) & ~0x70) | 0x10); \
        DRV_WriteReg32(REG_GPIO_PUPD_1_FOR_SIM, (DRV_Reg32(REG_GPIO_PUPD_1_FOR_SIM) & ~(SIM1_INS))); \
    }

    #if defined(__SIM_SAME_GPIO_MODE__)        
        #define GPIO_SIM2_SIMIO     0
        #define GPIO_SIM2_SIMRST    0
        #define GPIO_SIM2_SIMCLK    0
        #define GPIO_SIM1_SIMCLK    0
        #define GPIO_SIM1_SIMRST    0
        #define GPIO_SIM1_SIMIO     0
    #else
        #define GPIO_SIM1_SIMIO     0
        #define GPIO_SIM1_SIMRST    0
        #define GPIO_SIM1_SIMCLK    0
        #define GPIO_SIM2_SIMCLK    0
        #define GPIO_SIM2_SIMRST    0
        #define GPIO_SIM2_SIMIO     0
    #endif

#define     SET_SIM1_SR(_n)
#define     SET_SIM2_SR(_n)
#endif
#endif /*__SIM_DRV_HW_REG_MTK_H__*/
