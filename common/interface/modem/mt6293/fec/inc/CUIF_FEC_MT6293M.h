#ifndef _FEC_CMIF_REG_MT6291_H_
#define _FEC_CMIF_REG_MT6291_H_

#ifndef _FEC_HW_REG_MT6291_H_
typedef volatile unsigned short* SRAMADDR;         /* SRAM addr is 16 bits  */
typedef volatile unsigned short  SRAMDATA;         /* SRAM data is 16 bits  */
typedef volatile unsigned short* APBADDR;          /* APB addr is 16 bits   */
typedef volatile unsigned short  APBDATA;          /* APB data is 16 bits   */
typedef volatile unsigned long*  APBADDR32;        /* APB addr is 32 bits   */
typedef volatile unsigned long   APBDATA32;        /* APB data is 32 bits   */
typedef volatile unsigned short* DPRAMADDR;        /* DPRAM addr is 16 bits */
typedef volatile signed   short* DPRAMADDR_S;      /* DPRAM addr is 16 bits */
typedef volatile unsigned short  DPRAMDATA;        /* DPRAM data is 16 bits */
#endif


#define CMIF_MD32_MEM_size                                                      0x2000


#if defined(__MD32__)
    #define CMIF_MD32_REG_BASE                                                  (0xE0035800)//(0xD0358000)

    #if defined(__LTE_L1SIM__)
         #define CMIF_MD32_REG_BASE                                             (0xE0058000)//(0xA7B58000)
    #endif

#else // For L1-Core
    //using macro instead of varaiable for good performance
    #define CMIF_MD32_0_REG_BASE                                                (0xE0B58000)//(0xA7B58000)
    #define CMIF_MD32_1_REG_BASE                                                (0xE0358000)//(0xA3B58000)
    #define CMIF_MD32_REG_BASE                                                  (CMIF_MD32_0_REG_BASE)
    #define CMIF_MD32_01_DIFF                                                   (CMIF_MD32_0_REG_BASE - CMIF_MD32_1_REG_BASE)
#endif

/* // old cmif setting fec to base address
#ifdef __LTE_L1SIM__
#define CMIF_MD32_REG_BASE                                                      (0xF7B58000)
#else
#define CMIF_MD32_REG_BASE                                                      (0xD0358000)
#endif
*/

#define FEC_CMIF_REG_BASE                                                       (CMIF_MD32_REG_BASE)
#define FEC_SYSTEM_REG_BASE                                                     (FEC_SYSTEM_OFFSET)
#define FEC_WTXUPC_REG_BASE                                                     (FEC_WTX_UPC_OFFSET)
#define FEC_WECH_REG_BASE                                                       (FEC_WECH_OFFSET)
#define FEC_HCH_REG_BASE                                                        (FEC_HCH_OFFSET)
#define FEC_WRXAGC_REG_BASE                                                     (FEC_WRXAGC_OFFSET)
#define FEC_LTPC_LTE_TPC_REG_BASE                                               (FEC_LTPC_OFFSET)
#define LTE_AGC_REG_BASE                                                        (FEC_LAGC_OFFSET)
#define FEC_MMTX_CTRL_REG_BASE                                                  (FEC_MMTX_CTRL_OFFSET)
#define FEC_MMRX_CTRL_REG_BASE                                                  (FEC_MMRX_CTRL_OFFSET)

#define CMIF_MD32_end                                                           (CMIF_MD32_REG_BASE + 0x0230)
#define FEC_CMIF_end                                                            (FEC_CMIF_REG_BASE + 0x2600)
#define FEC_SYSTEM_end                                                          (FEC_SYSTEM_REG_BASE + 0x00000020)
#define FEC_WTXUPC_end                                                          (FEC_WTXUPC_REG_BASE + 0x000006F0)
#define FEC_WECH_end                                                            (FEC_WECH_REG_BASE + 0x00000160 + 4*4)
#define FEC_HCH_end                                                             (FEC_HCH_REG_BASE + 0x00000008 + 2*4)
#define FEC_WRXAGC_end                                                          (FEC_WRXAGC_REG_BASE + 0x000004B0)
#define FEC_LTPC_LTE_TPC_end                                                    (FEC_LTPC_LTE_TPC_REG_BASE + 0x00000630 + 3*4)
#define LTE_AGC_end                                                             (LTE_AGC_REG_BASE + 0x00000BB4)
#define FEC_MMTX_CTRL_end                                                       (FEC_MMTX_CTRL_REG_BASE + 0x000000A4)
#define FEC_MMRX_CTRL_end                                                       (FEC_MMRX_CTRL_REG_BASE + 0x00000010)

#define M2C_WFI_IRQ_STA                                                         ((APBADDR32)(CMIF_MD32_REG_BASE + 0x0000))
#define M2C_WFI_IRQ_MASK                                                        ((APBADDR32)(CMIF_MD32_REG_BASE + 0x0004))
#define M2CTI_EVENT                                                             ((APBADDR32)(CMIF_MD32_REG_BASE + 0x0008))
#define C2M_U3G_IRQ_STA                                                         ((APBADDR32)(CMIF_MD32_REG_BASE + 0x000C))
#define C2M_U3G_IRQ_CLR                                                         ((APBADDR32)(CMIF_MD32_REG_BASE + 0x0010))
#define C2M_U4G_IRQ_STA                                                         ((APBADDR32)(CMIF_MD32_REG_BASE + 0x0014))
#define C2M_U4G_IRQ_CLR                                                         ((APBADDR32)(CMIF_MD32_REG_BASE + 0x0018))
#define M2C_U3G_IRQ_STA                                                         ((APBADDR32)(CMIF_MD32_REG_BASE + 0x001C))
#define M2C_U3G_IRQ_SET                                                         ((APBADDR32)(CMIF_MD32_REG_BASE + 0x0020))
#define M2C_U4G_IRQ_STA                                                         ((APBADDR32)(CMIF_MD32_REG_BASE + 0x0024))
#define M2C_U4G_IRQ_SET                                                         ((APBADDR32)(CMIF_MD32_REG_BASE + 0x0028))
#define BOOT_UP_RDY                                                             ((APBADDR32)(CMIF_MD32_REG_BASE + 0x002C))
#define RESERVED_OS_LOG(n)                                                      ((APBADDR32)(CMIF_MD32_REG_BASE + 0x0030 + (n)*4))   //n is from 0 to 63
#define CMIF_MD32_MEM_BASE                                                      ((APBADDR32)(CMIF_MD32_REG_BASE + 0x0200))

#define FEC_SYSTEM_OFFSET                                                       (FEC_CMIF_REG_BASE + 0x0230)
#define FEC_MMTX_CTRL_OFFSET                                                    (FEC_CMIF_REG_BASE + 0x0330)
#define FEC_LTPC_OFFSET                                                         (FEC_CMIF_REG_BASE + 0x0600)
#define FEC_LAGC_OFFSET                                                         (FEC_CMIF_REG_BASE + 0x1000)
#define FEC_HCH_OFFSET                                                          (FEC_CMIF_REG_BASE + 0x2000)
#define FEC_WTX_UPC_OFFSET                                                      (FEC_CMIF_REG_BASE + 0x2020)
#define FEC_WECH_OFFSET                                                         (FEC_CMIF_REG_BASE + 0x2720)
#define FEC_WRXAGC_OFFSET                                                       (FEC_CMIF_REG_BASE + 0x2C20)
#define FEC_MMRX_CTRL_OFFSET                                                    (FEC_CMIF_REG_BASE + 0x1E00)

#define FEC_W_SLEEP_ACK                                                         ((APBADDR32)(FEC_SYSTEM_REG_BASE + 0x00000000))
#define FEC_W_PM_DM_STATE                                                       ((APBADDR32)(FEC_SYSTEM_REG_BASE + 0x00000004))
#define FEC_W_ALLOW_SLEEP                                                       ((APBADDR32)(FEC_SYSTEM_REG_BASE + 0x00000008))
#define FEC_L_SLEEP_ACK                                                         ((APBADDR32)(FEC_SYSTEM_REG_BASE + 0x0000000C))
#define FEC_L_PM_DM_STATE                                                       ((APBADDR32)(FEC_SYSTEM_REG_BASE + 0x00000010))
#define FEC_L_ALLOW_SLEEP                                                       ((APBADDR32)(FEC_SYSTEM_REG_BASE + 0x00000014))
#define FEC1_L_SLEEP_ACK                                                        ((APBADDR32)(FEC_SYSTEM_REG_BASE + 0x00000018))
#define FEC1_L_PM_DM_STATE                                                      ((APBADDR32)(FEC_SYSTEM_REG_BASE + 0x0000001C))
#define FEC1_L_ALLOW_SLEEP                                                      ((APBADDR32)(FEC_SYSTEM_REG_BASE + 0x00000020))

#define FEC_LTPC_TX_CUIF(n)                                                      ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + (n)*4))   //fake cuif addr for psuedo code


#define FEC_LTPC_TX_CC_PARAM                                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000000))
#define FEC_LTPC_TX_FREQ                                                        ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000004))
#define FEC_LTPC_TX_FREQ_CC1                                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000008))
#define FEC_LTPC_TX_FREQ_CENTRAL                                                ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000000C))
#define FEC_LTPC_SET_PUCCH_RB_START_IDX                                         ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000010))
#define FEC_LTPC_TEMP_IDX                                                       ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000014))
#define FEC_LTPC_DFE_SFBDY_DIFF                                                 ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000020))
#define FEC_LTPC_DFE_SFBDY_DIFF_PRACH                                           ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000024))
#define FEC_LTPC_L0_TPC_MODE                                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000040))
#define FEC_LTPC_L0_TX_SF_PARAMS                                                ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000044))
#define FEC_LTPC_L0_TX_SF_PARAM_CC1                                             ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000048))
#define FEC_LTPC_L0_TX_SFBDY                                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000050))
#define FEC_LTPC_L0_TPC_ON_TIME                                                 ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000054))
#define FEC_LTPC_L0_SRS_TPC_ON_TIME                                             ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000058))
#define FEC_LTPC_L0_TPC_ON_TIME_OFFSET                                          ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000005C))
#define FEC_LTPC_L0_TX_CC_MASK                                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000060))
#define FEC_LTPC_L0_SYNC_ID                                                     ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000064))
#define FEC_LTPC_L0_RESET_ERROR                                                 ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000068))
#define FEC_LTPC_L0_CANCELREQUEST                                               ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000006C))
#define FEC_LTPC_L0_SRS_PARAMS_SRS_SYM_CNT_BMP                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000090))
#define FEC_LTPC_L0_SRS_PARAMS_SRS_SYM_CNT_BMP_CC1                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000094))
#define FEC_LTPC_L0_SRS_PARAMS_RB_START                                         ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000098))
#define FEC_LTPC_L0_SRS_PARAMS_RB_LEN_DB                                        ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000009C))
#define FEC_LTPC_L0_SRS_PARAMS_RB_START_CC1                                     ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000A0))
#define FEC_LTPC_L0_SRS_PARAMS_RB_LEN_DB_CC1                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000A4))
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START                                       ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000A8))
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_LEN                                         ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000AC))
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_NUM_DB                                      ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000B0))
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_CC1                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000B4))
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_LEN_CC1                                     ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000B8))
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_NUM_DB_CC1                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000BC))
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S0                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000C0))
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S1                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000C4))
#define FEC_LTPC_L0_ULSRS_P_OUT                                                 ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000C8))
#define FEC_LTPC_L0_ULSRS_PA_NOMINAL_GAIN_DB                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000CC))
#define FEC_LTPC_L0_ULSRS_P_OUT_CC1                                             ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000D0))
#define FEC_LTPC_L0_ULSRS_PA_NOMINAL_GAIN_DB_CC1                                ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000D4))
#define FEC_LTPC_L0_SLOT0_POW                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000D8))
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_0                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000DC))
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_1                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000E0))
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_2                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000E4))
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_3                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000E8))
#define FEC_LTPC_L0_SLOT1_POW                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000EC))
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_0                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000F0))
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_1                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000F4))
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_2                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000F8))
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_3                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000000FC))
#define FEC_LTPC_L0_PRACH_PARAMS_RB_START                                       ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000100))
#define FEC_LTPC_L0_PRACH_PA_NOMINAL_GAIN_DB_0                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000104))
#define FEC_LTPC_L0_PRACH_ANTI_DROOPING                                         ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000108))
#define FEC_LTPC_L0_PRACH_PARAMS_FORMAT                                         ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000010C))
#define FEC_LTPC_L0_FOR_TPC_HW_VAL                                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000110))
#define FEC_LTPC_L0_FORCE_BB_BACKOFF                                            ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000114))
#define FEC_LTPC_L0_FORCE_BB_BACKOFF_CC1                                        ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000118))
#define FEC_LTPC_L0_COUPLER_LOSS                                                ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000011C))
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL                                          ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000120))
#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF                                        ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000124))
#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_CC1                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000128))
#define FEC_LTPC_L0_COUPLER_LOSS_SRS0                                           ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000012C))
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL                                         ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000130))
#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF                                       ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000134))
#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_CC1                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000138))
#define FEC_LTPC_L0_COUPLER_LOSS_SRS1                                           ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000013C))
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_0                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000140))
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_1                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000144))
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_2                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000148))
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_3                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000014C))
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_0                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000150))
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_1                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000154))
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_2                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000158))
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_3                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000015C))
#define FEC_LTPC_L1_TPC_MODE                                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000240))
#define FEC_LTPC_L1_TX_SF_PARAMS                                                ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000244))
#define FEC_LTPC_L1_TX_SF_PARAM_CC1                                             ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000248))
#define FEC_LTPC_L1_TX_SFBDY                                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000250))
#define FEC_LTPC_L1_TPC_ON_TIME                                                 ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000254))
#define FEC_LTPC_L1_SRS_TPC_ON_TIME                                             ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000258))
#define FEC_LTPC_L1_TPC_ON_TIME_OFFSET                                          ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000025C))
#define FEC_LTPC_L1_TX_CC_MASK                                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000260))
#define FEC_LTPC_L1_SYNC_ID                                                     ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000264))
#define FEC_LTPC_L1_RESET_ERROR                                                 ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000268))
#define FEC_LTPC_L1_CANCELREQUEST                                               ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000026C))
#define FEC_LTPC_L1_SRS_PARAMS_SRS_SYM_CNT_BMP                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000290))
#define FEC_LTPC_L1_SRS_PARAMS_SRS_SYM_CNT_BMP_CC1                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000294))
#define FEC_LTPC_L1_SRS_PARAMS_RB_START                                         ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000298))
#define FEC_LTPC_L1_SRS_PARAMS_RB_LEN_DB                                        ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000029C))
#define FEC_LTPC_L1_SRS_PARAMS_RB_START_CC1                                     ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002A0))
#define FEC_LTPC_L1_SRS_PARAMS_RB_LEN_DB_CC1                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002A4))
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START                                       ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002A8))
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_LEN                                         ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002AC))
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_NUM_DB                                      ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002B0))
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_CC1                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002B4))
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_LEN_CC1                                     ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002B8))
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_NUM_DB_CC1                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002BC))
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S0                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002C0))
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S1                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002C4))
#define FEC_LTPC_L1_ULSRS_P_OUT                                                 ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002C8))
#define FEC_LTPC_L1_ULSRS_PA_NOMINAL_GAIN_DB                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002CC))
#define FEC_LTPC_L1_ULSRS_P_OUT_CC1                                             ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002D0))
#define FEC_LTPC_L1_ULSRS_PA_NOMINAL_GAIN_DB_CC1                                ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002D4))
#define FEC_LTPC_L1_SLOT0_POW                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002D8))
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_0                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002DC))
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_1                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002E0))
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_2                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002E4))
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_3                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002E8))
#define FEC_LTPC_L1_SLOT1_POW                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002EC))
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_0                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002F0))
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_1                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002F4))
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_2                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002F8))
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_3                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000002FC))
#define FEC_LTPC_L1_PRACH_PARAMS_RB_START                                       ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000300))
#define FEC_LTPC_L1_PRACH_PA_NOMINAL_GAIN_DB_0                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000304))
#define FEC_LTPC_L1_PRACH_ANTI_DROOPING                                         ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000308))
#define FEC_LTPC_L1_PRACH_PARAMS_FORMAT                                         ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000030C))
#define FEC_LTPC_L1_FOR_TPC_HW_VAL                                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000310))
#define FEC_LTPC_L1_FORCE_BB_BACKOFF                                            ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000314))
#define FEC_LTPC_L1_FORCE_BB_BACKOFF_CC1                                        ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000318))
#define FEC_LTPC_L1_COUPLER_LOSS                                                ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000031C))
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL                                          ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000320))
#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF                                        ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000324))
#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_CC1                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000328))
#define FEC_LTPC_L1_COUPLER_LOSS_SRS0                                           ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000032C))
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL                                         ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000330))
#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF                                       ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000334))
#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_CC1                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000338))
#define FEC_LTPC_L1_COUPLER_LOSS_SRS1                                           ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000033C))
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_0                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000340))
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_1                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000344))
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_2                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000348))
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_3                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000034C))
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_0                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000350))
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_1                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000354))
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_2                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000358))
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_3                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000035C))
#define FEC_LTPC_L0_DDPC_RPT0                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000440))
#define FEC_LTPC_L0_DDPC_RPT1                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000444))
#define FEC_LTPC_L0_DDPC_RPT2                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000448))
#define FEC_LTPC_L0_DDPC_RPT3                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000044C))
#define FEC_LTPC_L0_DDPC_RPT4                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000450))
#define FEC_LTPC_L1_DDPC_RPT0                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000460))
#define FEC_LTPC_L1_DDPC_RPT1                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000464))
#define FEC_LTPC_L1_DDPC_RPT2                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000468))
#define FEC_LTPC_L1_DDPC_RPT3                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000046C))
#define FEC_LTPC_L1_DDPC_RPT4                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000470))
#define FEC_LTPC_DDPC_DETBPI_CON(n)                                             ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000480 + (n)*4))   //n is from 0 to 2
#define FEC_LTPC_DDPC_RFDET_CON(n)                                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000490 + (n)*4))   //n is from 0 to 2
#define FEC_LTPC_DDPC_ADC_CON(n)                                                ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000004A0 + (n)*4))   //n is from 0 to 2
#define FEC_LTPC_DDPC_OFS(n)                                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000004B0 + (n)*4))   //n is from 0 to 2
#define FEC_LTPC_DDPC_SAMPLE(n)                                                 ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000004C0 + (n)*4))   //n is from 0 to 3
#define FEC_LTPC_DDPC_SAMPLE_CC1(n)                                             ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000004D0 + (n)*4))   //n is from 0 to 3
#define FEC_LTPC_AT_RFDET_CON                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000004E0))
#define FEC_LTPC_AT_ADC_CON                                                     ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000004E4))
#define FEC_LTPC_AT_MEAS0_CON0                                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000004E8))
#define FEC_LTPC_AT_MEAS0_CON1                                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000004EC))
#define FEC_LTPC_AT_MEAS1_CON0                                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000004F0))
#define FEC_LTPC_AT_MEAS1_CON1                                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000004F4))
#define FEC_LTPC_AT_DETBPI0_CON                                                 ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000004F8))
#define FEC_LTPC_AT_DETBPI1_CON                                                 ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000004FC))
#define FEC_LTPC_AT_DETMIPI0_CON                                                ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000500))
#define FEC_LTPC_AT_DETMIPI1_CON                                                ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000504))
#define FEC_LTPC_EDC_RFDET_CON                                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000510))
#define FEC_LTPC_EDC_ADC_CON                                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000514))
#define FEC_LTPC_EDC_DETBPI_CON                                                 ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000518))
#define FEC_LTPC_TDE_MEAS_CON0                                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000051C))
#define FEC_LTPC_TDE_MEAS_CON1                                                  ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000520))
#define FEC_LTPC_ED_MEAS_CON0                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000524))
#define FEC_LTPC_ED_MEAS_CON1                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000528))
#define FEC_LTPC_ED_MEAS_CON2                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000052C))
#define FEC_LTPC_ED_MEAS_CON3                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000530))
#define FEC_LTPC_CIM3_MEAS_CON0                                                 ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000534))
#define FEC_LTPC_CIM3_MEAS_CON1                                                 ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000538))
#define FEC_LTPC_OTFC_MEAS_CON(n)                                               ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000540 + (n)*4))   //n is from 0 to 3
#define FEC_LTPC_AT_MIPI0_CON(n)                                                ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000550 + (n)*4))   //n is from 0 to 3
#define FEC_LTPC_AT_MIPI1_CON(n)                                                ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000560 + (n)*4))   //n is from 0 to 3
#define FEC_LTPC_PGABSI_CON                                                     ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000580))
#define FEC_LTPC_PGABSI_CON1                                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000584))
#define FEC_LTPC_PGABSI_CON2                                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000588))
#define FEC_LTPC_PGABSI_CON3                                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000058C))
#define FEC_LTPC_DC2DC_CON                                                      ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000590))
#define FEC_LTPC_DC2DC_CON1                                                     ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000594))
#define FEC_LTPC_DC2DC_CON2                                                     ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000598))
#define FEC_LTPC_DC2DC_CON3                                                     ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x0000059C))
#define FEC_LTPC_VBIAS_CON                                                      ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000005A0))
#define FEC_LTPC_VBIAS_CON1                                                     ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000005A4))
#define FEC_LTPC_VBIAS_CON2                                                     ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000005A8))
#define FEC_LTPC_VBIAS_CON3                                                     ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000005AC))
#define FEC_LTPC_VM_CON                                                         ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000005B0))
#define FEC_LTPC_VM_CON1                                                        ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000005B4))
#define FEC_LTPC_VM_CON2                                                        ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000005B8))
#define FEC_LTPC_VM_CON3                                                        ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000005BC))
#define FEC_LTPC_DFE_CON                                                        ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000005C0))
#define FEC_LTPC_PA_MIPI_CON                                                    ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000005D0))
#define FEC_LTPC_PA_MIPI_CON1                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000005D4))
#define FEC_LTPC_PA_MIPI_CON2                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000005D8))
#define FEC_LTPC_PA_MIPI_CON3                                                   ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000005DC))
#define FEC_LTPC_GLO_CON1                                                       ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000005F0))
#define FEC_LTPC_GLO_CON2                                                       ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000005F4))
#define FEC_LTPC_GLO_CON3                                                       ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x000005F8))
#define FEC_LTPC_GAIN_OFS_CTRL_BMP                                              ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000600))
#define FEC_LTPC_PS_CON                                                         ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000610))
#define FEC_LTPC_AEDC_CON                                                       ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000614))
#define FEC_LTPC_PWR_BUDGET_MCS                                                 ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000620))
#define FEC_LTPC_PWR_BUDGET_SMALL_RB                                            ((APBADDR32)(FEC_LTPC_LTE_TPC_REG_BASE + 0x00000624))





#define FEC_LTPC_OFFSET_BASE_LSB                                                (0)
#define FEC_LTPC_OFFSET_BASE_WIDTH                                              (32)
#define FEC_LTPC_OFFSET_BASE_MASK                                               (0xFFFFFFFF)





#define FEC_LTPC_TX_CC_PARAM_tx_cp_type_LSB                                     (24)
#define FEC_LTPC_TX_CC_PARAM_tx_cp_type_WIDTH                                   (1)
#define FEC_LTPC_TX_CC_PARAM_tx_cp_type_MASK                                    (0x01000000)
#define FEC_LTPC_TX_CC_PARAM_tx_cp_type_BIT                                     (0x01000000)

#define FEC_LTPC_TX_CC_PARAM_rfic_selection_LSB                                 (8)
#define FEC_LTPC_TX_CC_PARAM_rfic_selection_WIDTH                               (8)
#define FEC_LTPC_TX_CC_PARAM_rfic_selection_MASK                                (0x0000FF00)

#define FEC_LTPC_TX_CC_PARAM_tx_carrier_type_LSB                                (0)
#define FEC_LTPC_TX_CC_PARAM_tx_carrier_type_WIDTH                              (8)
#define FEC_LTPC_TX_CC_PARAM_tx_carrier_type_MASK                               (0x000000FF)

#define FEC_LTPC_TX_FREQ_tx_band_LSB                                            (24)
#define FEC_LTPC_TX_FREQ_tx_band_WIDTH                                          (8)
#define FEC_LTPC_TX_FREQ_tx_band_MASK                                           (0xFF000000)

#define FEC_LTPC_TX_FREQ_tx_cbw_LSB                                             (16)
#define FEC_LTPC_TX_FREQ_tx_cbw_WIDTH                                           (4)
#define FEC_LTPC_TX_FREQ_tx_cbw_MASK                                            (0x000F0000)

#define FEC_LTPC_TX_FREQ_tx_freq_LSB                                            (0)
#define FEC_LTPC_TX_FREQ_tx_freq_WIDTH                                          (16)
#define FEC_LTPC_TX_FREQ_tx_freq_MASK                                           (0x0000FFFF)

#define FEC_LTPC_TX_FREQ_CC1_tx_band_LSB                                        (24)
#define FEC_LTPC_TX_FREQ_CC1_tx_band_WIDTH                                      (8)
#define FEC_LTPC_TX_FREQ_CC1_tx_band_MASK                                       (0xFF000000)

#define FEC_LTPC_TX_FREQ_CC1_tx_cbw_LSB                                         (16)
#define FEC_LTPC_TX_FREQ_CC1_tx_cbw_WIDTH                                       (4)
#define FEC_LTPC_TX_FREQ_CC1_tx_cbw_MASK                                        (0x000F0000)

#define FEC_LTPC_TX_FREQ_CC1_tx_freq_LSB                                        (0)
#define FEC_LTPC_TX_FREQ_CC1_tx_freq_WIDTH                                      (16)
#define FEC_LTPC_TX_FREQ_CC1_tx_freq_MASK                                       (0x0000FFFF)

#define FEC_LTPC_TX_FREQ_CENTRAL_tx_freq_LSB                                    (0)
#define FEC_LTPC_TX_FREQ_CENTRAL_tx_freq_WIDTH                                  (16)
#define FEC_LTPC_TX_FREQ_CENTRAL_tx_freq_MASK                                   (0x0000FFFF)

#define FEC_LTPC_SET_PUCCH_RB_START_IDX_set_pucch_rb_start_idx_LSB              (0)
#define FEC_LTPC_SET_PUCCH_RB_START_IDX_set_pucch_rb_start_idx_WIDTH            (2)
#define FEC_LTPC_SET_PUCCH_RB_START_IDX_set_pucch_rb_start_idx_MASK             (0x00000003)

#define FEC_LTPC_TEMP_IDX_nor_temp_idx_LSB                                      (16)
#define FEC_LTPC_TEMP_IDX_nor_temp_idx_WIDTH                                    (8)
#define FEC_LTPC_TEMP_IDX_nor_temp_idx_MASK                                     (0x00FF0000)

#define FEC_LTPC_TEMP_IDX_temp_idx_LSB                                          (0)
#define FEC_LTPC_TEMP_IDX_temp_idx_WIDTH                                        (3)
#define FEC_LTPC_TEMP_IDX_temp_idx_MASK                                         (0x00000007)

#define FEC_LTPC_DFE_SFBDY_DIFF_dfe_sfbdy_diff_cc1_LSB                          (16)
#define FEC_LTPC_DFE_SFBDY_DIFF_dfe_sfbdy_diff_cc1_WIDTH                        (16)
#define FEC_LTPC_DFE_SFBDY_DIFF_dfe_sfbdy_diff_cc1_MASK                         (0xFFFF0000)

#define FEC_LTPC_DFE_SFBDY_DIFF_dfe_sfbdy_diff_cc0_LSB                          (0)
#define FEC_LTPC_DFE_SFBDY_DIFF_dfe_sfbdy_diff_cc0_WIDTH                        (16)
#define FEC_LTPC_DFE_SFBDY_DIFF_dfe_sfbdy_diff_cc0_MASK                         (0x0000FFFF)

#define FEC_LTPC_DFE_SFBDY_DIFF_PRACH_dfe_sfbdy_diff_fmt4_LSB                   (16)
#define FEC_LTPC_DFE_SFBDY_DIFF_PRACH_dfe_sfbdy_diff_fmt4_WIDTH                 (16)
#define FEC_LTPC_DFE_SFBDY_DIFF_PRACH_dfe_sfbdy_diff_fmt4_MASK                  (0xFFFF0000)

#define FEC_LTPC_DFE_SFBDY_DIFF_PRACH_dfe_sfbdy_diff_fmt0_3_LSB                 (0)
#define FEC_LTPC_DFE_SFBDY_DIFF_PRACH_dfe_sfbdy_diff_fmt0_3_WIDTH               (16)
#define FEC_LTPC_DFE_SFBDY_DIFF_PRACH_dfe_sfbdy_diff_fmt0_3_MASK                (0x0000FFFF)

#define FEC_LTPC_L0_TPC_MODE_l1_dpd_fac_cal_LSB                                 (3)
#define FEC_LTPC_L0_TPC_MODE_l1_dpd_fac_cal_WIDTH                               (1)
#define FEC_LTPC_L0_TPC_MODE_l1_dpd_fac_cal_MASK                                (0x00000008)
#define FEC_LTPC_L0_TPC_MODE_l1_dpd_fac_cal_BIT                                 (0x00000008)

#define FEC_LTPC_L0_TPC_MODE_l0_mode_LSB                                        (1)
#define FEC_LTPC_L0_TPC_MODE_l0_mode_WIDTH                                      (2)
#define FEC_LTPC_L0_TPC_MODE_l0_mode_MASK                                       (0x00000006)

#define FEC_LTPC_L0_TPC_MODE_l0_close_loop_dis_LSB                              (0)
#define FEC_LTPC_L0_TPC_MODE_l0_close_loop_dis_WIDTH                            (1)
#define FEC_LTPC_L0_TPC_MODE_l0_close_loop_dis_MASK                             (0x00000001)
#define FEC_LTPC_L0_TPC_MODE_l0_close_loop_dis_BIT                              (0x00000001)

#define FEC_LTPC_L0_TX_SF_PARAMS_l0_tpc_req_bmp_LSB                             (16)
#define FEC_LTPC_L0_TX_SF_PARAMS_l0_tpc_req_bmp_WIDTH                           (16)
#define FEC_LTPC_L0_TX_SF_PARAMS_l0_tpc_req_bmp_MASK                            (0xFFFF0000)

#define FEC_LTPC_L0_TX_SF_PARAMS_l0_tx_subframe_LSB                             (8)
#define FEC_LTPC_L0_TX_SF_PARAMS_l0_tx_subframe_WIDTH                           (4)
#define FEC_LTPC_L0_TX_SF_PARAMS_l0_tx_subframe_MASK                            (0x00000F00)

#define FEC_LTPC_L0_TX_SF_PARAMS_l0_mcs_LSB                                     (4)
#define FEC_LTPC_L0_TX_SF_PARAMS_l0_mcs_WIDTH                                   (4)
#define FEC_LTPC_L0_TX_SF_PARAMS_l0_mcs_MASK                                    (0x000000F0)

#define FEC_LTPC_L0_TX_SF_PARAMS_l0_is_special_sf_LSB                           (3)
#define FEC_LTPC_L0_TX_SF_PARAMS_l0_is_special_sf_WIDTH                         (1)
#define FEC_LTPC_L0_TX_SF_PARAMS_l0_is_special_sf_MASK                          (0x00000008)
#define FEC_LTPC_L0_TX_SF_PARAMS_l0_is_special_sf_BIT                           (0x00000008)

#define FEC_LTPC_L0_TX_SF_PARAMS_l0_tx_1st_LSB                                  (0)
#define FEC_LTPC_L0_TX_SF_PARAMS_l0_tx_1st_WIDTH                                (1)
#define FEC_LTPC_L0_TX_SF_PARAMS_l0_tx_1st_MASK                                 (0x00000001)
#define FEC_LTPC_L0_TX_SF_PARAMS_l0_tx_1st_BIT                                  (0x00000001)

#define FEC_LTPC_L0_TX_SF_PARAM_CC1_l0_tpc_req_bmp_LSB                          (16)
#define FEC_LTPC_L0_TX_SF_PARAM_CC1_l0_tpc_req_bmp_WIDTH                        (16)
#define FEC_LTPC_L0_TX_SF_PARAM_CC1_l0_tpc_req_bmp_MASK                         (0xFFFF0000)

#define FEC_LTPC_L0_TX_SF_PARAM_CC1_l0_tx_subframe_LSB                          (8)
#define FEC_LTPC_L0_TX_SF_PARAM_CC1_l0_tx_subframe_WIDTH                        (4)
#define FEC_LTPC_L0_TX_SF_PARAM_CC1_l0_tx_subframe_MASK                         (0x00000F00)

#define FEC_LTPC_L0_TX_SF_PARAM_CC1_l0_mcs_LSB                                  (4)
#define FEC_LTPC_L0_TX_SF_PARAM_CC1_l0_mcs_WIDTH                                (4)
#define FEC_LTPC_L0_TX_SF_PARAM_CC1_l0_mcs_MASK                                 (0x000000F0)

#define FEC_LTPC_L0_TX_SF_PARAM_CC1_l0_is_special_sf_LSB                        (3)
#define FEC_LTPC_L0_TX_SF_PARAM_CC1_l0_is_special_sf_WIDTH                      (1)
#define FEC_LTPC_L0_TX_SF_PARAM_CC1_l0_is_special_sf_MASK                       (0x00000008)
#define FEC_LTPC_L0_TX_SF_PARAM_CC1_l0_is_special_sf_BIT                        (0x00000008)

#define FEC_LTPC_L0_TX_SF_PARAM_CC1_l0_tx_1st_LSB                               (0)
#define FEC_LTPC_L0_TX_SF_PARAM_CC1_l0_tx_1st_WIDTH                             (1)
#define FEC_LTPC_L0_TX_SF_PARAM_CC1_l0_tx_1st_MASK                              (0x00000001)
#define FEC_LTPC_L0_TX_SF_PARAM_CC1_l0_tx_1st_BIT                               (0x00000001)

#define FEC_LTPC_L0_TX_SFBDY_l0_tx_sfbdy_LSB                                    (0)
#define FEC_LTPC_L0_TX_SFBDY_l0_tx_sfbdy_WIDTH                                  (20)
#define FEC_LTPC_L0_TX_SFBDY_l0_tx_sfbdy_MASK                                   (0x000FFFFF)

#define FEC_LTPC_L0_TPC_ON_TIME_l0_tpc_on_time_LSB                              (0)
#define FEC_LTPC_L0_TPC_ON_TIME_l0_tpc_on_time_WIDTH                            (32)
#define FEC_LTPC_L0_TPC_ON_TIME_l0_tpc_on_time_MASK                             (0xFFFFFFFF)

#define FEC_LTPC_L0_SRS_TPC_ON_TIME_l0_srs_tpc_on_time_LSB                      (0)
#define FEC_LTPC_L0_SRS_TPC_ON_TIME_l0_srs_tpc_on_time_WIDTH                    (32)
#define FEC_LTPC_L0_SRS_TPC_ON_TIME_l0_srs_tpc_on_time_MASK                     (0xFFFFFFFF)

#define FEC_LTPC_L0_TPC_ON_TIME_OFFSET_l0_tpc_on_time_offset_LSB                (0)
#define FEC_LTPC_L0_TPC_ON_TIME_OFFSET_l0_tpc_on_time_offset_WIDTH              (32)
#define FEC_LTPC_L0_TPC_ON_TIME_OFFSET_l0_tpc_on_time_offset_MASK               (0xFFFFFFFF)

#define FEC_LTPC_L0_TX_CC_MASK_l0_cc1_en_LSB                                    (17)
#define FEC_LTPC_L0_TX_CC_MASK_l0_cc1_en_WIDTH                                  (1)
#define FEC_LTPC_L0_TX_CC_MASK_l0_cc1_en_MASK                                   (0x00020000)
#define FEC_LTPC_L0_TX_CC_MASK_l0_cc1_en_BIT                                    (0x00020000)

#define FEC_LTPC_L0_TX_CC_MASK_l0_cc0_en_LSB                                    (16)
#define FEC_LTPC_L0_TX_CC_MASK_l0_cc0_en_WIDTH                                  (1)
#define FEC_LTPC_L0_TX_CC_MASK_l0_cc0_en_MASK                                   (0x00010000)
#define FEC_LTPC_L0_TX_CC_MASK_l0_cc0_en_BIT                                    (0x00010000)

#define FEC_LTPC_L0_SYNC_ID_l0_sync_id_LSB                                      (0)
#define FEC_LTPC_L0_SYNC_ID_l0_sync_id_WIDTH                                    (32)
#define FEC_LTPC_L0_SYNC_ID_l0_sync_id_MASK                                     (0xFFFFFFFF)

#define FEC_LTPC_L0_RESET_ERROR_l0_reset_error_LSB                              (0)
#define FEC_LTPC_L0_RESET_ERROR_l0_reset_error_WIDTH                            (1)
#define FEC_LTPC_L0_RESET_ERROR_l0_reset_error_MASK                             (0x00000001)
#define FEC_LTPC_L0_RESET_ERROR_l0_reset_error_BIT                              (0x00000001)

#define FEC_LTPC_L0_CANCELREQUEST_l0_ul_cc_index_LSB                            (16)
#define FEC_LTPC_L0_CANCELREQUEST_l0_ul_cc_index_WIDTH                          (2)
#define FEC_LTPC_L0_CANCELREQUEST_l0_ul_cc_index_MASK                           (0x00030000)

#define FEC_LTPC_L0_CANCELREQUEST_l0_cancelrequest_LSB                          (0)
#define FEC_LTPC_L0_CANCELREQUEST_l0_cancelrequest_WIDTH                        (9)
#define FEC_LTPC_L0_CANCELREQUEST_l0_cancelrequest_MASK                         (0x000001FF)

#define FEC_LTPC_L0_SRS_PARAMS_SRS_SYM_CNT_BMP_l0_srs_params_srs_sym_bmp_LSB    (8)
#define FEC_LTPC_L0_SRS_PARAMS_SRS_SYM_CNT_BMP_l0_srs_params_srs_sym_bmp_WIDTH  (2)
#define FEC_LTPC_L0_SRS_PARAMS_SRS_SYM_CNT_BMP_l0_srs_params_srs_sym_bmp_MASK   (0x00000300)

#define FEC_LTPC_L0_SRS_PARAMS_SRS_SYM_CNT_BMP_l0_srs_params_srs_sym_cnt_LSB    (0)
#define FEC_LTPC_L0_SRS_PARAMS_SRS_SYM_CNT_BMP_l0_srs_params_srs_sym_cnt_WIDTH  (8)
#define FEC_LTPC_L0_SRS_PARAMS_SRS_SYM_CNT_BMP_l0_srs_params_srs_sym_cnt_MASK   (0x000000FF)

#define FEC_LTPC_L0_SRS_PARAMS_SRS_SYM_CNT_BMP_CC1_l0_srs_params_srs_sym_bmp_LSB (8)
#define FEC_LTPC_L0_SRS_PARAMS_SRS_SYM_CNT_BMP_CC1_l0_srs_params_srs_sym_bmp_WIDTH (2)
#define FEC_LTPC_L0_SRS_PARAMS_SRS_SYM_CNT_BMP_CC1_l0_srs_params_srs_sym_bmp_MASK (0x00000300)

#define FEC_LTPC_L0_SRS_PARAMS_SRS_SYM_CNT_BMP_CC1_l0_srs_params_srs_sym_cnt_LSB (0)
#define FEC_LTPC_L0_SRS_PARAMS_SRS_SYM_CNT_BMP_CC1_l0_srs_params_srs_sym_cnt_WIDTH (8)
#define FEC_LTPC_L0_SRS_PARAMS_SRS_SYM_CNT_BMP_CC1_l0_srs_params_srs_sym_cnt_MASK (0x000000FF)

#define FEC_LTPC_L0_SRS_PARAMS_RB_START_l0_srs_params_rb_start_sym1_LSB         (16)
#define FEC_LTPC_L0_SRS_PARAMS_RB_START_l0_srs_params_rb_start_sym1_WIDTH       (7)
#define FEC_LTPC_L0_SRS_PARAMS_RB_START_l0_srs_params_rb_start_sym1_MASK        (0x007F0000)

#define FEC_LTPC_L0_SRS_PARAMS_RB_START_l0_srs_params_rb_start_sym0_LSB         (0)
#define FEC_LTPC_L0_SRS_PARAMS_RB_START_l0_srs_params_rb_start_sym0_WIDTH       (7)
#define FEC_LTPC_L0_SRS_PARAMS_RB_START_l0_srs_params_rb_start_sym0_MASK        (0x0000007F)

#define FEC_LTPC_L0_SRS_PARAMS_RB_LEN_DB_l0_srs_params_rb_num_db_LSB            (16)
#define FEC_LTPC_L0_SRS_PARAMS_RB_LEN_DB_l0_srs_params_rb_num_db_WIDTH          (13)
#define FEC_LTPC_L0_SRS_PARAMS_RB_LEN_DB_l0_srs_params_rb_num_db_MASK           (0x1FFF0000)

#define FEC_LTPC_L0_SRS_PARAMS_RB_LEN_DB_l0_srs_params_rb_len_LSB               (0)
#define FEC_LTPC_L0_SRS_PARAMS_RB_LEN_DB_l0_srs_params_rb_len_WIDTH             (7)
#define FEC_LTPC_L0_SRS_PARAMS_RB_LEN_DB_l0_srs_params_rb_len_MASK              (0x0000007F)

#define FEC_LTPC_L0_SRS_PARAMS_RB_START_CC1_l0_srs_params_rb_start_sym1_LSB     (16)
#define FEC_LTPC_L0_SRS_PARAMS_RB_START_CC1_l0_srs_params_rb_start_sym1_WIDTH   (7)
#define FEC_LTPC_L0_SRS_PARAMS_RB_START_CC1_l0_srs_params_rb_start_sym1_MASK    (0x007F0000)

#define FEC_LTPC_L0_SRS_PARAMS_RB_START_CC1_l0_srs_params_rb_start_sym0_LSB     (0)
#define FEC_LTPC_L0_SRS_PARAMS_RB_START_CC1_l0_srs_params_rb_start_sym0_WIDTH   (7)
#define FEC_LTPC_L0_SRS_PARAMS_RB_START_CC1_l0_srs_params_rb_start_sym0_MASK    (0x0000007F)

#define FEC_LTPC_L0_SRS_PARAMS_RB_LEN_DB_CC1_l0_srs_params_rb_num_db_LSB        (16)
#define FEC_LTPC_L0_SRS_PARAMS_RB_LEN_DB_CC1_l0_srs_params_rb_num_db_WIDTH      (13)
#define FEC_LTPC_L0_SRS_PARAMS_RB_LEN_DB_CC1_l0_srs_params_rb_num_db_MASK       (0x1FFF0000)

#define FEC_LTPC_L0_SRS_PARAMS_RB_LEN_DB_CC1_l0_srs_params_rb_len_LSB           (0)
#define FEC_LTPC_L0_SRS_PARAMS_RB_LEN_DB_CC1_l0_srs_params_rb_len_WIDTH         (7)
#define FEC_LTPC_L0_SRS_PARAMS_RB_LEN_DB_CC1_l0_srs_params_rb_len_MASK          (0x0000007F)

#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_l0_pusch_params_rb_start_s1_1_LSB     (24)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_l0_pusch_params_rb_start_s1_1_WIDTH   (7)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_l0_pusch_params_rb_start_s1_1_MASK    (0x7F000000)

#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_l0_pusch_params_rb_start_s1_0_LSB     (16)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_l0_pusch_params_rb_start_s1_0_WIDTH   (7)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_l0_pusch_params_rb_start_s1_0_MASK    (0x007F0000)

#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_l0_pusch_params_rb_start_s0_1_LSB     (8)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_l0_pusch_params_rb_start_s0_1_WIDTH   (7)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_l0_pusch_params_rb_start_s0_1_MASK    (0x00007F00)

#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_l0_pusch_params_rb_start_s0_0_LSB     (0)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_l0_pusch_params_rb_start_s0_0_WIDTH   (7)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_l0_pusch_params_rb_start_s0_0_MASK    (0x0000007F)

#define FEC_LTPC_L0_PUSCH_PARAMS_RB_LEN_l0_pusch_params_rb_len_1_LSB            (8)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_LEN_l0_pusch_params_rb_len_1_WIDTH          (7)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_LEN_l0_pusch_params_rb_len_1_MASK           (0x00007F00)

#define FEC_LTPC_L0_PUSCH_PARAMS_RB_LEN_l0_pusch_params_rb_len_0_LSB            (0)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_LEN_l0_pusch_params_rb_len_0_WIDTH          (7)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_LEN_l0_pusch_params_rb_len_0_MASK           (0x0000007F)

#define FEC_LTPC_L0_PUSCH_PARAMS_RB_NUM_DB_l0_pusch_params_rb_num_db1_LSB       (16)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_NUM_DB_l0_pusch_params_rb_num_db1_WIDTH     (13)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_NUM_DB_l0_pusch_params_rb_num_db1_MASK      (0x1FFF0000)

#define FEC_LTPC_L0_PUSCH_PARAMS_RB_NUM_DB_l0_pusch_params_rb_num_db0_LSB       (0)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_NUM_DB_l0_pusch_params_rb_num_db0_WIDTH     (13)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_NUM_DB_l0_pusch_params_rb_num_db0_MASK      (0x00001FFF)

#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_CC1_l0_pusch_params_rb_start_s1_1_LSB (24)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_CC1_l0_pusch_params_rb_start_s1_1_WIDTH (7)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_CC1_l0_pusch_params_rb_start_s1_1_MASK (0x7F000000)

#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_CC1_l0_pusch_params_rb_start_s1_0_LSB (16)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_CC1_l0_pusch_params_rb_start_s1_0_WIDTH (7)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_CC1_l0_pusch_params_rb_start_s1_0_MASK (0x007F0000)

#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_CC1_l0_pusch_params_rb_start_s0_1_LSB (8)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_CC1_l0_pusch_params_rb_start_s0_1_WIDTH (7)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_CC1_l0_pusch_params_rb_start_s0_1_MASK (0x00007F00)

#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_CC1_l0_pusch_params_rb_start_s0_0_LSB (0)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_CC1_l0_pusch_params_rb_start_s0_0_WIDTH (7)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_START_CC1_l0_pusch_params_rb_start_s0_0_MASK (0x0000007F)

#define FEC_LTPC_L0_PUSCH_PARAMS_RB_LEN_CC1_l0_pusch_params_rb_len_1_LSB        (8)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_LEN_CC1_l0_pusch_params_rb_len_1_WIDTH      (7)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_LEN_CC1_l0_pusch_params_rb_len_1_MASK       (0x00007F00)

#define FEC_LTPC_L0_PUSCH_PARAMS_RB_LEN_CC1_l0_pusch_params_rb_len_0_LSB        (0)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_LEN_CC1_l0_pusch_params_rb_len_0_WIDTH      (7)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_LEN_CC1_l0_pusch_params_rb_len_0_MASK       (0x0000007F)

#define FEC_LTPC_L0_PUSCH_PARAMS_RB_NUM_DB_CC1_l0_pusch_params_rb_num_db0_LSB   (0)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_NUM_DB_CC1_l0_pusch_params_rb_num_db0_WIDTH (13)
#define FEC_LTPC_L0_PUSCH_PARAMS_RB_NUM_DB_CC1_l0_pusch_params_rb_num_db0_MASK  (0x00001FFF)

#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S0_l0_pucch_params_rb_start_s0_3_LSB  (24)
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S0_l0_pucch_params_rb_start_s0_3_WIDTH (7)
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S0_l0_pucch_params_rb_start_s0_3_MASK (0x7F000000)

#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S0_l0_pucch_params_rb_start_s0_2_LSB  (16)
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S0_l0_pucch_params_rb_start_s0_2_WIDTH (7)
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S0_l0_pucch_params_rb_start_s0_2_MASK (0x007F0000)

#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S0_l0_pucch_params_rb_start_s0_1_LSB  (8)
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S0_l0_pucch_params_rb_start_s0_1_WIDTH (7)
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S0_l0_pucch_params_rb_start_s0_1_MASK (0x00007F00)

#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S0_l0_pucch_params_rb_start_s0_0_LSB  (0)
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S0_l0_pucch_params_rb_start_s0_0_WIDTH (7)
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S0_l0_pucch_params_rb_start_s0_0_MASK (0x0000007F)

#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S1_l0_pucch_params_rb_start_s1_3_LSB  (24)
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S1_l0_pucch_params_rb_start_s1_3_WIDTH (7)
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S1_l0_pucch_params_rb_start_s1_3_MASK (0x7F000000)

#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S1_l0_pucch_params_rb_start_s1_2_LSB  (16)
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S1_l0_pucch_params_rb_start_s1_2_WIDTH (7)
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S1_l0_pucch_params_rb_start_s1_2_MASK (0x007F0000)

#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S1_l0_pucch_params_rb_start_s1_1_LSB  (8)
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S1_l0_pucch_params_rb_start_s1_1_WIDTH (7)
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S1_l0_pucch_params_rb_start_s1_1_MASK (0x00007F00)

#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S1_l0_pucch_params_rb_start_s1_0_LSB  (0)
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S1_l0_pucch_params_rb_start_s1_0_WIDTH (7)
#define FEC_LTPC_L0_PUCCH_PARAMS_RB_START_S1_l0_pucch_params_rb_start_s1_0_MASK (0x0000007F)

#define FEC_LTPC_L0_ULSRS_P_OUT_pa_vcc_idx_LSB                                  (28)
#define FEC_LTPC_L0_ULSRS_P_OUT_pa_vcc_idx_WIDTH                                (4)
#define FEC_LTPC_L0_ULSRS_P_OUT_pa_vcc_idx_MASK                                 (0xF0000000)

#define FEC_LTPC_L0_ULSRS_P_OUT_pa_gain_mode_idx_LSB                            (24)
#define FEC_LTPC_L0_ULSRS_P_OUT_pa_gain_mode_idx_WIDTH                          (3)
#define FEC_LTPC_L0_ULSRS_P_OUT_pa_gain_mode_idx_MASK                           (0x07000000)

#define FEC_LTPC_L0_ULSRS_P_OUT_p_out_LSB                                       (0)
#define FEC_LTPC_L0_ULSRS_P_OUT_p_out_WIDTH                                     (17)
#define FEC_LTPC_L0_ULSRS_P_OUT_p_out_MASK                                      (0x0001FFFF)

#define FEC_LTPC_L0_ULSRS_PA_NOMINAL_GAIN_DB_l0_srs_cpl_gain_db_LSB             (16)
#define FEC_LTPC_L0_ULSRS_PA_NOMINAL_GAIN_DB_l0_srs_cpl_gain_db_WIDTH           (16)
#define FEC_LTPC_L0_ULSRS_PA_NOMINAL_GAIN_DB_l0_srs_cpl_gain_db_MASK            (0xFFFF0000)

#define FEC_LTPC_L0_ULSRS_PA_NOMINAL_GAIN_DB_pa_nominal_gain_db_LSB             (0)
#define FEC_LTPC_L0_ULSRS_PA_NOMINAL_GAIN_DB_pa_nominal_gain_db_WIDTH           (16)
#define FEC_LTPC_L0_ULSRS_PA_NOMINAL_GAIN_DB_pa_nominal_gain_db_MASK            (0x0000FFFF)

#define FEC_LTPC_L0_ULSRS_P_OUT_CC1_pa_vcc_idx_LSB                              (28)
#define FEC_LTPC_L0_ULSRS_P_OUT_CC1_pa_vcc_idx_WIDTH                            (4)
#define FEC_LTPC_L0_ULSRS_P_OUT_CC1_pa_vcc_idx_MASK                             (0xF0000000)

#define FEC_LTPC_L0_ULSRS_P_OUT_CC1_pa_gain_mode_idx_LSB                        (24)
#define FEC_LTPC_L0_ULSRS_P_OUT_CC1_pa_gain_mode_idx_WIDTH                      (3)
#define FEC_LTPC_L0_ULSRS_P_OUT_CC1_pa_gain_mode_idx_MASK                       (0x07000000)

#define FEC_LTPC_L0_ULSRS_P_OUT_CC1_p_out_LSB                                   (0)
#define FEC_LTPC_L0_ULSRS_P_OUT_CC1_p_out_WIDTH                                 (17)
#define FEC_LTPC_L0_ULSRS_P_OUT_CC1_p_out_MASK                                  (0x0001FFFF)

#define FEC_LTPC_L0_ULSRS_PA_NOMINAL_GAIN_DB_CC1_l0_srs_cpl_gain_db_cc1_LSB     (16)
#define FEC_LTPC_L0_ULSRS_PA_NOMINAL_GAIN_DB_CC1_l0_srs_cpl_gain_db_cc1_WIDTH   (16)
#define FEC_LTPC_L0_ULSRS_PA_NOMINAL_GAIN_DB_CC1_l0_srs_cpl_gain_db_cc1_MASK    (0xFFFF0000)

#define FEC_LTPC_L0_ULSRS_PA_NOMINAL_GAIN_DB_CC1_pa_nominal_gain_db_LSB         (0)
#define FEC_LTPC_L0_ULSRS_PA_NOMINAL_GAIN_DB_CC1_pa_nominal_gain_db_WIDTH       (16)
#define FEC_LTPC_L0_ULSRS_PA_NOMINAL_GAIN_DB_CC1_pa_nominal_gain_db_MASK        (0x0000FFFF)

#define FEC_LTPC_L0_SLOT0_POW_l0_slot0_pa_vcc_idx_LSB                           (28)
#define FEC_LTPC_L0_SLOT0_POW_l0_slot0_pa_vcc_idx_WIDTH                         (4)
#define FEC_LTPC_L0_SLOT0_POW_l0_slot0_pa_vcc_idx_MASK                          (0xF0000000)

#define FEC_LTPC_L0_SLOT0_POW_l0_slot0_pa_gain_mode_idx_LSB                     (24)
#define FEC_LTPC_L0_SLOT0_POW_l0_slot0_pa_gain_mode_idx_WIDTH                   (3)
#define FEC_LTPC_L0_SLOT0_POW_l0_slot0_pa_gain_mode_idx_MASK                    (0x07000000)

#define FEC_LTPC_L0_SLOT0_POW_l0_slot0_p_out_LSB                                (0)
#define FEC_LTPC_L0_SLOT0_POW_l0_slot0_p_out_WIDTH                              (17)
#define FEC_LTPC_L0_SLOT0_POW_l0_slot0_p_out_MASK                               (0x0001FFFF)

#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_0_l0_slot0_cpl_gain_db_0_LSB       (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_0_l0_slot0_cpl_gain_db_0_WIDTH     (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_0_l0_slot0_cpl_gain_db_0_MASK      (0xFFFF0000)

#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_0_l0_slot0_pa_nominal_gain_db_0_LSB (0)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_0_l0_slot0_pa_nominal_gain_db_0_WIDTH (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_0_l0_slot0_pa_nominal_gain_db_0_MASK (0x0000FFFF)

#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_1_l0_slot0_cpl_gain_db_1_LSB       (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_1_l0_slot0_cpl_gain_db_1_WIDTH     (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_1_l0_slot0_cpl_gain_db_1_MASK      (0xFFFF0000)

#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_1_l0_slot0_pa_nominal_gain_db_1_LSB (0)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_1_l0_slot0_pa_nominal_gain_db_1_WIDTH (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_1_l0_slot0_pa_nominal_gain_db_1_MASK (0x0000FFFF)

#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_2_l0_slot0_cpl_gain_db_2_LSB       (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_2_l0_slot0_cpl_gain_db_2_WIDTH     (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_2_l0_slot0_cpl_gain_db_2_MASK      (0xFFFF0000)

#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_2_l0_slot0_pa_nominal_gain_db_2_LSB (0)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_2_l0_slot0_pa_nominal_gain_db_2_WIDTH (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_2_l0_slot0_pa_nominal_gain_db_2_MASK (0x0000FFFF)

#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_3_l0_slot0_cpl_gain_db_3_LSB       (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_3_l0_slot0_cpl_gain_db_3_WIDTH     (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_3_l0_slot0_cpl_gain_db_3_MASK      (0xFFFF0000)

#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_3_l0_slot0_pa_nominal_gain_db_3_LSB (0)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_3_l0_slot0_pa_nominal_gain_db_3_WIDTH (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_3_l0_slot0_pa_nominal_gain_db_3_MASK (0x0000FFFF)

#define FEC_LTPC_L0_SLOT1_POW_l0_slot0_pa_vcc_idx_LSB                           (28)
#define FEC_LTPC_L0_SLOT1_POW_l0_slot0_pa_vcc_idx_WIDTH                         (4)
#define FEC_LTPC_L0_SLOT1_POW_l0_slot0_pa_vcc_idx_MASK                          (0xF0000000)

#define FEC_LTPC_L0_SLOT1_POW_l0_slot0_pa_gain_mode_idx_LSB                     (24)
#define FEC_LTPC_L0_SLOT1_POW_l0_slot0_pa_gain_mode_idx_WIDTH                   (3)
#define FEC_LTPC_L0_SLOT1_POW_l0_slot0_pa_gain_mode_idx_MASK                    (0x07000000)

#define FEC_LTPC_L0_SLOT1_POW_l0_slot0_p_out_LSB                                (0)
#define FEC_LTPC_L0_SLOT1_POW_l0_slot0_p_out_WIDTH                              (17)
#define FEC_LTPC_L0_SLOT1_POW_l0_slot0_p_out_MASK                               (0x0001FFFF)

#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_0_l0_slot1_cpl_gain_db_0_LSB       (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_0_l0_slot1_cpl_gain_db_0_WIDTH     (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_0_l0_slot1_cpl_gain_db_0_MASK      (0xFFFF0000)

#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_0_l0_slot1_pa_nominal_gain_db_0_LSB (0)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_0_l0_slot1_pa_nominal_gain_db_0_WIDTH (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_0_l0_slot1_pa_nominal_gain_db_0_MASK (0x0000FFFF)

#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_1_l0_slot1_cpl_gain_db_1_LSB       (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_1_l0_slot1_cpl_gain_db_1_WIDTH     (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_1_l0_slot1_cpl_gain_db_1_MASK      (0xFFFF0000)

#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_1_l0_slot1_pa_nominal_gain_db_1_LSB (0)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_1_l0_slot1_pa_nominal_gain_db_1_WIDTH (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_1_l0_slot1_pa_nominal_gain_db_1_MASK (0x0000FFFF)

#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_2_l0_slot1_cpl_gain_db_2_LSB       (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_2_l0_slot1_cpl_gain_db_2_WIDTH     (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_2_l0_slot1_cpl_gain_db_2_MASK      (0xFFFF0000)

#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_2_l0_slot1_pa_nominal_gain_db_2_LSB (0)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_2_l0_slot1_pa_nominal_gain_db_2_WIDTH (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_2_l0_slot1_pa_nominal_gain_db_2_MASK (0x0000FFFF)

#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_3_l0_slot1_cpl_gain_db_3_LSB       (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_3_l0_slot1_cpl_gain_db_3_WIDTH     (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_3_l0_slot1_cpl_gain_db_3_MASK      (0xFFFF0000)

#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_3_l0_slot1_pa_nominal_gain_db_3_LSB (0)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_3_l0_slot1_pa_nominal_gain_db_3_WIDTH (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_3_l0_slot1_pa_nominal_gain_db_3_MASK (0x0000FFFF)

#define FEC_LTPC_L0_PRACH_PARAMS_RB_START_zc_num_db_LSB                         (16)
#define FEC_LTPC_L0_PRACH_PARAMS_RB_START_zc_num_db_WIDTH                       (13)
#define FEC_LTPC_L0_PRACH_PARAMS_RB_START_zc_num_db_MASK                        (0x1FFF0000)

#define FEC_LTPC_L0_PRACH_PARAMS_RB_START_rb_start_LSB                          (0)
#define FEC_LTPC_L0_PRACH_PARAMS_RB_START_rb_start_WIDTH                        (7)
#define FEC_LTPC_L0_PRACH_PARAMS_RB_START_rb_start_MASK                         (0x0000007F)

#define FEC_LTPC_L0_PRACH_PA_NOMINAL_GAIN_DB_0_l0_prach_cpl_gain_db_LSB         (16)
#define FEC_LTPC_L0_PRACH_PA_NOMINAL_GAIN_DB_0_l0_prach_cpl_gain_db_WIDTH       (16)
#define FEC_LTPC_L0_PRACH_PA_NOMINAL_GAIN_DB_0_l0_prach_cpl_gain_db_MASK        (0xFFFF0000)

#define FEC_LTPC_L0_PRACH_PA_NOMINAL_GAIN_DB_0_l0_prach_pa_nominal_gain_db_0_LSB (0)
#define FEC_LTPC_L0_PRACH_PA_NOMINAL_GAIN_DB_0_l0_prach_pa_nominal_gain_db_0_WIDTH (16)
#define FEC_LTPC_L0_PRACH_PA_NOMINAL_GAIN_DB_0_l0_prach_pa_nominal_gain_db_0_MASK (0x0000FFFF)

#define FEC_LTPC_L0_PRACH_ANTI_DROOPING_l0_prach_accu_anti_droop_analog_db_0_LSB (16)
#define FEC_LTPC_L0_PRACH_ANTI_DROOPING_l0_prach_accu_anti_droop_analog_db_0_WIDTH (16)
#define FEC_LTPC_L0_PRACH_ANTI_DROOPING_l0_prach_accu_anti_droop_analog_db_0_MASK (0xFFFF0000)

#define FEC_LTPC_L0_PRACH_ANTI_DROOPING_l0_prach_g_nor_anti_drooping_0_LSB      (0)
#define FEC_LTPC_L0_PRACH_ANTI_DROOPING_l0_prach_g_nor_anti_drooping_0_WIDTH    (16)
#define FEC_LTPC_L0_PRACH_ANTI_DROOPING_l0_prach_g_nor_anti_drooping_0_MASK     (0x0000FFFF)

#define FEC_LTPC_L0_PRACH_PARAMS_FORMAT_l0_format_LSB                           (0)
#define FEC_LTPC_L0_PRACH_PARAMS_FORMAT_l0_format_WIDTH                         (3)
#define FEC_LTPC_L0_PRACH_PARAMS_FORMAT_l0_format_MASK                          (0x00000007)

#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_rf_pga_table_LSB                          (31)
#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_rf_pga_table_WIDTH                        (1)
#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_rf_pga_table_MASK                         (0x80000000)
#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_rf_pga_table_BIT                          (0x80000000)

#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_rf_gain_idx_LSB                           (24)
#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_rf_gain_idx_WIDTH                         (7)
#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_rf_gain_idx_MASK                          (0x7F000000)

#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_det_gain_idx_LSB                          (16)
#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_det_gain_idx_WIDTH                        (8)
#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_det_gain_idx_MASK                         (0x00FF0000)

#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_pa_mode_LSB                               (12)
#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_pa_mode_WIDTH                             (2)
#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_pa_mode_MASK                              (0x00003000)

#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_vm1_LSB                                   (9)
#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_vm1_WIDTH                                 (1)
#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_vm1_MASK                                  (0x00000200)
#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_vm1_BIT                                   (0x00000200)

#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_vm0_LSB                                   (8)
#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_vm0_WIDTH                                 (1)
#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_vm0_MASK                                  (0x00000100)
#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_vm0_BIT                                   (0x00000100)

#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_pa_vcc_idx_LSB                            (0)
#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_pa_vcc_idx_WIDTH                          (8)
#define FEC_LTPC_L0_FOR_TPC_HW_VAL_l0_pa_vcc_idx_MASK                           (0x000000FF)

#define FEC_LTPC_L0_FORCE_BB_BACKOFF_l0_lna_code_LSB                            (24)
#define FEC_LTPC_L0_FORCE_BB_BACKOFF_l0_lna_code_WIDTH                          (8)
#define FEC_LTPC_L0_FORCE_BB_BACKOFF_l0_lna_code_MASK                           (0xFF000000)

#define FEC_LTPC_L0_FORCE_BB_BACKOFF_l0_pga_code_LSB                            (16)
#define FEC_LTPC_L0_FORCE_BB_BACKOFF_l0_pga_code_WIDTH                          (8)
#define FEC_LTPC_L0_FORCE_BB_BACKOFF_l0_pga_code_MASK                           (0x00FF0000)

#define FEC_LTPC_L0_FORCE_BB_BACKOFF_l0_bb_backoff_LSB                          (0)
#define FEC_LTPC_L0_FORCE_BB_BACKOFF_l0_bb_backoff_WIDTH                        (16)
#define FEC_LTPC_L0_FORCE_BB_BACKOFF_l0_bb_backoff_MASK                         (0x0000FFFF)

#define FEC_LTPC_L0_FORCE_BB_BACKOFF_CC1_l0_lna_code_LSB                        (24)
#define FEC_LTPC_L0_FORCE_BB_BACKOFF_CC1_l0_lna_code_WIDTH                      (8)
#define FEC_LTPC_L0_FORCE_BB_BACKOFF_CC1_l0_lna_code_MASK                       (0xFF000000)

#define FEC_LTPC_L0_FORCE_BB_BACKOFF_CC1_l0_pga_code_LSB                        (16)
#define FEC_LTPC_L0_FORCE_BB_BACKOFF_CC1_l0_pga_code_WIDTH                      (8)
#define FEC_LTPC_L0_FORCE_BB_BACKOFF_CC1_l0_pga_code_MASK                       (0x00FF0000)

#define FEC_LTPC_L0_FORCE_BB_BACKOFF_CC1_l0_bb_backoff_cc1_LSB                  (0)
#define FEC_LTPC_L0_FORCE_BB_BACKOFF_CC1_l0_bb_backoff_cc1_WIDTH                (16)
#define FEC_LTPC_L0_FORCE_BB_BACKOFF_CC1_l0_bb_backoff_cc1_MASK                 (0x0000FFFF)

#define FEC_LTPC_L0_COUPLER_LOSS_l0_coupler_loss_LSB                            (0)
#define FEC_LTPC_L0_COUPLER_LOSS_l0_coupler_loss_WIDTH                          (16)
#define FEC_LTPC_L0_COUPLER_LOSS_l0_coupler_loss_MASK                           (0x0000FFFF)

#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_rf_pga_table_LSB                      (31)
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_rf_pga_table_WIDTH                    (1)
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_rf_pga_table_MASK                     (0x80000000)
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_rf_pga_table_BIT                      (0x80000000)

#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_rf_gain_idx_LSB                       (24)
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_rf_gain_idx_WIDTH                     (7)
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_rf_gain_idx_MASK                      (0x7F000000)

#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_det_gain_idx_LSB                      (16)
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_det_gain_idx_WIDTH                    (8)
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_det_gain_idx_MASK                     (0x00FF0000)

#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_pa_mode_LSB                           (12)
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_pa_mode_WIDTH                         (2)
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_pa_mode_MASK                          (0x00003000)

#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_vm1_LSB                               (9)
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_vm1_WIDTH                             (1)
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_vm1_MASK                              (0x00000200)
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_vm1_BIT                               (0x00000200)

#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_vm0_LSB                               (8)
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_vm0_WIDTH                             (1)
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_vm0_MASK                              (0x00000100)
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_vm0_BIT                               (0x00000100)

#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_pa_vcc_idx_LSB                        (0)
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_pa_vcc_idx_WIDTH                      (8)
#define FEC_LTPC_L0_FOR_TPC_SRS_HW_VAL_l0_pa_vcc_idx_MASK                       (0x000000FF)

#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_l0_lna_code_LSB                        (24)
#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_l0_lna_code_WIDTH                      (8)
#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_l0_lna_code_MASK                       (0xFF000000)

#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_l0_pga_code_LSB                        (16)
#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_l0_pga_code_WIDTH                      (8)
#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_l0_pga_code_MASK                       (0x00FF0000)

#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_l0_bb_backoff_LSB                      (0)
#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_l0_bb_backoff_WIDTH                    (16)
#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_l0_bb_backoff_MASK                     (0x0000FFFF)

#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_CC1_l0_lna_code_LSB                    (24)
#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_CC1_l0_lna_code_WIDTH                  (8)
#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_CC1_l0_lna_code_MASK                   (0xFF000000)

#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_CC1_l0_pga_code_LSB                    (16)
#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_CC1_l0_pga_code_WIDTH                  (8)
#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_CC1_l0_pga_code_MASK                   (0x00FF0000)

#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_CC1_l0_bb_backoff_cc1_LSB              (0)
#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_CC1_l0_bb_backoff_cc1_WIDTH            (16)
#define FEC_LTPC_L0_FORCE_SRS_BB_BACKOFF_CC1_l0_bb_backoff_cc1_MASK             (0x0000FFFF)

#define FEC_LTPC_L0_COUPLER_LOSS_SRS0_l0_coupler_loss_LSB                       (0)
#define FEC_LTPC_L0_COUPLER_LOSS_SRS0_l0_coupler_loss_WIDTH                     (16)
#define FEC_LTPC_L0_COUPLER_LOSS_SRS0_l0_coupler_loss_MASK                      (0x0000FFFF)

#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_rf_pga_table_LSB                     (31)
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_rf_pga_table_WIDTH                   (1)
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_rf_pga_table_MASK                    (0x80000000)
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_rf_pga_table_BIT                     (0x80000000)

#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_rf_gain_idx_LSB                      (24)
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_rf_gain_idx_WIDTH                    (7)
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_rf_gain_idx_MASK                     (0x7F000000)

#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_det_gain_idx_LSB                     (16)
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_det_gain_idx_WIDTH                   (8)
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_det_gain_idx_MASK                    (0x00FF0000)

#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_pa_mode_LSB                          (12)
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_pa_mode_WIDTH                        (2)
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_pa_mode_MASK                         (0x00003000)

#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_vm1_LSB                              (9)
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_vm1_WIDTH                            (1)
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_vm1_MASK                             (0x00000200)
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_vm1_BIT                              (0x00000200)

#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_vm0_LSB                              (8)
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_vm0_WIDTH                            (1)
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_vm0_MASK                             (0x00000100)
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_vm0_BIT                              (0x00000100)

#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_pa_vcc_idx_LSB                       (0)
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_pa_vcc_idx_WIDTH                     (8)
#define FEC_LTPC_L0_FOR_TPC_SRS1_HW_VAL_l0_pa_vcc_idx_MASK                      (0x000000FF)

#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_l0_lna_code_LSB                       (24)
#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_l0_lna_code_WIDTH                     (8)
#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_l0_lna_code_MASK                      (0xFF000000)

#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_l0_pga_code_LSB                       (16)
#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_l0_pga_code_WIDTH                     (8)
#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_l0_pga_code_MASK                      (0x00FF0000)

#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_l0_bb_backoff_LSB                     (0)
#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_l0_bb_backoff_WIDTH                   (16)
#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_l0_bb_backoff_MASK                    (0x0000FFFF)

#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_CC1_l0_lna_code_LSB                   (24)
#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_CC1_l0_lna_code_WIDTH                 (8)
#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_CC1_l0_lna_code_MASK                  (0xFF000000)

#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_CC1_l0_pga_code_LSB                   (16)
#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_CC1_l0_pga_code_WIDTH                 (8)
#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_CC1_l0_pga_code_MASK                  (0x00FF0000)

#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_CC1_l0_bb_backoff_cc1_LSB             (0)
#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_CC1_l0_bb_backoff_cc1_WIDTH           (16)
#define FEC_LTPC_L0_FORCE_SRS1_BB_BACKOFF_CC1_l0_bb_backoff_cc1_MASK            (0x0000FFFF)

#define FEC_LTPC_L0_COUPLER_LOSS_SRS1_l0_coupler_loss_LSB                       (0)
#define FEC_LTPC_L0_COUPLER_LOSS_SRS1_l0_coupler_loss_WIDTH                     (16)
#define FEC_LTPC_L0_COUPLER_LOSS_SRS1_l0_coupler_loss_MASK                      (0x0000FFFF)

#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_0_l0_slot0_cpl_gain_db_0_LSB   (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_0_l0_slot0_cpl_gain_db_0_WIDTH (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_0_l0_slot0_cpl_gain_db_0_MASK  (0xFFFF0000)

#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_0_l0_slot0_pa_nominal_gain_db_0_LSB (0)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_0_l0_slot0_pa_nominal_gain_db_0_WIDTH (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_0_l0_slot0_pa_nominal_gain_db_0_MASK (0x0000FFFF)

#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_1_l0_slot0_cpl_gain_db_1_LSB   (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_1_l0_slot0_cpl_gain_db_1_WIDTH (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_1_l0_slot0_cpl_gain_db_1_MASK  (0xFFFF0000)

#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_1_l0_slot0_pa_nominal_gain_db_1_LSB (0)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_1_l0_slot0_pa_nominal_gain_db_1_WIDTH (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_1_l0_slot0_pa_nominal_gain_db_1_MASK (0x0000FFFF)

#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_2_l0_slot0_cpl_gain_db_2_LSB   (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_2_l0_slot0_cpl_gain_db_2_WIDTH (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_2_l0_slot0_cpl_gain_db_2_MASK  (0xFFFF0000)

#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_2_l0_slot0_pa_nominal_gain_db_2_LSB (0)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_2_l0_slot0_pa_nominal_gain_db_2_WIDTH (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_2_l0_slot0_pa_nominal_gain_db_2_MASK (0x0000FFFF)

#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_3_l0_slot0_cpl_gain_db_3_LSB   (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_3_l0_slot0_cpl_gain_db_3_WIDTH (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_3_l0_slot0_cpl_gain_db_3_MASK  (0xFFFF0000)

#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_3_l0_slot0_pa_nominal_gain_db_3_LSB (0)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_3_l0_slot0_pa_nominal_gain_db_3_WIDTH (16)
#define FEC_LTPC_L0_SLOT0_PA_NOMINAL_GAIN_DB_CC1_3_l0_slot0_pa_nominal_gain_db_3_MASK (0x0000FFFF)

#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_0_l0_slot1_cpl_gain_db_0_LSB   (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_0_l0_slot1_cpl_gain_db_0_WIDTH (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_0_l0_slot1_cpl_gain_db_0_MASK  (0xFFFF0000)

#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_0_l0_slot1_pa_nominal_gain_db_0_LSB (0)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_0_l0_slot1_pa_nominal_gain_db_0_WIDTH (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_0_l0_slot1_pa_nominal_gain_db_0_MASK (0x0000FFFF)

#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_1_l0_slot1_cpl_gain_db_1_LSB   (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_1_l0_slot1_cpl_gain_db_1_WIDTH (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_1_l0_slot1_cpl_gain_db_1_MASK  (0xFFFF0000)

#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_1_l0_slot1_pa_nominal_gain_db_1_LSB (0)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_1_l0_slot1_pa_nominal_gain_db_1_WIDTH (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_1_l0_slot1_pa_nominal_gain_db_1_MASK (0x0000FFFF)

#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_2_l0_slot1_cpl_gain_db_2_LSB   (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_2_l0_slot1_cpl_gain_db_2_WIDTH (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_2_l0_slot1_cpl_gain_db_2_MASK  (0xFFFF0000)

#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_2_l0_slot1_pa_nominal_gain_db_2_LSB (0)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_2_l0_slot1_pa_nominal_gain_db_2_WIDTH (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_2_l0_slot1_pa_nominal_gain_db_2_MASK (0x0000FFFF)

#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_3_l0_slot1_cpl_gain_db_3_LSB   (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_3_l0_slot1_cpl_gain_db_3_WIDTH (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_3_l0_slot1_cpl_gain_db_3_MASK  (0xFFFF0000)

#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_3_l0_slot1_pa_nominal_gain_db_3_LSB (0)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_3_l0_slot1_pa_nominal_gain_db_3_WIDTH (16)
#define FEC_LTPC_L0_SLOT1_PA_NOMINAL_GAIN_DB_CC1_3_l0_slot1_pa_nominal_gain_db_3_MASK (0x0000FFFF)

#define FEC_LTPC_L1_TPC_MODE_l1_dpd_fac_cal_LSB                                 (3)
#define FEC_LTPC_L1_TPC_MODE_l1_dpd_fac_cal_WIDTH                               (1)
#define FEC_LTPC_L1_TPC_MODE_l1_dpd_fac_cal_MASK                                (0x00000008)
#define FEC_LTPC_L1_TPC_MODE_l1_dpd_fac_cal_BIT                                 (0x00000008)

#define FEC_LTPC_L1_TPC_MODE_l1_mode_LSB                                        (1)
#define FEC_LTPC_L1_TPC_MODE_l1_mode_WIDTH                                      (2)
#define FEC_LTPC_L1_TPC_MODE_l1_mode_MASK                                       (0x00000006)

#define FEC_LTPC_L1_TPC_MODE_l1_close_loop_dis_LSB                              (0)
#define FEC_LTPC_L1_TPC_MODE_l1_close_loop_dis_WIDTH                            (1)
#define FEC_LTPC_L1_TPC_MODE_l1_close_loop_dis_MASK                             (0x00000001)
#define FEC_LTPC_L1_TPC_MODE_l1_close_loop_dis_BIT                              (0x00000001)

#define FEC_LTPC_L1_TX_SF_PARAMS_l1_tpc_req_bmp_LSB                             (16)
#define FEC_LTPC_L1_TX_SF_PARAMS_l1_tpc_req_bmp_WIDTH                           (16)
#define FEC_LTPC_L1_TX_SF_PARAMS_l1_tpc_req_bmp_MASK                            (0xFFFF0000)

#define FEC_LTPC_L1_TX_SF_PARAMS_l1_tx_subframe_LSB                             (8)
#define FEC_LTPC_L1_TX_SF_PARAMS_l1_tx_subframe_WIDTH                           (4)
#define FEC_LTPC_L1_TX_SF_PARAMS_l1_tx_subframe_MASK                            (0x00000F00)

#define FEC_LTPC_L1_TX_SF_PARAMS_l1_mcs_LSB                                     (4)
#define FEC_LTPC_L1_TX_SF_PARAMS_l1_mcs_WIDTH                                   (4)
#define FEC_LTPC_L1_TX_SF_PARAMS_l1_mcs_MASK                                    (0x000000F0)

#define FEC_LTPC_L1_TX_SF_PARAMS_l1_is_special_sf_LSB                           (3)
#define FEC_LTPC_L1_TX_SF_PARAMS_l1_is_special_sf_WIDTH                         (1)
#define FEC_LTPC_L1_TX_SF_PARAMS_l1_is_special_sf_MASK                          (0x00000008)
#define FEC_LTPC_L1_TX_SF_PARAMS_l1_is_special_sf_BIT                           (0x00000008)

#define FEC_LTPC_L1_TX_SF_PARAMS_l1_tx_1st_LSB                                  (0)
#define FEC_LTPC_L1_TX_SF_PARAMS_l1_tx_1st_WIDTH                                (1)
#define FEC_LTPC_L1_TX_SF_PARAMS_l1_tx_1st_MASK                                 (0x00000001)
#define FEC_LTPC_L1_TX_SF_PARAMS_l1_tx_1st_BIT                                  (0x00000001)

#define FEC_LTPC_L1_TX_SF_PARAM_CC1_l1_tpc_req_bmp_LSB                          (16)
#define FEC_LTPC_L1_TX_SF_PARAM_CC1_l1_tpc_req_bmp_WIDTH                        (16)
#define FEC_LTPC_L1_TX_SF_PARAM_CC1_l1_tpc_req_bmp_MASK                         (0xFFFF0000)

#define FEC_LTPC_L1_TX_SF_PARAM_CC1_l1_tx_subframe_LSB                          (8)
#define FEC_LTPC_L1_TX_SF_PARAM_CC1_l1_tx_subframe_WIDTH                        (4)
#define FEC_LTPC_L1_TX_SF_PARAM_CC1_l1_tx_subframe_MASK                         (0x00000F00)

#define FEC_LTPC_L1_TX_SF_PARAM_CC1_l1_mcs_LSB                                  (4)
#define FEC_LTPC_L1_TX_SF_PARAM_CC1_l1_mcs_WIDTH                                (4)
#define FEC_LTPC_L1_TX_SF_PARAM_CC1_l1_mcs_MASK                                 (0x000000F0)

#define FEC_LTPC_L1_TX_SF_PARAM_CC1_l1_is_special_sf_LSB                        (3)
#define FEC_LTPC_L1_TX_SF_PARAM_CC1_l1_is_special_sf_WIDTH                      (1)
#define FEC_LTPC_L1_TX_SF_PARAM_CC1_l1_is_special_sf_MASK                       (0x00000008)
#define FEC_LTPC_L1_TX_SF_PARAM_CC1_l1_is_special_sf_BIT                        (0x00000008)

#define FEC_LTPC_L1_TX_SF_PARAM_CC1_l1_tx_1st_LSB                               (0)
#define FEC_LTPC_L1_TX_SF_PARAM_CC1_l1_tx_1st_WIDTH                             (1)
#define FEC_LTPC_L1_TX_SF_PARAM_CC1_l1_tx_1st_MASK                              (0x00000001)
#define FEC_LTPC_L1_TX_SF_PARAM_CC1_l1_tx_1st_BIT                               (0x00000001)

#define FEC_LTPC_L1_TX_SFBDY_l1_tx_sfbdy_LSB                                    (0)
#define FEC_LTPC_L1_TX_SFBDY_l1_tx_sfbdy_WIDTH                                  (20)
#define FEC_LTPC_L1_TX_SFBDY_l1_tx_sfbdy_MASK                                   (0x000FFFFF)

#define FEC_LTPC_L1_TPC_ON_TIME_l1_tpc_on_time_LSB                              (0)
#define FEC_LTPC_L1_TPC_ON_TIME_l1_tpc_on_time_WIDTH                            (32)
#define FEC_LTPC_L1_TPC_ON_TIME_l1_tpc_on_time_MASK                             (0xFFFFFFFF)

#define FEC_LTPC_L1_SRS_TPC_ON_TIME_l1_srs_tpc_on_time_LSB                      (0)
#define FEC_LTPC_L1_SRS_TPC_ON_TIME_l1_srs_tpc_on_time_WIDTH                    (32)
#define FEC_LTPC_L1_SRS_TPC_ON_TIME_l1_srs_tpc_on_time_MASK                     (0xFFFFFFFF)

#define FEC_LTPC_L1_TPC_ON_TIME_OFFSET_l1_tpc_on_time_offset_LSB                (0)
#define FEC_LTPC_L1_TPC_ON_TIME_OFFSET_l1_tpc_on_time_offset_WIDTH              (32)
#define FEC_LTPC_L1_TPC_ON_TIME_OFFSET_l1_tpc_on_time_offset_MASK               (0xFFFFFFFF)

#define FEC_LTPC_L1_TX_CC_MASK_l1_cc1_en_LSB                                    (17)
#define FEC_LTPC_L1_TX_CC_MASK_l1_cc1_en_WIDTH                                  (1)
#define FEC_LTPC_L1_TX_CC_MASK_l1_cc1_en_MASK                                   (0x00020000)
#define FEC_LTPC_L1_TX_CC_MASK_l1_cc1_en_BIT                                    (0x00020000)

#define FEC_LTPC_L1_TX_CC_MASK_l1_cc0_en_LSB                                    (16)
#define FEC_LTPC_L1_TX_CC_MASK_l1_cc0_en_WIDTH                                  (1)
#define FEC_LTPC_L1_TX_CC_MASK_l1_cc0_en_MASK                                   (0x00010000)
#define FEC_LTPC_L1_TX_CC_MASK_l1_cc0_en_BIT                                    (0x00010000)

#define FEC_LTPC_L1_SYNC_ID_l1_sync_id_LSB                                      (0)
#define FEC_LTPC_L1_SYNC_ID_l1_sync_id_WIDTH                                    (32)
#define FEC_LTPC_L1_SYNC_ID_l1_sync_id_MASK                                     (0xFFFFFFFF)

#define FEC_LTPC_L1_RESET_ERROR_l1_reset_error_LSB                              (0)
#define FEC_LTPC_L1_RESET_ERROR_l1_reset_error_WIDTH                            (1)
#define FEC_LTPC_L1_RESET_ERROR_l1_reset_error_MASK                             (0x00000001)
#define FEC_LTPC_L1_RESET_ERROR_l1_reset_error_BIT                              (0x00000001)

#define FEC_LTPC_L1_CANCELREQUEST_l1_ul_cc_index_LSB                            (16)
#define FEC_LTPC_L1_CANCELREQUEST_l1_ul_cc_index_WIDTH                          (2)
#define FEC_LTPC_L1_CANCELREQUEST_l1_ul_cc_index_MASK                           (0x00030000)

#define FEC_LTPC_L1_CANCELREQUEST_l1_cancelrequest_LSB                          (0)
#define FEC_LTPC_L1_CANCELREQUEST_l1_cancelrequest_WIDTH                        (9)
#define FEC_LTPC_L1_CANCELREQUEST_l1_cancelrequest_MASK                         (0x000001FF)

#define FEC_LTPC_L1_SRS_PARAMS_SRS_SYM_CNT_BMP_l1_srs_params_srs_sym_bmp_LSB    (8)
#define FEC_LTPC_L1_SRS_PARAMS_SRS_SYM_CNT_BMP_l1_srs_params_srs_sym_bmp_WIDTH  (2)
#define FEC_LTPC_L1_SRS_PARAMS_SRS_SYM_CNT_BMP_l1_srs_params_srs_sym_bmp_MASK   (0x00000300)

#define FEC_LTPC_L1_SRS_PARAMS_SRS_SYM_CNT_BMP_l1_srs_params_srs_sym_cnt_LSB    (0)
#define FEC_LTPC_L1_SRS_PARAMS_SRS_SYM_CNT_BMP_l1_srs_params_srs_sym_cnt_WIDTH  (8)
#define FEC_LTPC_L1_SRS_PARAMS_SRS_SYM_CNT_BMP_l1_srs_params_srs_sym_cnt_MASK   (0x000000FF)

#define FEC_LTPC_L1_SRS_PARAMS_SRS_SYM_CNT_BMP_CC1_l1_srs_params_srs_sym_bmp_LSB (8)
#define FEC_LTPC_L1_SRS_PARAMS_SRS_SYM_CNT_BMP_CC1_l1_srs_params_srs_sym_bmp_WIDTH (2)
#define FEC_LTPC_L1_SRS_PARAMS_SRS_SYM_CNT_BMP_CC1_l1_srs_params_srs_sym_bmp_MASK (0x00000300)

#define FEC_LTPC_L1_SRS_PARAMS_SRS_SYM_CNT_BMP_CC1_l1_srs_params_srs_sym_cnt_LSB (0)
#define FEC_LTPC_L1_SRS_PARAMS_SRS_SYM_CNT_BMP_CC1_l1_srs_params_srs_sym_cnt_WIDTH (8)
#define FEC_LTPC_L1_SRS_PARAMS_SRS_SYM_CNT_BMP_CC1_l1_srs_params_srs_sym_cnt_MASK (0x000000FF)

#define FEC_LTPC_L1_SRS_PARAMS_RB_START_l1_srs_params_rb_start_sym1_LSB         (16)
#define FEC_LTPC_L1_SRS_PARAMS_RB_START_l1_srs_params_rb_start_sym1_WIDTH       (7)
#define FEC_LTPC_L1_SRS_PARAMS_RB_START_l1_srs_params_rb_start_sym1_MASK        (0x007F0000)

#define FEC_LTPC_L1_SRS_PARAMS_RB_START_l1_srs_params_rb_start_sym0_LSB         (0)
#define FEC_LTPC_L1_SRS_PARAMS_RB_START_l1_srs_params_rb_start_sym0_WIDTH       (7)
#define FEC_LTPC_L1_SRS_PARAMS_RB_START_l1_srs_params_rb_start_sym0_MASK        (0x0000007F)

#define FEC_LTPC_L1_SRS_PARAMS_RB_LEN_DB_l1_srs_params_rb_num_db_LSB            (16)
#define FEC_LTPC_L1_SRS_PARAMS_RB_LEN_DB_l1_srs_params_rb_num_db_WIDTH          (13)
#define FEC_LTPC_L1_SRS_PARAMS_RB_LEN_DB_l1_srs_params_rb_num_db_MASK           (0x1FFF0000)

#define FEC_LTPC_L1_SRS_PARAMS_RB_LEN_DB_l1_srs_params_rb_len_LSB               (0)
#define FEC_LTPC_L1_SRS_PARAMS_RB_LEN_DB_l1_srs_params_rb_len_WIDTH             (7)
#define FEC_LTPC_L1_SRS_PARAMS_RB_LEN_DB_l1_srs_params_rb_len_MASK              (0x0000007F)

#define FEC_LTPC_L1_SRS_PARAMS_RB_START_CC1_l1_srs_params_rb_start_sym1_LSB     (16)
#define FEC_LTPC_L1_SRS_PARAMS_RB_START_CC1_l1_srs_params_rb_start_sym1_WIDTH   (7)
#define FEC_LTPC_L1_SRS_PARAMS_RB_START_CC1_l1_srs_params_rb_start_sym1_MASK    (0x007F0000)

#define FEC_LTPC_L1_SRS_PARAMS_RB_START_CC1_l1_srs_params_rb_start_sym0_LSB     (0)
#define FEC_LTPC_L1_SRS_PARAMS_RB_START_CC1_l1_srs_params_rb_start_sym0_WIDTH   (7)
#define FEC_LTPC_L1_SRS_PARAMS_RB_START_CC1_l1_srs_params_rb_start_sym0_MASK    (0x0000007F)

#define FEC_LTPC_L1_SRS_PARAMS_RB_LEN_DB_CC1_l1_srs_params_rb_num_db_LSB        (16)
#define FEC_LTPC_L1_SRS_PARAMS_RB_LEN_DB_CC1_l1_srs_params_rb_num_db_WIDTH      (13)
#define FEC_LTPC_L1_SRS_PARAMS_RB_LEN_DB_CC1_l1_srs_params_rb_num_db_MASK       (0x1FFF0000)

#define FEC_LTPC_L1_SRS_PARAMS_RB_LEN_DB_CC1_l1_srs_params_rb_len_LSB           (0)
#define FEC_LTPC_L1_SRS_PARAMS_RB_LEN_DB_CC1_l1_srs_params_rb_len_WIDTH         (7)
#define FEC_LTPC_L1_SRS_PARAMS_RB_LEN_DB_CC1_l1_srs_params_rb_len_MASK          (0x0000007F)

#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_l1_pusch_params_rb_start_s1_1_LSB     (24)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_l1_pusch_params_rb_start_s1_1_WIDTH   (7)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_l1_pusch_params_rb_start_s1_1_MASK    (0x7F000000)

#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_l1_pusch_params_rb_start_s1_0_LSB     (16)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_l1_pusch_params_rb_start_s1_0_WIDTH   (7)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_l1_pusch_params_rb_start_s1_0_MASK    (0x007F0000)

#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_l1_pusch_params_rb_start_s0_1_LSB     (8)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_l1_pusch_params_rb_start_s0_1_WIDTH   (7)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_l1_pusch_params_rb_start_s0_1_MASK    (0x00007F00)

#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_l1_pusch_params_rb_start_s0_0_LSB     (0)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_l1_pusch_params_rb_start_s0_0_WIDTH   (7)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_l1_pusch_params_rb_start_s0_0_MASK    (0x0000007F)

#define FEC_LTPC_L1_PUSCH_PARAMS_RB_LEN_l1_pusch_params_rb_len_1_LSB            (8)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_LEN_l1_pusch_params_rb_len_1_WIDTH          (7)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_LEN_l1_pusch_params_rb_len_1_MASK           (0x00007F00)

#define FEC_LTPC_L1_PUSCH_PARAMS_RB_LEN_l1_pusch_params_rb_len_0_LSB            (0)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_LEN_l1_pusch_params_rb_len_0_WIDTH          (7)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_LEN_l1_pusch_params_rb_len_0_MASK           (0x0000007F)

#define FEC_LTPC_L1_PUSCH_PARAMS_RB_NUM_DB_l1_pusch_params_rb_num_db1_LSB       (16)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_NUM_DB_l1_pusch_params_rb_num_db1_WIDTH     (13)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_NUM_DB_l1_pusch_params_rb_num_db1_MASK      (0x1FFF0000)

#define FEC_LTPC_L1_PUSCH_PARAMS_RB_NUM_DB_l1_pusch_params_rb_num_db0_LSB       (0)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_NUM_DB_l1_pusch_params_rb_num_db0_WIDTH     (13)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_NUM_DB_l1_pusch_params_rb_num_db0_MASK      (0x00001FFF)

#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_CC1_l1_pusch_params_rb_start_s1_1_LSB (24)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_CC1_l1_pusch_params_rb_start_s1_1_WIDTH (7)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_CC1_l1_pusch_params_rb_start_s1_1_MASK (0x7F000000)

#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_CC1_l1_pusch_params_rb_start_s1_0_LSB (16)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_CC1_l1_pusch_params_rb_start_s1_0_WIDTH (7)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_CC1_l1_pusch_params_rb_start_s1_0_MASK (0x007F0000)

#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_CC1_l1_pusch_params_rb_start_s0_1_LSB (8)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_CC1_l1_pusch_params_rb_start_s0_1_WIDTH (7)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_CC1_l1_pusch_params_rb_start_s0_1_MASK (0x00007F00)

#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_CC1_l1_pusch_params_rb_start_s0_0_LSB (0)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_CC1_l1_pusch_params_rb_start_s0_0_WIDTH (7)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_START_CC1_l1_pusch_params_rb_start_s0_0_MASK (0x0000007F)

#define FEC_LTPC_L1_PUSCH_PARAMS_RB_LEN_CC1_l1_pusch_params_rb_len_1_LSB        (8)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_LEN_CC1_l1_pusch_params_rb_len_1_WIDTH      (7)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_LEN_CC1_l1_pusch_params_rb_len_1_MASK       (0x00007F00)

#define FEC_LTPC_L1_PUSCH_PARAMS_RB_LEN_CC1_l1_pusch_params_rb_len_0_LSB        (0)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_LEN_CC1_l1_pusch_params_rb_len_0_WIDTH      (7)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_LEN_CC1_l1_pusch_params_rb_len_0_MASK       (0x0000007F)

#define FEC_LTPC_L1_PUSCH_PARAMS_RB_NUM_DB_CC1_l1_pusch_params_rb_num_db0_LSB   (0)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_NUM_DB_CC1_l1_pusch_params_rb_num_db0_WIDTH (13)
#define FEC_LTPC_L1_PUSCH_PARAMS_RB_NUM_DB_CC1_l1_pusch_params_rb_num_db0_MASK  (0x00001FFF)

#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S0_l1_pucch_params_rb_start_s0_3_LSB  (24)
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S0_l1_pucch_params_rb_start_s0_3_WIDTH (7)
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S0_l1_pucch_params_rb_start_s0_3_MASK (0x7F000000)

#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S0_l1_pucch_params_rb_start_s0_2_LSB  (16)
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S0_l1_pucch_params_rb_start_s0_2_WIDTH (7)
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S0_l1_pucch_params_rb_start_s0_2_MASK (0x007F0000)

#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S0_l1_pucch_params_rb_start_s0_1_LSB  (8)
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S0_l1_pucch_params_rb_start_s0_1_WIDTH (7)
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S0_l1_pucch_params_rb_start_s0_1_MASK (0x00007F00)

#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S0_l1_pucch_params_rb_start_s0_0_LSB  (0)
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S0_l1_pucch_params_rb_start_s0_0_WIDTH (7)
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S0_l1_pucch_params_rb_start_s0_0_MASK (0x0000007F)

#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S1_l1_pucch_params_rb_start_s1_3_LSB  (24)
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S1_l1_pucch_params_rb_start_s1_3_WIDTH (7)
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S1_l1_pucch_params_rb_start_s1_3_MASK (0x7F000000)

#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S1_l1_pucch_params_rb_start_s1_2_LSB  (16)
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S1_l1_pucch_params_rb_start_s1_2_WIDTH (7)
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S1_l1_pucch_params_rb_start_s1_2_MASK (0x007F0000)

#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S1_l1_pucch_params_rb_start_s1_1_LSB  (8)
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S1_l1_pucch_params_rb_start_s1_1_WIDTH (7)
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S1_l1_pucch_params_rb_start_s1_1_MASK (0x00007F00)

#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S1_l1_pucch_params_rb_start_s1_0_LSB  (0)
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S1_l1_pucch_params_rb_start_s1_0_WIDTH (7)
#define FEC_LTPC_L1_PUCCH_PARAMS_RB_START_S1_l1_pucch_params_rb_start_s1_0_MASK (0x0000007F)

#define FEC_LTPC_L1_ULSRS_P_OUT_pa_vcc_idx_LSB                                  (28)
#define FEC_LTPC_L1_ULSRS_P_OUT_pa_vcc_idx_WIDTH                                (4)
#define FEC_LTPC_L1_ULSRS_P_OUT_pa_vcc_idx_MASK                                 (0xF0000000)

#define FEC_LTPC_L1_ULSRS_P_OUT_pa_gain_mode_idx_LSB                            (24)
#define FEC_LTPC_L1_ULSRS_P_OUT_pa_gain_mode_idx_WIDTH                          (3)
#define FEC_LTPC_L1_ULSRS_P_OUT_pa_gain_mode_idx_MASK                           (0x07000000)

#define FEC_LTPC_L1_ULSRS_P_OUT_p_out_LSB                                       (0)
#define FEC_LTPC_L1_ULSRS_P_OUT_p_out_WIDTH                                     (17)
#define FEC_LTPC_L1_ULSRS_P_OUT_p_out_MASK                                      (0x0001FFFF)

#define FEC_LTPC_L1_ULSRS_PA_NOMINAL_GAIN_DB_l1_srs_cpl_gain_db_LSB             (16)
#define FEC_LTPC_L1_ULSRS_PA_NOMINAL_GAIN_DB_l1_srs_cpl_gain_db_WIDTH           (16)
#define FEC_LTPC_L1_ULSRS_PA_NOMINAL_GAIN_DB_l1_srs_cpl_gain_db_MASK            (0xFFFF0000)

#define FEC_LTPC_L1_ULSRS_PA_NOMINAL_GAIN_DB_pa_nominal_gain_db_LSB             (0)
#define FEC_LTPC_L1_ULSRS_PA_NOMINAL_GAIN_DB_pa_nominal_gain_db_WIDTH           (16)
#define FEC_LTPC_L1_ULSRS_PA_NOMINAL_GAIN_DB_pa_nominal_gain_db_MASK            (0x0000FFFF)

#define FEC_LTPC_L1_ULSRS_P_OUT_CC1_pa_vcc_idx_LSB                              (28)
#define FEC_LTPC_L1_ULSRS_P_OUT_CC1_pa_vcc_idx_WIDTH                            (4)
#define FEC_LTPC_L1_ULSRS_P_OUT_CC1_pa_vcc_idx_MASK                             (0xF0000000)

#define FEC_LTPC_L1_ULSRS_P_OUT_CC1_pa_gain_mode_idx_LSB                        (24)
#define FEC_LTPC_L1_ULSRS_P_OUT_CC1_pa_gain_mode_idx_WIDTH                      (3)
#define FEC_LTPC_L1_ULSRS_P_OUT_CC1_pa_gain_mode_idx_MASK                       (0x07000000)

#define FEC_LTPC_L1_ULSRS_P_OUT_CC1_p_out_LSB                                   (0)
#define FEC_LTPC_L1_ULSRS_P_OUT_CC1_p_out_WIDTH                                 (17)
#define FEC_LTPC_L1_ULSRS_P_OUT_CC1_p_out_MASK                                  (0x0001FFFF)

#define FEC_LTPC_L1_ULSRS_PA_NOMINAL_GAIN_DB_CC1_l1_srs_cpl_gain_db_cc1_LSB     (16)
#define FEC_LTPC_L1_ULSRS_PA_NOMINAL_GAIN_DB_CC1_l1_srs_cpl_gain_db_cc1_WIDTH   (16)
#define FEC_LTPC_L1_ULSRS_PA_NOMINAL_GAIN_DB_CC1_l1_srs_cpl_gain_db_cc1_MASK    (0xFFFF0000)

#define FEC_LTPC_L1_ULSRS_PA_NOMINAL_GAIN_DB_CC1_pa_nominal_gain_db_LSB         (0)
#define FEC_LTPC_L1_ULSRS_PA_NOMINAL_GAIN_DB_CC1_pa_nominal_gain_db_WIDTH       (16)
#define FEC_LTPC_L1_ULSRS_PA_NOMINAL_GAIN_DB_CC1_pa_nominal_gain_db_MASK        (0x0000FFFF)

#define FEC_LTPC_L1_SLOT0_POW_l1_slot0_pa_vcc_idx_LSB                           (28)
#define FEC_LTPC_L1_SLOT0_POW_l1_slot0_pa_vcc_idx_WIDTH                         (4)
#define FEC_LTPC_L1_SLOT0_POW_l1_slot0_pa_vcc_idx_MASK                          (0xF0000000)

#define FEC_LTPC_L1_SLOT0_POW_l1_slot0_pa_gain_mode_idx_LSB                     (24)
#define FEC_LTPC_L1_SLOT0_POW_l1_slot0_pa_gain_mode_idx_WIDTH                   (3)
#define FEC_LTPC_L1_SLOT0_POW_l1_slot0_pa_gain_mode_idx_MASK                    (0x07000000)

#define FEC_LTPC_L1_SLOT0_POW_l1_slot0_p_out_LSB                                (0)
#define FEC_LTPC_L1_SLOT0_POW_l1_slot0_p_out_WIDTH                              (17)
#define FEC_LTPC_L1_SLOT0_POW_l1_slot0_p_out_MASK                               (0x0001FFFF)

#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_0_l1_slot0_cpl_gain_db_0_LSB       (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_0_l1_slot0_cpl_gain_db_0_WIDTH     (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_0_l1_slot0_cpl_gain_db_0_MASK      (0xFFFF0000)

#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_0_l1_slot0_pa_nominal_gain_db_0_LSB (0)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_0_l1_slot0_pa_nominal_gain_db_0_WIDTH (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_0_l1_slot0_pa_nominal_gain_db_0_MASK (0x0000FFFF)

#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_1_l1_slot0_cpl_gain_db_1_LSB       (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_1_l1_slot0_cpl_gain_db_1_WIDTH     (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_1_l1_slot0_cpl_gain_db_1_MASK      (0xFFFF0000)

#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_1_l1_slot0_pa_nominal_gain_db_1_LSB (0)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_1_l1_slot0_pa_nominal_gain_db_1_WIDTH (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_1_l1_slot0_pa_nominal_gain_db_1_MASK (0x0000FFFF)

#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_2_l1_slot0_cpl_gain_db_2_LSB       (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_2_l1_slot0_cpl_gain_db_2_WIDTH     (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_2_l1_slot0_cpl_gain_db_2_MASK      (0xFFFF0000)

#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_2_l1_slot0_pa_nominal_gain_db_2_LSB (0)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_2_l1_slot0_pa_nominal_gain_db_2_WIDTH (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_2_l1_slot0_pa_nominal_gain_db_2_MASK (0x0000FFFF)

#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_3_l1_slot0_cpl_gain_db_3_LSB       (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_3_l1_slot0_cpl_gain_db_3_WIDTH     (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_3_l1_slot0_cpl_gain_db_3_MASK      (0xFFFF0000)

#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_3_l1_slot0_pa_nominal_gain_db_3_LSB (0)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_3_l1_slot0_pa_nominal_gain_db_3_WIDTH (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_3_l1_slot0_pa_nominal_gain_db_3_MASK (0x0000FFFF)

#define FEC_LTPC_L1_SLOT1_POW_l1_slot0_pa_vcc_idx_LSB                           (28)
#define FEC_LTPC_L1_SLOT1_POW_l1_slot0_pa_vcc_idx_WIDTH                         (4)
#define FEC_LTPC_L1_SLOT1_POW_l1_slot0_pa_vcc_idx_MASK                          (0xF0000000)

#define FEC_LTPC_L1_SLOT1_POW_l1_slot0_pa_gain_mode_idx_LSB                     (24)
#define FEC_LTPC_L1_SLOT1_POW_l1_slot0_pa_gain_mode_idx_WIDTH                   (3)
#define FEC_LTPC_L1_SLOT1_POW_l1_slot0_pa_gain_mode_idx_MASK                    (0x07000000)

#define FEC_LTPC_L1_SLOT1_POW_l1_slot0_p_out_LSB                                (0)
#define FEC_LTPC_L1_SLOT1_POW_l1_slot0_p_out_WIDTH                              (17)
#define FEC_LTPC_L1_SLOT1_POW_l1_slot0_p_out_MASK                               (0x0001FFFF)

#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_0_l1_slot1_cpl_gain_db_0_LSB       (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_0_l1_slot1_cpl_gain_db_0_WIDTH     (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_0_l1_slot1_cpl_gain_db_0_MASK      (0xFFFF0000)

#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_0_l1_slot1_pa_nominal_gain_db_0_LSB (0)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_0_l1_slot1_pa_nominal_gain_db_0_WIDTH (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_0_l1_slot1_pa_nominal_gain_db_0_MASK (0x0000FFFF)

#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_1_l1_slot1_cpl_gain_db_1_LSB       (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_1_l1_slot1_cpl_gain_db_1_WIDTH     (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_1_l1_slot1_cpl_gain_db_1_MASK      (0xFFFF0000)

#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_1_l1_slot1_pa_nominal_gain_db_1_LSB (0)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_1_l1_slot1_pa_nominal_gain_db_1_WIDTH (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_1_l1_slot1_pa_nominal_gain_db_1_MASK (0x0000FFFF)

#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_2_l1_slot1_cpl_gain_db_2_LSB       (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_2_l1_slot1_cpl_gain_db_2_WIDTH     (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_2_l1_slot1_cpl_gain_db_2_MASK      (0xFFFF0000)

#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_2_l1_slot1_pa_nominal_gain_db_2_LSB (0)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_2_l1_slot1_pa_nominal_gain_db_2_WIDTH (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_2_l1_slot1_pa_nominal_gain_db_2_MASK (0x0000FFFF)

#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_3_l1_slot1_cpl_gain_db_3_LSB       (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_3_l1_slot1_cpl_gain_db_3_WIDTH     (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_3_l1_slot1_cpl_gain_db_3_MASK      (0xFFFF0000)

#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_3_l1_slot1_pa_nominal_gain_db_3_LSB (0)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_3_l1_slot1_pa_nominal_gain_db_3_WIDTH (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_3_l1_slot1_pa_nominal_gain_db_3_MASK (0x0000FFFF)

#define FEC_LTPC_L1_PRACH_PARAMS_RB_START_zc_num_db_LSB                         (16)
#define FEC_LTPC_L1_PRACH_PARAMS_RB_START_zc_num_db_WIDTH                       (13)
#define FEC_LTPC_L1_PRACH_PARAMS_RB_START_zc_num_db_MASK                        (0x1FFF0000)

#define FEC_LTPC_L1_PRACH_PARAMS_RB_START_rb_start_LSB                          (0)
#define FEC_LTPC_L1_PRACH_PARAMS_RB_START_rb_start_WIDTH                        (7)
#define FEC_LTPC_L1_PRACH_PARAMS_RB_START_rb_start_MASK                         (0x0000007F)

#define FEC_LTPC_L1_PRACH_PA_NOMINAL_GAIN_DB_0_l1_prach_cpl_gain_db_LSB         (16)
#define FEC_LTPC_L1_PRACH_PA_NOMINAL_GAIN_DB_0_l1_prach_cpl_gain_db_WIDTH       (16)
#define FEC_LTPC_L1_PRACH_PA_NOMINAL_GAIN_DB_0_l1_prach_cpl_gain_db_MASK        (0xFFFF0000)

#define FEC_LTPC_L1_PRACH_PA_NOMINAL_GAIN_DB_0_l1_prach_pa_nominal_gain_db_0_LSB (0)
#define FEC_LTPC_L1_PRACH_PA_NOMINAL_GAIN_DB_0_l1_prach_pa_nominal_gain_db_0_WIDTH (16)
#define FEC_LTPC_L1_PRACH_PA_NOMINAL_GAIN_DB_0_l1_prach_pa_nominal_gain_db_0_MASK (0x0000FFFF)

#define FEC_LTPC_L1_PRACH_ANTI_DROOPING_l1_prach_accu_anti_droop_analog_db_0_LSB (16)
#define FEC_LTPC_L1_PRACH_ANTI_DROOPING_l1_prach_accu_anti_droop_analog_db_0_WIDTH (16)
#define FEC_LTPC_L1_PRACH_ANTI_DROOPING_l1_prach_accu_anti_droop_analog_db_0_MASK (0xFFFF0000)

#define FEC_LTPC_L1_PRACH_ANTI_DROOPING_l1_prach_g_nor_anti_drooping_0_LSB      (0)
#define FEC_LTPC_L1_PRACH_ANTI_DROOPING_l1_prach_g_nor_anti_drooping_0_WIDTH    (16)
#define FEC_LTPC_L1_PRACH_ANTI_DROOPING_l1_prach_g_nor_anti_drooping_0_MASK     (0x0000FFFF)

#define FEC_LTPC_L1_PRACH_PARAMS_FORMAT_l1_format_LSB                           (0)
#define FEC_LTPC_L1_PRACH_PARAMS_FORMAT_l1_format_WIDTH                         (3)
#define FEC_LTPC_L1_PRACH_PARAMS_FORMAT_l1_format_MASK                          (0x00000007)

#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_rf_pga_table_LSB                          (31)
#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_rf_pga_table_WIDTH                        (1)
#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_rf_pga_table_MASK                         (0x80000000)
#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_rf_pga_table_BIT                          (0x80000000)

#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_rf_gain_idx_LSB                           (24)
#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_rf_gain_idx_WIDTH                         (7)
#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_rf_gain_idx_MASK                          (0x7F000000)

#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_det_gain_idx_LSB                          (16)
#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_det_gain_idx_WIDTH                        (8)
#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_det_gain_idx_MASK                         (0x00FF0000)

#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_pa_mode_LSB                               (12)
#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_pa_mode_WIDTH                             (2)
#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_pa_mode_MASK                              (0x00003000)

#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_vm1_LSB                                   (9)
#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_vm1_WIDTH                                 (1)
#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_vm1_MASK                                  (0x00000200)
#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_vm1_BIT                                   (0x00000200)

#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_vm0_LSB                                   (8)
#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_vm0_WIDTH                                 (1)
#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_vm0_MASK                                  (0x00000100)
#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_vm0_BIT                                   (0x00000100)

#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_pa_vcc_idx_LSB                            (0)
#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_pa_vcc_idx_WIDTH                          (8)
#define FEC_LTPC_L1_FOR_TPC_HW_VAL_l1_pa_vcc_idx_MASK                           (0x000000FF)

#define FEC_LTPC_L1_FORCE_BB_BACKOFF_l1_lna_code_LSB                            (24)
#define FEC_LTPC_L1_FORCE_BB_BACKOFF_l1_lna_code_WIDTH                          (8)
#define FEC_LTPC_L1_FORCE_BB_BACKOFF_l1_lna_code_MASK                           (0xFF000000)

#define FEC_LTPC_L1_FORCE_BB_BACKOFF_l1_pga_code_LSB                            (16)
#define FEC_LTPC_L1_FORCE_BB_BACKOFF_l1_pga_code_WIDTH                          (8)
#define FEC_LTPC_L1_FORCE_BB_BACKOFF_l1_pga_code_MASK                           (0x00FF0000)

#define FEC_LTPC_L1_FORCE_BB_BACKOFF_l1_bb_backoff_LSB                          (0)
#define FEC_LTPC_L1_FORCE_BB_BACKOFF_l1_bb_backoff_WIDTH                        (16)
#define FEC_LTPC_L1_FORCE_BB_BACKOFF_l1_bb_backoff_MASK                         (0x0000FFFF)

#define FEC_LTPC_L1_FORCE_BB_BACKOFF_CC1_l1_lna_code_LSB                        (24)
#define FEC_LTPC_L1_FORCE_BB_BACKOFF_CC1_l1_lna_code_WIDTH                      (8)
#define FEC_LTPC_L1_FORCE_BB_BACKOFF_CC1_l1_lna_code_MASK                       (0xFF000000)

#define FEC_LTPC_L1_FORCE_BB_BACKOFF_CC1_l1_pga_code_LSB                        (16)
#define FEC_LTPC_L1_FORCE_BB_BACKOFF_CC1_l1_pga_code_WIDTH                      (8)
#define FEC_LTPC_L1_FORCE_BB_BACKOFF_CC1_l1_pga_code_MASK                       (0x00FF0000)

#define FEC_LTPC_L1_FORCE_BB_BACKOFF_CC1_l1_bb_backoff_cc1_LSB                  (0)
#define FEC_LTPC_L1_FORCE_BB_BACKOFF_CC1_l1_bb_backoff_cc1_WIDTH                (16)
#define FEC_LTPC_L1_FORCE_BB_BACKOFF_CC1_l1_bb_backoff_cc1_MASK                 (0x0000FFFF)

#define FEC_LTPC_L1_COUPLER_LOSS_l1_coupler_loss_LSB                            (0)
#define FEC_LTPC_L1_COUPLER_LOSS_l1_coupler_loss_WIDTH                          (16)
#define FEC_LTPC_L1_COUPLER_LOSS_l1_coupler_loss_MASK                           (0x0000FFFF)

#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_rf_pga_table_LSB                      (31)
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_rf_pga_table_WIDTH                    (1)
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_rf_pga_table_MASK                     (0x80000000)
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_rf_pga_table_BIT                      (0x80000000)

#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_rf_gain_idx_LSB                       (24)
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_rf_gain_idx_WIDTH                     (7)
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_rf_gain_idx_MASK                      (0x7F000000)

#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_det_gain_idx_LSB                      (16)
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_det_gain_idx_WIDTH                    (8)
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_det_gain_idx_MASK                     (0x00FF0000)

#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_pa_mode_LSB                           (12)
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_pa_mode_WIDTH                         (2)
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_pa_mode_MASK                          (0x00003000)

#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_vm1_LSB                               (9)
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_vm1_WIDTH                             (1)
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_vm1_MASK                              (0x00000200)
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_vm1_BIT                               (0x00000200)

#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_vm0_LSB                               (8)
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_vm0_WIDTH                             (1)
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_vm0_MASK                              (0x00000100)
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_vm0_BIT                               (0x00000100)

#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_pa_vcc_idx_LSB                        (0)
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_pa_vcc_idx_WIDTH                      (8)
#define FEC_LTPC_L1_FOR_TPC_SRS_HW_VAL_l1_pa_vcc_idx_MASK                       (0x000000FF)

#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_l1_lna_code_LSB                        (24)
#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_l1_lna_code_WIDTH                      (8)
#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_l1_lna_code_MASK                       (0xFF000000)

#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_l1_pga_code_LSB                        (16)
#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_l1_pga_code_WIDTH                      (8)
#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_l1_pga_code_MASK                       (0x00FF0000)

#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_l1_bb_backoff_LSB                      (0)
#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_l1_bb_backoff_WIDTH                    (16)
#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_l1_bb_backoff_MASK                     (0x0000FFFF)

#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_CC1_l1_lna_code_LSB                    (24)
#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_CC1_l1_lna_code_WIDTH                  (8)
#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_CC1_l1_lna_code_MASK                   (0xFF000000)

#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_CC1_l1_pga_code_LSB                    (16)
#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_CC1_l1_pga_code_WIDTH                  (8)
#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_CC1_l1_pga_code_MASK                   (0x00FF0000)

#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_CC1_l1_bb_backoff_cc1_LSB              (0)
#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_CC1_l1_bb_backoff_cc1_WIDTH            (16)
#define FEC_LTPC_L1_FORCE_SRS_BB_BACKOFF_CC1_l1_bb_backoff_cc1_MASK             (0x0000FFFF)

#define FEC_LTPC_L1_COUPLER_LOSS_SRS0_l1_coupler_loss_LSB                       (0)
#define FEC_LTPC_L1_COUPLER_LOSS_SRS0_l1_coupler_loss_WIDTH                     (16)
#define FEC_LTPC_L1_COUPLER_LOSS_SRS0_l1_coupler_loss_MASK                      (0x0000FFFF)

#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_rf_pga_table_LSB                     (31)
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_rf_pga_table_WIDTH                   (1)
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_rf_pga_table_MASK                    (0x80000000)
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_rf_pga_table_BIT                     (0x80000000)

#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_rf_gain_idx_LSB                      (24)
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_rf_gain_idx_WIDTH                    (7)
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_rf_gain_idx_MASK                     (0x7F000000)

#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_det_gain_idx_LSB                     (16)
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_det_gain_idx_WIDTH                   (8)
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_det_gain_idx_MASK                    (0x00FF0000)

#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_pa_mode_LSB                          (12)
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_pa_mode_WIDTH                        (2)
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_pa_mode_MASK                         (0x00003000)

#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_vm1_LSB                              (9)
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_vm1_WIDTH                            (1)
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_vm1_MASK                             (0x00000200)
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_vm1_BIT                              (0x00000200)

#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_vm0_LSB                              (8)
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_vm0_WIDTH                            (1)
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_vm0_MASK                             (0x00000100)
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_vm0_BIT                              (0x00000100)

#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_pa_vcc_idx_LSB                       (0)
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_pa_vcc_idx_WIDTH                     (8)
#define FEC_LTPC_L1_FOR_TPC_SRS1_HW_VAL_l1_pa_vcc_idx_MASK                      (0x000000FF)

#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_l1_lna_code_LSB                       (24)
#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_l1_lna_code_WIDTH                     (8)
#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_l1_lna_code_MASK                      (0xFF000000)

#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_l1_pga_code_LSB                       (16)
#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_l1_pga_code_WIDTH                     (8)
#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_l1_pga_code_MASK                      (0x00FF0000)

#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_l1_bb_backoff_LSB                     (0)
#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_l1_bb_backoff_WIDTH                   (16)
#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_l1_bb_backoff_MASK                    (0x0000FFFF)

#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_CC1_l1_lna_code_LSB                   (24)
#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_CC1_l1_lna_code_WIDTH                 (8)
#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_CC1_l1_lna_code_MASK                  (0xFF000000)

#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_CC1_l1_pga_code_LSB                   (16)
#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_CC1_l1_pga_code_WIDTH                 (8)
#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_CC1_l1_pga_code_MASK                  (0x00FF0000)

#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_CC1_l1_bb_backoff_cc1_LSB             (0)
#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_CC1_l1_bb_backoff_cc1_WIDTH           (16)
#define FEC_LTPC_L1_FORCE_SRS1_BB_BACKOFF_CC1_l1_bb_backoff_cc1_MASK            (0x0000FFFF)

#define FEC_LTPC_L1_COUPLER_LOSS_SRS1_l1_coupler_loss_LSB                       (0)
#define FEC_LTPC_L1_COUPLER_LOSS_SRS1_l1_coupler_loss_WIDTH                     (16)
#define FEC_LTPC_L1_COUPLER_LOSS_SRS1_l1_coupler_loss_MASK                      (0x0000FFFF)

#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_0_l1_slot0_cpl_gain_db_0_LSB   (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_0_l1_slot0_cpl_gain_db_0_WIDTH (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_0_l1_slot0_cpl_gain_db_0_MASK  (0xFFFF0000)

#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_0_l1_slot0_pa_nominal_gain_db_0_LSB (0)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_0_l1_slot0_pa_nominal_gain_db_0_WIDTH (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_0_l1_slot0_pa_nominal_gain_db_0_MASK (0x0000FFFF)

#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_1_l1_slot0_cpl_gain_db_1_LSB   (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_1_l1_slot0_cpl_gain_db_1_WIDTH (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_1_l1_slot0_cpl_gain_db_1_MASK  (0xFFFF0000)

#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_1_l1_slot0_pa_nominal_gain_db_1_LSB (0)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_1_l1_slot0_pa_nominal_gain_db_1_WIDTH (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_1_l1_slot0_pa_nominal_gain_db_1_MASK (0x0000FFFF)

#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_2_l1_slot0_cpl_gain_db_2_LSB   (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_2_l1_slot0_cpl_gain_db_2_WIDTH (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_2_l1_slot0_cpl_gain_db_2_MASK  (0xFFFF0000)

#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_2_l1_slot0_pa_nominal_gain_db_2_LSB (0)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_2_l1_slot0_pa_nominal_gain_db_2_WIDTH (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_2_l1_slot0_pa_nominal_gain_db_2_MASK (0x0000FFFF)

#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_3_l1_slot0_cpl_gain_db_3_LSB   (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_3_l1_slot0_cpl_gain_db_3_WIDTH (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_3_l1_slot0_cpl_gain_db_3_MASK  (0xFFFF0000)

#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_3_l1_slot0_pa_nominal_gain_db_3_LSB (0)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_3_l1_slot0_pa_nominal_gain_db_3_WIDTH (16)
#define FEC_LTPC_L1_SLOT0_PA_NOMINAL_GAIN_DB_CC1_3_l1_slot0_pa_nominal_gain_db_3_MASK (0x0000FFFF)

#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_0_l1_slot1_cpl_gain_db_0_LSB   (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_0_l1_slot1_cpl_gain_db_0_WIDTH (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_0_l1_slot1_cpl_gain_db_0_MASK  (0xFFFF0000)

#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_0_l1_slot1_pa_nominal_gain_db_0_LSB (0)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_0_l1_slot1_pa_nominal_gain_db_0_WIDTH (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_0_l1_slot1_pa_nominal_gain_db_0_MASK (0x0000FFFF)

#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_1_l1_slot1_cpl_gain_db_1_LSB   (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_1_l1_slot1_cpl_gain_db_1_WIDTH (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_1_l1_slot1_cpl_gain_db_1_MASK  (0xFFFF0000)

#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_1_l1_slot1_pa_nominal_gain_db_1_LSB (0)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_1_l1_slot1_pa_nominal_gain_db_1_WIDTH (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_1_l1_slot1_pa_nominal_gain_db_1_MASK (0x0000FFFF)

#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_2_l1_slot1_cpl_gain_db_2_LSB   (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_2_l1_slot1_cpl_gain_db_2_WIDTH (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_2_l1_slot1_cpl_gain_db_2_MASK  (0xFFFF0000)

#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_2_l1_slot1_pa_nominal_gain_db_2_LSB (0)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_2_l1_slot1_pa_nominal_gain_db_2_WIDTH (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_2_l1_slot1_pa_nominal_gain_db_2_MASK (0x0000FFFF)

#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_3_l1_slot1_cpl_gain_db_3_LSB   (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_3_l1_slot1_cpl_gain_db_3_WIDTH (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_3_l1_slot1_cpl_gain_db_3_MASK  (0xFFFF0000)

#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_3_l1_slot1_pa_nominal_gain_db_3_LSB (0)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_3_l1_slot1_pa_nominal_gain_db_3_WIDTH (16)
#define FEC_LTPC_L1_SLOT1_PA_NOMINAL_GAIN_DB_CC1_3_l1_slot1_pa_nominal_gain_db_3_MASK (0x0000FFFF)

#define FEC_LTPC_L0_DDPC_RPT0_slot0_pow_cc1_LSB                                 (16)
#define FEC_LTPC_L0_DDPC_RPT0_slot0_pow_cc1_WIDTH                               (16)
#define FEC_LTPC_L0_DDPC_RPT0_slot0_pow_cc1_MASK                                (0xFFFF0000)

#define FEC_LTPC_L0_DDPC_RPT0_slot0_pow_LSB                                     (0)
#define FEC_LTPC_L0_DDPC_RPT0_slot0_pow_WIDTH                                   (16)
#define FEC_LTPC_L0_DDPC_RPT0_slot0_pow_MASK                                    (0x0000FFFF)

#define FEC_LTPC_L0_DDPC_RPT1_slot1_pow_cc1_LSB                                 (16)
#define FEC_LTPC_L0_DDPC_RPT1_slot1_pow_cc1_WIDTH                               (16)
#define FEC_LTPC_L0_DDPC_RPT1_slot1_pow_cc1_MASK                                (0xFFFF0000)

#define FEC_LTPC_L0_DDPC_RPT1_slot1_pow_LSB                                     (0)
#define FEC_LTPC_L0_DDPC_RPT1_slot1_pow_WIDTH                                   (16)
#define FEC_LTPC_L0_DDPC_RPT1_slot1_pow_MASK                                    (0x0000FFFF)

#define FEC_LTPC_L0_DDPC_RPT2_srs_pow_cc1_LSB                                   (16)
#define FEC_LTPC_L0_DDPC_RPT2_srs_pow_cc1_WIDTH                                 (16)
#define FEC_LTPC_L0_DDPC_RPT2_srs_pow_cc1_MASK                                  (0xFFFF0000)

#define FEC_LTPC_L0_DDPC_RPT2_srs_pow_LSB                                       (0)
#define FEC_LTPC_L0_DDPC_RPT2_srs_pow_WIDTH                                     (16)
#define FEC_LTPC_L0_DDPC_RPT2_srs_pow_MASK                                      (0x0000FFFF)

#define FEC_LTPC_L0_DDPC_RPT3_srs_pow_cc1_LSB                                   (16)
#define FEC_LTPC_L0_DDPC_RPT3_srs_pow_cc1_WIDTH                                 (16)
#define FEC_LTPC_L0_DDPC_RPT3_srs_pow_cc1_MASK                                  (0xFFFF0000)

#define FEC_LTPC_L0_DDPC_RPT3_srs_pow_LSB                                       (0)
#define FEC_LTPC_L0_DDPC_RPT3_srs_pow_WIDTH                                     (16)
#define FEC_LTPC_L0_DDPC_RPT3_srs_pow_MASK                                      (0x0000FFFF)

#define FEC_LTPC_L0_DDPC_RPT4_prach_pow_LSB                                     (0)
#define FEC_LTPC_L0_DDPC_RPT4_prach_pow_WIDTH                                   (16)
#define FEC_LTPC_L0_DDPC_RPT4_prach_pow_MASK                                    (0x0000FFFF)

#define FEC_LTPC_L1_DDPC_RPT0_slot0_pow_cc1_LSB                                 (16)
#define FEC_LTPC_L1_DDPC_RPT0_slot0_pow_cc1_WIDTH                               (16)
#define FEC_LTPC_L1_DDPC_RPT0_slot0_pow_cc1_MASK                                (0xFFFF0000)

#define FEC_LTPC_L1_DDPC_RPT0_slot0_pow_LSB                                     (0)
#define FEC_LTPC_L1_DDPC_RPT0_slot0_pow_WIDTH                                   (16)
#define FEC_LTPC_L1_DDPC_RPT0_slot0_pow_MASK                                    (0x0000FFFF)

#define FEC_LTPC_L1_DDPC_RPT1_slot1_pow_cc1_LSB                                 (16)
#define FEC_LTPC_L1_DDPC_RPT1_slot1_pow_cc1_WIDTH                               (16)
#define FEC_LTPC_L1_DDPC_RPT1_slot1_pow_cc1_MASK                                (0xFFFF0000)

#define FEC_LTPC_L1_DDPC_RPT1_slot1_pow_LSB                                     (0)
#define FEC_LTPC_L1_DDPC_RPT1_slot1_pow_WIDTH                                   (16)
#define FEC_LTPC_L1_DDPC_RPT1_slot1_pow_MASK                                    (0x0000FFFF)

#define FEC_LTPC_L1_DDPC_RPT2_srs_pow_cc1_LSB                                   (16)
#define FEC_LTPC_L1_DDPC_RPT2_srs_pow_cc1_WIDTH                                 (16)
#define FEC_LTPC_L1_DDPC_RPT2_srs_pow_cc1_MASK                                  (0xFFFF0000)

#define FEC_LTPC_L1_DDPC_RPT2_srs_pow_LSB                                       (0)
#define FEC_LTPC_L1_DDPC_RPT2_srs_pow_WIDTH                                     (16)
#define FEC_LTPC_L1_DDPC_RPT2_srs_pow_MASK                                      (0x0000FFFF)

#define FEC_LTPC_L1_DDPC_RPT3_srs_pow_cc1_LSB                                   (16)
#define FEC_LTPC_L1_DDPC_RPT3_srs_pow_cc1_WIDTH                                 (16)
#define FEC_LTPC_L1_DDPC_RPT3_srs_pow_cc1_MASK                                  (0xFFFF0000)

#define FEC_LTPC_L1_DDPC_RPT3_srs_pow_LSB                                       (0)
#define FEC_LTPC_L1_DDPC_RPT3_srs_pow_WIDTH                                     (16)
#define FEC_LTPC_L1_DDPC_RPT3_srs_pow_MASK                                      (0x0000FFFF)

#define FEC_LTPC_L1_DDPC_RPT4_prach_pow_LSB                                     (0)
#define FEC_LTPC_L1_DDPC_RPT4_prach_pow_WIDTH                                   (16)
#define FEC_LTPC_L1_DDPC_RPT4_prach_pow_MASK                                    (0x0000FFFF)

#define FEC_LTPC_DDPC_DETBPI_CON_DETBPI_DAT_LSB                                 (16)
#define FEC_LTPC_DDPC_DETBPI_CON_DETBPI_DAT_WIDTH                               (4)
#define FEC_LTPC_DDPC_DETBPI_CON_DETBPI_DAT_MASK                                (0x000F0000)

#define FEC_LTPC_DDPC_DETBPI_CON_DETBPI_OFS_LSB                                 (0)
#define FEC_LTPC_DDPC_DETBPI_CON_DETBPI_OFS_WIDTH                               (15)
#define FEC_LTPC_DDPC_DETBPI_CON_DETBPI_OFS_MASK                                (0x00007FFF)

#define FEC_LTPC_DDPC_RFDET_CON_MEAS_SEL_LSB                                    (16)
#define FEC_LTPC_DDPC_RFDET_CON_MEAS_SEL_WIDTH                                  (3)
#define FEC_LTPC_DDPC_RFDET_CON_MEAS_SEL_MASK                                   (0x00070000)

#define FEC_LTPC_DDPC_RFDET_CON_RF_DET_OFS_LSB                                  (0)
#define FEC_LTPC_DDPC_RFDET_CON_RF_DET_OFS_WIDTH                                (15)
#define FEC_LTPC_DDPC_RFDET_CON_RF_DET_OFS_MASK                                 (0x00007FFF)

#define FEC_LTPC_DDPC_ADC_CON_ADC_OFF_LSB                                       (16)
#define FEC_LTPC_DDPC_ADC_CON_ADC_OFF_WIDTH                                     (15)
#define FEC_LTPC_DDPC_ADC_CON_ADC_OFF_MASK                                      (0x7FFF0000)

#define FEC_LTPC_DDPC_ADC_CON_ADC_ON_LSB                                        (0)
#define FEC_LTPC_DDPC_ADC_CON_ADC_ON_WIDTH                                      (15)
#define FEC_LTPC_DDPC_ADC_CON_ADC_ON_MASK                                       (0x00007FFF)

#define FEC_LTPC_DDPC_OFS_DDPC_OFS_LSB                                          (0)
#define FEC_LTPC_DDPC_OFS_DDPC_OFS_WIDTH                                        (15)
#define FEC_LTPC_DDPC_OFS_DDPC_OFS_MASK                                         (0x00007FFF)

#define FEC_LTPC_DDPC_SAMPLE_WAIT_SAMPLE_LSB                                    (19)
#define FEC_LTPC_DDPC_SAMPLE_WAIT_SAMPLE_WIDTH                                  (9)
#define FEC_LTPC_DDPC_SAMPLE_WAIT_SAMPLE_MASK                                   (0x0FF80000)

#define FEC_LTPC_DDPC_SAMPLE_LEAD_BIT_LSB                                       (15)
#define FEC_LTPC_DDPC_SAMPLE_LEAD_BIT_WIDTH                                     (4)
#define FEC_LTPC_DDPC_SAMPLE_LEAD_BIT_MASK                                      (0x00078000)

#define FEC_LTPC_DDPC_SAMPLE_MEAS_SAMPLE_LSB                                    (0)
#define FEC_LTPC_DDPC_SAMPLE_MEAS_SAMPLE_WIDTH                                  (15)
#define FEC_LTPC_DDPC_SAMPLE_MEAS_SAMPLE_MASK                                   (0x00007FFF)

#define FEC_LTPC_DDPC_SAMPLE_CC1_WAIT_SAMPLE_LSB                                (19)
#define FEC_LTPC_DDPC_SAMPLE_CC1_WAIT_SAMPLE_WIDTH                              (9)
#define FEC_LTPC_DDPC_SAMPLE_CC1_WAIT_SAMPLE_MASK                               (0x0FF80000)

#define FEC_LTPC_DDPC_SAMPLE_CC1_LEAD_BIT_LSB                                   (15)
#define FEC_LTPC_DDPC_SAMPLE_CC1_LEAD_BIT_WIDTH                                 (4)
#define FEC_LTPC_DDPC_SAMPLE_CC1_LEAD_BIT_MASK                                  (0x00078000)

#define FEC_LTPC_DDPC_SAMPLE_CC1_MEAS_SAMPLE_LSB                                (0)
#define FEC_LTPC_DDPC_SAMPLE_CC1_MEAS_SAMPLE_WIDTH                              (15)
#define FEC_LTPC_DDPC_SAMPLE_CC1_MEAS_SAMPLE_MASK                               (0x00007FFF)

#define FEC_LTPC_AT_RFDET_CON_MEAS_SEL_LSB                                      (16)
#define FEC_LTPC_AT_RFDET_CON_MEAS_SEL_WIDTH                                    (3)
#define FEC_LTPC_AT_RFDET_CON_MEAS_SEL_MASK                                     (0x00070000)

#define FEC_LTPC_AT_RFDET_CON_RF_DET_OFS_LSB                                    (0)
#define FEC_LTPC_AT_RFDET_CON_RF_DET_OFS_WIDTH                                  (15)
#define FEC_LTPC_AT_RFDET_CON_RF_DET_OFS_MASK                                   (0x00007FFF)

#define FEC_LTPC_AT_ADC_CON_ADC_OFF_LSB                                         (16)
#define FEC_LTPC_AT_ADC_CON_ADC_OFF_WIDTH                                       (15)
#define FEC_LTPC_AT_ADC_CON_ADC_OFF_MASK                                        (0x7FFF0000)

#define FEC_LTPC_AT_ADC_CON_ADC_ON_LSB                                          (0)
#define FEC_LTPC_AT_ADC_CON_ADC_ON_WIDTH                                        (15)
#define FEC_LTPC_AT_ADC_CON_ADC_ON_MASK                                         (0x00007FFF)

#define FEC_LTPC_AT_MEAS0_CON0_AT0_PAR_LSB                                      (28)
#define FEC_LTPC_AT_MEAS0_CON0_AT0_PAR_WIDTH                                    (4)
#define FEC_LTPC_AT_MEAS0_CON0_AT0_PAR_MASK                                     (0xF0000000)

#define FEC_LTPC_AT_MEAS0_CON0_AT0_OFS_LSB                                      (0)
#define FEC_LTPC_AT_MEAS0_CON0_AT0_OFS_WIDTH                                    (15)
#define FEC_LTPC_AT_MEAS0_CON0_AT0_OFS_MASK                                     (0x00007FFF)

#define FEC_LTPC_AT_MEAS0_CON1_AT0_MEAS_SAMPLE_LSB                              (16)
#define FEC_LTPC_AT_MEAS0_CON1_AT0_MEAS_SAMPLE_WIDTH                            (16)
#define FEC_LTPC_AT_MEAS0_CON1_AT0_MEAS_SAMPLE_MASK                             (0xFFFF0000)

#define FEC_LTPC_AT_MEAS0_CON1_AT0_WAIT_LEN_LSB                                 (0)
#define FEC_LTPC_AT_MEAS0_CON1_AT0_WAIT_LEN_WIDTH                               (16)
#define FEC_LTPC_AT_MEAS0_CON1_AT0_WAIT_LEN_MASK                                (0x0000FFFF)

#define FEC_LTPC_AT_MEAS1_CON0_AT1_PAR_LSB                                      (28)
#define FEC_LTPC_AT_MEAS1_CON0_AT1_PAR_WIDTH                                    (4)
#define FEC_LTPC_AT_MEAS1_CON0_AT1_PAR_MASK                                     (0xF0000000)

#define FEC_LTPC_AT_MEAS1_CON0_AT1_OFS_LSB                                      (0)
#define FEC_LTPC_AT_MEAS1_CON0_AT1_OFS_WIDTH                                    (15)
#define FEC_LTPC_AT_MEAS1_CON0_AT1_OFS_MASK                                     (0x00007FFF)

#define FEC_LTPC_AT_MEAS1_CON1_AT1_MEAS_SAMPLE_LSB                              (16)
#define FEC_LTPC_AT_MEAS1_CON1_AT1_MEAS_SAMPLE_WIDTH                            (16)
#define FEC_LTPC_AT_MEAS1_CON1_AT1_MEAS_SAMPLE_MASK                             (0xFFFF0000)

#define FEC_LTPC_AT_MEAS1_CON1_AT1_WAIT_LEN_LSB                                 (0)
#define FEC_LTPC_AT_MEAS1_CON1_AT1_WAIT_LEN_WIDTH                               (16)
#define FEC_LTPC_AT_MEAS1_CON1_AT1_WAIT_LEN_MASK                                (0x0000FFFF)

#define FEC_LTPC_AT_DETBPI0_CON_DETBPI0_DAT_LSB                                 (16)
#define FEC_LTPC_AT_DETBPI0_CON_DETBPI0_DAT_WIDTH                               (4)
#define FEC_LTPC_AT_DETBPI0_CON_DETBPI0_DAT_MASK                                (0x000F0000)

#define FEC_LTPC_AT_DETBPI0_CON_DETBPI0_OFS_LSB                                 (0)
#define FEC_LTPC_AT_DETBPI0_CON_DETBPI0_OFS_WIDTH                               (15)
#define FEC_LTPC_AT_DETBPI0_CON_DETBPI0_OFS_MASK                                (0x00007FFF)

#define FEC_LTPC_AT_DETBPI1_CON_DETBPI1_DAT_LSB                                 (16)
#define FEC_LTPC_AT_DETBPI1_CON_DETBPI1_DAT_WIDTH                               (4)
#define FEC_LTPC_AT_DETBPI1_CON_DETBPI1_DAT_MASK                                (0x000F0000)

#define FEC_LTPC_AT_DETBPI1_CON_DETBPI1_OFS_LSB                                 (0)
#define FEC_LTPC_AT_DETBPI1_CON_DETBPI1_OFS_WIDTH                               (15)
#define FEC_LTPC_AT_DETBPI1_CON_DETBPI1_OFS_MASK                                (0x00007FFF)

#define FEC_LTPC_AT_DETMIPI0_CON_DETMIPI0_EVT_LSB                               (16)
#define FEC_LTPC_AT_DETMIPI0_CON_DETMIPI0_EVT_WIDTH                             (4)
#define FEC_LTPC_AT_DETMIPI0_CON_DETMIPI0_EVT_MASK                              (0x000F0000)

#define FEC_LTPC_AT_DETMIPI0_CON_DETMIPI0_OFS_LSB                               (0)
#define FEC_LTPC_AT_DETMIPI0_CON_DETMIPI0_OFS_WIDTH                             (15)
#define FEC_LTPC_AT_DETMIPI0_CON_DETMIPI0_OFS_MASK                              (0x00007FFF)

#define FEC_LTPC_AT_DETMIPI1_CON_DETMIPI1_EVT_LSB                               (16)
#define FEC_LTPC_AT_DETMIPI1_CON_DETMIPI1_EVT_WIDTH                             (4)
#define FEC_LTPC_AT_DETMIPI1_CON_DETMIPI1_EVT_MASK                              (0x000F0000)

#define FEC_LTPC_AT_DETMIPI1_CON_DETMIPI1_OFS_LSB                               (0)
#define FEC_LTPC_AT_DETMIPI1_CON_DETMIPI1_OFS_WIDTH                             (15)
#define FEC_LTPC_AT_DETMIPI1_CON_DETMIPI1_OFS_MASK                              (0x00007FFF)

#define FEC_LTPC_EDC_RFDET_CON_MEAS_SEL_LSB                                     (16)
#define FEC_LTPC_EDC_RFDET_CON_MEAS_SEL_WIDTH                                   (3)
#define FEC_LTPC_EDC_RFDET_CON_MEAS_SEL_MASK                                    (0x00070000)

#define FEC_LTPC_EDC_RFDET_CON_RF_DET_OFS_LSB                                   (0)
#define FEC_LTPC_EDC_RFDET_CON_RF_DET_OFS_WIDTH                                 (15)
#define FEC_LTPC_EDC_RFDET_CON_RF_DET_OFS_MASK                                  (0x00007FFF)

#define FEC_LTPC_EDC_ADC_CON_ADC_OFF_LSB                                        (16)
#define FEC_LTPC_EDC_ADC_CON_ADC_OFF_WIDTH                                      (15)
#define FEC_LTPC_EDC_ADC_CON_ADC_OFF_MASK                                       (0x7FFF0000)

#define FEC_LTPC_EDC_ADC_CON_ADC_ON_LSB                                         (0)
#define FEC_LTPC_EDC_ADC_CON_ADC_ON_WIDTH                                       (15)
#define FEC_LTPC_EDC_ADC_CON_ADC_ON_MASK                                        (0x00007FFF)

#define FEC_LTPC_EDC_DETBPI_CON_DETBPI_DAT_LSB                                  (16)
#define FEC_LTPC_EDC_DETBPI_CON_DETBPI_DAT_WIDTH                                (4)
#define FEC_LTPC_EDC_DETBPI_CON_DETBPI_DAT_MASK                                 (0x000F0000)

#define FEC_LTPC_EDC_DETBPI_CON_DETBPI_OFS_LSB                                  (0)
#define FEC_LTPC_EDC_DETBPI_CON_DETBPI_OFS_WIDTH                                (15)
#define FEC_LTPC_EDC_DETBPI_CON_DETBPI_OFS_MASK                                 (0x00007FFF)

#define FEC_LTPC_TDE_MEAS_CON0_TDE_EN_LSB                                       (28)
#define FEC_LTPC_TDE_MEAS_CON0_TDE_EN_WIDTH                                     (1)
#define FEC_LTPC_TDE_MEAS_CON0_TDE_EN_MASK                                      (0x10000000)
#define FEC_LTPC_TDE_MEAS_CON0_TDE_EN_BIT                                       (0x10000000)

#define FEC_LTPC_TDE_MEAS_CON0_TDE_OFS_LSB                                      (0)
#define FEC_LTPC_TDE_MEAS_CON0_TDE_OFS_WIDTH                                    (15)
#define FEC_LTPC_TDE_MEAS_CON0_TDE_OFS_MASK                                     (0x00007FFF)

#define FEC_LTPC_TDE_MEAS_CON1_MEAS_SAMPLE_LSB                                  (16)
#define FEC_LTPC_TDE_MEAS_CON1_MEAS_SAMPLE_WIDTH                                (16)
#define FEC_LTPC_TDE_MEAS_CON1_MEAS_SAMPLE_MASK                                 (0xFFFF0000)

#define FEC_LTPC_TDE_MEAS_CON1_SHIFT_LSB                                        (8)
#define FEC_LTPC_TDE_MEAS_CON1_SHIFT_WIDTH                                      (3)
#define FEC_LTPC_TDE_MEAS_CON1_SHIFT_MASK                                       (0x00000700)

#define FEC_LTPC_TDE_MEAS_CON1_WAIT_SAMPLE_LSB                                  (0)
#define FEC_LTPC_TDE_MEAS_CON1_WAIT_SAMPLE_WIDTH                                (8)
#define FEC_LTPC_TDE_MEAS_CON1_WAIT_SAMPLE_MASK                                 (0x000000FF)

#define FEC_LTPC_ED_MEAS_CON0_ED_OFS_LSB                                        (0)
#define FEC_LTPC_ED_MEAS_CON0_ED_OFS_WIDTH                                      (15)
#define FEC_LTPC_ED_MEAS_CON0_ED_OFS_MASK                                       (0x00007FFF)

#define FEC_LTPC_ED_MEAS_CON1_MEAS_SAMPLE_LSB                                   (16)
#define FEC_LTPC_ED_MEAS_CON1_MEAS_SAMPLE_WIDTH                                 (16)
#define FEC_LTPC_ED_MEAS_CON1_MEAS_SAMPLE_MASK                                  (0xFFFF0000)

#define FEC_LTPC_ED_MEAS_CON1_WAIT_SAMPLE_LSB                                   (0)
#define FEC_LTPC_ED_MEAS_CON1_WAIT_SAMPLE_WIDTH                                 (16)
#define FEC_LTPC_ED_MEAS_CON1_WAIT_SAMPLE_MASK                                  (0x0000FFFF)

#define FEC_LTPC_ED_MEAS_CON2_ED_OFS_LSB                                        (0)
#define FEC_LTPC_ED_MEAS_CON2_ED_OFS_WIDTH                                      (15)
#define FEC_LTPC_ED_MEAS_CON2_ED_OFS_MASK                                       (0x00007FFF)

#define FEC_LTPC_ED_MEAS_CON3_MEAS_SAMPLE_LSB                                   (16)
#define FEC_LTPC_ED_MEAS_CON3_MEAS_SAMPLE_WIDTH                                 (16)
#define FEC_LTPC_ED_MEAS_CON3_MEAS_SAMPLE_MASK                                  (0xFFFF0000)

#define FEC_LTPC_ED_MEAS_CON3_WAIT_SAMPLE_LSB                                   (0)
#define FEC_LTPC_ED_MEAS_CON3_WAIT_SAMPLE_WIDTH                                 (16)
#define FEC_LTPC_ED_MEAS_CON3_WAIT_SAMPLE_MASK                                  (0x0000FFFF)

#define FEC_LTPC_CIM3_MEAS_CON0_CIM3_OFS_LSB                                    (0)
#define FEC_LTPC_CIM3_MEAS_CON0_CIM3_OFS_WIDTH                                  (15)
#define FEC_LTPC_CIM3_MEAS_CON0_CIM3_OFS_MASK                                   (0x00007FFF)

#define FEC_LTPC_CIM3_MEAS_CON1_MEAS_SAMPLE_LSB                                 (16)
#define FEC_LTPC_CIM3_MEAS_CON1_MEAS_SAMPLE_WIDTH                               (16)
#define FEC_LTPC_CIM3_MEAS_CON1_MEAS_SAMPLE_MASK                                (0xFFFF0000)

#define FEC_LTPC_CIM3_MEAS_CON1_WAIT_SAMPLE_LSB                                 (0)
#define FEC_LTPC_CIM3_MEAS_CON1_WAIT_SAMPLE_WIDTH                               (16)
#define FEC_LTPC_CIM3_MEAS_CON1_WAIT_SAMPLE_MASK                                (0x0000FFFF)

#define FEC_LTPC_OTFC_MEAS_CON_EN_BIT_LSB                                       (0)
#define FEC_LTPC_OTFC_MEAS_CON_EN_BIT_WIDTH                                     (1)
#define FEC_LTPC_OTFC_MEAS_CON_EN_BIT_MASK                                      (0x00000001)
#define FEC_LTPC_OTFC_MEAS_CON_EN_BIT_BIT                                       (0x00000001)

#define FEC_LTPC_AT_MIPI0_CON_AT_MIPI_OFS_LSB                                   (0)
#define FEC_LTPC_AT_MIPI0_CON_AT_MIPI_OFS_WIDTH                                 (15)
#define FEC_LTPC_AT_MIPI0_CON_AT_MIPI_OFS_MASK                                  (0x00007FFF)

#define FEC_LTPC_AT_MIPI1_CON_AT_MIPI_OFS_LSB                                   (0)
#define FEC_LTPC_AT_MIPI1_CON_AT_MIPI_OFS_WIDTH                                 (15)
#define FEC_LTPC_AT_MIPI1_CON_AT_MIPI_OFS_MASK                                  (0x00007FFF)

#define FEC_LTPC_PGABSI_CON_ON_OFF_BASE_LSB                                     (16)
#define FEC_LTPC_PGABSI_CON_ON_OFF_BASE_WIDTH                                   (15)
#define FEC_LTPC_PGABSI_CON_ON_OFF_BASE_MASK                                    (0x7FFF0000)

#define FEC_LTPC_PGABSI_CON_OFF_ON_BASE_LSB                                     (0)
#define FEC_LTPC_PGABSI_CON_OFF_ON_BASE_WIDTH                                   (15)
#define FEC_LTPC_PGABSI_CON_OFF_ON_BASE_MASK                                    (0x00007FFF)

#define FEC_LTPC_PGABSI_CON1_INTER_SF_DLY_LSB                                   (16)
#define FEC_LTPC_PGABSI_CON1_INTER_SF_DLY_WIDTH                                 (16)
#define FEC_LTPC_PGABSI_CON1_INTER_SF_DLY_MASK                                  (0xFFFF0000)

#define FEC_LTPC_PGABSI_CON1_PRACH_SRS_ON_DLY_LSB                               (0)
#define FEC_LTPC_PGABSI_CON1_PRACH_SRS_ON_DLY_WIDTH                             (16)
#define FEC_LTPC_PGABSI_CON1_PRACH_SRS_ON_DLY_MASK                              (0x0000FFFF)

#define FEC_LTPC_PGABSI_CON2_SRS_PUXCH_DLY_LSB                                  (16)
#define FEC_LTPC_PGABSI_CON2_SRS_PUXCH_DLY_WIDTH                                (16)
#define FEC_LTPC_PGABSI_CON2_SRS_PUXCH_DLY_MASK                                 (0xFFFF0000)

#define FEC_LTPC_PGABSI_CON2_PUXCH_SRS_DLY_LSB                                  (0)
#define FEC_LTPC_PGABSI_CON2_PUXCH_SRS_DLY_WIDTH                                (16)
#define FEC_LTPC_PGABSI_CON2_PUXCH_SRS_DLY_MASK                                 (0x0000FFFF)

#define FEC_LTPC_PGABSI_CON3_SRSBL_PUXCH_DLY_LSB                                (16)
#define FEC_LTPC_PGABSI_CON3_SRSBL_PUXCH_DLY_WIDTH                              (16)
#define FEC_LTPC_PGABSI_CON3_SRSBL_PUXCH_DLY_MASK                               (0xFFFF0000)

#define FEC_LTPC_PGABSI_CON3_PUXCH_SRSBL_DLY_LSB                                (0)
#define FEC_LTPC_PGABSI_CON3_PUXCH_SRSBL_DLY_WIDTH                              (16)
#define FEC_LTPC_PGABSI_CON3_PUXCH_SRSBL_DLY_MASK                               (0x0000FFFF)

#define FEC_LTPC_DC2DC_CON_ON_OFF_BASE_LSB                                      (16)
#define FEC_LTPC_DC2DC_CON_ON_OFF_BASE_WIDTH                                    (15)
#define FEC_LTPC_DC2DC_CON_ON_OFF_BASE_MASK                                     (0x7FFF0000)

#define FEC_LTPC_DC2DC_CON_OFF_ON_BASE_LSB                                      (0)
#define FEC_LTPC_DC2DC_CON_OFF_ON_BASE_WIDTH                                    (15)
#define FEC_LTPC_DC2DC_CON_OFF_ON_BASE_MASK                                     (0x00007FFF)

#define FEC_LTPC_DC2DC_CON1_INTER_SF_DLY_LSB                                    (16)
#define FEC_LTPC_DC2DC_CON1_INTER_SF_DLY_WIDTH                                  (16)
#define FEC_LTPC_DC2DC_CON1_INTER_SF_DLY_MASK                                   (0xFFFF0000)

#define FEC_LTPC_DC2DC_CON1_PRACH_SRS_ON_DLY_LSB                                (0)
#define FEC_LTPC_DC2DC_CON1_PRACH_SRS_ON_DLY_WIDTH                              (16)
#define FEC_LTPC_DC2DC_CON1_PRACH_SRS_ON_DLY_MASK                               (0x0000FFFF)

#define FEC_LTPC_DC2DC_CON2_SRS_PUXCH_DLY_LSB                                   (16)
#define FEC_LTPC_DC2DC_CON2_SRS_PUXCH_DLY_WIDTH                                 (16)
#define FEC_LTPC_DC2DC_CON2_SRS_PUXCH_DLY_MASK                                  (0xFFFF0000)

#define FEC_LTPC_DC2DC_CON2_PUXCH_SRS_DLY_LSB                                   (0)
#define FEC_LTPC_DC2DC_CON2_PUXCH_SRS_DLY_WIDTH                                 (16)
#define FEC_LTPC_DC2DC_CON2_PUXCH_SRS_DLY_MASK                                  (0x0000FFFF)

#define FEC_LTPC_DC2DC_CON3_SRSBL_PUXCH_DLY_LSB                                 (16)
#define FEC_LTPC_DC2DC_CON3_SRSBL_PUXCH_DLY_WIDTH                               (16)
#define FEC_LTPC_DC2DC_CON3_SRSBL_PUXCH_DLY_MASK                                (0xFFFF0000)

#define FEC_LTPC_DC2DC_CON3_PUXCH_SRSBL_DLY_LSB                                 (0)
#define FEC_LTPC_DC2DC_CON3_PUXCH_SRSBL_DLY_WIDTH                               (16)
#define FEC_LTPC_DC2DC_CON3_PUXCH_SRSBL_DLY_MASK                                (0x0000FFFF)

#define FEC_LTPC_VBIAS_CON_ON_OFF_BASE_LSB                                      (16)
#define FEC_LTPC_VBIAS_CON_ON_OFF_BASE_WIDTH                                    (15)
#define FEC_LTPC_VBIAS_CON_ON_OFF_BASE_MASK                                     (0x7FFF0000)

#define FEC_LTPC_VBIAS_CON_OFF_ON_BASE_LSB                                      (0)
#define FEC_LTPC_VBIAS_CON_OFF_ON_BASE_WIDTH                                    (15)
#define FEC_LTPC_VBIAS_CON_OFF_ON_BASE_MASK                                     (0x00007FFF)

#define FEC_LTPC_VBIAS_CON1_INTER_SF_DLY_LSB                                    (16)
#define FEC_LTPC_VBIAS_CON1_INTER_SF_DLY_WIDTH                                  (16)
#define FEC_LTPC_VBIAS_CON1_INTER_SF_DLY_MASK                                   (0xFFFF0000)

#define FEC_LTPC_VBIAS_CON1_PRACH_SRS_ON_DLY_LSB                                (0)
#define FEC_LTPC_VBIAS_CON1_PRACH_SRS_ON_DLY_WIDTH                              (16)
#define FEC_LTPC_VBIAS_CON1_PRACH_SRS_ON_DLY_MASK                               (0x0000FFFF)

#define FEC_LTPC_VBIAS_CON2_SRS_PUXCH_DLY_LSB                                   (16)
#define FEC_LTPC_VBIAS_CON2_SRS_PUXCH_DLY_WIDTH                                 (16)
#define FEC_LTPC_VBIAS_CON2_SRS_PUXCH_DLY_MASK                                  (0xFFFF0000)

#define FEC_LTPC_VBIAS_CON2_PUXCH_SRS_DLY_LSB                                   (0)
#define FEC_LTPC_VBIAS_CON2_PUXCH_SRS_DLY_WIDTH                                 (16)
#define FEC_LTPC_VBIAS_CON2_PUXCH_SRS_DLY_MASK                                  (0x0000FFFF)

#define FEC_LTPC_VBIAS_CON3_SRSBL_PUXCH_DLY_LSB                                 (16)
#define FEC_LTPC_VBIAS_CON3_SRSBL_PUXCH_DLY_WIDTH                               (16)
#define FEC_LTPC_VBIAS_CON3_SRSBL_PUXCH_DLY_MASK                                (0xFFFF0000)

#define FEC_LTPC_VBIAS_CON3_PUXCH_SRSBL_DLY_LSB                                 (0)
#define FEC_LTPC_VBIAS_CON3_PUXCH_SRSBL_DLY_WIDTH                               (16)
#define FEC_LTPC_VBIAS_CON3_PUXCH_SRSBL_DLY_MASK                                (0x0000FFFF)

#define FEC_LTPC_VM_CON_ON_OFF_BASE_LSB                                         (16)
#define FEC_LTPC_VM_CON_ON_OFF_BASE_WIDTH                                       (15)
#define FEC_LTPC_VM_CON_ON_OFF_BASE_MASK                                        (0x7FFF0000)

#define FEC_LTPC_VM_CON_OFF_ON_BASE_LSB                                         (0)
#define FEC_LTPC_VM_CON_OFF_ON_BASE_WIDTH                                       (15)
#define FEC_LTPC_VM_CON_OFF_ON_BASE_MASK                                        (0x00007FFF)

#define FEC_LTPC_VM_CON1_INTER_SF_DLY_LSB                                       (16)
#define FEC_LTPC_VM_CON1_INTER_SF_DLY_WIDTH                                     (16)
#define FEC_LTPC_VM_CON1_INTER_SF_DLY_MASK                                      (0xFFFF0000)

#define FEC_LTPC_VM_CON1_PRACH_SRS_ON_DLY_LSB                                   (0)
#define FEC_LTPC_VM_CON1_PRACH_SRS_ON_DLY_WIDTH                                 (16)
#define FEC_LTPC_VM_CON1_PRACH_SRS_ON_DLY_MASK                                  (0x0000FFFF)

#define FEC_LTPC_VM_CON2_SRS_PUXCH_DLY_LSB                                      (16)
#define FEC_LTPC_VM_CON2_SRS_PUXCH_DLY_WIDTH                                    (16)
#define FEC_LTPC_VM_CON2_SRS_PUXCH_DLY_MASK                                     (0xFFFF0000)

#define FEC_LTPC_VM_CON2_PUXCH_SRS_DLY_LSB                                      (0)
#define FEC_LTPC_VM_CON2_PUXCH_SRS_DLY_WIDTH                                    (16)
#define FEC_LTPC_VM_CON2_PUXCH_SRS_DLY_MASK                                     (0x0000FFFF)

#define FEC_LTPC_VM_CON3_SRSBL_PUXCH_DLY_LSB                                    (16)
#define FEC_LTPC_VM_CON3_SRSBL_PUXCH_DLY_WIDTH                                  (16)
#define FEC_LTPC_VM_CON3_SRSBL_PUXCH_DLY_MASK                                   (0xFFFF0000)

#define FEC_LTPC_VM_CON3_PUXCH_SRSBL_DLY_LSB                                    (0)
#define FEC_LTPC_VM_CON3_PUXCH_SRSBL_DLY_WIDTH                                  (16)
#define FEC_LTPC_VM_CON3_PUXCH_SRSBL_DLY_MASK                                   (0x0000FFFF)

#define FEC_LTPC_DFE_CON_ON_OFF_BASE_LSB                                        (16)
#define FEC_LTPC_DFE_CON_ON_OFF_BASE_WIDTH                                      (15)
#define FEC_LTPC_DFE_CON_ON_OFF_BASE_MASK                                       (0x7FFF0000)

#define FEC_LTPC_DFE_CON_OFF_ON_BASE_LSB                                        (0)
#define FEC_LTPC_DFE_CON_OFF_ON_BASE_WIDTH                                      (15)
#define FEC_LTPC_DFE_CON_OFF_ON_BASE_MASK                                       (0x00007FFF)

#define FEC_LTPC_PA_MIPI_CON_ON_OFF_BASE_LSB                                    (16)
#define FEC_LTPC_PA_MIPI_CON_ON_OFF_BASE_WIDTH                                  (15)
#define FEC_LTPC_PA_MIPI_CON_ON_OFF_BASE_MASK                                   (0x7FFF0000)

#define FEC_LTPC_PA_MIPI_CON_OFF_ON_BASE_LSB                                    (0)
#define FEC_LTPC_PA_MIPI_CON_OFF_ON_BASE_WIDTH                                  (15)
#define FEC_LTPC_PA_MIPI_CON_OFF_ON_BASE_MASK                                   (0x00007FFF)

#define FEC_LTPC_PA_MIPI_CON1_INTER_SF_DLY_LSB                                  (16)
#define FEC_LTPC_PA_MIPI_CON1_INTER_SF_DLY_WIDTH                                (16)
#define FEC_LTPC_PA_MIPI_CON1_INTER_SF_DLY_MASK                                 (0xFFFF0000)

#define FEC_LTPC_PA_MIPI_CON1_PRACH_SRS_ON_DLY_LSB                              (0)
#define FEC_LTPC_PA_MIPI_CON1_PRACH_SRS_ON_DLY_WIDTH                            (16)
#define FEC_LTPC_PA_MIPI_CON1_PRACH_SRS_ON_DLY_MASK                             (0x0000FFFF)

#define FEC_LTPC_PA_MIPI_CON2_SRS_PUXCH_DLY_LSB                                 (16)
#define FEC_LTPC_PA_MIPI_CON2_SRS_PUXCH_DLY_WIDTH                               (16)
#define FEC_LTPC_PA_MIPI_CON2_SRS_PUXCH_DLY_MASK                                (0xFFFF0000)

#define FEC_LTPC_PA_MIPI_CON2_PUXCH_SRS_DLY_LSB                                 (0)
#define FEC_LTPC_PA_MIPI_CON2_PUXCH_SRS_DLY_WIDTH                               (16)
#define FEC_LTPC_PA_MIPI_CON2_PUXCH_SRS_DLY_MASK                                (0x0000FFFF)

#define FEC_LTPC_PA_MIPI_CON3_SRS_BL_PUXCH_DLY_LSB                              (16)
#define FEC_LTPC_PA_MIPI_CON3_SRS_BL_PUXCH_DLY_WIDTH                            (16)
#define FEC_LTPC_PA_MIPI_CON3_SRS_BL_PUXCH_DLY_MASK                             (0xFFFF0000)

#define FEC_LTPC_PA_MIPI_CON3_PUXCH_SRS_BL_DLY_LSB                              (0)
#define FEC_LTPC_PA_MIPI_CON3_PUXCH_SRS_BL_DLY_WIDTH                            (16)
#define FEC_LTPC_PA_MIPI_CON3_PUXCH_SRS_BL_DLY_MASK                             (0x0000FFFF)

#define FEC_LTPC_GLO_CON1_INTER_SF_DLY_LSB                                      (16)
#define FEC_LTPC_GLO_CON1_INTER_SF_DLY_WIDTH                                    (16)
#define FEC_LTPC_GLO_CON1_INTER_SF_DLY_MASK                                     (0xFFFF0000)

#define FEC_LTPC_GLO_CON1_PRACH_SRS_ON_DLY_LSB                                  (0)
#define FEC_LTPC_GLO_CON1_PRACH_SRS_ON_DLY_WIDTH                                (16)
#define FEC_LTPC_GLO_CON1_PRACH_SRS_ON_DLY_MASK                                 (0x0000FFFF)

#define FEC_LTPC_GLO_CON2_SRS_PUXCH_DLY_LSB                                     (16)
#define FEC_LTPC_GLO_CON2_SRS_PUXCH_DLY_WIDTH                                   (16)
#define FEC_LTPC_GLO_CON2_SRS_PUXCH_DLY_MASK                                    (0xFFFF0000)

#define FEC_LTPC_GLO_CON2_PUXCH_SRS_DLY_LSB                                     (0)
#define FEC_LTPC_GLO_CON2_PUXCH_SRS_DLY_WIDTH                                   (16)
#define FEC_LTPC_GLO_CON2_PUXCH_SRS_DLY_MASK                                    (0x0000FFFF)

#define FEC_LTPC_GLO_CON3_SRS_BL_PUXCH_DLY_LSB                                  (16)
#define FEC_LTPC_GLO_CON3_SRS_BL_PUXCH_DLY_WIDTH                                (16)
#define FEC_LTPC_GLO_CON3_SRS_BL_PUXCH_DLY_MASK                                 (0xFFFF0000)

#define FEC_LTPC_GLO_CON3_PUXCH_SRS_BL_DLY_LSB                                  (0)
#define FEC_LTPC_GLO_CON3_PUXCH_SRS_BL_DLY_WIDTH                                (16)
#define FEC_LTPC_GLO_CON3_PUXCH_SRS_BL_DLY_MASK                                 (0x0000FFFF)

#define FEC_LTPC_GAIN_OFS_CTRL_BMP_ET_LSB                                       (6)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_ET_WIDTH                                     (1)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_ET_MASK                                      (0x00000040)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_ET_BIT                                       (0x00000040)

#define FEC_LTPC_GAIN_OFS_CTRL_BMP_PA_MIPI_LSB                                  (5)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_PA_MIPI_WIDTH                                (1)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_PA_MIPI_MASK                                 (0x00000020)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_PA_MIPI_BIT                                  (0x00000020)

#define FEC_LTPC_GAIN_OFS_CTRL_BMP_DFE_LSB                                      (4)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_DFE_WIDTH                                    (1)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_DFE_MASK                                     (0x00000010)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_DFE_BIT                                      (0x00000010)

#define FEC_LTPC_GAIN_OFS_CTRL_BMP_VM_LSB                                       (3)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_VM_WIDTH                                     (1)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_VM_MASK                                      (0x00000008)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_VM_BIT                                       (0x00000008)

#define FEC_LTPC_GAIN_OFS_CTRL_BMP_VBIAS_LSB                                    (2)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_VBIAS_WIDTH                                  (1)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_VBIAS_MASK                                   (0x00000004)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_VBIAS_BIT                                    (0x00000004)

#define FEC_LTPC_GAIN_OFS_CTRL_BMP_DC2DC_LSB                                    (1)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_DC2DC_WIDTH                                  (1)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_DC2DC_MASK                                   (0x00000002)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_DC2DC_BIT                                    (0x00000002)

#define FEC_LTPC_GAIN_OFS_CTRL_BMP_PGB_BSI_LSB                                  (0)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_PGB_BSI_WIDTH                                (1)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_PGB_BSI_MASK                                 (0x00000001)
#define FEC_LTPC_GAIN_OFS_CTRL_BMP_PGB_BSI_BIT                                  (0x00000001)

#define FEC_LTPC_PS_CON_MEAS_EN_LSB                                             (8)
#define FEC_LTPC_PS_CON_MEAS_EN_WIDTH                                           (1)
#define FEC_LTPC_PS_CON_MEAS_EN_MASK                                            (0x00000100)
#define FEC_LTPC_PS_CON_MEAS_EN_BIT                                             (0x00000100)

#define FEC_LTPC_PS_CON_DFE_EN_LSB                                              (7)
#define FEC_LTPC_PS_CON_DFE_EN_WIDTH                                            (1)
#define FEC_LTPC_PS_CON_DFE_EN_MASK                                             (0x00000080)
#define FEC_LTPC_PS_CON_DFE_EN_BIT                                              (0x00000080)

#define FEC_LTPC_PS_CON_GBB_EN_LSB                                              (6)
#define FEC_LTPC_PS_CON_GBB_EN_WIDTH                                            (1)
#define FEC_LTPC_PS_CON_GBB_EN_MASK                                             (0x00000040)
#define FEC_LTPC_PS_CON_GBB_EN_BIT                                              (0x00000040)

#define FEC_LTPC_PS_CON_VM_EN_LSB                                               (5)
#define FEC_LTPC_PS_CON_VM_EN_WIDTH                                             (1)
#define FEC_LTPC_PS_CON_VM_EN_MASK                                              (0x00000020)
#define FEC_LTPC_PS_CON_VM_EN_BIT                                               (0x00000020)

#define FEC_LTPC_PS_CON_VBIAS_EN_LSB                                            (4)
#define FEC_LTPC_PS_CON_VBIAS_EN_WIDTH                                          (1)
#define FEC_LTPC_PS_CON_VBIAS_EN_MASK                                           (0x00000010)
#define FEC_LTPC_PS_CON_VBIAS_EN_BIT                                            (0x00000010)

#define FEC_LTPC_PS_CON_DC2DC_EN_LSB                                            (3)
#define FEC_LTPC_PS_CON_DC2DC_EN_WIDTH                                          (1)
#define FEC_LTPC_PS_CON_DC2DC_EN_MASK                                           (0x00000008)
#define FEC_LTPC_PS_CON_DC2DC_EN_BIT                                            (0x00000008)

#define FEC_LTPC_PS_CON_PGABSI_EN_LSB                                           (2)
#define FEC_LTPC_PS_CON_PGABSI_EN_WIDTH                                         (1)
#define FEC_LTPC_PS_CON_PGABSI_EN_MASK                                          (0x00000004)
#define FEC_LTPC_PS_CON_PGABSI_EN_BIT                                           (0x00000004)

#define FEC_LTPC_PS_CON_TXM_MIPI_EN_LSB                                         (1)
#define FEC_LTPC_PS_CON_TXM_MIPI_EN_WIDTH                                       (1)
#define FEC_LTPC_PS_CON_TXM_MIPI_EN_MASK                                        (0x00000002)
#define FEC_LTPC_PS_CON_TXM_MIPI_EN_BIT                                         (0x00000002)

#define FEC_LTPC_PS_CON_PA_MIPI_EN_LSB                                          (0)
#define FEC_LTPC_PS_CON_PA_MIPI_EN_WIDTH                                        (1)
#define FEC_LTPC_PS_CON_PA_MIPI_EN_MASK                                         (0x00000001)
#define FEC_LTPC_PS_CON_PA_MIPI_EN_BIT                                          (0x00000001)

#define FEC_LTPC_AEDC_CON_CIM3_EN_LSB                                           (3)
#define FEC_LTPC_AEDC_CON_CIM3_EN_WIDTH                                         (1)
#define FEC_LTPC_AEDC_CON_CIM3_EN_MASK                                          (0x00000008)
#define FEC_LTPC_AEDC_CON_CIM3_EN_BIT                                           (0x00000008)

#define FEC_LTPC_AEDC_CON_DPD_EN_LSB                                            (2)
#define FEC_LTPC_AEDC_CON_DPD_EN_WIDTH                                          (1)
#define FEC_LTPC_AEDC_CON_DPD_EN_MASK                                           (0x00000004)
#define FEC_LTPC_AEDC_CON_DPD_EN_BIT                                            (0x00000004)

#define FEC_LTPC_AEDC_CON_ET_EN_LSB                                             (1)
#define FEC_LTPC_AEDC_CON_ET_EN_WIDTH                                           (1)
#define FEC_LTPC_AEDC_CON_ET_EN_MASK                                            (0x00000002)
#define FEC_LTPC_AEDC_CON_ET_EN_BIT                                             (0x00000002)

#define FEC_LTPC_AEDC_CON_AT_EN_LSB                                             (0)
#define FEC_LTPC_AEDC_CON_AT_EN_WIDTH                                           (1)
#define FEC_LTPC_AEDC_CON_AT_EN_MASK                                            (0x00000001)
#define FEC_LTPC_AEDC_CON_AT_EN_BIT                                             (0x00000001)

#define FEC_LTPC_PWR_BUDGET_MCS_addi_backoff_qam_LSB                            (16)
#define FEC_LTPC_PWR_BUDGET_MCS_addi_backoff_qam_WIDTH                          (16)
#define FEC_LTPC_PWR_BUDGET_MCS_addi_backoff_qam_MASK                           (0xFFFF0000)

#define FEC_LTPC_PWR_BUDGET_MCS_addi_backoff_qpsk_LSB                           (0)
#define FEC_LTPC_PWR_BUDGET_MCS_addi_backoff_qpsk_WIDTH                         (16)
#define FEC_LTPC_PWR_BUDGET_MCS_addi_backoff_qpsk_MASK                          (0x0000FFFF)

#define FEC_LTPC_PWR_BUDGET_SMALL_RB_addi_backoff_s_rb_LSB                      (16)
#define FEC_LTPC_PWR_BUDGET_SMALL_RB_addi_backoff_s_rb_WIDTH                    (16)
#define FEC_LTPC_PWR_BUDGET_SMALL_RB_addi_backoff_s_rb_MASK                     (0xFFFF0000)

#define FEC_LTPC_PWR_BUDGET_SMALL_RB_small_rb_threshold_LSB                     (0)
#define FEC_LTPC_PWR_BUDGET_SMALL_RB_small_rb_threshold_WIDTH                   (8)
#define FEC_LTPC_PWR_BUDGET_SMALL_RB_small_rb_threshold_MASK                    (0x000000FF)

#endif //#ifndef _FEC_CMIF_REG_MT6291_H_

