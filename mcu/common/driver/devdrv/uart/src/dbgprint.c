/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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

/*******************************************************************************
 * Filename:
 * ---------
 *   dbgprint.c
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   This Module defines debug function for driver.
 *
 * Author:
 * -------
 * -------
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * 11 07 2017 shenghui.shi
 * [MOLY00288093] update UART driver to remove no needed project option
 * update uart driver to remove no needed project option
 *
 * 09 15 2017 da.li
 * [MOLY00270315] [System Service][KIR] make ex robust before ex steplog work
 * Replace INT_QueryExceptionStatus  with #include <ex_public.h>.
 *
 * 09 08 2017 da.li
 * [MOLY00274163] [Sylvia] Driver porting
 * Build warning(error) fix.
 *
 * 09 07 2017 da.li
 * [MOLY00274163] [Sylvia] Driver porting
 * UART driver porting for Sylvia.
 *
 * 09 07 2017 yao.xue
 * [MOLY00275927] update uart dbg_print init
 * update dbgprint init
 *
 * 07 13 2017 shenghui.shi
 * [MOLY00263518] Update UART driver test code
 * fix build error
 *
 * 07 13 2017 shenghui.shi
 * [MOLY00263518] Update UART driver test code
 * update UART driver
 *
 * 04 24 2017 shenghui.shi
 * [MOLY00243727] update UART PDN feature
 * update UART pdn feature,to void system could not entry DCM issue.
 *
 * 03 06 2017 shenghui.shi
 * [MOLY00233604] UART print driver update for baudrate
 * update UART baudrate
 *
 * 02 07 2017 shenghui.shi
 * [MOLY00228102] [Bianco Bring-up]UMOLYA uart driver update
 * update UART dbgprint driver
 *
 * 09 30 2016 shenghui.shi
 * [MOLY00171995] update uart driver for 93
 * .
 *
 * 09 22 2016 yuke.ren
 * [MOLY00204183] Fix UART HDMA usage
 * set RX SEL for RX channel
 *
 * 09 20 2016 yuke.ren
 * [MOLY00204183] Fix UART HDMA usage
 * .
 *
 * 07 05 2016 shenghui.shi
 * [MOLY00184725] UMOLYA ESL/MASE porting
 * .
 *
 * 05 19 2016 shenghui.shi
 * [MOLY00171995] update uart driver for 93
 * .
 *
 * 03 15 2016 shenghui.shi
 * [MOLY00081492] [UART] update uart driver
 * update dbgprint driver for SMP
 *
 * 08 05 2015 yuke.ren
 * [MOLY00135235] [6291+] UART Driver Porting
 * Merging
 * 	
 * 	//UMOLY/DEV/MT6291PLUS.PRE_SB.W1517.DEV/mcu/common/driver/devdrv/uart/src/dbgprint.c
 * 	
 * 	to //UMOLY/TRUNK/UMOLY/mcu/common/driver/devdrv/uart/src/dbgprint.c
 *
 * 08 05 2015 yuke.ren
 * [MOLY00135235] [6291+] UART Driver Porting
 * .
 *
 * 08 04 2015 yuke.ren
 * [MOLY00135235] [6291+] UART Driver Porting
 * .
 *
 * 08 04 2015 yuke.ren
 * [MOLY00135235] [6291+] UART Driver Porting
 * .
 *
 * 05 22 2014 shenghui.shi
 * [MOLY00065467] [TK6291] update UART driver for TK6291
 * .
 *
 * 05 22 2014 shenghui.shi
 * [MOLY00065467] [TK6291] update UART driver for TK6291
 * update dbg_print() API
 *
 * 05 19 2014 shenghui.shi
 * [MOLY00065467] [TK6291] update UART driver for TK6291
 * Revert uart dbgprint.c to version1. to fixed dbg_print() undefined error.
 *
 * 12 10 2013 shenghui.shi
 * [MOLY00049628] MT6595 UART merge to Trunk
 * .
 *
 * 11 13 2013 shenghui.shi
 * [MOLY00046360] add SLT UART  logging API
 * .
 *
 * 09 03 2013 shenghui.shi
 * [MOLY00035768] fix uart build warnning
 * 	.
 *
 * 09 03 2013 shenghui.shi
 * [MOLY00035768] fix uart build warnning
 * .
 *
 * 07 18 2013 shenghui.shi
 * [MOLY00027330] [ARM7toMOLY] ARM7 Build/SYSGEN/Functions Update to TRUNK
 * add dbgprint for ARM7 using SUART0 port.
 *
 * 03 06 2013 ansel.liao
 * [MOLY00006575] add temporary feature: can use CPU mode UART in normal build
 * Integration change.
 *
 * 03 05 2013 ansel.liao
 * [MOLY00006575] add temporary feature: can use CPU mode UART in normal build
 * temporary feature
 *
 * 11 30 2012 ansel.liao
 * [MOLY00006575] Add UART/HDMA Driver
 * add dbg_flush and corresponding drvtest
 *
 * 11 23 2012 ansel.liao
 * [MOLY00006575] Add UART/HDMA Driver
 * Add UART/HDMA driver
 ****************************************************************************/
#define MAXCHARS	512
#define MAXFRACT    	10000
#define NumFract        4

#include "drv_comm.h"
#include "stdarg.h"
#include "dcl.h"

#include "kal_public_api.h"
#include "uart_internal.h"
#include "uart_hw.h"
#include "drvpdn.h"
#include "sync_data.h"

#if (defined(DRV_DEBUG) || defined(__IC_SLT__))

#if  defined( DRV_DEBUG)

#define DBG_PRINT_PORT		uart_port1 // Use UART1 as debug port (UART_MD)
#define DBG_PRINT_BAUD		UART_BAUD_1500000

#else   //defined(__IC_SLT__)
#define DBG_PRINT_PORT		uart_port2 // Use UART1 as debug port (UART_MD)
#define DBG_PRINT_BAUD		UART_BAUD_1500000
#endif

kal_spinlockid dbg_print_lock = 0;
#if defined(DRV_DEBUG_BUFFER_DMA_MODE)
extern kal_spinlockid print_buf_lock;
#endif

extern kal_uint32 UART_BaseAddr[MAX_UART_PORT_NUM];
extern UARTStruct UARTPort[MAX_UART_PORT_NUM];
kal_bool dbg_init_flag = KAL_FALSE;
char print_buf[MAXCHARS];


extern void U_SetBaudRate(UART_PORT port, UART_baudrate baudrate, module_type ownerid);
#include <ex_public.h>
void dbg_uart_init(void); 
void itof(char **buf, int i);
static void itoa(char **buf, int i, int base);

static void dbg_UARTPutByte(kal_uint8 data)
{
   volatile kal_uint16 LSR;
   kal_uint32 uart_base = UART_BaseAddr[DBG_PRINT_PORT];
   while(1)
   {
   	  LSR = DRV_Reg32(UART_LSR(uart_base));
      if((LSR & UART_LSR_THRE))
      {
       	 DRV_WriteReg32(UART_THR(uart_base), data);
         break;
      }
   }
}
void itof(char **buf, int i)
{
	char *s;
#define LEN	20
	int rem, j;
	static char rev[LEN+1];

	rev[LEN] = 0;
	s = &rev[LEN];
	for (j= 0 ; j < NumFract ; j++)
	{
		rem = i % 10;
			*--s = rem + '0';
		i /= 10;
	}
	while (*s)
	{
		(*buf)[0] = *s++;
		++(*buf);
	}
}

static void itoa(char **buf, int i, int base)
{
	char *s;
#define LEN	20
	int rem;
	static char rev[LEN+1];

	rev[LEN] = 0;
	if (i == 0)
	{
		(*buf)[0] = '0';
		++(*buf);
		return;
	}
	s = &rev[LEN];
	while (i)
	{
		rem = i % base;
		if (rem < 10)
			*--s = rem + '0';
		else if (base == 16)
			*--s = "abcdef"[rem - 10];
		i /= base;
	}
	while (*s)
	{
		(*buf)[0] = *s++;
		++(*buf);
	}
}

void drv_uart_configure_hdma(kal_uint32 uart_port)
{
	kal_uint32 uart_hdma_tx_channel, uart_hdma_rx_channel;
	switch(uart_port){
		case uart_port1:
			uart_hdma_tx_channel = UART1_HDMA_TX_CHANNEL;
			uart_hdma_rx_channel = UART1_HDMA_RX_CHANNEL;
			// init TX HDMA
			HDMA_MODE_CONFIG(uart_hdma_tx_channel, HDMA_CKSUM_EN_DEFAULT, HDMA_BASIC_MODE, HDMA_CKSUM_12B);
			HDMA_CONFIG(UART1_HDMA_TX_CHANNEL, HDMA_BURST_SIZE_DEFAULT, HDMA_DEV_BUS_WIDTH_DEFAULT, HDMA_MEM_BUS_WIDTH_DEFAULT);
			HDMA_BUF0_XFER_SIZE_CONFIG(UART1_HDMA_TX_CHANNEL, 0);

			// init RX HDMA
			HDMA_CONFIG_RX_SEL(UART1_HDMA_RX_CHANNEL, 0x3);
			HDMA_MODE_CONFIG(uart_hdma_rx_channel, HDMA_CKSUM_EN_DEFAULT, HDMA_BASIC_MODE, HDMA_CKSUM_12B);
			HDMA_CONFIG(UART1_HDMA_RX_CHANNEL, HDMA_BURST_SIZE_DEFAULT, HDMA_DEV_BUS_WIDTH_DEFAULT, HDMA_MEM_BUS_WIDTH_DEFAULT);
			HDMA_BUF0_XFER_SIZE_CONFIG(UART1_HDMA_RX_CHANNEL, 0);

			DRV_WriteReg32(UART_DMA_EN(UART_BaseAddr[uart_port]), UART_TXRXDMA_ON|UART_TO_CNT_AUTORST);
			DRV_WriteReg32(UART_DMA_ACK(UART_BaseAddr[uart_port]),UART_DMA_ACK_DIS);
			break;
		case uart_port2:
			break;
		default:
			ASSERT(0);
			break;
	} 
}

extern void UART_PDN_Disable(UART_PORT port);

void drv_uart_IOPAD_configure(DCL_DEV uart_port) {

    // APB Module gpio
    #define GPIO_BASE   (0xC0005000)
    #define IOCFG1_BASE (0xC1E80000)

    if(uart_port== uart_port1) {
        /* GPIO13/14 set to function6 */
        DRV_WriteReg32((GPIO_BASE+0x318), (0xFF << 20));
        DRV_WriteReg32((GPIO_BASE+0x314), (0x44 << 20));

		/* URXD PULL enable */
        DRV_WriteReg32((IOCFG1_BASE+0x064), (0x1 << 0));
		/* URXD PULL up Select */        
        DRV_WriteReg32((IOCFG1_BASE+0x084), (0x1 << 0));

    } else if (uart_port== uart_port2) {
		
        /* GPIO10/GPIO11 set to function4 */
        DRV_WriteReg32((0xC0005000+0x318), (0xFF00));
        DRV_WriteReg32((0xC0005000+0x314), (0x6600));
		
		/* URXD PULL enable */
        DRV_WriteReg32((0xC0002A00+0x054), (0x1 << 1));
        /* URXD PULL DOWN disable*/
        DRV_WriteReg32((0xC0002A00+0x048), (0x1 << 1));
		
    } else if (uart_port == uart_port3) {
        /* Do nothing */
		/*Bianco not have MDUART2 port*/
    }
}

//we must set this init function to driver init stage to void muliti-core access init function at the same time issue.
void dbg_uart_create_spinlock(void){
	if (dbg_print_lock == 0)  {
		 dbg_print_lock = kal_create_spinlock("printf_");
	}
#if defined(DRV_DEBUG_BUFFER_DMA_MODE)
	if (print_buf_lock == 0){
	 	print_buf_lock = kal_create_spinlock("printf_buf");
	}
#endif
}

void dbg_uart_init(void){

	kal_uint32 port = DBG_PRINT_PORT;
	kal_uint32 uart_base = UART_BaseAddr[DBG_PRINT_PORT];
	
	if((dbg_init_flag == KAL_FALSE)||(DRV_Reg32(UART_RATE_STEP(uart_base)) != 0x3)){
	UART_PDN_Disable(port);

	//drv_uart_IOPAD_configure(port);//for debug
	if(port == uart_port1){
		#if defined(DRV_DEBUG_DMA_MODE) || defined(DRV_DEBUG_BUFFER_DMA_MODE)
			HDMA_DONE_INTR_UNMASK(UART1_HDMA_TX_CHANNEL);
			drv_uart_configure_hdma(port);
		#else
			DRV_WriteReg32(UART_DMA_EN(uart_base), 0x0); //disable DMA
		#endif			
	}
					
/*	#if defined(__MTK_TARGET__)
		switch(port){
			case uart_port1: 
				PDN_CLR(PDN_UART0);
				#if defined(DRV_DEBUG_DMA_MODE) || defined(DRV_DEBUG_BUFFER_DMA_MODE)
                    			HDMA_PDN_CLR(port+2);
                    			HDMA_PDN_CLR(port+4);
                   				HDMA_DONE_INTR_UNMASK(2);
                    			drv_uart_configure_hdma(port);
				#else
					DRV_WriteReg32(UART_DMA_EN(uart_base), 0x0); //disable DMA
				#endif
				break;
			case uart_port2: 
				PDN_CLR(PDN_UART1);
				DRV_WriteReg32(UART_DMA_EN(uart_base), 0x0); //disable DMA
				break;
			default: break;
		}
	#endif
*/
		DRV_WriteReg(UART_IER(uart_base), UART_IER_ALLOFF);
		DRV_WriteReg32(UART_LCR(uart_base), 0xBF);
		DRV_WriteReg32(UART_EFR(uart_base), 0x0);  //no flow control;
		DRV_WriteReg32(UART_LCR(uart_base), 0x03);  //word len = 8 bit;  stop bit =1; parity = false;
		DRV_WriteReg32(UART_FCR(uart_base), 0x05);  //set fifo enable ,and clear Tx and Rx  fifo.
		U_SetBaudRate(DBG_PRINT_PORT, DBG_PRINT_BAUD, (module_type)(DBG_PRINT_PORT));

		dbg_init_flag = KAL_TRUE; 
	}

}



#ifdef  DRV_DEBUG
extern void UART_DMA_PutBytes(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length);
extern kal_uint16 BMT_PutBytes(UART_PORT port, kal_uint8 *Buffaddr, kal_uint16 Length);
#if !defined(__ESL_DBG_UTIL__)
void dbg_print(char *fmt,...)
{
#if (!defined(IC_MODULE_TEST))
   va_list ap;
   double dval;
   int ival;
   char *p, *sval;
   char *bp, cval;
   int fract;
   unsigned short len;
   UART_CTRL_PUT_BYTES_T BMTPutBytes;


    kal_take_spinlock(dbg_print_lock, KAL_INFINITE_WAIT);
	dbg_uart_init();
	
#if defined(DRV_DEBUG_DMA_MODE)
	while(HDMA_BUF0_IS_ACTIVE(DBG_PRINT_PORT+2));
#elif defined(DRV_DEBUG_BUFFER_MODE)
    //no need do anything.
#else
    //no need do anything.
#endif

	bp= print_buf;
	*bp= 0;
	
	va_start (ap, fmt);
	for (p= fmt; *p; p++)
	{
		if (*p != '%')
		{
			*bp++= *p;
			continue;
		}
		switch (*++p) {
		case 'd':
			ival= va_arg(ap, int);
			if (ival < 0){
				*bp++= '-';
			     ival= -ival;
			}
			itoa (&bp, ival, 10);
			break;
			
        	case 'o':
			ival= va_arg(ap, int);
			if (ival < 0){
				*bp++= '-';
			     ival= -ival;
			}
			*bp++= '0';
			itoa (&bp, ival, 8);
			break;
			
		case 'x':
			ival= va_arg(ap, int);
			if (ival < 0){
			     *bp++= '-';
			     ival= -ival;
			}
			*bp++= '0';
			*bp++= 'x';
			itoa (&bp, ival, 16);
			break;
			
		case 'X':
			ival= va_arg(ap, int);
			bp += sprintf(bp, "0x%x", ival);
			break;
			
		case 'c':
			cval= va_arg(ap, int);
			*bp++= cval;
			break;
			
		case 'f':
			dval= va_arg(ap, double);
			if (dval < 0){
				*bp++= '-';
				dval= -dval;
			}
			if (dval >= 1.0)
				itoa (&bp, (int)dval, 10);
		    	else
				*bp++= '0';
			*bp++= '.';
			fract= (int)((dval- (double)(int)dval)*(double)(MAXFRACT));
            		itof(&bp, fract);
			break;
			
		case 's':
			for (sval = va_arg(ap, char *) ; *sval ; sval++ )
			    *bp++= *sval;
			break;
		}
	}
	va_end (ap);
        
	*bp= 0;
	len = (unsigned short)(bp - print_buf);
    

	BMTPutBytes.puBuffaddr = (kal_uint8 *)print_buf;
	BMTPutBytes.u2Length = len;
#if defined(DRV_DEBUG_DMA_MODE)
	UART_DMA_PutBytes(DBG_PRINT_PORT, BMTPutBytes.puBuffaddr, BMTPutBytes.u2Length);
#elif defined(DRV_DEBUG_BUFFER_MODE) || defined(DRV_DEBUG_BUFFER_DMA_MODE)
	BMT_PutBytes(DBG_PRINT_PORT, BMTPutBytes.puBuffaddr, BMTPutBytes.u2Length);
#else
	int i = (int)BMTPutBytes.u2Length;
	for(i = 0; i < len; i++)
	{
		dbg_UARTPutByte(print_buf[i]);		
	}
#endif


    kal_give_spinlock(dbg_print_lock);

	// Flush the data in uart buffer when exception occurs
	if(INT_QueryExceptionStatus()){
		UART_AssertWaitPrevDataSentOut(DBG_PRINT_PORT);

	}
#endif

}
#endif
char print_buf2[MAXCHARS];
void dbg_printWithTime(char *fmt,...)
{
#if !defined(__LTE_REMOVE_TEMPERAL__)

#if (!defined(IC_MODULE_TEST))
	int i;
	va_list ap;
	double dval;
	int ival;
	char *p, *sval;
	char *bp, cval;
	int fract;
	unsigned short len;

	bp= print_buf2;
	*bp= 0;

    kal_take_spinlock(dbg_print_lock, KAL_INFINITE_WAIT);
    
	va_start (ap, fmt);
	for(p= fmt; *p; p++)
	{
		if (*p != '%')
		{
			*bp++= *p;
			continue;
		}
		switch (*++p)
		{
			case 'd':
				ival= va_arg(ap, int);
				if (ival < 0)
				{
					*bp++= '-';
					ival= -ival;
				}
				itoa (&bp, ival, 10);
				break;

			case 'o':
				ival= va_arg(ap, int);
				if (ival < 0)
				{
					*bp++= '-';
					ival= -ival;
				}
				*bp++= '0';
				itoa (&bp, ival, 8);
				break;

			case 'x':
				ival= va_arg(ap, int);
				if(ival < 0)
				{
					*bp++= '-';
					ival= -ival;
				}
				*bp++= '0';
				*bp++= 'x';
				itoa (&bp, ival, 16);
				break;

			case 'X':
				ival= va_arg(ap, int);
				bp += sprintf(bp, "0x%x", ival);
				break;

			case 'c':
				cval= va_arg(ap, int);
				*bp++= cval;
				break;

			case 'f':
				dval= va_arg(ap, double);
				if(dval < 0)
				{
					*bp++= '-';
					dval= -dval;
				}
				if(dval >= 1.0)
					itoa (&bp, (int)dval, 10);
				else
					*bp++= '0';
				*bp++= '.';
				fract= (int)((dval- (double)(int)dval)*(double)(MAXFRACT));
				itof(&bp, fract);
				break;

			case 's':
				for(sval = va_arg(ap, char *) ; *sval ; sval++ )
					*bp++= *sval;
				break;
		}
	}
	*bp= 0;
	len = (unsigned short)(bp - print_buf2);
	

	for(i = 0; i < len; i++)
	{
		dbg_UARTPutByte(print_buf2[i]);		
	}
	
	va_end (ap);
	
    kal_give_spinlock(dbg_print_lock);
#endif
#endif /* !defined(__LTE_REMOVE_TEMPERAL__) */

}

void dbg_flush(void)
{
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
}


#else  //defined(__IC_SLT__)

void slt_dbg_flush(void){};

void slt_dbg_print(char *fmt,...)
{

	int i;
	va_list ap;
	double dval;
	int ival;
	char *p, *sval;
	char *bp, cval;
	int fract;
	unsigned short len;

	bp= print_buf;
	*bp= 0;
	
    kal_take_spinlock(dbg_print_lock, KAL_INFINITE_WAIT);
    
	va_start (ap, fmt);
	for(p= fmt; *p; p++)
	{
		if (*p != '%')
		{
			*bp++= *p;
			continue;
		}
		switch (*++p)
		{
			case 'd':
				ival= va_arg(ap, int);
				if (ival < 0)
				{
					*bp++= '-';
					ival= -ival;
				}
				itoa (&bp, ival, 10);
				break;

			case 'o':
				ival= va_arg(ap, int);
				if (ival < 0)
				{
					*bp++= '-';
					ival= -ival;
				}
				*bp++= '0';
				itoa (&bp, ival, 8);
				break;

			case 'x':
				ival= va_arg(ap, int);
				if(ival < 0)
				{
					*bp++= '-';
					ival= -ival;
				}
				*bp++= '0';
				*bp++= 'x';
				itoa (&bp, ival, 16);
				break;

			case 'X':
				ival= va_arg(ap, int);
				bp += sprintf(bp, "0x%x", ival);
				break;

			case 'c':
				cval= va_arg(ap, int);
				*bp++= cval;
				break;

			case 'f':
				dval= va_arg(ap, double);
				if(dval < 0)
				{
					*bp++= '-';
					dval= -dval;
				}
				if(dval >= 1.0)
					itoa (&bp, (int)dval, 10);
				else
					*bp++= '0';
				*bp++= '.';
				fract= (int)((dval- (double)(int)dval)*(double)(MAXFRACT));
				itof(&bp, fract);
				break;

			case 's':
				for(sval = va_arg(ap, char *) ; *sval ; sval++ )
					*bp++= *sval;
				break;
		}
	}
	*bp= 0;
	len = (unsigned short)(bp - print_buf);
    
	for(i = 0; i < len; i++)
	{
		dbg_UARTPutByte(print_buf[i]);		
	}
	
	va_end (ap);
	
    kal_give_spinlock(dbg_print_lock);

}
#endif

#else
void dbg_printWithTime(char *fmt,...){}
void dbg_print(char *fmt,...){}
void dbg_flush(void){}
void dbg_uart_init(void){}
void slt_dbg_flush(void){};
void slt_dbg_print(char *fmt,...){}

#endif
