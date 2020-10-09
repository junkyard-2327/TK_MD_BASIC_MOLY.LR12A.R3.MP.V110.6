#include "kal_public_api.h"
#include "drv_comm.h"
#include "reg_base.h"

#include "sim_hw_mtk.h"
#include "sim_drv_HW_def_MTK.h"
#include "sim_al.h"
#include "sim_drv_SW_struct.h"
#include "sim_drv_SW_API.h"

#include "sim_drv_SW_function.h"

#include "drv_rstctl.h"
#include "drvpdn.h"
#include "drv_gdma.h"
#include "us_timer.h"


#define	USIM_ATRSTA_OFF	0x0001

#define USIM_3_3V KAL_TRUE
#ifdef USIM_3_3V
    #define	USIM_VOL_CFG	0x1
#else
    #define	USIM_VOL_CFG	0x0
#endif

#define	USIM_SMT_NO_ERROR	0x0
#define	USIM_SMT_NO_TS		0x1
#define	USIM_SMT_NO_TOUT	0x2
#define	USIM_SMT_NO_T0END	0x3
#define	USIM_SMT_NO_ATRSTA_OFF	0x4
#define	USIM_SMT_SW_ERROR	0x5
#define	USIM_SMT_COUNT_ERROR	0x6
#define	USIM_SMT_HDMA_ERROR	0x7
#define USIM_SMT_IFCLR_ERROR	0x8
#define USIM_SMT_PPS_ERROR	0x9
#define USIM_SMT_MT6306_ERROR	0xA
#define USIM_SMT_INTERFACE_ERROR	0xB

// macro
#define	USIM_SMT_UPDATE_USIM_IF_FLAG(_if) do {					\
        if((_if) == 0)								\
        {									\
            usim_base = SIM_base;						\
        } else if((_if) == 1)							\
        {									\
            usim_base = SIM2_base;						\
        } else ASSERT(0);							\
    } while(0)

#if defined(MT6595)
#define	USIM_SMT_BASIC_SETTING(_if) do {					\
        if((_if) == 0)								\
        {									\
            PDN_CLR(PDN_USIM1);						\
            HDMA_PDN_CLR(0);						\
            DRV_WriteReg32(REG_SIM1_PU_PD_SEL, (((SIMx_PD_SEL | SIMx_PU_PD_50K) << SIMx_RST) | (((!SIMx_PD_SEL) | SIMx_PU_PD_50K) << SIMx_DAT) | ((SIMx_PD_SEL | SIMx_PU_PD_50K) << SIMx_CLK))); \
        } else if((_if) == 1)							\
        {									\
            PDN_CLR(PDN_USIM2);						\
            HDMA_PDN_CLR(1);						\
            DRV_WriteReg32(REG_SIM2_PU_PD_SEL, (((SIMx_PD_SEL | SIMx_PU_PD_50K) << SIMx_RST) | (((!SIMx_PD_SEL) | SIMx_PU_PD_50K) << SIMx_DAT) | ((SIMx_PD_SEL | SIMx_PU_PD_50K) << SIMx_CLK))); \
        } else ASSERT(0);							\
        usim_iftest_sw_reset_usim((_if));					\
    } while(0)
#else
#define	USIM_SMT_BASIC_SETTING(_if) do {					\
        if((_if) == 0)								\
        {									\
            PDN_CLR(PDN_USIM1);						\
            HDMA_PDN_CLR(0);						\
        } else if((_if) == 1)							\
        {									\
            PDN_CLR(PDN_USIM2);						\
            HDMA_PDN_CLR(1);						\
        } else ASSERT(0);							\
        usim_iftest_sw_reset_usim((_if));					\
    } while(0)
#endif

#ifdef __FPGA__
#define	USIM_SMT_DEACTIVATION(_if)	do {		\
        DRV_Reg32(usim_base + SIM_CTRL_MTK) = (DRV_Reg32(usim_base + SIM_CTRL_MTK) & (~SIM_CTRL_SIMON)); \
    } while(0)
#else
#define	USIM_SMT_DEACTIVATION(_if)	do {		\
        DRV_WriteReg32((usim_base + SIM_IRQEN_MTK), SIM_IRQEN_ALLOFF); \
        DRV_WriteReg32((usim_base + SIM_CTRL_MTK), DRV_Reg32(usim_base + SIM_CTRL_MTK) | SIM_CTRL_IFCLR); \
        DRV_Reg32(usim_base + SIM_CTRL_MTK) = (DRV_Reg32(usim_base + SIM_CTRL_MTK) & (~SIM_CTRL_SIMON)); \
        while(!(DRV_Reg32(usim_base + SIM_ATRSTA_MTK) & 0x0001)); \
        DRV_ICC_PMU_switch((_if), KAL_FALSE);	\
    } while(0)
#endif

extern kal_uint32    sim_uncachedTxBuffer0[], sim_uncachedRxBuffer0[], sim_uncachedTxBuffer1[], sim_uncachedRxBuffer1[];

int usim_iftest_for_smt(kal_uint32 hwInterfaceNo);
void usim_iftest_sw_reset_usim(kal_uint32 hwInterfaceNo);

extern kal_char sim_shared_dbgstr[];
#if !defined(ATEST_DRV_ENABLE)
extern void slt_dbg_print(char *fmt, ...);
#else
#define slt_dbg_print(...) dbg_print( __VA_ARGS__)
#endif

#ifdef SIM_DRV_SWITCH_MT6306
#include "sim_mt6306.h"
extern void MT6306_Writer_GPIO(kal_uint8 device_addr, kal_uint8 data_addr, kal_uint8 data_value);
extern kal_uint8 MT6306_Reader_AL(kal_uint8 chipno, kal_uint16 addr);
extern kal_bool MT6306_ShowReg(int chip);
extern DCL_HANDLE clkHandle, datHandle;;

static int MT6306_validateREG(kal_uint8 chipno, kal_uint8 reg, kal_uint8 writeVal)
{
    kal_uint8 readvalue = MT6306_Reader_AL(chipno, reg);

    if (readvalue != writeVal)
    {
        kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]MT6306 Error: chip:%d, reg:%x, Write:%x, Read:%x\n\r", chipno, reg, writeVal, readvalue);
        DRV_ICC_print_str(sim_shared_dbgstr);

        return USIM_SMT_MT6306_ERROR;
    }

    return USIM_SMT_NO_ERROR;
}

int MT6306_blockRST(kal_uint8 chipno, kal_uint8 port, kal_uint8 level)
{
    kal_uint8 value = MT6306_Reader_AL(chipno, SIM_MT6306_REG_RST);

    value |= (1 << port);
    value &= ~(4 << port);
    if (level) value |= (4 << port);
    MT6306_Writer_GPIO(0x64, SIM_MT6306_REG_RST + (chipno * 4), value);

    return MT6306_validateREG(chipno, SIM_MT6306_REG_RST, value);
}

int MT6306_blockCLK(kal_uint8 chipno, kal_uint8 port)
{
    kal_uint8 value = MT6306_Reader_AL(chipno, SIM_MT6306_REG_CLK);

    value &= ~(1 << port);
    value &= ~(4 << port);
    MT6306_Writer_GPIO(0x64, SIM_MT6306_REG_CLK + (chipno * 4), value);

    return MT6306_validateREG(chipno, SIM_MT6306_REG_CLK, value);
}

int MT6306_blockDAT(kal_uint8 chipno, kal_uint8 port)
{
    kal_uint8 value = MT6306_Reader_AL(chipno, SIM_MT6306_REG_DAT);

    value &= ~(1 << port);
    value &= ~(4 << port);
    MT6306_Writer_GPIO(0x64, SIM_MT6306_REG_DAT + (chipno * 4), value);

    return MT6306_validateREG(chipno, SIM_MT6306_REG_DAT, value);
}

int MT6306_passRST(kal_uint8 chipno, kal_uint8 port)
{
    kal_uint8 value = MT6306_Reader_AL(chipno, SIM_MT6306_REG_RST);

    value &= ~(1 << port);
    MT6306_Writer_GPIO(0x64, SIM_MT6306_REG_RST + (chipno * 4), value);

    return MT6306_validateREG(chipno, SIM_MT6306_REG_RST, value);
}

int MT6306_passCLK(kal_uint8 chipno, kal_uint8 port)
{
    kal_uint8 value = MT6306_Reader_AL(chipno, SIM_MT6306_REG_CLK);

    value |= (1 << port);
    value &= ~(4 << port);

    MT6306_Writer_GPIO(0x64, SIM_MT6306_REG_CLK + (chipno * 4), value);

    return MT6306_validateREG(chipno, SIM_MT6306_REG_CLK, value);
}

int MT6306_passDAT(kal_uint8 chipno, kal_uint8 port)
{
    kal_uint8 value = MT6306_Reader_AL(chipno, SIM_MT6306_REG_DAT);

    value |= (1 << port);
    value &= ~(4 << port);
    MT6306_Writer_GPIO(0x64, SIM_MT6306_REG_DAT + (chipno * 4), value);

    return MT6306_validateREG(chipno, SIM_MT6306_REG_DAT, value);
}

int MT6306_setVCC(kal_uint8 chipno, kal_uint8 port, kal_uint32 onoff, kal_uint32 level)
{
    kal_uint8 value = MT6306_Reader_AL(chipno, SIM_MT6306_REG_VCC);

    if (onoff == 0) value &= ~(4 << port);
    else value |= (4 << port);

    if (level == 0) value &= ~(1 << port);
    else value |= (1 << port);

    MT6306_Writer_GPIO(0x64, SIM_MT6306_REG_VCC + (chipno * 4), value);

    return MT6306_validateREG(chipno, SIM_MT6306_REG_VCC, value);
}

int MT6306_passALLSignal(kal_uint8 chipno, kal_uint8 port)
{
    int result = USIM_SMT_NO_ERROR;

    result |= MT6306_passRST(chipno, port);
    result |= MT6306_passCLK(chipno, port);
    result |= MT6306_passDAT(chipno, port);

    return result;
}

int MT6306_blockALLSignal(kal_uint8 chipno, kal_uint8 port)
{
    int result = USIM_SMT_NO_ERROR;

    result |= MT6306_blockRST(chipno, port, 0);
    result |= MT6306_blockCLK(chipno, port);
    result |= MT6306_blockDAT(chipno, port);

    return result;
}
#endif // #ifdef SIM_DRV_SWITCH_MT6306

#ifdef __FPGA__
#else
//    extern DCL_UINT32 DRV_Read_PMIC_Data(DCL_UINT32 pmic_addr);
#endif

int usim_iftest_sim_activation(kal_uint32 hwInterfaceNo, kal_uint32 class_b_or_c)
{
    kal_uint32 usim_base = 0;

    // 0. Update USIM interface flag
    USIM_SMT_BASIC_SETTING(hwInterfaceNo);
    USIM_SMT_UPDATE_USIM_IF_FLAG(hwInterfaceNo);

    // 1. get ATR STR
#ifdef __FPGA__
#else
    // 1.0 Deactivate SIM
    DRV_ICC_PMU_switch(hwInterfaceNo, KAL_FALSE);
    ust_us_busyloop(50000);
#endif
#if defined(SIM_DRV_4_33MHZ_SCLK)
    DRV_Reg32(usim_base + SIM_BRR_MTK) = (372 << 2);
#else
    DRV_Reg32(usim_base + SIM_BRR_MTK) = (DRV_Reg32(usim_base + SIM_BRR_MTK) & 0x3) | (372 << 2);
#endif
    DRV_Reg32(usim_base + SIM_TOUT_MTK) = (10000 >> 4) + 1;
    DRV_Reg32(usim_base + SIM_CONF_MTK) = DRV_Reg32(usim_base + SIM_CONF_MTK) & ~(SIM_CONF_TOUTEN);
    DRV_Reg32(usim_base + SIM_CTRL_MTK) = DRV_Reg32(usim_base + SIM_CTRL_MTK) & ~(SIM_CTRL_SIMON);

    // 1.1 Set RXTIDE of SIM_TIDE to 0 and TXTIDE to 1
    DRV_Reg32(usim_base + SIM_TIDE_MTK) = (DRV_Reg32(usim_base + SIM_TIDE_MTK) & (~SIM_TIDE_RXMASK) & (~SIM_TIDE_TXMASK)) | 0x0100;

    // 1.2 Clear Interrupt
    DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);

    // 1.3 If TOUT = 1, T0EN/T1EN = 0
    DRV_Reg32(usim_base + SIM_CONF_MTK) = (DRV_Reg32(usim_base + SIM_CONF_MTK) & ~(SIM_CONF_T0EN | SIM_CONF_T1EN | SIM_CONF_TOUTEN | USIM_VOL_CFG)) | (SIM_CONF_TOUTEN | USIM_VOL_CFG);
#ifdef __FPGA__
#else
    DRV_ICC_PMU_setVolt(hwInterfaceNo, class_b_or_c);
    DRV_ICC_PMU_switch(hwInterfaceNo, KAL_TRUE);
#endif
    // 1.4 Set SIMON, Activate SIM
    DRV_Reg32(usim_base + SIM_CTRL_MTK) = (DRV_Reg32(usim_base + SIM_CTRL_MTK) & (~SIM_CTRL_SIMON)) | SIM_CTRL_SIMON;

    return 0;
}

void pmic_dump(void)
{
    int i, j = 0;
    kal_uint32 val = 0;

    for (i = 0; i < 0xff0; i += 2)
    {
        if (j % 5)  slt_dbg_print("[PMIC_DVT] ");
#ifdef __FPGA__
#else
//        val = DRV_Read_PMIC_Data(i);
#endif

        if (val != 0x5aa5)  slt_dbg_print("[0x%x]= 0x%x ", i, val);

        j++;

        if ((j % 5) == 0)   slt_dbg_print("\n\r");
    }

    return;
}

void sim_dump_reg_debug(kal_uint32 usim_base)
{
    slt_dbg_print("SIM Reg Dump: \n\r");
    slt_dbg_print("0x%x, 0x%x, 0x%x, 0x%x, 0x%x\n\r", usim_base, DRV_Reg32(usim_base + SIM_VERSION_MTK),
                  DRV_Reg32(usim_base + SIM_CTRL_MTK), DRV_Reg32(usim_base + SIM_CONF_MTK), DRV_Reg32(usim_base + SIM_CONFSTA_MTK));

    slt_dbg_print("0x%x, 0x%x, 0x%x, 0x%x, 0x%x\n\r", DRV_Reg32(usim_base + SIM_BRR_MTK), DRV_Reg32(usim_base + SIM_IRQEN_MTK),
                  DRV_Reg32(usim_base + SIM_STS_MTK), DRV_Reg32(usim_base + SIM_RETRY_MTK), DRV_Reg32(usim_base + SIM_TIDE_MTK));

    slt_dbg_print("0x%x, 0x%x, 0x%x, 0x%x, 0x%\n\rx", 0, DRV_Reg32(usim_base + SIM_COUNT_MTK),
                  DRV_Reg32(usim_base + SIM_ATIME_MTK), DRV_Reg32(usim_base + SIM_DTIME_MTK), DRV_Reg32(usim_base + SIM_TOUT_MTK));

    slt_dbg_print("0x%x, 0x%x, 0x%x, 0x%x, 0x%x\n\r", DRV_Reg32(usim_base + SIM_GTIME_MTK), DRV_Reg32(usim_base + SIM_ETIME_MTK),
                  DRV_Reg32(usim_base + SIM_EXT_TIME_MTK), DRV_Reg32(usim_base + SIM_CGTIME_MTK), DRV_Reg32(usim_base + SIM_COMDCTRL_MTK));

    slt_dbg_print("0x%x, 0x%x, 0x%x, 0x%x, 0x%x\n\r", DRV_Reg32(usim_base + SIM_COMDLEN_MTK), DRV_Reg32(usim_base + SIM_LEFTLEN_MTK),
                  DRV_Reg32(usim_base + SIM_SW1_MTK), DRV_Reg32(usim_base + SIM_SW2_MTK), DRV_Reg32(usim_base + SIM_ATRSTA_MTK));

    return;
}

int usim_iftest_get_atr(kal_uint32 hwInterfaceNo, kal_uint8 atr_bytes[])
{
    kal_uint32 usim_base = 0, i = 0, j = 0;
    kal_uint32 status = 0, data = 0;
    kal_uint8 *atr_ptr = atr_bytes + 1;

    USIM_SMT_UPDATE_USIM_IF_FLAG(hwInterfaceNo);

    // 1.5 Wait first bytes of ATR
    j = 0;
    while (!DRV_Reg32(usim_base + SIM_COUNT_MTK))
    {
        if (j > 0xFFFFFF)
        {
            kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]: NO TS, %x, %d\n\r", usim_base, hwInterfaceNo);
            DRV_ICC_print_str(sim_shared_dbgstr);
            USIM_SMT_DEACTIVATION(hwInterfaceNo);
            return USIM_SMT_NO_TS;
        }
        j++;
    }

    // 0.6 Read FIFO Count
    j = 0;
    while (1)
    {
        status = DRV_Reg32(usim_base + SIM_COUNT_MTK);
        // FIFO Non-Empty
        if (status != 0x0)
        {
            for (i = 0; i < status; i++)
            {
                data = DRV_Reg32(usim_base + SIM_DATA_MTK);
                atr_ptr[0] = data;
                atr_ptr++;
            }
        }

        // TOUT Status = 1
        if (DRV_Reg32(usim_base + SIM_STS_MTK) & SIM_STS_TOUT)
        {
            // Clear Interrupt
            DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);
            // Clear IP's Internal TOUT enable bit
            DRV_Reg32(usim_base + SIM_CONF_MTK) = DRV_Reg32(usim_base + SIM_CONF_MTK) & ~(SIM_CONF_TOUTEN);
            // End of ATR, # of ATR
            atr_bytes[0] = atr_ptr - atr_bytes - 1;
            break;
        }

        if (j > 0xFFFFFF)
        {
            sim_dump_reg_debug(usim_base);
            pmic_dump();

            USIM_SMT_DEACTIVATION(hwInterfaceNo);
            kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]: NO TOUT\n\r");
            DRV_ICC_print_str(sim_shared_dbgstr);
            return USIM_SMT_NO_TOUT;
        }
        j++;
    }

    return 0;
}

int usim_iftest_send_pps(kal_uint32 hwInterfaceNo, kal_uint8 atr_bytes[], kal_uint8 pps_buf[], kal_bool *need_pps)
{
    kal_uint32 usim_base = 0, j = 0;
    kal_uint32 cksum = 0xFF;

    USIM_SMT_UPDATE_USIM_IF_FLAG(hwInterfaceNo);

    if (atr_bytes[2] & 0x80) // TD1
    {
        j = 0;
        if (atr_bytes[2] & 0x10) j++;
        if (atr_bytes[2] & 0x20) j++;
        if (atr_bytes[2] & 0x40) j++;
        if (atr_bytes[2] & 0x80) j++;
        if (atr_bytes[2 + j] & 0x10) // TA2
        {
            // TA1 && negotiable TA2
            if ((atr_bytes[2] & 0x10) && (atr_bytes[2 + j + 1] & 0x80) == 0x0) *need_pps = KAL_TRUE;
        }
        else
        {
            // TA1 && TD1
            if ((atr_bytes[2] & 0x10)) *need_pps = KAL_TRUE;
        }
    }
    else if (atr_bytes[2] & 0x10)  // TA1 && no TD1
    {
        *need_pps = KAL_TRUE;
    }

    *need_pps = atr_bytes[3] != 0x01 && atr_bytes[3] != 0x11 && (atr_bytes[2] & 0x10) &&  *need_pps;

    if (*need_pps)
    {
        // Set TOUT = 1
        DRV_Reg32(usim_base + SIM_CONF_MTK) = (DRV_Reg32(usim_base + SIM_CONF_MTK) & ~(SIM_CONF_TOUTEN | USIM_VOL_CFG)) | (SIM_CONF_TOUTEN | USIM_VOL_CFG);
        // Clear
        DRV_Reg32(usim_base + SIM_COMDCTRL_MTK) = DRV_Reg32(usim_base + SIM_COMDCTRL_MTK) | SIM_CTRL_IFCLR;
        j = 0;
        while (DRV_Reg32(usim_base + SIM_CONFSTA_MTK) & SIM_CONFSTA_IFCLR_ON)
        {
            if (j > 0xFFFFFF)
            {
                USIM_SMT_DEACTIVATION(hwInterfaceNo);
                kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]: IFCLR ERROR\n\r");
                DRV_ICC_print_str(sim_shared_dbgstr);
                return USIM_SMT_IFCLR_ERROR;
            }
            j++;
        }

        // Set RXTIDE of SIM_TIDE to 0 and TXTIDE to 1
        DRV_Reg32(usim_base + SIM_TIDE_MTK) = (DRV_Reg32(usim_base + SIM_TIDE_MTK) & (~SIM_TIDE_RXMASK) & (~SIM_TIDE_TXMASK)) | 0x0100;

        j = 0;
        // Send PPSS
        DRV_Reg32(usim_base + SIM_DATA_MTK) = 0xFF;
        pps_buf[j++] = 0xFF;
        // Send PPS0
        DRV_Reg32(usim_base + SIM_DATA_MTK) = 0x10;
        cksum ^= 0x10;
        pps_buf[j++] = 0x10;
        // Send PPS1
        // Propose new Fi, Di
        DRV_Reg32(usim_base + SIM_DATA_MTK) = atr_bytes[3];
        cksum ^= atr_bytes[3];
        pps_buf[j++] = atr_bytes[3];

        // Send PCK
        DRV_Reg32(usim_base + SIM_DATA_MTK) = cksum;
        pps_buf[j++] = cksum;

        // Wait Until TX FIFO Empty
        j = 0;
        while (DRV_Reg32(usim_base + SIM_COUNT_MTK) != 0)
        {
            if (j > 0xFFFFFF)
            {
                USIM_SMT_DEACTIVATION(hwInterfaceNo);
                kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]: COUNT ERROR\n\r");
                DRV_ICC_print_str(sim_shared_dbgstr);
                return USIM_SMT_COUNT_ERROR;
            }
            j++;

        }
    }

    return 0; // temp
}

int usim_iftest_get_pps(kal_uint32 hwInterfaceNo, kal_uint8 atr_bytes[], kal_uint8 pps_buf[], kal_bool need_pps)
{
    kal_uint32 usim_base = 0, i = 0, j = 0;
    kal_uint32 data = 0, fifo_cnt = 0;

    if (need_pps == KAL_FALSE) return 0;

    USIM_SMT_UPDATE_USIM_IF_FLAG(hwInterfaceNo);

    // PPS Exchange RX
    while (1)
    {
        fifo_cnt = DRV_Reg32(usim_base + SIM_COUNT_MTK);

        // FIFO Non-Empty
        if (fifo_cnt != 0x0)
        {
            for (i = 0; i < fifo_cnt; i++)
            {
                data = DRV_Reg32(usim_base + SIM_DATA_MTK);
                if (pps_buf[j++] != data)
                {
                    kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]: not consistent:%x %x\n\r", data, pps_buf[j - 1]);
                    DRV_ICC_print_str(sim_shared_dbgstr);
                    USIM_SMT_DEACTIVATION(hwInterfaceNo);
                    return USIM_SMT_PPS_ERROR;
                }
            }
        }

        // TOUT status = 1
        if ((DRV_Reg32(usim_base + SIM_STS_MTK) & SIM_STS_TOUT) || (j >= 4))
        {
            if (data == 0)
            {
                if (DRV_Reg32(usim_base + SIM_COUNT_MTK) == 0x0)
                {
                    kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]: USIM does not reply on time\n\r");
                    DRV_ICC_print_str(sim_shared_dbgstr);
                    USIM_SMT_DEACTIVATION(hwInterfaceNo);
                    return USIM_SMT_PPS_ERROR;
                }
            }

            // Clear Interrupt
            DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);
            // Clear IP's Internal TOUT enable bit
            DRV_Reg32(usim_base + SIM_CONF_MTK) = (DRV_Reg32(usim_base + SIM_CONF_MTK) & ~(SIM_CONF_TOUTEN | USIM_VOL_CFG)) | (USIM_VOL_CFG);
            break;
        }
    }

    if (atr_bytes[3] == ATR_TA1_64) DRV_Reg32(usim_base + SIM_BRR_MTK) = (DRV_Reg32(usim_base + SIM_BRR_MTK) & 0x3) | ((512 / 8) << 2);
    else if (atr_bytes[3] == ATR_TA1_32) DRV_Reg32(usim_base + SIM_BRR_MTK) = (DRV_Reg32(usim_base + SIM_BRR_MTK) & 0x3) | ((512 / 16) << 2);
    else if (atr_bytes[3] == ATR_TA1_16) DRV_Reg32(usim_base + SIM_BRR_MTK) = (DRV_Reg32(usim_base + SIM_BRR_MTK) & 0x3) | ((512 / 32) << 2);
    else if (atr_bytes[3] == ATR_TA1_8) DRV_Reg32(usim_base + SIM_BRR_MTK) = (DRV_Reg32(usim_base + SIM_BRR_MTK) & 0x3) | ((512 / 64) << 2);
    else ASSERT(0);

    return 0;
}



int usim_iftest_send_sim_command(kal_uint32 hwInterfaceNo, kal_uint8 tx_buf[], kal_uint32 tx_len, kal_uint32 rx_len)
{
    kal_uint32 usim_base = 0, i = 0, j = 0;

    USIM_SMT_UPDATE_USIM_IF_FLAG(hwInterfaceNo);

    // clear
    DRV_Reg32(usim_base + SIM_CTRL_MTK) = DRV_Reg32(usim_base + SIM_CTRL_MTK) | SIM_CTRL_IFCLR;
    j = 0;
    while (DRV_Reg32(usim_base + SIM_CONFSTA_MTK) & SIM_CONFSTA_IFCLR_ON)
    {
        if (j > 0xFFFFFF)
        {
            USIM_SMT_DEACTIVATION(hwInterfaceNo);
            kal_sprintf(sim_shared_dbgstr, " [SIM_SMT]: IFCLR ERROR\n\r");
            DRV_ICC_print_str(sim_shared_dbgstr);
            return USIM_SMT_IFCLR_ERROR ;
        }
        j++;
    }
    // 2.0 Select File of ICCID
    // 2.0 set file id

    // 2.1 Set RXTIDE of SIM_TIDE to 0 and TXTIDE to 1 (Note: TXTIDE cannot be 0 for DMA)
    DRV_Reg32(usim_base + SIM_TIDE_MTK) = (DRV_Reg32(usim_base + SIM_TIDE_MTK) & (~SIM_TIDE_RXMASK) & (~SIM_TIDE_TXMASK)) | 0x0100;

    // 2.2 Enable T0
    DRV_Reg32(usim_base + SIM_CONF_MTK) = DRV_Reg32(usim_base + SIM_CONF_MTK) | SIM_CONF_T0EN;

    // 2.3 Directly Write File ID to USIM FIFO
    DRV_Reg32(usim_base + SIM_DATA_MTK) = tx_buf[0];
    DRV_Reg32(usim_base + SIM_DATA_MTK) = tx_buf[1];
    DRV_Reg32(usim_base + SIM_DATA_MTK) = tx_buf[2];
    DRV_Reg32(usim_base + SIM_DATA_MTK) = tx_buf[3];
    DRV_Reg32(usim_base + SIM_DATA_MTK) = tx_buf[4];

    if (tx_len > 5)
    {
        if (hwInterfaceNo)
        {
            // HDMA TX (Memory to Device), USIM's Bus Width is Fixed to 8 bits
            for (i = 5; i < tx_len; i++)
                DRV_Reg8(((kal_uint32) sim_uncachedTxBuffer1) + i - 5) = tx_buf[i];

	    MM_Sync();

            DRV_Reg32(REG_HDMA_HDCTRR1) = HDCTRR_RX_SEL0(0) | HDCTRR_BST_SIZE(HDCTRR_BST_SIZE_16) | HDCTRR_DEV_BUS_WIDTH(HDCTRR_BUS_WIDTH_8) | HDCTRR_MEM_BUS_WIDTH(HDCTRR_BUS_WIDTH_32);
            DRV_Reg32(REG_HDMA_HPRGA0R1) = (kal_uint32) sim_uncachedTxBuffer1;
            DRV_Reg32(REG_HDMA_HDC0R1) = HDCR_XFER_SIZE0(tx_buf[4]) | HDCR_START0;
        }
        else
        {
            // HDMA TX (Memory to Device), USIM's Bus Width is Fixed to 8 bits
            for (i = 5; i < tx_len; i++)
                DRV_Reg8(((kal_uint32) sim_uncachedTxBuffer0) + i - 5) = tx_buf[i];

	    MM_Sync();

            DRV_Reg32(REG_HDMA_HDCTRR0) = HDCTRR_RX_SEL0(0) | HDCTRR_BST_SIZE(HDCTRR_BST_SIZE_16) | HDCTRR_DEV_BUS_WIDTH(HDCTRR_BUS_WIDTH_8) | HDCTRR_MEM_BUS_WIDTH(HDCTRR_BUS_WIDTH_32);
            DRV_Reg32(REG_HDMA_HPRGA0R0) = (kal_uint32) sim_uncachedTxBuffer0;
            DRV_Reg32(REG_HDMA_HDC0R0) = HDCR_XFER_SIZE0(tx_buf[4]) | HDCR_START0;
        }
    }

    // for Get Responseo
    if (rx_len && tx_len <= 5)
    {
        if (hwInterfaceNo)
        {
            // HDMA RX (Memory to Device), USIM's Bus Width is Fixed to 8 bits
            DRV_Reg32(REG_HDMA_HDCTRR1) = HDCTRR_RX_SEL0(1) | HDCTRR_BST_SIZE(HDCTRR_BST_SIZE_16) | HDCTRR_DEV_BUS_WIDTH(HDCTRR_BUS_WIDTH_8) | HDCTRR_MEM_BUS_WIDTH(HDCTRR_BUS_WIDTH_32);
            DRV_Reg32(REG_HDMA_HPRGA0R1) = (kal_uint32) sim_uncachedRxBuffer1;
            DRV_Reg32(REG_HDMA_HDC0R1) = HDCR_XFER_SIZE0(rx_len) | HDCR_START0;
        }
        else
        {
            // HDMA RX (Memory to Device), USIM's Bus Width is Fixed to 8 bits
            DRV_Reg32(REG_HDMA_HDCTRR0) = HDCTRR_RX_SEL0(1) | HDCTRR_BST_SIZE(HDCTRR_BST_SIZE_16) | HDCTRR_DEV_BUS_WIDTH(HDCTRR_BUS_WIDTH_8) | HDCTRR_MEM_BUS_WIDTH(HDCTRR_BUS_WIDTH_32);
            DRV_Reg32(REG_HDMA_HPRGA0R0) = (kal_uint32) sim_uncachedRxBuffer0;
            DRV_Reg32(REG_HDMA_HDC0R0) = HDCR_XFER_SIZE0(rx_len) | HDCR_START0;
        }
    }

    DRV_Reg32(usim_base + SIM_COMDLEN_MTK) = tx_buf[4];

    if (tx_len > 5)
    {
        DRV_Reg32(usim_base + SIM_COMDCTRL_MTK) = SIM_INS_START | SIM_INS_INSD | tx_buf[1]; // Expect to Send
    }
    else if (rx_len && tx_len <= 5)
    {
        DRV_Reg32(usim_base + SIM_COMDCTRL_MTK) = SIM_INS_START | tx_buf[1]; // Expect to Send
    }

    MO_Sync();

    return 0;
}

int usim_iftest_get_sim_response(kal_uint32 hwInterfaceNo, kal_bool rx_data, kal_uint32 *sw1, kal_uint32 *sw2)
{
    kal_uint32 usim_base = 0;
    kal_uint32 j = 0;

    USIM_SMT_UPDATE_USIM_IF_FLAG(hwInterfaceNo);

    // Wait Until TX FIFO Empty
    j = 0;
    while (DRV_Reg32(usim_base + SIM_COUNT_MTK) != 0)
    {
        if (j > 0xFFFFFF)
        {
            USIM_SMT_DEACTIVATION(hwInterfaceNo);
            kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]: COUNT ERROR\n\r");
            DRV_ICC_print_str(sim_shared_dbgstr);
            return USIM_SMT_COUNT_ERROR;
        }
        j++;
    }

    // 2.4 Wait for Operation Done (Including Response)
    j = 0;
    while (!(DRV_Reg32(usim_base + SIM_STS_MTK) & SIM_STS_T0END))
    {
        if (j > 0xFFFFFF)
        {
            USIM_SMT_DEACTIVATION(hwInterfaceNo);
            kal_sprintf(sim_shared_dbgstr, "[SIM_SMT:%d]: NO T0END\n\r", __LINE__);
            DRV_ICC_print_str(sim_shared_dbgstr);
            return USIM_SMT_NO_T0END;
        }
        j++;
    }

    if (rx_data)
    {
        j = 0;
        if (hwInterfaceNo)
        {
            while ((DRV_Reg32(REG_HDMA_HDSR) & HDMA_STAT0_1))
            {
                if (j > 0xFFFFFF)
                {
                    USIM_SMT_DEACTIVATION(hwInterfaceNo);
                    kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]: HDMA ERROR\n\r");
                    DRV_ICC_print_str(sim_shared_dbgstr);
                    return USIM_SMT_HDMA_ERROR;
                }
                j++;
            }
            /*
            kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]: Get %x %x %x %x %x  %x %x %x %x %x  %x %x %x %x %x\n\r",
                        sim_uncachedRxBuffer1[0], sim_uncachedRxBuffer1[1], sim_uncachedRxBuffer1[2], sim_uncachedRxBuffer1[3], sim_uncachedRxBuffer1[4],
                        sim_uncachedRxBuffer1[5], sim_uncachedRxBuffer1[6], sim_uncachedRxBuffer1[7], sim_uncachedRxBuffer1[8], sim_uncachedRxBuffer1[9],
                        sim_uncachedRxBuffer1[10], sim_uncachedRxBuffer1[11], sim_uncachedRxBuffer1[12], sim_uncachedRxBuffer1[13], sim_uncachedRxBuffer1[14]);
                    */

            for (j=0;j<15;j++)
            {
                 kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]: Get %d:%x\r\n",j,sim_uncachedRxBuffer1[j]);
                 DRV_ICC_print_str(sim_shared_dbgstr);
            }
                
        }
        else
        {
            while ((DRV_Reg32(REG_HDMA_HDSR) & HDMA_STAT0_0))
            {
                if (j > 0xFFFFFF)
                {
                    USIM_SMT_DEACTIVATION(hwInterfaceNo);
                    kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]: HDMA ERROR\n\r");
                    DRV_ICC_print_str(sim_shared_dbgstr);
                    return USIM_SMT_HDMA_ERROR;
                }
                j++;
            }
            /*
            kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]: Get %x %x %x %x %x  %x %x %x %x %x  %x %x %x %x %x\n\r",
                        sim_uncachedRxBuffer0[0], sim_uncachedRxBuffer0[1], sim_uncachedRxBuffer0[2], sim_uncachedRxBuffer0[3], sim_uncachedRxBuffer0[4],
                        sim_uncachedRxBuffer0[5], sim_uncachedRxBuffer0[6], sim_uncachedRxBuffer0[7], sim_uncachedRxBuffer0[8], sim_uncachedRxBuffer0[9],
                        sim_uncachedRxBuffer0[10], sim_uncachedRxBuffer0[11], sim_uncachedRxBuffer0[12], sim_uncachedRxBuffer0[13], sim_uncachedRxBuffer0[14]);
                        */
            for (j=0;j<15;j++)
            {
                 kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]: Get %d:%x\r\n",j,sim_uncachedRxBuffer0[j]);
                 DRV_ICC_print_str(sim_shared_dbgstr);
            }                        
        }
        //DRV_ICC_print_str(sim_shared_dbgstr);
    }

    // 2.5 Clear Interrupt
    DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);

    // 2.6 Check Returned Status Bytes
    *sw1 = DRV_Reg32(usim_base + SIM_SW1_MTK);
    *sw2 = DRV_Reg32(usim_base + SIM_SW2_MTK);

    if ((*sw1 & 0xF0) != 0x90 && *sw1 != 0x69)
    {
        kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]: SW ERROR %x %x\n\r", *sw1, *sw2);
        DRV_ICC_print_str(sim_shared_dbgstr);
        return USIM_SMT_SW_ERROR;
    }

    return 0;
}

int usim_iftest_sim_deactivation(kal_uint32 hwInterfaceNo)
{
    kal_uint32 usim_base = 0;
    kal_uint32 j = 0;

    USIM_SMT_UPDATE_USIM_IF_FLAG(hwInterfaceNo);

    // 3. Deactivation
    // 3.0 If SIM Aleady Activated, Deactivate it
    DRV_Reg32(usim_base + SIM_CTRL_MTK) = DRV_Reg32(usim_base + SIM_CTRL_MTK) & (~SIM_CTRL_SIMON);
    j = 0;
    while (!(DRV_Reg32(usim_base + SIM_ATRSTA_MTK) & USIM_ATRSTA_OFF))
    {
        if (j > 0xFFFFFF)
        {
            USIM_SMT_DEACTIVATION(hwInterfaceNo);
            kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]: NO ATRSTA OFF\n\r");
            DRV_ICC_print_str(sim_shared_dbgstr);
            return USIM_SMT_NO_ATRSTA_OFF;
        }
        j++;
    }
#ifdef __FPGA__
#else
    DRV_ICC_PMU_switch(hwInterfaceNo, KAL_FALSE);
#endif

    return 0;
}

#if defined(__SIM_DRV_CO_LOAD_MT6306__) && defined(SIM_DRV_SWITCH_MT6306)
    extern kal_bool sim_connectMT6306;
#endif
int usim_iftest_for_smt(kal_uint32 interfaceNo)
{
    kal_uint32 func_status = 0;
    kal_uint8 atr_bytes[50] = {0}, tx_buf[25] = {0}, pps_buf[10] = {0};
    kal_uint32 sw1 = 0, sw2 = 0;
    kal_bool need_pps = KAL_FALSE;

    kal_uint32 class_b_or_c = 0, hwInterfaceNo = interfaceNo;
#ifdef __FPGA__
#else
#ifdef SIM_DRV_SWITCH_MT6306
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    if(sim_connectMT6306 == KAL_TRUE)
    {
#endif
        class_b_or_c = CLASS_C_18V;
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    }
    else
    {
        class_b_or_c = CLASS_B_30V;
    }
#endif
#else // #ifdef SIM_DRV_SWITCH_MT6306
    if (interfaceNo & 0xF0)
        class_b_or_c = CLASS_C_18V;
    else
        class_b_or_c = CLASS_B_30V;
#endif // #ifdef SIM_DRV_SWITCH_MT6306
#endif
    interfaceNo = interfaceNo & 0xF;

    

#ifdef SIM_DRV_SWITCH_MT6306
    kal_uint8 port = 0, chip = 0;
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    if(sim_connectMT6306 == KAL_TRUE)
    {
#endif
        // hwInterfaceNo will be 0, 1, 2
        hwInterfaceNo = interfaceNo / 2;
        port = interfaceNo % 2;
        chip = hwInterfaceNo;

        //Block all chip, all port
        if(USIM_SMT_NO_ERROR!=MT6306_blockALLSignal(0, 0))
            return USIM_SMT_MT6306_ERROR;
        if(USIM_SMT_NO_ERROR!=MT6306_blockALLSignal(0, 1))
            return USIM_SMT_MT6306_ERROR;
        if(USIM_SMT_NO_ERROR!=MT6306_blockALLSignal(1, 0))
            return USIM_SMT_MT6306_ERROR;
        if(USIM_SMT_NO_ERROR!=MT6306_blockALLSignal(1, 0))
            return USIM_SMT_MT6306_ERROR;

        if(USIM_SMT_NO_ERROR!=MT6306_setVCC(chip, 0, 0, 0))//turn off port 0
            return USIM_SMT_MT6306_ERROR;
        if(USIM_SMT_NO_ERROR!=MT6306_setVCC(chip, 1, 0, 0))//turn off port 1
            return USIM_SMT_MT6306_ERROR;

        kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]hwInterfaceNo:%d, chip:%d, port:%d", hwInterfaceNo, chip, port);
        DRV_ICC_print_str(sim_shared_dbgstr);
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    }
    else
    {
        hwInterfaceNo = interfaceNo;
    }
#endif
#else
    hwInterfaceNo = interfaceNo;
#endif

    if (hwInterfaceNo > 1)
    {
        kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]: Invalid Interface:%d\n\r",hwInterfaceNo);
        DRV_ICC_print_str(sim_shared_dbgstr);
        return USIM_SMT_INTERFACE_ERROR;
    }

    usim_dcb_struct *usim_dcb;
    usim_dcb = GET_USIM_CB(hwInterfaceNo);
    if (usim_dcb->present)
    {
        kal_sprintf(sim_shared_dbgstr, "[SIM_SMT]: driver status is correct\n\r");
        DRV_ICC_print_str(sim_shared_dbgstr);
        return USIM_SMT_NO_ERROR;
    }

#ifdef __FPGA__
#else

#ifdef SIM_DRV_SWITCH_MT6306
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    if(sim_connectMT6306 == KAL_TRUE)
    {
#endif
	    // CLASS_B_30V
	    MT6306_setVCC(hwInterfaceNo, port, 1, 1);
	    // CLASS_C_18V
	    //MT6306_setVCC(hwInterfaceNo, port, 1, 0);
	    MT6306_passALLSignal(chip, port);
	    //dbg_print("r\nAfter config:");
	    //MT6306_ShowReg(chip);
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    }
#endif
#endif
#endif

    usim_iftest_sim_activation(hwInterfaceNo, class_b_or_c);

    func_status = usim_iftest_get_atr(hwInterfaceNo, atr_bytes);
    if (func_status) return func_status;

    func_status = usim_iftest_send_pps(hwInterfaceNo, atr_bytes, pps_buf, &need_pps);
    if (func_status) return func_status;
    func_status = usim_iftest_get_pps(hwInterfaceNo, atr_bytes, pps_buf, need_pps);
    if (func_status) return func_status;
    if (need_pps) kal_sleep_task(KAL_TICKS_50_MSEC);

#define	EF_ICCID	0x2FE2
    tx_buf[0] = 0xA0;
    tx_buf[1] = 0xA4;
    tx_buf[2] = 0x00;
    tx_buf[3] = 0x00;
    tx_buf[4] = 0x02;
    tx_buf[5] = 0x2F;
    tx_buf[6] = 0xE2;
    func_status = usim_iftest_send_sim_command(hwInterfaceNo, tx_buf, 7, 0);
    if (func_status) return func_status;
    func_status = usim_iftest_get_sim_response(hwInterfaceNo, KAL_FALSE, &sw1, &sw2);
    if (func_status) return func_status;
// --
    tx_buf[0] = 0xA0;
    tx_buf[1] = 0xC0;
    tx_buf[2] = 0x00;
    tx_buf[3] = 0x00;
    tx_buf[4] = sw2;
    func_status = usim_iftest_send_sim_command(hwInterfaceNo, tx_buf, 5, tx_buf[4]);
    if (func_status) return func_status;
    func_status = usim_iftest_get_sim_response(hwInterfaceNo, KAL_TRUE, &sw1, &sw2);
    if (func_status) return func_status;
// --
    tx_buf[0] = 0xA0;
    tx_buf[1] = 0xB0;
    tx_buf[2] = 0x00;
    tx_buf[3] = 0x00;
    tx_buf[4] = 10;
    func_status = usim_iftest_send_sim_command(hwInterfaceNo, tx_buf, 5, tx_buf[4]);
    if (func_status) return func_status;
    func_status = usim_iftest_get_sim_response(hwInterfaceNo, KAL_TRUE, &sw1, &sw2);
    if (func_status) return func_status;

    func_status = usim_iftest_sim_deactivation(hwInterfaceNo);
#ifdef __FPGA__
#else
#ifdef SIM_DRV_SWITCH_MT6306
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    if(sim_connectMT6306 == KAL_TRUE)
    {
#endif
        // patch for 3-SIM USIMSMT
        MT6306_blockALLSignal(chip, port);
        MT6306_setVCC(hwInterfaceNo, port, 0, 0); //Turn off VSIM
#if defined(__SIM_DRV_CO_LOAD_MT6306__)
    }
#endif
#endif
#endif
    if (func_status) return func_status;

    return USIM_SMT_NO_ERROR;
}

void usim_iftest_sw_reset_usim(kal_uint32 hwInterfaceNo)
{
#if defined(MT6290)
    if (hwInterfaceNo == 0) drv_rstctl_sw_reset(RST_USIM0);
    else drv_rstctl_sw_reset(RST_USIM1);
#elif defined(MT6595)
#elif defined(MT6752)
#elif defined(MT6735)
#elif defined(TK6291)
    if (hwInterfaceNo == 0) drv_rstctl_sw_reset(RST_USIM1);
    else drv_rstctl_sw_reset(RST_USIM2);
#elif defined(MT6755)
#endif
    return;
}
