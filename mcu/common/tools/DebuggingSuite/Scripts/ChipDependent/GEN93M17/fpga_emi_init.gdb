set $CHIP_VER                   = 0
set $BASE_ADDR_EMI              = 0xC3000000
set $BASE_ADDR_DRAMC            = 0xC3010000
set $BASE_ADDR_DDRPHY           = 0xC3020000
set $BASE_ADDR_MEMSYSAOREG_MISC = 0xC3080000
set $BASE_ADDR_AP_CLKSW         = 0xC3750000

define delay_f32k
    set $tgt = *0xa00d0850 + $arg0
    while *0xa00d0850 <= $tgt
    end
end

define DRAM_INIT
    if (*($BASE_ADDR_EMI+0x0060) & 0x00000400) == 0x00000400
        echo Warning: DRAM has be initialized, why ???\n
    else
        # =MEMSYS_PASSWORD=
        # Unlock MEMSYS Password
        set *($BASE_ADDR_MEMSYSAOREG_MISC+0x3000) = 0x24541689
        DRAMC_INIT
        EMI_INIT
        MEMSYS_INIT
        # =MEMSYS_PASSWORD=
        # Lock MEMSYS Password
        set *($BASE_ADDR_MEMSYSAOREG_MISC+0x3000) = 0x00000000
    end
end

define DRAMC_INIT
    echo DRAMC_INIT ...\n
    # =ACTIM0=
    set *($BASE_ADDR_DRAMC+0x0000) = 0x44584493
    # =CONF1=
    # [18][5][3] no use in TK6291
    # [9:8]MTYPE, DRAM column address width, 2'b01 (9-bit) -> 2'b10 (10-bit)
    # TODO: [AC Timing] 0x00048683 # 0xF0008481
    set *($BASE_ADDR_DRAMC+0x0004) = 0xF0008681
    # =R0DELDLY=
    set *($BASE_ADDR_DRAMC+0x0018) = 0x10101010
    # =R1DELDLY=
    # [30:24][22:16][14:8][6:0] DQS3/2/1/0 input delay
    set *($BASE_ADDR_DRAMC+0x001C) = 0x12121212
    # =DLLCONF=
    set *($BASE_ADDR_DRAMC+0x0028) = 0x50000000
    # =TEST2_3=
    # [23] DQSICALI_NEW=0, using original dqs calibration
    # [7] TESTAUDPAT=0, ISI pattern can be set by TEST2_PAT0
    set *($BASE_ADDR_DRAMC+0x0044) = 0xBF080000
    # =TEST2_4=
    set *($BASE_ADDR_DRAMC+0x0048) = 0x1601110D
    # =DDR2CTL=
    set *($BASE_ADDR_DRAMC+0x007C) = 0x00003201
    # =MISC=
    # [23:21]: PHYRXDSL_PIPE3~1 are pipe stage selection for RDATA and RDSEL
    # DATLAT_DSEL = DATLAT - 2*2 when enabling two top pipe (for TK6291)
    set *($BASE_ADDR_DRAMC+0x0080) = 0x00AC08A0
    # =ZQCS=
    # [15:8]: ZQCSAD, [7:0]: ZQCSOP
    set $reg_val = *($BASE_ADDR_DRAMC+0x0084) & ~0x0000FFFF
    set $reg_val = $reg_val | 0x00000A56
    set *($BASE_ADDR_DRAMC+0x0084) = $reg_val
    # =CLK1DELAY=
    # [23]: PHYPIPE3EN, [22]: PHYPIPE2EN, [21]: PHYPIPE1EN
    set $reg_val = *($BASE_ADDR_DRAMC+0x008C) & ~0x00E00000
    set $reg_val = $reg_val | 0x00A00000
    set *($BASE_ADDR_DRAMC+0x008C) = $reg_val
    # =R0DQSIEN=
    # Gating Window for Rank0
    set *($BASE_ADDR_DRAMC+0x0094) = 0x31313131
    # =MCKDLY=
    # [23]: WODT has no load (useless)
    # [21]: DRAMEN has no load (useless)
    # [11:10] DQIENQKEND: DQ/DQS input enable window is larger than 6582. [11:10]=2'b00 => dle counter is 5'1f. =Others => dle counter is DATLAT-[11:10]+2
    # [4] DQIENLATEBEGIN, disable early begin, better for power saving
    # TODO: [20]: It is used for BST(Bus Termination), but TK6291 doesn't support the feature
    set *($BASE_ADDR_DRAMC+0x00D8) = 0x40500510
    # =DQSCTL1=
    # [27:24]: DQSINCTL, DQS input range control by M_CK
    # [23:12][11:0]: DQS3CTL/DQS2CTL, control by DDRPHY (useless)
    set *($BASE_ADDR_DRAMC+0x00E0) = 0x12200200
    # =GDDR3CTL1=
    # [24]: 8BKEN=1, 8-bank device enable
    set $reg_val = *($BASE_ADDR_DRAMC+0x00F4) | 0x01000000
    set *($BASE_ADDR_DRAMC+0x00F4) = $reg_val
    # [28]: PHYSYNCM=1, SYNC MODE using inverted PHY_M_CK
    set $reg_val = *($BASE_ADDR_DDRPHY+0x00F4) | 0x10000000
    set *($BASE_ADDR_DDRPHY+0x00F4) = $reg_val
    # =MISCTL0=
    # [31]: REFP_ARB_EN2: per-bank refresh arbitration mask2
    # [30:28]: TXP, tXP Timing setting
    # [27] EMIPREEN: Enable advanced precharge function by EMI side-band signals, but TK6291 didn't support this feature.
    # [26] REFP_ARB_EN: per-bank refresh blocks in EMI arbitration
    # [25] REFA_ARB_EN: all-bank refresh blocks in EMI arbitration
    # [24] PBC_ARB_EN:  block page-miss requests in EMI arbitration
    # [21]: REFA_ARB_EN2: all bank refresh arbtration mask enable option
    set *($BASE_ADDR_DRAMC+0x00FC) = 0x81080000
    # [17]: INTLBT=0, IO internal loop back (useless for TK6291)
    # [16]: RXLPDDR2=0, IO voltage operating condition = {0:1.2V, 1:1.8V}
    set $reg_val = *($BASE_ADDR_DDRPHY+0x00FC) & ~0x00030000
    set *($BASE_ADDR_DDRPHY+0x00FC) = $reg_val
    # =OCDK=
    # [24]: DRVREF=1, drving change only when refresh cycle
    # [15]: DRDELSWEN=1, enable DQS input delay switching for different ranks
    # [8]: AUTOCALDRV=1, OCD calibration enable
    # [7:0]: AUTOKCNT, auto calibration counter
    # =RKCFG=
    # [7]: per-bank refresh for LPDDR2&3
    # TODO: [AC Timing] 0x004135C0
    set *($BASE_ADDR_DRAMC+0x0110) = 0x004121C0
    # =DQSCTL2=
    set *($BASE_ADDR_DRAMC+0x0118) = 0x00000002
    # =DQSGCTL=
    # [7:0] Old gating window course tune
    set $reg_val = *($BASE_ADDR_DRAMC+0x0124) & ~0x000000FF
    set *($BASE_ADDR_DRAMC+0x0124) = $reg_val
    # [31]: NEWDQSG_SEL, [30]:DQSGDUALP
    set $reg_val = *($BASE_ADDR_DDRPHY+0x0124) | 0xC0000000
    set *($BASE_ADDR_DDRPHY+0x0124) = $reg_val
    # =CLKCTRL=
    # [29]: CLK_EN_1, [28]: CLK_EN_0
    # TODO: we should only enable one CLK for TK6291
    set $reg_val = *($BASE_ADDR_DRAMC+0x0130) | 0x30000000
    set *($BASE_ADDR_DRAMC+0x0130) = $reg_val
    # =ARBCTL0=
    # [7:0]: maximum pending number to block the arbitration
    set $reg_val = *($BASE_ADDR_DRAMC+0x0168) & ~0x000000FF
    set $reg_val = $reg_val | 0x00000080
    set *($BASE_ADDR_DRAMC+0x0168) = $reg_val
    # =DQSCAL0=
    # [31]: DQS strobe calibration enable
    # [30]: Update tracking gating value to 2 ranks simultaneously
    # [15]: Rank0 DQS strobe calibration high-limit enable
    # [14:8]: Rank0 DQS strobe calibration high-limit value
    # [7]: Rank0 DQS strobe calibration low-limit enable
    # [6:0]: Rank0 DQS strobe calibration low-limit value
    set $reg_val = *($BASE_ADDR_DRAMC+0x01C0) & ~0xC000FFFF
    set $reg_val = $reg_val | 0x80000000
    set *($BASE_ADDR_DRAMC+0x01C0) = $reg_val
    # =MEMSYSPIPE_CGF_CTL=
    # [2]: PIPE_CFG_EN, [0]: DRAMC_CFG_EN
    # PIPE_CGF_ON=0 (timing issue) EMI_CGF_ON=0(Gated function is already designed in EMI) DRAMC_CGF_ON=1
    set *($BASE_ADDR_MEMSYSAOREG_MISC+0x5000) = 0x00000001
    # =DRAMC_PD_CTRL=
    # [24] REFFRERUN, using freerun clock to count refresh period
    # [23:16] REFCNT_FR_CLK, refresh period based on DRAMC freerun clock cycles
    # [15:8] TXREFCNT, tXSR
    if $CHIP_VER == 0
        set *($BASE_ADDR_DRAMC+0x01DC) = 0xC2002340
    else
        set *($BASE_ADDR_DRAMC+0x01DC) = 0xC3002340
    end
    # =LPDDR2_3=
    # TODO: should set to 0x10000000, not 0x3600_0000?
    # [31]: DRAM address decode by DRAMC
    # [28]: LPDDR2 enable
    # [27]: enable register output data by DRAMC
    set *($BASE_ADDR_DRAMC+0x01E0) = 0x36000000
    # [30]: Select IO O1 as output
    # [29&25:24&22:0]: DDR mode for pins
    # [26]: fast IO output enable
    set *($BASE_ADDR_DDRPHY+0x01E0) = 0x2601FFFF
    # =ACTIM1=
    set *($BASE_ADDR_DRAMC+0x01E8) = 0x81000510
    # =PERFCTL0=
    # [0] dual schedulers
    set *($BASE_ADDR_DRAMC+0x01EC) = 0x0010CF11
    # TODO: AC_DERATING [0x01F0]
    # =RRRATE_CTL=, =MRR_CTL=  # Or LPDDR3
    if $CHIP_VER == 0
        set *($BASE_ADDR_DRAMC+0x01F4) = 0x03020100
        set *($BASE_ADDR_DRAMC+0x01Fc) = 0x07060504
    else
        set *($BASE_ADDR_DRAMC+0x01F4) = 0x02030100
        set *($BASE_ADDR_DRAMC+0x01Fc) = 0x04060705
    end
    # =AC_TIME_05T=
    set *($BASE_ADDR_DRAMC+0x01F8) = 0x04002600
    # =LPDDR2_4=
    # clock 1x phase selection
    set *($BASE_ADDR_DDRPHY+0x023C) = 0x2201FFFF
    # =SELPH1=
    # TX 1x clock delay for CS1, RAS, CAS, WE, RESET, ODT, CKE, and CS
    set *($BASE_ADDR_DRAMC+0x0400) = 0x00000000
    # =SELPH2=
    # TX 1x clock delay for CKE1, DQSGATE_P1, CMD, DQSGATE, BA[2:0]
    if $CHIP_VER == 0
        set *($BASE_ADDR_DRAMC+0x0404) = 0x00302000
    else
        set *($BASE_ADDR_DRAMC+0x0404) = 0x00101000
    end
    # =SELPH3=
    # TX 1x clock delay for RA[7:0]
    set *($BASE_ADDR_DRAMC+0x0408) = 0x00000000
    # =SELPH4=
    # TX 1x clock delay for RA[15:8]
    set *($BASE_ADDR_DRAMC+0x040C) = 0x00000000
    # =SELPH5=
    # TX 0.5's 2x clock delay for CKE1, DQSGATE_P1, DQSGATE, BA[2:0], CS1, RAS, CAS, WE, RESET, ODT, CKE, CS
    if $CHIP_VER == 0
        set *($BASE_ADDR_DRAMC+0x0410) = 0x00955555
    else
        set *($BASE_ADDR_DRAMC+0x0410) = 0x57755555
    end
    # TODO: SELPH6 [0x0414]
    # =SELPH6_1=
    # TX 1x clock delay for DQSGATE_P1 and DQSGATE of rank1
    # TX 0.5's 2x clock delay for DQSGATE_P1 and DQSGATE of rank1
    set *($BASE_ADDR_DRAMC+0x0418) = 0x00000228
    # =SELPH7=
    # TX 1x clock delay for DQ byte output enable[3:0] and DQ byte[3:0]
    set *($BASE_ADDR_DRAMC+0x041C) = 0x11111111
    # =SELPH8=
    # TX 1x clock delay for DQM byte output enable[3:0] and DQM byte[3:0]
    set *($BASE_ADDR_DRAMC+0x0420) = 0x11111111
    # =SELPH9=
    # TX 1x clock delay for DQS byte output enable[3:0] and DQS byte[3:0]
    set *($BASE_ADDR_DRAMC+0x0424) = 0x11111111
    # =SELPH10=
    # TX 0.5's 2x clock delay for DQM output enable[3:0], DQ byte output enable[3:0], DQM[3:0], and DQ byte[3:0]
    # TODO: why we let output enable extra more 1.5 T not 0.5 DRAM clock?
    set *($BASE_ADDR_DRAMC+0x0428) = 0x0000FFFF
    # =SELPH11=
    # TX 0.5's 2x clock delay for DQS output enable[3:0] and DQS[3:0]
    # TODO: why we let output enable extra more 1.5 T not 0.5 DRAM clock?
    set *($BASE_ADDR_DRAMC+0x042C) = 0x000000FF
    # TODO: offset 0x430~0x438, Don't we need to set clock 05x phase selection?
    # =SELPH12=
    # clock 05x phase selection for CLK, DQSGATE, DQS[3:0], and DQM[3:0]
    # clock 1x phase selection for DQS[3:0], DQM[3:0], CLK, and DQSGATE
    set *($BASE_ADDR_DDRPHY+0x0430) = 0x10F010F0
    # =SELPH13=
    # clock 1x phase selection for DQ[31:0]
    set *($BASE_ADDR_DDRPHY+0x0434) = 0xFFFFFFFF
    # =SELPH14=
    # clock 05x phase selection for DQ[31:0]
    set *($BASE_ADDR_DDRPHY+0x0438) = 0xFFFFFFFF
    # =SELPH15=
    # OCV (On-Chip Variation that affect by PVT). It is removed in TK6291.
    # OCV mode for DQSGATE, DQS[3:0], DQ[31:0], CLK, and CA
    set *($BASE_ADDR_DDRPHY+0x043C) = 0x0000001F
    # =MEMPLL_DIVIDER=
    # DDRPHY reset flow for 1X clock phase sync
    # [5]: MEMCLKENB, SW control. It is used for MEMPLL initialization. After initialization, CLKENB is controlled by HW mode.
    # [4]: RG_DMSS_PWDB, ALLCLK_EN. It is used for gated MEMPLL output during initialization. (=1 after initilization)
    # [0]: MEMCLKENB_SEL, memory clock sync enable bar selection, selection for [5] (=1 select[5])
    if $CHIP_VER != 0
        set $reg_val = *($BASE_ADDR_DDRPHY+0x0640) | 0x00000031
        set *($BASE_ADDR_DDRPHY+0x0640) = $reg_val
    end
    # TODO: wait 500 sys_clock equal to 1.87us?
    #WAIT 2.us
    delay_f32k 1
    LPDDR2_INIT
    if $CHIP_VER == 0
        # =CONF2=
        set *($BASE_ADDR_DRAMC+0x0008) = 0x0000631F
        # =DRAMC_PD_CTRL=
        #set $reg_val = *($BASE_ADDR_DRAMC+0x01DC) & ~0x00FF0000
        #set $reg_val = $reg_val | 0x00350000
        #set *($BASE_ADDR_DRAMC+0x01DC) = $reg_val
    else
        # =CONF2=
        # [23]   FREBW_FREN, tREFBW use xtal clock counter enable
        # [17:8] FREBW_FR, 6720ns/(XTALFR_clock)-1
        # [7:0] REFCNT: AC Timing Calculation is 0x3F, but ESL use 0x3B
        # TODO: [AC Timing] 0x0000003F
        set *($BASE_ADDR_DRAMC+0x0008) = 0x03806D3B
        # =DRAMC_PD_CTRL=
        # [23:16] REFCNT_FR_CLK, refresh period based on DRAMC freerun clock cycles
        set $reg_val = *($BASE_ADDR_DRAMC+0x01DC) & ~0x00FF0000
        set $reg_val = $reg_val | 0x00640000
        set *($BASE_ADDR_DRAMC+0x01DC) = $reg_val
    end
end

define EMI_INIT
    echo EMI_INIT ...\n
    # =EMI_CONA=
    # [27]: RANK_POS=0, {rank,row,bank,col}
    # [17]: DUAL_RANK_EN=0
    # [15:14][13:12]: ROW2ND=1,ROW=1, 14-bit row address
    # [7:6][5:4]: COL2ND=1,COL=1, 10-bit column address
    # [1]: DW32_EN=1, 32-bit data bus
    set *($BASE_ADDR_EMI+0x0000) = 0x00005052
    # =EMI_ARBI=
    set *($BASE_ADDR_EMI+0x0140) = 0x20406188
    # =EMI_ARBI_2ND=
    set *($BASE_ADDR_EMI+0x0144) = 0x20406188
    # =EMI_ARBD=
    set *($BASE_ADDR_EMI+0x0118) = 0x0700704C
    # =EMI_ARBE=
    set *($BASE_ADDR_EMI+0x0120) = 0x40407068
    # =EMI_ARBG=
    set *($BASE_ADDR_EMI+0x0130) = 0xFFFF7045
    # =EMI_ARBH=
    set *($BASE_ADDR_EMI+0x0138) = 0xA0A07047
    # TODO: CSR is not defined?
    set *($BASE_ADDR_EMI+0x0040) = 0x80808807
    # =EMI_ARBJ=
    # TODO: it is not defined in CSRv0.9
    set *($BASE_ADDR_EMI+0x0148) = 0x9719595E
    # =EMI_ARBJ_2ND=
    # TODO: it is not defined in CSRv0.9
    set *($BASE_ADDR_EMI+0x014C) = 0x9719595E
    # =EMI_TEST_D=
    set *($BASE_ADDR_EMI+0x00F8) = 0x00000000
    # =EMI_BMEN=
    # TODO: why do we need to enable BUS_MON_EN for DRAM Init?
    set *($BASE_ADDR_EMI+0x0400) = 0x00FF0001
    # =EMI_CONB=
    set *($BASE_ADDR_EMI+0x0008) = 0x17283544
    # =EMI_CONC=
    set *($BASE_ADDR_EMI+0x0010) = 0x0A1A0B1A
    # TODO: offset 0x18 is not defined in CSR.
    set *($BASE_ADDR_EMI+0x0018) = 0x00000000
    # =EMI_CONE=
    # TODO: it is not defined in CSRv0.9
    set *($BASE_ADDR_EMI+0x0020) = 0xFFFF0848
    # =EMI_CONG=
    set *($BASE_ADDR_EMI+0x0030) = 0x2B2B2A38
    # =EMI_CONH=
    set *($BASE_ADDR_EMI+0x0038) = 0x00000000
    # =EMI_SLCT=
    # TODO: Why do we enable [17]:M1_LLAT_EN?
    set *($BASE_ADDR_EMI+0x0158) = 0xFF02FF00
    # =EMI_MDCT=
    # TODO: why don't we enable [14]:MDMCU_SBR_EN and [12]:ULTRA_SBR_EN?
    set *($BASE_ADDR_EMI+0x0078) = 0x002F0C17
    # TODO: it is not defined in CSR.
    set *($BASE_ADDR_EMI+0x015C) = 0x80030303
    # =EMI_EMI_ARBK=
    # TODO: it only defines [23:16] in CSRv0.9
    set *($BASE_ADDR_EMI+0x0150) = 0x64F3FC79
    # =EMI_ARBK_2ND=
    # TODO: it is not defined in CSRv0.9
    set *($BASE_ADDR_EMI+0x0154) = 0x64F3FC79
    # =EMI_TESTC=
    # TODO: it only enables [16:8] in CSRv0.9
    set *($BASE_ADDR_EMI+0x00F0) = 0x38470000
    # =EMI_TESTB=
    # TODO: it didn't define [2:0] in CSRv0.9
    set *($BASE_ADDR_EMI+0x00E8) = 0x00020027
    # Enable slave error
    set *($BASE_ADDR_EMI+0x01C0) = 0x10000000
    set *($BASE_ADDR_EMI+0x01C8) = 0x10000000
    set *($BASE_ADDR_EMI+0x01D0) = 0x10000000
    set *($BASE_ADDR_EMI+0x0200) = 0x10000000
    set *($BASE_ADDR_EMI+0x02C0) = 0x10000000
    set *($BASE_ADDR_EMI+0x02C8) = 0x10000000
    set *($BASE_ADDR_EMI+0x02D0) = 0x10000000
    set *($BASE_ADDR_EMI+0x0300) = 0x10000000
    # =EMI_CONM=
    # [10]: EMI_ENABLE=1
    set *($BASE_ADDR_EMI+0x0060) = 0x000006B8
    # =EMI_ARBP=
    # EBM_MODE enable
    set *($BASE_ADDR_EMI+0x0A20) = 0x00010000
end

define MEMSYS_INIT
    echo MEMSYS_INIT ...\n
    # =MEMINFRA_SI_WAY_CTL=
    # Enable MEMINFRA EMI Path
    # [9:8] M7_sysram:M7_emi
    # [7:6] M6_sysram:M6_emi
    # [5:4] M4_mdmda_sysram:M4_mddma_emi
    # [3:2] M4_l1sys_sysram:M4_l1sys_emi
    # [1:0] M3_sysram:M3_emi
    set $reg_val = *($BASE_ADDR_MEMSYSAOREG_MISC+0x4000)
    set $reg_val = $reg_val | 0x00000155
    set *($BASE_ADDR_MEMSYSAOREG_MISC+0x4000) = $reg_val
    # =EMI_ADDR_OFFSET=
    # EMI offset on address[31:24], unit is 16MB
    set $MD3_offset = 0x00
    set $MD2_offset = 0x00
    set $MD1_offset = 0x10
    set $ap_offset  = 0x00
    set $emi_offset = ($MD3_offset<<0x18)+($MD2_offset<<0x10)+($MD1_offset<<0x08)+($ap_offset<<0x00)
    set *($BASE_ADDR_MEMSYSAOREG_MISC+0x1000) = $emi_offset
end

define LPDDR2_INIT
    # =PADCTL4=
    # [2]: CKE always on, [0]: CKE control by controller
    # CKE always on
    set $reg_val = *($BASE_ADDR_DRAMC+0x00E4) | 0x00000005
    set *($BASE_ADDR_DRAMC+0x00E4) = $reg_val
    #WAIT 200.us
    delay_f32k 7
    # LPDDR2 MRW RESET
    DRAMC_MRW 0x0000003F
    #WAIT 10.us
    delay_f32k 1
    # ZQ Init
    DRAMC_MRW 0x00FF000A
    # TODO: wait 1us after ZQ Initialization
    #WAIT 1.us
    delay_f32k 1
    # MRW MR1 => BL8, Sequential, Wrap, nWR=8
    DRAMC_MRW 0x00C30001
    # MRW MR2 => RL=8 and WL=4 for DDR1066
    DRAMC_MRW 0x00060002
    # MRW MR3 => 40-ohm typical
    DRAMC_MRW 0x00020003
    # =PADCTL4=
    # [2]: CKE always on, [0]: CKE control by controller
    # CKE is controlled by hardware
    set $reg_val = *($BASE_ADDR_DRAMC+0x00E4) & ~0x00000004
    set *($BASE_ADDR_DRAMC+0x00E4) = $reg_val
end

define DRAMC_MRW
    set $spcmd = 0x00000001
    set *($BASE_ADDR_DRAMC+0x0088) = $arg0
    set *($BASE_ADDR_DRAMC+0x01E4) = $spcmd
    while (*($BASE_ADDR_DRAMC+0x03B8) & $spcmd) != $spcmd
    end
    set *($BASE_ADDR_DRAMC+0x01E4) = 0x00000000
    while (*($BASE_ADDR_DRAMC+0x03B8) & $spcmd) != 0x00000000
    end
end

define DRAM_TEST
    # 0x0:infinite-loop# others:loop-N-times
    set $TEST_LOOP   = 0x2
    # 0x0:config-and-start# others:bit-0:start,bit-1:pause,bit-2:resume.
    set $TEST_CTRL   = 0x0
    # 0x0:pass# others:fail
    set $TEST_RESULT = 0x0
    # TRFG 0~3 offset 0x100
    set $TRFG_BASE   = 0xC3041000

    if $TEST_CTRL != 0x0
        set *(TRFG_BASE+0x000) = $TEST_CTRL
        set *(TRFG_BASE+0x100) = $TEST_CTRL
        set *(TRFG_BASE+0x200) = $TEST_CTRL
        set *(TRFG_BASE+0x300) = $TEST_CTRL
        #ENDDO
    end

    # Config and start
    echo TRFG config and start ...\n
    set $idx = 0x0
    while $idx < 0x4
        set $base      = $TRFG_BASE + 0x100 * $idx
        set $start_addr= 0x04000000 * $idx
        set $pat_ctl   = 0x58FF0017 + (($TEST_LOOP & 0xF) << 8)
        # TRFG_STRAT_CTL, [0]:start, [1]:pause, [2]:resume
        set *($base+0x00) = 0x00000000
        # TRFG_INIT_PAT_MSB
        set *($base+0x04) = 0x5A5A5A5A
        # TRFG_INIT_PAT_LSB
        set *($base+0x08) = 0xA5A5A5A5
        # TRFG_START_ADDR
        set *($base+0x0C) = $start_addr
        # TRFG_TEST_LEN * 8 byte
        set *($base+0x10) = 0x00800000
        # TRFG_PAT_CTL, [11:8]:test_loop, [5:4]:pat_mode
        set *($base+0x14) = $pat_ctl
        # TRFG_BUS_CTL, [10:8]:domain, [3:0]:burst_len
        set *($base+0x18) = 0x0000010F
        # TRFG_STRAT_CTL, [0]:start, [1]:pause, [2]:resume
        set *($base+0x00) = 0x00000001
        set $idx++
    end

    # Wait done
    echo Wait done
    set $idx = 0x0
    while $idx < 0x4
        set $base = $TRFG_BASE + 0x100 * $idx
        while (*($base+0x20) & 0x1) == 0x1
           echo .\n
           #WAIT 1.S
           delay_f32k 32000
        end
        if (*($base+0x20) & 0x04) == 0x0
            set $TEST_RESULT++
            printf "=> TRFG %d test fail:\n", $idx
            printf "FAIL_ADDR     = 0x%08x\n", *($base+0x24)
            printf "EXP_DATA_MSB  = 0x%08x\n", *($base+0x28)
            printf "EXP_DATA_LSB  = 0x%08x\n", *($base+0x2C)
            printf "FAIL_DATA_MSB = 0x%08x\n", *($base+0x30)
            printf "FAIL_DATA_LSB = 0x%08x\n", *($base+0x34)
        end
        set $idx++
    end

    if $TEST_RESULT == 0x0
        echo => Traffic-Gen dram test pass ...^_^\n
    else
        echo => Traffic-Gen dram test fail ...>^<\n
    end
end

define WDT_Disable
    echo WDT_Disable ...\n
    set $mdrgu = 0xA00F0000 + 0x0100
    set $aprgu = 0xC3670000 + 0x0100
    set *$mdrgu = 0x55000000 | (*$mdrgu & ~0x03)
    set *$aprgu = 0x55000000 | (*$aprgu & ~0x01)
end

define MIPS_INIT
    echo MIPS_INIT ...\n
    set *0x1F000020 = 0x0000000F
    set *0x1F000090 = 0xA0000000
    set *0x1F000098 = 0xE0000002
    set *0x1F0000A0 = 0xC0000000
    set *0x1F0000A8 = 0xC0000002
    # fixed md mips domain ID hw bug
    set *0xA0060060 = 0x03231111
end

# entry point
set $f32k_str = *0xa00d0850
MIPS_INIT
WDT_Disable
DRAM_INIT
set $f32k_end = *0xa00d0850
printf "Elapsed time: %.3f sec\n", ($f32k_end - $f32k_str) / 32.768 / 1000
