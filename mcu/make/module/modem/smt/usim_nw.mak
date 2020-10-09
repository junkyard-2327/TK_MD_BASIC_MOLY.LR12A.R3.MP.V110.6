# Define source file lists to SRC_LIST
SRC_LIST = ${CORE_ROOT}/modem/smt/uesim_lte/usim_nw/UsimBchCctrchUeSim.c \
 					 ${CORE_ROOT}/modem/smt/uesim_lte/usim_nw/UsimCctrchUeSim.c \
	 				 ${CORE_ROOT}/modem/smt/uesim_lte/usim_nw/UsimCmmn.h \
					 ${CORE_ROOT}/modem/smt/uesim_lte/usim_nw/UsimDfn.h \
					 ${CORE_ROOT}/modem/smt/uesim_lte/usim_nw/UsimDump_UL1C.h \
					 ${CORE_ROOT}/modem/smt/uesim_lte/usim_nw/UsimFnct.h \
					 ${CORE_ROOT}/modem/smt/uesim_lte/usim_nw/UsimFnctStub.c \
					 ${CORE_ROOT}/modem/smt/uesim_lte/usim_nw/UsimMisc.c \
					 ${CORE_ROOT}/modem/smt/uesim_lte/usim_nw/UsimScnnr.c \
					 ${CORE_ROOT}/modem/smt/uesim_lte/usim_nw/UsimScnnr_UL1C.h \
					 ${CORE_ROOT}/modem/smt/uesim_lte/usim_nw/UsimTypes.h \
					 ${CORE_ROOT}/modem/smt/uesim_lte/usim_nw/UsimUlCctrchUeSim.c \
					 ${CORE_ROOT}/modem/smt/uesim_lte/usim_nw/UsimUtil.c

# Define include path lists to INC_DIR
INC_DIR = ${CORE_ROOT}/modem/smt/uesim_lte/xsim_framework/generic/intf \
          ${CORE_ROOT}/modem/smt/uesim_lte/usim_nw \
          ${CORE_ROOT}/modem/smt/uesim_lte/usim_hw \
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
          ${L1CORE_ROOT}/modem/md_sm/common/l1sm

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
SRC_PATH = ${CORE_ROOT}/modem/smt/uesim_lte/usim_nw
