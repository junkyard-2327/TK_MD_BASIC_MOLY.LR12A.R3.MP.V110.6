#ifndef __MASE_REG_BASE_H__
#define __MASE_REG_BASE_H__

/* This is a regbase file for MASE cosim */
/* If you want to define regbase, please undef it first to avoid duplicated definiation in general regbase file */
/* All register base including Normal/Device/SO type in general regbase file will be driected to dummy register */

#define MDSYS_PERI_ACC_TYPE_MASK    (0xF0000000)
#define MDSYS_PERI_DEVICE_TYPE      (0x80000000)
#define DEV_REG_BASE(addr)              ((addr  & ~MDSYS_PERI_ACC_TYPE_MASK) | MDSYS_PERI_DEVICE_TYPE)

/* redefine reg base in general regbase file */
#undef BASE_MADDR_MDCIRQ
#define BASE_MADDR_MDCIRQ               (0xF0070000)
#undef BASE_ADDR_MDCIRQ
#define BASE_ADDR_MDCIRQ                DEV_REG_BASE(BASE_MADDR_MDCIRQ)

#undef BASE_MADDR_L2ULSBDMA
#define BASE_MADDR_L2ULSBDMA            (0xF0800000)
#undef BASE_ADDR_L2ULSBDMA
#define BASE_ADDR_L2ULSBDMA             DEV_REG_BASE(BASE_MADDR_L2ULSBDMA)

#undef BASE_MADDR_L2ULHBDMA
#define BASE_MADDR_L2ULHBDMA            (0xF0810000)
#undef BASE_ADDR_L2ULHBDMA
#define BASE_ADDR_L2ULHBDMA             DEV_REG_BASE(BASE_MADDR_L2ULHBDMA)

#undef BASE_MADDR_L2DLSBDMA
#define BASE_MADDR_L2DLSBDMA            (0xF0820000)
#undef BASE_ADDR_L2DLSBDMA
#define BASE_ADDR_L2DLSBDMA             DEV_REG_BASE(BASE_MADDR_L2DLSBDMA)

#undef BASE_MADDR_L2DLHBDMA
#define BASE_MADDR_L2DLHBDMA            (0xF0830000)
#undef BASE_ADDR_L2DLHBDMA
#define BASE_ADDR_L2DLHBDMA             DEV_REG_BASE(BASE_MADDR_L2DLHBDMA)

#undef BASE_MADDR_L2MBIST
#define BASE_MADDR_L2MBIST              (0xF0840000)
#undef BASE_ADDR_L2MBIST
#define BASE_ADDR_L2MBIST               DEV_REG_BASE(BASE_MADDR_L2MBIST)

#undef BASE_MADDR_L2PSEUPHY
#define BASE_MADDR_L2PSEUPHY            (0xF0850000)
#undef BASE_ADDR_L2PSEUPHY
#define BASE_ADDR_L2PSEUPHY             DEV_REG_BASE(BASE_MADDR_L2PSEUPHY)

#undef BASE_MADDR_L2HWLOG
#define BASE_MADDR_L2HWLOG              (0xF0858000)
#undef BASE_ADDR_L2HWLOG
#define BASE_ADDR_L2HWLOG               DEV_REG_BASE(BASE_MADDR_L2HWLOG)

#undef BASE_MADDR_L2SOINDMA
#define BASE_MADDR_L2SOINDMA            (0xF0860000)
#undef BASE_ADDR_L2SOINDMA
#define BASE_ADDR_L2SOINDMA             DEV_REG_BASE(BASE_MADDR_L2SOINDMA)

#undef BASE_MADDR_L2SOOUTDMA
#define BASE_MADDR_L2SOOUTDMA           (0xF0870000)
#undef BASE_ADDR_L2SOOUTDMA
#define BASE_ADDR_L2SOOUTDMA            DEV_REG_BASE(BASE_MADDR_L2SOOUTDMA)

#undef BASE_MADDR_L2ULLMAC
#define BASE_MADDR_L2ULLMAC             (0xF0880000)
#undef BASE_ADDR_L2ULLMAC
#define BASE_ADDR_L2ULLMAC              DEV_REG_BASE(BASE_MADDR_L2ULLMAC)

#undef BASE_MADDR_L2DLLMAC
#define BASE_MADDR_L2DLLMAC             (0xF0890000)
#undef BASE_ADDR_L2DLLMAC
#define BASE_ADDR_L2DLLMAC              DEV_REG_BASE(BASE_MADDR_L2DLLMAC)

#undef BASE_MADDR_L2CALMAC
#define BASE_MADDR_L2CALMAC             (0xF0898000)
#undef BASE_ADDR_L2CALMAC
#define BASE_ADDR_L2CALMAC              DEV_REG_BASE(BASE_MADDR_L2CALMAC)

#undef BASE_MADDR_L2ULFIFOMNG
#define BASE_MADDR_L2ULFIFOMNG          (0xF08A0000)
#undef BASE_ADDR_L2ULFIFOMNG
#define BASE_ADDR_L2ULFIFOMNG           DEV_REG_BASE(BASE_MADDR_L2ULFIFOMNG)

#undef BASE_MADDR_L2DLFIFOMNG
#define BASE_MADDR_L2DLFIFOMNG          (0xF08A4000)
#undef BASE_ADDR_L2DLFIFOMNG
#define BASE_ADDR_L2DLFIFOMNG           DEV_REG_BASE(BASE_MADDR_L2DLFIFOMNG)

#undef BASE_MADDR_L2SOFIFOMNG
#define BASE_MADDR_L2SOFIFOMNG          (0xF08A8000)
#undef BASE_ADDR_L2SOFIFOMNG
#define BASE_ADDR_L2SOFIFOMNG           DEV_REG_BASE(BASE_MADDR_L2SOFIFOMNG)

#undef BASE_MADDR_L2SEC
#define BASE_MADDR_L2SEC                (0xF08B0000)
#undef BASE_ADDR_L2SEC
#define BASE_ADDR_L2SEC                 DEV_REG_BASE(BASE_MADDR_L2SEC)

#undef BASE_MADDR_L2ULSECCTL
#define BASE_MADDR_L2ULSECCTL           (0xF08B4000)
#undef BASE_ADDR_L2ULSECCTL
#define BASE_ADDR_L2ULSECCTL            DEV_REG_BASE(BASE_MADDR_L2ULSECCTL)

#undef BASE_MADDR_L2DLSECCTL
#define BASE_MADDR_L2DLSECCTL           (0xF08B8000)
#undef BASE_ADDR_L2DLSECCTL
#define BASE_ADDR_L2DLSECCTL            DEV_REG_BASE(BASE_MADDR_L2DLSECCTL)

#undef BASE_MADDR_L2SOSECCTL
#define BASE_MADDR_L2SOSECCTL           (0xF08BC000)
#undef BASE_ADDR_L2SOSECCTL
#define BASE_ADDR_L2SOSECCTL            DEV_REG_BASE(BASE_MADDR_L2SOSECCTL)

#undef BASE_MADDR_L2MISC
#define BASE_MADDR_L2MISC               (0xF08C0000)
#undef BASE_ADDR_L2MISC
#define BASE_ADDR_L2MISC                DEV_REG_BASE(BASE_MADDR_L2MISC)

#undef BASE_MADDR_L2DBGMON
#define BASE_MADDR_L2DBGMON             (0xF08D0000)
#undef BASE_ADDR_L2DBGMON
#define BASE_ADDR_L2DBGMON              DEV_REG_BASE(BASE_MADDR_L2DBGMON)

#undef BASE_MADDR_L2ULBUFMNG
#define BASE_MADDR_L2ULBUFMNG           (0xF08E0000)
#undef BASE_ADDR_L2ULBUFMNG
#define BASE_ADDR_L2ULBUFMNG            DEV_REG_BASE(BASE_MADDR_L2ULBUFMNG)

#undef BASE_MADDR_L2DLBUFMNG
#define BASE_MADDR_L2DLBUFMNG           (0xF08F0000)
#undef BASE_ADDR_L2DLBUFMNG
#define BASE_ADDR_L2DLBUFMNG            DEV_REG_BASE(BASE_MADDR_L2DLBUFMNG)


#define BASE_ADDR_SIMCTRL               (0xFFFF1000)
#define BASE_ADDR_HSL                   (0xFFFF2000)

#define DUMMY_PERI_base                 (0x82030000)
#define DUMMY_2G_base                   (0xA0000000)
#define DUMMY_3G_base                   (0xA0000000)

/* Stephen 2014:
 *      ARM7 shall not be used.
 *      Thus, put MASE modem register here
 */
#define BASE_ADDR_BSI                   (0xE0000000)
#define BASE_ADDR_BPI                   (0xE0010000)
#define BASE_ADDR_DPA_BC                (0xE0020000)

#define BASE_ADDR_DPA_RLC               (0xE0100000)
#define BASE_ADDR_DPA_MAC               (0xE0110000)
#define BASE_ADDR_UPA                   (0xE0120000)
#define BASE_ADDR_H_RXBRP               (0xE0130000)
#define BASE_ADDR_RXBRP                 (0xE0140000)
#define BASE_ADDR_TXBRP                 (0xE0150000)
#define BASE_ADDR_H_TXBRP               (0xE0160000)
#define BASE_ADDR_TXCRP                 (0xE0170000)

#define BASE_ADDR_RXSRP                 (0xE0200000)
#define BASE_ADDR_RAKE_0                (0xE0210000)
#define BASE_ADDR_SEARCHER              (0xE0220000)
#define BASE_ADDR_LOG3G                 (0xE0230000)

#define BASE_ADDR_BFE                   (0xE0300000)
#define BASE_ADDR_MDCIRQ                (0xE0310000)    // BAES_ADDR_MD_GIPL_IPE_PV
// remember to sync to cwr_hw_define.h INT_CONTROLLER_BASE
#define BASE_ADDR_DBG                   (0xE0320000)
#define BASE_ADDR_TDMA                  (0xE0330000)
#define BASE_ADDR_AFC                   (0xE0340000)
#define BASE_ADDR_AUXADC                (0xE0350000)

#define BASE_MADDR_PFC                  (0xE0400000)
#define BASE_MADDR_PFCEN                (BASE_MADDR_PFC)
#define BASE_MADDR_PFCDE                (BASE_MADDR_PFC + 0x4000)

/* Although some of the following address are not used in SW load
 * They shall sync to the cpp/hpp file in C model
 * Defined here is just to check with HW ESL memory map table
 */
#define BAES_ADDR_SIM_CTRL              (0xE0500000)
#define BAES_ADDR_TEST_CFG              (0xE0510000)
//    #define BAES_ADDR_MD_GIPL_IPE_PV        (0xE0520000)
#define BAES_ADDR_UL1_HSDPA             (0xE0530000)
#define BAES_ADDR_UMTS_TIMER            (0xE0540000)
#define BAES_ADDR_TRACE_MODULE          (0xE0550000)    // remember to sync to cwr_hw_define.h TRACE_MODULE_BASE
#define BAES_ADDR_PFC_MODEL             (0xE0560000)
#define BAES_ADDR_USB_MODEL             (0xE0570000)

#define BASE_ADDR_EMI_DUMMY_CFG         (0xE0580000)

// Stephen: The following 2 address is set in 'Memory Map Table' of ESL Platform
#define BAES_ADDR_LMU_MEM               (0xE0600000)
#define BAES_ADDR_NV2STUB               (0xE0610000)

#define BASE_MADDR_MDCIRQ               (0xF0810000)

#define RTR_base                        (DUMMY_PERI_base + 0x41500)
#define RAKE_base                       (BASE_ADDR_RAKE_0)
#define CIRQ_base                       (BASE_ADDR_MDCIRQ)

#define BASE_MEM_TYPE_STRONGLY_ORDER    (0x00000000) /* 0xF0000000 */

/*AP GPIO*/
#define GPIO_base                       (0xA0005000)


/* Sync address as HW platform */
#undef UPA_base
#define UPA_base                (BASE_ADDR_UPA)

#undef HSUPA_base
#define HSUPA_base              (BASE_ADDR_UPA)

#undef UPA_SRAM_base
#define UPA_SRAM_base           (BASE_MADDR_HSPAL2_UPA_SRAM)    // Same as original

#undef DPA_MAC_base
#define DPA_MAC_base            (BASE_ADDR_DPA_MAC)

#undef DPA_RLC_base
#define DPA_RLC_base            (BASE_ADDR_DPA_RLC)


#endif /* end of __MASE_REG_BASE_H__ */
