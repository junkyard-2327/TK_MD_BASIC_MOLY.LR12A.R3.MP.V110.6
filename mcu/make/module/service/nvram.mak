# Define source file lists to SRC_LIST
SRC_LIST = ${COMMON_ROOT}/service/nvram/src/nvram_factory_config.c \
           ${COMMON_ROOT}/service/nvram/src/nvram_handler_read.c \
           ${COMMON_ROOT}/service/nvram/src/nvram_handler_reset.c \
           ${COMMON_ROOT}/service/nvram/src/nvram_handler_startup.c \
           ${COMMON_ROOT}/service/nvram/src/nvram_handler_write.c \
		   ${COMMON_ROOT}/service/nvram/src/nvram_handler_monitor.c \
           ${COMMON_ROOT}/service/nvram/src/nvram_drval_fat.c \
           ${COMMON_ROOT}/service/nvram/src/nvram_ilm.c \
           ${COMMON_ROOT}/service/nvram/src/nvram_io.c \
           ${COMMON_ROOT}/service/nvram/src/nvram_ltable.c \
           ${COMMON_ROOT}/service/nvram/src/nvram_main.c \
           ${COMMON_ROOT}/service/nvram/src/nvram_multi_folder.c \
           ${COMMON_ROOT}/service/nvram/src/nvram_interface.c \
           ${COMMON_ROOT}/service/nvram/src/nvram_l1def.c \
           ${COMMON_ROOT}/service/nvram/src/nvram_util.c \
           ${COMMON_ROOT}/service/nvram/src/nvram_el1def.c \
           ${COMMON_ROOT}/service/nvram/src/nvram_mml1def.c \
           ${COMMON_ROOT}/service/nvram/src/nvram_tl1def.c	\
           ${COMMON_ROOT}/service/nvram/src/nvram_ltable_register.c	


ifneq ($(filter __NVRAM_PSEUDO_MERGE__, $(strip $(MODULE_DEFS))),)
	SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_pseudo_merge.c
endif
ifneq ($(filter __NVRAM_OTP__, $(strip $(MODULE_DEFS))),)
	SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_ex_io.c
endif
ifneq ($(filter __CUSTOMER_TC01_DISK__, $(strip $(MODULE_DEFS))),)
	ifneq ($(filter __MTK_UL1_FDD__, $(strip $(MODULE_DEFS))),)
		SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_ex_io.c
	endif	
endif
ifneq ($(filter __SYSDRV_BACKUP_DISK__, $(strip $(MODULE_DEFS))),)
	SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_ex_io.c
endif

ifneq ($(filter __SYSDRV_BACKUP_DISK_FAT__, $(strip $(MODULE_DEFS))),)
	SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_ex_io.c
endif

ifneq ($(filter __NVRAM_UT_TEST__, $(strip $(MODULE_DEFS))),)
	SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_ex_io.c
endif

ifneq ($(filter __SYSDRV_BACKUP_DISK_RAW__, $(strip $(MODULE_DEFS))),)
	SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_ex_io.c
	SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_msg_handler.c
endif
ifneq ($(filter __SECURE_DATA_STORAGE__, $(strip $(MODULE_DEFS))),)
	SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_ex_io.c
	SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_msg_handler.c
endif

ifneq ($(filter __CCCIFS_SUPPORT__, $(strip $(MODULE_DEFS))),)
	ifneq ($(filter __MODEM_CARD__, $(strip $(MODULE_DEFS))),)
		SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_ex_io.c 
		SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_msg_handler.c
	endif	
endif

ifneq ($(filter __UMTS_RAT__, $(strip $(MODULE_DEFS))),)
  ifneq ($(filter __MTK_UL1_FDD__, $(strip $(MODULE_DEFS))),)
    SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_ul1def.c
  endif
endif

ifneq ($(filter __C2K_RAT__, $(strip $(MODULE_DEFS))),)
  SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_cl1def.c
endif

ifneq ($(filter __NVRAM_COMPRESS_SUPPORT__, $(strip $(MODULE_DEFS))),)
  SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_unzip.c
endif

ifneq ($(filter __SYSDRV_BACKUP_DISK__, $(strip $(MODULE_DEFS))),)
  SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_msg_handler.c
endif

ifneq ($(filter __CUSTOMER_TC01_DISK__, $(strip $(MODULE_DEFS))),)
  SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_msg_handler.c
endif

ifneq ($(filter __SECURE_DATA_STORAGE__, $(strip $(MODULE_DEFS))),)
  SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_msg_handler.c
endif

ifneq ($(filter TST_HANDLER, $(strip $(MODULE_DEFS))),)
  SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_handler_tst.c
endif

ifneq ($(filter __NVRAM_UNIT_TEST__, $(strip $(MODULE_DEFS))),)
  SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_tst.c
endif

ifneq ($(filter __NVRAM_UT_TEST__, $(strip $(MODULE_DEFS))),)
  SRC_LIST    += ${COMMON_ROOT}/service/nvram/src/nvram_ut_test.c
endif



# ifneq ($(filter __XXX__, $(strip $(MODULE_DEFS))),)
#	SRC_LIST += xxxx\xxxxx\AAA.c
# endif
# ifeq ($(strip $(NAND_SUPPORT)),FALSE)
#                SRC_LIST += xxxx
# endif

# Define include path lists to INC_DIR
INC_DIR = ${COMMON_ROOT}/service/nvram/include \
          ${COMMON_ROOT}/driver/drv/include \
          ${CORE_ROOT}/interface/modem/general	\
          ${CORE_ROOT}/custom/middleware/common
# Define the specified compile options to COMP_DEFS
COMP_DEFS =

# Define the source file search paths to SRC_PATH
SRC_PATH = ${COMMON_ROOT}/service/nvram/src

COMP_DEFS += CURR_MODULE=MOD_$(strip $(call Upper,$(COMPONENT))) 

