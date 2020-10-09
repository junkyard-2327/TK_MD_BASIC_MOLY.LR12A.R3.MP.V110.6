#ifndef __MAGIC_PATTERN__
#define __MAGIC_PATTERN__

/* Magic pattern definition */                         
#define CMIF_MD32_PATTERN_BOOTUP_READY_LOWER           0x32FF
#define CMIF_MD32_PATTERN_BOOTUP_READY_UPPER           0x32FF
                                                       
#define CMIF_MD32_PATTERN_WFI_SEND_LOWER               0x32DE 
#define CMIF_MD32_PATTERN_WFI_SEND_UPPER               0x32DE 

                                                       
#define CMIF_MD32_PATTERN_EXCEPTION_LOWER              0xFD32
#define CMIF_MD32_PATTERN_EXCEPTION_UPPER              0xFD32
                                                       
#define CMIF_MD32_PATTERN_BOOTUP_READY                 ((CMIF_MD32_PATTERN_BOOTUP_READY_UPPER << 16) | CMIF_MD32_PATTERN_BOOTUP_READY_LOWER) 
#define CMIF_MD32_PATTERN_WFI_SEND                     ((CMIF_MD32_PATTERN_WFI_SEND_UPPER << 16) | CMIF_MD32_PATTERN_WFI_SEND_LOWER)  
#define CMIF_MD32_BACKUP_READY                         CMIF_MD32_PATTERN_WFI_SEND
#define CMIF_MD32_PATTERN_EXCEPTION                    ((CMIF_MD32_PATTERN_EXCEPTION_UPPER << 16) | CMIF_MD32_PATTERN_EXCEPTION_LOWER)  
                                                       
#define CMIF_SS_EX_CMIF_FILENAME_SIZE                  64 

#define CMIF_SS_MEM_ZI_INFO_TABLE_SIZE                 4
                                                      
/* CMIF MD32 Stack unwinding enable/disable pattern */

#define CMIF_MD32_PATTERN_UNWINDING_ENABLE             0xAD32AD32
#define CMIF_MD32_PATTERN_UNWINDING_DISABLE            0xDEADBEEF

#define CMIF_MD32_PATTERN_MDL_FLUSH_DONE               0xDD32
#define CMIF_MD32_PATTERN_MDL_LOGGING                  0xFE32
#define CMIF_MD32_PATTERN_CMIF_FINISH_FILL             0xFD32

#define CMIF_MCU_PATTERN_EMI_FLUSH_DONE                (0xEE320000)

#define CMIF_MD32_PATTERN_MASK                         0xFFFF
#define CMIF_MCU_PATTERN_MASK                          (0xFFFF0000) 

#define CMIF_SS_M2C_BRP_U4G_HANDSHAKE_ISR_NUM          30
#define CMIF_SS_C2M_BRP_U4G_HANDSHAKE_ISR_NUM          30

#endif // __MAGIC_PATTERN__

