#ifndef __UART_SW_INT_H__
#define __UART_SW_INT_H__

        /*                                                   
        * NoteXXX: Below is the sample code to set UART
        *          UART clock is MPLL clock / 8.         
        *          baud rate is 115200.                  
        *          Thus UART1_DLL = 0xE.                 
        *          You should specify UART1_DLL based on 
        *              divisor(DLH+DLL) = (UART_CLOCK_RATE)
        */
        
        
#define UART_SETUP(_n, _divL, _divH)            \
    do {                                                                  \
        volatile kal_uint16 tmp;                                          \
                                                                          \
        /* Setup 8-N-1,(UART_WLS_8 | UART_NONE_PARITY | UART_ */          \
        UART_WriteReg(UART##_n##_LCR,0x0003);                                       \
                                                                          \
        /* divisor: 8 */                                                  \
        UART_WriteReg(UART##_n##_HIGHSPEED,0x0001);                                 \
                                                                          \
        /* Set BaudRate */                                                \
        tmp = UART_ReadReg(UART##_n##_LCR);                                         \
        tmp |= UART_LCR_DLAB;                                             \
        UART_WriteReg(UART##_n##_LCR, tmp);                                         \
                                                                          \
        /* MCU_CLK  491520000(491.52MHz) */                               \
        /* UART_CLK (MCU_CLK / 8) */                                      \
                                                                          \
        /* divisorL = ((UART_CLK / 8) / 115200) & 0xFF; */                \
        /* divisorH = ((UART_CLK / 8) / 115200) >> 8; */                  \
                                                                          \
        /* UART_WriteReg(_DLL, divisorL); */                              \
        UART_WriteReg(UART##_n##_DLL, (_divL));                                     \
        /* UART_WriteReg(_DLM, divisorH); */                              \
        UART_WriteReg(UART##_n##_DLM, (_divH));                                     \
                                                                          \
        UART_WriteReg(UART##_n##_LCR, 0x0003);                                      \
        /* Enable Fifo, and Rx Trigger level = 16bytes, flush */          \
        /* (UART_FCR_FIFOEN | UART_FCR_4Byte_Level | UART_FCR */          \
        UART_WriteReg(UART##_n##_FCR, 0x0047);                                      \
                                                                          \
        /* DTR , RTS is on, data will be coming,Output2 is hi */          \
        UART_WriteReg(UART##_n##_MCR,(kal_uint16)0x0003);                           \
                                                                          \
        /* _IER, enable RDA, RLS, MS , disable THR inter */               \
        /* UART_WriteReg(UART##_n##_IER, UART_IER_RDA); */                          \
        UART_WriteReg(UART##_n##_IER, IER_HW_NORMALINTS);                           \
    } while(0)

#endif /* __UART_SW_INT_H__ */
