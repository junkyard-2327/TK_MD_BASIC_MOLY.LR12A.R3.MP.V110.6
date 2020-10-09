# Define source file folder to SRC_LIST
# ifeq ($(strip $(DSP_SOLUTION)),DUALMACDSP)
#   AUDFOLDER = ${COMMON_ROOT}/driver/audio/src/v2
#   AUD_SOLUTION      =  V2
# else   
   AUDFOLDER = ${COMMON_ROOT}/driver/audio/src/v1
   AUD_SOLUTION      =  V1
# endif

######################################################
#                Temp solution                       #
######################################################
#SRC_LIST = $(strip $(AUDFOLDER))/dummy_audio.c \
#           $(strip $(AUDFOLDER))/L/dummy_audio_L.c


######################################################
#     Should remove first "#  " for normal mode      #
######################################################
  ##ifeq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
  ifneq ($(strip $(TEST_LOAD_TYPE)),NONE)
    SRC_LIST = $(strip $(AUDFOLDER))/dummy_audio.c \
               $(strip $(AUDFOLDER))/L/dummy_audio_L.c
  else
  
  ##ifeq ($(strip $(PLATFORM)),TK6291)
  ##  SRC_LIST = $(strip $(AUDFOLDER))/dummy_audio.c \
  ##             $(strip $(AUDFOLDER))/L/dummy_audio_L.c
  ##else 
  
  ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
  ifeq ($(strip $(DHL_SUPPORT)),TRUE)
    SRC_LIST = $(strip $(CUS_MTK_REL))/dhl/l1trace/l1audio_trace.c
  else
    SRC_LIST = $(strip $(CUS_MTK_REL))/tst/l1trace/l1audio_trace.c
  endif
  else
    SRC_LIST = $(strip $(CGEN_L1_OUTDIR))/l1audio_trace.c
  endif
  
  # Start Define source file lists to SRC_LIST
  # Common part in v1 and v2
  SRC_LIST += $(strip $(AUDFOLDER))/am.c \
              $(strip $(AUDFOLDER))/audio_service.c \
              $(strip $(AUDFOLDER))/l1audio_sph_srv.c \
              $(strip $(AUDFOLDER))/media.c \
              $(strip $(AUDFOLDER))/extcodec.c \
              $(strip $(AUDFOLDER))/pcm4way.c \
              $(strip $(AUDFOLDER))/sp_drv.c \
              $(strip $(AUDFOLDER))/vm.c \
              $(strip $(AUDFOLDER))/sp_cc.c \
              ${COMMON_ROOT}/driver/audio/src/audio_create.c \
              $(strip $(AUDFOLDER))/sp_c2k.c \
              $(strip $(AUDFOLDER))/speech_service.c \
              $(strip $(AUDFOLDER))/sp_dsptone_drv.c \
              $(strip $(AUDFOLDER))/L/am_L.c \
              $(strip $(AUDFOLDER))/PcmMixer2.c \
              $(strip $(AUDFOLDER))/PcmMixer3.c
  # AFE part
  AFE_SPLIT_DRIVER_PLATFORM  = MT6763 MT6739 MT6771 MT6761 MT6295M MT6765 MT6768 __MD95__
  ifneq ($(filter $(strip $(MODULE_DEFS)), $(AFE_SPLIT_DRIVER_PLATFORM)),)
     SRC_LIST +=  $(strip $(AUDFOLDER))/afe_common.c \
  
     ifeq ($(strip $(PLATFORM)),MT6763)
       SRC_LIST += $(strip $(AUDFOLDER))/afes/afe_6763.c
     endif
     
     ifeq ($(strip $(PLATFORM)),MT6739)
       SRC_LIST += $(strip $(AUDFOLDER))/afes/afe_6739.c
     endif 
     
     ifeq ($(strip $(PLATFORM)),MT6761)
       SRC_LIST += $(strip $(AUDFOLDER))/afes/afe_6761.c
     endif
     
     ifeq ($(strip $(PLATFORM)),MT6771)
       SRC_LIST += $(strip $(AUDFOLDER))/afes/afe_6771.c
     endif

     ifeq ($(strip $(PLATFORM)),MT6295M)
       SRC_LIST += $(strip $(AUDFOLDER))/afes/afe_6295M.c
     endif

     ifeq ($(strip $(PLATFORM)),MT3967)
       SRC_LIST += $(strip $(AUDFOLDER))/afes/afe_6295M.c
     endif
          
     ifeq ($(strip $(PLATFORM)),MT6765)
       SRC_LIST += $(strip $(AUDFOLDER))/afes/afe_6765.c
     endif
	 
     ifeq ($(strip $(PLATFORM)),MT6768)
       SRC_LIST += $(strip $(AUDFOLDER))/afes/afe_6768.c
     endif          
  else
     SRC_LIST +=  $(strip $(AUDFOLDER))/afe2.c
  endif
  
  
  # By Feature
  ifneq ($(filter __ENABLE_SPEECH_DVT__, $(strip $(MODULE_DEFS))),)
     SRC_LIST +=  $(strip $(AUDFOLDER))/speech_dvt.c
  endif
  
  ifneq ($(filter __DATA_CARD_SPEECH__, $(strip $(MODULE_DEFS))),)
     SRC_LIST +=  $(strip $(AUDFOLDER))/sp_strm_drv.c
  endif
  
  ifneq ($(filter __CVSD_CODEC_SUPPORT__, $(strip $(MODULE_DEFS))),)
     SRC_LIST +=  $(strip $(AUDFOLDER))/bt_sco_drv.c                                                         
  endif
  
  ifneq ($(filter __ECALL_SUPPORT__, $(strip $(MODULE_DEFS))),)
    SRC_LIST += $(strip $(AUDFOLDER))/eCall_drv.c
  endif
  
  
  ifeq ($(strip $(AUD_SOLUTION)),V1)
     SRC_LIST += $(strip $(AUDFOLDER))/audio_idma.c \
                 $(strip $(AUDFOLDER))/sp_enhance.c \
                 $(strip $(AUDFOLDER))/sal_exp.c \
                 $(strip $(AUDFOLDER))/sal_impl.c \
                 $(strip $(AUDFOLDER))/sal_dsp.c \
                 $(strip $(AUDFOLDER))/sp_daca.c \
                 $(strip $(AUDFOLDER))/pcmRouter.c \
                 $(strip $(AUDFOLDER))/ExtBgSnd.c \
                 $(strip $(AUDFOLDER))/rawpcmrec_drv.c \
                 $(strip $(AUDFOLDER))/sp_gain.c
     ifneq ($(strip $(SMART_PHONE_CORE)),NONE)
        SRC_LIST += $(strip $(AUDFOLDER))/wm8904_config.c
        ifneq ($(strip $(SMART_PHONE_CORE)),MODEM_ONLY)
          SRC_LIST += $(strip $(AUDFOLDER))/spc_drv.c                                  
        else
          SRC_LIST += $(strip $(AUDFOLDER))/apAudSysConfig.c
        endif 
     endif
  endif
  
  ifeq ($(strip $(AUD_SOLUTION)),V2)
     SRC_LIST +=  $(strip $(AUDFOLDER))/vm_drv.c
     ifneq ($(strip $(SMART_PHONE_CORE)),NONE)
        SRC_LIST += $(strip $(AUDFOLDER))/spc_drv.c
     endif
  endif
  
  ifneq ($(filter __VOLTE_SUPPORT__, $(strip $(MODULE_DEFS))),)
   SRC_LIST += $(strip $(AUDFOLDER))/sp_4g.c
   SRC_LIST += $(strip $(AUDFOLDER))/sp_4g_opt.c
   SRC_LIST += $(strip $(AUDFOLDER))/sp_4g_aamp.c          
     ifneq ($(filter __G_CODEC_SUPPORT__, $(strip $(MODULE_DEFS))),)   
        SRC_LIST += $(strip $(AUDFOLDER))/pcmrb.c
        SRC_LIST += $(strip $(AUDFOLDER))/streamrb.c
     endif   
  endif
  
  ifneq ($(filter __UMTS_RAT__, $(strip $(MODULE_DEFS))),)
     SRC_LIST += $(strip $(AUDFOLDER))/amr_table.c \
                 $(strip $(AUDFOLDER))/sp_3g.c
  else
    ifneq ($(filter __UMTS_TDD128_MODE__, $(strip $(MODULE_DEFS))),)
      SRC_LIST += $(strip $(AUDFOLDER))/amr_table.c \
                  $(strip $(AUDFOLDER))/sp_3g.c
    endif
  endif
  
#  ifneq ($(filter BGSND_ENABLE, $(strip $(MODULE_DEFS))),)
#    ifeq ($(strip $(AUD_SOLUTION)),V1)
#      SRC_LIST += $(strip $(AUDFOLDER))/ExtBgSnd.c
#    endif
#    ifeq ($(strip $(AUD_SOLUTION)),V2)
#      SRC_LIST += $(strip $(AUDFOLDER))/snd_effect.c
#    endif
#  endif
  
  ifneq ($(filter __CTM_SUPPORT__, $(strip $(MODULE_DEFS))),)
    SRC_LIST += $(strip $(AUDFOLDER))/ctm_drv.c
  endif
  
  #endif
  
  endif

#  Define include path lists to INC_DIR
INC_DIR = $(strip $(AUDFOLDER)) \
          $(strip $(AUDFOLDER))/inc \
          ${COMMON_ROOT}/interface/driver/audio \
          ${COMMON_ROOT}/driver/audio/src32_inc \
          ${COMMON_ROOT}/driver/audio/lib/MTKINC \
          ${COMMON_ROOT}/driver/drv/include \
          ${COMMON_ROOT}/driver/sys_drv/init/inc \
          ${CORE_ROOT}/modem/interface/l4 \
          ${CORE_ROOT}/modem/interface/lte \
          ${CORE_ROOT}/modem/interface/general \
          ${COMMON_ROOT}/interface/driver/peripheral \
          ${COMMON_ROOT}/interface/sap \
          ${COMMON_ROOT}/interface/sap/md \
          ${CORE_ROOT}/modem/interface/general \
          ${COMMON_ROOT}/interface/driver/devdrv/mdipc \
          ${CORE_ROOT}/custom/driver/common \
          ${CORE_ROOT}/modem/interface/l4misc \
          ${COMMON_ROOT}/interface/driver/sleep_drv \
          ${COMMON_ROOT}/interface/modem/general \
          ${COMMON_ROOT}/interface/driver/sys_drv \
          ${COMMON_ROOT}/interface/service/dhl \
          ${COMMON_ROOT}/interface/driver/devdrv/cuif/inc \
          ${COMMON_ROOT}/interface/service/dhl \
          ${COMMON_ROOT}/interface/modem/c2k \
          ${CORE_ROOT}/middleware/media/common/include

# solution for 93/95 co-codebase re-arch for R3 auto-sync to UMOLYA TRUNK
ifneq ($(wildcard ${COMMON_ROOT}/interface/driver/dvfs_drv),)
    INC_DIR    += ${COMMON_ROOT}/interface/driver/dvfs_drv/$(MD_VER_FOLDER)
else
    INC_DIR    += ${COMMON_ROOT}/driver/sleep_drv/public/inc
endif

ifneq ($(filter __CENTRALIZED_SLEEP_MANAGER__, $(strip $(MODULE_DEFS))),)
  INC_DIR    += ${COMMON_ROOT}/driver/sleep_drv/public/inc
endif
 
# Define the specified compile options to COMP_DEFS
COMP_DEFS = APCS_INTWORK
 
# Define the source file search paths to SRC_PATH
SRC_PATH += $(strip $(AUDFOLDER))
SRC_PATH += $(strip $(AUDFOLDER))/afes
SRC_PATH += $(strip $(AUDFOLDER))/inc
SRC_PATH += ${COMMON_ROOT}/driver/audio/src

