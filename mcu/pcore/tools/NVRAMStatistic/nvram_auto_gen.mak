
.PHONY: nvram_auto_gen_build 

include make/common/cmd_cfg.mak

ifneq ($(strip $(OS_VERSION)),MSWin32)
include make/common/option.mak 
endif

ECHO := perl ${CORE_ROOT}/tools/init/echo.pl -n

base_path := $(subst /./,/, $(NVRAM_AUTO_GEN_PATH))
output_path := $(base_path)/debug

bsp_dir := ${CORE_ROOT}/custom/driver/common
modem_dir := ${CORE_ROOT}/custom/modem/common/ps
middleware_dir := ${CORE_ROOT}/custom/middleware/common
nvram_dir := ${CORE_ROOT}/custom/service/nvram

bsp_src := $(basename $(notdir $(wildcard $(bsp_dir)/*_nvram_def.c)))
modem_src := $(basename $(notdir $(wildcard $(modem_dir)/*_nvram_def.c)))
middleware_src := $(basename $(notdir $(wildcard $(middleware_dir)/*_nvram_def.c)))
nvram_src := $(basename $(notdir $(wildcard $(nvram_dir)/*_nvram_def.c)))

include $(base_path)/include/custom_include.txt

ifeq ($(strip $(OS_VERSION)),MSWin32)
    CUSTOM_OPTION := -imacros $(base_path)/include/custom_option.txt
    GCC := "${CORE_ROOT}/tools/MinGW/bin/gcc.exe"
    OBJDUMP := "echo"
    LINKER_SCRIPT := ${CORE_ROOT}/tools/NVRAMStatistic/src/nvram_auto_gen_windows.txt
    MV := perl ${CORE_ROOT}/tools/init/move.pl -f
    override PATH := ${CORE_ROOT}/tools/MinGW/bin:${PATH}
    export $(PATH)
else
include $(base_path)/include/custom_option.txt
    GCC := "/usr/bin/gcc"
    OBJDUMP := "/usr/bin/objdump"
    LINKER_SCRIPT := ${CORE_ROOT}/tools/NVRAMStatistic/src/nvram_auto_gen_linux.txt
    LINKER_SCRIPT_TARGET := ${CORE_ROOT}/tools/NVRAMStatistic/src/nvram_auto_gen_TARGET.txt
    NVM_TARGET_GEN_SRC := nvram_auto_gen_TARGET.o
    MV := mv
    CUSTOM_OPTION += -std=gnu89
endif

bsp_obj := $(patsubst %, $(output_path)/%.o, $(bsp_src))
modem_obj := $(patsubst %, $(output_path)/%.o, $(modem_src))
middleware_obj := $(patsubst %, $(output_path)/%.o, $(middleware_src))
nvram_obj := $(patsubst %, $(output_path)/%.o, $(nvram_src))

NVM_CUST_SRC = \
BSP_LIST \
MODEM_LIST \
MIDDLEWARE_LIST \
NVRAM_LIST \
nvram_data_items.o \
nvram_cust_pack.o \
custom_nvram_sec.o \
nvram_white_list.o \
nvram_gen_util.o

NVM_TARGET_CUST_SRC = \
BSP_LIST \
MODEM_LIST \
MIDDLEWARE_LIST \
NVRAM_LIST \
nvram_data_items.o \
nvram_cust_pack.o \
custom_nvram_sec.o \
nvram_white_list.o

#Vendor only can compile these files
NVM_VENDOR_SRC = nvram_gen_util.o

NVM_CORE_SRC = \
nvram_factory_config.o

NVM_GEN_SRC = \
nvram_auto_gen.o

NVM_LNK_CMD = \
-Xlinker --script=$(LINKER_SCRIPT) -Xlinker --Map -Xlinker $(output_path)/nvram_auto_gen.map

NVM_LNK_CMD_TARGET = \
-Xlinker --script=$(LINKER_SCRIPT_TARGET) -Xlinker --Map -Xlinker $(output_path)/nvram_auto_gen.map

NVM_GEN_OBJS = \
$(output_path)/nvram_auto_gen.o \
$(output_path)/nvram_white_list.o \
$(output_path)/nvram_gen_util.o \
$(output_path)/nvram_factory_config.o \
$(output_path)/nvram_data_items.o \
$(output_path)/nvram_cust_pack.o \
$(output_path)/custom_nvram_sec.o \
$(modem_obj) \
$(middleware_obj) \
$(nvram_obj) \
$(bsp_obj)

NVM_GEN_OBJS += $(output_path)/fs_quota.o $(output_path)/fs_quota_entry_dump.o
QUOTA_SRC += fs_quota.o fs_quota_entry_dump.o

NVM_TARGET_GEN_OBJS = \
$(output_path)/nvram_auto_gen_TARGET.o \
$(output_path)/nvram_white_list.o \
$(output_path)/nvram_factory_config.o \
$(output_path)/nvram_data_items.o \
$(output_path)/nvram_cust_pack.o \
$(output_path)/custom_nvram_sec.o \
$(modem_obj) \
$(middleware_obj) \
$(nvram_obj) \
$(bsp_obj)

ifeq ($(strip $(LEVEL)), VENDOR) # vendor release
	NVM_OPTION =  -fshort-enums  -D "NVRAM_AUTO_GEN" -D "__VENDOR_RELEASE__" -D "__LITTLE_ENDING"
else
	NVM_OPTION =  -fshort-enums  -D "NVRAM_AUTO_GEN" -D "__LITTLE_ENDING"
endif

NVM_INC = -I "${CORE_ROOT}/tools/NVRAMStatistic/include" -I "common/service/nvram/include" -I "common/interface" 

QUOTA_OPTION =  -D "BUILD_TIME_CHECK_GEN" -D "GEN_FOR_PC"
QUOTA_INC = -I "${CORE_ROOT}/custom/common/"


#Using the folder from resource generator
MTK_DEFS = \
	-D "__MULTI_BIN_LOAD__" \
	-D "__EXE_DLL__"


.SUFFIXES: .o .cpp .c .txt


############ nvram_auto_gen compiling ####################################

BSP_LIST:
	@${ECHO} "Building BSP data items: $(notdir $(bsp_src))"
	@for f in $(bsp_src) ; do \
	  ${ECHO} Compile $(subst ,,$(bsp_dir)/$$f.c); \
	  ${GCC} $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC)  -w -c $(bsp_dir)/$$f.c -MMD -MF $(output_path)/$$f.d -o $(output_path)/$$f.o; \
	done
ifneq ($(strip $(OS_VERSION)),MSWin32)
	@for f in $(bsp_src) ; do \
	  ${CC} $(CFLAGS) $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC)  -w -c $(bsp_dir)/$$f.c -MMD -MF $(output_path)_target/$$f.d -o $(output_path)_target/$$f.o; \
	done
endif
	
	
MODEM_LIST:
	#@perl ${CORE_ROOT}/tools/NVRAMStatistic/nvram_pre_gen.pl  $(base_path)
	@${ECHO} "Building MODEM data items: $(notdir $(modem_src))"
	@for f in $(modem_src) ; do \
	  ${ECHO} Compile $(modem_dir)/$$f.c; \
	  ${GCC} $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC)  -w -c $(modem_dir)/$$f.c -MMD -MF $(output_path)/$$f.d -o $(output_path)/$$f.o; \
	done	  
ifneq ($(strip $(OS_VERSION)),MSWin32)
	@for f in $(modem_src) ; do \
	  ${CC} $(CFLAGS) $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC)  -w -c $(modem_dir)/$$f.c -MMD -MF $(output_path)_target/$$f.d -o $(output_path)_target/$$f.o; \
	done		
endif

MIDDLEWARE_LIST:
	@${ECHO} "Building MIDDLEWARE data items: $(notdir $(middleware_src))"
	@for f in $(middleware_src) ; do \
	  ${ECHO} Compile $(middleware_dir)/$$f.c; \
	  ${GCC} $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC)  -w -c $(middleware_dir)/$$f.c -MMD -MF $(output_path)/$$f.d -o $(output_path)/$$f.o; \
	done
ifneq ($(strip $(OS_VERSION)),MSWin32)
	@for f in $(middleware_src) ; do \
	  ${CC} $(CFLAGS) $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC)  -w -c $(middleware_dir)/$$f.c -MMD -MF $(output_path)_target/$$f.d -o $(output_path)_target/$$f.o; \
	done		
endif

NVRAM_LIST:
	@${ECHO} "Building NVRAM data items: $(notdir $(nvram_src))"
	@for f in $(nvram_src) ; do \
	  ${ECHO} Compile $(nvram_dir)/$$f.c; \
	  ${GCC} $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC)  -w -c $(nvram_dir)/$$f.c -MMD -MF $(output_path)/$$f.d -o $(output_path)/$$f.o; \
	done
ifneq ($(strip $(OS_VERSION)),MSWin32)
	@for f in $(nvram_src) ; do \
	  ${CC} $(CFLAGS) $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC)  -w -c $(nvram_dir)/$$f.c -MMD -MF $(output_path)_target/$$f.d -o $(output_path)_target/$$f.o; \
	done		
endif

nvram_data_items.o: ${CORE_ROOT}/custom/service/nvram/nvram_data_items.c
	@${ECHO} "Compile ${CORE_ROOT}/custom/common/hal/nvram/nvram_data_items.c..."
	@${GCC} $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC) -w -c $< -MMD -MF $(output_path)/$(basename $(@F)).d -o $(output_path)/$@
ifneq ($(strip $(OS_VERSION)),MSWin32)
	@${CC} $(CFLAGS) $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC) -w -c $< -MMD -MF $(output_path)_target/$(basename $(@F)).d -o $(output_path)_target/$@
endif
	
nvram_cust_pack.o: ${CORE_ROOT}/custom/service/nvram/nvram_cust_pack.c
	@${ECHO} "Compile ${CORE_ROOT}/custom/common/hal/nvram/nvram_cust_pack.c..."
	@${GCC} $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC) -w -c $< -MMD -MF $(output_path)/$(basename $(@F)).d -o $(output_path)/$@
ifneq ($(strip $(OS_VERSION)),MSWin32)
	@${CC} $(CFLAGS) $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC) -w -c $< -MMD -MF $(output_path)_target/$(basename $(@F)).d -o $(output_path)_target/$@
endif

custom_nvram_sec.o: ${CORE_ROOT}/custom/service/nvram/custom_nvram_sec.c
	@${ECHO} "Compile ${CORE_ROOT}/custom/common/hal/nvram/custom_nvram_sec.c..."
	@${GCC} $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC) -w -c $< -MMD -MF $(output_path)/$(basename $(@F)).d -o $(output_path)/$@
ifneq ($(strip $(OS_VERSION)),MSWin32)
	@${CC} $(CFLAGS) $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC) -w -c $< -MMD -MF $(output_path)_target/$(basename $(@F)).d -o $(output_path)_target/$@
endif


nvram_factory_config.o: common/service/nvram/src/nvram_factory_config.c
	@${ECHO} "Compile common/service/nvram/src/nvram_factory_config.c..."
	@${GCC} $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC) -w -c $< -MMD -MF $(output_path)/$(basename $(@F)).d -o $(output_path)/$@
ifneq ($(strip $(OS_VERSION)),MSWin32)
	@${CC} $(CFLAGS) $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC) -w -c $< -MMD -MF $(output_path)_target/$(basename $(@F)).d -o $(output_path)_target/$@
endif

fs_quota_entry_dump.o: ${CORE_ROOT}/tools/NVRAMStatistic/src/fs_quota_entry_dump.c 
	@${ECHO} "Compile ${CORE_ROOT}/tools/NVRAMStatistic/src/fs_quota_entry_dump.c..."
	@${GCC} $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC)  -w -c $< -MMD -MF $(output_path)/$(basename $(@F)).d -o $(output_path)/$@

fs_quota.o: ${CORE_ROOT}/custom/middleware/common/fs_quota.c
	@${ECHO} "Compile ${CORE_ROOT}/custom/middleware/common/fs_quota.c..."
	@${GCC} $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC) -w -c $< -MMD -MF $(output_path)/$(basename $(@F)).d -o $(output_path)/$@
	
nvram_auto_gen_TARGET.o: ${CORE_ROOT}/tools/NVRAMStatistic/src/nvram_auto_gen_TARGET.c
ifneq ($(strip $(OS_VERSION)),MSWin32)
	@$(IF_NOT_EXIST) $(output_path)_target $(THEN) ($(MKDIR) $(output_path)_target) $(CMD_END)
	@${ECHO} Compile nvram_auto_gen_TARGET.c...
	@${CC} $(CFLAGS) $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC)  -w  -c $< -MMD -MF $(output_path)_target/$(basename $(@F)).d -o $(output_path)_target/$@
else
	@${ECHO} Skip compile nvram_auto_gen_TARGET.c...
endif

nvram_auto_gen.o: ${CORE_ROOT}/tools/NVRAMStatistic/src/nvram_auto_gen.c
ifneq ($(strip $(OS_VERSION)),MSWin32)
	@$(IF_NOT_EXIST) $(output_path)_target $(THEN) ($(MKDIR) $(output_path)_target) $(CMD_END)
endif
	@$(ECHO) \#ifndef NVRAM_LID_STATISTIC_H >  $(base_path)/nvram_lid_statistics_bak.h
	@$(ECHO) \#define NVRAM_LID_STATISTIC_H >> $(base_path)/nvram_lid_statistics_bak.h
	@$(ECHO) \#ifndef NVRAM_NOT_PRESENT >> $(base_path)/nvram_lid_statistics_bak.h
	@$(ECHO) \#ifndef NVRAM_AUTO_GEN >> $(base_path)/nvram_lid_statistics_bak.h
	@$(ECHO) \#ifndef __RESOURCE_GEN_ >> $(base_path)/nvram_lid_statistics_bak.h
	@$(ECHO) \#ifndef GEN_FOR_PC >> $(base_path)/nvram_lid_statistics_bak.h
	@$(ECHO) \#error "nvram_auto_gen fail!" >> $(base_path)/nvram_lid_statistics_bak.h
	@$(ECHO) \#endif >> $(base_path)/nvram_lid_statistics_bak.h
	@$(ECHO) \#endif >> $(base_path)/nvram_lid_statistics_bak.h
	@$(ECHO) \#endif >> $(base_path)/nvram_lid_statistics_bak.h
	@$(ECHO) \#define NVRAM_OTP_SIZE 10 >> $(base_path)/nvram_lid_statistics_bak.h
	@$(ECHO) \#define NVRAM_OTP_TOTAL 1 >> $(base_path)/nvram_lid_statistics_bak.h
	@$(ECHO) \#define NVRAM_CUSTPACK_TOTAL 14 >> $(base_path)/nvram_lid_statistics_bak.h
	@$(ECHO) \#define NVRAM_SECUPACK_SIZE 973 >> $(base_path)/nvram_lid_statistics_bak.h
	@$(ECHO) \#endif >> $(base_path)/nvram_lid_statistics_bak.h
	@$(ECHO) \#endif >> $(base_path)/nvram_lid_statistics_bak.h
	@$(CAT)  $(base_path)/nvram_lid_statistics_bak.h > $(base_path)/nvram_lid_statistics.h
	@$(ECHO) generate nvram_lid_statistics_bak.h success

	@$(ECHO) typedef enum {              >  $(base_path)/nvram_gen_trc.h
	@$(ECHO)	_NVRAM_EF_SYS_LID = 0,  >> $(base_path)/nvram_gen_trc.h  
	@$(ECHO)	NVRAM_TRC_LID_TOTAL     >> $(base_path)/nvram_gen_trc.h 
	@$(ECHO) "}nvram_trc_lid_enum;"     >> $(base_path)/nvram_gen_trc.h 
	
	@$(ECHO) generate nvram_gen_trc.h success
	@${ECHO} "Path = $(PATH)"	
	@${ECHO} Compile nvram_auto_gen.c...
	@${GCC} $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC)  -w  -c $< -MMD -MF $(output_path)/$(basename $(@F)).d -o $(output_path)/$@

nvram_gen_util.o: ${CORE_ROOT}/tools/NVRAMStatistic/src/nvram_gen_util.c
	@${GCC} $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC)  -w -c $< -MMD -MF $(output_path)/$(basename $(@F)).d -o $(output_path)/$@

nvram_white_list.o: ${CORE_ROOT}/tools/NVRAMStatistic/src/nvram_white_list.c
	@${GCC} $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC)  -w -c $< -MMD -MF $(output_path)/$(basename $(@F)).d -o $(output_path)/$@
ifneq ($(strip $(OS_VERSION)),MSWin32)
	@${CC} $(CFLAGS) $(CUSTOM_OPTION) $(NVM_OPTION) ${CUSTOM_INC} $(NVM_INC)  -w -c $< -MMD -MF $(output_path)_target/$(basename $(@F)).d -o $(output_path)_target/$@
endif

ifneq ($(filter "NVRAM_NOT_PRESENT", $(strip $(CUSTOM_OPTION))),)
    nvram_auto_gen_build: nvram_auto_gen.o $(QUOTA_SRC)
	@${GCC} -o $(output_path)/nvram_auto_gen $(output_path)/nvram_auto_gen.o
else
ifeq ($(strip $(LEVEL)), LEVEL2_OBJ)
  ifneq ($(strip $(CUSTOM_RELEASE)), FALSE)
        nvram_auto_gen_build: $(NVM_GEN_SRC) $(NVM_CUST_SRC) $(QUOTA_SRC)
  else
        nvram_auto_gen_build: $(NVM_GEN_SRC) $(NVM_CUST_SRC) $(NVM_CORE_SRC) $(QUOTA_SRC)
  endif
	@${GCC} -o $(output_path)/nvram_auto_gen $(output_path)/$(NVM_GEN_OBJS)
	@${ECHO} "build level2_obj nvram_auto_gen done"
else
  ifeq ($(strip $(LEVEL)), VENDOR) # vendor release
    nvram_auto_gen_build: $(NVM_GEN_SRC) $(NVM_TARGET_GEN_SRC) $(NVM_VENDOR_SRC) $(QUOTA_SRC)
		@${GCC} $(NVM_LNK_CMD) -o $(output_path)/nvram_auto_gen $(NVM_GEN_OBJS)
		@${OBJDUMP} -x $(base_path)/nvram_auto_gen > $(base_path)/nvram_auto_gen.map
ifneq ($(strip $(OS_VERSION)),MSWin32)
		@${CC} $(PLATFORM_FLAGS) $(NVM_LNK_CMD_TARGET) -o $(output_path)/nvram_auto_gen_target $(subst debug,debug_target,$(NVM_TARGET_GEN_OBJS))
		@${OBJDUMP} -x $(base_path)/nvram_auto_gen_target > $(base_path)/nvram_auto_gen_target.map
endif
		@${ECHO} "build vendor nvram_auto_gen done"
  else 
    nvram_auto_gen_build: $(NVM_GEN_SRC) $(NVM_TARGET_GEN_SRC) $(NVM_CUST_SRC) $(NVM_CORE_SRC) $(QUOTA_SRC)
		@${GCC} $(NVM_LNK_CMD) -o $(base_path)/nvram_auto_gen $(NVM_GEN_OBJS)
		@${OBJDUMP} -x $(base_path)/nvram_auto_gen > $(base_path)/nvram_auto_gen.map
ifneq ($(strip $(OS_VERSION)),MSWin32)
		@${CC} $(PLATFORM_FLAGS) $(NVM_LNK_CMD_TARGET) -o $(base_path)/nvram_auto_gen_target $(subst debug,debug_target,$(NVM_TARGET_GEN_OBJS))
		@${OBJDUMP} -x $(base_path)/nvram_auto_gen_target > $(base_path)/nvram_auto_gen_target.map
endif
		@${ECHO} "build nvram_auto_gen done"
  endif
endif
endif

