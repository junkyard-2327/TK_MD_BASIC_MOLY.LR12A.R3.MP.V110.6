/*
 * mdl_reg.h
 *
 *  Created on: 2014/6/5
 *      Author: MTK07117
 */

#ifndef MDL_REG_H_
#define MDL_REG_H_

#include "kal_public_api.h"
// ===================== MDL register address ========================
#include "mdl_reg_base.h"

//MDL Port
#define MDL_CSM_PORT(i)					( MDL##i##_BASEADDR + 0x0000 )
#define MDL_PREVCSM_PORT(i)				( MDL##i##_BASEADDR + 0x0004 )
#define MDL_DATA_PORT(i)				( MDL##i##_BASEADDR + 0x0008 )
#define MDL_DATA_16_PORT(i)				( MDL##i##_BASEADDR + 0x000C )
#define MDL_FRC_PORT(i)					( MDL##i##_BASEADDR + 0x0010 )
#define MDL_CC_PORT(i)					( MDL##i##_BASEADDR + 0x0014 )
#define MDL_SWIM_PORT(i)				( MDL##i##_BASEADDR + 0x0018 )
//EMI Related
#define MDL_EMI_BUF_SIZE_REG(i)			( MDL##i##_BASEADDR + 0x0020 )
#define MDL_EMI_BUF_BASE_ADDR_REG(i)	( MDL##i##_BASEADDR + 0x0024 )
#define MDL_EMI_BUF_START_ADDR_REG(i)	( MDL##i##_BASEADDR + 0x0028 )
//Configuration
#define MDL_CON0_BEFORE_START_REG(i)	( MDL##i##_BASEADDR + 0x002C )
#define MDL_CON1_BEFORE_START_REG(i)	( MDL##i##_BASEADDR + 0x0030 )
#define MDL_CON2_BEFORE_START_REG(i)	( MDL##i##_BASEADDR + 0x0034 )
#define MDL_CON_RUN_TIME_REG(i)			( MDL##i##_BASEADDR + 0x0038 )
#define MDL_STA_REG(i)					( MDL##i##_BASEADDR + 0x003C )
#define MDL_CSM_STACK_STA_REG(i)		( MDL##i##_BASEADDR + 0x0040 )
#define MDL_LBUF_STA_REG(i)				( MDL##i##_BASEADDR + 0x0044 )
#define MDL_OVF_STA_REG(i)				( MDL##i##_BASEADDR + 0x0048 )
//Debugging Register
#define MDL_LBUF_IN_VALUE_L_REG(i)		( MDL##i##_BASEADDR + 0x004C )
#define MDL_LBUF_IN_VALUE_H_REG(i)		( MDL##i##_BASEADDR + 0x0050 )
#define MDL_LBUF_RADDR_REG(i)			( MDL##i##_BASEADDR + 0x0054 )
#define MDL_LBUF_RDATA_REG(i)			( MDL##i##_BASEADDR + 0x0058 )
#define MDL_ERR_STAT_N_CON_REG(i)		( MDL##i##_BASEADDR + 0x005C )

extern volatile kal_uint32 const MDL[];
extern const kal_int32 MDL_NUM;

// ============== define the register operation macro ================
// Port Related Macro
#define MDL_CSM_PORT_OFFSET                         (0x0000)
#define MDL_WRITE_CSM(ch,CSM)                       (DRV_WriteReg32(MDL[ch] + MDL_CSM_PORT_OFFSET, CSM))
#define MDL_SWIM_PORT_OFFSET                        (0x0018)
#define MDL_WRITE_SWIM(ch, SWIM)                    (DRV_WriteReg32(MDL[ch] + MDL_SWIM_PORT_OFFSET, SWIM))
// EMI Related
#define MDL_EMI_BUF_SIZE_REG_OFFSET                 (0x0020)
#define MDL_SET_EMI_BUF_SIZE(ch, SIZE) 				(DRV_WriteReg32(MDL[ch] + MDL_EMI_BUF_SIZE_REG_OFFSET, SIZE))
#define MDL_EMI_BUF_BASE_ADDR_REG_OFFSET            (0x0024)
#define MDL_SET_EMI_BASE_ADDR(ch, ADDR) 			(DRV_WriteReg32(MDL[ch] + MDL_EMI_BUF_BASE_ADDR_REG_OFFSET, ADDR))
#define MDL_EMI_BUF_START_ADDR_REG_OFFSET           (0x0028)
#define MDL_SET_EMI_START_ADDR(ch, ADDR)			(DRV_WriteReg32(MDL[ch] + MDL_EMI_BUF_START_ADDR_REG_OFFSET, ADDR))
#define MDL_GET_EMI_START_ADDR(ch)                  (DRV_Reg32(MDL[ch] + MDL_EMI_BUF_START_ADDR_REG_OFFSET))
// MDL_CON0_BEFORE_START
#define MDL_CON0_BEFORE_START_REG_OFFSET            (0x002C)
#define MDL_GET_MDL_CON0_BEFORE_START(ch)           (DRV_Reg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET))
#define MDL_SET_MDL_CON0_BEFORE_START(ch, DATA)     (DRV_WriteReg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET, DATA))
#define MDL_SET_MDL_CLOCK_ON(ch)					(DRV_ClrReg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET, 1))
#define MDL_SET_MDL_CLOCK_OFF(ch)					(DRV_SetReg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET, 1))
#define MDL_GET_MDL_CLOCK(ch)                       (DRV_Reg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET) & 1)
#define MDL_SET_MDL_START(ch)             			(DRV_SetReg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET, 1<<1))
#define MDL_GET_MDL_START(ch)                       ((DRV_Reg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET) >> 1) & 1)
#define MDL_SET_MDL_RESET(ch)             			do{DRV_SetReg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET, 1<<2); \
													   DRV_ClrReg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET, 1<<2);}while(0)
#define MDL_SET_MDL_OUTPUT_TO_EMI(ch)       		(DRV_SetReg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET, 1<<3))
#define MDL_SET_MDL_OUTPUT_TO_ATB(ch)      			(DRV_ClrReg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET, 1<<3))
#define MDL_GET_MDL_OUTPUT_TO_EMI(ch)               ((DRV_Reg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET) >> 3) & 1)
#define MDL_SET_MDL_AUTO_TEST_ON(ch)        		(DRV_SetReg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET, 1<<4))
#define MDL_GET_MDL_AUTO_TEST_ON(ch)                ((DRV_Reg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET) >> 4) & 1)
#define MDL_SET_MDL_CSM_COMPENSATION_ON(ch)  		(DRV_SetReg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET, 1<<8))
#define MDL_SET_MDL_CSMR_DISABLE(ch)                (DRV_ClrReg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET, 1<<9))
#define MDL_SET_MDL_TO_SWOVF_MODE(ch)       		(DRV_SetReg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET, 1<<10))
#define MDL_SET_MDL_TO_HWOVF_MODE(ch)      	 		(DRV_ClrReg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET, 1<<10))
#define MDL_SET_MDL_HWCS_EN(ch, HWCS)               (DRV_SetReg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET, HWCS<<11))
#define MDL_SET_MDL_EMI_BUF_WRAP_ON(ch)     		(DRV_SetReg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET, 1<<12))
#define MDL_SET_MDL_EMI_BUF_WRAP_OFF(ch)    		(DRV_ClrReg32(MDL[ch] + MDL_CON0_BEFORE_START_REG_OFFSET, 1<<12))
// MDL_CON1_BEFORE_START
#define MDL_CON1_BEFORE_START_REG_OFFSET            (0x0030)
#define MDL_GET_MDL_CON1_BEFORE_START(ch)           (DRV_Reg32(MDL[ch] + MDL_CON1_BEFORE_START_REG_OFFSET))
#define MDL_SET_MDL_CON1_BEFORE_START(ch, DATA)     (DRV_WriteReg32(MDL[ch] + MDL_CON1_BEFORE_START_REG_OFFSET, DATA))
#define MDL_SET_MDL_SPECIAL_MARKER(ch, SM)          do{DRV_ClrReg32(MDL[ch] + MDL_CON1_BEFORE_START_REG_OFFSET, 0xFFFF); \
                                                        DRV_SetReg32(MDL[ch] + MDL_CON1_BEFORE_START_REG_OFFSET, SM);}while(0)
// MDL_CON2_BEFORE_START
#define MDL_CON2_BEFORE_START_REG_OFFSET            (0x0034)
#define MDL_GET_MDL_CON2_BEFORE_START(ch)           (DRV_Reg32(MDL[ch] + MDL_CON2_BEFORE_START_REG_OFFSET))
#define MDL_SET_MDL_CON2_BEFORE_START(ch, DATA)     (DRV_WriteReg32(MDL[ch] + MDL_CON2_BEFORE_START_REG_OFFSET, DATA))
#define MDL_SET_MDL_CC_STEP(ch, DATA)            	do{DRV_ClrReg32(MDL[ch] + MDL_CON2_BEFORE_START_REG_OFFSET, 0xF); \
                                                        DRV_SetReg32(MDL[ch] + MDL_CON2_BEFORE_START_REG_OFFSET, DATA);}while(0)
#define MDL_SET_MDL_LBUF_UNLOCK_TH_EMPTY(ch)      	(DRV_ClrReg32(MDL[ch] + MDL_CON2_BEFORE_START_REG_OFFSET, 0x3 << 4))
#define MDL_SET_MDL_LBUF_UNLOCK_TH_HALF_FULL(ch) 	do{DRV_ClrReg32(MDL[ch] + MDL_CON2_BEFORE_START_REG_OFFSET, 0x3 << 4); \
                                                        DRV_SetReg32(MDL[ch] + MDL_CON2_BEFORE_START_REG_OFFSET, 1<<4);}while(0)
#define MDL_SET_MDL_EMI_BANDWIDTH(ch, BW)		  	do{DRV_ClrReg32(MDL[ch] + MDL_CON2_BEFORE_START_REG_OFFSET, 0x3 << 7); \
                                                        DRV_SetReg32(MDL[ch] + MDL_CON2_BEFORE_START_REG_OFFSET, BW<<7);}while(0)
// MDL_CON_RUN_TIME
#define MDL_CON_RUN_TIME_REG_OFFSET                 (0x0038)
#define MDL_SET_MDL_EVENT_CTRL_SYNC_MASK_ON(ch) 	(DRV_SetReg32(MDL[ch] + MDL_CON_RUN_TIME_REG_OFFSET, 1))
#define MDL_SET_MDL_EVENT_CTRL_SYNC_MASK_OFF(ch)	(DRV_ClrReg32(MDL[ch] + MDL_CON_RUN_TIME_REG_OFFSET, 1))
#define MDL_SET_MDL_LBUF_FLUSH(ch)	           		(DRV_SetReg32(MDL[ch] + MDL_CON_RUN_TIME_REG_OFFSET, 1<<1))
#define MDL_GET_MDL_LBUF_FLUSH(ch)	           		((DRV_Reg32(MDL[ch] + MDL_CON_RUN_TIME_REG_OFFSET) >> 1) & 1)
#define MDL_SET_MDL_LBUF_ABORT(ch)	           	 	(DRV_SetReg32(MDL[ch] + MDL_CON_RUN_TIME_REG_OFFSET, 1<<2))
#define MDL_GET_MDL_LBUF_ABORT(ch)	            	((DRV_Reg32(MDL[ch] + MDL_CON_RUN_TIME_REG_OFFSET) >> 2) & 1)
#define MDL_SET_MDL_LBUF_OUT_DIS(ch, disable)       do{DRV_ClrReg32(MDL[ch] + MDL_CON_RUN_TIME_REG_OFFSET, 1<<5); \
                                                        DRV_SetReg32(MDL[ch] + MDL_CON_RUN_TIME_REG_OFFSET, disable<<5);}while(0)
#define MDL_SET_MDL_PORT_DIS(ch, disable)           do{DRV_ClrReg32(MDL[ch] + MDL_CON_RUN_TIME_REG_OFFSET, 1<<13); \
                                                        DRV_SetReg32(MDL[ch] + MDL_CON_RUN_TIME_REG_OFFSET, disable<<13);}while(0)
// MDL Status Register
#define MDL_STA_REG_OFFSET                          (0x003C)
#define MDL_GET_MDL_STA(ch)							(DRV_Reg32(MDL[ch] + MDL_STA_REG_OFFSET))
#define MDL_SET_EMI_BUF0_FULL(ch, STA)              do{DRV_ClrReg32(MDL[ch] + MDL_STA_REG_OFFSET, 1); \
                                                        DRV_SetReg32(MDL[ch] + MDL_STA_REG_OFFSET, STA);}while(0)
#define MDL_SET_EMI_BUF1_FULL(ch, STA) 	            do{DRV_ClrReg32(MDL[ch] + MDL_STA_REG_OFFSET, 1<<1); \
                                                        DRV_SetReg32(MDL[ch] + MDL_STA_REG_OFFSET, STA<<1);}while(0)
#define MDL_GET_EMI_BUF0_FULL(ch)		        	(DRV_Reg32(MDL[ch] + MDL_STA_REG_OFFSET) & 1)
#define MDL_GET_EMI_BUF1_FULL(ch) 					((DRV_Reg32(MDL[ch] + MDL_STA_REG_OFFSET) >> 1) & 1)
#define MDL_GET_MDL_LBUF_FLUSH_DONE(ch) 			((DRV_Reg32(MDL[ch] + MDL_STA_REG_OFFSET) >> 2) & 1)
#define MDL_GET_MDL_LBUF_ABORT_DONE(ch) 			((DRV_Reg32(MDL[ch] + MDL_STA_REG_OFFSET) >> 3) & 1)
#define MDL_GET_MDL_EMI_BUF_WRAPPED(ch)				((DRV_Reg32(MDL[ch] + MDL_STA_REG_OFFSET) >> 6) & 1)
// MDL_LBUF_STA
#define MDL_LBUF_STA_REG_OFFSET                     (0x44)
#define MDL_GET_MDL_LBUF_USED_SPACE(ch) 			(DRV_Reg32(MDL[ch] + MDL_LBUF_STA_REG_OFFSET) & (0xFFF))
#define MDL_GET_LBUF_FULL(ch)         				((DRV_Reg32(MDL[ch] + MDL_LBUF_STA_REG_OFFSET) >> 26) & 1)

#endif /* MDL_REG_H_ */
