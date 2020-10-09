# Define source file lists to SRC_LIST
SRC_LIST = ${CORE_ROOT}/modem/l4/uem/src/uem_proc_cmd.c \
           ${CORE_ROOT}/modem/l4/uem/src/uem_proc_msg.c \
           ${CORE_ROOT}/modem/l4/uem/src/uem_main.c \
           ${CORE_ROOT}/modem/l4/uem/src/uem_msg_hdlr.c \
           ${CORE_ROOT}/modem/l4/uem/src/uem_at_cmd.c \
           ${CORE_ROOT}/modem/l4/uem/src/uem_utility.c \
           ${CORE_ROOT}/modem/l4/uem/src/uem_gpio_ctrl.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_common.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_config.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_context.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_control_block.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_data_desc.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_data_entry_table.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_handler_approve.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_handler_delete.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_handler_delete_ln.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_handler_read.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_handler_read_ln.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_handler_sat.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_handler_search.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_handler_startup.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_handler_startup_ln.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_handler_write.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_handler_write_ln.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_ilm.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_main.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_name_num_index.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_nvram_access.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_pindex.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_sap.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_se.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_sim_access.c \
           ${CORE_ROOT}/modem/l4/phb/src/phb_utils.c \
 
#  Define include path lists to INC_DIR
INC_DIR = ${CORE_ROOT}/modem/l4/csm \
          ${CORE_ROOT}/modem/l4/csm/cc/include \
          ${CORE_ROOT}/modem/l4/csm/ss/include \
          ${CORE_ROOT}/modem/l4/include \
          ${CORE_ROOT}/modem/l4/uem/include \
          ${CORE_ROOT}/modem/l4/smu/include \
          ${CORE_ROOT}/modem/l4/atci/include \
          ${CORE_ROOT}/modem/l4/l4c/include/common \
          ${CORE_ROOT}/modem/l4/l4c/include/proc \
          ${CORE_ROOT}/modem/l4/phb/include \
          ${CORE_ROOT}/modem/l4/smsal/include \
          ${CORE_ROOT}/modem/l4/rac/common/include \
          ${CORE_ROOT}/modem/l4/rac/ugrac/include \
          ${CORE_ROOT}/modem/interface/l4 \
          ${CORE_ROOT}/modem/interface/l4misc \
          ${CORE_ROOT}/modem/interface/general \
          ${COMMON_ROOT}/interface/middleware/meta \
          ${COMMON_ROOT}/interface/driver/hwdrv \
          ${COMMON_ROOT}/interface/driver/drv_def \
          ${COMMON_ROOT}/driver/peripheral/inc


#mtk04121
ifneq ($(filter __ETCM__, $(strip $(MODULE_DEFS))),)
INC_DIR += ${CORE_ROOT}/modem/l4/tcm/etcm/include
endif

ifneq ($(strip $(EUTRAN_MODE_SUPPORT)),NONE)
    INC_DIR += ${CORE_ROOT}/modem/l4/rac/erac/include
endif

# Define the specified compile options to COMP_DEFS
COMP_DEFS = SMG_REL_97 \
            __MOD_UEM__ \
            UART_ENABLE \
            __MOD_CSM__ \
            __MOD_SMU__ \
            __MOD_NVRAM__ \
            __MOD_PHB__ \
            __MOD_SMSAL__ \
            __MOD_ATCI__ \
            __MOD_L4C__ \
            __SMS_PDU_MODE__ \
            __SMS_ME_STORAGE__ \
            __CB__ \
            MP3_SUPPORT \
            __EMS__ \
            SMS_SHOW_REPORT_IN_SIM \
            __UEM_DRV_KPDQUEUE__ \
            __CB_MMI_MASK__ \
            EMS_LITTLE_ENDIAN \
            EMS_MEM_MANAGEMENT \
            SAVE_MSG_TO_SAME_STORAGE \
            DATA_DOWNLOAD \
            __PHB_USIM_MULTI_ADN__ \
            __CATEGORY_MODEM__
 
# Define the source file search paths to SRC_PATH
SRC_PATH = ${CORE_ROOT}/modem/l4/src \
          ${CORE_ROOT}/modem/l4/l4c/src/common \
          ${CORE_ROOT}/modem/l4/atci/src \
          ${CORE_ROOT}/modem/l4/l4c/src/proc \
          ${CORE_ROOT}/modem/l4/uem/src \
          ${CORE_ROOT}/modem/l4/smu/src \
          ${CORE_ROOT}/modem/l4/uem/src  \
          ${CORE_ROOT}/modem/l4/csm \
          ${CORE_ROOT}/modem/l4/csm/cc/src  \
          ${CORE_ROOT}/modem/l4/csm/ss/src  \
          ${CORE_ROOT}/modem/l4/phb/src \
          ${CORE_ROOT}/modem/l4/smsal/src \
          ${CORE_ROOT}/modem/l4/rac/common/src \
          ${CORE_ROOT}/modem/l4/rac/ugrac/src \
          ${CORE_ROOT}/modem/l4/tcm/common
 
ifneq ($(filter __UGTCM__, $(strip $(MODULE_DEFS))),)
SRC_PATH += ${CORE_ROOT}/modem/l4/tcm/ugtcm
endif


NOT_USE_CATEGORY_INCLUDE = TRUE
