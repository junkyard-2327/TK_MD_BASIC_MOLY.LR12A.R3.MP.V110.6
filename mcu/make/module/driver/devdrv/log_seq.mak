##############################################################################
#                             log_seq                                        #
##############################################################################
SRC_LIST  += ${COMMON_ROOT}/driver/devdrv/log_seq/src/logseq_drv.c

SRC_PATH  += ${COMMON_ROOT}/driver/devdrv/log_seq/src

INC_DIR   += ${COMMON_ROOT}/driver/devdrv/common/inc \
				${COMMON_ROOT}/driver/devdrv/log_seq/inc \
				${COMMON_ROOT}/interface/driver/devdrv/log_seq

#ifeq ($(strip $(COMPILER)),GCC)
#	CFLAGS += -Werror
#endif

