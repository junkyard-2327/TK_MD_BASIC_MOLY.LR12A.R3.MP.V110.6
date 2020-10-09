# Define source file lists to SRC_LIST
SRC_LIST = ${COMMON_ROOT}/driver/storage/sim/src/dcl_sim.c \
		   ${COMMON_ROOT}/driver/storage/sim/src/icc_sim_common_mtk.c \
		   ${COMMON_ROOT}/driver/storage/sim/src/icc_switchControl0.c \
		   ${COMMON_ROOT}/driver/storage/sim/src/icc_switchControl1.c \
		   ${COMMON_ROOT}/driver/storage/sim/src/icc_switchControl2.c \
		   ${COMMON_ROOT}/driver/storage/sim/src/icc_switchControl_al.c \
		   ${COMMON_ROOT}/driver/storage/sim/src/icc_switchControl_mtk_0.c \
		   ${COMMON_ROOT}/driver/storage/sim/src/icc_switchControl_mtk_1.c \
		   ${COMMON_ROOT}/driver/storage/sim/src/MT6302_SPI.c



#  Define include path lists to INC_DIR
INC_DIR = ${COMMON_ROOT}/driver/drv/include \
          ${COMMON_ROOT}/driver/storage/sim/inc \
          ${COMMON_ROOT}/service/sst/include \
          ${COMMON_ROOT}/service/ssf/inc \
		  ${COMMON_ROOT}/interface/driver/regbase


# Define the specified compile options to COMP_DEFS
COMP_DEFS =

# Define the source file search paths to SRC_PATH
SRC_PATH = ${COMMON_ROOT}/driver/storage/sim/src

