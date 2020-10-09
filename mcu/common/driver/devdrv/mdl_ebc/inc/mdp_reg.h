/*
 * mdp_reg.h
 *
 *  Created on: 2014/8/20
 *      Author: MTK07117
 */

#ifndef MDP_REG_H_
#define MDP_REG_H_

// ===================== MDP register address ========================
#define MDP_HW_NUM		(3)
#define MDP0_BASEADDR	(0xAD601C80) // MPC
#define MDP1_BASEADDR	(0xADE04480) // IMC
#define MDP2_BASEADDR	(0xAEE01680) // ICC

//MDP Port
#define MDP_CI_8_PORT(i)               ( MDP##i##_BASEADDR + 0x0000 )
#define MDP_TD_16_PORT(i)              ( MDP##i##_BASEADDR + 0x0004 )
#define MDP_CI_16_PORT(i)              ( MDP##i##_BASEADDR + 0x0008 )
#define MDP_TD_32_PORT(i)              ( MDP##i##_BASEADDR + 0x000C )
#define MDP_CI_32_PORT(i)              ( MDP##i##_BASEADDR + 0x0010 )
//Configuration 1
#define MDP_CON0_BEFORE_START_REG(i)   ( MDP##i##_BASEADDR + 0x0014 )
#define MDP_CON0_RUN_TIME_REG(i)       ( MDP##i##_BASEADDR + 0x0018 )
#define MDP_READ_DATA_1_REG(i)         ( MDP##i##_BASEADDR + 0x001C )
#define MDP_READ_DATA_2_REG(i)         ( MDP##i##_BASEADDR + 0x0020 )
#define MDP_READ_DATA_3_REG(i)         ( MDP##i##_BASEADDR + 0x0024 )
#define MDP_READ_DATA_4_REG(i)         ( MDP##i##_BASEADDR + 0x0028 )
#define MDP_HW_MIPS_PER_REG(i)         ( MDP##i##_BASEADDR + 0x002C )
#define MDP_HW_MIPS_INSEN_REG(i)       ( MDP##i##_BASEADDR + 0x0030 )
#define MDP_HW_MIPS_MODULE_EN_REG(i)   ( MDP##i##_BASEADDR + 0x0034 )
//EMI Related
#define MDP_EMI_BUF_SIZE_REG(i)        ( MDP##i##_BASEADDR + 0x0040 )
#define MDP_EMI_BUF_BASE_ADDR_REG(i)   ( MDP##i##_BASEADDR + 0x0044 )
#define MDP_EMI_BUF_START_ADDR_REG(i)  ( MDP##i##_BASEADDR + 0x0048 )
//Configuration 2
#define MDP_CON1_BEFORE_START_REG(i)   ( MDP##i##_BASEADDR + 0x004C )
#define MDP_CON1_RUN_TIME_REG(i)       ( MDP##i##_BASEADDR + 0x0050 )
#define MDP_STA_REG(i)                 ( MDP##i##_BASEADDR + 0x0054 )
#define MDP_SWTEST_PORT(i)             ( MDP##i##_BASEADDR + 0x005C )

extern volatile kal_uint32 const MDP[];
extern const kal_int32 MDP_NUM;

// ============== define the register operation macro ================
// Port Related Macro
#define MDP_SWTEST_PORT_OFFSET                  (0x005C)
#define MDP_WRITE_SWTEST(ch, DATA) 				(DRV_WriteReg32(MDP[ch] + MDP_SWTEST_PORT_OFFSET, DATA))
// MDP_CON0_BEFORE_START
#define MDP_CON0_BEFORE_START_REG_OFFSET        (0x0014)
#define MDP_SET_CON0_BEFORE_START(ch, DATA)     (DRV_WriteReg32(MDP[ch] + MDP_CON0_BEFORE_START_REG_OFFSET, DATA))
#define MDP_GET_CON0_BEFORE_START(ch)           (DRV_Reg32(MDP[ch] + MDP_CON0_BEFORE_START_REG_OFFSET))
// MDP_CON0_RUN_TIME

// MDP READ DATA

// MDP MIPS

// EMI Related
#define MDP_EMI_BUF_SIZE_REG_OFFSET             (0x0040)
#define MDP_SET_EMI_BUF_SIZE(ch, SIZE) 			(DRV_WriteReg32(MDP[ch] + MDP_EMI_BUF_SIZE_REG_OFFSET, SIZE))
#define MDP_EMI_BUF_BASE_ADDR_REG_OFFSET        (0x0044)
#define MDP_SET_EMI_BASE_ADDR(ch, ADDR) 		(DRV_WriteReg32(MDP[ch] + MDP_EMI_BUF_BASE_ADDR_REG_OFFSET, ADDR))
#define MDP_GET_EMI_BASE_ADDR(ch)				(DRV_Reg32(MDP[ch] + MDP_EMI_BUF_BASE_ADDR_REG_OFFSET))
#define MDP_EMI_BUF_START_ADDR_REG_OFFSET       (0x0048)
#define MDP_SET_EMI_START_ADDR(ch, ADDR)		(DRV_WriteReg32(MDP[ch] + MDP_EMI_BUF_START_ADDR_REG_OFFSET, ADDR))
#define MDP_GET_EMI_START_ADDR(ch) 				(DRV_Reg32(MDP[ch] + MDP_EMI_BUF_START_ADDR_REG_OFFSET))
// MDP_CON1_BEFORE_START
#define MDP_CON1_BEFORE_START_REG_OFFSET        (0x004C)
#define MDP_SET_CON1_BEFORE_START(ch, DATA)     (DRV_WriteReg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET, DATA))
#define MDP_GET_CON1_BEFORE_START(ch)           (DRV_Reg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET))
#define MDP_SET_CLOCK_ON(ch)					(DRV_ClrReg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET, 1))
#define MDP_SET_CLOCK_OFF(ch)					(DRV_SetReg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET, 1))
#define MDP_GET_CLOCK(ch)   					(DRV_Reg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET) & 1)
#define MDP_SET_START(ch)             			(DRV_SetReg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET, 1<<1))
#define MDP_GET_START(ch)                       ((DRV_Reg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET) >> 1) & 1)
#define MDP_SET_RESET(ch)             			(DRV_SetReg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET, 1<<2))
#define MDP_SET_OUTPUT_TO_EMI(ch)       		(DRV_SetReg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET, 1<<3))
#define MDP_SET_OUTPUT_TO_ATB(ch)      			(DRV_ClrReg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET, 1<<3))
#define MDP_GET_OUTPUT_TO_EMI(ch)               ((DRV_Reg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET) >> 3) & 1)
#define MDP_SET_AUTO_TEST_ON(ch)        		(DRV_SetReg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET, 1<<4))
#define MDP_GET_AUTO_TEST_ON(ch)                ((DRV_Reg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET) >> 4) & 1)
#define MDP_SET_EMI_BANDWIDTH(ch, BW)		  	do{DRV_ClrReg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET, 0x3<<6); \
                                                    DRV_SetReg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET, BW<<6);}while(0)
#define MDP_SET_EMI_BUF_WRAP_ON(ch)     		(DRV_SetReg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET, 1<<8))
#define MDP_SET_EMI_BUF_WRAP_OFF(ch)    		(DRV_ClrReg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET, 1<<8))
#define MDP_SET_SW_TEST_ON(ch)     				(DRV_SetReg32(MDP[ch] + MDP_CON1_BEFORE_START_REG_OFFSET, 1<<9))
// MDP_CON_RUN_TIME
#define MDP_CON1_RUN_TIME_REG_OFFSET            (0x0050)
#define MDP_SET_EVENT_CTRL_SYNC_MASK_ON(ch) 	(DRV_SetReg32(MDP[ch] + MDP_CON1_RUN_TIME_REG_OFFSET, 1))
#define MDP_SET_EVENT_CTRL_SYNC_MASK_OFF(ch)	(DRV_ClrReg32(MDP[ch] + MDP_CON1_RUN_TIME_REG_OFFSET, 1))
#define MDP_SET_LBUF_FLUSH(ch)	         	  	(DRV_SetReg32(MDP[ch] + MDP_CON1_RUN_TIME_REG_OFFSET, 1<<1))
#define MDP_GET_LBUF_FLUSH(ch)	           		((DRV_Reg32(MDP[ch] + MDP_CON1_RUN_TIME_REG_OFFSET) >> 1) & 1)
#define MDP_SET_LBUF_ABORT(ch)	          	 	(DRV_SetReg32(MDP[ch] + MDP_CON1_RUN_TIME_REG_OFFSET, 1<<2))
#define MDP_GET_LBUF_ABORT(ch)	           		((DRV_Reg32(MDP[ch] + MDP_CON1_RUN_TIME_REG_OFFSET) >> 2) & 1)
// MDP Status Register
#define MDP_STA_REG_OFFSET                      (0x0054)
#define MDP_GET_MDP_STA(ch)						(DRV_Reg32(MDP[ch] + MDP_STA_REG_OFFSET))
#define MDP_SET_EMI_BUF0_FULL(ch, STA)			do{DRV_ClrReg32(MDP[ch] + MDP_STA_REG_OFFSET, 1); \
                                                    DRV_SetReg32(MDP[ch] + MDP_STA_REG_OFFSET, STA);}while(0)
#define MDP_GET_EMI_BUF0_FULL(ch)				(DRV_Reg32(MDP[ch] + MDP_STA_REG_OFFSET) & 1)
#define MDP_SET_EMI_BUF1_FULL(ch, STA) 	       	do{DRV_ClrReg32(MDP[ch] + MDP_STA_REG_OFFSET, 1<<1); \
                                                    DRV_SetReg32(MDP[ch] + MDP_STA_REG_OFFSET, STA<<1);}while(0)
#define MDP_GET_EMI_BUF1_FULL(ch)				((DRV_Reg32(MDP[ch] + MDP_STA_REG_OFFSET) >> 1) & 1)
#define MDP_GET_LBUF_FLUSH_DONE(ch)				((DRV_Reg32(MDP[ch] + MDP_STA_REG_OFFSET) >> 2) & 1)
#define MDP_GET_LBUF_ABORT_DONE(ch) 			((DRV_Reg32(MDP[ch] + MDP_STA_REG_OFFSET) >> 3) & 1)
#define MDP_GET_EMI_BUF_WRAPPED(ch)				((DRV_Reg32(MDP[ch] + MDP_STA_REG_OFFSET) >> 4) & 1)
#define MDP_GET_SW_TEST_WRITE_EN(ch)			((DRV_Reg32(MDP[ch] + MDP_STA_REG_OFFSET) >> 6) & 1)
#define MDP_GET_SW_TEST_WRITE_NUM(ch)			((DRV_Reg32(MDP[ch] + MDP_STA_REG_OFFSET) >> 7) & 0xF)

#endif //MDP_REG_H_
