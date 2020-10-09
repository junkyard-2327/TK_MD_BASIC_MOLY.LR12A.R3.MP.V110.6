/*******************************************************************************
*   please DO NOT include this file
*   this file is for usip/dsp cmif driver include only 
********************************************************************************/

#ifndef __XMIF_COMMON_DEF_H__
#define __XMIF_COMMON_DEF_H__

#define CMIF_M2C_WFI_RAKE_INTERRUPT_STATUS_OFFSET    (0x00)
#define CMIF_M2C_WFI_RAKE_INTERRUPT_MASK_OFFSET      (0x04)
#define CMIF_M2C_WFI_RAKE_INTERRUPT_CLEAN_OFFSET     (0x04)
#define CMIF_M2C_CTI_EVENT_OFFSET                    (0x08)

/* MCU, Rake use */
#define CMIF_C2M_U3G_RAKE_INTERRUPT_STATUS_OFFSET    (0x0C)
#define CMIF_C2M_U3G_RAKE_INTERRUPT_SET_OFFSET       (0x10)
#define CMIF_C2M_U3G_RAKE_INTERRUPT_CLEAN_OFFSET     (0x10)

#define CMIF_M2C_U3G_RAKE_INTERRUPT_STATUS_OFFSET    (0x14)
#define CMIF_M2C_U3G_RAKE_INTERRUPT_SET_OFFSET       (0x18)
#define CMIF_M2C_U3G_RAKE_INTERRUPT_CLEAN_OFFSET     (0x18)

#define CMIF_M2C_FPC_1X_RAKE_INTERRUPT_STATUS_OFFSET (0x1C)
#define CMIF_M2C_FPC_1X_RAKE_INTERRUPT_SET_OFFSET    (0x20)
#define CMIF_M2C_FPC_1X_RAKE_INTERRUPT_CLEAN_OFFSET  (0x20)

#define CMIF_M2C_DO_PD_RAKE_INTERRUPT_STATUS_OFFSET  (0x24)
#define CMIF_M2C_DO_PD_RAKE_INTERRUPT_SET_OFFSET     (0x28)
#define CMIF_M2C_DO_PD_RAKE_INTERRUPT_CLEAN_OFFSET   (0x28)

#define CMIF_M2C_FOE_1X_RAKE_INTERRUPT_STATUS_OFFSET (0x2C)
#define CMIF_M2C_FOE_1X_RAKE_INTERRUPT_SET_OFFSET    (0x30)
#define CMIF_M2C_FOE_1X_RAKE_INTERRUPT_CLEAN_OFFSET  (0x30)

/* USIP, Rake use */
#define UMIF_U2M_INN_RAKE_INTERRUPT_STATUS_OFFSET    (0x34)
#define UMIF_U2M_INN_RAKE_INTERRUPT_SET_OFFSET       (0x38)
#define UMIF_U2M_INN_RAKE_INTERRUPT_CLEAN_OFFSET     (0x38)

#define UMIF_M2U_INN_RAKE_INTERRUPT_STATUS_OFFSET    (0x3C)
#define UMIF_M2U_INN_RAKE_INTERRUPT_SET_OFFSET       (0x40)
#define UMIF_M2U_INN_RAKE_INTERRUPT_CLEAN_OFFSET     (0x40)

#define UMIF_U2M_OUT_RAKE_INTERRUPT_STATUS_OFFSET    (0x44)
#define UMIF_U2M_OUT_RAKE_INTERRUPT_SET_OFFSET       (0x48)
#define UMIF_U2M_OUT_RAKE_INTERRUPT_CLEAN_OFFSET     (0x48)

#define UMIF_M2U_OUT_RAKE_INTERRUPT_STATUS_OFFSET    (0x4C)
#define UMIF_M2U_OUT_RAKE_INTERRUPT_SET_OFFSET       (0x50)
#define UMIF_M2U_OUT_RAKE_INTERRUPT_CLEAN_OFFSET     (0x50)

#define XMIF_REGISTER_OFFSET                         (0x54)

#define XMIF_NUM_INTERRUPT_SOURCES                   (32)

// Define status register type
typedef struct{
    kal_uint32 mask31_0;
    kal_uint32 *status_reg_addr;
} CMIF_Mask_t;

#define CMIF_TRUE                           KAL_TRUE
#define CMIF_FALSE                          KAL_FALSE

#endif /*  __XMIF_COMMON_DEF_H__ */

