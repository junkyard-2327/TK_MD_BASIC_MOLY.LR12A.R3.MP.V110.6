from imgtec import codescape
import sys
import time
import os

def enable_fast_write(da):
    # To accelerate load elf
    # Configure C0_CDMMBASE = 0x01FC1407 to enable access
    thread.WriteRegister('CDMMBase', 0x01FC1407)
    # Default all segments are NC, then configure VA Bank8 to WB for speed up load elf
    thread.memory.Write(0x1FC100D4, 0x02030202)
    da.SetDASettingValue("Fast Monitor Address", 0x6F800000)
    da.SetDASettingValue("Fast Writes", True)

def disable_fast_write(da):
    thread = da.cores[0].hwthreads[0]
    # Restore Default all segments to NC
    thread.memory.Write(0x1FC100D4, 0x02020202)
    # Restore C0_CDMMBASE = 0x01FC1007
    thread.WriteRegister('CDMMBase', 0x01FC1007)
    da.SetDASettingValue("Fast Writes", False)

# load all elf
def load_all_elf(da, thread, elf_path):
    enable_fast_write(da)
    time_str = time.time()
    print "=== Start Loading .elf ==="
    print "Image path: " + elf_path
    for core_idx in range(2):
        if(os.path.exists(elf_path) == False):
            print "[Error] UMOLY ELF doesn't exist: %s" %(elf_path)
            break

        if(core_idx == 0):
            # load binary only on VPE0 of 0 core
            thread = da.cores[core_idx].hwthreads[0]
            thread.Stop()
            thread.LoadProgramFile(elf_path, False, 0x83, True, "")
            print "[Core%d,VPE0] Load ELF successfully" %(core_idx)
            thread = da.cores[core_idx].hwthreads[1]
            thread.Stop()
            thread.LoadProgramFile(elf_path, False, codescape.da_types.LoadType.symbols, False, "")
            print "[Core%d,VPE1] Load ELF successfully" %(core_idx)
        else:
            thread = da.cores[core_idx].hwthreads[0]
            thread.Stop()
            thread.LoadProgramFile(elf_path, False, codescape.da_types.LoadType.symbols, False, "")
            print "[Core%d,VPE0] Load ELF successfully" %(core_idx)
            thread = da.cores[core_idx].hwthreads[1]
            thread.Stop()
            thread.LoadProgramFile(elf_path, False, codescape.da_types.LoadType.symbols, False, "")
            print "[Core%d,VPE1] Load ELF successfully" %(core_idx)
    time_end = time.time()
    print("All loading is done .... Elapsed time: {:.3f} sec".format(time_end-time_str))
    disable_fast_write(da)

# load dsp bin file
def load_dsp_bin(da, thread, dsp_path,dsp_addr):
    enable_fast_write(da)
    time_str = time.time()
    print "=== Start load dsp bin ==="
    print "Dsp bin path: " + dsp_path
    print "Dsp bin load address: " + dsp_addr

    thread = da.cores[0].hwthreads[0]
    thread.memory.LoadBinaryFile(dsp_path,dsp_addr,start_offset = 0, length = None)

    time_end = time.time()
    print("loading dsp is done .... Elapsed time: {:.3f} sec".format(time_end-time_str))
    disable_fast_write(da)



def DRAM_INIT(thread):
    """initialize DRAM, include DRAMC_INIT (-> LPDDR2_INIT) -> EMI_INIT -> MEMSYS_INIT
       [in] thread, codescape thread object
    """
    BASE_ADDR_EMI              = 0xC3000000
    BASE_ADDR_DRAMC            = 0xC3010000
    BASE_ADDR_DDRPHY           = 0xC3020000
    BASE_ADDR_MEMSYSAOREG_MISC = 0xC3080000
    BASE_ADDR_AP_CLKSW         = 0xC3750000

    usleep = lambda x: time.sleep(x/1000000.0) # usec delay

    def DRAMC_INIT():
        """initialize DRAMC, DDRPHY, and DRAM, exclude EMI
        """
        # =ACTIM0=
        thread.memory.Write(BASE_ADDR_DRAMC+0x0000, 0x44584493)
        # =CONF1=
        # [18][5][3] no use in TK6291
        # [9:8]MTYPE, DRAM column address width, 2'b01 (9-bit) -> 2'b10 (10-bit)
        # TODO: [AC Timing] 0x00048683
        thread.memory.Write(BASE_ADDR_DRAMC+0x0004, 0xF0008681)
        # =R0DELDLY=
        thread.memory.Write(BASE_ADDR_DRAMC+0x0018, 0x10101010)
        # =R1DELDLY=
        # [30:24][22:16][14:8][6:0] DQS3/2/1/0 input delay
        thread.memory.Write(BASE_ADDR_DRAMC+0x001C, 0x12121212)
        # =DLLCONF=
        thread.memory.Write(BASE_ADDR_DRAMC+0x0028, 0x50000000)
        # =TEST2_3=
        # [23] DQSICALI_NEW=0, using original dqs calibration
        # [7] TESTAUDPAT=0, ISI pattern can be set by TEST2_PAT0
        thread.memory.Write(BASE_ADDR_DRAMC+0x0044, 0xBF080000)
        # =TEST2_4=
        thread.memory.Write(BASE_ADDR_DRAMC+0x0048, 0x1601110D)
        # =DDR2CTL=
        thread.memory.Write(BASE_ADDR_DRAMC+0x007C, 0x00003201)
        # =MISC=
        # [23:21]: PHYRXDSL_PIPE3~1 are pipe stage selection for RDATA and RDSEL
        # DATLAT_DSEL = DATLAT - 2*2 when enabling two top pipe (for TK6291)
        thread.memory.Write(BASE_ADDR_DRAMC+0x0080, 0x00AC08A0)
        # =ZQCS=
        # [15:8]: ZQCSAD, [7:0]: ZQCSOP
        reg_val = thread.memory.Read(BASE_ADDR_DRAMC+0x0084) & ~0x0000FFFF
        reg_val = reg_val | 0x00000A56
        thread.memory.Write(BASE_ADDR_DRAMC+0x0084, reg_val)
        # =CLK1DELAY=
        # [23]: PHYPIPE3EN, [22]: PHYPIPE2EN, [21]: PHYPIPE1EN
        reg_val = thread.memory.Read(BASE_ADDR_DRAMC+0x008C) & ~0x00E00000
        reg_val = reg_val | 0x00A00000
        thread.memory.Write(BASE_ADDR_DRAMC+0x008C, reg_val)
        # =R0DQSIEN=
        # Gating Window for Rank0
        thread.memory.Write(BASE_ADDR_DRAMC+0x0094, 0x31313131)
        # =MCKDLY=
        # [23]: WODT has no load (useless)
        # [21]: DRAMEN has no load (useless)
        # [11:10] DQIENQKEND: DQ/DQS input enable window is larger than 6582. [11:10]=2'b00 => dle counter is 5'1f. =Others => dle counter is DATLAT-[11:10]+2
        # [4] DQIENLATEBEGIN, disable early begin, better for power saving
        # TODO: [20]: It is used for BST(Bus Termination), but TK6291 doesn't support the feature
        thread.memory.Write(BASE_ADDR_DRAMC+0x00D8, 0x40500510)
        # =DQSCTL1=
        # [27:24]: DQSINCTL, DQS input range control by M_CK
        # [23:12][11:0]: DQS3CTL/DQS2CTL, control by DDRPHY (useless)
        thread.memory.Write(BASE_ADDR_DRAMC+0x00E0, 0x12200200)
        # =GDDR3CTL1=
        # [24]: 8BKEN=1, 8-bank device enable
        reg_val = thread.memory.Read(BASE_ADDR_DRAMC+0x00F4) | 0x01000000
        thread.memory.Write(BASE_ADDR_DRAMC+0x00F4, reg_val)
        # [28]: PHYSYNCM=1, SYNC MODE using inverted PHY_M_CK
        reg_val = thread.memory.Read(BASE_ADDR_DDRPHY+0x00F4) | 0x10000000
        thread.memory.Write(BASE_ADDR_DDRPHY+0x00F4, reg_val)
        # =MISCTL0=
        # [31]: REFP_ARB_EN2: per-bank refresh arbitration mask2
        # [30:28]: TXP, tXP Timing setting
        # [27] EMIPREEN: Enable advanced precharge function by EMI side-band signals, but TK6291 didn't support this feature.
        # [26] REFP_ARB_EN: per-bank refresh blocks in EMI arbitration
        # [25] REFA_ARB_EN: all-bank refresh blocks in EMI arbitration
        # [24] PBC_ARB_EN:  block page-miss requests in EMI arbitration
        # [21]: REFA_ARB_EN2: all bank refresh arbtration mask enable option
        thread.memory.Write(BASE_ADDR_DRAMC+0x00FC, 0x81080000)
        # [17]: INTLBT=0, IO internal loop back (useless for TK6291)
        # [16]: RXLPDDR2=0, IO voltage operating condition = {0:1.2V, 1:1.8V}
        reg_val = thread.memory.Read(BASE_ADDR_DDRPHY+0x00FC) & ~0x00030000
        thread.memory.Write(BASE_ADDR_DDRPHY+0x00FC, reg_val)
        # =OCDK=
        # [24]: DRVREF=1, drving change only when refresh cycle
        # [15]: DRDELSWEN=1, enable DQS input delay switching for different ranks
        # [8]: AUTOCALDRV=1, OCD calibration enable
        # [7:0]: AUTOKCNT, auto calibration counter
        # =RKCFG=
        # [7]: per-bank refresh for LPDDR2&3
        # TODO: [AC Timing] 0x004135C0
        thread.memory.Write(BASE_ADDR_DRAMC+0x0110, 0x004121C0)
        # =DQSCTL2=
        thread.memory.Write(BASE_ADDR_DRAMC+0x0118, 0x00000002)
        # =DQSGCTL=
        # [7:0] Old gating window course tune
        reg_val = thread.memory.Read(BASE_ADDR_DRAMC+0x0124) & ~0x000000FF
        thread.memory.Write(BASE_ADDR_DRAMC+0x0124, reg_val)
        # [31]: NEWDQSG_SEL, [30]:DQSGDUALP
        reg_val = thread.memory.Read(BASE_ADDR_DDRPHY+0x0124) | 0xC0000000
        thread.memory.Write(BASE_ADDR_DDRPHY+0x0124, reg_val)
        # =CLKCTRL=
        # [29]: CLK_EN_1, [28]: CLK_EN_0
        # TODO: we should only enable one CLK for TK6291
        reg_val = thread.memory.Read(BASE_ADDR_DRAMC+0x0130) | 0x30000000
        thread.memory.Write(BASE_ADDR_DRAMC+0x0130, reg_val)
        # =ARBCTL0=
        # [7:0]: maximum pending number to block the arbitration
        reg_val = thread.memory.Read(BASE_ADDR_DRAMC+0x0168) & ~0x000000FF
        reg_val = reg_val | 0x00000080
        thread.memory.Write(BASE_ADDR_DRAMC+0x0168, reg_val)
        # =DQSCAL0=
        # [31]: DQS strobe calibration enable
        # [30]: Update tracking gating value to 2 ranks simultaneously
        # [15]: Rank0 DQS strobe calibration high-limit enable
        # [14:8]: Rank0 DQS strobe calibration high-limit value
        # [7]: Rank0 DQS strobe calibration low-limit enable
        # [6:0]: Rank0 DQS strobe calibration low-limit value
        reg_val = thread.memory.Read(BASE_ADDR_DRAMC+0x01C0) & ~0xC000FFFF
        reg_val = reg_val | 0x80000000
        thread.memory.Write(BASE_ADDR_DRAMC+0x01C0, reg_val)
        # =MEMSYSPIPE_CGF_CTL=
        # [2]: PIPE_CFG_EN, [0]: DRAMC_CFG_EN
        # PIPE_CGF_ON=0 (timing issue) EMI_CGF_ON=0(Gated function is already designed in EMI) DRAMC_CGF_ON=1
        thread.memory.Write(BASE_ADDR_MEMSYSAOREG_MISC+0x5000, 0x00000001)
        # =DRAMC_PD_CTRL=
        # [24] REFFRERUN, using freerun clock to count refresh period
        # [23:16] REFCNT_FR_CLK, refresh period based on DRAMC freerun clock cycles
        # [15:8] TXREFCNT, tXSR
        thread.memory.Write(BASE_ADDR_DRAMC+0x01DC, 0xC2002340)
        # =LPDDR2_3=
        # TODO: should set to 0x10000000, not 0x3600_0000?
        # [31]: DRAM address decode by DRAMC
        # [28]: LPDDR2 enable
        # [27]: enable register output data by DRAMC
        thread.memory.Write(BASE_ADDR_DRAMC+0x01E0, 0x36000000)
        # [30]: Select IO O1 as output
        # [29&25:24&22:0]: DDR mode for pins
        # [26]: fast IO output enable
        thread.memory.Write(BASE_ADDR_DDRPHY+0x01E0, 0x2601FFFF)
        # =ACTIM1=
        thread.memory.Write(BASE_ADDR_DRAMC+0x01E8, 0x81000510)
        # =PERFCTL0=
        # [0] dual schedulers
        thread.memory.Write(BASE_ADDR_DRAMC+0x01EC, 0x0010CF11)
        # TODO: AC_DERATING [0x01F0]
        # =RRRATE_CTL=, =MRR_CTL=
        # Or LPDDR3
        thread.memory.Write(BASE_ADDR_DRAMC+0x01F4, 0x03020100)
        thread.memory.Write(BASE_ADDR_DRAMC+0x01Fc, 0x07060504)
        # =AC_TIME_05T=
        thread.memory.Write(BASE_ADDR_DRAMC+0x01F8, 0x04002600)
        # =LPDDR2_4=
        # clock 1x phase selection
        thread.memory.Write(BASE_ADDR_DDRPHY+0x023C, 0x2201FFFF)
        # =SELPH1=
        # TX 1x clock delay for CS1, RAS, CAS, WE, RESET, ODT, CKE, and CS
        thread.memory.Write(BASE_ADDR_DRAMC+0x0400, 0x00000000)
        # =SELPH2=
        # TX 1x clock delay for CKE1, DQSGATE_P1, CMD, DQSGATE, BA[2:0]
        thread.memory.Write(BASE_ADDR_DRAMC+0x0404, 0x00302000)
        # =SELPH3=
        # TX 1x clock delay for RA[7:0]
        thread.memory.Write(BASE_ADDR_DRAMC+0x0408, 0x00000000)
        # =SELPH4=
        # TX 1x clock delay for RA[15:8]
        thread.memory.Write(BASE_ADDR_DRAMC+0x040C, 0x00000000)
        # =SELPH5=
        # TX 0.5's 2x clock delay for CKE1, DQSGATE_P1, DQSGATE, BA[2:0], CS1, RAS, CAS, WE, RESET, ODT, CKE, CS
        thread.memory.Write(BASE_ADDR_DRAMC+0x0410, 0x00955555)
        # TODO: SELPH6 [0x0414]
        # =SELPH6_1=
        # TX 1x clock delay for DQSGATE_P1 and DQSGATE of rank1
        # TX 0.5's 2x clock delay for DQSGATE_P1 and DQSGATE of rank1
        thread.memory.Write(BASE_ADDR_DRAMC+0x0418, 0x00000228)
        # =SELPH7=
        # TX 1x clock delay for DQ byte output enable[3:0] and DQ byte[3:0]
        thread.memory.Write(BASE_ADDR_DRAMC+0x041C, 0x11111111)
        # =SELPH8=
        # TX 1x clock delay for DQM byte output enable[3:0] and DQM byte[3:0]
        thread.memory.Write(BASE_ADDR_DRAMC+0x0420, 0x11111111)
        # =SELPH9=
        # TX 1x clock delay for DQS byte output enable[3:0] and DQS byte[3:0]
        thread.memory.Write(BASE_ADDR_DRAMC+0x0424, 0x11111111)
        # =SELPH10=
        # TX 0.5's 2x clock delay for DQM output enable[3:0], DQ byte output enable[3:0], DQM[3:0], and DQ byte[3:0]
        # TODO: why we let output enable extra more 1.5 T not 0.5 DRAM clock?
        thread.memory.Write(BASE_ADDR_DRAMC+0x0428, 0x0000FFFF)
        # =SELPH11=
        # TX 0.5's 2x clock delay for DQS output enable[3:0] and DQS[3:0]
        # TODO: why we let output enable extra more 1.5 T not 0.5 DRAM clock?
        thread.memory.Write(BASE_ADDR_DRAMC+0x042C, 0x000000FF)
        # TODO: offset 0x430~0x438, Don't we need to set clock 05x phase selection?
        # =SELPH12=
        # clock 05x phase selection for CLK, DQSGATE, DQS[3:0], and DQM[3:0]
        # clock 1x phase selection for DQS[3:0], DQM[3:0], CLK, and DQSGATE
        thread.memory.Write(BASE_ADDR_DDRPHY+0x0430, 0x10F010F0)
        # =SELPH13=
        # clock 1x phase selection for DQ[31:0]
        thread.memory.Write(BASE_ADDR_DDRPHY+0x0434, 0xFFFFFFFF)
        # =SELPH14=
        # clock 05x phase selection for DQ[31:0]
        thread.memory.Write(BASE_ADDR_DDRPHY+0x0438, 0xFFFFFFFF)
        # =SELPH15=
        # OCV (On-Chip Variation that affect by PVT). It is removed in TK6291.
        # OCV mode for DQSGATE, DQS[3:0], DQ[31:0], CLK, and CA
        thread.memory.Write(BASE_ADDR_DDRPHY+0x043C, 0x0000001F)
        # =MEMPLL_DIVIDER=
        # DDRPHY reset flow for 1X clock phase sync
        # [5]: MEMCLKENB, SW control. It is used for MEMPLL initialization. After initialization, CLKENB is controlled by HW mode.
        # [4]: RG_DMSS_PWDB, ALLCLK_EN. It is used for gated MEMPLL output during initialization. (=1 after initilization)
        # [0]: MEMCLKENB_SEL, memory clock sync enable bar selection, selection for [5] (=1 select[5])
        # TODO: wait 500 sys_clock equal to 1.87us?
        usleep(2)
        LPDDR2_INIT()
        # =CONF2=
        thread.memory.Write(BASE_ADDR_DRAMC+0x0008, 0x0000631F)
        # =DRAMC_PD_CTRL=

    def EMI_INIT():
        """initialize EMI
        """
        # =EMI_CONA=
        # [27]: RANK_POS=0, {rank,row,bank,col}
        # [17]: DUAL_RANK_EN=0
        # [15:14][13:12]: ROW2ND=1,ROW=1, 14-bit row address
        # [7:6][5:4]: COL2ND=1,COL=1, 10-bit column address
        # [1]: DW32_EN=1, 32-bit data bus
        thread.memory.Write(BASE_ADDR_EMI+0x0000, 0x00005052)
        # =EMI_ARBI=
        thread.memory.Write(BASE_ADDR_EMI+0x0140, 0x20406188)
        # =EMI_ARBI_2ND=
        thread.memory.Write(BASE_ADDR_EMI+0x0144, 0x20406188)
        # =EMI_ARBD=
        thread.memory.Write(BASE_ADDR_EMI+0x0118, 0x0700704C)
        # =EMI_ARBE=
        thread.memory.Write(BASE_ADDR_EMI+0x0120, 0x40407068)
        # =EMI_ARBG=
        thread.memory.Write(BASE_ADDR_EMI+0x0130, 0xFFFF7045)
        # =EMI_ARBH=
        thread.memory.Write(BASE_ADDR_EMI+0x0138, 0xA0A07047)
        # TODO: CSR is not defined?
        thread.memory.Write(BASE_ADDR_EMI+0x0040, 0x80808807)
        # =EMI_ARBJ=
        # TODO: it is not defined in CSRv0.9
        thread.memory.Write(BASE_ADDR_EMI+0x0148, 0x9719595E)
        # =EMI_ARBJ_2ND=
        # TODO: it is not defined in CSRv0.9
        thread.memory.Write(BASE_ADDR_EMI+0x014C, 0x9719595E)
        # =EMI_TEST_D=
        thread.memory.Write(BASE_ADDR_EMI+0x00F8, 0x00000000)
        # =EMI_BMEN=
        # TODO: why do we need to enable BUS_MON_EN for DRAM Init?
        thread.memory.Write(BASE_ADDR_EMI+0x0400, 0x00FF0001)
        # =EMI_CONB=
        thread.memory.Write(BASE_ADDR_EMI+0x0008, 0x17283544)
        # =EMI_CONC=
        thread.memory.Write(BASE_ADDR_EMI+0x0010, 0x0A1A0B1A)
        # TODO: offset 0x18 is not defined in CSR.
        thread.memory.Write(BASE_ADDR_EMI+0x0018, 0x00000000)
        # =EMI_CONE=
        # TODO: it is not defined in CSRv0.9
        thread.memory.Write(BASE_ADDR_EMI+0x0020, 0xFFFF0848)
        # =EMI_CONG=
        thread.memory.Write(BASE_ADDR_EMI+0x0030, 0x2B2B2A38)
        # =EMI_CONH=
        thread.memory.Write(BASE_ADDR_EMI+0x0038, 0x00000000)
        # =EMI_SLCT=
        # TODO: Why do we enable [17]:M1_LLAT_EN?
        thread.memory.Write(BASE_ADDR_EMI+0x0158, 0xFF02FF00)
        # =EMI_MDCT=
        # TODO: why don't we enable [14]:MDMCU_SBR_EN and [12]:ULTRA_SBR_EN?
        thread.memory.Write(BASE_ADDR_EMI+0x0078, 0x002F0C17)
        # TODO: it is not defined in CSR.
        thread.memory.Write(BASE_ADDR_EMI+0x015C, 0x80030303)
        # =EMI_EMI_ARBK=
        # TODO: it only defines [23:16] in CSRv0.9
        thread.memory.Write(BASE_ADDR_EMI+0x0150, 0x64F3FC79)
        # =EMI_ARBK_2ND=
        # TODO: it is not defined in CSRv0.9
        thread.memory.Write(BASE_ADDR_EMI+0x0154, 0x64F3FC79)
        # =EMI_TESTC=
        # TODO: it only enables [16:8] in CSRv0.9
        thread.memory.Write(BASE_ADDR_EMI+0x00F0, 0x38470000)
        # =EMI_TESTB=
        # TODO: it didn't define [2:0] in CSRv0.9
        thread.memory.Write(BASE_ADDR_EMI+0x00E8, 0x00020027)
        # Enable slave error
        thread.memory.Write(BASE_ADDR_EMI+0x01C0, 0x10000000)
        thread.memory.Write(BASE_ADDR_EMI+0x01C8, 0x10000000)
        thread.memory.Write(BASE_ADDR_EMI+0x01D0, 0x10000000)
        thread.memory.Write(BASE_ADDR_EMI+0x0200, 0x10000000)
        thread.memory.Write(BASE_ADDR_EMI+0x02C0, 0x10000000)
        thread.memory.Write(BASE_ADDR_EMI+0x02C8, 0x10000000)
        thread.memory.Write(BASE_ADDR_EMI+0x02D0, 0x10000000)
        thread.memory.Write(BASE_ADDR_EMI+0x0300, 0x10000000)
        # =EMI_CONM=
        # [10]: EMI_ENABLE=1
        thread.memory.Write(BASE_ADDR_EMI+0x0060, 0x000006B8)
        # =EMI_ARBP=
        # EBM_MODE enable
        thread.memory.Write(BASE_ADDR_EMI+0x0A20, 0x00010000)

    def MEMSYS_INIT():
        """initialize MEMSYS
        """
        # =MEMINFRA_SI_WAY_CTL=
        # Enable MEMINFRA EMI Path
        # [9:8] M7_sysram:M7_emi
        # [7:6] M6_sysram:M6_emi
        # [5:4] M4_mdmda_sysram:M4_mddma_emi
        # [3:2] M4_l1sys_sysram:M4_l1sys_emi
        # [1:0] M3_sysram:M3_emi
        reg_val=thread.memory.Read(BASE_ADDR_MEMSYSAOREG_MISC+0x4000) | 0x00000155
        thread.memory.Write(BASE_ADDR_MEMSYSAOREG_MISC+0x4000, reg_val)
        # =EMI_ADDR_OFFSET=
        # EMI offset on address[31:24], unit is 16MB
        MD3_offset = 0x00
        MD2_offset = 0x00
        MD1_offset = 0x10
        ap_offset  = 0x00
        emi_offset = (MD3_offset<<0x18) + (MD2_offset<<0x10) + (MD1_offset<<0x08) + (ap_offset<<0x00)
        thread.memory.Write(BASE_ADDR_MEMSYSAOREG_MISC+0x1000, emi_offset)

    def LPDDR2_INIT():
        """initialize LPDDR2
        """
        # =PADCTL4=
        # [2]: CKE always on, [0]: CKE control by controller
        # CKE always on
        reg_val = thread.memory.Read(BASE_ADDR_DRAMC+0x00E4) | 0x00000005
        thread.memory.Write(BASE_ADDR_DRAMC+0x00E4, reg_val)
        usleep(200)
        # LPDDR2 MRW RESET
        DRAMC_MRW(0x0000003F)
        usleep(10)
        # ZQ Init
        DRAMC_MRW(0x00FF000A)
        # TODO: wait 1us after ZQ Initialization
        usleep(1)
        # MRW MR1 => BL8, Sequential, Wrap, nWR=8
        DRAMC_MRW(0x00C30001)
        # MRW MR2 => RL=8 and WL=4 for DDR1066
        DRAMC_MRW(0x00060002)
        # MRW MR3 => 40-ohm typical
        DRAMC_MRW(0x00020003)
        # =PADCTL4=
        # [2]: CKE always on, [0]: CKE control by controller
        # CKE is controlled by hardware
        reg_val = thread.memory.Read(BASE_ADDR_DRAMC+0x00E4) & ~0x00000004
        thread.memory.Write(BASE_ADDR_DRAMC+0x00E4, reg_val)

    def DRAMC_MRW(mrs):
        """DMAMC mode register write
           [in] mrs, mode register write value
        """
        spcmd = 0x00000001
        thread.memory.Write(BASE_ADDR_DRAMC+0x0088, mrs)
        thread.memory.Write(BASE_ADDR_DRAMC+0x01E4, spcmd)
        while (thread.memory.Read(BASE_ADDR_DRAMC+0x03B8) & spcmd) != spcmd: pass
        thread.memory.Write(BASE_ADDR_DRAMC+0x01E4, 0x00000000)
        while (thread.memory.Read(BASE_ADDR_DRAMC+0x03B8) & spcmd) == spcmd: pass

    print("DRAM_INIT ...")
    if (thread.memory.Read(BASE_ADDR_EMI+0x0060) & 0x00000400) == 0x00000400:
        return

    thread.memory.Write(BASE_ADDR_MEMSYSAOREG_MISC+0x3000, 0x24541689) # MEMSYS_PASSWORD unlock
    print("DRAMC_INIT ...")
    DRAMC_INIT()
    print("EMI_INIT ...")
    EMI_INIT()
    print("MEMSYS_INIT ...")
    MEMSYS_INIT()
    thread.memory.Write(BASE_ADDR_MEMSYSAOREG_MISC+0x3000, 0x00000000) # MEMSYS_PASSWORD lock
    #DRAM_TEST(thread)


def DRAM_TEST(thread, ctrl=0, loop=2):
    """Use traffic-gen (TRFG) *4 to test DRAM, range 0x1000_0000 (256MB)
              start_addr   test_length  domain
       TRFG0  0x0000_0000  0x0400_0000  1
       TRFG1  0x0400_0000  0x0400_0000  1
       TRFG2  0x0800_0000  0x0400_0000  1
       TRFG3  0x0C00_0000  0x0400_0000  1

       [in] thread, codescape thread object
       [in] ctrl, all-0: config and start
                  bit-0: start
                  bit-1: pause
                  bit-2: resume
       [in] loop, test loop, 0:infinite, others:N-times
       [out] 0:success, 1:fail
    """
    TRFG_BASE = 0xC3041000  # TRFG 0~3 offset 0x100

    if ctrl != 0:
        thread.memory.Write(TRFG_BASE+0x000, ctrl)
        thread.memory.Write(TRFG_BASE+0x100, ctrl)
        thread.memory.Write(TRFG_BASE+0x200, ctrl)
        thread.memory.Write(TRFG_BASE+0x300, ctrl)
        print("TRFG control done ...")
        return 0

    print("TRFG config and start ...")
    for idx in range(4):
        base       = TRFG_BASE + 0x100 * idx
        start_addr = 0x04000000 * idx
        pat_ctl    = 0x58FF0017 + ((loop & 0xF) << 8)
        # TRFG_STRAT_CTL, [0]:start, [1]:pause, [2]:resume
        thread.memory.Write(base+0x00, 0x00000000)
        # TRFG_INIT_PAT_MSB
        thread.memory.Write(base+0x04, 0x5A5A5A5A)
        # TRFG_INIT_PAT_LSB
        thread.memory.Write(base+0x08, 0xA5A5A5A5)
        # TRFG_START_ADDR
        thread.memory.Write(base+0x0C, start_addr)
        # TRFG_TEST_LEN * 8 byte
        thread.memory.Write(base+0x10, 0x00800000)
        # TRFG_PAT_CTL, [11:8]:test_loop, [5:4]:pat_mode
        thread.memory.Write(base+0x14, pat_ctl)
        # TRFG_BUS_CTL, [10:8]:domain, [3:0]:burst_len
        thread.memory.Write(base+0x18, 0x0000010F)
        # TRFG_STRAT_CTL, [0]:start, [1]:pause, [2]:resume
        thread.memory.Write(base+0x00, 0x00000001)

    # Wait done
    print("Wait done")
    trfg = [None] * 4
    while None in trfg:
        print(".")
        time.sleep(1)
        for idx in range(4):
            base=TRFG_BASE + 0x100 * idx
            if trfg[idx] != None:
                continue
            if (thread.memory.Read(base+0x20) & 0x1) == 0x1:
                continue
            if (thread.memory.Read(base+0x20) & 0x4) == 0x0:
                print("=> TRFG {} test fail:".format(idx))
                print("FAIL_ADDR     = 0x{:08X}".format(thread.memory.Read(base+0x24)))
                print("EXP_DATA_MSB  = 0x{:08X}".format(thread.memory.Read(base+0x28)))
                print("EXP_DATA_LSB  = 0x{:08X}".format(thread.memory.Read(base+0x2C)))
                print("FAIL_DATA_MSB = 0x{:08X}".format(thread.memory.Read(base+0x30)))
                print("FAIL_DATA_LSB = 0x{:08X}".format(thread.memory.Read(base+0x34)))
                trfg[idx] = 1
            else:
                trfg[idx] = 0

    if trfg == [0,0,0,0]:
        print("=> TRFG dram test pass ...^_^")
        return 0
    else:
        print("=> TRFG dram test fail ...>'<")
        return 1


def WDT_Disable(thread):
    """diable WDT function
    """
    print("WDT disable ...")
    mdrgu = 0xA00F0000 + 0x0100
    aprgu = 0xC3670000 + 0x0100
    thread.memory.Write(mdrgu, (thread.memory.Read(mdrgu) & 0xFFFFFFFC) | 0x55000000)
    #print("0x{:08X}=0x{:08X}".format(mdrgu, thread.memory.Read(mdrgu))) #0x32
    thread.memory.Write(aprgu, (thread.memory.Read(aprgu) & 0xFFFFFFFE) | 0x55000000)
    #print("0x{:08X}=0x{:08X}".format(aprgu, thread.memory.Read(aprgu))) #0x00



if __name__ == "__main__":
    print "=== Start Initializing ==="
    umolya_path = ""
    dsp_path = ""
    
    da = codescape.GetFirstProbe()
    for idx in reversed(range(2)):
        da.cores[idx].StopAll(False)
    thread = da.cores[0].hwthreads[0]
    da.SetDASettingValue("Fast Reads",  False)
    da.SetDASettingValue("Force MMU type MPU", True)
    #da.SetDASettingValue("Lock Monitor in Cache", False)

    thread.memory.Write(0x1F000020, 0xF)
    thread.memory.Write(0x1F000090, 0xA0000000)
    thread.memory.Write(0x1F000098, 0xE0000002)
    thread.memory.Write(0x1F0000A0, 0xC0000000)
    thread.memory.Write(0x1F0000A8, 0xC0000002)
    # fixed md mips domain ID hw bug
    thread.memory.Write(0xA0060060, 0x03231111)

    time_str = time.time()
    WDT_Disable(thread)
    DRAM_INIT(thread)
    
    #clear dsp header
    print("Clear DSP Header...")
    thread.memory.Write(0x0E800000, 0)
    thread.memory.Write(0x00080000, 0)

    time_end = time.time()
    print("Elapsed time: {:.3f} sec".format(time_end-time_str))


    if codescape.environment == "codescape":
        if codescape.is_script_region:
            region_thread = codescape.GetRegionThread()
            # This is a script region, set up events to wait for thread halted
            import wx
            class Frame(wx.Frame):

                dsp_bin_addr = "0x0E800000"

                def __init__(self, parent, thread):
                    wx.Frame.__init__(self, parent, title="[ModemOnly]LoadBin&Symbol")

                    
                    # Initialize UI
                    button_width = 80
                    border_size  = 6

                    load_all_elf_btn = wx.Button(self, pos=(0, 0), label='Load elf', size=(button_width,-1))
                    load_all_elf_btn.Bind(wx.EVT_BUTTON, self.on_load_all_elf_button)

                    button_width = 100
                    border_size  = 6                    
                    load_dsp_btn = wx.Button(self, pos=(0, 35), label='Load DSP Bin', size=(button_width,-1))
                    load_dsp_btn.Bind(wx.EVT_BUTTON, self.on_load_dsp_button)

                    statictext = wx.StaticText(self, pos=(110, 40), label="dsp address:")

                    textctrl = wx.TextCtrl(self,pos=(190, 37), value = self.dsp_bin_addr)
                    textctrl.Bind(wx.EVT_TEXT, self.OnTextChanged)


                # load all elf
                def on_load_all_elf_button(self, event):
                    fileDialog = wx.FileDialog(self)
                    fileDialog.ShowModal()
                    umolya_path = fileDialog.GetPath()
                    fileDialog.Destroy()
                    thread = da.cores[0].hwthreads[0]
                    load_all_elf(da, thread, umolya_path)

                # load dsp bin
                def on_load_dsp_button(self, event):
                    print "Select dsp bin...."
                    fileDialog = wx.FileDialog(self)
                    fileDialog.ShowModal()
                    dsp_path = fileDialog.GetPath()               
                    
                    thread = da.cores[0].hwthreads[0]
                    load_dsp_bin(da, thread, dsp_path,self.dsp_bin_addr)

                def OnTextChanged(self, event):
                    Frame.dsp_bin_addr = event.String
                    print "Dsp address: " + self.dsp_bin_addr


            app = wx.App()
            frame = Frame(None, region_thread);
            frame.Show()
            app.MainLoop()
            sys.exit()
        else:
            if (len(sys.argv) == 2):
                umolya_path = sys.argv[1]
                load_all_elf(da, thread, umolya_path)
            else:
                # WDT_Disable and DRAM_INIT done
                sys.exit("[Reminder] Remember to load .elf")
