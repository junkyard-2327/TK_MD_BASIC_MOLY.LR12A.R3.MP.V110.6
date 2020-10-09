# Define source file lists to SRC_LIST
SRC_LIST = ${COMMON_ROOT}/service/hif/ubm/src/ubm.cpp           \
           ${COMMON_ROOT}/service/hif/ubm/src/ubm_drb.cpp       \
           ${COMMON_ROOT}/service/hif/ubm/src/ubm_fhb.cpp       \
           ${COMMON_ROOT}/service/hif/ubm/src/ubm_nfhb.cpp      \
           ${COMMON_ROOT}/service/hif/ubm/src/ubm_ul_meta.cpp   \
           ${COMMON_ROOT}/service/hif/ubm/src/ubm_vrb.cpp       \
           ${COMMON_ROOT}/service/hif/ubm/src/ubm_xit.cpp

ifdef UBM_UT
ifeq ($(strip $(UBM_UT)), TRUE)
    SRC_LIST += ${COMMON_ROOT}/service/hif/ubm/src/ubm_ut.c 
endif
endif

#  Define include path lists to INC_DIR
INC_DIR = ${COMMON_ROOT}/interface/service/hif              \
          $(COMMON_ROOT)/interface/service/hif/hiflibplus   \
		  ${COMMON_ROOT}/service/hif/ubm/include            \
		  ${COMMON_ROOT}/service/hif/interface              \
          ${COMMON_ROOT}/interface/driver/lhifcore          \
          ${COMMON_ROOT}/interface/middleware/hif           \
          ${COMMON_ROOT}/interface/driver/hif               \
          ${COMMON_ROOT}/interface/service/prbm             \
          ${COMMON_ROOT}/interface/service/qmu_bm
 
# Define the specified compile options to COMP_DEFS

# Define the source file search paths to SRC_PATH
SRC_PATH = ${COMMON_ROOT}/service/hif/ubm/src
