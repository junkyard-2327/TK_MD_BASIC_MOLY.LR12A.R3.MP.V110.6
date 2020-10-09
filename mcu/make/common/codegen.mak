# ---------------------------------------------------------------
# Variable declaration for asngen/asnregen/mcddll_update/umts_gen
# ---------------------------------------------------------------
RUN_ASNGEN := FALSE
RUN_ASNGEN_L4 := FALSE
RUN_ASNREGEN := FALSE
RUN_MCDDLL_UPDATE := FALSE
RUN_LTE_MCDDLL := FALSE
RUN_LTE_MCDDLL_ONLY_COPY := FALSE
RUN_MCDDLL_UPDATE_L4 := FALSE
RUN_UMTS_GEN := FALSE
RUN_EAS_GEN  := FALSE

ifeq ($(filter L1S BASIC UDVT,$(TEST_LOAD_TYPE)),)
  ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
    RUN_MCDDLL_UPDATE := TRUE
    RUN_LTE_MCDDLL := TRUE
    RUN_ASNGEN := TRUE
    RUN_ASNGEN_L4 := TRUE
    RUN_ASNREGEN := TRUE
    ifneq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
      RUN_UMTS_GEN := TRUE
    endif
    ifeq ($(strip $(EUTRAN_MODE_SUPPORT)),EUTRAN_MODE)
      RUN_UMTS_GEN := TRUE
      RUN_EAS_GEN  := TRUE
    endif
  else
    RUN_LTE_MCDDLL_ONLY_COPY := TRUE
    ifeq (SUB_PROTOCOL,$(strip $(REL_PACKAGE_LEVEL)))
      RUN_MCDDLL_UPDATE = TRUE
      RUN_ASNGEN := TRUE
      RUN_ASNGEN_L4 := TRUE
      RUN_ASNREGEN := TRUE
      ifneq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
        RUN_UMTS_GEN := TRUE
      endif
      ifeq ($(strip $(EUTRAN_MODE_SUPPORT)),EUTRAN_MODE)
        RUN_UMTS_GEN := TRUE
        RUN_EAS_GEN  := TRUE
      endif
    else ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
      RUN_MCDDLL_UPDATE_L4 = TRUE
      RUN_ASNGEN_L4 := TRUE
    endif
  endif
else
  ifeq ($(strip $(TEST_LOAD_TYPE)),L1S)
    RUN_EAS_GEN  := TRUE
  endif
endif

# --------------------------------------
# Variable declaration for genmoduleinfo
# --------------------------------------
COM_DEF_PATH := $(foreach mod,$(COMPLIST),$(strip $(MODULEINFODIR))/$(mod)/$(mod).def)

# -----------------------------
# Variable declaration for cgen
# -----------------------------
CGEN_CFG_MODEM     := $(strip $(MODISBUILD_TST_DB))/cgenModem.cfg
CGEN_CFG_MODEM_SEC := $(strip $(MODISBUILD_TST_DB_SEC))/cgenModem_sec.cfg
POSTGEN_CFG_MODEM     := $(strip $(MODISBUILD_TST_DB))/postgenModem.cfg
CODE_GEN_LST := $(strip $(MODISBUILD_TST_DB))/codegen.lis
CGEN_ENC_ENABLE := FALSE

# ------------------------------------------------------
# Variable declaration for MCDDLL 
# filter-out unnecessary C2K XGEN_INC_DIR and COM_DEFS
# ------------------------------------------------------
Filter_Out = $(foreach input,$(2),$(if $(findstring $(1),$(input)),,$(input)))
#MCDDLL_INC_DIR  := $(call Filter_Out,/c2k/,$(XGEN_INC_DIR))
#MCDDLL_COM_DEFS := $(filter-out $(C2K_COM_DEFS),$(COM_DEFS))
#NVRAM_INC_DIR  := $(call Filter_Out,/c2k/,$(XGEN_INC_DIR_TARGET))
#NVRAM_COM_DEFS := $(filter-out $(C2K_COM_DEFS),$(COM_DEFS_TARGET))

#ex: GenCusTmd = CuStOm_StArT_EL1D $(EL1D_TMD_FILES) CuStOm_EnD_EL1D
GenCusTmd = CuStOm_StArT_$(strip $(1)) $($(strip $(1))_TMD_FILES) CuStOm_EnD_$(strip $(1)) 
#[LTE cgen need to check]
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
    TMD_FILES     := $(COMMON_TMD_FILES) $(L1_TMD_FILES)
  else
    ifeq ($(strip $(UE_SIMULATOR)),TRUE)
    TMD_FILES     := $(COMMON_TMD_FILES) $(L1_TMD_FILES)
    else
      TMD_FILES     := $(COMMON_TMD_FILES)
    endif
  endif
  TMD_FILES_SEC := $(L1_TMD_FILES_LTE_SEC)
else
  TMD_FILES :=
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
      TMD_FILES += $(foreach NEED_TMD_MODULE, $(filter $(ALL_SUB_BUILD),$(COMPLIST)), \
  	$(if $($(call Upper,$(strip $(NEED_TMD_MODULE)))_TMD_FILES),$(call GenCusTmd, $(call Upper,$(strip $(NEED_TMD_MODULE))))))
  else
    ifeq ($(strip $(UE_SIMULATOR)),TRUE)
        TMD_FILES += $(foreach NEED_TMD_MODULE, $(filter $(ALL_SUB_BUILD),$(COMPLIST)), \
  	$(if $($(call Upper,$(strip $(NEED_TMD_MODULE)))_TMD_FILES),$(call GenCusTmd, $(call Upper,$(strip $(NEED_TMD_MODULE))))))
    else
        TMD_FILES += $(foreach NEED_TMD_MODULE, $(filter $(filter-out $(call Lower, $(HQ_NEED_TMD_MODULE)),$(ALL_SUB_BUILD)),$(COMPLIST)), \
  	$(if $($(call Upper,$(strip $(NEED_TMD_MODULE)))_TMD_FILES),$(call GenCusTmd, $(call Upper,$(strip $(NEED_TMD_MODULE))))))
    endif
  endif
#  ifeq ($(strip $(MTK_SUBSIDIARY)),FALSE)
#    COMP_TRACE_DEFS_MODEM := $(EXISTED_CUS_REL_TRACE_DEFS_MODEM)
    COMP_TRACE_DEFS_MODEM += $(NEW_CUS_REL_TRACE_DEFS_MODEM)
#  endif
endif

#[LTE cgen need to check]
COMP_TRACE_DEFS_MODEM_TARGET := $(COMP_TRACE_DEFS_MODEM)
ifeq ($(strip $(MODIS_CONFIG)),TRUE)
  ifneq ($(strip $(call Upper,$(UE_SIMULATOR))),TRUE)
    COMP_TRACE_DEFS_MODEM := $(foreach trc,$(COMP_TRACE_DEFS_MODEM_TARGET),$(if $(filter L1%,$(call Upper,$(notdir $(trc)))),,$(trc)))
  endif
endif

ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
  ifeq ($(strip $(DHL_SUPPORT)),TRUE)
    MDDBINFOCUSTOM = $(notdir $(wildcard $(CUS_MTK_REL)/dhl/database/$(strip $(MDDBINFOCUSTOMPREFIX))*))
  else
    MDDBINFOCUSTOM = $(notdir $(wildcard $(CUS_MTK_REL)/tst/database/$(strip $(MDDBINFOCUSTOMPREFIX))*))
  endif
else
  ifeq ($(LTE_SOURCE_BUILD),TRUE)
    MDDBINFOCUSTOM = $(MDDBINFOCUSTOMPREFIX)_$(strip $(PURE_VERNO)).EDB
  else
    ifeq ($(strip $(NO_LTECGEN)),TRUE)
      MDDBINFOCUSTOM = $(MDDBINFOCUSTOMPREFIX)_$(strip $(PURE_VERNO)).EDB
    else
      MDDBINFOCUSTOM = $(patsubst %_sec.EDB,%,$(notdir $(wildcard $(CUS_MTK_REL)/dhl/lte_sec/database/$(strip $(MDDBINFOCUSTOMPREFIX))*))).EDB
    endif
  endif
endif
ifeq ($(strip $(MODIS_CONFIG)),TRUE)
  MDDBINFOCUSTOM = MDDB_pc.EDB
endif

ifeq ($(strip $(TEST_LOAD_TYPE)),L1S)
  ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
    CODEGEN_RESULT = $(strip $(MODISBUILD_TST_DB))/MDDB.EDB
  endif
else
  ifeq ($(strip $(SPLIT_SYSTEM)),TRUE)
    CODEGEN_RESULT = $(strip $(MODISBUILD_TST_DB))/BPLGUSplitInfo
  else
    ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
      CODEGEN_RESULT = $(strip $(MODISBUILD_TST_DB))/$(strip $(MDDBINFOCUSTOMSRCP))
    else
      CODEGEN_RESULT = $(strip $(MODISBUILD_TST_DB))/$(strip $(MDDBINFOCUSTOM))
    endif
  endif
endif

GV_FILES     := $(wildcard $(strip $(TST_DB))/gv/*.gv)
GV_FILES_C2K := $(wildcard $(strip $(TST_DB))/gv/ext/*.gv)
GV_FILES_SEC := $(wildcard $(strip $(TST_DB_SEC))/gv/*.gv)

ifndef RUN_CGEN_L1
  RUN_CGEN_L1 := FALSE
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
    RUN_CGEN_L1 := TRUE
  else ifeq ($(strip $(call Upper,$(UE_SIMULATOR))),TRUE)
    ifneq ($(filter $(MAKECMDGOALS),new),)
      RUN_CGEN_L1 := TRUE
    endif
  else ifeq ($(strip $(DHL_SUPPORT)),TRUE)
    RUN_CGEN_L1 := TRUE
  endif
endif

CODEGEN_DEPENDENCY_MODEM :=
CODEGEN_PREPROCESS_MODEM :=
# CODEGEN_DATABASE_OUT is the output file name of cgen database
# TODO: CODEGEN_RESULT <=> CODEGEN_DATABASE_OUT
CODEGEN_DATABASE_MDDB_OUT = $(strip $(MODISBUILD_TST_DB))/MDDB*
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  ifneq ($(strip $(TEST_LOAD_TYPE)),L1S)
    CODEGEN_DATABASE_OUT     = $(strip $(MODISBUILD_TST_DB))/$(strip $(MDDBINFOCUSTOM))
    ifeq ($(strip $(DHL_SUPPORT)),TRUE)
      CODEGEN_DATABASE_OUT_SEC = $(subst .EDB,_sec.EDB,$(strip $(MODISBUILD_TST_DB_SEC))/$(strip $(MDDBINFOCUSTOM)))
    endif
  else
    CODEGEN_DATABASE_OUT     = $(strip $(MODISBUILD_TST_DB))/MDDB.EDB
    ifeq ($(strip $(DHL_SUPPORT)),TRUE)
      CODEGEN_DATABASE_OUT_SEC = $(strip $(MODISBUILD_TST_DB_SEC))/MDDB_sec.EDB
    endif
  endif
else
  ifneq ($(strip $(TEST_LOAD_TYPE)),L1S)
    CODEGEN_DATABASE_OUT     = $(strip $(MODISBUILD_TST_DB))/$(strip $(MDDBINFOCUSTOMSRCP))
    ifeq ($(strip $(DHL_SUPPORT)),TRUE)
      CODEGEN_DATABASE_OUT_SEC = $(subst .EDB,_sec.EDB,$(strip $(MODISBUILD_TST_DB_SEC))/$(strip $(MDDBINFOCUSTOMSRCP)))
    endif
  else
    CODEGEN_DATABASE_OUT     = $(strip $(MODISBUILD_TST_DB))/MDDB.EDB
    ifeq ($(strip $(DHL_SUPPORT)),TRUE)
      CODEGEN_DATABASE_OUT_SEC = $(strip $(MODISBUILD_TST_DB_SEC))/MDDB_sec.EDB
    endif
  endif
endif

ifeq ($(strip $(DHL_SUPPORT)),TRUE)
  ifeq ($(LTE_SOURCE_BUILD),TRUE)
    CODEGEN_DATABASE_IN_SEC = $(CODEGEN_DATABASE_OUT_SEC)
  else
    ifneq ($(strip $(TEST_LOAD_TYPE)),L1S)
      ifeq ($(strip $(MODIS_CONFIG)),TRUE)
        ifeq ($(strip $(call Upper,$(UE_SIMULATOR))),TRUE)
          CODEGEN_DATABASE_IN_SEC = $(wildcard $(CUS_MTK_REL)/dhl/lte_sec/database_uesim/$(subst .EDB,_sec.EDB,$(strip $(MDDBINFOCUSTOM))))
        else
          CODEGEN_DATABASE_IN_SEC = $(wildcard $(CUS_MTK_REL)/dhl/lte_sec/database_modis/$(subst .EDB,_sec.EDB,$(strip $(MDDBINFOCUSTOM))))
        endif
      else
         CODEGEN_DATABASE_IN_SEC = $(wildcard $(CUS_MTK_REL)/dhl/lte_sec/database/$(strip $(MDDBINFOCUSTOMPREFIX))*)
      endif # MODIS_CONFIG
    else
      ifeq ($(strip $(MODIS_CONFIG)),TRUE)
        CODEGEN_DATABASE_IN_SEC = $(wildcard $(CUS_MTK_REL)/dhl/lte_sec/database_modis/MDDB*)
      else
        CODEGEN_DATABASE_IN_SEC = $(wildcard $(CUS_MTK_REL)/dhl/lte_sec/database/MDDB*)
      endif
    endif # TEST_LOAD_TYPE
  endif # LTE_SOURCE_BUILD
endif# DHL_SUPPORT

# CODEGEN_DATABASE_IN is the input file name of cgen database
ifneq ($(strip $(TEST_LOAD_TYPE)),L1S)
  ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
    ifneq ($(strip $(MODIS_CONFIG)),TRUE)
      ifeq ($(strip $(DHL_SUPPORT)),TRUE)
        CODEGEN_DATABASE_IN = $(CUS_MTK_REL)/dhl/database/$(strip $(MDDBINFOCUSTOM))
      else
        CODEGEN_DATABASE_IN = $(CUS_MTK_REL)/tst/database/$(strip $(MDDBINFOCUSTOM))
      endif
    else
      ifeq ($(strip $(DHL_SUPPORT)),TRUE)
        CODEGEN_DATABASE_IN = $(CUS_MTK_REL)/dhl/database_modis/$(strip $(MDDBINFOCUSTOM))
      else
        CODEGEN_DATABASE_IN = $(CUS_MTK_REL)/tst/database_modis/$(strip $(MDDBINFOCUSTOM))
      endif
    endif
  else ifeq ($(wildcard $(CODEGEN_DATABASE_OUT)),)
    ifneq ($(strip $(MODIS_CONFIG)),TRUE)
      ifeq ($(strip $(DHL_SUPPORT)),TRUE)
        CODEGEN_DATABASE_IN = $(CUS_MTK_REL)/dhl/database/$(strip $(MDDBINFOCUSTOM))
      else
        CODEGEN_DATABASE_IN = $(CUS_MTK_REL)/tst/database/$(strip $(MDDBINFOCUSTOM))
      endif
    else
      ifeq ($(strip $(DHL_SUPPORT)),TRUE)
        CODEGEN_DATABASE_IN = $(CUS_MTK_REL)/dhl/database_modis/$(strip $(MDDBINFOCUSTOM))
      else
        CODEGEN_DATABASE_IN = $(CUS_MTK_REL)/tst/database_modis/$(strip $(MDDBINFOCUSTOM))
      endif
    endif
  else
    # remake with cgen should use generated database first after custom release, so as not to restore unchanged data to the default in full database
    CODEGEN_DATABASE_IN = $(CODEGEN_DATABASE_OUT)    
  endif
else
  ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
    ifneq ($(strip $(MODIS_CONFIG)),TRUE)
      CODEGEN_DATABASE_IN = $(wildcard $(CUS_MTK_REL)/dhl/database/MDDB*)
    else
      CODEGEN_DATABASE_IN = $(wildcard $(CUS_MTK_REL)/dhl/database_modis/MDDB*)
    endif
  else ifeq ($(wildcard $(CODEGEN_DATABASE_OUT)),)
    ifneq ($(strip $(MODIS_CONFIG)),TRUE)
      CODEGEN_DATABASE_IN = $(wildcard $(CUS_MTK_REL)/dhl/database/MDDB*)
    else
      CODEGEN_DATABASE_IN = $(wildcard $(CUS_MTK_REL)/dhl/database_modis/MDDB*)
    endif
  else
    CODEGEN_DATABASE_IN = $(CODEGEN_DATABASE_OUT)
  endif
endif
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  CODEGEN_DATABASE_IN = $(CODEGEN_DATABASE_OUT)
endif

ifneq ($(strip $(TEST_LOAD_TYPE)),BASIC)
  # Modem
  ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
    ifeq ($(strip $(DHL_SUPPORT)),TRUE)
      ifeq ($(LTE_SOURCE_BUILD),TRUE)
        CODEGEN_PREPROCESS_MODEM     += $(MODIS_RULESDIR)/codegen_dep/libParseDbModem_sec.det
        CODEGEN_PREPROCESS_MODEM     += $(MODIS_RULESDIR)/codegen_dep/gv_db_sec.det
        CODEGEN_DEPENDENCY_MODEM_SEC += $(MODIS_RULESDIR)/codegen_dep/cgen_c_sec.det
        CODEGEN_DEPENDENCY_MODEM_SEC += $(MODIS_RULESDIR)/codegen_dep/cgen_l1_sec.det
        CODEGEN_DEPENDENCY_MODEM_SEC += $(MODIS_RULESDIR)/codegen_dep/cgen_gv_sec.det
      else
        ifeq ($(strip $(NO_LTECGEN)),TRUE)
         CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_c.det
        endif
      endif
      CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_ap_libParseDbModem.det
    else
      CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_c.det
    endif
    CODEGEN_PREPROCESS_MODEM += $(MODIS_RULESDIR)/codegen_dep/libParseDbModem.det
    CODEGEN_PREPROCESS_MODEM += $(MODIS_RULESDIR)/codegen_dep/gv_db.det    
    CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_l1.det
    CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_gv.det
  else
    ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
      ifneq ($(strip $(TMD_FILES)),)
        CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_l1.det
      endif
    endif
  endif
  ifneq ($(strip $(TEST_LOAD_TYPE)),L1S)
    CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_cm.det
    CODEGEN_PREPROCESS_MODEM += $(MODIS_RULESDIR)/codegen_dep/custom_parse_db.det
    ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
      CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_ap_srcParseDbModem.det
      CODEGEN_PREPROCESS_MODEM += $(MODIS_RULESDIR)/codegen_dep/srcParseDbModem.det
    else ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
      CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_ap_srcParseDbModem.det
      CODEGEN_PREPROCESS_MODEM += $(MODIS_RULESDIR)/codegen_dep/srcParseDbModem.det
    endif
    ifeq ($(strip $(DHL_SUPPORT)),TRUE)
      ifeq ($(LTE_SOURCE_BUILD),TRUE)
        CODEGEN_PREPROCESS_MODEM     += $(MODIS_RULESDIR)/codegen_dep/codegen_single_Modem_sec.det
        CODEGEN_DEPENDENCY_MODEM_SEC += $(MODIS_RULESDIR)/codegen_dep/cgen_ps_Modem_sec.det
      endif
    endif
    ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
      ifeq ($(RUN_UMTS_GEN),TRUE)
        ifeq ($(strip $(DHL_SUPPORT)),TRUE)
          ifeq ($(LTE_SOURCE_BUILD),TRUE)
            CODEGEN_PREPROCESS_MODEM     += $(MODIS_RULESDIR)/codegen_dep/unionTag_parse_sec.det
            CODEGEN_DEPENDENCY_MODEM_SEC += $(MODIS_RULESDIR)/codegen_dep/cgen_un_sec.det
          endif
        endif
        CODEGEN_PREPROCESS_MODEM += $(MODIS_RULESDIR)/codegen_dep/unionTag_parse.det
        CODEGEN_PREPROCESS_MODEM += $(MODIS_RULESDIR)/codegen_dep/unionTag_parse_ext.det
        CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_un.det
      endif
    else
      ifeq ($(strip $(C2K_RELEASE)),TRUE)
        ifeq ($(strip $(DHL_SUPPORT)),TRUE)
          CODEGEN_PREPROCESS_MODEM += $(MODIS_RULESDIR)/codegen_dep/gv_db_ext.det
          CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_gv.det
        endif
        CODEGEN_PREPROCESS_MODEM += $(MODIS_RULESDIR)/codegen_dep/unionTag_parse_ext.det
        CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_un.det
      endif
    endif
    CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_ps_Modem.det
    CODEGEN_PREPROCESS_MODEM += $(MODIS_RULESDIR)/codegen_dep/codegen_single_Modem.det
    CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_db_sig.det
    ifneq ($(strip $(MODIS_CONFIG)),TRUE)
      CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_filter_gen_Modem.det
    else
      ifneq ($(wildcard $(BUILD_TSTDIR)/src/tst_file_default_Catcher_filter.c),)
        # exist $(BUILD_TSTDIR)/src/tst_file_default_Catcher_filter.c
      else
        CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_filter_gen_Modem.det
      endif
    endif
  else
    ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
      ifneq ($(strip $(MODIS_CONFIG)),TRUE)
        ifeq ($(strip $(DHL_SUPPORT)),TRUE)
          ifeq ($(LTE_SOURCE_BUILD),TRUE)
            CODEGEN_PREPROCESS_MODEM     += $(MODIS_RULESDIR)/codegen_dep/l1v_db_sec.det
            CODEGEN_PREPROCESS_MODEM     += $(MODIS_RULESDIR)/codegen_dep/codegen_single_Modem_sec.det
            CODEGEN_DEPENDENCY_MODEM_SEC += $(MODIS_RULESDIR)/codegen_dep/cgen_l1v_sec.det
            CODEGEN_DEPENDENCY_MODEM_SEC += $(MODIS_RULESDIR)/codegen_dep/cgen_ps_Modem_sec.det
          endif
        endif
        CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_l1v.det
        CODEGEN_PREPROCESS_MODEM += $(MODIS_RULESDIR)/codegen_dep/l1v_db.det
      endif
    endif
    ifeq ($(strip $(C2K_RELEASE)),TRUE)
      ifeq ($(strip $(DHL_SUPPORT)),TRUE)
        CODEGEN_PREPROCESS_MODEM += $(MODIS_RULESDIR)/codegen_dep/gv_db_ext.det
        CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_gv.det
      endif
    endif
    CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_ps_Modem.det
    CODEGEN_PREPROCESS_MODEM += $(MODIS_RULESDIR)/codegen_dep/codegen_single_Modem.det
    CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_db_sig.det
  endif
  ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
    ifeq ($(strip $(MTK_INTERNAL)),TRUE)
#      CODEGEN_DEPENDENCY_MODEM += $(MODIS_RULESDIR)/codegen_dep/cgen_enc.det
    endif
  endif
endif

CLEAN_CODEGEN_DEPENDENCY = $(filter-out $(MODIS_RULESDIR)/codegen_dep/nvram_%,$(wildcard $(MODIS_RULESDIR)/codegen_dep/*.det))
ifeq ($(strip $(SMART_CHECK)),TRUE)
  AUTO_CHECK_CGEN = TRUE
endif

# CgenPreprocess
# function: generate the makfile command for cgen preprocess
# arguement 1: input source file to be preprocessed
# arguement 2: output preprocessed result
# arguement 3: output dependency file name, file path for cgen should be always r/codegen_dep
define CgenPreprocess
ifneq ($$(strip $$(AUTO_CHECK_CGEN)),TRUE)
  $$(strip $$(MODIS_RULESDIR))/codegen_dep/$(3): FORCE
else
  -include $$(strip $$(MODIS_RULESDIR))/codegen_dep/./$(3)
endif
$$(strip $$(MODIS_RULESDIR))/codegen_dep/$(3): $(1) $$(NEED_CHECK_DEPEND_LIST)
ifeq ($$(filter $$(MAKECMDGOALS),cgen_preprocess),)
  # mbis time probe
  ifeq ($$(strip $$(MBIS_EN)),TRUE)
		@$$(ECHO) -n -t "T_S,$$@,T," >> $$(MBIS_BUILD_TIME_TMP)
  endif
endif
	@$(ECHO) -n Preprocessing $(1) ...
	@$$(IF_NOT_EXIST) $$(patsubst %/,%,$$(dir $(2))) $$(THEN) $$(MKDIR) $$(patsubst %/,%,$$(dir $(2))) $$(CMD_END)
	@$$(IF_NOT_EXIST) $$(strip $$(TMPDIR))/~inc_def.tmp $$(THEN) $$(MAKE) -fmake/${COMMON_ROOT}/build.mak -r -R --no-print-directory $$(strip $$(TMPDIR))/~inc_def.tmp $$(CMD_END)
ifneq ($$(strip $$(MODIS_CONFIG)),TRUE)
  ifeq ($$(strip $$(COMPILER)),GCC)
    ifeq ($$(strip $(4)),TRUE)
	@(($$(CC) -E -W -DGEN_FOR_CPARSER -DGEN_FOR_PC $$(VIA)$$(strip $$(TMPDIR))/~inc_fdd_def.tmp -USTDC_HEADERS -o $$(patsubst %.txt,%_fdd.txt,$$(patsubst %.db,%_fdd.db,$(2))) $(1) $$(DEPEND) $$(basename $$@).d 2>$$(basename $$@).log) $$(WITH) \
		($$(IF_ERR_TRUE) $$(THEN) (($$(CAT) $$(basename $$@).log >>$$(CODE_GEN_LOG)) $$(WITH) (exit 1)) $$(CMD_END)))
      ifeq ($$(strip $$(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
	@(($$(CC) -E -W -DGEN_FOR_CPARSER -DGEN_FOR_PC $$(VIA)$$(strip $$(TMPDIR))/~inc_tdd_def.tmp -USTDC_HEADERS -o $$(patsubst %.txt,%_tdd.txt,$$(patsubst %.db,%_tdd.db,$(2))) $(1) $$(DEPEND) $$(basename $$@).d 2>$$(basename $$@).log) $$(WITH) \
		($$(IF_ERR_TRUE) $$(THEN) (($$(CAT) $$(basename $$@).log >>$$(CODE_GEN_LOG)) $$(WITH) (exit 1)) $$(CMD_END)))
      endif
    else
	@(($$(CC) -E -W -DGEN_FOR_CPARSER -DGEN_FOR_PC $$(VIA)$$(strip $$(TMPDIR))/~inc_def.tmp -USTDC_HEADERS -o $(2) $(1) $$(DEPEND) $$(basename $$@).d 2>$$(basename $$@).log) $$(WITH) \
		($$(IF_ERR_TRUE) $$(THEN) (($$(CAT) $$(basename $$@).log >>$$(CODE_GEN_LOG)) $$(WITH) (exit 1)) $$(CMD_END)))
    endif
  endif
	@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $$@ $$@ $$(patsubst %/,%,$$(dir $$@)) "\b$$(basename $$(notdir $$@))\.d"
	@$$(IF_EXIST) $$(basename $$@).d $$(THEN) $$(DEL_FILE) $$(basename $$@).d $$(CMD_END)
else
  ifeq ($$(strip $$(MODIS_COMPILER)),VC2008)
    ifeq ($$(strip $(4)),TRUE)
	@(($$(CC_MODIS) /E /w /DGEN_FOR_CPARSER /DGEN_FOR_PC /USTDC_HEADERS /nologo /showIncludes @$$(strip $$(TMPDIR))/~inc_fdd_def.tmp $(1) >$$(patsubst %.txt,%_fdd.txt,$$(patsubst %.db,%_fdd.db,$(2))) 2>$$(basename $$@).log) $$(WITH) \
		($$(IF_ERR_TRUE) $$(THEN) ($$(CAT) $$(basename $$@).log >>$$(CODE_GEN_LOG)) $$(WITH) (exit 1) $$(CMD_END)))
      ifeq ($$(strip $$(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
	@(($$(CC_MODIS) /E /w /DGEN_FOR_CPARSER /DGEN_FOR_PC /USTDC_HEADERS /nologo /showIncludes @$$(strip $$(TMPDIR))/~inc_tdd_def.tmp $(1) >$$(patsubst %.txt,%_tdd.txt,$$(patsubst %.db,%_tdd.db,$(2))) 2>$$(basename $$@).log) $$(WITH) \
		($$(IF_ERR_TRUE) $$(THEN) ($$(CAT) $$(basename $$@).log >>$$(CODE_GEN_LOG)) $$(WITH) (exit 1) $$(CMD_END)))
      endif
    else
	@(($$(CC_MODIS) /E /w /DGEN_FOR_CPARSER /DGEN_FOR_PC /USTDC_HEADERS /nologo /showIncludes @$$(strip $$(TMPDIR))/~inc_def.tmp $(1) >$(2) 2>$$(basename $$@).log) $$(WITH) \
		($$(IF_ERR_TRUE) $$(THEN) ($$(CAT) $$(basename $$@).log >>$$(CODE_GEN_LOG)) $$(WITH) (exit 1) $$(CMD_END)))
    endif
	@$(ECHO) -n Note: including file: $(1) >>$$(basename $$@).log
	@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $$@ $$@ $$(patsubst %/,%,$$(dir $$@)) "\b$$(basename $$(notdir $$@))\.log"
  else ifeq ($$(strip $$(MODIS_COMPILER)),MINGW)
	@(($$(CC_MODIS) -E -W -DGEN_FOR_CPARSER -DGEN_FOR_PC $$(VIA)$$(strip $$(TMPDIR))/~inc_def.tmp -USTDC_HEADERS -o $(2) $(1) $$(DEPEND) $$(basename $$@).d 2>$$(basename $$@).log) $$(WITH) \
		($$(IF_ERR_TRUE) $$(THEN) (($$(CAT) $$(basename $$@).log >>$$(CODE_GEN_LOG)) $$(WITH) (exit 1)) $$(CMD_END)))
	@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $$@ $$@ $$(patsubst %/,%,$$(dir $$@)) "\b$$(basename $$(notdir $$@))\.d"
	@$$(IF_EXIST) $$(basename $$@).d $$(THEN) $$(DEL_FILE) $$(basename $$@).d $$(CMD_END)
  endif
endif
	@$$(IF_EXIST) $$(basename $$@).log $$(THEN) $$(DEL_FILE) $$(basename $$@).log $$(CMD_END)
ifeq ($$(filter $$(MAKECMDGOALS),cgen_preprocess),)
	@$(ECHO) -n $$@  >>$$(CODE_GEN_LST)
	@$(ECHO) -n $(2) >>$$(CODE_GEN_LST)
	# mbis time probe
  ifeq ($$(strip $$(MBIS_EN)),TRUE)
		@$$(ECHO) -n -t "T_E,$$@,T," >> $$(MBIS_BUILD_TIME_TMP)
  endif
endif
endef

# *************************************************************************
#  Tools code preprocess and generation
# *************************************************************************
ifeq ($(strip $(ACTION)),slim_codegen)
  ifneq ($(strip $(UTRAN_MODE_SUPPORT)),NONE)
slim_codegen: cleancodegen asngen umts_gen codegen asnregen cleanbin
  else
slim_codegen: cleancodegen asngen codegen asnregen cleanbin
  endif
	@$(ECHO) -n Done.
else
  ## codegen
  ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
  # [TATAKA Migrate] multi-mode
code_generate: sysgen cleancodegen eas_gen asngen umts_gen codegen asnregen cleanbin mcddll_update
  else
  # [TATAKA Migrate] single-mode
code_generate: sysgen cleancodegen eas_gen asngen codegen cleanbin mcddll_update_ltesm
  endif
	@$(ECHO) -n Done.
endif

ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
 # [TATAKA Migrate] multi-mode
codegen: ss_lcs_gen gencustominfo nvram_edit_h_gen nvram_auto_gen genmoduleinfo cgen
else
# [TATAKA Migrate] single-mode
codegen: nvram_edit_h_gen nvram_auto_gen genmoduleinfo cgen
endif

# *************************************************************************
# TARGET: umts_gen
# 3G Codegen Gen Files: ASN and DBME
# *************************************************************************
umts_gen: $(PREGEN_DEP)/umts_gen.det
ifeq ($(strip $(SMART_CHECK)),TRUE)
include $(wildcard $(PREGEN_DEP)/./umts_gen.det)
else
$(PREGEN_DEP)/umts_gen.det: FORCE
endif
$(PREGEN_DEP)/umts_gen.det:
ifeq ($(RUN_UMTS_GEN),TRUE)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

	@$(IF_NOT_EXIST) $(strip $(PREGEN_DEP)) $(THEN) ($(MKDIR) $(strip $(PREGEN_DEP))) $(CMD_END)
	@$(IF_EXIST) $@ $(THEN) ($(DEL_FILE) $@) $(CMD_END)

ifneq ($(strip $(MODIS_CONFIG)),TRUE)
    # FDD umts_gen
	@$(CHDIR) $(strip $(UAS_FDD_FOLDER)) $(AND) \
	(perl uas_generate.pl --CC="$(CC)" --COMPILER=$(COMPILER) --feature=" $(UMTS_RELEASE_SUPPORT) UMTS_FDD_MODE_SUPPORT ULCS_ASN_SUPPORT_R99 $(REMOVE_DEBUG_INFO) " --deffile="../../../$(INFOLOG)" --tst_src_path="$(MODIS_TST_DB)" --tst_dst_path="$(MODISBUILD_TST_DB)" --targetdir="$(PROJDIR)" --log_dir="$(strip $(COMPLOGDIR))" $@)
	@$(CHDIR) $(strip $(LAS_FOLDER)/uise) $(AND) \
	(perl las_generate.pl --CC="$(CC)" --COMPILER=$(COMPILER) --feature=" $(UMTS_RELEASE_SUPPORT) UMTS_FDD_MODE_SUPPORT ULCS_ASN_SUPPORT_R99 $(REMOVE_DEBUG_INFO) " --deffile="../../../../$(INFOLOG)" --tst_src_path="$(MODIS_TST_DB)" --tst_dst_path="$(MODISBUILD_TST_DB)" --targetdir="$(PROJDIR)" --log_dir="$(strip $(COMPLOGDIR))" $@)

    # TDD umts_gen
  ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
	@$(CHDIR) $(strip $(UAS_TDD_FOLDER)) $(AND) \
	(perl uas_generate.pl --CC="$(CC)" --COMPILER=$(COMPILER) --feature=" $(UMTS_RELEASE_SUPPORT) UMTS_TDD128_MODE_SUPPORT ULCS_ASN_SUPPORT_R99 $(REMOVE_DEBUG_INFO) " --deffile="../../../$(INFOLOG)"  --tst_src_path="$(MODIS_TST_DB)" --tst_dst_path="$(MODISBUILD_TST_DB)" --targetdir="$(PROJDIR)" --log_dir="$(strip $(COMPLOGDIR))" $@)
	@$(CHDIR) $(strip $(LAS_FOLDER)/tise) $(AND) \
	(perl las_generate.pl --CC="$(CC)" --COMPILER=$(COMPILER) --feature=" $(UMTS_RELEASE_SUPPORT) UMTS_TDD128_MODE_SUPPORT ULCS_ASN_SUPPORT_R99 $(REMOVE_DEBUG_INFO) " --deffile="../../../../$(INFOLOG)"  --tst_src_path="$(MODIS_TST_DB)" --tst_dst_path="$(MODISBUILD_TST_DB)" --targetdir="$(PROJDIR)" --log_dir="$(strip $(COMPLOGDIR))" $@)
  endif
else
    # FDD umts_gen
	@$(CHDIR) $(strip $(UAS_FDD_FOLDER)) $(AND) \
	(perl uas_generate.pl --CC="$(CC_MODIS)" --COMPILER=$(MODIS_COMPILER) --feature=" $(UMTS_RELEASE_SUPPORT) UMTS_FDD_MODE_SUPPORT ULCS_ASN_SUPPORT_R99 MoDIS " --deffile="../../../$(INFOLOG_MODIS)" --tst_src_path="$(MODIS_TST_DB)" --tst_dst_path="$(MODISBUILD_TST_DB)" --targetdir="$(PROJDIR)" --log_dir="$(strip $(MODISLOGDIR))" $@)
    # TDD umts_gen
  ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
	@$(CHDIR) $(strip $(UAS_TDD_FOLDER)) $(AND) \
	(perl uas_generate.pl --CC="$(CC_MODIS)" --COMPILER=$(MODIS_COMPILER) --feature=" $(UMTS_RELEASE_SUPPORT) UMTS_TDD128_MODE_SUPPORT ULCS_ASN_SUPPORT_R99 MoDIS " --deffile="../../../$(INFOLOG_MODIS)"  --tst_src_path="$(MODIS_TST_DB)" --tst_dst_path="$(MODISBUILD_TST_DB)" --targetdir="$(PROJDIR)" --log_dir="$(strip $(MODISLOGDIR))" $@)
  endif
endif
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif

# *************************************************************************
# TARGET: eas_gen
# To generate LTE asn.1 codec library by LTE asn.1 compiler
# *************************************************************************
eas_gen: $(PREGEN_DEP)/eas_gen.det
ifeq ($(strip $(SMART_CHECK)),TRUE)
include $(wildcard $(PREGEN_DEP)/./eas_gen.det)
else
$(PREGEN_DEP)/eas_gen.det: FORCE
endif
$(PREGEN_DEP)/eas_gen.det:
ifneq ($(wildcard ${PCORE_ROOT}/modem/eas/eas_generate.pl),)
ifeq ($(RUN_EAS_GEN),TRUE)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

	@$(IF_NOT_EXIST) $(strip $(PREGEN_DEP)) $(THEN) ($(MKDIR) $(strip $(PREGEN_DEP))) $(CMD_END)
	@$(IF_EXIST) $@ $(THEN) ($(DEL_FILE) $@) $(CMD_END)
	
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(CHDIR) $(strip $(EAS_FOLDER)) $(AND) \
	((perl eas_generate.pl --feature="$(LTE_RELEASE_SUPPORT)" --targetdir="$(PROJDIR)" --log_dir="$(strip $(COMPLOGDIR))" --depTarget="$@") $(WITH) \
	$(IF_ERR_TRUE) $(THEN) (echo Error: eas_gen Failed. Please check $(strip $(COMPLOGDIR))/eas_gen.log $(WITH) exit 1) $(CMD_END))
  else
	@$(CHDIR) $(strip $(EAS_FOLDER)) $(AND) \
	((perl eas_generate.pl --feature="$(LTE_RELEASE_SUPPORT)" --targetdir="$(PROJDIR)" --log_dir="$(strip $(MODISLOGDIR))" --depTarget="$@") $(WITH)\
	$(IF_ERR_TRUE) $(THEN) (echo Error: eas_gen Failed. Please check $(strip $(MODISLOGDIR))/eas_gen.log $(WITH) exit 1) $(CMD_END))
  endif
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif # ENDIF RUS_EAS_GEN
endif
# ---------------------------------------
# SS LCS Codegen Gen Files: ASN
# ---------------------------------------
ss_lcs_gen: $(PREGEN_DEP)/ss_lcs_gen.det
ifeq ($(strip $(SMART_CHECK)),TRUE)
include $(wildcard $(PREGEN_DEP)/./ss_lcs_gen.det)
else
$(PREGEN_DEP)/ss_lcs_gen.det: FORCE
endif
$(PREGEN_DEP)/ss_lcs_gen.det:
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(IF_NOT_EXIST) $(strip $(PREGEN_DEP)) $(THEN) ($(MKDIR) $(strip $(PREGEN_DEP))) $(CMD_END)
	@$(IF_EXIST) $@ $(THEN) ($(DEL_FILE) $@) $(CMD_END)

	@$(IF_NOT_EXIST) $(strip $(GEN_SSDIR)) $(THEN) ($(MKDIR) $(strip $(GEN_SSDIR))) $(CMD_END)
	@$(CHDIR) ${PCORE_ROOT}/modem/l4/csm/ss/tools $(AND) \
		(perl ss_lcs_generate.pl $(strip $(GEN_SSDIR)) $@ > ../../../../../../$(strip $(COMPLOGDIR))/ss_lcs_generate.log 2>&1) $(WITH) \
		($(IF_ERR_TRUE) $(THEN) (echo Error: ss_lcs_gen Failed. Please check $(strip $(COMPLOGDIR))/ss_lcs_generate.log $(WITH) exit 1) $(CMD_END))
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif

# *************************************************************************
# TARGET: lte_mcddll REAL
# *************************************************************************
mcddll_update_ltesm:
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
mcddll_update_ltesm: codegen 
endif
ifneq ($(filter TRUE,$(RUN_LTE_MCDDLL) $(RUN_LTE_MCDDLL_ONLY_COPY)),)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) "$@ START TIME=" >> $(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n >> $(strip $(TARGDIR))/build.log

ifeq ($(strip $(RUN_LTE_MCDDLL_ONLY_COPY)),FALSE)
	@$(IF_NOT_EXIST) $(COMPLOGDIR) $(THEN) \
		($(MKDIR) $(COMPLOGDIR)) $(CMD_END)
	@$(STRCMPEX) def def e $(strip $(TMPDIR))/~def.tmp $(foreach def,$(sort $(COM_DEFS)),$(def))
	@perl $(strip ${PCORE_TOOLS})/lnitem.pl $(strip $(TMPDIR))/~def.tmp
	@$(MAKE) -fmake/${COMMON_ROOT}/build.mak -r -R --no-print-directory  GAS_FOLDER=$(strip $(PCORE_ROOT))/modem/gas UAS_FOLDER=$(strip $(PCORE_ROOT))/modem/uas XGEN_SWITCH_FDD_TDD=FDD $(strip $(TMPDIR))/~lte_mcddll_inc.tmp

	@($(ECHO) -n "[ COMMON OPTION ]" > $(MCDDLL_INFOLOG)) $(AND) \
		($(CAT) $(strip $(TMPDIR))/~def.tmp >> $(MCDDLL_INFOLOG))
	@($(ECHO) -n "[ COMMON INCLUDE PATH ]" >> $(MCDDLL_INFOLOG)) $(AND) \
		($(CAT) $(strip $(TMPDIR))/~lte_mcddll_inc.tmp >> $(MCDDLL_INFOLOG))
	@$(IF_EXIST) $(MCDDLL_INFOLOG) $(THEN)\
		($(IF_NOT_EXIST) $(strip $(PROJDIR))/modem/mcddll $(THEN) \
			($(MKDIR) $(strip $(PROJDIR))/modem/mcddll) $(AND) \
			($(COPY_FILE) $(MCDDLL_INFOLOG) $(strip $(PROJDIR))/modem/mcddll > $(DEV_NUL)) \
		$(CMD_END))\
	 $(CMD_END)

  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(CHDIR) ${PCORE_ROOT}/modem/common/mcddll $(AND) \
	(perl update_lte_mcddll_mingw.pl --L4=0 --MODE="TARGET" --VERNO=$(strip $(VERNO)) --HW_VERSION=$(strip $(PLATFORM))_$(strip $(CHIP_VER)) --PROJDIR=$(PROJDIR) --BUILD_L4_DIR=$(BUILD_L4DIR) --MINGW_DIR=$(MinGWDir) --COMPLOGDIR=$(COMPLOGDIR) --SMARTNEW=$(strip $(TMPDIR))/$@.det 2>../../../../$(MCDDLL_UPDATE_LOG) \
	$(WITH) \
	$(IF_ERR_TRUE) $(THEN) (echo Error: $@ Failed! Please check $(strip $(MCDDLL_UPDATE_LOG)) $(WITH) exit 1) $(CMD_END))
  else
	@$(CHDIR) ${PCORE_ROOT}/modem/common/mcddll $(AND) \
	(perl update_lte_mcddll_mingw.pl --L4=0 --MODE=MoDIS --VERNO=$(strip $(VERNO)) --HW_VERSION=$(MODIS_UESIM) --PROJDIR=$(PROJDIR) --BUILD_L4_DIR=$(BUILD_L4DIR) --MINGW_DIR=$(MinGWDir) --COMPLOGDIR=$(MODISLOGDIR) --SMARTNEW=$(strip $(TMPDIR))/$@.det 2>../../../../$(MCDDLL_UPDATE_LOG) \
	$(WITH) \
	$(IF_ERR_TRUE) $(THEN) (echo Error: $@ Failed! Please check $(strip $(MCDDLL_UPDATE_LOG)) $(WITH) exit 1) $(CMD_END))
  endif
	@$(COPY_FILE) $(strip $(PROJDIR))/modem/mcddll/mcddll.dll $(strip $(MODISBUILD_TST_DB))/mcddll.dll >$(DEV_NUL)
else
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
    ifeq ($(strip $(DHL_SUPPORT)),TRUE)    
		@$(COPY_FILE) $(strip $(CUS_MTK_REL))/dhl/database/mcddll.dll $(strip $(MODISBUILD_TST_DB))/mcddll.dll >$(DEV_NUL)
    else
		@$(COPY_FILE) $(strip $(CUS_MTK_REL))/tst/database/mcddll.dll $(strip $(MODISBUILD_TST_DB))/mcddll.dll >$(DEV_NUL)
    endif
  else
    ifeq ($(strip $(DHL_SUPPORT)),TRUE)    
		@$(COPY_FILE) $(strip $(CUS_MTK_REL))/dhl/database_modis/mcddll.dll $(strip $(MODISBUILD_TST_DB))/mcddll.dll >$(DEV_NUL)
    else
		@$(COPY_FILE) $(strip $(CUS_MTK_REL))/tst/database_modis/mcddll.dll $(strip $(MODISBUILD_TST_DB))/mcddll.dll >$(DEV_NUL)
    endif
  endif
endif

	@$(ECHO) "$@ END TIME=" >> $(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n >> $(strip $(TARGDIR))/build.log
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif # ifneq ($(filter TRUE,$(RUN_LTE_MCDDLL) $(RUN_LTE_MCDDLL_ONLY_COPY)),)

# *************************************************************************
# TARGET: temp add
# *************************************************************************
$(strip $(TMPDIR))/~mcddll_inc.tmp $(strip $(TMPDIR))/~lte_mcddll_inc.tmp: $(strip $(MAKE_COMMON))/xgeninc.mak $(NEED_CHECK_DEPEND_LIST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  ifeq ($(strip $(COMPILER)),GCC)
	@$(STRCMPEX) inc inc e $@ $(foreach inc,$(subst \,/,$(XGEN_INC_DIR)),$(inc))
  endif
else
  ifeq ($(strip $(MODIS_COMPILER)),VC2008)
	@$(STRCMPEX) inc inc e $@ $(foreach inc,$(XGEN_INC_DIR),$(inc))
  else ifeq ($(strip $(MODIS_COMPILER)),MINGW)
	@$(STRCMPEX) inc inc e $@ $(foreach inc,$(subst \,/,$(XGEN_INC_DIR)),$(inc))
  endif
endif
	@perl $(strip ${PCORE_TOOLS})/lnitem.pl $@
	@$(ECHO) -n "$@" >> $(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: mcddll_update
# *************************************************************************
IDB_PARSER_EXE := pcore\tools\IDB_Parser\IDB_Parser.exe
ifeq ($(strip $(MODIS_CONFIG)),FALSE)
  RUN_MCDDLL_UPDATE_INPUT := $(subst /,\,$(PROJDIR))\modem\mcddll\Release\*.idb
else
  RUN_MCDDLL_UPDATE_INPUT := $(subst /,\,$(PROJDIR))\modem\mcddll\MoDIS_Release\*.idb
endif

ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  ifeq ($(strip $(ACTION)),slim_mcddll)
slim_mcddll:
  else
mcddll_update: codegen $(POSTGEN_DEP)/mcddll_update.det
  endif
endif
mcddll_update: $(POSTGEN_DEP)/mcddll_update.det

ifeq ($(strip $(SMART_CHECK)),TRUE)
include $(wildcard $(POSTGEN_DEP)/./mcddll_update.det)
else
$(POSTGEN_DEP)/mcddll_update.det: FORCE
endif
$(POSTGEN_DEP)/mcddll_update.det:
ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
ifneq ($(filter TRUE,$(RUN_MCDDLL_UPDATE) $(RUN_MCDDLL_UPDATE_L4)),)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) "$@ START TIME=" >> $(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n >> $(strip $(TARGDIR))/build.log
	
	@$(IF_NOT_EXIST) $(strip $(PREGEN_DEP)) $(THEN) ($(MKDIR) $(strip $(PREGEN_DEP))) $(CMD_END)
	@$(IF_EXIST) $@ $(THEN) ($(DEL_FILE) $@) $(CMD_END)
	@$(IF_NOT_EXIST) $(COMPLOGDIR) $(THEN) ($(MKDIR) $(COMPLOGDIR)) $(CMD_END)
	@$(STRCMPEX) def def e $(strip $(TMPDIR))/~def.tmp $(foreach def,$(sort $(COM_DEFS)),$(def))
	@perl $(strip ${PCORE_TOOLS})/lnitem.pl $(strip $(TMPDIR))/~def.tmp
	@$(MAKE) -fmake/${COMMON_ROOT}/build.mak -r -R --no-print-directory  GAS_FOLDER=$(strip $(PCORE_ROOT))/modem/gas UAS_FOLDER=$(strip $(PCORE_ROOT))/modem/uas XGEN_SWITCH_FDD_TDD=FDD $(strip $(TMPDIR))/~mcddll_inc.tmp

	@($(ECHO) -n "[ COMMON OPTION ]" > $(MCDDLL_INFOLOG)) $(AND) \
		($(CAT) $(strip $(TMPDIR))/~def.tmp >> $(MCDDLL_INFOLOG))
	@($(ECHO) -n "[ COMMON INCLUDE PATH ]" >> $(MCDDLL_INFOLOG)) $(AND) \
		($(CAT) $(strip $(TMPDIR))/~mcddll_inc.tmp >> $(MCDDLL_INFOLOG))
	@$(IF_EXIST) $(MCDDLL_INFOLOG) $(THEN)\
		($(IF_NOT_EXIST) $(strip $(PROJDIR))/modem/mcddll $(THEN) \
			($(MKDIR) $(strip $(PROJDIR))/modem/mcddll) $(AND) \
			($(COPY_FILE) $(MCDDLL_INFOLOG) $(strip $(PROJDIR))/modem/mcddll > $(DEV_NUL)) \
		$(CMD_END))\
	 $(CMD_END)

ifeq ($(strip $(RUN_MCDDLL_UPDATE)),TRUE)
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(CHDIR) ${PCORE_ROOT} $(AND) \
	(perl ./modem/common/mcddll/updatemcddll_mingw.pl --PROJECT="$(strip $(PROJECT_MAKEFILE))" --L4=0 --MODE="TARGET" --VERNO=$(strip $(VERNO)) --HW_VERSION=$(strip $(PLATFORM))_$(strip $(CHIP_VER)) --PROJDIR=$(PROJDIR) --BUILD_L4_DIR=$(BUILD_L4DIR) --MINGW_DIR=$(MinGWDir) --COMPLOGDIR=$(COMPLOGDIR) --SMARTNEW=../$@ 2> ../$(MCDDLL_UPDATE_LOG) \
	$(WITH) \
	$(IF_ERR_TRUE) $(THEN) (echo Error: $@ Failed! Please check $(strip $(MCDDLL_UPDATE_LOG)) $(WITH) exit 1) $(CMD_END))
  else
	@$(CHDIR) ${PCORE_ROOT} $(AND) \
	(perl ./modem/common/mcddll/updatemcddll_mingw.pl --PROJECT="$(strip $(PROJECT_MAKEFILE))" --L4=0 --MODE=MoDIS --VERNO=$(strip $(VERNO)) --HW_VERSION=$(MODIS_UESIM) --PROJDIR=$(PROJDIR) --BUILD_L4_DIR=$(BUILD_L4DIR) --MINGW_DIR=$(MinGWDir) --COMPLOGDIR=$(MODISLOGDIR) --SMARTNEW=../$@ 2>../$(MCDDLL_UPDATE_LOG) \
	$(WITH) \
	$(IF_ERR_TRUE) $(THEN) (echo Error: $@ Failed! Please check $(strip $(MCDDLL_UPDATE_LOG)) $(WITH) exit 1) $(CMD_END))
  endif
	@$(COPY_FILE) $(strip $(PROJDIR))/modem/mcddll/mcddll.dll $(strip $(MODISBUILD_TST_DB))/mcddll.dll >$(DEV_NUL)
else ifeq ($(strip $(RUN_MCDDLL_UPDATE_L4)),TRUE)
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(CHDIR) ${PCORE_ROOT} $(AND) \
	(perl ./modem/common/mcddll/updatemcddll_mingw.pl --PROJECT="$(strip $(PROJECT_MAKEFILE))" --L4=1 --MODE="TARGET" --VERNO=$(strip $(VERNO)) --HW_VERSION=$(strip $(PLATFORM))_$(strip $(CHIP_VER)) --PROJDIR=$(PROJDIR) --BUILD_L4_DIR=$(BUILD_L4DIR) --REL_DIR=$(CUS_MTK_REL) --MINGW_DIR=$(MinGWDir) --COMPLOGDIR=$(COMPLOGDIR) --SMARTNEW=../$@ 2>../$(MCDDLL_UPDATE_LOG) \
	$(WITH) \
	$(IF_ERR_TRUE) $(THEN) (echo Error: $@ Failed! Please check $(strip $(MCDDLL_UPDATE_LOG)) $(WITH) exit 1) $(CMD_END))
  else
	@$(CHDIR) ${PCORE_ROOT} $(AND) \
	(perl ./modem/common/mcddll/updatemcddll_mingw.pl --PROJECT="$(strip $(PROJECT_MAKEFILE))" --L4=1 --MODE=MoDIS --VERNO=$(strip $(VERNO)) --HW_VERSION=$(MODIS_UESIM) --PROJDIR=$(PROJDIR) --BUILD_L4_DIR=$(BUILD_L4DIR) --REL_DIR=$(CUS_MTK_REL) --MINGW_DIR=$(MinGWDir) --COMPLOGDIR=$(MODISLOGDIR) --SMARTNEW=../$@ 2>../$(MCDDLL_UPDATE_LOG) \
	$(WITH) \
	$(IF_ERR_TRUE) $(THEN) (echo Error: $@ Failed! Please check $(strip $(MCDDLL_UPDATE_LOG)) $(WITH) exit 1) $(CMD_END))
  endif
	@$(COPY_FILE) $(strip $(PROJDIR))/modem/mcddll/mcddll.dll $(strip $(MODISBUILD_TST_DB))/mcddll.dll >$(DEV_NUL)
else
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
		@$(COPY_FILE) $(strip $(CUS_MTK_REL))/tst/database/mcddll.dll $(strip $(MODISBUILD_TST_DB))/mcddll.dll >$(DEV_NUL)
  else
		@$(COPY_FILE) $(strip $(CUS_MTK_REL))/tst/database_modis/mcddll.dll $(strip $(MODISBUILD_TST_DB))/mcddll.dll >$(DEV_NUL)
  endif
endif

	@$(ECHO) "$@ END TIME=" >> $(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n >> $(strip $(TARGDIR))/build.log
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif
endif # GERAN_MODE_SUPPORT

# *************************************************************************
# TARGET: asngen_l4
# Generate the ASN L4 codec template files for project
# *************************************************************************
asngen_l4: gen_infolog $(PREGEN_DEP)/asngen_l4.det

ifeq ($(strip $(SMART_CHECK)),TRUE)
include $(wildcard $(PREGEN_DEP)/./asngen_l4.det)
else
$(PREGEN_DEP)/asngen_l4.det: FORCE
endif
$(PREGEN_DEP)/asngen_l4.det:
ifeq ($(filter BASIC,$(TEST_LOAD_TYPE)),)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(IF_NOT_EXIST) $(strip $(PREGEN_DEP)) $(THEN) ($(MKDIR) $(strip $(PREGEN_DEP))) $(CMD_END)
	@$(IF_EXIST) $@ $(THEN) ($(DEL_FILE) $@) $(CMD_END)
	
    ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
      # To generate ${PCORE_ROOT}/modem/interface/asn/l4/gen_mcd_l4_common.asn
			@perl ${PCORE_ROOT}/modem/tools/pre_mcdparser.pl --CC="$(CC)" --COMPILER=$(COMPILER) $(foreach def, $(MCD_DEFS),--SYMBOL=-D$(def) --PROJDIR="$(PROJDIR)" --DEPTARGET="$@")
			@$(ECHO) -n "Generate L4 ASN Gen Files 1st Phase ..."
			@$(CHDIR) ${PCORE_ROOT}/modem/tools $(AND) \
			(perl ./mcdparser.pl mcd_l4.ini --only="$(strip $(PROJECT_MAKEFILE))" --deffile="../../../$(INFOLOG)" --tstpath="$(MODISBUILD_TST_DB)" --PROJDIR="$(PROJDIR)" --DEPTARGET="$@") 
    else
      ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
        # To generate ${PCORE_ROOT}/modem/interface/asn/l4/gen_mcd_l4_common.asn
				@perl ${PCORE_ROOT}/modem/tools/pre_mcdparser.pl --CC=$(CC) --COMPILER=$(COMPILER) $(foreach def, $(MCD_DEFS),--SYMBOL=-D$(def) --PROJDIR="$(PROJDIR)" --DEPTARGET="$@")
				@$(ECHO) -n "Generate L4 ASN Gen Files 1st Phase ..."
				@$(CHDIR) ${PCORE_ROOT}/modem/tools $(AND) \
				(perl ./mcdparser.pl mcd_l4.ini --only="$(strip $(PROJECT_MAKEFILE))" --deffile="../../../$(INFOLOG)" --tstpath="$(MODISBUILD_TST_DB)" --PROJDIR="$(PROJDIR)" --DEPTARGET="$@") 
      endif
    endif
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif

# *************************************************************************
# TARGET: asngen
# Generate the ASN codec template files for project
# *************************************************************************
asngen: gen_infolog asngen_l4 $(PREGEN_DEP)/asngen.det
ifeq ($(strip $(SMART_CHECK)),TRUE)
include $(wildcard $(PREGEN_DEP)/./asngen.det)
else
$(PREGEN_DEP)/asngen.det: FORCE
endif
$(PREGEN_DEP)/asngen.det:
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) "$@ START TIME=" >> $(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n>>$(strip $(TARGDIR))/build.log
   # XXX!!!. Temporary solution for customer engagement
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  ifeq ($(filter BASIC UDVT,$(TEST_LOAD_TYPE)),)
		@$(IF_NOT_EXIST) $(strip $(PREGEN_DEP)) $(THEN) ($(MKDIR) $(strip $(PREGEN_DEP))) $(CMD_END)
		@$(IF_EXIST) $@ $(THEN) ($(DEL_FILE) $@) $(CMD_END)
		@$(ECHO) -n "Generate ASN Gen Files 1st Phase ..."
		@$(CHDIR) ${PCORE_ROOT}/modem/tools $(AND) \
		(perl ./mcdparser.pl mcd.ini --only="$(strip $(PROJECT_MAKEFILE))" --deffile="../../../$(INFOLOG)" --tstpath="$(MODISBUILD_TST_DB)" --PROJDIR="$(PROJDIR)" --DEPTARGET="$@") 
		@($(ECHO) -n "Compiling Csi ASN files...") $(AND) \
		$(CHDIR) ${PCORE_ROOT}/modem/common/scsi/gen $(AND) \
		(perl ./scsi_generate.pl --CC=$(CC) --COMPILER=$(COMPILER) --feature=" $(UMTS_RELEASE_SUPPORT) " --PROJDIR=$(PROJDIR) --DEPTARGET="$@") 
		@$(ECHO) -n "Compilation Csi ASN files done ..."
  endif
else
  ifeq (SUB_PROTOCOL,$(strip $(REL_PACKAGE_LEVEL)))
		@$(IF_NOT_EXIST) $(strip $(PREGEN_DEP)) $(THEN) ($(MKDIR) $(strip $(PREGEN_DEP))) $(CMD_END)
		@$(IF_EXIST) $@ $(THEN) ($(DEL_FILE) $@) $(CMD_END)
		@$(ECHO) -n "Generate ASN Gen Files 1st Phase ..."
		@$(CHDIR) ${PCORE_ROOT}/modem/tools $(AND) \
		(perl ./mcdparser.pl mcd.ini --only="$(strip $(PROJECT_MAKEFILE))" --deffile="../../../$(INFOLOG)" --tstpath="$(MODISBUILD_TST_DB)" --PROJDIR="$(PROJDIR)" --DEPTARGET="$@") 
		@$(ECHO) -n "Compiling Csi ASN files..."
		@$(CHDIR) ${PCORE_ROOT}/modem/common/scsi/gen $(AND) \
		(perl ./scsi_generate.pl --CC=$(CC) --COMPILER=$(COMPILER) --feature=" $(UMTS_RELEASE_SUPPORT) " --PROJDIR=$(PROJDIR) --DEPTARGET="$@")
		@$(ECHO) -n "Compilation Csi ASN files done ..."
  endif
endif
	@$(ECHO) "asngen END TIME=" >>$(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n>>$(strip $(TARGDIR))/build.log
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: asnregens
# *************************************************************************
asnregen: gen_infolog $(POSTGEN_DEP)/asnregen.det
ifeq ($(strip $(SMART_CHECK)),TRUE)
include $(wildcard $(POSTGEN_DEP)/./asnregen.det)
else
$(POSTGEN_DEP)/asnregen.det: FORCE
endif
$(POSTGEN_DEP)/asnregen.det:
# [TATAKA Migrate] single-mode 
ifneq ($(strip $(GERAN_MODE_SUPPORT)),NONE)
ifeq ($(RUN_ASNREGEN),TRUE)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) "$@ START TIME=" >> $(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n>>$(strip $(TARGDIR))/build.log
	@$(ECHO) -n "Generate ASN Gen Files 2nd Phase ..."

	@$(IF_NOT_EXIST) $(strip $(POSTGEN_DEP)) $(THEN) ($(MKDIR) $(strip $(POSTGEN_DEP))) $(CMD_END)
	@$(IF_EXIST) $@ $(THEN) ($(DEL_FILE) $@) $(CMD_END)

  ifeq ($(strip $(MODIS_CONFIG)),TRUE)
    ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
	@$(IF_NOT_EXIST) $(BUILD_TST_DB)/enumFile $(THEN) ($(IF_EXIST) $(MODISBUILD_TST_DB)/enumFile $(THEN) ($(COPY_FILE) $(MODISBUILD_TST_DB)/enumFile $(BUILD_TST_DB)/enumFile >$(DEV_NUL)) $(CMD_END)) $(CMD_END)
    else
	@$(IF_NOT_EXIST) $(BUILD_TST_DB)/enumFileCustomAppSrc $(THEN) ($(IF_EXIST) $(MODISBUILD_TST_DB)/enumFileCustomAppSrc $(THEN) ($(COPY_FILE) $(MODISBUILD_TST_DB)/enumFileCustomAppSrc $(BUILD_TST_DB)/enumFileCustomAppSrc >$(DEV_NUL)) $(CMD_END)) $(CMD_END)
    endif
  endif
  ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
	-@$(CHDIR) ${PCORE_ROOT}/modem/tools $(AND) \
	(perl mcdparser.pl mcd.ini  --only="$(strip $(PROJECT_MAKEFILE))" --only=for_catcher --deffile="../../../$(INFOLOG)"  --tstpath="$(MODISBUILD_TST_DB)" --PROJDIR="$(PROJDIR)" --DEPTARGET="$@")
  else
	-@$(CHDIR) ${PCORE_ROOT}/modem/tools $(AND) \
	(perl mcdparser.pl mcd.ini  --only="$(strip $(PROJECT_MAKEFILE))" --only=for_catcher --deffile="../../../$(INFOLOG)" --custom  --tstpath="$(MODISBUILD_TST_DB)" --PROJDIR="$(PROJDIR)" --DEPTARGET="$@")
  endif

	@$(ECHO) "$@ END TIME=" >>$(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n>>$(strip $(TARGDIR))/build.log
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif
endif # GERAN_MODE_SUPPORT


# *************************************************************************
# TARGET: nvram_edit_h_gen
# *************************************************************************
nvram_edit_h_gen: $(strip $(PROJDIR))/nvram_auto_gen/nvram_editor.h
$(strip $(PROJDIR))/nvram_auto_gen/nvram_editor.h:
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

	@$(IF_NOT_EXIST) $(strip $(PROJDIR))/nvram_auto_gen $(THEN) $(MKDIR) $(strip $(PROJDIR))/nvram_auto_gen $(CMD_END)
	@$(IF_EXIST) $(strip ${PCORE_TOOLS})/NVRAMStatistic/nvram_edit_gen.mak $(THEN)\
		($(MAKE) -f$(strip ${PCORE_TOOLS})/NVRAMStatistic/nvram_edit_gen.mak -r -R NVRAM_EDITOR_H_TO_DB NVRAM_AUTO_GEN_PATH=$(strip $(PROJDIR)) > $(strip $(COMPLOGDIR))/nvram_edit_h_gen.log 2>&1) \
	$(CMD_END)

# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: genmoduleinfo
# Generate module.lis/inc/def in $MODULELIS
# *************************************************************************
genmoduleinfo: genlog gencompbld gencategorymapping
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(IF_NOT_EXIST) $(MODULEINFODIR) $(THEN) \
		($(MKDIR) $(MODULEINFODIR)) $(CMD_END)
ifeq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(IF_NOT_EXIST) $(MODISLOGDIR)/modis_setup $(THEN) $(MKDIR) $(MODISLOGDIR)/modis_setup $(CMD_END)
	@$(MAKE) -fmake/${COMMON_ROOT}/build.mak -r -R $(CMD_ARGU) --no-print-directory AUTO_CHECK_DEPEND=$(AUTO_CHECK_DEPEND) AUTO_CHECK_CGEN=$(AUTO_CHECK_CGEN) MODIS_CONFIG=$(strip $(MODIS_CONFIG)) MODIS_UESIM=$(strip $(MODIS_UESIM)) genmoduleinfo_start
	@$(ECHO) -n setup $(strip $(MODIS_UESIM)) env is done
else
	@$(IF_NOT_EXIST) $(strip $(COMPLOGDIR))/module_info $(THEN) \
		$(MKDIR) $(strip $(COMPLOGDIR))/module_info $(CMD_END)
	@perl $(strip ${PCORE_TOOLS})/time.pl -n
	@$(MAKE) -fmake/${COMMON_ROOT}/build.mak -r -R $(CMD_ARGU) --no-print-directory AUTO_CHECK_DEPEND=$(AUTO_CHECK_DEPEND) AUTO_CHECK_CGEN=$(AUTO_CHECK_CGEN) genmoduleinfo_start
	@$(ECHO) -n "Generating .lis and .def files are done"
	@perl $(strip ${PCORE_TOOLS})/time.pl -n
endif
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: gencategorymapping
# *************************************************************************
gencategorymapping:
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@perl $(strip ${PCORE_TOOLS})/gencategorymapping.pl $(strip $(TMPDIR))/~categorymapping.mak
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
# *************************************************************************
# TARGET: genmoduleinfo_start
# *************************************************************************
genmoduleinfo_start: $(MODULELIS)
	@$(ECHO) -n genmoduleinfo is done.

# *************************************************************************
# TARGET: %.lis
# *************************************************************************
%.lis:
ifeq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(ECHO) -n setup $(strip $(MODIS_UESIM)) env of $*
	@($(MAKE) -fmake/${COMMON_ROOT}/comp.mak -k -r -R TMPDIR=$(strip $(TMPDIR)) $(strip $(CMD_ARGU)) --no-print-directory COMPONENT=$* GEN_MODULE_INFO=TRUE setup_env >$(MODISLOGDIR)/modis_setup/$*_setEnv.log 2>&1) $(WITH) \
		$(IF_ERR_TRUE) $(THEN) (echo Error: $@ Failed! Please check $(MODISLOGDIR)/modis_setup/$*_setEnv.log $(WITH) exit 1) $(CMD_END)
else
	@$(ECHO) -n Generate $* information
	@($(MAKE) -fmake/${COMMON_ROOT}/comp.mak -k -r -R TMPDIR=$(strip $(TMPDIR)) $(strip $(CMD_ARGU)) --no-print-directory COMPONENT=$* GEN_MODULE_INFO=TRUE setup_env > $(strip $(COMPLOGDIR))/module_info/$*_module_info.log 2>&1) $(WITH) \
		$(IF_ERR_TRUE) $(THEN) (echo Error: $@ Failed! Please check $(strip $(COMPLOGDIR))/module_info/$*_module_info.log $(WITH) exit 1) $(CMD_END)
endif



# *************************************************************************
# Target: nvram_auto_gen
# *************************************************************************
nvram_auto_gen:
ifneq ($(filter __MOD_NVRAM__,$(strip $(COM_DEFS))),)
nvram_auto_gen: $(strip $(RULESDIR_TARGET))/codegen_dep/nvram_auto_gen.det

ifneq ($(strip $(MODIS_CONFIG)),TRUE)
cgen: $(strip $(RULESDIR_TARGET))/codegen_dep/nvram_auto_gen.det
endif

# *************************************************************************
# Target: (strip $(RULESDIR_TARGET))/codegen_dep/nvram_auto_gen.det:
# *************************************************************************
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(strip $(RULESDIR_TARGET))/codegen_dep/nvram_auto_gen.det: FORCE
else
  -include $(strip $(RULESDIR_TARGET))/codegen_dep/./nvram_auto_gen.det
endif
$(strip $(RULESDIR_TARGET))/codegen_dep/nvram_auto_gen.det: $(strip $(PROJDIR))/nvram_auto_gen/nvram_editor.h
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) "$@ START TIME=" >> $(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n >> $(strip $(TARGDIR))/build.log
ifeq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
	-@$(ECHO) -n $@: $?
endif
	@$(IF_NOT_EXIST) $(strip $(RULESDIR_TARGET)) \
	 $(THEN) \
		($(MKDIR) $(strip $(RULESDIR_TARGET))) \
	 $(ELSE) \
	 	($(IF_EXIST) $(strip $(RULESDIR_TARGET))/nvram_auto_gen.dep $(THEN) \
			$(DEL_FILE) $(strip $(RULESDIR_TARGET))/nvram_auto_gen.dep \
		$(CMD_END)) \
	 $(CMD_END)

	@$(IF_NOT_EXIST) $(patsubst %/,%,$(dir $@)) $(THEN) \
		($(MKDIR) $(patsubst %/,%,$(dir $@))) \
	 $(ELSE) \
	 	($(IF_EXIST) $@ $(THEN) $(DEL_FILE) $@ \
		$(CMD_END)) \
	 $(CMD_END)

ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(STRCMPEX) TRUE TRUE e $(strip $(TMPDIR))/~cus_opt.tmp $(foreach def,$(sort $(COM_DEFS_TARGET)),-D \"$(def)\")
else
	@$(STRCMPEX) TRUE TRUE e $(strip $(TMPDIR))/~cus_opt.tmp $(foreach def,$(sort $(COM_DEFS_TARGET)),$(def) )
endif

	@$(STRCMPEX) TRUE TRUE e $(strip $(TMPDIR))/~inc.tmp $(foreach inc,$(XGEN_INC_DIR_TARGET),$(inc))
#	@$(STRCMPEX) TRUE TRUE e $(strip $(TMPDIR))/~inc.tmp.tmp $(foreach inc,$(NVRAM_INC_DIR),$(inc))
ifneq ($(filter __MOD_NVRAM__,$(strip $(COM_DEFS))),)
	@$(IF_NOT_EXIST) $(strip $(BUILD_TST_DB))/pstrace_db $(THEN) ($(MKDIR) $(strip $(BUILD_TST_DB))/pstrace_db) $(CMD_END)
	@$(IF_NOT_EXIST) $(MODISBUILD_TST_DB)/pstrace_db $(THEN) ($(MKDIR) $(MODISBUILD_TST_DB)/pstrace_db) $(CMD_END)
	@$(IF_EXIST) $(MODISBUILD_TST_DB)/CompTrcDefs.lst $(THEN) ($(DEL_FILE) $(MODISBUILD_TST_DB)/CompTrcDefs.lst) $(CMD_END)
	@$(STRCMPEX) TRUE TRUE e $(MODISBUILD_TST_DB)/CompTrcDefs.lst $(call sort, $(foreach def,$(COMP_TRACE_DEFS_MODEM),$(def)))
	@$(CREATE_EMPTY_TRC_GEN_FILES) $(BUILD_TST_DB)/pstrace_db $(MODISBUILD_TST_DB)/CompTrcDefs.lst $(strip $(TSTDIR))/database/TrcGen.lst

	@$(IF_NOT_EXIST) $(strip $(PROJDIR))/nvram_auto_gen $(THEN) $(MKDIR) $(strip $(PROJDIR))/nvram_auto_gen $(CMD_END)
	@$(IF_NOT_EXIST) $(strip $(PROJDIR))/cksysdrv $(THEN) ($(MKDIR) $(strip $(PROJDIR))/cksysdrv) $(CMD_END)
	@$(IF_NOT_EXIST) $(strip $(PROJDIR))/nvram_auto_gen/include $(THEN) ($(MKDIR) $(strip $(PROJDIR))/nvram_auto_gen/include) $(CMD_END)
	@$(IF_NOT_EXIST) $(strip $(PROJDIR))/nvram_auto_gen/debug $(THEN) ($(MKDIR) $(strip $(PROJDIR))/nvram_auto_gen/debug) $(CMD_END)

ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(ECHO) -n OS_VERSION = $(strip $(OS_VERSION)) > $(strip $(PROJDIR))/nvram_auto_gen/include/custom_option.txt
	@$(ECHO) CUSTOM_OPTION = >> $(strip $(PROJDIR))/nvram_auto_gen/include/custom_option.txt
	@$(CAT) $(strip $(TMPDIR))/~cus_opt.tmp >> $(strip $(PROJDIR))/nvram_auto_gen/include/custom_option.txt
	@$(ECHO) CUSTOM_INC = > $(strip $(PROJDIR))/nvram_auto_gen/include/custom_include.txt
else
	@perl $(strip ${PCORE_TOOLS})/lnitem.pl $(strip $(TMPDIR))/~cus_opt.tmp
	@$(IF_EXIST) $(strip $(PROJDIR))/nvram_auto_gen/include/custom_option.txt $(THEN) ($(DEL_FILE) $(strip $(PROJDIR))/nvram_auto_gen/include/custom_option.txt) $(CMD_END)
	@$(FOR) $(F_OPT) $(DECLARE_VAR)i $(IN) `$(CAT) $(strip $(TMPDIR))/~cus_opt.tmp` \
	 $(DO) \
			$(ECHO) -n "#define $(PRE_VAR)i" >> $(strip $(PROJDIR))/nvram_auto_gen/include/~custom_option.tmp \
	 $(DONE)
	@perl $(strip ${PCORE_TOOLS})/replace_string.pl $(strip $(PROJDIR))/nvram_auto_gen/include/~custom_option.tmp = " " $(strip $(PROJDIR))/nvram_auto_gen/include/custom_option.txt
	@$(ECHO) -n OS_VERSION = $(strip $(OS_VERSION)) > $(strip $(PROJDIR))/nvram_auto_gen/include/custom_include.txt
	@$(ECHO) CUSTOM_INC = >> $(strip $(PROJDIR))/nvram_auto_gen/include/custom_include.txt
endif

	@$(COPY_FILE) $(strip $(TMPDIR))/~inc.tmp $(strip $(TMPDIR))/~inc.tmp.tmp
	@perl $(strip ${PCORE_TOOLS})/lnitem.pl $(strip $(TMPDIR))/~inc.tmp.tmp 
	@$(FOR) $(F_OPT) $(DECLARE_VAR)i $(IN) `$(CAT) $(strip $(TMPDIR))/~inc.tmp.tmp` \
	 $(DO) \
			$(ECHO) " " -I "$(subst \,/,$(PRE_VAR)i)"  >> $(strip $(PROJDIR))/nvram_auto_gen/include/custom_include.txt \
	 $(DONE)

   #Output NVRAM info
	@$(IF_EXIST) $(strip $(COMPLOGDIR))/nvram_gen.log $(THEN) ($(DEL_FILE) $(strip $(COMPLOGDIR))/nvram_gen.log) $(CMD_END)
	@$(IF_EXIST) $(strip $(COMPLOGDIR))/nvram_gen_full_log.log $(THEN) ($(DEL_FILE) $(strip $(COMPLOGDIR))/nvram_gen_full_log.log) $(CMD_END)
	@$(LIST_DIR) "$(strip $(PROJDIR))/nvram_auto_gen/debug/*.*" 1>$(DEV_NUL) 2>&1 $(WITH)\
		$(IF_ERR_FALSE) $(THEN) $(DEL_FILE) $(strip $(PROJDIR))/nvram_auto_gen/debug/*.*  $(CMD_END)

   ifeq ($(strip $(OS_VERSION)),MSWin32)
		@$(IF_EXIST) $(strip ${PCORE_TOOLS})/NVRAMStatistic/nvram_auto_gen.mak $(THEN)\
			("pcore\tools\MSYS\bin\make.exe" -e -f$(strip ${PCORE_TOOLS})/NVRAMStatistic/nvram_auto_gen.mak -r -R -j 1 nvram_auto_gen_build NVRAM_AUTO_GEN_PATH=$(strip $(PROJDIR))/nvram_auto_gen 1> $(strip $(COMPLOGDIR))/nvram_gen_full_log.log 2>$(strip $(COMPLOGDIR))/nvram_gen.log) \
		$(CMD_END)
			@$(IF_EXIST) $(PROJDIR)/nvram_auto_gen/nvram_auto_gen.exe $(THEN)\
			("$(strip $(PROJDIR))/nvram_auto_gen/nvram_auto_gen.exe" $(strip $(PROJDIR)) $(strip $(OS_VERSION)) 1 >> $(strip $(COMPLOGDIR))/nvram_gen_full_log.log 2>>$(strip $(COMPLOGDIR))/nvram_gen.log)\
		$(CMD_END)

   else
		@$(IF_EXIST) $(strip ${PCORE_TOOLS})/NVRAMStatistic/nvram_auto_gen.mak $(THEN)\
			($(MAKE) -f$(strip ${PCORE_TOOLS})/NVRAMStatistic/nvram_auto_gen.mak -r -R -j 1 nvram_auto_gen_build NVRAM_AUTO_GEN_PATH=$(strip $(PROJDIR))/nvram_auto_gen > $(strip $(COMPLOGDIR))/nvram_gen_full_log.log 2>$(strip $(COMPLOGDIR))/nvram_gen.log) \
		$(CMD_END)

		@$(IF_EXIST) $(PROJDIR)/nvram_auto_gen/nvram_auto_gen $(THEN)\
			("$(strip $(PROJDIR))/nvram_auto_gen/nvram_auto_gen" $(strip $(PROJDIR)) $(strip $(OS_VERSION)) 1 >> $(strip $(COMPLOGDIR))/nvram_gen_full_log.log 2>>$(strip $(COMPLOGDIR))/nvram_gen.log)\
		$(CMD_END)
   endif

	@perl $(strip ${PCORE_TOOLS})/NVRAMStatistic/nvram_usage_check.pl $(strip $(COMPLOGDIR))/nvram_usage_check.log $@ > $(strip $(COMPLOGDIR))/nvram_usage_check.log $(WITH) \
		$(IF_ERR_TRUE) $(THEN) (echo Error: nvram_auto_gen failed. Please check $(strip $(COMPLOGDIR))/nvram_usage_check.log $(WITH) exit 1) $(CMD_END)
	@perl $(strip ${PCORE_TOOLS})/pack_dep_gcc.pl $(RULESDIR_TARGET)/nvram_auto_gen.dep $(PROJDIR)/nvram_auto_gen/debug $(HTOGETHER) $(strip $(HEADER_TEMP))

	@$(IF_EXIST) $(PROJDIR)/nvram_auto_gen/nvram_lid_statistics_bak.h $(THEN) \
		($(COPY_FILE) $(PROJDIR)/nvram_auto_gen/nvram_lid_statistics_bak.h $(PROJDIR)/nvram_auto_gen/nvram_lid_statistics.h >$(DEV_NUL)) $(CMD_END)
endif
	@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $@ $@ $(PROJDIR)/nvram_auto_gen/debug "\.d"
	@$(ECHO) -n "$@: $(strip $(PROJDIR))/nvram_auto_gen/nvram_editor.h" >> $@
	@$(ECHO) -n "$@: $(strip ${PCORE_TOOLS})/NVRAMStatistic/nvram_lid_check.pl" >> $@
	@$(ECHO) -n "$@: $(strip ${PCORE_TOOLS})/NVRAMStatistic/nvram_usage_check.pl" >> $@
ifneq ($(PCIBT_ACTION_LIST),)
	$(PCIBT_SCRIPT_CMD) $@ $(PCIBT_ACTION_LIST) 2>$(strip $(COMPLOGDIR))/nvram_gen.log
endif
	@$(IF_EXIST) $(MODISBUILD_TST_DB)/MDDB_InfoCustomAppSrc.EDB $(THEN) ($(DEL_FILE) $(MODISBUILD_TST_DB)/MDDB_InfoCustomAppSrc.EDB) $(CMD_END)

	@$(ECHO) "$@ END TIME=" >> $(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n >> $(strip $(TARGDIR))/build.log
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif

# *************************************************************************
# TARGET: cgen
# *************************************************************************
cgen: $(MODIS_RULESDIR)/codegen_dep/cgen_preflow.det
cgen_preprocess: $(CODEGEN_PREPROCESS_MODEM)
ifeq ($(strip $(DHL_SUPPORT)),TRUE)    
  ifeq ($(LTE_SOURCE_BUILD),TRUE)
cgen_cfg: $(CODEGEN_DEPENDENCY_MODEM_SEC)
  endif
endif
cgen_cfg: $(CODEGEN_DEPENDENCY_MODEM) $(MODIS_RULESDIR)/codegen_dep/cgen_cfg_Modem.det

CODEGEN_PREPROCESS_TEST := PARALLEL
ifneq ($(strip $(CODEGEN_PREPROCESS_TEST)),PARALLEL)
  ifneq ($(strip $(CODEGEN_DEPENDENCY_MODEM)),)
cgen: cgen_cfg
  endif
else
cgen: FORCE
  ifneq ($(strip $(CODEGEN_DEPENDENCY_MODEM)),)
    # mbis time probe
    ifeq ($(strip $(MBIS_EN)),TRUE)
			@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
    endif
	@$(MAKE) -fmake/${COMMON_ROOT}/build.mak -r -R $(CMD_ARGU) --no-print-directory SMART_CHECK=$(SMART_CHECK) AUTO_CHECK_DEPEND=$(AUTO_CHECK_DEPEND) AUTO_CHECK_CGEN=$(AUTO_CHECK_CGEN) MODIS_CONFIG=$(strip $(MODIS_CONFIG)) MODIS_UESIM=$(strip $(MODIS_UESIM)) RUN_CGEN_L1=$(RUN_CGEN_L1) cgen_preprocess
	@$(MAKE) -fmake/${COMMON_ROOT}/build.mak -r -R --no-print-directory SMART_CHECK=$(SMART_CHECK) AUTO_CHECK_DEPEND=$(AUTO_CHECK_DEPEND) AUTO_CHECK_CGEN=TRUE MODIS_CONFIG=$(strip $(MODIS_CONFIG)) MODIS_UESIM=$(strip $(MODIS_UESIM)) RUN_CGEN_L1=$(RUN_CGEN_L1) cgen_cfg
    # mbis time probe
    ifeq ($(strip $(MBIS_EN)),TRUE)
			@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
    endif
  endif
endif

ifeq ($(strip $(CGEN_ENC_ENABLE)), TRUE)
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  ifeq ($(strip $(MTK_INTERNAL)),TRUE)
    ifeq ($(LTE_SOURCE_BUILD),FALSE)
      ifneq ($(strip $(MODIS_CONFIG)),TRUE)
        ifneq ($(strip $(UE_SIMULATOR)),TRUE)
cgen_cfg: cgen_enc
        endif
      endif
    endif
  endif
endif
endif

# *************************************************************************
# TARGET: cgen
# Step 1: Preprocess
# *************************************************************************
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_preflow.det: FORCE
else
  -include $(MODIS_RULESDIR)/codegen_dep/./codegen.det
endif
$(MODIS_RULESDIR)/codegen_dep/cgen_preflow.det: $(strip $(TSTDIR))/database/TrcGen.lst $(NEED_CHECK_DEPEND_LIST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) "$@ START TIME=" >> $(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n >> $(strip $(TARGDIR))/build.log

ifneq ($(strip $(CLEAN_CODEGEN_DEPENDENCY)),)
	@$(FOR) $(DECLARE_VAR)i $(IN) $(CLEAN_CODEGEN_DEPENDENCY) $(DO) \
		($(IF_EXIST) $(PRE_VAR)i $(THEN) $(DEL_FILE) $(PRE_VAR)i $(CMD_END)) \
	$(DONE)
endif

	@$(IF_EXIST) $(strip $(CGEN_CFG_MODEM)) $(THEN) $(DEL_FILE) $(strip $(CGEN_CFG_MODEM)) $(CMD_END)
	@$(IF_EXIST) $(strip $(CGEN_CFG_MODEM_SEC)) $(THEN) $(DEL_FILE) $(strip $(CGEN_CFG_MODEM_SEC)) $(CMD_END)
	@$(IF_EXIST) $(strip $(POSTGEN_CFG_MODEM)) $(THEN) $(DEL_FILE) $(strip $(POSTGEN_CFG_MODEM)) $(CMD_END)

	@$(IF_EXIST) $(strip $(CODE_GEN_LOG)) $(THEN) \
		$(DEL_FILE) $(strip $(CODE_GEN_LOG)) $(CMD_END)
	@$(ECHO) -n "Check Directories ..."
	@$(IF_NOT_EXIST) $(MODISBUILD_TST_DB) $(THEN) \
		$(MKDIR) $(MODISBUILD_TST_DB) $(CMD_END)
	@$(IF_NOT_EXIST) $(MODISBUILD_TST_DB)/msglog_db $(THEN) \
		$(MKDIR) $(MODISBUILD_TST_DB)/msglog_db $(CMD_END)
	@$(IF_NOT_EXIST) $(MODISBUILD_TST_DB)/pstrace_db $(THEN) \
		$(MKDIR) $(MODISBUILD_TST_DB)/pstrace_db $(CMD_END)
	@$(IF_NOT_EXIST) $(patsubst %/,%,$(dir $@)) $(THEN) \
		$(MKDIR) $(patsubst %/,%,$(dir $@)) $(CMD_END)

ifeq ($(strip $(DHL_SUPPORT)),TRUE)
  ifeq ($(LTE_SOURCE_BUILD),TRUE)
	@$(IF_NOT_EXIST) $(MODISBUILD_TST_DB_SEC) $(THEN) \
		$(MKDIR) $(MODISBUILD_TST_DB_SEC) $(CMD_END)
	@$(IF_NOT_EXIST) $(MODISBUILD_TST_DB_SEC)/msglog_db $(THEN) \
		$(MKDIR) $(MODISBUILD_TST_DB_SEC)/msglog_db $(CMD_END)
	@$(IF_NOT_EXIST) $(MODISBUILD_TST_DB_SEC)/pstrace_db $(THEN) \
		$(MKDIR) $(MODISBUILD_TST_DB_SEC)/pstrace_db $(CMD_END)
  endif
endif

ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(MAKE) -fmake/${COMMON_ROOT}/build.mak -r -R --no-print-directory gen_sfini
else
	@$(IF_NOT_EXIST) $(MODISLOGDIR) $(THEN) \
		$(MKDIR) $(MODISLOGDIR) $(CMD_END)
endif
	@$(IF_EXIST) $(MODISBUILD_TST_DB)/CompTrcDefs.lst $(THEN) \
		$(DEL_FILE) $(MODISBUILD_TST_DB)/CompTrcDefs.lst $(CMD_END)
	@$(STRCMPEX) TRUE TRUE e $(MODISBUILD_TST_DB)/CompTrcDefs.lst $(call sort,$(foreach def,$(COMP_TRACE_DEFS_MODEM),$(def)))
	@$(CREATE_EMPTY_TRC_GEN_FILES) $(MODISBUILD_TST_DB)/pstrace_db $(MODISBUILD_TST_DB)/CompTrcDefs.lst $(strip $(TSTDIR))/database/TrcGen.lst
	@$(ECHO) -n "$(MODISBUILD_TST_DB)/CompTrcDefs.lst" >> $(CODE_GEN_LST)
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
	@$(IF_NOT_EXIST) $(CODEGEN_DATABASE_OUT) $(THEN) ($(IF_EXIST) $(MODIS_RULESDIR)/codegen_dep/cgen_c.det $(THEN) ($(DEL_FILE) $(MODIS_RULESDIR)/codegen_dep/cgen_c.det)$(CMD_END)) $(CMD_END) 
endif

ifeq ($(strip $(UNIVERSAL_DATABASE_SUPPORT)),TRUE)
	@$(MAKE) -fmake/${COMMON_ROOT}/build.mak -r -R --no-print-directory GAS_FOLDER=$(strip $(PCORE_ROOT))/modem/gas UAS_FOLDER=$(strip $(PCORE_ROOT))/modem/uas XGEN_SWITCH_FDD_TDD=FDD $(strip $(TMPDIR))/~inc_fdd_def.tmp

  ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
	@$(MAKE) -fmake/${COMMON_ROOT}/build.mak -r -R --no-print-directory GAS_FOLDER=$(strip $(PCORE_ROOT))/modem/gas_tdd128 UAS_FOLDER=$(strip $(PCORE_ROOT))/modem/uas_tdd128 XGEN_SWITCH_FDD_TDD=TDD $(strip $(TMPDIR))/~inc_tdd_def.tmp
  endif
endif
	@$(MAKE) -fmake/${COMMON_ROOT}/build.mak -r -R --no-print-directory $(strip $(TMPDIR))/~inc_def.tmp
	@$(ECHO) -n  "$@: $(CREATE_EMPTY_TRC_GEN_FILES) $(strip $(TSTDIR))/database/TrcGen.lst $(NEED_CHECK_DEPEND_LIST)" >$@
	@$(ECHO) -n  "$@" >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: $(strip $(TMPDIR))/~inc_def.tmp
# *************************************************************************
$(strip $(TMPDIR))/~inc_def.tmp: FORCE
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(STRCMPEX) def def e $(strip $(TMPDIR))/~inc_def.tmp $(foreach def,$(COM_DEFS) __NULL_DEF__,-D$(def))
  ifeq ($(strip $(COMPILER)),GCC)
	@$(STRCMPEX) inc inc e $(strip $(TMPDIR))/~inc.tmp $(foreach inc,$(subst \,/,$(XGEN_INC_DIR)),-I$(inc))
  endif
else
	@$(STRCMPEX) def def e $(strip $(TMPDIR))/~inc_def.tmp -D__NULL_DEF__
  ifeq ($(strip $(MODIS_COMPILER)),VC2008)
	@$(STRCMPEX) inc inc e $(strip $(TMPDIR))/~inc.tmp $(foreach inc,$(XGEN_INC_DIR),-I$(inc))
  else ifeq ($(strip $(MODIS_COMPILER)),MINGW)
	@$(STRCMPEX) inc inc e $(strip $(TMPDIR))/~inc.tmp $(foreach inc,$(subst \,/,$(XGEN_INC_DIR)),-I$(inc))
  endif
endif
	@perl $(strip ${PCORE_TOOLS})/echoLongString2.pl $(strip $(TMPDIR))/~inc_def.tmp -D $(COM_DEF_PATH)
	@$(CAT) "$(strip $(TMPDIR))/~inc.tmp" >>$(strip $(TMPDIR))/~inc_def.tmp
	@$(IF_EXIST) $(strip $(TMPDIR))/~inc.tmp $(THEN) \
		$(DEL_FILE) $(strip $(TMPDIR))/~inc.tmp $(CMD_END)
	@$(ECHO) -n "$(strip $(TMPDIR))/~inc_def.tmp" >> $(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: $(strip $(TMPDIR))/~inc_def_no_inc.tmp
# *************************************************************************
$(strip $(TMPDIR))/~inc_def_no_inc.tmp: FORCE
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(STRCMPEX) def def e $(strip $(TMPDIR))/~inc_def_no_inc.tmp -D__NULL_DEF__
	@perl $(strip ${PCORE_TOOLS})/echoLongString2.pl $(strip $(TMPDIR))/~inc_def_no_inc.tmp -D $(COM_DEF_PATH)
	@$(ECHO) -n "$(strip $(TMPDIR))/~inc_def_no_inc.tmp" >> $(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: $(strip $(TMPDIR))/~inc_fdd_def.tmp
# *************************************************************************
$(strip $(TMPDIR))/~inc_fdd_def.tmp: FORCE
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(STRCMPEX) def def e $(strip $(TMPDIR))/~inc_fdd_def.tmp $(foreach def,$(filter-out  __CGEN_UMTS_TDD128_MODE__,$(COM_DEFS)) __NULL_DEF__ __CGEN_UMTS_FDD_MODE__,-D$(def))
  ifeq ($(strip $(COMPILER)),GCC)
	@$(STRCMPEX) inc inc e $(strip $(TMPDIR))/~inc_fdd.tmp $(foreach inc,$(subst \,/,$(XGEN_INC_DIR)),-I$(inc))
  endif
else
	@$(STRCMPEX) def def e $(strip $(TMPDIR))/~inc_fdd_def.tmp $(foreach def,$(filter-out  __CGEN_UMTS_TDD128_MODE__,$(COM_DEFS)) __NULL_DEF__ __CGEN_UMTS_FDD_MODE__,-D$(def))
  ifeq ($(strip $(MODIS_COMPILER)),VC2008)
	@$(STRCMPEX) inc inc e $(strip $(TMPDIR))/~inc_fdd.tmp $(foreach inc,$(XGEN_INC_DIR),-I$(inc))
  else ifeq ($(strip $(MODIS_COMPILER)),MINGW)
	@$(STRCMPEX) inc inc e $(strip $(TMPDIR))/~inc_fdd.tmp $(foreach inc,$(subst \,/,$(XGEN_INC_DIR)),-I$(inc))
  endif
endif
	@perl $(strip ${PCORE_TOOLS})/echoLongString2.pl $(strip $(TMPDIR))/~inc_fdd_def.tmp -D $(foreach mod,$(filter-out uas_tdd128 gas_tdd128, $(COMPLIST)),$(strip $(MODULEINFODIR))/$(mod)/$(mod).def)
	@$(CAT) "$(strip $(TMPDIR))/~inc_fdd.tmp" >>$(strip $(TMPDIR))/~inc_fdd_def.tmp
	@$(IF_EXIST) $(strip $(TMPDIR))/~inc_fdd.tmp $(THEN) \
		$(DEL_FILE) $(strip $(TMPDIR))/~inc_fdd.tmp $(CMD_END)
	@$(ECHO) -n "$(strip $(TMPDIR))/~inc_fdd_def.tmp" >> $(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: $(strip $(TMPDIR))/~inc_tdd_def.tmp
# *************************************************************************
$(strip $(TMPDIR))/~inc_tdd_def.tmp: FORCE
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(STRCMPEX) def def e $(strip $(TMPDIR))/~inc_tdd_def.tmp $(foreach def,$(filter-out __CGEN_UMTS_FDD_MODE__ ,$(COM_DEFS)) __NULL_DEF__ __CGEN_UMTS_TDD128_MODE__,-D$(def))
  ifeq ($(strip $(COMPILER)),GCC)
	@$(STRCMPEX) inc inc e $(strip $(TMPDIR))/~inc_tdd.tmp $(foreach inc,$(subst \,/,$(XGEN_INC_DIR)),-I$(inc))
  endif
else
	@$(STRCMPEX) def def e $(strip $(TMPDIR))/~inc_tdd_def.tmp $(foreach def,$(filter-out __CGEN_UMTS_FDD_MODE__ ,$(COM_DEFS)) __NULL_DEF__ __CGEN_UMTS_TDD128_MODE__,-D$(def))
  ifeq ($(strip $(MODIS_COMPILER)),VC2008)
	@$(STRCMPEX) inc inc e $(strip $(TMPDIR))/~inc_tdd.tmp $(foreach inc,$(XGEN_INC_DIR),-I$(inc))
  else ifeq ($(strip $(MODIS_COMPILER)),MINGW)
	@$(STRCMPEX) inc inc e $(strip $(TMPDIR))/~inc_tdd.tmp $(foreach inc,$(subst \,/,$(XGEN_INC_DIR)),-I$(inc))
  endif
endif
	@perl $(strip ${PCORE_TOOLS})/echoLongString2.pl $(strip $(TMPDIR))/~inc_tdd_def.tmp -D $(foreach mod,$(filter-out uas gas, $(COMPLIST)),$(strip $(MODULEINFODIR))/$(mod)/$(mod).def)
	@$(CAT) "$(strip $(TMPDIR))/~inc_tdd.tmp" >>$(strip $(TMPDIR))/~inc_tdd_def.tmp
	@$(IF_EXIST) $(strip $(TMPDIR))/~inc_tdd.tmp $(THEN) \
		$(DEL_FILE) $(strip $(TMPDIR))/~inc_tdd.tmp $(CMD_END)
	@$(ECHO) -n "$(strip $(TMPDIR))/~inc_tdd_def.tmp" >> $(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

$(eval $(call CgenPreprocess,$(strip $(TSTDIR))/database/msglog_db/libParseDbModem.c,$(MODISBUILD_TST_DB)/msglog_db/libParseDbModem.db,libParseDbModem.det,TRUE))
$(eval $(call CgenPreprocess,$(strip $(TSTDIR))/database/msglog_db/srcParseDbModem.c,$(MODISBUILD_TST_DB)/msglog_db/srcParseDbModem.db,srcParseDbModem.det,TRUE))
$(eval $(call CgenPreprocess,$(strip $(TSTDIR))/database/msglog_db/custom_parse_db.c,$(MODISBUILD_TST_DB)/msglog_db/custom_parse_db.db,custom_parse_db.det,TRUE))
ifneq ($(strip $(C2K_RELEASE)),TRUE)
$(eval $(call CgenPreprocess,$(strip $(TSTDIR))/database/gv/gv_db.c,$(MODISBUILD_TST_DB)/gv/gv_db/gv_db.gv,gv_db.det,FALSE))
$(eval $(call CgenPreprocess,$(strip $(TSTDIR))/database/unionTag/unionTag_db.c,$(MODISBUILD_TST_DB)/unionTag/unionTag_parse.txt,unionTag_parse.det,TRUE))
$(eval $(call CgenPreprocess,$(strip $(TSTDIR))/database/unionTag/ext/unionTag_db_ext.c,$(MODISBUILD_TST_DB)/unionTag/ext/unionTag_parse.txt,unionTag_parse_ext.det,TRUE))
else
$(eval $(call CgenPreprocess,$(strip $(TSTDIR))/database/gv/ext/gv_db_ext.c,$(MODISBUILD_TST_DB)/gv/gv_db_ext/gv_db_ext.gv,gv_db_ext.det,FALSE))
$(eval $(call CgenPreprocess,$(strip $(TSTDIR))/database/unionTag/ext/unionTag_db_ext.c,$(MODISBUILD_TST_DB)/unionTag/ext/unionTag_parse.txt,unionTag_parse_ext.det,TRUE))
endif
$(eval $(call CgenPreprocess,$(strip $(TSTDIR))/database/l1validation_db/l1v_db.c,$(MODISBUILD_TST_DB)/l1validation_db/l1v_db/l1v_db.l1v,l1v_db.det,FALSE))
# LTE SEC Cgen preprocess
ifeq ($(strip $(DHL_SUPPORT)),TRUE)
  ifeq ($(LTE_SOURCE_BUILD),TRUE)
$(eval $(call CgenPreprocess,$(strip $(TSTDIR_SEC))/database/msglog_db/libParseDbModem.c,$(MODISBUILD_TST_DB_SEC)/msglog_db/libParseDbModem_sec.db,libParseDbModem_sec.det))
$(eval $(call CgenPreprocess,$(strip $(TSTDIR_SEC))/database/gv/gv_db.c,$(MODISBUILD_TST_DB_SEC)/gv/gv_db/gv_db_sec.gv,gv_db_sec.det))
$(eval $(call CgenPreprocess,$(strip $(TSTDIR_SEC))/database/unionTag/unionTag_db.c,$(MODISBUILD_TST_DB_SEC)/unionTag/unionTag_parse_sec.txt,unionTag_parse_sec.det))
$(eval $(call CgenPreprocess,$(strip $(TSTDIR_SEC))/database/l1validation_db/l1v_db.c,$(MODISBUILD_TST_DB_SEC)/l1validation_db/l1v_db/l1v_db_sec.l1v,l1v_db_sec.det))
  endif
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/codegen_single_Modem.det: FORCE
# *************************************************************************
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/codegen_single_Modem.det: FORCE
else
  -include $(MODIS_RULESDIR)/codegen_dep/./codegen_single_Modem.det
endif
$(MODIS_RULESDIR)/codegen_dep/codegen_single_Modem.det: $(NEED_CHECK_DEPEND_LIST) $(MODULE_MAKEFILE_LIST)
ifeq ($(filter $(MAKECMDGOALS),cgen_preprocess),)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif
	@$(ECHO) -n "Preprocessing ~$(basename $(notdir $@)).c"
	@$(IF_NOT_EXIST) $(strip $(TMPDIR))/~inc_def.tmp $(THEN) \
		$(MAKE) -fmake/${COMMON_ROOT}/build.mak -r -R --no-print-directory $(strip $(TMPDIR))/~inc_def.tmp $(CMD_END)
	@$(STRCMPEX) def def e $(MODISBUILD_TST_DB)/pstrace_db/~$(basename $(notdir $@)).tmp $(COMP_TRACE_DEFS_MODEM)
	@perl $(strip ${PCORE_TOOLS})/lnitem.pl $(MODISBUILD_TST_DB)/pstrace_db/~$(basename $(notdir $@)).tmp
	@$(IF_EXIST) $(MODISBUILD_TST_DB)/pstrace_db/~$(basename $(notdir $@)).c $(THEN) \
		$(DEL_FILE) $(MODISBUILD_TST_DB)/pstrace_db/~$(basename $(notdir $@)).c $(CMD_END)
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
	@$(FOR) $(F_OPT) $(DECLARE_VAR)i $(IN) `$(CAT) $(MODISBUILD_TST_DB)/pstrace_db/~$(basename $(notdir $@)).tmp` \
	$(DO) \
		($(ECHO) -n "#include \"$(PRE_VAR)i\"" >>$(MODISBUILD_TST_DB)/pstrace_db/~$(basename $(notdir $@)).c) \
	$(DONE)
else
	@$(FOR) $(F_OPT) $(DECLARE_VAR)i $(IN) `$(CAT) $(MODISBUILD_TST_DB)/pstrace_db/~$(basename $(notdir $@)).tmp` \
	$(DO) \
		($(IF_EXIST) $(PRE_VAR)i $(THEN) $(ECHO) -n "#include \"$(PRE_VAR)i\"" >>$(MODISBUILD_TST_DB)/pstrace_db/~$(basename $(notdir $@)).c $(CMD_END)) \
	$(DONE)
endif
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  ifeq ($(strip $(COMPILER)),GCC)
	@($(CC) -E -W -DGEN_FOR_PC -I. $(VIA)$(strip $(TMPDIR))/~inc_def.tmp -o $(MODISBUILD_TST_DB)/pstrace_db/$(basename $(notdir $@)).ptr $(MODISBUILD_TST_DB)/pstrace_db/~$(basename $(notdir $@)).c $(DEPEND) $(basename $@).d 2>$(basename $@).log) $(WITH) \
		$(IF_ERR_TRUE) $(THEN) (($(CAT) $(basename $@).log >>$(CODE_GEN_LOG)) $(WITH) (exit 1)) $(CMD_END)
  endif
	@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $@ $@ $(patsubst %/,%,$(dir $@)) "$(basename $(notdir $@))\.d"
	@$(IF_EXIST) $(basename $@).d $(THEN) \
		$(DEL_FILE) $(basename $@).d $(CMD_END)
else
  ifeq ($(strip $(MODIS_COMPILER)),VC2008)
	@($(CC_MODIS) /E /w /DGEN_FOR_PC /nologo /showIncludes /I. @$(strip $(TMPDIR))/~inc_def.tmp $(MODISBUILD_TST_DB)/pstrace_db/~$(basename $(notdir $@)).c >$(MODISBUILD_TST_DB)/pstrace_db/$(basename $(notdir $@)).ptr 2>$(basename $@).log) $(WITH) \
		($(IF_ERR_TRUE) $(THEN) ($(CAT) $(basename $@).log >>$(CODE_GEN_LOG)) $(WITH) (exit 1)) $(CMD_END)
	@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $@ $@ $(patsubst %/,%,$(dir $@)) "$(basename $(notdir $@))\.log"
  else ifeq ($(strip $(MODIS_COMPILER)),MINGW)
	@($(CC_MODIS) -E -W -DGEN_FOR_PC -I. $(VIA)$(strip $(TMPDIR))/~inc_def.tmp -o $(MODISBUILD_TST_DB)/pstrace_db/$(basename $(notdir $@)).ptr $(MODISBUILD_TST_DB)/pstrace_db/~$(basename $(notdir $@)).c $(DEPEND) $(basename $@).d 2>$(basename $@).log) $(WITH) \
		$(IF_ERR_TRUE) $(THEN) (($(CAT) $(basename $@).log >>$(CODE_GEN_LOG)) $(WITH) (exit 1)) $(CMD_END)
	@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $@ $@ $(patsubst %/,%,$(dir $@)) "$(basename $(notdir $@))\.d"
	@$(IF_EXIST) $(basename $@).d $(THEN) \
		$(DEL_FILE) $(basename $@).d $(CMD_END)
  endif
endif
	@$(IF_EXIST) $(basename $@).log $(THEN) \
		$(DEL_FILE) $(basename $@).log $(CMD_END)
ifeq ($(filter $(MAKECMDGOALS),cgen_preprocess),)
	@$(ECHO) -n "$(MODISBUILD_TST_DB)/pstrace_db/$(basename $(notdir $@)).ptr" >>$(CODE_GEN_LST)
	@$(ECHO) -n "$(MODISBUILD_TST_DB)/pstrace_db/~$(basename $(notdir $@)).c"  >>$(CODE_GEN_LST)
	@$(ECHO) -n "$@" >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/codegen_single_Modem_sec.det: FORCE
# *************************************************************************
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/codegen_single_Modem_sec.det: FORCE
else
  -include $(MODIS_RULESDIR)/codegen_dep/./codegen_single_Modem_sec.det
endif
$(MODIS_RULESDIR)/codegen_dep/codegen_single_Modem_sec.det: $(NEED_CHECK_DEPEND_LIST) $(MODULE_MAKEFILE_LIST)
ifeq ($(filter $(MAKECMDGOALS),cgen_preprocess),)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif
	@$(ECHO) -n "Preprocessing ~$(basename $(notdir $@)).c"
	@$(IF_NOT_EXIST) $(strip $(TMPDIR))/~inc_def.tmp $(THEN) \
		$(MAKE) -fmake/${COMMON_ROOT}/build.mak -r -R --no-print-directory $(strip $(TMPDIR))/~inc_def.tmp $(CMD_END)
	@$(STRCMPEX) def def e $(MODISBUILD_TST_DB_SEC)/pstrace_db/~$(basename $(notdir $@)).tmp $(COMP_TRACE_DEFS_MODEM_LTE_SEC)
	@perl $(strip ${PCORE_TOOLS})/lnitem.pl $(MODISBUILD_TST_DB_SEC)/pstrace_db/~$(basename $(notdir $@)).tmp
	@$(IF_EXIST) $(MODISBUILD_TST_DB_SEC)/pstrace_db/~$(basename $(notdir $@)).c $(THEN) \
		$(DEL_FILE) $(MODISBUILD_TST_DB_SEC)/pstrace_db/~$(basename $(notdir $@)).c $(CMD_END)
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
	@$(FOR) $(F_OPT) $(DECLARE_VAR)i $(IN) `$(CAT) $(MODISBUILD_TST_DB_SEC)/pstrace_db/~$(basename $(notdir $@)).tmp` \
	$(DO) \
		($(ECHO) -n "#include \"$(PRE_VAR)i\"" >>$(MODISBUILD_TST_DB_SEC)/pstrace_db/~$(basename $(notdir $@)).c) \
	$(DONE)
else
	@$(FOR) $(F_OPT) $(DECLARE_VAR)i $(IN) `$(CAT) $(MODISBUILD_TST_DB_SEC)/pstrace_db/~$(basename $(notdir $@)).tmp` \
	$(DO) \
		($(IF_EXIST) $(PRE_VAR)i $(THEN) $(ECHO) -n "#include \"$(PRE_VAR)i\"" >>$(MODISBUILD_TST_DB_SEC)/pstrace_db/~$(basename $(notdir $@)).c $(CMD_END)) \
	$(DONE)
endif
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  ifeq ($(strip $(COMPILER)),GCC)
	@($(CC) -E -W -DGEN_FOR_PC -I. $(VIA)$(strip $(TMPDIR))/~inc_def.tmp -o $(MODISBUILD_TST_DB_SEC)/pstrace_db/$(basename $(notdir $@)).ptr $(MODISBUILD_TST_DB_SEC)/pstrace_db/~$(basename $(notdir $@)).c $(DEPEND) $(basename $@).d 2>$(basename $@).log) $(WITH) \
		$(IF_ERR_TRUE) $(THEN) (($(CAT) $(basename $@).log >>$(CODE_GEN_LOG)) $(WITH) (exit 1)) $(CMD_END)
  endif
	@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $@ $@ $(patsubst %/,%,$(dir $@)) "$(basename $(notdir $@))\.d"
	@$(IF_EXIST) $(basename $@).d $(THEN) \
		$(DEL_FILE) $(basename $@).d $(CMD_END)
else
  ifeq ($(strip $(MODIS_COMPILER)),VC2008)
	@($(CC_MODIS) /E /w /DGEN_FOR_PC /nologo /showIncludes /I. @$(strip $(TMPDIR))/~inc_def.tmp $(MODISBUILD_TST_DB_SEC)/pstrace_db/~$(basename $(notdir $@)).c >$(MODISBUILD_TST_DB_SEC)/pstrace_db/$(basename $(notdir $@)).ptr 2>$(basename $@).log) & \
		($(IF_ERR_TRUE) $(THEN) ($(CAT) $(basename $@).log >>$(CODE_GEN_LOG)) $(WITH) (exit 1)) $(CMD_END)
	@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $@ $@ $(patsubst %/,%,$(dir $@)) "$(basename $(notdir $@))\.log"
  else ifeq ($(strip $(MODIS_COMPILER)),MINGW)
	@($(CC_MODIS) -E -W -DGEN_FOR_PC -I. $(VIA)$(strip $(TMPDIR))/~inc_def.tmp -o $(MODISBUILD_TST_DB_SEC)/pstrace_db/$(basename $(notdir $@)).ptr $(MODISBUILD_TST_DB_SEC)/pstrace_db/~$(basename $(notdir $@)).c $(DEPEND) $(basename $@).d 2>$(basename $@).log) $(WITH) \
		$(IF_ERR_TRUE) $(THEN) (($(CAT) $(basename $@).log >>$(CODE_GEN_LOG)) $(WITH) (exit 1)) $(CMD_END)
	@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $@ $@ $(patsubst %/,%,$(dir $@)) "$(basename $(notdir $@))\.d"
	@$(IF_EXIST) $(basename $@).d $(THEN) \
		$(DEL_FILE) $(basename $@).d $(CMD_END)
  endif
endif
	@$(IF_EXIST) $(basename $@).log $(THEN) \
		$(DEL_FILE) $(basename $@).log $(CMD_END)
ifeq ($(filter $(MAKECMDGOALS),cgen_preprocess),)
	@$(ECHO) -n "$(MODISBUILD_TST_DB_SEC)/pstrace_db/$(basename $(notdir $@)).ptr" >>$(CODE_GEN_LST)
	@$(ECHO) -n "$(MODISBUILD_TST_DB_SEC)/pstrace_db/~$(basename $(notdir $@)).c"  >>$(CODE_GEN_LST)
	@$(ECHO) -n "$@" >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/log2SD_Catcher_filters.det: FORCE
# *************************************************************************
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/log2SD_Catcher_filters.det: FORCE
else
  -include $(MODIS_RULESDIR)/codegen_dep/./log2SD_Catcher_filters.det
endif
$(MODIS_RULESDIR)/codegen_dep/log2SD_Catcher_filters.det: common/service/dhl/database/XDD/log2SD_Catcher_filters.h $(NEED_CHECK_DEPEND_LIST)
ifeq ($(strip $(ICD_SUPPORT)),TRUE)
$(MODIS_RULESDIR)/codegen_dep/log2SD_Catcher_filters.det: $(MODIS_RULESDIR)/codegen_dep/log2SD_Icd_filters.det
endif
ifeq ($(filter $(MAKECMDGOALS),cgen_preprocess),)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif
	@$(ECHO) -n "Preprocessing log2SD_Catcher_filters.h ..."
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(IF_NOT_EXIST) $(strip $(TMPDIR))/~inc_def.tmp $(THEN) \
		$(MAKE) -fmake/${COMMON_ROOT}/build.mak -r -R --no-print-directory $(strip $(TMPDIR))/~inc_def.tmp $(CMD_END)
  ifeq ($(strip $(COMPILER)),GCC)
		@(($(CC) -E -W -I$(strip $(TSTDIR))/database $(VIA)$(strip $(TMPDIR))/~inc_def.tmp -o $(BUILD_TST_DB)/log2SD_Catcher_filters.ini common/service/dhl/database/XDD/log2SD_Catcher_filters.h $(DEPEND) $(basename $@).d 2>$(basename $@).log) $(WITH) \
			($(IF_ERR_TRUE) $(THEN) (($(CAT) $(basename $@).log >>$(CODE_GEN_LOG)) $(WITH) (exit 1)) $(CMD_END)))
		@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $@ $@ $(patsubst %/,%,$(dir $@)) "$(basename $(notdir $@))\.d"
		@$(IF_EXIST) $(basename $@).d $(THEN) $(DEL_FILE) $(basename $@).d $(CMD_END)
  endif
else
# MoDIS should generate another one without include path in Target's folder
	@$(IF_NOT_EXIST) $(strip $(TMPDIR))/~inc_def_no_inc.tmp $(THEN) \
		$(MAKE) -fmake/${COMMON_ROOT}/build.mak -r -R --no-print-directory $(strip $(TMPDIR))/~inc_def_no_inc.tmp $(CMD_END)
  ifeq ($(strip $(COMPILER)),GCC)
		@(($(CC) -E -W -I$(strip $(TSTDIR))/database $(VIA)$(strip $(TMPDIR))/~inc_def_no_inc.tmp -o $(BUILD_TST_DB)/log2SD_Catcher_filters.ini common/service/dhl/database/XDD/log2SD_Catcher_filters.h $(DEPEND) $(basename $@).d 2>$(basename $@).log) $(WITH) \
			($(IF_ERR_TRUE) $(THEN) (($(CAT) $(basename $@).log >>$(CODE_GEN_LOG)) $(WITH) (exit 1)) $(CMD_END)))
		@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $@ $@ $(patsubst %/,%,$(dir $@)) "$(basename $(notdir $@))\.d"
		@$(IF_EXIST) $(basename $@).d $(THEN) $(DEL_FILE) $(basename $@).d $(CMD_END)
  endif
endif
	@$(IF_NOT_EXIST) $(BUILD_TST_DB) $(THEN) $(MKDIR) $(BUILD_TST_DB) $(CMD_END)
	@$(IF_EXIST) $(basename $@).log $(THEN) \
		$(DEL_FILE) $(basename $@).log $(CMD_END)
ifeq ($(filter $(MAKECMDGOALS),cgen_preprocess),)
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(ECHO) -n "$@" >>$(CODE_GEN_LST)
	@$(ECHO) -n "$(BUILD_TST_DB)/log2SD_Catcher_filters.ini" >> $(CODE_GEN_LST)
  endif
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/log2SD_Icd_filters.det: FORCE
# *************************************************************************
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/log2SD_Icd_filters.det: FORCE
else
  -include $(MODIS_RULESDIR)/codegen_dep/./log2SD_Icd_filters.det
endif
$(MODIS_RULESDIR)/codegen_dep/log2SD_Icd_filters.det: ./common/service/dhl/database/XDD/ICD/log2SD_Icd_filters.h $(NEED_CHECK_DEPEND_LIST)
ifeq ($(filter $(MAKECMDGOALS),cgen_preprocess),)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif

ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(ECHO) -n "Preprocessing log2SD_Icd_filters.h ..."
	@$(IF_NOT_EXIST) $(strip $(TMPDIR))/~inc_def.tmp $(THEN) \
		$(MAKE) -fmake/common/build.mak -r -R --no-print-directory $(strip $(TMPDIR))/~inc_def.tmp $(CMD_END)
  ifeq ($(strip $(COMPILER)),GCC)
		@(($(CC) -E -W -I$(strip $(TSTDIR))/database $(VIA)$(strip $(TMPDIR))/~inc_def.tmp -o $(BUILD_TST_DB)/log2SD_Icd_filters.ini ./common/service/dhl/database/XDD/ICD/log2SD_Icd_filters.h $(DEPEND) $(basename $@).d 2>$(basename $@).log) $(WITH) \
			($(IF_ERR_TRUE) $(THEN) (($(CAT) $(basename $@).log >>$(CODE_GEN_LOG)) $(WITH) (exit 1)) $(CMD_END)))
		@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $@ $@ $(patsubst %/,%,$(dir $@)) "$(basename $(notdir $@))\.d"
		@$(IF_EXIST) $(basename $@).d $(THEN) $(DEL_FILE) $(basename $@).d $(CMD_END)
  endif
endif
	@$(IF_NOT_EXIST) $(BUILD_TST_DB) $(THEN) $(MKDIR) $(BUILD_TST_DB) $(CMD_END)
	@$(IF_EXIST) $(basename $@).log $(THEN) $(DEL_FILE) $(basename $@).log $(CMD_END)

ifeq ($(filter $(MAKECMDGOALS),cgen_preprocess),)
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(ECHO) -n "$@" >>$(CODE_GEN_LST)
	@$(ECHO) -n "$(BUILD_TST_DB)/log2SD_Icd_filters.ini" >> $(CODE_GEN_LST)
  endif
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif

# *************************************************************************
# Step 2: Generate Base Information
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_c.det: FORCE
# *************************************************************************
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_c.det: FORCE
endif
$(MODIS_RULESDIR)/codegen_dep/cgen_c.det: $(MODIS_RULESDIR)/codegen_dep/libParseDbModem.det
$(MODIS_RULESDIR)/codegen_dep/cgen_c.det: $(strip $(TSTDIR))/database/$(CGEN_DEF_FILE) $(strip $(TSTDIR))/database/Pc_Cnf $(VERNOFILE) $(CGEN) $(NEED_CHECK_DEPEND_LIST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) -n "Generate Base Information ..."
	@$(IF_EXIST) $(MODISBUILD_TST_DB)/$(MDDBINFOCUSTOMPREFIX)* $(THEN) \
		$(DEL_FILE) $(MODISBUILD_TST_DB)/$(MDDBINFOCUSTOMPREFIX)* $(CMD_END)
	@$(IF_NOT_EXIST) $(BUILD_TSTDIR)/src $(THEN) \
		$(MKDIR) $(BUILD_TSTDIR)/src $(CMD_END)
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(ECHO) -n "$(CGEN) -c $(MODISBUILD_TST_DB)/msglog_db/libParseDbModem.db $(strip $(TSTDIR))/database/$(CGEN_DEF_FILE) $(strip $(TSTDIR))/database/Pc_Cnf $(CODEGEN_DATABASE_OUT) $(MODISBUILD_TST_DB)/enumFile $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) -qModSim-$(BUILD_TSTDIR)/src/tst_querysimid.c -sf-$(MODISBUILD_TST_DB)/sf.ini -prjName-$(strip $(FULL_PRJ_NAME)) -VERNO_HAL-$(strip $(VERNO_HAL))" >>$(CGEN_CFG_MODEM)
	@$(ECHO) -n "$(BUILD_TSTDIR)/src/tst_querysimid.c" >>$(CODE_GEN_LST)
else
  ifeq ($(strip $(UNIVERSAL_DATABASE_SUPPORT)),TRUE)
	@$(ECHO) -n $(CGEN) -c $(MODISBUILD_TST_DB)/msglog_db/libParseDbModem_fdd.db $(strip $(TSTDIR))/database/$(CGEN_DEF_FILE) $(strip $(TSTDIR))/database/Pc_Cnf $(CODEGEN_DATABASE_OUT) $(MODISBUILD_TST_DB)/enumFile >>$(CGEN_CFG_MODEM)
  else
	@$(ECHO) -n $(CGEN) -c $(MODISBUILD_TST_DB)/msglog_db/libParseDbModem.db $(strip $(TSTDIR))/database/$(CGEN_DEF_FILE) $(strip $(TSTDIR))/database/Pc_Cnf $(CODEGEN_DATABASE_OUT) $(MODISBUILD_TST_DB)/enumFile MoDIS $(strip $(VERNO)) -qModSim-$(BUILD_TSTDIR)/src/tst_querysimid_modis.c >>$(CGEN_CFG_MODEM)
  endif
	@$(ECHO) -n $(BUILD_TSTDIR)/src/tst_querysimid_modis.c >>$(CODE_GEN_LST)
endif
	@$(ECHO) -n  "$@: $(strip $(TSTDIR))/database/$(CGEN_DEF_FILE) $(strip $(TSTDIR))/database/Pc_Cnf $(strip $(VERNOFILE)) $(strip $(PROJECT_MAKEFILE)) $(strip $(VERNOFILE))" >$@
	@$(ECHO) -n  "$@" >>$(CODE_GEN_LST)
	@$(ECHO) -n  "$(MODISBUILD_TST_DB)/enumFile" >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_c_sec.det: FORCE
# *************************************************************************
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_c_sec.det: FORCE
endif
$(MODIS_RULESDIR)/codegen_dep/cgen_c_sec.det: $(MODIS_RULESDIR)/codegen_dep/libParseDbModem_sec.det
$(MODIS_RULESDIR)/codegen_dep/cgen_c_sec.det: $(strip $(TSTDIR))/database/$(CGEN_DEF_FILE) $(strip $(TSTDIR))/database/Pc_Cnf $(VERNOFILE) $(CGEN) $(NEED_CHECK_DEPEND_LIST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) -n "Generate Base Information ..."
	@$(IF_EXIST) $(MODISBUILD_TST_DB_SEC)/$(MDDBINFOCUSTOMPREFIX)* $(THEN) \
		$(DEL_FILE) $(MODISBUILD_TST_DB_SEC)/$(MDDBINFOCUSTOMPREFIX)* $(CMD_END)
	@$(IF_NOT_EXIST) $(BUILD_TSTDIR)/src $(THEN) \
		$(MKDIR) $(BUILD_TSTDIR)/src $(CMD_END)
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(ECHO) -n "$(CGEN) -c $(MODISBUILD_TST_DB_SEC)/msglog_db/libParseDbModem_sec.db $(strip $(TSTDIR))/database/$(CGEN_DEF_FILE) $(strip $(TSTDIR))/database/Pc_Cnf $(CODEGEN_DATABASE_OUT_SEC) $(MODISBUILD_TST_DB)/enumFile $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(MTK_INTERNAL_VERNO)) -qModSim-$(BUILD_TSTDIR)/src/tst_querysimid.c -sf-$(MODISBUILD_TST_DB)/sf.ini -prjName-$(strip $(FULL_PRJ_NAME)) -VERNO_HAL-$(strip $(VERNO_HAL))" >>$(CGEN_CFG_MODEM_SEC)
	@$(ECHO) -n "$(BUILD_TSTDIR)/src/tst_querysimid.c" >>$(CODE_GEN_LST)
else
	@$(ECHO) -n $(CGEN) -c $(MODISBUILD_TST_DB_SEC)/msglog_db/libParseDbModem_sec.db $(strip $(TSTDIR))/database/$(CGEN_DEF_FILE) $(strip $(TSTDIR))/database/Pc_Cnf $(CODEGEN_DATABASE_OUT_SEC) $(MODISBUILD_TST_DB)/enumFile MoDIS $(strip $(VERNO)) -qModSim-$(BUILD_TSTDIR)/src/tst_querysimid_modis.c >>$(CGEN_CFG_MODEM_SEC)
	@$(ECHO) -n $(BUILD_TSTDIR)/src/tst_querysimid_modis.c >>$(CODE_GEN_LST)
endif
	@$(ECHO) -n  "$@: $(strip $(TSTDIR))/database/$(CGEN_DEF_FILE) $(strip $(TSTDIR))/database/Pc_Cnf $(strip $(VERNOFILE)) $(strip $(PROJECT_MAKEFILE)) $(strip $(VERNOFILE))" >$@
	@$(ECHO) -n  "$@" >>$(CODE_GEN_LST)
	@$(ECHO) -n  "$(MODISBUILD_TST_DB)/enumFile" >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_ap_libParseDbModem.det: FORCE
# *************************************************************************
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_ap_libParseDbModem.det: FORCE
endif
$(MODIS_RULESDIR)/codegen_dep/cgen_ap_libParseDbModem.det: $(MODIS_RULESDIR)/codegen_dep/libParseDbModem.det
$(MODIS_RULESDIR)/codegen_dep/cgen_ap_libParseDbModem.det: $(strip $(TSTDIR))/database/$(CGEN_DEF_FILE) $(strip $(TSTDIR))/database/Pc_Cnf $(strip $(VERNOFILE)) $(strip $(PROJECT_MAKEFILE)) $(CGEN)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) -n "Append Base Information ..."
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  ifeq ($(strip $(UNIVERSAL_DATABASE_SUPPORT)),TRUE)
    ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
	@$(ECHO) -n "$(CGEN) -ap5 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN_SEC) $(MODISBUILD_TST_DB)/msglog_db/libParseDbModem_fdd.db $(MODISBUILD_TST_DB)/enumFile" >>$(CGEN_CFG_MODEM)
	@$(ECHO) -n "$(CGEN) -ap6 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/libParseDbModem_tdd.db $(MODISBUILD_TST_DB)/enumFile $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) -qModSim-$(BUILD_TSTDIR)/src/tst_querysimid.c" >>$(CGEN_CFG_MODEM)
    else
	@$(ECHO) -n "$(CGEN) -ap5 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN_SEC) $(MODISBUILD_TST_DB)/msglog_db/libParseDbModem_fdd.db $(MODISBUILD_TST_DB)/enumFile $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) -qModSim-$(BUILD_TSTDIR)/src/tst_querysimid.c" >>$(CGEN_CFG_MODEM)
    endif
  else
	@$(ECHO) -n "$(CGEN) -ap5 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN_SEC) $(MODISBUILD_TST_DB)/msglog_db/libParseDbModem.db $(MODISBUILD_TST_DB)/enumFile $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) -qModSim-$(BUILD_TSTDIR)/src/tst_querysimid.c" >>$(CGEN_CFG_MODEM)
  endif
else
  ifeq ($(strip $(UNIVERSAL_DATABASE_SUPPORT)),TRUE)
    ifeq ($(strip $(NO_LTECGEN)),TRUE)
		@$(ECHO) -n $(CGEN) -ap5 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/libParseDbModem_tdd.db $(MODISBUILD_TST_DB)/enumFile MoDIS $(strip $(VERNO))  -qModSim-$(BUILD_TSTDIR)/src/tst_querysimid_modis.c>>$(CGEN_CFG_MODEM)
    else
      ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
		@$(ECHO) -n $(CGEN) -ap5 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN_SEC) $(MODISBUILD_TST_DB)/msglog_db/libParseDbModem_fdd.db $(MODISBUILD_TST_DB)/enumFile >>$(CGEN_CFG_MODEM)
		@$(ECHO) -n $(CGEN) -ap6 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/libParseDbModem_tdd.db $(MODISBUILD_TST_DB)/enumFile MoDIS $(strip $(VERNO))  -qModSim-$(BUILD_TSTDIR)/src/tst_querysimid_modis.c>>$(CGEN_CFG_MODEM)
      else
		@$(ECHO) -n $(CGEN) -ap5 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN_SEC) $(MODISBUILD_TST_DB)/msglog_db/libParseDbModem_fdd.db $(MODISBUILD_TST_DB)/enumFile MoDIS $(strip $(VERNO))  -qModSim-$(BUILD_TSTDIR)/src/tst_querysimid_modis.c>>$(CGEN_CFG_MODEM)
      endif
    endif
  else
	@$(ECHO) -n $(CGEN) -ap5 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN_SEC) $(MODISBUILD_TST_DB)/msglog_db/libParseDbModem.db $(MODISBUILD_TST_DB)/enumFile MoDIS $(strip $(VERNO))  -qModSim-$(BUILD_TSTDIR)/src/tst_querysimid_modis.c>>$(CGEN_CFG_MODEM)
  endif
endif
	@$(ECHO) -n "$@: $(strip $(TSTDIR))/database/$(CGEN_DEF_FILE) $(strip $(TSTDIR))/database/Pc_Cnf $(strip $(VERNOFILE)) $(strip $(PROJECT_MAKEFILE))" >$@
	@$(ECHO) -n "$@" >>$(CODE_GEN_LST)
	@$(ECHO) -n "$(MODISBUILD_TST_DB)/enumFile" >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_ps_Modem.det: FORCE
# Step 3: Protocol trace information
# *************************************************************************
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_ps_Modem.det: FORCE
endif
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  ifeq ($(strip $(DHL_SUPPORT)),FALSE)
    $(MODIS_RULESDIR)/codegen_dep/cgen_ps_Modem.det: $(MODIS_RULESDIR)/codegen_dep/cgen_c.det
  endif
    $(MODIS_RULESDIR)/codegen_dep/cgen_ps_Modem.det: $(MODIS_RULESDIR)/codegen_dep/cgen_ap_srcParseDbModem.det
else ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_ps_Modem.det: $(MODIS_RULESDIR)/codegen_dep/cgen_ap_srcParseDbModem.det
endif
$(MODIS_RULESDIR)/codegen_dep/cgen_ps_Modem.det: $(MODIS_RULESDIR)/codegen_dep/cgen_cm.det
$(MODIS_RULESDIR)/codegen_dep/cgen_ps_Modem.det: $(MODIS_RULESDIR)/codegen_dep/codegen_single_Modem.det
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) -n "Generate PS Trace Information ..."
#backup xxx_trc_gen.h
	@$(IF_NOT_EXIST) $(MODISBUILD_TST_DB)/pstrace_db_bak $(THEN) \
		($(MKDIR) $(MODISBUILD_TST_DB)/pstrace_db_bak) \
	 $(ELSE) \
	 	($(LIST_DIR) "$(MODISBUILD_TST_DB)/pstrace_db_bak/*.*" 1>$(DEV_NUL) 2>&1 $(WITH)\
			$(IF_ERR_FALSE) $(THEN) $(DEL_FILE) $(MODISBUILD_TST_DB)/pstrace_db_bak/*.*  $(CMD_END))\
	 $(CMD_END)
	@($(LIST_DIR) "$(MODISBUILD_TST_DB)/pstrace_db/*.h" 1>$(DEV_NUL) 2>&1 $(WITH) \
		$(IF_ERR_FALSE) $(THEN) $(COPY_FILE) $(MODISBUILD_TST_DB)/pstrace_db/*.h $(MODISBUILD_TST_DB)/pstrace_db_bak/ >$(DEV_NUL) $(CMD_END))
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(ECHO) -n "$(CGEN) -ps $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/pstrace_db/codegen_single_Modem.ptr $(MODISBUILD_TST_DB)/pstrace_db/ps_trace_1.h" >>$(CGEN_CFG_MODEM)
	@$(ECHO) -n "$(CGEN) -rle $(MODISBUILD_TST_DB)/pstrace_db/ps_trace_2.h $(MODISBUILD_TST_DB)/pstrace_db/ps_trace_1.h" >>$(CGEN_CFG_MODEM)
	@$(ECHO) -n "$(CGEN) -sps $(MODISBUILD_TST_DB)/pstrace_db/ps_trace.h $(MODISBUILD_TST_DB)/pstrace_db/ps_trace_2.h" >>$(CGEN_CFG_MODEM)
else
	@$(ECHO) -n $(CGEN) -ps $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/pstrace_db/codegen_single_Modem.ptr $(MODISBUILD_TST_DB)/pstrace_db/ps_trace_1.h >>$(CGEN_CFG_MODEM)
	@$(ECHO) -n $(CGEN) -sps $(MODISBUILD_TST_DB)/pstrace_db/ps_trace.h $(MODISBUILD_TST_DB)/pstrace_db/ps_trace_1.h >>$(CGEN_CFG_MODEM)
endif
	@$(ECHO) -n "$@:" >$@
	@$(ECHO) -n "$@" >>$(CODE_GEN_LST)
	@$(ECHO) -n "$(MODISBUILD_TST_DB)/pstrace_db/ps_trace.h" >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_ps_Modem_sec.det: FORCE
# *************************************************************************
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_ps_Modem_sec.det: FORCE
endif
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_ps_Modem_sec.det: $(MODIS_RULESDIR)/codegen_dep/cgen_c_sec.det
endif
$(MODIS_RULESDIR)/codegen_dep/cgen_ps_Modem_sec.det: $(MODIS_RULESDIR)/codegen_dep/codegen_single_Modem_sec.det
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) -n "Generate PS Trace Information ..."
#backup xxx_trc_gen.h
	@$(IF_NOT_EXIST) $(MODISBUILD_TST_DB)/pstrace_db_bak $(THEN) \
		($(MKDIR) $(MODISBUILD_TST_DB)/pstrace_db_bak) \
	 $(ELSE) \
	 	($(LIST_DIR) "$(MODISBUILD_TST_DB)/pstrace_db_bak/*.*" 1>$(DEV_NUL) 2>&1 $(WITH)\
			$(IF_ERR_FALSE) $(THEN) $(DEL_FILE) $(MODISBUILD_TST_DB)/pstrace_db_bak/*.*  $(CMD_END))\
	 $(CMD_END)
	@($(LIST_DIR) "$(MODISBUILD_TST_DB)/pstrace_db/*.h" 1>$(DEV_NUL) 2>&1 $(WITH) \
		$(IF_ERR_FALSE) $(THEN) $(COPY_FILE) $(MODISBUILD_TST_DB)/pstrace_db/*.h $(MODISBUILD_TST_DB)/pstrace_db_bak/ >$(DEV_NUL) $(CMD_END))
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(ECHO) -n "$(CGEN) -ps $(CODEGEN_DATABASE_OUT_SEC) $(CODEGEN_DATABASE_IN_SEC) $(MODISBUILD_TST_DB_SEC)/pstrace_db/codegen_single_Modem_sec.ptr $(MODISBUILD_TST_DB)/pstrace_db/ps_trace_1.h" >>$(CGEN_CFG_MODEM_SEC)
else
	@$(ECHO) -n $(CGEN) -ps $(CODEGEN_DATABASE_OUT_SEC) $(CODEGEN_DATABASE_IN_SEC) $(MODISBUILD_TST_DB_SEC)/pstrace_db/codegen_single_Modem_sec.ptr $(MODISBUILD_TST_DB)/pstrace_db/ps_trace_1.h >>$(CGEN_CFG_MODEM_SEC)
endif
	@$(ECHO) -n "$@:" >$@
	@$(ECHO) -n "$@" >>$(CODE_GEN_LST)
	@$(ECHO) -n "$(MODISBUILD_TST_DB)/pstrace_db/ps_trace.h" >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_l1.det: FORCE
# Step 4: Layer 1 trace information
# *************************************************************************
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_l1.det: FORCE
else
  -include $(MODIS_RULESDIR)/codegen_dep/./cgen_l1.det
endif
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  ifeq ($(strip $(DHL_SUPPORT)),FALSE)
    $(MODIS_RULESDIR)/codegen_dep/cgen_l1.det: $(MODIS_RULESDIR)/codegen_dep/cgen_c.det
  endif
endif
ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
  ifneq ($(strip $(TMD_FILES)),)
$(MODIS_RULESDIR)/codegen_dep/cgen_l1.det: $(NEED_CHECK_DEPEND_LIST)
  else
$(MODIS_RULESDIR)/codegen_dep/cgen_l1.det: $(NEED_CHECK_DEPEND_LIST) $(MODIS_RULESDIR)/codegen_dep/cgen_ap_libParseDbModem.det 
  endif
else
$(MODIS_RULESDIR)/codegen_dep/cgen_l1.det: $(NEED_CHECK_DEPEND_LIST) $(MODIS_RULESDIR)/codegen_dep/cgen_ap_libParseDbModem.det
endif 
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
#backup tst/include/*.h
	@$(IF_NOT_EXIST) $(BUILD_TSTDIR)/include $(THEN) \
		$(MKDIR) $(BUILD_TSTDIR)/include $(CMD_END)
	@$(IF_NOT_EXIST) $(BUILD_TSTDIR)/src $(THEN) \
		$(MKDIR) $(BUILD_TSTDIR)/src $(CMD_END)
	@$(IF_NOT_EXIST) $(CGEN_L1_OUTDIR) $(THEN) \
		$(MKDIR) $(CGEN_L1_OUTDIR) $(CMD_END)
	@$(IF_NOT_EXIST) $(BUILD_TSTDIR)/include_bak $(THEN) \
		($(MKDIR) $(BUILD_TSTDIR)/include_bak) \
	$(ELSE) \
		($(LIST_DIR) "$(BUILD_TSTDIR)/include_bak/*.*" 1>$(DEV_NUL) 2>&1 $(WITH)\
			$(IF_ERR_FALSE) $(THEN) $(DEL_FILE) $(BUILD_TSTDIR)/include_bak/*.* $(CMD_END)) \
	$(CMD_END)
	@($(LIST_DIR) "$(BUILD_TSTDIR)/include/*.h" 1>$(DEV_NUL) 2>&1 $(WITH)\
		$(IF_ERR_FALSE) $(THEN) $(COPY_FILE) $(BUILD_TSTDIR)/include/*.h $(BUILD_TSTDIR)/include_bak/ >$(DEV_NUL) $(CMD_END))
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
	@$(ECHO) -n "Generate L1 Trace Information ..."
  ifeq ($(strip $(RUN_CGEN_L1)),TRUE)
    ifeq ($(strip $(TMD_FILES)),)
     ifeq ($(strip $(DHL_SUPPORT)),TRUE)
      ifeq ($(LTE_SOURCE_BUILD),TRUE)
			@$(ECHO) -n "$(CGEN) -eL1 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) L1_CATCHER $(BUILD_TSTDIR)/src/TrcMod.c $(BUILD_TSTDIR)/include/TrcMod.h $(TMD_FILES) -OutputCPath-$(CGEN_L1_OUTDIR)/" >>$(CGEN_CFG_MODEM)
      else
        ifeq ($(strip $(NO_LTECGEN)),FALSE)
					@$(ECHO) -n "$(CGEN) -eL1 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) L1_CATCHER $(BUILD_TSTDIR)/src/TrcMod.c $(BUILD_TSTDIR)/include/TrcMod.h $(TMD_FILES) -OutputCPath-$(CGEN_L1_OUTDIR)/" >>$(CGEN_CFG_MODEM)
        else
					@$(ECHO) -n "$(CGEN) -eL1 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) L1_CATCHER $(BUILD_TSTDIR)/src/TrcMod.c $(BUILD_TSTDIR)/include/TrcMod.h $(DHL_L1_TMD_FILE) $(TMD_FILES) -OutputCPath-$(CGEN_L1_OUTDIR)/" >>$(CGEN_CFG_MODEM)
        endif
      endif
     else
			@$(ECHO) -n "$(CGEN) -L1 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) L1_CATCHER $(BUILD_TSTDIR)/src/TrcMod.c $(BUILD_TSTDIR)/include/TrcMod.h $(TMD_FILES) -OutputCPath-$(CGEN_L1_OUTDIR)/" >>$(CGEN_CFG_MODEM)
     endif
	@$(STRCMPEX) abc abc e $@ $@: $(filter-out CuStOm_StArT_% CuStOm_EnD_%,$(strip $(TMD_FILES)))
    else
      ifeq ($(strip $(DHL_SUPPORT)),TRUE)
        ifeq ($(LTE_SOURCE_BUILD),TRUE)
				@$(ECHO) -n "$(CGEN) -eL1 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) L1_CATCHER $(BUILD_TSTDIR)/src/TrcMod.c $(BUILD_TSTDIR)/include/TrcMod.h $(strip $(TSTDIR))/database/l1validation_db/L1ModMsg.chk $(TMD_FILES) -OutputCPath-$(CGEN_L1_OUTDIR)/" >>$(CGEN_CFG_MODEM)
        else
          ifeq ($(strip $(NO_LTECGEN)),FALSE)
					@$(ECHO) -n "$(CGEN) -eL1 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) L1_CATCHER $(BUILD_TSTDIR)/src/TrcMod.c $(BUILD_TSTDIR)/include/TrcMod.h $(strip $(TSTDIR))/database/l1validation_db/L1ModMsg.chk $(TMD_FILES) -OutputCPath-$(CGEN_L1_OUTDIR)/" >>$(CGEN_CFG_MODEM)
          else
					@$(ECHO) -n "$(CGEN) -eL1 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) L1_CATCHER $(BUILD_TSTDIR)/src/TrcMod.c $(BUILD_TSTDIR)/include/TrcMod.h $(strip $(TSTDIR))/database/l1validation_db/L1ModMsg.chk $(DHL_L1_TMD_FILE) $(TMD_FILES) -OutputCPath-$(CGEN_L1_OUTDIR)/" >>$(CGEN_CFG_MODEM)
          endif
        endif
      else
				@$(ECHO) -n "$(CGEN) -L1 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) L1_CATCHER $(BUILD_TSTDIR)/src/TrcMod.c $(BUILD_TSTDIR)/include/TrcMod.h $(strip $(TSTDIR))/database/l1validation_db/L1ModMsg.chk $(TMD_FILES) -OutputCPath-$(CGEN_L1_OUTDIR)/" >>$(CGEN_CFG_MODEM)
      endif
	@$(STRCMPEX) abc abc e $@ $@: $(strip $(TSTDIR))/database/l1validation_db/L1ModMsg.chk  $(filter-out CuStOm_StArT_% CuStOm_EnD_%,$(strip $(TMD_FILES)))
	@$(FOR) $(DECLARE_VAR)i $(IN) $(foreach tmd_file,$(filter-out CuStOm_StArT_% CuStOm_EnD_%,$(strip $(TMD_FILES))), $(CGEN_L1_OUTDIR)/$(notdir $(basename $(tmd_file))).c) $(DO) (echo $(PRE_VAR)i >>$(CODE_GEN_LST)) $(DONE)
	@$(FOR) $(DECLARE_VAR)i $(IN) $(foreach tmd_file,$(filter-out CuStOm_StArT_% CuStOm_EnD_%,$(strip $(TMD_FILES))), $(BUILD_TSTDIR)/include/$(notdir $(basename $(tmd_file))).h) $(DO) (echo $(PRE_VAR)i >>$(CODE_GEN_LST)) $(DONE)
    endif
	@$(ECHO) -n "$(BUILD_TSTDIR)/src/TrcMod.c" >>$(CODE_GEN_LST)
	@$(ECHO) -n "$(BUILD_TSTDIR)/include/TrcMod.h" >>$(CODE_GEN_LST)
  else
      # workaround for -puremodis, because some L1 headers are always included
    ifeq ($(strip $(OS_VERSION)),MSWin32)
	@for %%i in ($(subst /,\,$(BUILD_TSTDIR)/include/TrcMod.h) $(foreach tmd_file,$(filter-out CuStOm_StArT_% CuStOm_EnD_%,$(strip $(TMD_FILES))),$(subst /,\,$(BUILD_TSTDIR)/include/$(notdir $(basename $(tmd_file)).h)))) do (if not exist %%i copy /y NUL %%i >NUL)
    else
	@touch -a $(BUILD_TSTDIR)/include/TrcMod.h $(foreach tmd_file,$(filter-out CuStOm_StArT_% CuStOm_EnD_%,$(strip $(TMD_FILES))),$(BUILD_TSTDIR)/include/$(notdir $(basename $(tmd_file)).h))
    endif
  endif
else
  ifneq ($(strip $(TMD_FILES)),)
	@$(ECHO) -n "$(CGEN) -eL1 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) L1_CATCHER $(BUILD_TSTDIR)/src/TrcMod.c $(BUILD_TSTDIR)/include/TrcMod.h $(strip $(TSTDIR))/database/l1validation_db/L1ModMsg.chk $(TMD_FILES) -OutputCPath-$(CGEN_L1_OUTDIR)/" >>$(CGEN_CFG_MODEM)
  endif
endif
	@$(ECHO) -n "$@:" >>$@
	@$(ECHO) -n "$@" >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_l1_sec.det: FORCE
# *************************************************************************
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_l1_sec.det: FORCE
else
  -include $(MODIS_RULESDIR)/codegen_dep/./cgen_l1_sec.det
endif
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_l1_sec.det: $(MODIS_RULESDIR)/codegen_dep/cgen_c_sec.det
endif
$(MODIS_RULESDIR)/codegen_dep/cgen_l1_sec.det: $(NEED_CHECK_DEPEND_LIST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
#backup tst/include/*.h
	@$(IF_NOT_EXIST) $(BUILD_TSTDIR)/include $(THEN) \
		$(MKDIR) $(BUILD_TSTDIR)/include $(CMD_END)
	@$(IF_NOT_EXIST) $(BUILD_TSTDIR)/src $(THEN) \
		$(MKDIR) $(BUILD_TSTDIR)/src $(CMD_END)
	@$(IF_NOT_EXIST) $(CGEN_L1_OUTDIR) $(THEN) \
		$(MKDIR) $(CGEN_L1_OUTDIR) $(CMD_END)
	@$(IF_NOT_EXIST) $(BUILD_TSTDIR)/include_bak $(THEN) \
		($(MKDIR) $(BUILD_TSTDIR)/include_bak) \
	$(ELSE) \
		($(LIST_DIR) "$(BUILD_TSTDIR)/include_bak/*.*" 1>$(DEV_NUL) 2>&1 $(WITH)\
			$(IF_ERR_FALSE) $(THEN) $(DEL_FILE) $(BUILD_TSTDIR)/include_bak/*.* $(CMD_END)) \
	$(CMD_END)
	@($(LIST_DIR) "$(BUILD_TSTDIR)/include/*.h" 1>$(DEV_NUL) 2>&1 $(WITH)\
		$(IF_ERR_FALSE) $(THEN) $(COPY_FILE) $(BUILD_TSTDIR)/include/*.h $(BUILD_TSTDIR)/include_bak/ >$(DEV_NUL) $(CMD_END))
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
	@$(ECHO) -n "Generate L1 Trace Information ..."
  ifeq ($(strip $(RUN_CGEN_L1)),TRUE)
    ifeq ($(strip $(TMD_FILES_SEC)),)
      ifeq ($(strip $(DHL_SUPPORT)),TRUE)
		@$(ECHO) -n "$(CGEN) -eL1 $(CODEGEN_DATABASE_OUT_SEC) $(CODEGEN_DATABASE_IN_SEC) L1_CATCHER $(BUILD_TSTDIR)/src/TrcMod.c $(BUILD_TSTDIR)/include/TrcMod.h $(DHL_L1_TMD_FILE) $(TMD_FILES_SEC) -OutputCPath-$(CGEN_L1_OUTDIR)/" >>$(CGEN_CFG_MODEM_SEC)
      else
		@$(ECHO) -n "$(CGEN) -L1  $(CODEGEN_DATABASE_OUT_SEC) $(CODEGEN_DATABASE_IN_SEC) L1_CATCHER $(BUILD_TSTDIR)/src/TrcMod.c $(BUILD_TSTDIR)/include/TrcMod.h $(TMD_FILES_SEC) -OutputCPath-$(CGEN_L1_OUTDIR)/" >>$(CGEN_CFG_MODEM_SEC)
      endif
	@$(STRCMPEX) abc abc e $@ $@: $(filter-out CuStOm_StArT_% CuStOm_EnD_%,$(strip $(TMD_FILES_SEC)))
    else
       ifeq ($(strip $(DHL_SUPPORT)),TRUE)
		@$(ECHO) -n "$(CGEN) -eL1 $(CODEGEN_DATABASE_OUT_SEC) $(CODEGEN_DATABASE_IN_SEC) L1_CATCHER $(BUILD_TSTDIR)/src/TrcMod.c $(BUILD_TSTDIR)/include/TrcMod.h $(strip $(TSTDIR_SEC))/database/l1validation_db/L1ModMsg.chk $(DHL_L1_TMD_FILE) $(TMD_FILES_SEC) -OutputCPath-$(CGEN_L1_OUTDIR)/" >>$(CGEN_CFG_MODEM_SEC)
       else
		@$(ECHO) -n "$(CGEN) -L1  $(CODEGEN_DATABASE_OUT_SEC) $(CODEGEN_DATABASE_IN_SEC) L1_CATCHER $(BUILD_TSTDIR)/src/TrcMod.c $(BUILD_TSTDIR)/include/TrcMod.h $(strip $(TSTDIR_SEC))/database/l1validation_db/L1ModMsg.chk $(TMD_FILES_SEC) -OutputCPath-$(CGEN_L1_OUTDIR)/" >>$(CGEN_CFG_MODEM_SEC)
       endif
	@$(STRCMPEX) abc abc e $@ $@: $(strip $(TSTDIR_SEC))/database/l1validation_db/L1ModMsg.chk  $(filter-out CuStOm_StArT_% CuStOm_EnD_%,$(strip $(TMD_FILES_SEC)))
	@$(FOR) $(DECLARE_VAR)i $(IN) $(foreach tmd_file,$(filter-out CuStOm_StArT_% CuStOm_EnD_%,$(strip $(TMD_FILES_SEC))), $(CGEN_L1_OUTDIR)/$(notdir $(basename $(tmd_file))).c $(BUILD_TSTDIR)/include/$(notdir $(basename $(tmd_file))).h) $(DO) (echo $(PRE_VAR)i >>$(CODE_GEN_LST)) $(DONE)
    endif
	@$(ECHO) -n "$(BUILD_TSTDIR)/src/TrcMod.c" >>$(CODE_GEN_LST)
	@$(ECHO) -n "$(BUILD_TSTDIR)/include/TrcMod.h" >>$(CODE_GEN_LST)
  else
      # workaround for -puremodis, because some L1 headers are always included
    ifeq ($(strip $(OS_VERSION)),MSWin32)
	@for %%i in ($(subst /,\,$(BUILD_TSTDIR)/include/TrcMod.h) $(foreach tmd_file,$(filter-out CuStOm_StArT_% CuStOm_EnD_%,$(strip $(TMD_FILES_SEC))),$(subst /,\,$(BUILD_TSTDIR)/include/$(notdir $(basename $(tmd_file)).h)))) do (if not exist %%i copy /y NUL %%i >NUL)
    else
	@touch -a $(BUILD_TSTDIR)/include/TrcMod.h $(foreach tmd_file,$(filter-out CuStOm_StArT_% CuStOm_EnD_%,$(strip $(TMD_FILES_SEC))),$(BUILD_TSTDIR)/include/$(notdir $(basename $(tmd_file)).h))
    endif
  endif
endif
	@$(ECHO) -n "$@:" >>$@
	@$(ECHO) -n "$@" >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_gv.det: FORCE
# Step 5: Result temporary - Global variable information
# *************************************************************************
#ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_gv.det: FORCE
endif
  ifeq ($(strip $(DHL_SUPPORT)),FALSE)
$(MODIS_RULESDIR)/codegen_dep/cgen_gv.det: $(MODIS_RULESDIR)/codegen_dep/cgen_c.det
  endif
ifneq ($(strip $(C2K_RELEASE)),TRUE)
$(MODIS_RULESDIR)/codegen_dep/cgen_gv.det: $(MODIS_RULESDIR)/codegen_dep/gv_db.det
$(MODIS_RULESDIR)/codegen_dep/cgen_gv.det: $(GV_FILES) $(NEED_CHECK_DEPEND_LIST) $(MODIS_RULESDIR)/codegen_dep/cgen_ap_libParseDbModem.det
else
$(MODIS_RULESDIR)/codegen_dep/cgen_gv.det: $(MODIS_RULESDIR)/codegen_dep/gv_db_ext.det
$(MODIS_RULESDIR)/codegen_dep/cgen_gv.det: $(GV_FILES_C2K) $(NEED_CHECK_DEPEND_LIST)
endif
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) -n "Generate Global variable Information ..."
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
ifneq ($(strip $(C2K_RELEASE)),TRUE)
	@$(ECHO) -n "$(CGEN) -gv $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/gv/gv_db/ $(BUILD_TSTDIR)/src/gvTbl.c" >>$(CGEN_CFG_MODEM)
else
	@$(ECHO) -n "$(CGEN) -gv $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/gv/gv_db_ext/ $(BUILD_TSTDIR)/src/gvTbl.c" >>$(CGEN_CFG_MODEM)
endif
	@$(ECHO) -n "$(BUILD_TSTDIR)/src/gvTbl.c" >>$(CODE_GEN_LST)
else
ifneq ($(strip $(C2K_RELEASE)),TRUE)
	@$(ECHO) -n $(CGEN) -gv $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/gv/gv_db/ $(BUILD_TSTDIR)/src/gvTbl_modis.c >>$(CGEN_CFG_MODEM)
else
	@$(ECHO) -n $(CGEN) -gv $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/gv/gv_db_ext/ $(BUILD_TSTDIR)/src/gvTbl_modis.c >>$(CGEN_CFG_MODEM)
endif
	@$(ECHO) -n $(BUILD_TSTDIR)/src/gvTbl_modis.c >>$(CODE_GEN_LST)
endif
ifneq ($(strip $(C2K_RELEASE)),TRUE)
	@$(STRCMPEX) abc abc e $(basename $@).d $@: $(GV_FILES)
else
	@$(STRCMPEX) abc abc e $(basename $@).d $@: $(GV_FILES_C2K)
endif
	@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $@ $@ $(patsubst %/,%,$(dir $@)) "$(basename $(notdir $@))\.d"
	@$(IF_EXIST) $(basename $@).d $(THEN) \
		$(DEL_FILE) $(basename $@).d $(CMD_END)
	@$(ECHO) -n "$@" >> $(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
#endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_gv_sec.det: FORCE
# *************************************************************************
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_gv_sec.det: FORCE
endif
$(MODIS_RULESDIR)/codegen_dep/cgen_gv_sec.det: $(MODIS_RULESDIR)/codegen_dep/cgen_c_sec.det $(MODIS_RULESDIR)/codegen_dep/gv_db_sec.det
$(MODIS_RULESDIR)/codegen_dep/cgen_gv_sec.det: $(GV_FILES_SEC) $(NEED_CHECK_DEPEND_LIST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) -n "Generate Global variable Information ..."
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(ECHO) -n "$(CGEN) -gv $(CODEGEN_DATABASE_OUT_SEC) $(CODEGEN_DATABASE_IN_SEC) $(MODISBUILD_TST_DB_SEC)/gv/gv_db/ $(BUILD_TSTDIR)/src/gvTbl.c" >>$(CGEN_CFG_MODEM_SEC)
	@$(ECHO) -n "$(BUILD_TSTDIR)/src/gvTbl.c" >>$(CODE_GEN_LST)
else
	@$(ECHO) -n $(CGEN) -gv $(CODEGEN_DATABASE_OUT_SEC) $(CODEGEN_DATABASE_IN_SEC) $(MODISBUILD_TST_DB_SEC)/gv/gv_db/ $(BUILD_TSTDIR)/src/gvTbl_modis.c >>$(CGEN_CFG_MODEM_SEC)
	@$(ECHO) -n $(BUILD_TSTDIR)/src/gvTbl_modis.c >>$(CODE_GEN_LST)
endif
	@$(STRCMPEX) abc abc e $(basename $@).d $@: $(GV_FILES_SEC)
	@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $@ $@ $(patsubst %/,%,$(dir $@)) "$(basename $(notdir $@))\.d"
	@$(IF_EXIST) $(basename $@).d $(THEN) \
		$(DEL_FILE) $(basename $@).d $(CMD_END)
	@$(ECHO) -n "$@" >> $(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_l1v.det: FORCE
# Step 6:  Result - Layer 1 validation information (L1S)
# *************************************************************************
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
ifeq ($(strip $(TEST_LOAD_TYPE)),L1S)
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
    $(MODIS_RULESDIR)/codegen_dep/cgen_l1v.det: FORCE
  endif
  ifeq ($(strip $(DHL_SUPPORT)),FALSE)
$(MODIS_RULESDIR)/codegen_dep/cgen_l1v.det: $(MODIS_RULESDIR)/codegen_dep/cgen_c.det
  endif
$(MODIS_RULESDIR)/codegen_dep/cgen_l1v.det: $(MODIS_RULESDIR)/codegen_dep/l1v_db.det
$(MODIS_RULESDIR)/codegen_dep/cgen_l1v.det: $(filter-out %/l1validation_db/l1v_db/l1v_db.l1v,$(shell $(RECURSIVE_DIR) $(strip $(TST_DB))/l1validation_db/ "\.l1v")) $(NEED_CHECK_DEPEND_LIST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) -n "Generate L1 Validation Information ..."
  ifeq ($(strip $(DHL_SUPPORT)),TRUE)
		@$(ECHO) -n "$(CGEN) -L1V $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/l1validation_db/l1v_db/" >>$(CGEN_CFG_MODEM)
  else
		@$(ECHO) -n "$(CGEN) -L1V $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/l1validation_db/l1v_db/" >>$(CGEN_CFG_MODEM)
  endif
	@$(IF_EXIST) $(basename $@).d $(THEN) \
		$(DEL_FILE) $(basename $@).d $(CMD_END)
# too much *.l1v files, command length will be over 32KB
	@$(FOR) $(F_OPT) $(DECLARE_VAR)i $(IN) `$(RECURSIVE_DIR) $(strip $(TST_DB))/l1validation_db "\.l1v"` $(DO) (echo $@: $(PRE_VAR)i >> $(basename $@).d) $(DONE)
	@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $@ $@ $(patsubst %/,%,$(dir $@)) "$(basename $(notdir $@))\.d"
	@$(IF_EXIST) $(basename $@).d $(THEN) \
		$(DEL_FILE) $(basename $@).d $(CMD_END)
	@$(ECHO) -n "$@" >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif
endif
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_l1v_sec.det
# *************************************************************************
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
ifeq ($(strip $(TEST_LOAD_TYPE)),L1S)
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
    $(MODIS_RULESDIR)/codegen_dep/cgen_l1v_sec.det: FORCE
  endif
$(MODIS_RULESDIR)/codegen_dep/cgen_l1v_sec.det: $(MODIS_RULESDIR)/codegen_dep/cgen_c_sec.det
$(MODIS_RULESDIR)/codegen_dep/cgen_l1v_sec.det: $(MODIS_RULESDIR)/codegen_dep/l1v_db_sec.det
$(MODIS_RULESDIR)/codegen_dep/cgen_l1v_sec.det: $(CGEN) $(NEED_CHECK_DEPEND_LIST) $(NEED_CHECK_CODEGEN_LIST)
ifeq ($(LTE_SOURCE_BUILD),TRUE)
$(MODIS_RULESDIR)/codegen_dep/cgen_l1v_sec.det: $(filter-out %/l1validation_db/l1v_db/l1v_db.l1v,$(shell $(RECURSIVE_DIR) $(strip $(TST_DB_SEC))/l1validation_db/ "\.l1v")) 
endif
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) -n "Generate L1 Validation Information ..."
  ifeq ($(strip $(DHL_SUPPORT)),TRUE)
		@$(ECHO) -n "$(CGEN) -L1V $(CODEGEN_DATABASE_OUT_SEC) $(CODEGEN_DATABASE_IN_SEC) $(MODISBUILD_TST_DB_SEC)/l1validation_db/l1v_db/" >>$(CGEN_CFG_MODEM_SEC)
  else
		@$(ECHO) -n "$(CGEN) -L1V $(CODEGEN_DATABASE_OUT_SEC) $(CODEGEN_DATABASE_IN_SEC) $(MODISBUILD_TST_DB_SEC)/l1validation_db/l1v_db/" >>$(CGEN_CFG_MODEM_SEC)
  endif
	@$(IF_EXIST) $(basename $@).d $(THEN) \
		$(DEL_FILE) $(basename $@).d $(CMD_END)
# too much *.l1v files, command length will be over 32KB
	@$(FOR) $(F_OPT) $(DECLARE_VAR)i $(IN) `$(RECURSIVE_DIR) $(strip $(TST_DB_SEC))/l1validation_db "\.l1v"` $(DO) (echo $@: $(PRE_VAR)i >> $(basename $@).d) $(DONE)
	@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $@ $@ $(patsubst %/,%,$(dir $@)) "$(basename $(notdir $@))\.d"
	@$(IF_EXIST) $(basename $@).d $(THEN) \
		$(DEL_FILE) $(basename $@).d $(CMD_END)
	@$(ECHO) -n "$@" >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif
endif
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_un.det: FORCE
# Step 7: Result - Union Information (GSM/GPRS)
# *************************************************************************
#ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
#ifeq ($(RUN_UMTS_GEN),TRUE)
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_un.det: FORCE
endif
ifeq ($(strip $(DHL_SUPPORT)),FALSE)
$(MODIS_RULESDIR)/codegen_dep/cgen_un.det: $(MODIS_RULESDIR)/codegen_dep/cgen_c.det
endif
ifneq ($(strip $(C2K_RELEASE)),TRUE)
$(MODIS_RULESDIR)/codegen_dep/cgen_un.det: $(MODIS_RULESDIR)/codegen_dep/unionTag_parse.det
endif
$(MODIS_RULESDIR)/codegen_dep/cgen_un.det: $(MODIS_RULESDIR)/codegen_dep/unionTag_parse_ext.det
$(MODIS_RULESDIR)/codegen_dep/cgen_un.det: $(NEED_CHECK_DEPEND_LIST)
ifneq ($(strip $(C2K_RELEASE)),TRUE)
$(MODIS_RULESDIR)/codegen_dep/cgen_un.det: $(MODIS_RULESDIR)/codegen_dep/cgen_ap_libParseDbModem.det
endif
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) -n "Generate Union Information ..."
  ifeq ($(strip $(UNIVERSAL_DATABASE_SUPPORT)),TRUE)
    ifneq ($(strip $(C2K_RELEASE)),TRUE)
	@$(ECHO) -n "$(CGEN) -un $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/unionTag/unionTag_parse_fdd.txt" >>$(CGEN_CFG_MODEM)
      ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
	@$(ECHO) -n "$(CGEN) -un $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/unionTag/unionTag_parse_tdd.txt" >>$(CGEN_CFG_MODEM)
      endif
    endif
	@$(ECHO) -n "$(CGEN) -un $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/unionTag/ext/unionTag_parse_fdd.txt" >>$(CGEN_CFG_MODEM)
    ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
	@$(ECHO) -n "$(CGEN) -un $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/unionTag/ext/unionTag_parse_tdd.txt" >>$(CGEN_CFG_MODEM)
    endif
  else
    ifneq ($(strip $(C2K_RELEASE)),TRUE)
	@$(ECHO) -n "$(CGEN) -un $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/unionTag/unionTag_parse.txt" >>$(CGEN_CFG_MODEM)
    endif
	@$(ECHO) -n "$(CGEN) -un $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/unionTag/ext/unionTag_parse.txt" >>$(CGEN_CFG_MODEM)
    endif
	@$(ECHO) -n "$@:" >$@
	@$(ECHO) -n "$@" >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
#endif
#endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_un_sec.det:
# *************************************************************************
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
ifeq ($(RUN_UMTS_GEN),TRUE)
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_un_sec.det: FORCE
endif
$(MODIS_RULESDIR)/codegen_dep/cgen_un_sec.det: $(MODIS_RULESDIR)/codegen_dep/cgen_c_sec.det $(MODIS_RULESDIR)/codegen_dep/unionTag_parse_sec.det
$(MODIS_RULESDIR)/codegen_dep/cgen_un_sec.det: $(NEED_CHECK_DEPEND_LIST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) -n "Generate Union Information ..."
	@$(ECHO) -n "$(CGEN) -un $(CODEGEN_DATABASE_OUT_SEC) $(CODEGEN_DATABASE_IN_SEC) $(MODISBUILD_TST_DB_SEC)/unionTag/unionTag_parse_sec.txt" >>$(CGEN_CFG_MODEM_SEC)
	@$(ECHO) -n "$@:" >$@
	@$(ECHO) -n "$@" >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_cm.det: FORCE
# Step 8: Result - Merge customization code
# *************************************************************************
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_cm.det: FORCE
endif
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  ifeq ($(strip $(DHL_SUPPORT)),FALSE)
    $(MODIS_RULESDIR)/codegen_dep/cgen_cm.det: $(MODIS_RULESDIR)/codegen_dep/cgen_c.det
  endif
endif
$(MODIS_RULESDIR)/codegen_dep/cgen_cm.det: $(MODIS_RULESDIR)/codegen_dep/custom_parse_db.det
$(MODIS_RULESDIR)/codegen_dep/cgen_cm.det: $(VERNOFILE) $(CGEN) $(NEED_CHECK_DEPEND_LIST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
    ifeq ($(strip $(UNIVERSAL_DATABASE_SUPPORT)),TRUE)
      ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
	@$(ECHO) -n $(CGEN) -cm5 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_fdd.db $(MODISBUILD_TST_DB)/enumFileCustom >>$(CGEN_CFG_MODEM)
	@$(ECHO) -n $(CGEN) -cm $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_tdd.db $(MODISBUILD_TST_DB)/enumFileCustom $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) -sf-$(MODISBUILD_TST_DB)/sf.ini -prjName-"$(strip $(FULL_PRJ_NAME))" -VERNO_HAL-$(strip $(VERNO_HAL)) >>$(CGEN_CFG_MODEM)
      else
	@$(ECHO) -n $(CGEN) -cm $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_fdd.db $(MODISBUILD_TST_DB)/enumFileCustom $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) -sf-$(MODISBUILD_TST_DB)/sf.ini -prjName-"$(strip $(FULL_PRJ_NAME))" -VERNO_HAL-$(strip $(VERNO_HAL)) >>$(CGEN_CFG_MODEM)
      endif
    else
	@$(ECHO) -n $(CGEN) -cm $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db.db $(MODISBUILD_TST_DB)/enumFileCustom $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) -sf-$(MODISBUILD_TST_DB)/sf.ini -prjName-"$(strip $(FULL_PRJ_NAME))" -VERNO_HAL-$(strip $(VERNO_HAL)) >>$(CGEN_CFG_MODEM)
    endif
  else
    ifeq ($(strip $(UNIVERSAL_DATABASE_SUPPORT)),TRUE)
      ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
	@$(ECHO) -n $(CGEN) -cm5 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_fdd.db $(MODISBUILD_TST_DB)/enumFileCustom >>$(CGEN_CFG_MODEM)
	@$(ECHO) -n $(CGEN) -cm  $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_tdd.db $(MODISBUILD_TST_DB)/enumFileCustom MoDIS $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
      else
	@$(ECHO) -n $(CGEN) -cm  $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_fdd.db $(MODISBUILD_TST_DB)/enumFileCustom MoDIS $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
      endif
    else
	@$(ECHO) -n $(CGEN) -cm $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db.db $(MODISBUILD_TST_DB)/enumFileCustom MoDIS $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
    endif
  endif
	@$(ECHO) -n $(MODISBUILD_TST_DB)/enumFileCustom >>$(CODE_GEN_LST)
else ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
    ifeq ($(strip $(UNIVERSAL_DATABASE_SUPPORT)),TRUE)
      ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
	@$(ECHO) -n  $(CGEN) -cm5 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_fdd.db $(MODISBUILD_TST_DB)/enumFileCustomSrc >>$(CGEN_CFG_MODEM)
	@$(ECHO) -n  $(CGEN) -cm $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_tdd.db $(MODISBUILD_TST_DB)/enumFileCustomSrc $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) -sf-$(MODISBUILD_TST_DB)/sf.ini -prjName-"$(strip $(FULL_PRJ_NAME))" -VERNO_HAL-$(strip $(VERNO_HAL)) >>$(CGEN_CFG_MODEM)
      else
	@$(ECHO) -n  $(CGEN) -cm $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_fdd.db $(MODISBUILD_TST_DB)/enumFileCustomSrc $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) -sf-$(MODISBUILD_TST_DB)/sf.ini -prjName-"$(strip $(FULL_PRJ_NAME))" -VERNO_HAL-$(strip $(VERNO_HAL)) >>$(CGEN_CFG_MODEM)
      endif
    else
	@$(ECHO) -n  $(CGEN) -cm $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db.db $(MODISBUILD_TST_DB)/enumFileCustomSrc $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) -sf-$(MODISBUILD_TST_DB)/sf.ini -prjName-"$(strip $(FULL_PRJ_NAME))" -VERNO_HAL-$(strip $(VERNO_HAL)) >>$(CGEN_CFG_MODEM)
    endif
  else
    ifeq ($(strip $(UNIVERSAL_DATABASE_SUPPORT)),TRUE)
      ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
	  @$(ECHO) -n $(CGEN) -cm5 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_fdd.db $(MODISBUILD_TST_DB)/enumFileCustomSrc >>$(CGEN_CFG_MODEM)
	  @$(ECHO) -n $(CGEN) -cm  $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_tdd.db $(MODISBUILD_TST_DB)/enumFileCustomSrc MoDIS $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
      else
	@$(ECHO) -n $(CGEN) -cm $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_fdd.db $(MODISBUILD_TST_DB)/enumFileCustomSrc MoDIS $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
      endif
    else
	@$(ECHO) -n $(CGEN) -cm $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db.db $(MODISBUILD_TST_DB)/enumFileCustomSrc MoDIS $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
    endif
  endif
else
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
    ifeq ($(strip $(UNIVERSAL_DATABASE_SUPPORT)),TRUE)
      ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
	@$(ECHO) -n  $(CGEN) -cm5 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_fdd.db $(MODISBUILD_TST_DB)/enumFileCustomAppSrc >>$(CGEN_CFG_MODEM)
	@$(ECHO) -n  $(CGEN) -cm $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_tdd.db $(MODISBUILD_TST_DB)/enumFileCustomAppSrc $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) -sf-$(MODISBUILD_TST_DB)/sf.ini -prjName-"$(strip $(FULL_PRJ_NAME))" -VERNO_HAL-$(strip $(VERNO_HAL)) >>$(CGEN_CFG_MODEM)
      else
	@$(ECHO) -n  $(CGEN) -cm $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_fdd.db $(MODISBUILD_TST_DB)/enumFileCustomAppSrc $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) -sf-$(MODISBUILD_TST_DB)/sf.ini -prjName-"$(strip $(FULL_PRJ_NAME))" -VERNO_HAL-$(strip $(VERNO_HAL)) >>$(CGEN_CFG_MODEM)
      endif
    else
	@$(ECHO) -n  $(CGEN) -cm $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db.db $(MODISBUILD_TST_DB)/enumFileCustomAppSrc $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) -sf-$(MODISBUILD_TST_DB)/sf.ini -prjName-"$(strip $(FULL_PRJ_NAME))" -VERNO_HAL-$(strip $(VERNO_HAL)) >>$(CGEN_CFG_MODEM)
    endif
  else
    ifeq ($(strip $(UNIVERSAL_DATABASE_SUPPORT)),TRUE)
      ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
	@$(ECHO) -n $(CGEN) -cm5 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_fdd.db $(MODISBUILD_TST_DB)/enumFileCustomAppSrc >>$(CGEN_CFG_MODEM)
	@$(ECHO) -n $(CGEN) -cm  $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_tdd.db $(MODISBUILD_TST_DB)/enumFileCustomAppSrc MoDIS $(strip $(VERNO)) $(MMIDIR) >>$(CGEN_CFG_MODEM)
      else
	@$(ECHO) -n $(CGEN) -cm $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db_fdd.db $(MODISBUILD_TST_DB)/enumFileCustomAppSrc MoDIS $(strip $(VERNO)) $(MMIDIR) >>$(CGEN_CFG_MODEM)
      endif
    else
	@$(ECHO) -n $(CGEN) -cm $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/custom_parse_db.db $(MODISBUILD_TST_DB)/enumFileCustomAppSrc MoDIS $(strip $(VERNO)) $(MMIDIR) >>$(CGEN_CFG_MODEM)
    endif
  endif
	@$(ECHO) -n $(MODISBUILD_TST_DB)/enumFileCustomAppSrc >>$(CODE_GEN_LST)
endif
	@$(ECHO) -n $@: $(VERNOFILE) "$(PROJECT_MAKEFILE)" >$@
	@$(ECHO) -n $@ >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_ap_srcParseDbModem.det: FORCE
# Step 8: Result - Merge customization code
# *************************************************************************
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_ap_srcParseDbModem.det: FORCE
endif
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  ifeq ($(strip $(DHL_SUPPORT)),FALSE)
    $(MODIS_RULESDIR)/codegen_dep/cgen_ap_srcParseDbModem.det: $(MODIS_RULESDIR)/codegen_dep/cgen_c.det
  endif
endif
$(MODIS_RULESDIR)/codegen_dep/cgen_ap_srcParseDbModem.det: $(MODIS_RULESDIR)/codegen_dep/srcParseDbModem.det
$(MODIS_RULESDIR)/codegen_dep/cgen_ap_srcParseDbModem.det: $(VERNOFILE) $(CGEN) $(NEED_CHECK_DEPEND_LIST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
    ifeq ($(strip $(UNIVERSAL_DATABASE_SUPPORT)),TRUE)
      ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
	@$(ECHO) -n $(CGEN) -ap7 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/srcParseDbModem_fdd.db $(MODISBUILD_TST_DB)/enumFileCustomApp >>$(CGEN_CFG_MODEM)
	@$(ECHO) -n $(CGEN) -ap $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/srcParseDbModem_tdd.db $(MODISBUILD_TST_DB)/enumFileCustomApp $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
      else
	@$(ECHO) -n $(CGEN) -ap $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/srcParseDbModem_fdd.db $(MODISBUILD_TST_DB)/enumFileCustomApp $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
      endif
    else
	@$(ECHO) -n $(CGEN) -ap $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/srcParseDbModem.db $(MODISBUILD_TST_DB)/enumFileCustomApp $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
    endif
	@$(ECHO) -n $(MODISBUILD_TST_DB)/enumFileCustomApp >>$(CODE_GEN_LST)
  else
    ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
      ifeq ($(strip $(UNIVERSAL_DATABASE_SUPPORT)),TRUE)
        ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
	@$(ECHO) -n $(CGEN) -ap7 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/srcParseDbModem_fdd.db $(MODISBUILD_TST_DB)/enumFileCustomAppSrc >>$(CGEN_CFG_MODEM)
	@$(ECHO) -n $(CGEN) -ap $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/srcParseDbModem_tdd.db $(MODISBUILD_TST_DB)/enumFileCustomAppSrc $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
        else
	@$(ECHO) -n $(CGEN) -ap $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/srcParseDbModem_fdd.db $(MODISBUILD_TST_DB)/enumFileCustomAppSrc $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
        endif
      else
	@$(ECHO) -n $(CGEN) -ap $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/srcParseDbModem.db $(MODISBUILD_TST_DB)/enumFileCustomAppSrc $(strip $(PLATFORM))_$(strip $(CHIP_VER)) $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
      endif
	@$(ECHO) -n $(MODISBUILD_TST_DB)/enumFileCustomAppSrc >>$(CODE_GEN_LST)
    endif
  endif
else
  ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
    ifeq ($(strip $(UNIVERSAL_DATABASE_SUPPORT)),TRUE)
      ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
	@$(ECHO) -n $(CGEN) -ap7 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/srcParseDbModem_fdd.db $(MODISBUILD_TST_DB)/enumFileCustomApp >>$(CGEN_CFG_MODEM)
	@$(ECHO) -n $(CGEN) -ap  $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/srcParseDbModem_tdd.db $(MODISBUILD_TST_DB)/enumFileCustomApp MoDIS $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
      else
	@$(ECHO) -n $(CGEN) -ap $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/srcParseDbModem_fdd.db $(MODISBUILD_TST_DB)/enumFileCustomApp MoDIS $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
      endif
    else
	@$(ECHO) -n $(CGEN) -ap $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/srcParseDbModem.db $(MODISBUILD_TST_DB)/enumFileCustomApp MoDIS $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
    endif
	@$(ECHO) -n $(MODISBUILD_TST_DB)/enumFileCustomApp >>$(CODE_GEN_LST)
  else
    ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
      ifeq ($(strip $(UNIVERSAL_DATABASE_SUPPORT)),TRUE)
        ifeq ($(strip $(UMTS_TDD_SUPPORT)),UMTS_TDD128_MODE_SUPPORT)
		@$(ECHO) -n $(CGEN) -ap7 $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/srcParseDbModem_fdd.db $(MODISBUILD_TST_DB)/enumFileCustomAppSrc >>$(CGEN_CFG_MODEM)
		@$(ECHO) -n $(CGEN) -ap  $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/srcParseDbModem_tdd.db $(MODISBUILD_TST_DB)/enumFileCustomAppSrc MoDIS $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
        else
		@$(ECHO) -n $(CGEN) -ap $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/srcParseDbModem_fdd.db $(MODISBUILD_TST_DB)/enumFileCustomAppSrc MoDIS $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
        endif
      else
	@$(ECHO) -n $(CGEN) -ap $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(MODISBUILD_TST_DB)/msglog_db/srcParseDbModem.db $(MODISBUILD_TST_DB)/enumFileCustomAppSrc MoDIS $(strip $(VERNO)) >>$(CGEN_CFG_MODEM)
      endif
	@$(ECHO) -n $(MODISBUILD_TST_DB)/enumFileCustomAppSrc >>$(CODE_GEN_LST)
    endif
  endif
endif
	@$(ECHO) -n $@: $(VERNOFILE) "$(PROJECT_MAKEFILE)" >$@
	@$(ECHO) -n $@ >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_filter_gen_Modem.det: 
# *************************************************************************
# revise for mp compatible
ifndef ICD_SUPPORT
ICD_SUPPORT = FALSE
endif
CUSTOMIZATION := ./$(COMMON_ROOT)/service/dhl/database/XDD/Customization
DBFINI_DIR := ./$(COMMON_ROOT)/service/dhl/database/XDD/DSP
ICDINI_DIR := ./$(COMMON_ROOT)/service/dhl/database/XDD/ICD
LOG2SD_CATCHER_FILTERS_LIST := $(subst log2SD_Catcher_filters_,,$(notdir $(basename $(LOG2SD_CATCHER_FILTERS_FILE_LIST))))
DBF_INI_LIST := $(notdir $(wildcard $(DBFINI_DIR)/DSP_*))
FILTER_INI := $(CUSTOMIZATION)/FilterSetting.ini
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_filter_gen_Modem.det: FORCE
endif
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_filter_gen_Modem.det: $(MODIS_RULESDIR)/codegen_dep/log2SD_Catcher_filters.det
else
  ifneq ($(wildcard $(BUILD_TST_DB)/log2SD_Catcher_filters.ini),)
    # exist tst/database/log2SD_Catcher_filters.ini
  else
    $(MODIS_RULESDIR)/codegen_dep/cgen_filter_gen_Modem.det: $(MODIS_RULESDIR)/codegen_dep/log2SD_Catcher_filters.det
  endif
endif
$(MODIS_RULESDIR)/codegen_dep/cgen_filter_gen_Modem.det: common/service/dhl/database/XDD/mini_log_Catcher_filters.ini
$(MODIS_RULESDIR)/codegen_dep/cgen_filter_gen_Modem.det: $(filter-out \
                                                                   $(MODIS_RULESDIR)/codegen_dep/cgen_filter_gen_Modem.det \
                                                                   $(MODIS_RULESDIR)/codegen_dep/cgen_gv.det \
                                                                   $(MODIS_RULESDIR)/codegen_dep/cgen_l1v.det \
                                                                   $(MODIS_RULESDIR)/codegen_dep/cgen_un.det \
                                                            ,$(CODEGEN_DEPENDENCY_MODEM))
$(MODIS_RULESDIR)/codegen_dep/cgen_filter_gen_Modem.det: $(NEED_CHECK_DEPEND_LIST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) -n $@: >$@
	@$(IF_NOT_EXIST) $(BUILD_TSTDIR)/src $(THEN) $(MKDIR) $(BUILD_TSTDIR)/src $(CMD_END)
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
 ifneq ($(strip $(CLOSE_MDM_LAYOUT)),TRUE)
	@$(ECHO) -n $(POSTGEN) -em_filter_gen $(CODEGEN_DATABASE_OUT) $(strip $(TSTDIR))/database/MSG_LIST $(MODISBUILD_TST_DB)/em_filter.bin >>$(POSTGEN_CFG_MODEM) 
	@$(ECHO) -n $(POSTGEN) -all_em_info $(CODEGEN_DATABASE_OUT) $(CODEGEN_DATABASE_IN) $(strip $(TSTDIR))/database/MSG_LIST >>$(POSTGEN_CFG_MODEM)
	@$(ECHO) -n $(POSTGEN) -extract_all_em_info $(CODEGEN_DATABASE_OUT) $(MODISBUILD_TST_DB)/mdm_layout_desc.dat >>$(POSTGEN_CFG_MODEM)
 endif
	@$(ECHO) -n $(POSTGEN) -filter_gen src $(CODEGEN_DATABASE_OUT) $(BUILD_TST_DB)/log2SD_Catcher_filters.ini $(BUILD_TSTDIR)/src/tst_file_default_Catcher_filter.c __TST_WRITE_TO_FILE__ >>$(POSTGEN_CFG_MODEM)
	@$(ECHO) -n $(POSTGEN) -filter_gen miniLogSrc $(CODEGEN_DATABASE_OUT) common/service/dhl/database/XDD/mini_log_Catcher_filters.ini $(BUILD_TSTDIR)/src/tst_mini_log_default_Catcher_filter.c __MINI_LOG_SUPPORT__ >>$(POSTGEN_CFG_MODEM)
	@$(ECHO) -n $(POSTGEN) -filter_gen bin $(CODEGEN_DATABASE_OUT) $(BUILD_TST_DB)/log2SD_Catcher_filters.ini $(BUILD_TST_DB)/catcher_filter.bin >>$(POSTGEN_CFG_MODEM)

	@$(ECHO) -n $(BUILD_TSTDIR)/src/tst_file_default_Catcher_filter.c >>$(CODE_GEN_LST)
	@$(ECHO) -n $(BUILD_TSTDIR)/src/tst_mini_log_default_Catcher_filter.c >>$(CODE_GEN_LST)
	@$(ECHO) -n $(BUILD_TST_DB)/catcher_filter.bin >>$(CODE_GEN_LST)
  ifeq ($(strip $(EUTRAN_MODE_SUPPORT)),NONE)
	@$(ECHO) "">$(BUILD_TST_DB)/dsp_filter.bin
  else
    ifeq ($(strip $(NO_DSP)),TRUE)
	@$(ECHO) "">$(BUILD_TST_DB)/dsp_filter.bin
    else ifeq ($(strip $(NO_LTECGEN)),TRUE)
	@$(ECHO) "">$(BUILD_TST_DB)/dsp_filter.bin
    else
# generate the dsp_filter.bin according to DBF file and dhl file
ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
  ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
	@$(IF_NOT_EXIST) $(strip $(MODISBUILD_TST_DB))/dbf $(THEN) $(MKDIR) $(strip $(MODISBUILD_TST_DB))/dbf $(CMD_END)
	@$(IF_EXIST) $(strip $(COMPLOGDIR))/gen_dbf.log $(THEN) $(DEL_FILE) $(strip $(COMPLOGDIR))/gen_dbf.log $(CMD_END)
	@$(FOR) $(DECLARE_VAR)i $(IN) $(DBF_INI_LIST) $(DO) \
		($(IF_EXIST) $(strip $(DBFINI_DIR))/$(PRE_VAR)i $(THEN) \
			(mono $(strip ${COMMON_TOOLS})/DSPXMLUtil.exe -iFltrXML $(DSPDIR)/$(strip $(DSP_PROJECT))/$(strip $(DSP_FLAVOR))/final_bin/xml/filterXML -iFilterIni $(strip $(DBFINI_DIR))/$(PRE_VAR)i -oDBFDir "$(strip $(MODISBUILD_TST_DB))/dbf") >> $(strip $(COMPLOGDIR))/gen_dbf.log \
		$(CMD_END)) \
	$(DONE)
  endif
else
	@$(IF_NOT_EXIST) $(strip $(MODISBUILD_TST_DB))/dbf $(THEN) $(MKDIR) $(strip $(MODISBUILD_TST_DB))/dbf $(CMD_END)
	@$(FOR) $(DECLARE_VAR)i $(IN) $(DBF_INI_LIST) $(DO) \
		($(IF_EXIST) $(strip $(DBFINI_DIR))/$(PRE_VAR)i $(THEN) \
			(mono $(strip ${COMMON_TOOLS})/DSPXMLUtil.exe -iFltrXML $(DSPDIR)/$(strip $(DSP_PROJECT))/$(strip $(DSP_FLAVOR))/final_bin/xml/filterXML -iFilterIni $(strip $(DBFINI_DIR))/$(PRE_VAR)i -oDBFDir "$(strip $(MODISBUILD_TST_DB))/dbf") >> $(strip $(COMPLOGDIR))/gen_dbf.log \
		$(CMD_END)) \
	$(DONE)
endif
	@$(ECHO) -n $(POSTGEN) -dsp_filter_gen coresonic $(CODEGEN_DATABASE_OUT) $(DSP_DBF) $(BUILD_TST_DB)/dsp_filter.bin >>$(POSTGEN_CFG_MODEM)
    endif
  endif
# merge MD & DSP logging filter into merge_filter.bin
	@$(ECHO) -n $(POSTGEN) -filter_merge $(CODEGEN_DATABASE_OUT) $(BUILD_TST_DB)/catcher_filter.bin $(BUILD_TST_DB)/dsp_filter.bin $(BUILD_TST_DB)/catcher_filter.bin>>$(POSTGEN_CFG_MODEM)
ifeq ($(strip $(ICD_SUPPORT)),TRUE)
	@$(ECHO) -n $(POSTGEN) -icd_filter_gen $(CODEGEN_DATABASE_OUT) common/interface/modem/icd/AllICD.json $(BUILD_TST_DB)/log2SD_Icd_filters.ini $(BUILD_TST_DB)/icd_filter.bin >> $(POSTGEN_CFG_MODEM)
	@$(ECHO) -n $(POSTGEN) -filter_append $(CODEGEN_DATABASE_OUT) $(BUILD_TST_DB)/catcher_filter.bin $(BUILD_TST_DB)/icd_filter.bin $(BUILD_TST_DB)/catcher_filter.bin >> $(POSTGEN_CFG_MODEM)
endif
ifneq ($(strip $(NO_DSP)),TRUE)
ifneq ($(strip $(LOG2SD_CATCHER_FILTERS_LIST)),)
# generate multiple catcher filter and dsp filter files
  ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
    ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
	@perl $(COMMON_ROOT)/tools/multi_catcher_filter.pl $(strip $(PROJDIR)) $(strip $(CUS_MTK_REL)) $(POSTGEN_CFG_MODEM) $(POSTGEN) $(CODEGEN_DATABASE_OUT) $(CUSTOMIZATION) $(FILTER_INI) $(strip $(DSP_PROJECT)) $(strip $(DSP_FLAVOR)) TRUE $(strip $(ICD_SUPPORT)) $(LOG2SD_CATCHER_FILTERS_FILE_LIST)
    else
	@perl $(COMMON_ROOT)/tools/multi_catcher_filter.pl $(strip $(PROJDIR)) $(strip $(CUS_MTK_REL)) $(POSTGEN_CFG_MODEM) $(POSTGEN) $(CODEGEN_DATABASE_OUT) $(CUSTOMIZATION) $(FILTER_INI) $(strip $(DSP_PROJECT)) $(strip $(DSP_FLAVOR)) FALSE $(strip $(ICD_SUPPORT)) $(LOG2SD_CATCHER_FILTERS_FILE_LIST)
    endif
  else
	@perl $(COMMON_ROOT)/tools/multi_catcher_filter.pl $(strip $(PROJDIR)) $(strip $(CUS_MTK_REL)) $(POSTGEN_CFG_MODEM) $(POSTGEN) $(CODEGEN_DATABASE_OUT) $(CUSTOMIZATION) $(FILTER_INI) $(strip $(DSP_PROJECT)) $(strip $(DSP_FLAVOR)) TRUE $(strip $(ICD_SUPPORT)) $(LOG2SD_CATCHER_FILTERS_FILE_LIST)
  endif
endif
endif
	@$(ECHO) -n $(BUILD_TST_DB)/dsp_filter.bin >>$(CODE_GEN_LST)
	@$(ECHO) -n $(BUILD_TST_DB)/merge_filter.bin >>$(CODE_GEN_LST)
# generate meta database
	@$(ECHO) -n "@PROJECT_NAME@MTK = ENUM_DB" > $(MODISBUILD_TST_DB)/nvram_db_cnf.ini
	@$(ECHO) -n "@PROJECT_NAME@CM = ENUM_DB" >> $(MODISBUILD_TST_DB)/nvram_db_cnf.ini
ifneq ($(wildcard $(strip ${PCORE_TOOLS})/NVRAMStatistic/gen_secure_nvram_lid_structure_to_db.pl),)
  ifneq ($(wildcard $(strip $(COMMON_ROOT))/interface/service/nvram/nvram_lid_structure_check_extend_list.h),)
	@perl $(strip ${PCORE_TOOLS})/NVRAMStatistic/gen_secure_nvram_lid_structure_to_db.pl $(COMMON_ROOT)/interface/service/nvram/nvram_lid_structure_check_extend_list.h $(MODISBUILD_TST_DB)/nvram_db_cnf.ini
  endif
endif
	@$(ECHO) -n "$(POSTGEN) -meta_db_gen $(MODISBUILD_TST_DB)/$(MDDBMETA) $(CODEGEN_DATABASE_OUT) $(MODISBUILD_TST_DB)/nvram_db_cnf.ini -saveXmlFile-$(MODISBUILD_TST_DB)/$(MDDBMETADATABASEXML)" >>$(POSTGEN_CFG_MODEM)
	@$(ECHO) -n "$(POSTGEN) -compress_gen $(MODISBUILD_TST_DB)/$(MDDBMETADATABASEXML).GZ $(MODISBUILD_TST_DB)/$(MDDBMETADATABASEXML)" >>$(POSTGEN_CFG_MODEM)
else
	@$(IF_NOT_EXIST) $(BUILD_TSTDIR)/src/tst_file_default_Catcher_filter.c $(THEN) \
		(echo $(POSTGEN) -filter_gen src $(CODEGEN_DATABASE_OUT) $(BUILD_TST_DB)/log2SD_Catcher_filters.ini $(BUILD_TSTDIR)/src/tst_file_default_Catcher_filter.c __TST_WRITE_TO_FILE__ >>$(POSTGEN_CFG_MODEM)) $(CMD_END)
	@$(IF_NOT_EXIST) $(BUILD_TSTDIR)/src/tst_mini_log_default_Catcher_filter.c $(THEN) \
		(echo $(POSTGEN) -filter_gen miniLogSrc $(CODEGEN_DATABASE_OUT) common/service/dhl/database/XDD/mini_log_Catcher_filters.ini $(BUILD_TSTDIR)/src/tst_mini_log_default_Catcher_filter.c __MINI_LOG_SUPPORT__ >>$(POSTGEN_CFG_MODEM)) $(CMD_END)
endif
	@$(ECHO) -n $@: common/service/dhl/database/XDD/mini_log_Catcher_filters.ini >>$@
	@$(ECHO) -n $@ >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: cgen_enc
# encrypt the db
# *************************************************************************
CGEN_KEY_STORE_FOLDER := /project/moly_usr/Cgen_Key_Store
KEY_VERNO := $(subst $(SLIM_BRANCH).,,$(VERNO))
KEY_VERNO := $(word 1, $(subst ., ,$(KEY_VERNO))).$(word 2, $(subst ., ,$(KEY_VERNO)))
CGEN_KEY = $(CGEN_KEY_STORE_FOLDER)/$(KEY_VERNO).bin
CGEN_ENC_LOG := $(strip $(COMPLOGDIR))/cgen_enc.log
CGEN_ENC_MODULE_KEY_SETTING := ./${COMMON_ROOT}/service/dhl/database/access_control/module_k.csv

#$(MODIS_RULESDIR)/codegen_dep/cgen_enc.det: $(CGEN)

cgen_enc:
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) -n "Cgen encrypting with key $(CGEN_KEY) ......"
	@$(IF_NOT_EXIST) $(strip $(CGEN_KEY)) $(THEN) \
		(echo "\"$(CGEN_KEY)\" does not exist.") $(AND) \
		(echo "Error: \"$(CGEN_KEY)\" does not exist." >> $(CGEN_ENC_LOG) ) $(AND) \
		(exit 1) \
	$(CMD_END)
	@$(IF_NOT_EXIST) $(strip $(CGEN_ENC_MODULE_KEY_SETTING)) $(THEN) \
		(echo "\"$(CGEN_ENC_MODULE_KEY_SETTING)\" does not exist.") $(AND) \
		(echo "Error: \"$(CGEN_ENC_MODULE_KEY_SETTING)\" does not exist." >> $(CGEN_ENC_LOG) ) $(AND) \
		(exit 1) \
	$(CMD_END)
#@$(ECHO) -n "$(CGEN) -enc $(CODEGEN_DATABASE_IN) $(CODEGEN_DATABASE_IN) $(CGEN_KEY_STORE_FOLDER)/$(strip $(KEY_VERNO)).bin $(strip $(KEY_VERNO)) ./${COMMON_ROOT}/service/dhl/database/access_control/group.ini" >> $(CGEN_CFG_MODEM)
	$(CGEN) -ltedbv9 -enc $(CODEGEN_DATABASE_IN) $(CODEGEN_DATABASE_IN) $(CGEN_KEY) $(strip $(KEY_VERNO)) $(CGEN_ENC_MODULE_KEY_SETTING)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_cfg_Modem.det
# *************************************************************************
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_cfg_Modem.det: FORCE
endif
$(MODIS_RULESDIR)/codegen_dep/cgen_cfg_Modem.det: $(CODEGEN_DEPENDENCY_MODEM)
$(MODIS_RULESDIR)/codegen_dep/cgen_cfg_Modem.det: $(CGEN)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
  ifneq ($(strip $(TEST_LOAD_TYPE)),L1S)
  ifneq ($(words $(strip $(MDDBINFOCUSTOM))),1)
		@$(ECHO) -n [ERROR] Cannot determine the original codegen database: $(strip $(MDDBINFOCUSTOM)) >>$(CODE_GEN_LOG)
		@$(ECHO) -n [ERROR] Cannot determine the original codegen database: $(strip $(MDDBINFOCUSTOM))
		@exit 2
  endif
  endif
else
  ifeq ($(LTE_SOURCE_BUILD),FALSE)
    ifneq ($(strip $(NO_LTECGEN)),TRUE)
      ifeq ($(strip $(CODEGEN_DATABASE_IN_SEC)),)
	@$(ECHO) -n "Error: There is no existing any LTE database in the path: $(CUS_MTK_REL)/dhl/lte_sec/database" >> $(CODE_GEN_LOG)
	@$(ECHO) -n "Error: $@ Failed. Please check $(CODE_GEN_LOG)" $(WITH) exit 1
      else ifneq ($(words $(strip $(CODEGEN_DATABASE_IN_SEC))),1)
	@$(ECHO) -n "Error: There is existing multiple LTE databases: $(strip $(CODEGEN_DATABASE_IN_SEC))" >> $(CODE_GEN_LOG)
	@$(ECHO) -n "Error: Please remove redundant LTE database in the path: $(CUS_MTK_REL)/dhl/lte_sec/datababase" >> $(CODE_GEN_LOG)
	@$(ECHO) -n "Error: $@ Failed. Please check $(CODE_GEN_LOG)" $(WITH) exit 1
      endif
    endif
  endif
endif
		@$(IF_NOT_EXIST) $(strip $(CGEN_CFG_MODEM)) $(THEN)\
			(echo Error: $(CGEN_CFG_MODEM) does not exist!) $(AND) \
			(exit 1) $(CMD_END)
    ifeq ($(strip $(DHL_SUPPORT)),TRUE)
      ifeq ($(LTE_SOURCE_BUILD),TRUE)
		@$(IF_EXIST) $(strip $(CGEN_CFG_MODEM_SEC)) $(THEN)\
			echo Cgen -ltedbv9 -cfg $(CGEN_CFG_MODEM_SEC) $(AND)\
			($(CGEN) -ltedbv9 -cfg $(CGEN_CFG_MODEM_SEC) 2>>$(CODE_GEN_LOG)) $(WITH) \
			($(IF_ERR_TRUE) $(THEN) (echo Error: Cgen failed. Please check $(CODE_GEN_LOG) $(WITH) exit 1) $(CMD_END))\
		$(CMD_END)
      endif
			@$(ECHO) -n Cgen -ltedbv9 -cfg $(CGEN_CFG_MODEM)
			@($(CGEN) -ltedbv9 -cfg $(CGEN_CFG_MODEM) 2>>$(CODE_GEN_LOG)) $(WITH) \
			($(IF_ERR_TRUE) $(THEN) (echo Error: Cgen failed. Please check $(CODE_GEN_LOG) $(WITH) exit 1) $(CMD_END))

			@$(IF_EXIST) $(strip $(POSTGEN_CFG_MODEM)) $(THEN) \
				echo Postgen -ltedbv9 -cfg $(POSTGEN_CFG_MODEM) $(AND) \
				($(POSTGEN) -ltedbv9 -cfg $(POSTGEN_CFG_MODEM) 2>>$(CODE_GEN_LOG)) $(WITH) \
				($(IF_ERR_TRUE) $(THEN) \
					$(DEL_FILE) "$(MODISBUILD_TST_DB)/*MDDB*" $(AND) \
					(echo Error: Postgen failed. Please check $(CODE_GEN_LOG) $(WITH) exit 1) \
				$(CMD_END)) \
			$(CMD_END)
    else
			@$(ECHO) -n Cgen -cfg $(CGEN_CFG_MODEM)
			@($(CGEN) -cfg $(CGEN_CFG_MODEM) 2>>$(CODE_GEN_LOG)) $(WITH) \
			($(IF_ERR_TRUE) $(THEN) (echo Error: Cgen failed. Please check $(CODE_GEN_LOG) $(WITH) exit 1) $(CMD_END))

			@$(IF_EXIST) $(strip $(POSTGEN_CFG_MODEM)) $(THEN) \
				echo Postgen -cfg $(POSTGEN_CFG_MODEM) $(AND) \
				($(POSTGEN) -cfg $(POSTGEN_CFG_MODEM) 2>>$(CODE_GEN_LOG)) $(WITH) \
				($(IF_ERR_TRUE) $(THEN) \
					$(DEL_FILE) "$(MODISBUILD_TST_DB)/*MDDB*" $(AND) \
					(echo Error: Postgen failed. Please check $(CODE_GEN_LOG) $(WITH) exit 1) \
				$(CMD_END)) \
			$(CMD_END)
    endif
	@$(IF_EXIST) $(BUILD_TST_DB)/catcher_filter.bin $(THEN) \
		$(COPY_FILE) $(BUILD_TST_DB)/catcher_filter.bin $(BUILD_TST_DB)/catcher_filter__Default.bin >$(DEV_NUL) \
	$(CMD_END)
	@$(IF_EXIST) $(MODISBUILD_TST_DB)/$(MDDBMETADATABASEXML).GZ $(THEN) \
		$(IF_EXIST) $(MODISBUILD_TST_DB)/$(MDDBMETADATABASEXML) $(THEN) \
			$(DEL_FILE) "$(MODISBUILD_TST_DB)/$(MDDBMETADATABASEXML)" \
		$(CMD_END) \
	$(CMD_END)
#restore xxx_trc_gen.h
		@($(LIST_DIR) "$(MODISBUILD_TST_DB)/pstrace_db_bak/*.h" 1>$(DEV_NUL) 2>&1 $(WITH) \
		 $(IF_ERR_FALSE) $(THEN)\
			($(FOR) $(F_OPT) $(DECLARE_VAR)i $(IN) `$(LIST_DIR) -n -b "$(MODISBUILD_TST_DB)/pstrace_db_bak/*.h"` $(DO)\
				(($(COMPARE) $(MODISBUILD_TST_DB)/pstrace_db/$(PRE_VAR)i $(MODISBUILD_TST_DB)/pstrace_db_bak/$(PRE_VAR)i >$(DEV_NUL) 2>&1) $(WITH) \
				($(IF_ERR_FALSE) $(THEN)($(COPY_FILE) $(MODISBUILD_TST_DB)/pstrace_db_bak/$(PRE_VAR)i $(MODISBUILD_TST_DB)/pstrace_db/ >$(DEV_NUL)) \
				$(ELSE) (echo $(PRE_VAR)i is updated) $(CMD_END) ))\
			$(DONE))\
		$(CMD_END))

		@$(IF_EXIST) $(MODISBUILD_TST_DB)/pstrace_db_bak $(THEN) $(DEL_DIR) $(MODISBUILD_TST_DB)/pstrace_db_bak $(CMD_END)
		@($(LIST_DIR) "$(BUILD_TSTDIR)/include_bak/*.h" 1>$(DEV_NUL) 2>&1 $(WITH) \
		$(IF_ERR_FALSE) $(THEN) \
			($(FOR) $(F_OPT) $(DECLARE_VAR)i $(IN) `$(LIST_DIR) -n -b "$(BUILD_TSTDIR)/include_bak/*.h"` $(DO)\
				(($(COMPARE) $(BUILD_TSTDIR)/include/$(PRE_VAR)i $(BUILD_TSTDIR)/include_bak/$(PRE_VAR)i >$(DEV_NUL) 2>&1) $(WITH)\
				($(IF_ERR_FALSE) $(THEN) ($(COPY_FILE) $(BUILD_TSTDIR)/include_bak/$(PRE_VAR)i $(BUILD_TSTDIR)/include/ >$(DEV_NUL))\
				 $(ELSE) (echo $(PRE_VAR)i is updated) $(CMD_END))) \
			$(DONE))\
		$(CMD_END))

		@$(IF_EXIST) $(BUILD_TSTDIR)/include_bak $(THEN) $(DEL_DIR) $(BUILD_TSTDIR)/include_bak $(CMD_END)
		@$(ECHO) -n $@: $(CGEN) >$@
		@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $(dir $@)codegen.det $(dir $@)cgen_preflow.det $(patsubst %/,%,$(dir $@)) "\.det"
		@$(ECHO) -n $(dir $@)cgen_preflow.det: >>$(dir $@)cgen_preflow.det
		@$(ECHO) -n $@ >>$(CODE_GEN_LST)
		@$(ECHO) -n $(dir $@)codegen.det >>$(CODE_GEN_LST)
		@$(ECHO) -n $(CGEN_CFG_MODEM) >>$(CODE_GEN_LST)
		@$(ECHO) -n $(CGEN_CFG_MODEM_SEC) >>$(CODE_GEN_LST)
		@$(ECHO) -n $(CODEGEN_DATABASE_OUT) >>$(CODE_GEN_LST)
		@$(ECHO) -n $(CODEGEN_DATABASE_OUT_SEC) >>$(CODE_GEN_LST)

		@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $(MODIS_RULESDIR)/codegen.dep custom_parse_db.obj $(patsubst %/,%,$(dir $@)) "\bcustom_parse_db\.det"
		@perl $(strip ${PCORE_TOOLS})/pack_dep_gen.pl $(MODIS_RULESDIR)/srcParseDbModem.d srcParseDbModem.obj $(patsubst %/,%,$(dir $@)) "\bsrcParseDbModem\.det"
		@$(IF_EXIST) $(MODIS_RULESDIR)/srcParseDbModem.d $(THEN) (($(CAT) $(MODIS_RULESDIR)/srcParseDbModem.d >>$(MODIS_RULESDIR)/codegen.dep) $(AND) ($(DEL_FILE) $(MODIS_RULESDIR)/srcParseDbModem.d)) $(CMD_END)

ifneq ($(PCIBT_ACTION_LIST),)
		$(PCIBT_SCRIPT_CMD) $(dir $@)srcParseDbModem.det REL_SUB_L4,SRC REL_SUB_PROTOCOL,SRC 2>>$(strip $(CODE_GEN_LOG))
		$(PCIBT_SCRIPT_CMD) $(dir $@)custom_parse_db.det $(PCIBT_ACTION_LIST) 2>>$(strip $(CODE_GEN_LOG))
endif

ifeq ($(strip $(NVRAM_LID_CHECK)),TRUE)
	@$(ECHO) -n ==== NVRAM LID CHECK START ====
	@perl $(strip ${PCORE_TOOLS})/NVRAMStatistic/nvram_lid_check.pl $(strip ${PCORE_TOOLS})/NVRAMStatistic/lid/$(PROJECT_NAME)/$(FLAVOR) $(strip $(PROJDIR))/nvram_auto_gen $(strip $(COMPLOGDIR))/nvram_lid_check.log /s NVRAM_OTA_SMART_RESET=$(NVRAM_OTA_SMART_RESET)
	@$(ECHO) -n ==== NVRAM LID CHECK END ====
endif

ifeq ($(strip $(NVRAM_OTA_SMART_RESET)),TRUE)
	@$(ECHO) -n ==== NVRAM POST GEN START ====
	@perl $(strip ${PCORE_TOOLS})/NVRAMStatistic/nvram_post_gen.pl $(strip $(PROJDIR))/nvram_auto_gen $(strip $(COMPLOGDIR))/nvram_post_gen.log
	@$(ECHO) -n ==== NVRAM POST GEN END ====
endif

ifeq ($(strip $(CUSTOM_RELEASE)),TRUE)
  ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
		@$(IF_EXIST) $(MODISBUILD_TST_DB)/enumFileCustomSrc $(THEN) $(DEL_FILE) $(MODISBUILD_TST_DB)/enumFileCustomSrc $(CMD_END)
  endif
endif
		@$(IF_EXIST) $(MODISBUILD_TST_DB)/pstrace_db/ps_trace_1.h $(THEN) $(DEL_FILE) $(MODISBUILD_TST_DB)/pstrace_db/ps_trace_1.h $(CMD_END)
		@$(IF_EXIST) $(MODISBUILD_TST_DB)/pstrace_db/ps_trace_2.h $(THEN) $(DEL_FILE) $(MODISBUILD_TST_DB)/pstrace_db/ps_trace_2.h $(CMD_END)

	@$(ECHO) "$@ END TIME=" >> $(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n>>$(strip $(TARGDIR))/build.log
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: cleancodegen
# Clean Generated Code Sources
# *************************************************************************
cleancodegen:
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) "$@ START TIME=" >> $(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n >> $(strip $(TARGDIR))/build.log
ifneq ($(strip $(SMART_CHECK)),TRUE)
ifneq ($(strip $(AUTO_CHECK_DEPEND)),TRUE)
	@$(ECHO) -n clean codegen list
   # $(CODE_GEN_LST) should be copied to another place then delete
	@$(IF_EXIST) $(CODE_GEN_LST) $(THEN)\
		(($(COPY_FILE) $(CODE_GEN_LST) $(strip $(TMPDIR))/~codegenlis.tmp >$(DEV_NUL)) $(AND) \
		($(FOR) $(F_OPT) $(DECLARE_VAR)i $(IN) `$(CAT) $(CODE_GEN_LST)` $(DO) \
			($(IF_EXIST) $(PRE_VAR)i $(THEN) $(DEL_FILE) $(PRE_VAR)i $(CMD_END)) \
		$(DONE)) $(WITH) \
		($(DEL_FILE) $(CODE_GEN_LST))) \
	 $(CMD_END)
  ifeq ($(strip $(MODIS_CONFIG)),TRUE)
	@$(IF_EXIST) $(strip ${CODEGEN_DEP}) $(THEN)   $(DEL_DIR) $(strip ${CODEGEN_DEP}) $(CMD_END)
	@$(IF_NOT_EXIST) $(strip ${CODEGEN_DEP}) $(THEN) $(MKDIR) $(strip ${CODEGEN_DEP}) $(CMD_END)
  endif
endif
endif
	@$(ECHO) "$@ END TIME=" >> $(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n >> $(strip $(TARGDIR))/build.log
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: emiclean
# Clean 3 emi setting related files
# *************************************************************************
emiclean:
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) "$@ START TIME=" >> $(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n >> $(strip $(TARGDIR))/build.log

	@$(ECHO) -n Clean EMI settings
	$(IF_EXIST) $(strip $(EMI_GENERATOR)) $(THEN) \
		(perl $(strip $(EMI_GENERATOR)) TRUE $(strip $(MEMORY_DEVICE_HDR)) "$(strip $(PROJECT_MAKEFILE))" > $(strip $(COMPLOGDIR))/emigen.log 2>&1)\
	 $(CMD_END)

	@$(ECHO) "$@ END TIME=" >> $(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n >> $(strip $(TARGDIR))/build.log
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# Target: sysgen_init
# Copy custom files to build folder
# *************************************************************************
sysgen_init: $(PREGEN_DEP)/sysgen_init.det
ifeq ($(strip $(SMART_CHECK)),TRUE)
include $(wildcard $(PREGEN_DEP)/./sysgen_init.det)
else
$(PREGEN_DEP)/sysgen_init.det: FORCE
endif
$(PREGEN_DEP)/sysgen_init.det:
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
ifneq ($(strip $(DISABLE_SYS)),TRUE)
	@$(IF_NOT_EXIST) $(strip $(PREGEN_DEP)) $(THEN) ($(MKDIR) $(strip $(PREGEN_DEP))) $(CMD_END)
	@$(IF_EXIST) $@ $(THEN) ($(DEL_FILE) $@) $(CMD_END)
	@perl $(strip ${PCORE_TOOLS})/sysgen_init.pl $(call CUSTOM_FLD_MAPPING,${PCORE_ROOT}/custom/system) $(strip $(BUILD_SYSDIR)) $(strip $(SMART_CHECK)) > $(strip $(COMPLOGDIR))/sysgen_init.log $(WITH) \
		($(IF_ERR_TRUE) $(THEN) (echo Error: sysgen_init Failed. Please check  $(strip $(COMPLOGDIR))/sysgen_init.log $(WITH) exit 1) $(CMD_END))
endif
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# Target: emigen
# Generate emi settings based on configurations in custom_MemoryDevice.h
# *************************************************************************
MEMORY_FILE := $(wildcard $(strip $(TMPDIR))/*.xls)
emigen: sysgen_init $(PREGEN_DEP)/emigen.det
ifeq ($(strip $(SMART_CHECK)),TRUE)
include $(wildcard $(PREGEN_DEP)/./emigen.det)
else
$(PREGEN_DEP)/emigen.det: FORCE
endif
$(PREGEN_DEP)/emigen.det:
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) "$@ START TIME=" >> $(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n >> $(strip $(TARGDIR))/build.log

	@$(IF_NOT_EXIST) $(strip $(PREGEN_DEP)) $(THEN) ($(MKDIR) $(strip $(PREGEN_DEP))) $(CMD_END)
	@$(IF_EXIST) $@ $(THEN) ($(DEL_FILE) $@) $(CMD_END)
ifneq ($(MEMORY_FILE),)
	@$(IF_EXIST) $(MEMORY_FILE) $(THEN) ($(DEL_FILE) $(MEMORY_FILE)) $(CMD_END)
endif

	@$(IF_NOT_EXIST) $(COMPLOGDIR) $(THEN) ($(MKDIR) $(COMPLOGDIR)) $(CMD_END)

	@$(ECHO) -n Generate EMI settings
	@$(IF_EXIST) $(strip $(EMI_GENERATOR)) $(THEN) \
		(perl $(strip $(EMI_GENERATOR)) FALSE $(strip $(MEMORY_DEVICE_HDR)) "$(strip $(PROJECT_MAKEFILE))" FALSE $(strip $(INSIDE_MTK)) $(strip $(TMPDIR)) $@ > $(strip $(COMPLOGDIR))/emigen.log 2>&1) $(WITH) \
		($(IF_ERR_TRUE) $(THEN) (echo Error: emigen Failed. Please check  $(strip $(COMPLOGDIR))/emigen.log $(WITH) exit 1) $(CMD_END)) \
	$(CMD_END)
	@$(ECHO) "$@ END TIME=" >> $(strip $(TARGDIR))/build.log

	@perl $(strip ${PCORE_TOOLS})/time.pl -n >> $(strip $(TARGDIR))/build.log
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# Generate object list for scatter file
# *************************************************************************
obj_list_gen:
ifneq ($(strip $(DISABLE_SYS)),TRUE)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(IF_EXIST) $(FIXPATH)/$(strip ${PCORE_TOOLS})/objListGen.pl $(THEN)\
		(perl $(FIXPATH)/$(strip ${PCORE_TOOLS})/objListGen.pl $(strip $(BUILD_SYSDIR)) "$(strip $(PROJECT_MAKEFILE))" $(strip $(DUMMY_LIS))> $(strip $(COMPLOGDIR))/obj_list_gen.log) $(WITH) \
		($(IF_ERR_TRUE) $(THEN) echo Error: obj_list_gen.pl failed. Please check $(strip $(COMPLOGDIR))/obj_list_gen.log $(WITH) exit 1 $(CMD_END))\
	$(CMD_END)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
endif

# *************************************************************************
# Target: copro_info_gen
# *************************************************************************
copro_info_gen: $(PREGEN_DEP)/copro_info_gen.det
ifeq ($(strip $(SMART_CHECK)),TRUE)
include $(wildcard $(PREGEN_DEP)/./copro_info_gen.det)
else
$(PREGEN_DEP)/copro_info_gen.det: FORCE
endif
$(PREGEN_DEP)/copro_info_gen.det:
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

	@$(IF_NOT_EXIST) $(strip $(PREGEN_DEP)) $(THEN) ($(MKDIR) $(strip $(PREGEN_DEP))) $(CMD_END)
	@$(IF_EXIST) $@ $(THEN) ($(DEL_FILE) $@) $(CMD_END)

	@$(ECHO) -n "L1CORE_IMAGELAYOUT = $(L1CORE_SCATTERFILE)">>$(strip $(TMPDIR))/~copro_info.tmp
	@$(ECHO) -n "L1CORE_MAP = $(L1CORE_MAP_FILE)" >> $(strip $(TMPDIR))/~copro_info.tmp
	@$(ECHO) -n "L1CORE_SYM = $(L1CORE_SYM_FILE)" >> $(strip $(TMPDIR))/~copro_info.tmp

	@$(IF_EXIST) $(FIXPATH)/$(strip ${PCORE_TOOLS})/copro_info_gen.pl $(THEN)\
		(perl $(FIXPATH)/$(strip ${PCORE_TOOLS})/copro_info_gen.pl $(FORCE_GEN) $(strip $(TMPDIR))/~copro_info.tmp "$(strip $(PROJECT_MAKEFILE))" $(strip $(INFOMAKELOG)) $(SINGLE_CORE) $@ > $(strip $(COMPLOGDIR))/copro_info_gen.log 2>&1) $(WITH) \
		($(IF_ERR_TRUE) $(THEN) echo Error: copro_info_gen.pl failed. Please check $(strip $(COMPLOGDIR))/copro_info_gen.log $(WITH) exit 1 $(CMD_END))\
	$(CMD_END)

# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# Generate custom\system\BB\* base on makefile and EMI.h
# *************************************************************************
sysgen: sys_auto_gen sys_mem_gen
sys_auto_gen: $(PREGEN_DEP)/sysgen_conf.det ckmemlayout

$(PREGEN_DEP)/sysgen_conf.det: genlog copro_info_gen emigen
ifeq ($(strip $(SMART_CHECK)),TRUE)
include $(wildcard $(PREGEN_DEP)/./sysgen_conf.det)
else
$(PREGEN_DEP)/sysgen_conf.det: FORCE
endif
$(PREGEN_DEP)/sysgen_conf.det:
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(ECHO) "$@ START TIME=" >> $(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n>>$(strip $(TARGDIR))/build.log

	@$(IF_NOT_EXIST) $(strip $(PREGEN_DEP)) $(THEN) ($(MKDIR) $(strip $(PREGEN_DEP))) $(CMD_END)
	@$(IF_EXIST) $@ $(THEN) ($(DEL_FILE) $@) $(CMD_END)

# use specific lds
ifeq ($(strip $(HARDCODE_LDS)),TRUE)
	@$(IF_EXIST) $(FIXPATH)/$(SCATTERFILE_PATH)/$(USER_DEFINE_SCATTERFILE_SRC) $(THEN) \
		$(COPY_FILE) $(SCATTERFILE_PATH)/$(USER_DEFINE_SCATTERFILE_SRC) $(SCATTERFILE) \
	$(ELSE) \
		(echo Error: no such lds file: $(FIXPATH)/$(SCATTERFILE_PATH)/$(USER_DEFINE_SCATTERFILE_SRC) $(WITH) exit 1) \
	$(CMD_END)
endif

	@$(IF_EXIST) $(FIXPATH)/$(strip ${PCORE_TOOLS})/sys_auto_gen.pl $(THEN) \
		((perl $(FIXPATH)/$(strip ${PCORE_TOOLS})/sys_auto_gen.pl $(SCATTERFILE) $(BL_SCATTERFILE) "$(strip $(PROJECT_MAKEFILE))" $(strip $(BUILD_SYSDIR)) $(strip $(NEED_BUILD_BOOTLOADER)) $(strip $(INSIDE_MTK)) $(strip $(DUMMY_LIS)) $(strip $(INFOMAKELOG)) $(strip $(TMPDIR))/~copro_info.tmp $(LIBDIR_TEMP) $(strip $(CC)) $@ > $(strip $(COMPLOGDIR))/sysgen.log) \
		$(WITH) \
		($(IF_ERR_TRUE) $(THEN) (echo Error: sys_auto_gen Failed. Please check $(strip $(COMPLOGDIR))/sysgen.log $(WITH) exit 1) $(CMD_END))) \
	$(CMD_END)

	@$(ECHO) "$@ END TIME=" >> $(strip $(TARGDIR))/build.log
	@perl $(strip ${PCORE_TOOLS})/time.pl -n >> $(strip $(TARGDIR))/build.log
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# Calculate system memory size and generate header files
# *************************************************************************
sys_mem_gen:
ifneq ($(strip $(MODIS_CONFIG)),TRUE)
sys_mem_gen: genlog
endif
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(IF_EXIST) $(strip $(TMPDIR))/~config_optInc.tmp $(THEN) ($(DEL_FILE) $(strip $(TMPDIR))/~config_optInc.tmp) $(CMD_END)
	@$(IF_EXIST) $(strip $(TMPDIR))/~config_Option.tmp $(THEN) ($(DEL_FILE) $(strip $(TMPDIR))/~config_Option.tmp) $(CMD_END)
	@$(MAKE) -fmake/${COMMON_ROOT}/build.mak -r -R --no-print-directory --old-file=genlog MODIS_CONFIG=$(strip $(MODIS_CONFIG)) MODIS_UESIM=$(strip $(MODIS_UESIM)) MODULELIS=config.lis genmoduleinfo
  ifeq ($(strip $(MODIS_CONFIG)),TRUE)
		@$(ECHO) -n System memory calculation for $(strip $(MODIS_UESIM))>$(strip $(MODISLOGDIR))/syscomp.log
  else
		@$(ECHO) -n System memory calculation for Target>$(strip $(COMPLOGDIR))/syscomp.log
		@$(STRCMPEX) inc inc e $(strip $(TMPDIR))/~config_optInc.tmp $(foreach inc,$(subst \,/,$(COMMINCDIRS)),-I$(inc))
		@$(STRCMPEX) def def e $(strip $(TMPDIR))/~config_opt.tmp $(foreach def,$(COM_DEFS),-D$(def))
		@$(CAT) $(strip $(TMPDIR))/~config_opt.tmp >> $(strip $(TMPDIR))/~config_optInc.tmp
  endif
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
		@$(IF_EXIST) $(strip $(MODULEINFODIR))/config $(THEN)\
			($(FOR) $(F_OPT) $(DECLARE_VAR)i $(IN) `$(CAT) $(strip $(MODULEINFODIR))/config/config.def ` \
			$(DO)\
				(echo -D$(PRE_VAR)i >>$(strip $(TMPDIR))/~config_optInc.tmp) $(DONE)) $(WITH) \
			($(FOR) $(F_OPT) $(DECLARE_VAR)i $(IN) `$(CAT) $(strip $(MODULEINFODIR))/config/config.inc ` \
			$(DO)\
				(echo -I$(PRE_VAR)i >>$(strip $(TMPDIR))/~config_optInc.tmp) $(DONE)) \
		$(CMD_END)
  else
		@$(IF_EXIST) $(strip $(MODULEINFODIR))/config $(THEN)\
			($(FOR) $(F_OPT) $(DECLARE_VAR)i $(IN) `$(CAT) $(strip $(MODULEINFODIR))/config/config.def ` \
			$(DO)\
				(echo ^#define $(PRE_VAR)i >>$(strip $(TMPDIR))/~config_Option.tmp) $(DONE)) $(WITH) \
				(perl $(strip ${PCORE_TOOLS})/replace_string.pl $(strip $(TMPDIR))/~config_Option.tmp = " " $(strip $(TMPDIR))/~config_Option.tmp) $(WITH) \
			($(FOR) $(F_OPT) $(DECLARE_VAR)i $(IN) `$(CAT) $(strip $(MODULEINFODIR))/config/config.inc ` \
			$(DO)\
				(echo -I$(PRE_VAR)i >>$(strip $(TMPDIR))/~config_optInc.tmp) $(DONE)) \
		$(CMD_END)
  endif
  ifneq ($(strip $(MODIS_CONFIG)),TRUE)
    ifeq ($(strip $(COMPILER_ARCH)),MIPS)
		@$(ECHO) -EL -fshort-enums >> $(strip $(TMPDIR))/~config_optInc.tmp
    endif
		@$(IF_EXIST) ${COMMON_ROOT}/service/config/src/hal/syscomp_config.c $(THEN)\
			($(CC) $(VIA)$(strip $(TMPDIR))/~config_optInc.tmp -c ${COMMON_ROOT}/service/config/src/hal/syscomp_config.c -o $(strip $(TMPDIR))/~syscomp_config.o 2>$(strip $(COMPLOGDIR))/sys_mem_gen.log $(AND) \
			(perl $(strip ${COMMON_TOOLS})/sys_mem_gen/sys_mem_gen.pl $(strip $(TMPDIR))/~syscomp_config.o $(strip $(BUILD_SYSDIR)) $(MODIS_CONFIG) $(strip $(COMPLOGDIR)) $(INFOMAKELOG) "$(CROSS)">>$(strip $(COMPLOGDIR))/sys_mem_gen.log $(WITH) \
			$(IF_ERR_TRUE) $(THEN) (echo Error: System memory calculation failed. Please check $(strip $(COMPLOGDIR))/sys_mem_gen.log $(WITH) exit 1) $(CMD_END))) \
		$(CMD_END)
  else
		@$(IF_EXIST) ${COMMON_ROOT}/service/config/src/hal/syscomp_config.c $(THEN)\
			($(CC) $(VIA)$(strip $(TMPDIR))/~config_optInc.tmp -imacros $(strip $(TMPDIR))/~config_Option.tmp -c ${COMMON_ROOT}/service/config/src/hal/syscomp_config.c -o $(strip $(TMPDIR))/~syscomp_config.o 2>$(strip $(MODISLOGDIR))/sys_mem_gen.log $(AND) \
			(perl $(strip ${COMMON_TOOLS})/sys_mem_gen/sys_mem_gen.pl $(strip $(TMPDIR))/~syscomp_config.o $(strip $(BUILD_SYSDIR)) $(MODIS_CONFIG) $(strip $(MODISLOGDIR)) $(INFOMAKELOG) "$(CROSS)">>$(strip $(MODISLOGDIR))/sys_mem_gen.log $(WITH) \
			$(IF_ERR_TRUE) $(THEN) (echo Error: System memory calculation failed. Please check $(strip $(MODISLOGDIR))/sys_mem_gen.log $(WITH) exit 1) $(CMD_END))) \
		$(CMD_END)
  endif
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
		@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# Target: gen_sfini
# *************************************************************************
gen_sfini: $(PREGEN_DEP)/gen_sfini.det
ifeq ($(strip $(SMART_CHECK)),TRUE)
include $(wildcard $(PREGEN_DEP)/./gen_sfini.det)
else
$(PREGEN_DEP)/gen_sfini.det: FORCE
endif
$(PREGEN_DEP)/gen_sfini.det:
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

	@$(IF_NOT_EXIST) $(strip $(PREGEN_DEP)) $(THEN) ($(MKDIR) $(strip $(PREGEN_DEP))) $(CMD_END)
	@$(IF_EXIST) $@ $(THEN) ($(DEL_FILE) $@) $(CMD_END)

	@$(IF_EXIST) $(strip $(TARGDIR))/$(TARGNAME).lis $(THEN)\
		(perl $(strip ${PCORE_TOOLS})/MarginCalc.pl $(strip $(TARGDIR))/$(TARGNAME).lis >$(strip $(COMPLOGDIR))/MarginCalc.log 2>&1 $(WITH) \
		($(IF_ERR_TRUE) $(THEN) (echo $(strip ${PCORE_TOOLS})/MarginCalc.pl Error. Please check $(strip $(COMPLOGDIR))/MarginCalc.log $(WITH) exit 1) $(CMD_END)))\
	$(CMD_END)

	@$(IF_EXIST) $(strip $(COMPLOGDIR))/libs.log $(THEN) ($(DEL_FILE) $(strip $(COMPLOGDIR))/libs.log) $(CMD_END)
ifneq ($(strip $(CUSTOM_RELEASE)),TRUE)
	@$(FOR) $(DECLARE_VAR)i $(IN) $(COMPLIST) $(DO) \
		(echo $(strip $(COMPLIBDIR))/lib$(PRE_VAR)i.a >> $(strip $(COMPLOGDIR))/libs.log) \
		$(DONE)
else
  ifneq ($(strip $(MTK_LIBS)),)
		@$(STRCMPEX) abc abc e $(strip $(COMPLOGDIR))/libs.log $(MTK_LIBS)
		@perl $(strip ${PCORE_TOOLS})/lnitem.pl $(strip $(COMPLOGDIR))/libs.log
  endif
endif
	
	@$(IF_EXIST) $(FIXPATH)/$(strip ${PCORE_TOOLS})/libinfo.pl $(THEN) \
		((perl $(FIXPATH)/$(strip ${PCORE_TOOLS})/libinfo.pl $(strip $(COMPLOGDIR))/libs.log > $(strip $(COMPLOGDIR))/libinfo.log) \
		$(WITH) \
		($(IF_ERR_TRUE) $(THEN) (echo Error: $(strip ${PCORE_TOOLS})/libinfo.pl Failed. Please check $(strip $(COMPLOGDIR))/libinfo.log $(WITH) exit 1) $(CMD_END))) \
	$(CMD_END)

#Preprocess mt_config.h
	@$(IF_EXIST) $(strip $(TMPDIR))/~mt_config_inc.tmp $(THEN) ($(DEL_FILE) $(strip $(TMPDIR))/~mt_config_inc.tmp) $(CMD_END)
	@$(IF_EXIST) $(strip $(TMPDIR))/~mt_config_def.tmp $(THEN) ($(DEL_FILE) $(strip $(TMPDIR))/~mt_config_def.tmp) $(CMD_END)
	@$(IF_EXIST) $(strip $(TMPDIR))/~mt_config.o $(THEN) ($(DEL_FILE) $(strip $(TMPDIR))/~mt_config.o) $(CMD_END)
	@$(STRCMPEX) inc inc e $(strip $(TMPDIR))/~mt_config_inc.tmp $(foreach inc,$(XGEN_INC_DIR),-I$(inc))
	@$(STRCMPEX) def def e $(strip $(TMPDIR))/~mt_config_def.tmp $(foreach def,$(COM_DEFS_TARGET),-D$(def))
	@$(IF_EXIST) $(strip $(COMMON_ROOT))/interface/service/config/mt_config.h $(THEN) \
		$(CC) -E -W $(VIA)$(strip $(TMPDIR))/~mt_config_inc.tmp $(VIA)$(strip $(TMPDIR))/~mt_config_def.tmp $(strip $(COMMON_ROOT))/interface/service/config/mt_config.h -o $(strip $(TMPDIR))/~mt_config.o > $(strip $(COMPLOGDIR))/mt_config.log $(WITH) \
		($(IF_ERR_TRUE) $(THEN) (echo Error: Preprocess mt_config.h Failed. Please check $(strip $(COMPLOGDIR))/mt_config_info.log $(WITH) exit 1) $(CMD_END)) \
	$(CMD_END)

#MDProfilerMETAInfoGen
	@$(IF_EXIST) $(strip $(TMPDIR))/~syscomp_config.o $(THEN) \
		$(IF_EXIST) $(strip ${COMMON_TOOLS})/MDProfilerMETAInfoGen/MDProfiler_META_info_gen.pl $(THEN) \
			((perl $(strip ${COMMON_TOOLS})/MDProfilerMETAInfoGen/MDProfiler_META_info_gen.pl $(strip $(TMPDIR))/~syscomp_config.o $(strip $(TMPDIR))/~mt_config.o $(strip $(MODISBUILD_TST_DB)) $(strip $(COMPLOGDIR)) $(strip $(PLATFORM)) $(strip $(PROJECT_NAME)) $(strip $(FLAVOR)) $(strip $(VERNO))) \
			$(WITH) \
			($(IF_ERR_TRUE) $(THEN) (echo Error: $(strip ${COMMON_TOOLS})/MDProfilerMETAInfoGen/MDProfiler_META_info_gen.pl Failed. Please check $(strip $(COMPLOGDIR))/swla_meta_info.log $(WITH) exit 1) $(CMD_END))) \
		$(CMD_END) \
	$(CMD_END)

	@$(ECHO) -n $(strip $(INFOLOG)) >$(MODISBUILD_TST_DB)/sf.ini
	@$(ECHO) -n $(strip "$(PROJECT_MAKEFILE)") >>$(MODISBUILD_TST_DB)/sf.ini
	@$(ECHO) -n $(strip $(COMPLOGDIR))/emigen.log >>$(MODISBUILD_TST_DB)/sf.ini
	@$(ECHO) -n $(strip $(COMPLOGDIR))/ckSysDrv.log >>$(MODISBUILD_TST_DB)/sf.ini
	@$(ECHO) -n $(strip $(COMPLOGDIR))/drv_features_option.log >>$(MODISBUILD_TST_DB)/sf.ini
	@$(ECHO) -n $(strip $(COMPLOGDIR))/MarginCalc.log >>$(MODISBUILD_TST_DB)/sf.ini
	@$(ECHO) -n $(strip $(COMPLOGDIR))/libinfo.log >>$(MODISBUILD_TST_DB)/sf.ini
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
  ifdef EUTRAN_MODE_SUPPORT
  ifneq ($(strip $(EUTRAN_MODE_SUPPORT)),NONE)
    ifeq ($(strip $(NO_LTECGEN)),FALSE)
    ifeq ($(strip $(NO_DSP)),FALSE)
	@$(ECHO) -n "<DSPXMLUtil@filterXML>$(DSPDIR)/$(strip $(DSP_PROJECT))/$(strip $(DSP_FLAVOR))/final_bin/xml/filterXML" >>$(MODISBUILD_TST_DB)/sf.ini
    endif
    endif
  endif
  endif
endif

	@$(IF_EXIST) $(strip $(TMPDIR))/~syscomp_config.o $(THEN) \
	($(ECHO) -n "<92SWLAMetaInfoFile>$(strip $(MODISBUILD_TST_DB))/MDProfiler_METAInfo.ini" >>$(MODISBUILD_TST_DB)/sf.ini) \
	$(CMD_END)

	@$(IF_EXIST) $(MODISBUILD_TST_DB)/sf_meta.ini $(THEN) $(DEL_FILE) $(MODISBUILD_TST_DB)/sf_meta.ini $(CMD_END)
ifneq ($(wildcard $(CUSTOMIZATION)/log2SD_Catcher_filters_meta.ini),)
ifneq ($(LOG2SD_CATCHER_FILTERS_LIST),)
	@$(IF_EXIST) $(MODISBUILD_TST_DB)/catcher_filter__Default.bin $(THEN) \
		($(ECHO) -n "<catcher_filter@_Default>$(MODISBUILD_TST_DB)/catcher_filter__Default.bin" >> $(MODISBUILD_TST_DB)/sf.ini) $(AND) \
		($(ECHO) -n "<catcher_filter@_Default>$(MODISBUILD_TST_DB)/catcher_filter__Default.bin" >> $(MODISBUILD_TST_DB)/sf_meta.ini) \
	$(CMD_END)
	@$(FOR) $(DECLARE_VAR)i $(IN) $(LOG2SD_CATCHER_FILTERS_LIST) $(DO) \
		$(IF_EXIST) $(MODISBUILD_TST_DB)/catcher_filter_$(PRE_VAR)i.bin $(THEN) \
			($(ECHO) -n "<catcher_filter@$(PRE_VAR)i>$(MODISBUILD_TST_DB)/catcher_filter_$(PRE_VAR)i.bin" >> $(MODISBUILD_TST_DB)/sf.ini) $(AND) \
			($(ECHO) -n "<catcher_filter@$(PRE_VAR)i>$(MODISBUILD_TST_DB)/catcher_filter_$(PRE_VAR)i.bin" >> $(MODISBUILD_TST_DB)/sf_meta.ini) \
		$(CMD_END) \
	$(DONE)
endif
endif

ifeq ($(strip $(SMART_CHECK)),TRUE)
	@$(ECHO) -n $@: $(strip $(INFOLOG)) >$@
	@$(ECHO) -n "$@: $(strip $(PROJECT_MAKEFILE))" >> $@
	@$(ECHO) -n $@: $(MODISBUILD_TST_DB)/sf.ini   >> $@
	@$(ECHO) -n $@: $(MAKE_COMMON)/codegen.mak   >> $@
	@$(ECHO) -n $@: $(strip ${COMMON_TOOLS})/MDProfilerMETAInfoGen/MDProfiler_META_info_gen.pl >> $@
endif

# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: gencustominfo
# Generate Custom Information
# *************************************************************************
gencustominfo:
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(IF_EXIST) $(strip $(TARGDIR))/build.log $(THEN)\
		($(ECHO) "$@ START TIME=" >>$(strip $(TARGDIR))/build.log $(AND) \
		perl $(strip ${PCORE_TOOLS})/time.pl -n>>$(strip $(TARGDIR))/build.log) $(CMD_END)

ifdef DRV_CUSTOM_TOOL_SUPPORT
ifeq ($(strip $(DRV_CUSTOM_TOOL_SUPPORT)),TRUE)
ifeq ($(findstring MT6129D,$(strip $(RF_MODULE))),)
ifeq ($(findstring MT6139E,$(strip $(RF_MODULE))),)
	@$(IF_NOT_EXIST) $(BUILD_CODEGENDIR) $(THEN) ($(MKDIR) $(BUILD_CODEGENDIR)) $(CMD_END)
	@$(IF) "$(strip  $(DRV_CUSTOM_TOOL_SUPPORT))" $(EQU) "TRUE" $(THEN)\
		($(IF_EXIST) $(DRV_GEN) $(THEN) \
		($(IF_EXIST) $(call CUSTOM_FLD_MAPPING,${PCORE_ROOT}/custom/driver/drv_gen)/codegen.dws $(THEN) \
		   ($(DRV_GEN) $(call CUSTOM_FLD_MAPPING,${PCORE_ROOT}/custom/driver/drv_gen)/codegen.dws $(strip $(BUILD_CODEGENDIR)) $(strip $(PROJDIR))) \
		$(CMD_END)) \
		$(CMD_END)) \
	$(CMD_END)
endif
endif
endif
endif
	@$(IF_EXIST) $(strip $(TARGDIR))/build.log $(THEN)\
		($(ECHO) "$@ END TIME=" >> $(strip $(TARGDIR))/build.log $(AND) \
		 perl $(strip ${PCORE_TOOLS})/time.pl -n >> $(strip $(TARGDIR))/build.log) $(CMD_END)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif

# *************************************************************************
# TARGET: $(MODIS_RULESDIR)/codegen_dep/cgen_db_sig.det: FORCE
# *************************************************************************
ifneq ($(strip $(AUTO_CHECK_CGEN)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_db_sig.det: FORCE
endif
$(MODIS_RULESDIR)/codegen_dep/cgen_db_sig.det: $(NEED_CHECK_DEPEND_LIST) $(MODIS_RULESDIR)/codegen_dep/cgen_cm.det
ifeq ($(strip $(CUSTOM_RELEASE)),FALSE)
   $(MODIS_RULESDIR)/codegen_dep/cgen_db_sig.det: $(MODIS_RULESDIR)/codegen_dep/cgen_ap_srcParseDbModem.det
else ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
  $(MODIS_RULESDIR)/codegen_dep/cgen_db_sig.det: $(MODIS_RULESDIR)/codegen_dep/cgen_ap_srcParseDbModem.det
endif
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_S,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
	@$(IF_NOT_EXIST) $(BUILD_TSTDIR)/src $(THEN) ($(MKDIR) $(BUILD_TSTDIR)/src) $(CMD_END)
	@$(ECHO) -n "Generate dbSig File ......"
	@$(ECHO) -n "$(CGEN) -db_sig $(CODEGEN_DATABASE_OUT) $(BUILD_TSTDIR)/src/dbSig.c " >> $(CGEN_CFG_MODEM)
	@$(ECHO) -n $@: $(CGEN) >$@
	@$(ECHO) -n $@ >>$(CODE_GEN_LST)
# mbis time probe
ifeq ($(strip $(MBIS_EN)),TRUE)
	@$(ECHO) -n -t "T_E,$@,T," >> $(MBIS_BUILD_TIME_TMP)
endif
