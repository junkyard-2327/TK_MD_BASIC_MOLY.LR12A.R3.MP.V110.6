##############################################################
# Define bootloader folder path
##############################################################

# Define source file lists to SRC_LIST
           
ifneq ($(filter __SV5_ENABLED__ __SV5X_ENABLED__,$(strip $(MODULE_DEFS))),)
SRC_LIST = ${COMMON_ROOT}/service/sss/components/src/SSS_secure_shared_v5.c \
           ${COMMON_ROOT}/service/sss/components/crypto/src/br_crypto_common.c \
           ${COMMON_ROOT}/service/sss/components/crypto/src/br_crypto_drv.c \
           ${COMMON_ROOT}/service/sss/components/crypto/src/br_crypto_drv_M1_RSA.c \
           ${COMMON_ROOT}/service/sss/components/crypto/src/br_crypto_drv_SEJ_AES_HW.c \
           ${COMMON_ROOT}/service/sss/components/crypto/src/br_crypto_drv_SEJ_AES_SW.c \
           ${COMMON_ROOT}/service/sss/components/crypto/src/br_crypto_drv_SHA256_SW.c \
           ${COMMON_ROOT}/service/sss/components/crypto/src/br_crypto_lib.c \
           ${COMMON_ROOT}/service/sss/components/crypto/src/br_crypto_scheme.c \
           ${COMMON_ROOT}/service/sss/components/crypto/src/br_sd_crypto.c \
           ${COMMON_ROOT}/service/sss/components/crypto/src/br_M1_RSA_v1.c \
           ${COMMON_ROOT}/service/sss/components/crypto/src/br_sha256_sw.c \
           ${COMMON_ROOT}/service/sss/components/crypto/src/br_aes_sw.c
endif
 
# Define include path lists to INC_DIR
INC_DIR = ${COMMON_ROOT}/service/sst/include \
          ${COMMON_ROOT}/service/sst/include_sec \
          ${COMMON_ROOT}/service/sss/components/inc \
          ${COMMON_ROOT}/service/sss/interface/inc \
          ${COMMON_ROOT}/driver/drv/include \
          ${COMMON_ROOT}/driver/che/include \
          ${COMMON_ROOT}/service/sss/interface/crypto/export/public \
          ${COMMON_ROOT}/service/sss/components/crypto/export/private \
          ${COMMON_ROOT}/service/sss/components/crypto/inc \
          ${COMMON_ROOT}/service/sss/components/GFH/private \
          ${COMMON_ROOT}/service/sys_svc/gfh/public \
          ${COMMON_ROOT}/service/sys_svc/profile/inc
 
# Define the specified compile options to COMP_DEFS
COMP_DEFS = APCS_INTWORK \
            __MTK_SECURE_PLATFORM__ \
            __CP_DEFINED_ALL_CONTEXT__ \
            __CP_DEFINED_WORKING_BUF__ \
            __CRYPTO_ENCRYPT__  \
            __CRYPTO_SCHEME__ \
            __CRYPTO_LIB__ \
            __CS_SIG_SINGLE__ \
            __CS_MTK_CIPHER__ \
            __CS_CIPHER__ \
            __CS_HASH__ \
            __CL_GFH_SIG__ \
            __CL_MTK_CIPHER__ \
            __CL_SIG_SINGLE_AND_PHASH_V1__ \
            __CL_SIG_MULTI_V1__ \
            __RSA_SW__ \
            __SHA256_SW__ \
            __SHA1_SW__ \
            __SOE_AES_HW__ \
            __SEJ_AES_HW__ \
            __AES_SW__ \
            __AES_HW__ \
            __3DES_SW__  \
            __TIME_STAMP__

#            __SEJ_3DES_HW__ \
#            __3DES_HW__ \
#            __SHA256_HW__ \
#            __SHA1_HW__ \

# Turn-on asembly support. To sync with BootROM
#COMP_DEFS +=__SHA1_HW_ASM__ \
#            __SEJ_AES_HW_ASM__

# Define the source file search paths to SRC_PATH
SRC_PATH = ${COMMON_ROOT}/service/sss/components/src \
           ${COMMON_ROOT}/service/sss/components/crypto/src
 
