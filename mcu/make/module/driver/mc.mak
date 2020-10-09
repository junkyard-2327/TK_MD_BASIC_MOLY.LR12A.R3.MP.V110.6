# Define source file\ lists to SRC_LIST
    SRC_LIST += ${COMMON_ROOT}/driver/storage/mc/src/dcl_memory_card.c \
    		   ${COMMON_ROOT}/driver/storage/mc/src/msdc.c \
    		   ${COMMON_ROOT}/driver/storage/mc/src/usbms_msdc.c
    ifneq ($(filter __MSDC2_SD_MMC__, $(strip $(COM_DEFS))),)
        SRC_LIST    += ${COMMON_ROOT}/driver/storage/mc/src/msdc_fake_kal.c \
    		    ${COMMON_ROOT}/driver/storage/mc/src/msdc2.c \
    		    ${COMMON_ROOT}/driver/storage/mc/src/sdio_drv.c \
        	    #driver/storage/mc/src/msdc_test.c
    endif
## SD/MMC memory card select.
    ifneq ($(filter __MSDC_SD_MMC__, $(strip $(MODULE_DEFS))),)
        SRC_LIST    += ${COMMON_ROOT}/driver/storage/mc/src/sd.c \
                    ${COMMON_ROOT}/driver/storage/mc/src/sd_drv.c
        ifneq ($(filter __MSDC2_SD_MMC__, $(strip $(COM_DEFS))),)
            SRC_LIST    += ${COMMON_ROOT}/driver/storage/mc/src/sd2.c \
                        ${COMMON_ROOT}/driver/storage/mc/src/sd_drv2.c \
                        ${COMMON_ROOT}/driver/storage/mc/src/sd_adap.c
        endif
    endif



#  Define include path lists to INC_DIR
INC_DIR += ${COMMON_ROOT}/driver/drv/include \
          ${COMMON_ROOT}/interface/driver/drv_def \
          ${COMMON_ROOT}/driver/storage/mc/inc \
          ${COMMON_ROOT}/service/sst/include \
          ${COMMON_ROOT}/interface/driver/regbase \
          ${COMMON_ROOT}/service/fs/common/include \
          ${COMMON_ROOT}/driver/sys_drv/cache/inc \
          $(strip $(PROJDIR))/custom/driver/drv_gen 
          
# Define the specified compile options to COMP_DEFS
COMP_DEFS +=

# Define the source file search paths to SRC_PATH
SRC_PATH += ${COMMON_ROOT}/driver/storage/mc/src

