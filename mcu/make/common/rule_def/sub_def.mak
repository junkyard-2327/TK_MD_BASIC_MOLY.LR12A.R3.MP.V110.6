# Module is form lib to src build and need l1trace trace (REL_SUB_L4)
SUB_BUILD :=
SUB_BUILD += cl1
SUB_BUILD += evl1
SUB_BUILD += xl1
SUB_BUILD += hsc
SUB_BUILD += rcp
SUB_BUILD += rmc
SUB_BUILD += l1d
SUB_BUILD += el1d_pub
SUB_BUILD += el1d_pcore
SUB_BUILD += el1d
SUB_BUILD += ul1
SUB_BUILD += gl1
SUB_BUILD += gl1_pcore
SUB_BUILD += ul1_pcore
SUB_BUILD += mml1_rf
SUB_BUILD += usbclass
SUB_BUILD += iwlan
SUB_BUILD += qmu_bm

# Module is default rel setting and only need l1trace trace (REL_SUB_PROTOCOL)
NEED_TMD_SUB_BUILD :=
NEED_TMD_SUB_BUILD += tl1
NEED_TMD_SUB_BUILD += rohc
NEED_TMD_SUB_BUILD += upcm
NEED_TMD_SUB_BUILD += md_sm
NEED_TMD_SUB_BUILD += devdrv


ifneq ($(filter $(SUB_BUILD),$(NEED_TMD_SUB_BUILD)),)
  $(warning ERROR: $(filter $(SUB_BUILD),$(NEED_TMD_SUB_BUILD)) can't be both defined in SUB_BUILD and NEED_TMD_SUB_BUILD.)
  DEPENDENCY_CONFLICT = TRUE
endif

ALL_SUB_BUILD :=
ALL_SUB_BUILD += $(SUB_BUILD) 
ALL_SUB_BUILD += $(NEED_TMD_SUB_BUILD)