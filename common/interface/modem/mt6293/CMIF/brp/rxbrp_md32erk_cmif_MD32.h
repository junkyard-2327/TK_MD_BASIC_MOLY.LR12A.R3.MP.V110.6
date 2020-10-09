// Auto_Gen----------------- rxbrp_md32erk_cmif_MD32 Register Definition -------------------

#ifndef _rxbrp_md32erk_cmif_MD32_H_
#define _rxbrp_md32erk_cmif_MD32_H_

// Auto_Gen----------------- rxbrp_md32erk_cmif_MD32 Histories -------------------
// Revision			Date			Author			Description
// 0.1			2013/11/7			MingChia Tsai			draft version of rakesys cdif			
// 0.2			2014/1/21			Playpony Ma			Add event for CTI			
// 0.3			2014/2/17			Playpony Ma			1. Separate IRQ to IRQ_STA and IRQ_SET/IRQ_CLR2. Add M2C_WFI_IRQ_STA and M2C_WFI_IRQ_MASK			
// 0.4			2014/3/6			Playpony Ma			1. Release template 2. Add rxbrp irq event for first released			

#include "CMIF_LTE_BASE.h"
// ----------------- rxbrp_md32erk_cmif_MD32 Register Definition -------------------
typedef volatile struct
{
    UINT32 M2C_WFI_IRQ_STA_REG;                       // 8000
    UINT32 M2C_WFI_IRQ_MASK_REG;                      // 8004
    UINT32 M2CTI_EVENT_REG;                           // 8008
    UINT32 C2M_U3G_IRQ_STA_REG;                       // 800C
    UINT32 C2M_U3G_IRQ_CLR_REG;                       // 8010
    UINT32 C2M_U4G_IRQ_STA_REG;                       // 8014
    UINT32 C2M_U4G_IRQ_CLR_REG;                       // 8018
    UINT32 M2C_U3G_IRQ_STA_REG;                       // 801C
    UINT32 M2C_U3G_IRQ_SET_REG;                       // 8020
    UINT32 M2C_U4G_IRQ_STA_REG;                       // 8024
    UINT32 M2C_U4G_IRQ_SET_REG;                       // 8028
    UINT32 RESERVED_OS_LOG_REG[64];                   // 802C..8128
}rxbrp_md32erk_cmif_MD32_REGS, *Prxbrp_md32erk_cmif_MD32_REGS;

/*
************************************************************************************************************************************************************************************************************************************************************
* Register : M2C_WFI_IRQ_STA , Description : M2C_WFI_IRQ STATUS
*   M2C_WFI_IRQ_STA : Bit 0 ~ 0. Description~ M2C_WFI_IRQ_STATUS = M2C_WFI_IRQ_MASK & MD32_CORE_HALT.. MD32 write M2C_WFI_IRQ_MASK to enable the WFI_IRQ for L1core. WFI_IRQ will be happened once the MD32 core enter WFI mode. If it is not zero, M2C_WFI_IRQ is always triggered. 
************************************************************************************************************************************************************************************************************************************************************
*/
#define M2C_WFI_IRQ_STA                                        (rxbrp_md32erk_cmif_MD32_ADDR + 0x0000)
    #define LB_M2C_WFI_IRQ_STA_M2C_WFI_IRQ_STA                     0x0000      // M2C_WFI_IRQ_STA LSB
    #define MB_M2C_WFI_IRQ_STA_M2C_WFI_IRQ_STA                     0x0000      // M2C_WFI_IRQ_STA MSB
    #define MK_M2C_WFI_IRQ_STA_M2C_WFI_IRQ_STA                     0x0001      // M2C_WFI_IRQ_STA MASK
    #define A4_M2C_WFI_IRQ_STA_M2C_WFI_IRQ_STA                     (rxbrp_md32erk_cmif_MD32_ADDR + 0x0000)

/*
************************************************************************************************************************************************************************************************************************************************************
* Register : M2C_WFI_IRQ_MASK , Description : M2C_WFI_IRQ MASK REG
*   M2C_WFI_IRQ_MASK : Bit 0 ~ 0. Description~ 1) MD32 write M2C_WFI_IRQ_MASK  as 1 to enable the WFI_IRQ for L1core. . . 2) L1CORE sets M2C_WFI_IRQ_CLR to clear M2C_WFI_IRQ_MASK, so M2C_WFI_IRQ_STA is also cleaed as 0 
************************************************************************************************************************************************************************************************************************************************************
*/
#define M2C_WFI_IRQ_MASK                                       (rxbrp_md32erk_cmif_MD32_ADDR + 0x0004)
    #define LB_M2C_WFI_IRQ_MASK_M2C_WFI_IRQ_MASK                   0x0000      // M2C_WFI_IRQ_MASK LSB
    #define MB_M2C_WFI_IRQ_MASK_M2C_WFI_IRQ_MASK                   0x0000      // M2C_WFI_IRQ_MASK MSB
    #define MK_M2C_WFI_IRQ_MASK_M2C_WFI_IRQ_MASK                   0x0001      // M2C_WFI_IRQ_MASK MASK
    #define A4_M2C_WFI_IRQ_MASK_M2C_WFI_IRQ_MASK                   (rxbrp_md32erk_cmif_MD32_ADDR + 0x0004)

/*
************************************************************************************************************************************************************************************************************************************************************
* Register : M2CTI_EVENT , Description : DSP to CTI event
*   CTI_EVENT : Bit 0 ~ 0. Description~ DSP trigger event to CTI ( cross trigger matrix) DSP write 1 set, DSP write 1 clear 
************************************************************************************************************************************************************************************************************************************************************
*/
#define M2CTI_EVENT                                            (rxbrp_md32erk_cmif_MD32_ADDR + 0x0008)
    #define LB_M2CTI_EVENT_CTI_EVENT                               0x0000      // CTI_EVENT LSB
    #define MB_M2CTI_EVENT_CTI_EVENT                               0x0000      // CTI_EVENT MSB
    #define MK_M2CTI_EVENT_CTI_EVENT                               0x0001      // CTI_EVENT MASK
    #define A4_M2CTI_EVENT_CTI_EVENT                               (rxbrp_md32erk_cmif_MD32_ADDR + 0x0008)

/*
************************************************************************************************************************************************************************************************************************************************************
* Register : C2M_U3G_IRQ_STA , Description : C2M_U3G_IRQ STATUS
*   BRP_SLEEP_POWERDOWN : Bit 31 ~ 31. Description~ sleep mode for power down 
*   BRP_SLEEP_DORMANT : Bit 30 ~ 30. Description~ sleep mode for dormant 
*   RESERVED_3 : Bit 25 ~ 29. Description~  
*   BCHSFN_START : Bit 24 ~ 24. Description~  
*   RESERVED_2 : Bit 22 ~ 23. Description~  
*   CC1_GUIDED_CFG_OK : Bit 21 ~ 21. Description~  
*   CC0_GUIDED_CFG_OK : Bit 20 ~ 20. Description~  
*   CC1_CFG_OK : Bit 19 ~ 19. Description~  
*   CC0_CFG_OK : Bit 18 ~ 18. Description~  
*   CC1_START : Bit 17 ~ 17. Description~  
*   CC0_START : Bit 16 ~ 16. Description~  
*   RESERVED_1 : Bit 5 ~ 15. Description~  
*   HSPA_HARQ_RESTART : Bit 4 ~ 4. Description~  
*   HSPA_HARQ : Bit 3 ~ 3. Description~  
*   HSPA_NC_SCCH : Bit 2 ~ 2. Description~  
*   HSPA_AGCH : Bit 1 ~ 1. Description~  
*   HSPA_SERV_SCCH : Bit 0 ~ 0. Description~ L1 write C2M_U3G_IRQ_SET  to set this register.. MD32 write C2M_U3G_IRQ_CLR to clear this register.. If it is not zero, C2M_U3G_IRQ is always triggered. 
************************************************************************************************************************************************************************************************************************************************************
*/
#define C2M_U3G_IRQ_STA                                        (rxbrp_md32erk_cmif_MD32_ADDR + 0x000C)
    #define LB_C2M_U3G_IRQ_STA_BRP_SLEEP_POWERDOWN                 0x001F      // BRP_SLEEP_POWERDOWN LSB
    #define MB_C2M_U3G_IRQ_STA_BRP_SLEEP_POWERDOWN                 0x001F      // BRP_SLEEP_POWERDOWN MSB
    #define MK_C2M_U3G_IRQ_STA_BRP_SLEEP_POWERDOWN                 0x80000000      // BRP_SLEEP_POWERDOWN MASK
    #define LB_C2M_U3G_IRQ_STA_BRP_SLEEP_DORMANT                   0x001E      // BRP_SLEEP_DORMANT LSB
    #define MB_C2M_U3G_IRQ_STA_BRP_SLEEP_DORMANT                   0x001E      // BRP_SLEEP_DORMANT MSB
    #define MK_C2M_U3G_IRQ_STA_BRP_SLEEP_DORMANT                   0x40000000      // BRP_SLEEP_DORMANT MASK
    #define LB_C2M_U3G_IRQ_STA_RESERVED_3                          0x0019      // RESERVED_3 LSB
    #define MB_C2M_U3G_IRQ_STA_RESERVED_3                          0x001D      // RESERVED_3 MSB
    #define MK_C2M_U3G_IRQ_STA_RESERVED_3                          0x3E000000      // RESERVED_3 MASK
    #define LB_C2M_U3G_IRQ_STA_BCHSFN_START                        0x0018      // BCHSFN_START LSB
    #define MB_C2M_U3G_IRQ_STA_BCHSFN_START                        0x0018      // BCHSFN_START MSB
    #define MK_C2M_U3G_IRQ_STA_BCHSFN_START                        0x1000000      // BCHSFN_START MASK
    #define LB_C2M_U3G_IRQ_STA_RESERVED_2                          0x0016      // RESERVED_2 LSB
    #define MB_C2M_U3G_IRQ_STA_RESERVED_2                          0x0017      // RESERVED_2 MSB
    #define MK_C2M_U3G_IRQ_STA_RESERVED_2                          0xC00000      // RESERVED_2 MASK
    #define LB_C2M_U3G_IRQ_STA_CC1_GUIDED_CFG_OK                   0x0015      // CC1_GUIDED_CFG_OK LSB
    #define MB_C2M_U3G_IRQ_STA_CC1_GUIDED_CFG_OK                   0x0015      // CC1_GUIDED_CFG_OK MSB
    #define MK_C2M_U3G_IRQ_STA_CC1_GUIDED_CFG_OK                   0x200000      // CC1_GUIDED_CFG_OK MASK
    #define LB_C2M_U3G_IRQ_STA_CC0_GUIDED_CFG_OK                   0x0014      // CC0_GUIDED_CFG_OK LSB
    #define MB_C2M_U3G_IRQ_STA_CC0_GUIDED_CFG_OK                   0x0014      // CC0_GUIDED_CFG_OK MSB
    #define MK_C2M_U3G_IRQ_STA_CC0_GUIDED_CFG_OK                   0x100000      // CC0_GUIDED_CFG_OK MASK
    #define LB_C2M_U3G_IRQ_STA_CC1_CFG_OK                          0x0013      // CC1_CFG_OK LSB
    #define MB_C2M_U3G_IRQ_STA_CC1_CFG_OK                          0x0013      // CC1_CFG_OK MSB
    #define MK_C2M_U3G_IRQ_STA_CC1_CFG_OK                          0x80000      // CC1_CFG_OK MASK
    #define LB_C2M_U3G_IRQ_STA_CC0_CFG_OK                          0x0012      // CC0_CFG_OK LSB
    #define MB_C2M_U3G_IRQ_STA_CC0_CFG_OK                          0x0012      // CC0_CFG_OK MSB
    #define MK_C2M_U3G_IRQ_STA_CC0_CFG_OK                          0x40000      // CC0_CFG_OK MASK
    #define LB_C2M_U3G_IRQ_STA_CC1_START                           0x0011      // CC1_START LSB
    #define MB_C2M_U3G_IRQ_STA_CC1_START                           0x0011      // CC1_START MSB
    #define MK_C2M_U3G_IRQ_STA_CC1_START                           0x20000      // CC1_START MASK
    #define LB_C2M_U3G_IRQ_STA_CC0_START                           0x0010      // CC0_START LSB
    #define MB_C2M_U3G_IRQ_STA_CC0_START                           0x0010      // CC0_START MSB
    #define MK_C2M_U3G_IRQ_STA_CC0_START                           0x10000      // CC0_START MASK
    #define LB_C2M_U3G_IRQ_STA_RESERVED_1                          0x0005      // RESERVED_1 LSB
    #define MB_C2M_U3G_IRQ_STA_RESERVED_1                          0x000F      // RESERVED_1 MSB
    #define MK_C2M_U3G_IRQ_STA_RESERVED_1                          0xFFE0      // RESERVED_1 MASK
    #define LB_C2M_U3G_IRQ_STA_HSPA_HARQ_RESTART                   0x0004      // HSPA_HARQ_RESTART LSB
    #define MB_C2M_U3G_IRQ_STA_HSPA_HARQ_RESTART                   0x0004      // HSPA_HARQ_RESTART MSB
    #define MK_C2M_U3G_IRQ_STA_HSPA_HARQ_RESTART                   0x0010      // HSPA_HARQ_RESTART MASK
    #define LB_C2M_U3G_IRQ_STA_HSPA_HARQ                           0x0003      // HSPA_HARQ LSB
    #define MB_C2M_U3G_IRQ_STA_HSPA_HARQ                           0x0003      // HSPA_HARQ MSB
    #define MK_C2M_U3G_IRQ_STA_HSPA_HARQ                           0x0008      // HSPA_HARQ MASK
    #define LB_C2M_U3G_IRQ_STA_HSPA_NC_SCCH                        0x0002      // HSPA_NC_SCCH LSB
    #define MB_C2M_U3G_IRQ_STA_HSPA_NC_SCCH                        0x0002      // HSPA_NC_SCCH MSB
    #define MK_C2M_U3G_IRQ_STA_HSPA_NC_SCCH                        0x0004      // HSPA_NC_SCCH MASK
    #define LB_C2M_U3G_IRQ_STA_HSPA_AGCH                           0x0001      // HSPA_AGCH LSB
    #define MB_C2M_U3G_IRQ_STA_HSPA_AGCH                           0x0001      // HSPA_AGCH MSB
    #define MK_C2M_U3G_IRQ_STA_HSPA_AGCH                           0x0002      // HSPA_AGCH MASK
    #define LB_C2M_U3G_IRQ_STA_HSPA_SERV_SCCH                      0x0000      // HSPA_SERV_SCCH LSB
    #define MB_C2M_U3G_IRQ_STA_HSPA_SERV_SCCH                      0x0000      // HSPA_SERV_SCCH MSB
    #define MK_C2M_U3G_IRQ_STA_HSPA_SERV_SCCH                      0x0001      // HSPA_SERV_SCCH MASK

/*
************************************************************************************************************************************************************************************************************************************************************
* Register : C2M_U3G_IRQ_CLR , Description : C2M_U3G_IRQ CLR REG for CPU
*   BRP_SLEEP_POWERDOWN : Bit 31 ~ 31. Description~ sleep mode for power down 
*   BRP_SLEEP_DORMANT : Bit 30 ~ 30. Description~ sleep mode for dormant 
*   RESERVED_3 : Bit 25 ~ 29. Description~  
*   BCHSFN_START : Bit 24 ~ 24. Description~  
*   RESERVED_2 : Bit 22 ~ 23. Description~  
*   CC1_GUIDED_CFG_OK : Bit 21 ~ 21. Description~  
*   CC0_GUIDED_CFG_OK : Bit 20 ~ 20. Description~  
*   CC1_CFG_OK : Bit 19 ~ 19. Description~  
*   CC0_CFG_OK : Bit 18 ~ 18. Description~  
*   CC1_START : Bit 17 ~ 17. Description~  
*   CC0_START : Bit 16 ~ 16. Description~  
*   RESERVED_1 : Bit 5 ~ 15. Description~  
*   HSPA_HARQ_RESTART : Bit 4 ~ 4. Description~  
*   HSPA_HARQ : Bit 3 ~ 3. Description~  
*   HSPA_NC_SCCH : Bit 2 ~ 2. Description~  
*   HSPA_AGCH : Bit 1 ~ 1. Description~  
*   HSPA_SERV_SCCH : Bit 0 ~ 0. Description~  
************************************************************************************************************************************************************************************************************************************************************
*/
#define C2M_U3G_IRQ_CLR                                        (rxbrp_md32erk_cmif_MD32_ADDR + 0x0010)
    #define LB_C2M_U3G_IRQ_CLR_BRP_SLEEP_POWERDOWN                 0x001F      // BRP_SLEEP_POWERDOWN LSB
    #define MB_C2M_U3G_IRQ_CLR_BRP_SLEEP_POWERDOWN                 0x001F      // BRP_SLEEP_POWERDOWN MSB
    #define MK_C2M_U3G_IRQ_CLR_BRP_SLEEP_POWERDOWN                 0x80000000      // BRP_SLEEP_POWERDOWN MASK
    #define LB_C2M_U3G_IRQ_CLR_BRP_SLEEP_DORMANT                   0x001E      // BRP_SLEEP_DORMANT LSB
    #define MB_C2M_U3G_IRQ_CLR_BRP_SLEEP_DORMANT                   0x001E      // BRP_SLEEP_DORMANT MSB
    #define MK_C2M_U3G_IRQ_CLR_BRP_SLEEP_DORMANT                   0x40000000      // BRP_SLEEP_DORMANT MASK
    #define LB_C2M_U3G_IRQ_CLR_RESERVED_3                          0x0019      // RESERVED_3 LSB
    #define MB_C2M_U3G_IRQ_CLR_RESERVED_3                          0x001D      // RESERVED_3 MSB
    #define MK_C2M_U3G_IRQ_CLR_RESERVED_3                          0x3E000000      // RESERVED_3 MASK
    #define LB_C2M_U3G_IRQ_CLR_BCHSFN_START                        0x0018      // BCHSFN_START LSB
    #define MB_C2M_U3G_IRQ_CLR_BCHSFN_START                        0x0018      // BCHSFN_START MSB
    #define MK_C2M_U3G_IRQ_CLR_BCHSFN_START                        0x1000000      // BCHSFN_START MASK
    #define LB_C2M_U3G_IRQ_CLR_RESERVED_2                          0x0016      // RESERVED_2 LSB
    #define MB_C2M_U3G_IRQ_CLR_RESERVED_2                          0x0017      // RESERVED_2 MSB
    #define MK_C2M_U3G_IRQ_CLR_RESERVED_2                          0xC00000      // RESERVED_2 MASK
    #define LB_C2M_U3G_IRQ_CLR_CC1_GUIDED_CFG_OK                   0x0015      // CC1_GUIDED_CFG_OK LSB
    #define MB_C2M_U3G_IRQ_CLR_CC1_GUIDED_CFG_OK                   0x0015      // CC1_GUIDED_CFG_OK MSB
    #define MK_C2M_U3G_IRQ_CLR_CC1_GUIDED_CFG_OK                   0x200000      // CC1_GUIDED_CFG_OK MASK
    #define LB_C2M_U3G_IRQ_CLR_CC0_GUIDED_CFG_OK                   0x0014      // CC0_GUIDED_CFG_OK LSB
    #define MB_C2M_U3G_IRQ_CLR_CC0_GUIDED_CFG_OK                   0x0014      // CC0_GUIDED_CFG_OK MSB
    #define MK_C2M_U3G_IRQ_CLR_CC0_GUIDED_CFG_OK                   0x100000      // CC0_GUIDED_CFG_OK MASK
    #define LB_C2M_U3G_IRQ_CLR_CC1_CFG_OK                          0x0013      // CC1_CFG_OK LSB
    #define MB_C2M_U3G_IRQ_CLR_CC1_CFG_OK                          0x0013      // CC1_CFG_OK MSB
    #define MK_C2M_U3G_IRQ_CLR_CC1_CFG_OK                          0x80000      // CC1_CFG_OK MASK
    #define LB_C2M_U3G_IRQ_CLR_CC0_CFG_OK                          0x0012      // CC0_CFG_OK LSB
    #define MB_C2M_U3G_IRQ_CLR_CC0_CFG_OK                          0x0012      // CC0_CFG_OK MSB
    #define MK_C2M_U3G_IRQ_CLR_CC0_CFG_OK                          0x40000      // CC0_CFG_OK MASK
    #define LB_C2M_U3G_IRQ_CLR_CC1_START                           0x0011      // CC1_START LSB
    #define MB_C2M_U3G_IRQ_CLR_CC1_START                           0x0011      // CC1_START MSB
    #define MK_C2M_U3G_IRQ_CLR_CC1_START                           0x20000      // CC1_START MASK
    #define LB_C2M_U3G_IRQ_CLR_CC0_START                           0x0010      // CC0_START LSB
    #define MB_C2M_U3G_IRQ_CLR_CC0_START                           0x0010      // CC0_START MSB
    #define MK_C2M_U3G_IRQ_CLR_CC0_START                           0x10000      // CC0_START MASK
    #define LB_C2M_U3G_IRQ_CLR_RESERVED_1                          0x0005      // RESERVED_1 LSB
    #define MB_C2M_U3G_IRQ_CLR_RESERVED_1                          0x000F      // RESERVED_1 MSB
    #define MK_C2M_U3G_IRQ_CLR_RESERVED_1                          0xFFE0      // RESERVED_1 MASK
    #define LB_C2M_U3G_IRQ_CLR_HSPA_HARQ_RESTART                   0x0004      // HSPA_HARQ_RESTART LSB
    #define MB_C2M_U3G_IRQ_CLR_HSPA_HARQ_RESTART                   0x0004      // HSPA_HARQ_RESTART MSB
    #define MK_C2M_U3G_IRQ_CLR_HSPA_HARQ_RESTART                   0x0010      // HSPA_HARQ_RESTART MASK
    #define LB_C2M_U3G_IRQ_CLR_HSPA_HARQ                           0x0003      // HSPA_HARQ LSB
    #define MB_C2M_U3G_IRQ_CLR_HSPA_HARQ                           0x0003      // HSPA_HARQ MSB
    #define MK_C2M_U3G_IRQ_CLR_HSPA_HARQ                           0x0008      // HSPA_HARQ MASK
    #define LB_C2M_U3G_IRQ_CLR_HSPA_NC_SCCH                        0x0002      // HSPA_NC_SCCH LSB
    #define MB_C2M_U3G_IRQ_CLR_HSPA_NC_SCCH                        0x0002      // HSPA_NC_SCCH MSB
    #define MK_C2M_U3G_IRQ_CLR_HSPA_NC_SCCH                        0x0004      // HSPA_NC_SCCH MASK
    #define LB_C2M_U3G_IRQ_CLR_HSPA_AGCH                           0x0001      // HSPA_AGCH LSB
    #define MB_C2M_U3G_IRQ_CLR_HSPA_AGCH                           0x0001      // HSPA_AGCH MSB
    #define MK_C2M_U3G_IRQ_CLR_HSPA_AGCH                           0x0002      // HSPA_AGCH MASK
    #define LB_C2M_U3G_IRQ_CLR_HSPA_SERV_SCCH                      0x0000      // HSPA_SERV_SCCH LSB
    #define MB_C2M_U3G_IRQ_CLR_HSPA_SERV_SCCH                      0x0000      // HSPA_SERV_SCCH MSB
    #define MK_C2M_U3G_IRQ_CLR_HSPA_SERV_SCCH                      0x0001      // HSPA_SERV_SCCH MASK

/*
************************************************************************************************************************************************************************************************************************************************************
* Register : C2M_U4G_IRQ_STA , Description : C2M_U4G_IRQ STATUS
*   LTE_SLEEP_POWERDOWN : Bit 1 ~ 1. Description~  
*   LTE_SLEEP_DORMANT : Bit 0 ~ 0. Description~ L1 write C2M_U4G_IRQ_SET  to set this register.. MD32 write C2M_U4G_IRQ_CLR to clear this register.. If it is not zero, C2M_U4G_IRQ is always triggered. 
************************************************************************************************************************************************************************************************************************************************************
*/
#define C2M_U4G_IRQ_STA                                        (rxbrp_md32erk_cmif_MD32_ADDR + 0x0014)
    #define LB_C2M_U4G_IRQ_STA_LTE_SLEEP_POWERDOWN                 0x0001      // LTE_SLEEP_POWERDOWN LSB
    #define MB_C2M_U4G_IRQ_STA_LTE_SLEEP_POWERDOWN                 0x0001      // LTE_SLEEP_POWERDOWN MSB
    #define MK_C2M_U4G_IRQ_STA_LTE_SLEEP_POWERDOWN                 0x0002      // LTE_SLEEP_POWERDOWN MASK
    #define LB_C2M_U4G_IRQ_STA_LTE_SLEEP_DORMANT                   0x0000      // LTE_SLEEP_DORMANT LSB
    #define MB_C2M_U4G_IRQ_STA_LTE_SLEEP_DORMANT                   0x0000      // LTE_SLEEP_DORMANT MSB
    #define MK_C2M_U4G_IRQ_STA_LTE_SLEEP_DORMANT                   0x0001      // LTE_SLEEP_DORMANT MASK

/*
************************************************************************************************************************************************************************************************************************************************************
* Register : C2M_U4G_IRQ_CLR , Description : C2M_U4G_IRQ CLR REG for CPU
*   LTE_SLEEP_POWERDOWN : Bit 1 ~ 1. Description~  
*   LTE_SLEEP_DORMANT : Bit 0 ~ 0. Description~  
************************************************************************************************************************************************************************************************************************************************************
*/
#define C2M_U4G_IRQ_CLR                                        (rxbrp_md32erk_cmif_MD32_ADDR + 0x0018)
    #define LB_C2M_U4G_IRQ_CLR_LTE_SLEEP_POWERDOWN                 0x0001      // LTE_SLEEP_POWERDOWN LSB
    #define MB_C2M_U4G_IRQ_CLR_LTE_SLEEP_POWERDOWN                 0x0001      // LTE_SLEEP_POWERDOWN MSB
    #define MK_C2M_U4G_IRQ_CLR_LTE_SLEEP_POWERDOWN                 0x0002      // LTE_SLEEP_POWERDOWN MASK
    #define LB_C2M_U4G_IRQ_CLR_LTE_SLEEP_DORMANT                   0x0000      // LTE_SLEEP_DORMANT LSB
    #define MB_C2M_U4G_IRQ_CLR_LTE_SLEEP_DORMANT                   0x0000      // LTE_SLEEP_DORMANT MSB
    #define MK_C2M_U4G_IRQ_CLR_LTE_SLEEP_DORMANT                   0x0001      // LTE_SLEEP_DORMANT MASK

/*
************************************************************************************************************************************************************************************************************************************************************
* Register : M2C_U3G_IRQ_STA , Description : M2C_U3G_IRQ STATUS
*   HSPA_DSCH_LESSMODE_DONE : Bit 31 ~ 31. Description~  
*   HSPA_SC2ND_DSCH_SUBF4_DONE : Bit 30 ~ 30. Description~ DSCH of the 2nd secondary cell subframe 4 decode done 
*   HSPA_SC2ND_DSCH_SUBF3_DONE : Bit 29 ~ 29. Description~ DSCH of the 2nd secondary cell subframe 3 decode done 
*   HSPA_SC2ND_DSCH_SUBF2_DONE : Bit 28 ~ 28. Description~ DSCH of the 2nd secondary cell subframe 2 decode done 
*   HSPA_SC2ND_DSCH_SUBF1_DONE : Bit 27 ~ 27. Description~ DSCH of the 2nd secondary cell subframe 1 decode done 
*   HSPA_SC2ND_DSCH_SUBF0_DONE : Bit 26 ~ 26. Description~ DSCH of the 2nd secondary cell subframe 0 decode done 
*   HSPA_DC_DSCH_SUBF4_DONE : Bit 25 ~ 25. Description~ DSCH of secondary cell subframe 4 decode done 
*   HSPA_DC_DSCH_SUBF3_DONE : Bit 24 ~ 24. Description~ DSCH of secondary cell subframe 3 decode done 
*   HSPA_DC_DSCH_SUBF2_DONE : Bit 23 ~ 23. Description~ DSCH of secondary cell subframe 2 decode done 
*   HSPA_DC_DSCH_SUBF1_DONE : Bit 22 ~ 22. Description~ DSCH of secondary cell subframe 1 decode done 
*   HSPA_DC_DSCH_SUBF0_DONE : Bit 21 ~ 21. Description~ DSCH of secondary cell subframe 0 decode done 
*   HSPA_PC_DSCH_SUBF4_DONE : Bit 20 ~ 20. Description~ DSCH of primary cell subframe 4 decode done 
*   HSPA_PC_DSCH_SUBF3_DONE : Bit 19 ~ 19. Description~ DSCH of primary cell subframe 3 decode done 
*   HSPA_PC_DSCH_SUBF2_DONE : Bit 18 ~ 18. Description~ DSCH of primary cell subframe 2 decode done 
*   HSPA_PC_DSCH_SUBF1_DONE : Bit 17 ~ 17. Description~ DSCH of primary cell subframe 1 decode done 
*   HSPA_PC_DSCH_SUBF0_DONE : Bit 16 ~ 16. Description~ DSCH of primary cell subframe 0 decode done 
*   RESERVED_3 : Bit 13 ~ 15. Description~ reserved 
*   BCHSFN_DMA_DONE : Bit 12 ~ 12. Description~ BCH DMA done D2C IRQ 
*   RESERVED_2 : Bit 8 ~ 11. Description~ reserved 
*   CC1_EBD_DONE : Bit 7 ~ 7. Description~ CC1 EBD DMA done D2C IRQ 
*   CC0_EBD_DONE : Bit 6 ~ 6. Description~ CC0 EBD DMA done D2C IRQ 
*   CC1_DMA_DONE : Bit 5 ~ 5. Description~ CC1 DMA done D2C IRQ 
*   CC0_DMA_DONE : Bit 4 ~ 4. Description~ CC0 DMA done D2C IRQ 
*   RESERVED_1 : Bit 1 ~ 3. Description~ reserved 
*   RESERVED_0 : Bit 0 ~ 0. Description~ reserved 
************************************************************************************************************************************************************************************************************************************************************
*/
#define M2C_U3G_IRQ_STA                                        (rxbrp_md32erk_cmif_MD32_ADDR + 0x001C)
    #define LB_M2C_U3G_IRQ_STA_HSPA_DSCH_LESSMODE_DONE             0x001F      // HSPA_DSCH_LESSMODE_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_HSPA_DSCH_LESSMODE_DONE             0x001F      // HSPA_DSCH_LESSMODE_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_HSPA_DSCH_LESSMODE_DONE             0x80000000      // HSPA_DSCH_LESSMODE_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_HSPA_SC2ND_DSCH_SUBF4_DONE          0x001E      // HSPA_SC2ND_DSCH_SUBF4_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_HSPA_SC2ND_DSCH_SUBF4_DONE          0x001E      // HSPA_SC2ND_DSCH_SUBF4_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_HSPA_SC2ND_DSCH_SUBF4_DONE          0x40000000      // HSPA_SC2ND_DSCH_SUBF4_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_HSPA_SC2ND_DSCH_SUBF3_DONE          0x001D      // HSPA_SC2ND_DSCH_SUBF3_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_HSPA_SC2ND_DSCH_SUBF3_DONE          0x001D      // HSPA_SC2ND_DSCH_SUBF3_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_HSPA_SC2ND_DSCH_SUBF3_DONE          0x20000000      // HSPA_SC2ND_DSCH_SUBF3_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_HSPA_SC2ND_DSCH_SUBF2_DONE          0x001C      // HSPA_SC2ND_DSCH_SUBF2_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_HSPA_SC2ND_DSCH_SUBF2_DONE          0x001C      // HSPA_SC2ND_DSCH_SUBF2_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_HSPA_SC2ND_DSCH_SUBF2_DONE          0x10000000      // HSPA_SC2ND_DSCH_SUBF2_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_HSPA_SC2ND_DSCH_SUBF1_DONE          0x001B      // HSPA_SC2ND_DSCH_SUBF1_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_HSPA_SC2ND_DSCH_SUBF1_DONE          0x001B      // HSPA_SC2ND_DSCH_SUBF1_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_HSPA_SC2ND_DSCH_SUBF1_DONE          0x8000000      // HSPA_SC2ND_DSCH_SUBF1_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_HSPA_SC2ND_DSCH_SUBF0_DONE          0x001A      // HSPA_SC2ND_DSCH_SUBF0_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_HSPA_SC2ND_DSCH_SUBF0_DONE          0x001A      // HSPA_SC2ND_DSCH_SUBF0_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_HSPA_SC2ND_DSCH_SUBF0_DONE          0x4000000      // HSPA_SC2ND_DSCH_SUBF0_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_HSPA_DC_DSCH_SUBF4_DONE             0x0019      // HSPA_DC_DSCH_SUBF4_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_HSPA_DC_DSCH_SUBF4_DONE             0x0019      // HSPA_DC_DSCH_SUBF4_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_HSPA_DC_DSCH_SUBF4_DONE             0x2000000      // HSPA_DC_DSCH_SUBF4_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_HSPA_DC_DSCH_SUBF3_DONE             0x0018      // HSPA_DC_DSCH_SUBF3_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_HSPA_DC_DSCH_SUBF3_DONE             0x0018      // HSPA_DC_DSCH_SUBF3_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_HSPA_DC_DSCH_SUBF3_DONE             0x1000000      // HSPA_DC_DSCH_SUBF3_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_HSPA_DC_DSCH_SUBF2_DONE             0x0017      // HSPA_DC_DSCH_SUBF2_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_HSPA_DC_DSCH_SUBF2_DONE             0x0017      // HSPA_DC_DSCH_SUBF2_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_HSPA_DC_DSCH_SUBF2_DONE             0x800000      // HSPA_DC_DSCH_SUBF2_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_HSPA_DC_DSCH_SUBF1_DONE             0x0016      // HSPA_DC_DSCH_SUBF1_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_HSPA_DC_DSCH_SUBF1_DONE             0x0016      // HSPA_DC_DSCH_SUBF1_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_HSPA_DC_DSCH_SUBF1_DONE             0x400000      // HSPA_DC_DSCH_SUBF1_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_HSPA_DC_DSCH_SUBF0_DONE             0x0015      // HSPA_DC_DSCH_SUBF0_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_HSPA_DC_DSCH_SUBF0_DONE             0x0015      // HSPA_DC_DSCH_SUBF0_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_HSPA_DC_DSCH_SUBF0_DONE             0x200000      // HSPA_DC_DSCH_SUBF0_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_HSPA_PC_DSCH_SUBF4_DONE             0x0014      // HSPA_PC_DSCH_SUBF4_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_HSPA_PC_DSCH_SUBF4_DONE             0x0014      // HSPA_PC_DSCH_SUBF4_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_HSPA_PC_DSCH_SUBF4_DONE             0x100000      // HSPA_PC_DSCH_SUBF4_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_HSPA_PC_DSCH_SUBF3_DONE             0x0013      // HSPA_PC_DSCH_SUBF3_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_HSPA_PC_DSCH_SUBF3_DONE             0x0013      // HSPA_PC_DSCH_SUBF3_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_HSPA_PC_DSCH_SUBF3_DONE             0x80000      // HSPA_PC_DSCH_SUBF3_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_HSPA_PC_DSCH_SUBF2_DONE             0x0012      // HSPA_PC_DSCH_SUBF2_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_HSPA_PC_DSCH_SUBF2_DONE             0x0012      // HSPA_PC_DSCH_SUBF2_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_HSPA_PC_DSCH_SUBF2_DONE             0x40000      // HSPA_PC_DSCH_SUBF2_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_HSPA_PC_DSCH_SUBF1_DONE             0x0011      // HSPA_PC_DSCH_SUBF1_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_HSPA_PC_DSCH_SUBF1_DONE             0x0011      // HSPA_PC_DSCH_SUBF1_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_HSPA_PC_DSCH_SUBF1_DONE             0x20000      // HSPA_PC_DSCH_SUBF1_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_HSPA_PC_DSCH_SUBF0_DONE             0x0010      // HSPA_PC_DSCH_SUBF0_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_HSPA_PC_DSCH_SUBF0_DONE             0x0010      // HSPA_PC_DSCH_SUBF0_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_HSPA_PC_DSCH_SUBF0_DONE             0x10000      // HSPA_PC_DSCH_SUBF0_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_RESERVED_3                          0x000D      // RESERVED_3 LSB
    #define MB_M2C_U3G_IRQ_STA_RESERVED_3                          0x000F      // RESERVED_3 MSB
    #define MK_M2C_U3G_IRQ_STA_RESERVED_3                          0xE000      // RESERVED_3 MASK
    #define LB_M2C_U3G_IRQ_STA_BCHSFN_DMA_DONE                     0x000C      // BCHSFN_DMA_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_BCHSFN_DMA_DONE                     0x000C      // BCHSFN_DMA_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_BCHSFN_DMA_DONE                     0x1000      // BCHSFN_DMA_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_RESERVED_2                          0x0008      // RESERVED_2 LSB
    #define MB_M2C_U3G_IRQ_STA_RESERVED_2                          0x000B      // RESERVED_2 MSB
    #define MK_M2C_U3G_IRQ_STA_RESERVED_2                          0x0F00      // RESERVED_2 MASK
    #define LB_M2C_U3G_IRQ_STA_CC1_EBD_DONE                        0x0007      // CC1_EBD_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_CC1_EBD_DONE                        0x0007      // CC1_EBD_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_CC1_EBD_DONE                        0x0080      // CC1_EBD_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_CC0_EBD_DONE                        0x0006      // CC0_EBD_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_CC0_EBD_DONE                        0x0006      // CC0_EBD_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_CC0_EBD_DONE                        0x0040      // CC0_EBD_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_CC1_DMA_DONE                        0x0005      // CC1_DMA_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_CC1_DMA_DONE                        0x0005      // CC1_DMA_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_CC1_DMA_DONE                        0x0020      // CC1_DMA_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_CC0_DMA_DONE                        0x0004      // CC0_DMA_DONE LSB
    #define MB_M2C_U3G_IRQ_STA_CC0_DMA_DONE                        0x0004      // CC0_DMA_DONE MSB
    #define MK_M2C_U3G_IRQ_STA_CC0_DMA_DONE                        0x0010      // CC0_DMA_DONE MASK
    #define LB_M2C_U3G_IRQ_STA_RESERVED_1                          0x0001      // RESERVED_1 LSB
    #define MB_M2C_U3G_IRQ_STA_RESERVED_1                          0x0003      // RESERVED_1 MSB
    #define MK_M2C_U3G_IRQ_STA_RESERVED_1                          0x000E      // RESERVED_1 MASK
    #define LB_M2C_U3G_IRQ_STA_RESERVED_0                          0x0000      // RESERVED_0 LSB
    #define MB_M2C_U3G_IRQ_STA_RESERVED_0                          0x0000      // RESERVED_0 MSB
    #define MK_M2C_U3G_IRQ_STA_RESERVED_0                          0x0001      // RESERVED_0 MASK

/*
************************************************************************************************************************************************************************************************************************************************************
* Register : M2C_U3G_IRQ_SET , Description : M2C_U3G_IRQ SET REG for CPU
*   HSPA_DSCH_LESSMODE_DONE : Bit 31 ~ 31. Description~  
*   HSPA_SC2ND_DSCH_SUBF4_DONE : Bit 30 ~ 30. Description~ DSCH of the 2nd secondary cell subframe 4 decode done 
*   HSPA_SC2ND_DSCH_SUBF3_DONE : Bit 29 ~ 29. Description~ DSCH of the 2nd secondary cell subframe 3 decode done 
*   HSPA_SC2ND_DSCH_SUBF2_DONE : Bit 28 ~ 28. Description~ DSCH of the 2nd secondary cell subframe 2 decode done 
*   HSPA_SC2ND_DSCH_SUBF1_DONE : Bit 27 ~ 27. Description~ DSCH of the 2nd secondary cell subframe 1 decode done 
*   HSPA_SC2ND_DSCH_SUBF0_DONE : Bit 26 ~ 26. Description~ DSCH of the 2nd secondary cell subframe 0 decode done 
*   HSPA_DC_DSCH_SUBF4_DONE : Bit 25 ~ 25. Description~ DSCH of secondary cell subframe 4 decode done 
*   HSPA_DC_DSCH_SUBF3_DONE : Bit 24 ~ 24. Description~ DSCH of secondary cell subframe 3 decode done 
*   HSPA_DC_DSCH_SUBF2_DONE : Bit 23 ~ 23. Description~ DSCH of secondary cell subframe 2 decode done 
*   HSPA_DC_DSCH_SUBF1_DONE : Bit 22 ~ 22. Description~ DSCH of secondary cell subframe 1 decode done 
*   HSPA_DC_DSCH_SUBF0_DONE : Bit 21 ~ 21. Description~ DSCH of secondary cell subframe 0 decode done 
*   HSPA_PC_DSCH_SUBF4_DONE : Bit 20 ~ 20. Description~ DSCH of primary cell subframe 4 decode done 
*   HSPA_PC_DSCH_SUBF3_DONE : Bit 19 ~ 19. Description~ DSCH of primary cell subframe 3 decode done 
*   HSPA_PC_DSCH_SUBF2_DONE : Bit 18 ~ 18. Description~ DSCH of primary cell subframe 2 decode done 
*   HSPA_PC_DSCH_SUBF1_DONE : Bit 17 ~ 17. Description~ DSCH of primary cell subframe 1 decode done 
*   HSPA_PC_DSCH_SUBF0_DONE : Bit 16 ~ 16. Description~ DSCH of primary cell subframe 0 decode done 
*   RESERVED_3 : Bit 13 ~ 15. Description~ reserved 
*   BCHSFN_DMA_DONE : Bit 12 ~ 12. Description~ BCH DMA done D2C IRQ 
*   RESERVED_2 : Bit 8 ~ 11. Description~ reserved 
*   CC1_EBD_DONE : Bit 7 ~ 7. Description~ CC1 EBD DMA done D2C IRQ 
*   CC0_EBD_DONE : Bit 6 ~ 6. Description~ CC0 EBD DMA done D2C IRQ 
*   CC1_DMA_DONE : Bit 5 ~ 5. Description~ CC1 DMA done D2C IRQ 
*   CC0_DMA_DONE : Bit 4 ~ 4. Description~ CC0 DMA done D2C IRQ 
*   RESERVED_1 : Bit 1 ~ 3. Description~ reserved 
*   RESERVED_0 : Bit 0 ~ 0. Description~ reserved 
************************************************************************************************************************************************************************************************************************************************************
*/
#define M2C_U3G_IRQ_SET                                        (rxbrp_md32erk_cmif_MD32_ADDR + 0x0020)
    #define LB_M2C_U3G_IRQ_SET_HSPA_DSCH_LESSMODE_DONE             0x001F      // HSPA_DSCH_LESSMODE_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_HSPA_DSCH_LESSMODE_DONE             0x001F      // HSPA_DSCH_LESSMODE_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_HSPA_DSCH_LESSMODE_DONE             0x80000000      // HSPA_DSCH_LESSMODE_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_HSPA_SC2ND_DSCH_SUBF4_DONE          0x001E      // HSPA_SC2ND_DSCH_SUBF4_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_HSPA_SC2ND_DSCH_SUBF4_DONE          0x001E      // HSPA_SC2ND_DSCH_SUBF4_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_HSPA_SC2ND_DSCH_SUBF4_DONE          0x40000000      // HSPA_SC2ND_DSCH_SUBF4_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_HSPA_SC2ND_DSCH_SUBF3_DONE          0x001D      // HSPA_SC2ND_DSCH_SUBF3_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_HSPA_SC2ND_DSCH_SUBF3_DONE          0x001D      // HSPA_SC2ND_DSCH_SUBF3_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_HSPA_SC2ND_DSCH_SUBF3_DONE          0x20000000      // HSPA_SC2ND_DSCH_SUBF3_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_HSPA_SC2ND_DSCH_SUBF2_DONE          0x001C      // HSPA_SC2ND_DSCH_SUBF2_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_HSPA_SC2ND_DSCH_SUBF2_DONE          0x001C      // HSPA_SC2ND_DSCH_SUBF2_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_HSPA_SC2ND_DSCH_SUBF2_DONE          0x10000000      // HSPA_SC2ND_DSCH_SUBF2_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_HSPA_SC2ND_DSCH_SUBF1_DONE          0x001B      // HSPA_SC2ND_DSCH_SUBF1_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_HSPA_SC2ND_DSCH_SUBF1_DONE          0x001B      // HSPA_SC2ND_DSCH_SUBF1_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_HSPA_SC2ND_DSCH_SUBF1_DONE          0x8000000      // HSPA_SC2ND_DSCH_SUBF1_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_HSPA_SC2ND_DSCH_SUBF0_DONE          0x001A      // HSPA_SC2ND_DSCH_SUBF0_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_HSPA_SC2ND_DSCH_SUBF0_DONE          0x001A      // HSPA_SC2ND_DSCH_SUBF0_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_HSPA_SC2ND_DSCH_SUBF0_DONE          0x4000000      // HSPA_SC2ND_DSCH_SUBF0_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_HSPA_DC_DSCH_SUBF4_DONE             0x0019      // HSPA_DC_DSCH_SUBF4_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_HSPA_DC_DSCH_SUBF4_DONE             0x0019      // HSPA_DC_DSCH_SUBF4_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_HSPA_DC_DSCH_SUBF4_DONE             0x2000000      // HSPA_DC_DSCH_SUBF4_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_HSPA_DC_DSCH_SUBF3_DONE             0x0018      // HSPA_DC_DSCH_SUBF3_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_HSPA_DC_DSCH_SUBF3_DONE             0x0018      // HSPA_DC_DSCH_SUBF3_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_HSPA_DC_DSCH_SUBF3_DONE             0x1000000      // HSPA_DC_DSCH_SUBF3_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_HSPA_DC_DSCH_SUBF2_DONE             0x0017      // HSPA_DC_DSCH_SUBF2_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_HSPA_DC_DSCH_SUBF2_DONE             0x0017      // HSPA_DC_DSCH_SUBF2_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_HSPA_DC_DSCH_SUBF2_DONE             0x800000      // HSPA_DC_DSCH_SUBF2_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_HSPA_DC_DSCH_SUBF1_DONE             0x0016      // HSPA_DC_DSCH_SUBF1_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_HSPA_DC_DSCH_SUBF1_DONE             0x0016      // HSPA_DC_DSCH_SUBF1_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_HSPA_DC_DSCH_SUBF1_DONE             0x400000      // HSPA_DC_DSCH_SUBF1_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_HSPA_DC_DSCH_SUBF0_DONE             0x0015      // HSPA_DC_DSCH_SUBF0_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_HSPA_DC_DSCH_SUBF0_DONE             0x0015      // HSPA_DC_DSCH_SUBF0_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_HSPA_DC_DSCH_SUBF0_DONE             0x200000      // HSPA_DC_DSCH_SUBF0_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_HSPA_PC_DSCH_SUBF4_DONE             0x0014      // HSPA_PC_DSCH_SUBF4_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_HSPA_PC_DSCH_SUBF4_DONE             0x0014      // HSPA_PC_DSCH_SUBF4_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_HSPA_PC_DSCH_SUBF4_DONE             0x100000      // HSPA_PC_DSCH_SUBF4_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_HSPA_PC_DSCH_SUBF3_DONE             0x0013      // HSPA_PC_DSCH_SUBF3_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_HSPA_PC_DSCH_SUBF3_DONE             0x0013      // HSPA_PC_DSCH_SUBF3_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_HSPA_PC_DSCH_SUBF3_DONE             0x80000      // HSPA_PC_DSCH_SUBF3_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_HSPA_PC_DSCH_SUBF2_DONE             0x0012      // HSPA_PC_DSCH_SUBF2_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_HSPA_PC_DSCH_SUBF2_DONE             0x0012      // HSPA_PC_DSCH_SUBF2_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_HSPA_PC_DSCH_SUBF2_DONE             0x40000      // HSPA_PC_DSCH_SUBF2_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_HSPA_PC_DSCH_SUBF1_DONE             0x0011      // HSPA_PC_DSCH_SUBF1_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_HSPA_PC_DSCH_SUBF1_DONE             0x0011      // HSPA_PC_DSCH_SUBF1_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_HSPA_PC_DSCH_SUBF1_DONE             0x20000      // HSPA_PC_DSCH_SUBF1_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_HSPA_PC_DSCH_SUBF0_DONE             0x0010      // HSPA_PC_DSCH_SUBF0_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_HSPA_PC_DSCH_SUBF0_DONE             0x0010      // HSPA_PC_DSCH_SUBF0_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_HSPA_PC_DSCH_SUBF0_DONE             0x10000      // HSPA_PC_DSCH_SUBF0_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_RESERVED_3                          0x000D      // RESERVED_3 LSB
    #define MB_M2C_U3G_IRQ_SET_RESERVED_3                          0x000F      // RESERVED_3 MSB
    #define MK_M2C_U3G_IRQ_SET_RESERVED_3                          0xE000      // RESERVED_3 MASK
    #define LB_M2C_U3G_IRQ_SET_BCHSFN_DMA_DONE                     0x000C      // BCHSFN_DMA_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_BCHSFN_DMA_DONE                     0x000C      // BCHSFN_DMA_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_BCHSFN_DMA_DONE                     0x1000      // BCHSFN_DMA_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_RESERVED_2                          0x0008      // RESERVED_2 LSB
    #define MB_M2C_U3G_IRQ_SET_RESERVED_2                          0x000B      // RESERVED_2 MSB
    #define MK_M2C_U3G_IRQ_SET_RESERVED_2                          0x0F00      // RESERVED_2 MASK
    #define LB_M2C_U3G_IRQ_SET_CC1_EBD_DONE                        0x0007      // CC1_EBD_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_CC1_EBD_DONE                        0x0007      // CC1_EBD_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_CC1_EBD_DONE                        0x0080      // CC1_EBD_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_CC0_EBD_DONE                        0x0006      // CC0_EBD_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_CC0_EBD_DONE                        0x0006      // CC0_EBD_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_CC0_EBD_DONE                        0x0040      // CC0_EBD_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_CC1_DMA_DONE                        0x0005      // CC1_DMA_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_CC1_DMA_DONE                        0x0005      // CC1_DMA_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_CC1_DMA_DONE                        0x0020      // CC1_DMA_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_CC0_DMA_DONE                        0x0004      // CC0_DMA_DONE LSB
    #define MB_M2C_U3G_IRQ_SET_CC0_DMA_DONE                        0x0004      // CC0_DMA_DONE MSB
    #define MK_M2C_U3G_IRQ_SET_CC0_DMA_DONE                        0x0010      // CC0_DMA_DONE MASK
    #define LB_M2C_U3G_IRQ_SET_RESERVED_1                          0x0001      // RESERVED_1 LSB
    #define MB_M2C_U3G_IRQ_SET_RESERVED_1                          0x0003      // RESERVED_1 MSB
    #define MK_M2C_U3G_IRQ_SET_RESERVED_1                          0x000E      // RESERVED_1 MASK
    #define LB_M2C_U3G_IRQ_SET_RESERVED_0                          0x0000      // RESERVED_0 LSB
    #define MB_M2C_U3G_IRQ_SET_RESERVED_0                          0x0000      // RESERVED_0 MSB
    #define MK_M2C_U3G_IRQ_SET_RESERVED_0                          0x0001      // RESERVED_0 MASK

/*
************************************************************************************************************************************************************************************************************************************************************
* Register : M2C_U4G_IRQ_STA , Description : M2C_U4G_IRQ STATUS
*   PDSCH_DONE_CC1 : Bit 9 ~ 9. Description~ PDSCH_DONE_CC1 
*   PDSCH_DONE_CC0 : Bit 8 ~ 8. Description~ PDSCH_DONE_CC0 
*   MIB_DONE : Bit 7 ~ 7. Description~ MIB_DONE 
*   HICH_DONE : Bit 6 ~ 6. Description~ HICH done 
*   DCI_PARSING_DONE_CC1 : Bit 5 ~ 5. Description~ CC1 dci parsing done 
*   DCI_PARSING_DONE_CC0 : Bit 4 ~ 4. Description~ CC0 dci parsing done 
*   RESERVED_1 : Bit 1 ~ 3. Description~ reserved 
*   BRP_ALLOW_SLEEP : Bit 0 ~ 0. Description~ MD32 write M2C_U4G_IRQ_SET  to set this register.. L1 write M2C_U4G_IRQ_CLR to clear this register.. If it is not zero, M2C_U4G_IRQ is always triggered. 
************************************************************************************************************************************************************************************************************************************************************
*/
#define M2C_U4G_IRQ_STA                                        (rxbrp_md32erk_cmif_MD32_ADDR + 0x0024)
    #define LB_M2C_U4G_IRQ_STA_PDSCH_DONE_CC1                      0x0009      // PDSCH_DONE_CC1 LSB
    #define MB_M2C_U4G_IRQ_STA_PDSCH_DONE_CC1                      0x0009      // PDSCH_DONE_CC1 MSB
    #define MK_M2C_U4G_IRQ_STA_PDSCH_DONE_CC1                      0x0200      // PDSCH_DONE_CC1 MASK
    #define LB_M2C_U4G_IRQ_STA_PDSCH_DONE_CC0                      0x0008      // PDSCH_DONE_CC0 LSB
    #define MB_M2C_U4G_IRQ_STA_PDSCH_DONE_CC0                      0x0008      // PDSCH_DONE_CC0 MSB
    #define MK_M2C_U4G_IRQ_STA_PDSCH_DONE_CC0                      0x0100      // PDSCH_DONE_CC0 MASK
    #define LB_M2C_U4G_IRQ_STA_MIB_DONE                            0x0007      // MIB_DONE LSB
    #define MB_M2C_U4G_IRQ_STA_MIB_DONE                            0x0007      // MIB_DONE MSB
    #define MK_M2C_U4G_IRQ_STA_MIB_DONE                            0x0080      // MIB_DONE MASK
    #define LB_M2C_U4G_IRQ_STA_HICH_DONE                           0x0006      // HICH_DONE LSB
    #define MB_M2C_U4G_IRQ_STA_HICH_DONE                           0x0006      // HICH_DONE MSB
    #define MK_M2C_U4G_IRQ_STA_HICH_DONE                           0x0040      // HICH_DONE MASK
    #define LB_M2C_U4G_IRQ_STA_DCI_PARSING_DONE_CC1                0x0005      // DCI_PARSING_DONE_CC1 LSB
    #define MB_M2C_U4G_IRQ_STA_DCI_PARSING_DONE_CC1                0x0005      // DCI_PARSING_DONE_CC1 MSB
    #define MK_M2C_U4G_IRQ_STA_DCI_PARSING_DONE_CC1                0x0020      // DCI_PARSING_DONE_CC1 MASK
    #define LB_M2C_U4G_IRQ_STA_DCI_PARSING_DONE_CC0                0x0004      // DCI_PARSING_DONE_CC0 LSB
    #define MB_M2C_U4G_IRQ_STA_DCI_PARSING_DONE_CC0                0x0004      // DCI_PARSING_DONE_CC0 MSB
    #define MK_M2C_U4G_IRQ_STA_DCI_PARSING_DONE_CC0                0x0010      // DCI_PARSING_DONE_CC0 MASK
    #define LB_M2C_U4G_IRQ_STA_RESERVED_1                          0x0001      // RESERVED_1 LSB
    #define MB_M2C_U4G_IRQ_STA_RESERVED_1                          0x0003      // RESERVED_1 MSB
    #define MK_M2C_U4G_IRQ_STA_RESERVED_1                          0x000E      // RESERVED_1 MASK
    #define LB_M2C_U4G_IRQ_STA_BRP_ALLOW_SLEEP                     0x0000      // BRP_ALLOW_SLEEP LSB
    #define MB_M2C_U4G_IRQ_STA_BRP_ALLOW_SLEEP                     0x0000      // BRP_ALLOW_SLEEP MSB
    #define MK_M2C_U4G_IRQ_STA_BRP_ALLOW_SLEEP                     0x0001      // BRP_ALLOW_SLEEP MASK

/*
************************************************************************************************************************************************************************************************************************************************************
* Register : M2C_U4G_IRQ_SET , Description : M2C_U4G_IRQ SET REG for CPU
*   PDSCH_DONE_CC1 : Bit 9 ~ 9. Description~ PDSCH_DONE_CC1 
*   PDSCH_DONE_CC0 : Bit 8 ~ 8. Description~ PDSCH_DONE_CC0 
*   MIB_DONE : Bit 7 ~ 7. Description~ MIB_DONE 
*   HICH_DONE : Bit 6 ~ 6. Description~ HICH done 
*   DCI_PARSING_DONE_CC1 : Bit 5 ~ 5. Description~ CC1 dci parsing done 
*   DCI_PARSING_DONE_CC0 : Bit 4 ~ 4. Description~ CC0 dci parsing done 
*   RESERVED_1 : Bit 1 ~ 3. Description~ reserved 
*   BRP_ALLOW_SLEEP : Bit 0 ~ 0. Description~  
************************************************************************************************************************************************************************************************************************************************************
*/
#define M2C_U4G_IRQ_SET                                        (rxbrp_md32erk_cmif_MD32_ADDR + 0x0028)
    #define LB_M2C_U4G_IRQ_SET_PDSCH_DONE_CC1                      0x0009      // PDSCH_DONE_CC1 LSB
    #define MB_M2C_U4G_IRQ_SET_PDSCH_DONE_CC1                      0x0009      // PDSCH_DONE_CC1 MSB
    #define MK_M2C_U4G_IRQ_SET_PDSCH_DONE_CC1                      0x0200      // PDSCH_DONE_CC1 MASK
    #define LB_M2C_U4G_IRQ_SET_PDSCH_DONE_CC0                      0x0008      // PDSCH_DONE_CC0 LSB
    #define MB_M2C_U4G_IRQ_SET_PDSCH_DONE_CC0                      0x0008      // PDSCH_DONE_CC0 MSB
    #define MK_M2C_U4G_IRQ_SET_PDSCH_DONE_CC0                      0x0100      // PDSCH_DONE_CC0 MASK
    #define LB_M2C_U4G_IRQ_SET_MIB_DONE                            0x0007      // MIB_DONE LSB
    #define MB_M2C_U4G_IRQ_SET_MIB_DONE                            0x0007      // MIB_DONE MSB
    #define MK_M2C_U4G_IRQ_SET_MIB_DONE                            0x0080      // MIB_DONE MASK
    #define LB_M2C_U4G_IRQ_SET_HICH_DONE                           0x0006      // HICH_DONE LSB
    #define MB_M2C_U4G_IRQ_SET_HICH_DONE                           0x0006      // HICH_DONE MSB
    #define MK_M2C_U4G_IRQ_SET_HICH_DONE                           0x0040      // HICH_DONE MASK
    #define LB_M2C_U4G_IRQ_SET_DCI_PARSING_DONE_CC1                0x0005      // DCI_PARSING_DONE_CC1 LSB
    #define MB_M2C_U4G_IRQ_SET_DCI_PARSING_DONE_CC1                0x0005      // DCI_PARSING_DONE_CC1 MSB
    #define MK_M2C_U4G_IRQ_SET_DCI_PARSING_DONE_CC1                0x0020      // DCI_PARSING_DONE_CC1 MASK
    #define LB_M2C_U4G_IRQ_SET_DCI_PARSING_DONE_CC0                0x0004      // DCI_PARSING_DONE_CC0 LSB
    #define MB_M2C_U4G_IRQ_SET_DCI_PARSING_DONE_CC0                0x0004      // DCI_PARSING_DONE_CC0 MSB
    #define MK_M2C_U4G_IRQ_SET_DCI_PARSING_DONE_CC0                0x0010      // DCI_PARSING_DONE_CC0 MASK
    #define LB_M2C_U4G_IRQ_SET_RESERVED_1                          0x0001      // RESERVED_1 LSB
    #define MB_M2C_U4G_IRQ_SET_RESERVED_1                          0x0003      // RESERVED_1 MSB
    #define MK_M2C_U4G_IRQ_SET_RESERVED_1                          0x000E      // RESERVED_1 MASK
    #define LB_M2C_U4G_IRQ_SET_BRP_ALLOW_SLEEP                     0x0000      // BRP_ALLOW_SLEEP LSB
    #define MB_M2C_U4G_IRQ_SET_BRP_ALLOW_SLEEP                     0x0000      // BRP_ALLOW_SLEEP MSB
    #define MK_M2C_U4G_IRQ_SET_BRP_ALLOW_SLEEP                     0x0001      // BRP_ALLOW_SLEEP MASK

/*
************************************************************************************************************************************************************************************************************************************************************
* Register : RESERVED_OS_LOG , Description : RESERVED for OS exception and LOGGER
*   RESERVED_OS_LOG : Bit 0 ~ 31. Description~ Reserved for Logger(30 words) and OS exception (20words) and others (16 words) 
************************************************************************************************************************************************************************************************************************************************************
*/
#define RESERVED_OS_LOG(i)                                     (rxbrp_md32erk_cmif_MD32_ADDR + 0x002C + (i * 0x4))
    #define LB_RESERVED_OS_LOG_RESERVED_OS_LOG                     0x0000      // RESERVED_OS_LOG LSB
    #define MB_RESERVED_OS_LOG_RESERVED_OS_LOG                     0x001F      // RESERVED_OS_LOG MSB
    #define MK_RESERVED_OS_LOG_RESERVED_OS_LOG                     0xFFFFFFFF      // RESERVED_OS_LOG MASK
    #define A4_RESERVED_OS_LOG_RESERVED_OS_LOG(i)                  (rxbrp_md32erk_cmif_MD32_ADDR + 0x002C + (i * 0x4))


#endif  //_rxbrp_md32erk_cmif_MD32_H_


