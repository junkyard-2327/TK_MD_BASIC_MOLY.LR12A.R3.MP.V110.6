# Define source file lists to SRC_LIST
SRC_LIST = ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimBpi.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimBsi.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimCdGn.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimCgi.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimCmbnr.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimCntr.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimCs4.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimDcxoSrchr.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimDftc.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimDtDmp.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimERx.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimETx.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimHaPlusAdapter.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimHsCe.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimHsRx.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimHsTx.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimHwCmmn.h \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimHwDfn.h \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimHwFnct.h \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimHwMisc.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimHwPublic.h\
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimHwTypes.h \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimHwUtil.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimIRatChkr.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimMs3.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimPac.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimPll.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimRake.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimRf.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimRfMt6159B.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimRfMt6159C.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimRfMt6160.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimRfMt6162.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimRfMt6162Dual.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimRfOrionHplus.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimRfPmic.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimRfSmarti3G.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimRfSonyCxa3359.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimRxAmp.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimRxBfe.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimRxBrp.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimRxBrpPhCh.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimRxSrp.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimSclrTmr.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimSdGn.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimSlwClk.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimSrchrTmr.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimSta.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimSysTmr.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimTrk.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimTxBrp.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimTxBrpDt.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimTxCrp.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/uvrf/src/uvrf_bridge.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/uvrf/src/uvrf_bridge_task.c \
           ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/UsimUSCntr.c

# Define include path lists to INC_DIR
INC_DIR = ${CORE_ROOT}/modem/smt/uesim_lte/xsim_framework/generic/intf \
          ${CORE_ROOT}/modem/smt/uesim_lte/xsim_platform/mt6208 \
          ${CORE_ROOT}/modem/smt/uesim_lte/xsim_platform/mt6208/rf \
          ${CORE_ROOT}/modem/smt/uesim_lte/gsim_nw/intf \
          ${CORE_ROOT}/modem/smt/uesim_lte/gsim_hw/intf \
          ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/uvrf/intf \
          ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw/uvrf/src \
          ${CORE_ROOT}/modem/smt/uesim_lte/usim_nw \
          ${CORE_ROOT}/modem/smt/uesim_lte/xsim_generic/uegw2/intf \
          ${CORE_ROOT}/modem/smt/uesim_lte/xsim_generic/uegw2/src \
          ${CORE_ROOT}/modem/smt/uesim_lte/xsim_generic/xcomm/intf \
          ${CORE_ROOT}/modem/smt/uesim_lte/xsim_generic/aos/intf \
          ${CORE_ROOT}/modem/smt/uesim_lte/usim_nw/mns_u_airctrl/intf \
          ${L1CORE_ROOT}/modem/gl1/common \
          ${L1CORE_ROOT}/modem/gl1/interface \
          ${L1CORE_ROOT}/modem/gl1/l1c \
          ${L1CORE_ROOT}/modem/gl1/l1d \
          ${L1CORE_ROOT}/modem/gl1/l1d_ext \
          ${COMMON_ROOT}/modem/interface/l1/gsm \
          ${COMMON_ROOT}/modem/interface/l1/inner \
    ${L1CORE_ROOT}/modem/interface/l1/inner \
    ${CORE_ROOT}/modem/interface/l1/inner \
          ${L1CORE_ROOT}/modem/md_sm/l1sm \
          ${L1CORE_ROOT}/modem/md_sm/common/l1sm \
          ${COMMON_ROOT}/driver/peripheral/inc

# Define the specified compile options to COMP_DEFS
COMP_DEFS = __ESIM_3G_HWSIM_DATA_PATH_ENABLE__ \
            __ESIM_3G_HWSIM_ASSERT_DISABLE__ \
            INTEGER_SIM_TIME \
            L1_SIM \
            L1D_SIM \
            REG_MAY_NOT_EXIST \
            AFC_13bit \
            CH_RF_TEST \
            __HYPER_SLEEP_MODE_CHIP__ \
            USE_WAKEUP_INT \
            MEM_CHECK_ON \
            __HSPA_PLUS_SIM__ \
            MT6326 \
            TRACING_SUPPORT

# Define the source file search paths to SRC_PATH
SRC_PATH = ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw
