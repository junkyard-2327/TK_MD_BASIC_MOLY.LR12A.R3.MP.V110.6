# Define source file lists to SRC_LIST
# in this case there should be only ft_main.c is compiled
# keep ft_create for kal config
# if !defined(__FACTORY_BIN__) && defined(__SPLIT_BINARY__)
FACTORY_BIN_COMBINATION = __SPLIT_BINARY__ __FACTORY_BIN__
ifeq ($(filter $(FACTORY_BIN_COMBINATION), $(strip $(MODULE_DEFS))), __SPLIT_BINARY__)
SRC_LIST = ${CORE_ROOT}/middleware/meta/ft/src/ft_dummy.c
else
SRC_LIST = ${CORE_ROOT}/middleware/meta/ft/src/ft_main.c \
           ${CORE_ROOT}/middleware/meta/ft/src/ft_mem.c \
           ${CORE_ROOT}/middleware/meta/ft/src/ft_report.c \
           ${CORE_ROOT}/middleware/meta/ft/src/ft_fnc.c \
           ${CORE_ROOT}/middleware/meta/ft/src/ft_fnc_l1rf.c \
           ${CORE_ROOT}/middleware/meta/ft/src/ft_fnc_misc.c \
           ${CORE_ROOT}/middleware/meta/ft/src/ft_fnc_nvram.c \
           ${CORE_ROOT}/middleware/meta/ft/src/ft_fnc_nvram_sec.c \
           ${CORE_ROOT}/middleware/meta/ft/src/ft_fnc_fat.c \
           ${CORE_ROOT}/middleware/meta/ft/src/ft_fnc_custom.c \
           ${CORE_ROOT}/middleware/meta/ft/src/ft_fnc_misc_ex.c \
           ${CORE_ROOT}/middleware/meta/ft/src/ft_fnc_util.c \
           ${CORE_ROOT}/middleware/meta/ft/src/ft_fnc_mmrf.c \
           ${CORE_ROOT}/middleware/meta/ft/src/ft_fnc_l4.c
# Define optional source file
ifneq ($(filter __UMTS_RAT__, $(strip $(MODULE_DEFS))),)
ifneq ($(filter __MTK_UL1_FDD__, $(strip $(MODULE_DEFS))),)
SRC_LIST    += ${CORE_ROOT}/middleware/meta/ft/src/ft_fnc_wcdma.c
endif
endif

ifneq ($(filter __UMTS_TDD128_MODE__, $(strip $(MODULE_DEFS))),)
ifneq ($(filter __AST_TL1_TDD__, $(strip $(MODULE_DEFS))),)
SRC_LIST    += ${CORE_ROOT}/middleware/meta/ft/src/ft_fnc_aux.c
endif
endif

ifneq ($(filter __LTE_RAT__, $(strip $(MODULE_DEFS))),)
SRC_LIST    += ${CORE_ROOT}/middleware/meta/ft/src/ft_fnc_lterf.c
endif

ifneq ($(filter __C2K_RAT__, $(strip $(MODULE_DEFS))),)
SRC_LIST    += ${CORE_ROOT}/middleware/meta/ft/src/ft_fnc_c2krf.c
endif

endif
#  Define include path lists to INC_DIR
INC_DIR = ${COMMON_ROOT}/interface/middleware/meta \
          ${COMMON_ROOT}/interface/service/sst \
          ${COMMON_ROOT}/interface/service/dhl \
          ${CORE_ROOT}/modem/l4/include \
          ${CORE_ROOT}/middleware/meta/ft/inc \
          ${CORE_ROOT}/middleware/media/audio/include \
          ${COMMON_ROOT}/driver/che/include \
          ${COMMON_ROOT}/interface/modem/l1/gsm/external \
          ${COMMON_ROOT}/interface/modem/l1/lte/external \
          ${COMMON_ROOT}/interface/modem/l1/mml1/external \
          ${CORE_ROOT}/modem/interface/l4misc \
          ${CORE_ROOT}/modem/interface/general \
          ${COMMON_ROOT}/interface/service/sys_svc

# Non-MODEM BSP include path

# Define the specified compile options to COMP_DEFS
COMP_DEFS = 

# Define the source file search paths to SRC_PATH
SRC_PATH = ${CORE_ROOT}/middleware/meta/ft/src
