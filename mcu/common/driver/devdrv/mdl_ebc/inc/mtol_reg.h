/*
 * mtol_reg.h
 *
 *  Created on: 2014/8/20
 *      Author: MTK07117
 */

#ifndef MTOL_REG_H_
#define MTOL_REG_H_

// ===================== MTOL register address ========================
#define MTOL_HW_NUM		(3)
#define MTOL0_BASEADDR	(0xAD601C00) // MPC
#define MTOL1_BASEADDR	(0xADE04400) // IMC
#define MTOL2_BASEADDR	(0xAEE01600) // ICC

//MTOL Port
#define MTOL_LENGTH(i)					( MTOL##i##_BASEADDR + 0x0000 )
#define MTOL_ATID(i)					( MTOL##i##_BASEADDR + 0x0004 )
#define MTOL_SW_INFO1(i)				( MTOL##i##_BASEADDR + 0x0008 )
#define MTOL_SW_INFO2(i)				( MTOL##i##_BASEADDR + 0x000C )
#define MTOL_SW_INFO3(i)				( MTOL##i##_BASEADDR + 0x0010 )
#define MTOL_ESCAPE(i)					( MTOL##i##_BASEADDR + 0x0014 )
//EMI Related
#define MTOL_EMI_BUF_SIZE_REG(i)		( MTOL##i##_BASEADDR + 0x0020 )
#define MTOL_EMI_BUF_BASE_ADDR_REG(i)	( MTOL##i##_BASEADDR + 0x0024 )
#define MTOL_EMI_BUF_START_ADDR_REG(i)	( MTOL##i##_BASEADDR + 0x0028 )
//Configuration
#define MTOL_CON_BEFORE_START_REG(i)	( MTOL##i##_BASEADDR + 0x002C )
#define MTOL_CON_RUN_TIME_REG(i)		( MTOL##i##_BASEADDR + 0x0030 )
#define MTOL_STA_REG(i)					( MTOL##i##_BASEADDR + 0x0034 )
#define MTOL_TIME_OUT_REG(i)			( MTOL##i##_BASEADDR + 0x0038 )
#define MTOL_SWTEST_PORT(i)			    ( MTOL##i##_BASEADDR + 0x003C )

extern volatile kal_uint32 const MTOL[];
extern const kal_int32 MTOL_NUM;

// ============== define the register operation macro ================
// Port Related Macro
#define MTOL_SWTEST_PORT_OFFSET                     (0x003C)
#define MTOL_WRITE_SWTEST(ch, DATA) 				(DRV_WriteReg32(MTOL[ch] + MTOL_SWTEST_PORT_OFFSET, DATA))
#define MTOL_ESCAPE_OFFSET                          (0x0014)
#define MTOL_SET_SPECIAL_MARKER(ch, SM)      		do{DRV_ClrReg32(MTOL[ch] + MTOL_ESCAPE_OFFSET, 0xFFFF<<16);\
                                                        DRV_SetReg32(MTOL[ch] + MTOL_ESCAPE_OFFSET, SM<<16);}while(0)
// EMI Related
#define MTOL_EMI_BUF_SIZE_REG_OFFSET                (0x0020)
#define MTOL_SET_EMI_BUF_SIZE(ch, SIZE) 			(DRV_WriteReg32(MTOL[ch] + MTOL_EMI_BUF_SIZE_REG_OFFSET, SIZE))
#define MTOL_EMI_BUF_BASE_ADDR_REG_OFFSET           (0x0024)
#define MTOL_SET_EMI_BASE_ADDR(ch, ADDR) 			(DRV_WriteReg32(MTOL[ch] + MTOL_EMI_BUF_BASE_ADDR_REG_OFFSET, ADDR))
#define MTOL_GET_EMI_BASE_ADDR(ch)					(DRV_Reg32(MTOL[ch] + MTOL_EMI_BUF_BASE_ADDR_REG_OFFSET))
#define MTOL_EMI_BUF_START_ADDR_REG_OFFSET          (0x0028)
#define MTOL_SET_EMI_START_ADDR(ch, ADDR)			(DRV_WriteReg32(MTOL[ch] + MTOL_EMI_BUF_START_ADDR_REG_OFFSET, ADDR))
#define MTOL_GET_EMI_START_ADDR(ch) 				(DRV_Reg32(MTOL[ch] + MTOL_EMI_BUF_START_ADDR_REG_OFFSET))
// MTOL_CON_BEFORE_START
#define MTOL_CON_BEFORE_START_REG_OFFSET            (0x002C)
#define MTOL_SET_CON_BEFORE_START(ch, DATA)         (DRV_WriteReg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET, DATA))
#define MTOL_GET_CON_BEFORE_START(ch)               (DRV_Reg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET))
#define MTOL_SET_CLOCK_ON(ch)						(DRV_ClrReg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET, 1))
#define MTOL_SET_CLOCK_OFF(ch)						(DRV_SetReg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET, 1))
#define MTOL_GET_CLOCK(ch)						    (DRV_Reg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET) & 1)
#define MTOL_SET_START(ch)             				(DRV_SetReg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET, (1<<1)))
#define MTOL_GET_START(ch)                          ((DRV_Reg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET) >> 1) & 1)
#define MTOL_SET_RESET(ch)             				(DRV_SetReg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET, (1<<2)))
#define MTOL_SET_OUTPUT_TO_EMI(ch)       			(DRV_SetReg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET, (1<<3)))
#define MTOL_SET_OUTPUT_TO_ATB(ch)      			(DRV_ClrReg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET, (1<<3)))
#define MTOL_GET_OUTPUT_TO_EMI(ch)                  ((DRV_Reg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET) >> 3) & 1)
#define MTOL_SET_AUTO_TEST_ON(ch)        			(DRV_SetReg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET, (1<<4)))
#define MTOL_GET_AUTO_TEST_EN(ch)   			    ((DRV_Reg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET) >> 4) & 1)
#define MTOL_SET_EMI_BANDWIDTH(ch, BW)		  		do{DRV_ClrReg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET, 0x3<<6);\
                                                        DRV_SetReg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET, BW<<6);}while(0)
#define MTOL_SET_EMI_BUF_WRAP_ON(ch)     			(DRV_SetReg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET, (1<<8)))
#define MTOL_SET_EMI_BUF_WRAP_OFF(ch)    			(DRV_ClrReg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET, (1<<8)))
#define MTOL_SET_SW_TEST_ON(ch)     				(DRV_SetReg32(MTOL[ch] + MTOL_CON_BEFORE_START_REG_OFFSET, (1<<9)))
// MTOL_CON_RUN_TIME
#define MTOL_CON_RUN_TIME_REG_OFFSET                (0x0030)
#define MTOL_SET_EVENT_CTRL_SYNC_MASK_ON(ch) 		(DRV_SetReg32(MTOL[ch] + MTOL_CON_RUN_TIME_REG_OFFSET, 1))
#define MTOL_SET_EVENT_CTRL_SYNC_MASK_OFF(ch)		(DRV_ClrReg32(MTOL[ch] + MTOL_CON_RUN_TIME_REG_OFFSET, 1))
#define MTOL_SET_LBUF_FLUSH(ch)	         	  		(DRV_SetReg32(MTOL[ch] + MTOL_CON_RUN_TIME_REG_OFFSET, (1<<1)))
#define MTOL_GET_LBUF_FLUSH(ch)	           			((DRV_Reg32(MTOL[ch] + MTOL_CON_RUN_TIME_REG_OFFSET) >> 1) & 1)
#define MTOL_SET_LBUF_ABORT(ch)	          	 		(DRV_SetReg32(MTOL[ch] + MTOL_CON_RUN_TIME_REG_OFFSET, (1<<2)))
#define MTOL_GET_LBUF_ABORT(ch)	           			((DRV_Reg32(MTOL[ch] + MTOL_CON_RUN_TIME_REG_OFFSET) >> 2) & 1)
// MTOL Status Register
#define MTOL_STA_REG_OFFSET                         (0x0034)
#define MTOL_GET_MTOL_STA(ch)						(DRV_Reg32(MTOL[ch] + MTOL_STA_REG_OFFSET))
#define MTOL_SET_EMI_BUF0_FULL(ch, STA)             do{DRV_ClrReg32(MTOL[ch] + MTOL_STA_REG_OFFSET, 1);\
                                                        DRV_SetReg32(MTOL[ch] + MTOL_STA_REG_OFFSET, STA);}while(0)
#define MTOL_GET_EMI_BUF0_FULL(ch)		        	(DRV_Reg32(MTOL[ch] + MTOL_STA_REG_OFFSET) & 1)
#define MTOL_SET_EMI_BUF1_FULL(ch, STA) 	        do{DRV_ClrReg32(MTOL[ch] + MTOL_STA_REG_OFFSET, 1<<1);\
                                                        DRV_SetReg32(MTOL[ch] + MTOL_STA_REG_OFFSET, STA<<1);}while(0)
#define MTOL_GET_EMI_BUF1_FULL(ch) 					((DRV_Reg32(MTOL[ch] + MTOL_STA_REG_OFFSET) >> 1) & 1)
#define MTOL_GET_LBUF_FLUSH_DONE(ch) 				((DRV_Reg32(MTOL[ch] + MTOL_STA_REG_OFFSET) >> 2) & 1)
#define MTOL_GET_LBUF_ABORT_DONE(ch) 				((DRV_Reg32(MTOL[ch] + MTOL_STA_REG_OFFSET) >> 3) & 1)
#define MTOL_GET_EMI_BUF_WRAPPED(ch)				((DRV_Reg32(MTOL[ch] + MTOL_STA_REG_OFFSET) >> 4) & 1)
#define MTOL_GET_SW_TEST_WRITE_EN(ch)				((DRV_Reg32(MTOL[ch] + MTOL_STA_REG_OFFSET) >> 6) & 1)
#define MTOL_GET_SW_TEST_WRITE_NUM(ch)				((DRV_Reg32(MTOL[ch] + MTOL_STA_REG_OFFSET) >> 7) & 0xF)
// MTOL timeout register

#endif //MTOL_REG_H_
