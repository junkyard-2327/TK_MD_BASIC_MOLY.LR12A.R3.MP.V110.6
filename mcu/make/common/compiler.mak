#  Copyright Statement:
#  --------------------
#  This software is protected by Copyright and the information contained
#  herein is confidential. The software may not be copied and the information
#  contained herein may not be used or disclosed except with the written
#  permission of MediaTek Inc. (C) 2015
#
#  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
#  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
#  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
#  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
#  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
#  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
#  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
#  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
#  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
#  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
#  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
#  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
#
#  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
#  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
#  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
#  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
#  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
#
#  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
#  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
#  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
#  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
#  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).

# *****************************
# Environment and Tools
# *****************************
ifdef COMPILER
  ifeq ($(strip $(COMPILER)),GCC)
    ifeq ($(strip $(COMPILER_ARCH)),ARM)
      VIA = @
      DEPEND = -MMD -MF
      BIN_FORMAT     = -O binary
      DIR_TOOL       = $(strip $(DIR_TOOL))
      ifeq ($(strip $(OS_VERSION)),MSWin32)
        CROSS          = common\tools\GCC\ARM\4.9.3\win\bin\arm-none-eabi-
        CPL             = $(CROSS)gcc.exe               # compiler
        CC             = $(CROSS)gcc.exe  -mthumb       # compiler
        CC32           = $(CROSS)gcc.exe  -marm         # compiler
        CPPC           = $(CROSS)g++.exe                # C++ compiler
        CPPC32         = $(CROSS)g++.exe -marm          # compiler
        LINK           = $(CROSS)ld.exe                 # Linker
        DUMP           = $(CROSS)objdump.exe            # Linker
        ASM            = $(CROSS)as                     # ARM assembler
        LIB            = $(CROSS)ar.exe                 # Library tool
        BIN_CREATE     = $(CROSS)objcopy                # Binary tool
        CPLUSFLAGS     = $(CFLAGS)
        MD             = ""
      else
        CROSS          = ${COMMON_ROOT}/tools/GCC/ARM/4.9.3/linux/bin/arm-none-eabi-
        CPL            = $(CROSS)gcc                    # compiler
        CC             = $(CROSS)gcc  -mthumb           # compiler
        CC32           = $(CROSS)gcc  -marm             # compiler
        CPPC           = $(CROSS)g++                    # C++ compiler
        CPPC32         = $(CROSS)g++ -marm              # compiler
        LINK           = $(CROSS)ld                     # Linker
        DUMP           = $(CROSS)objdump                # Linker
        ASM            = $(CROSS)as                     # ARM assembler
        LIB            = $(CROSS)ar                     # Library tool
        BIN_CREATE     = $(CROSS)objcopy                # Binary tool
        CPLUSFLAGS     = $(CFLAGS)
        MD             = ""
      endif
    else
      VIA = @
      DEPEND = -MMD -MF
      BIN_FORMAT     = -O binary
      DIR_TOOL       = $(strip $(DIR_TOOL))
      ifeq ($(strip $(OS_VERSION)),MSWin32)
        CROSS          = common\tools\GCC\ARM\4.9.3\win\bin\arm-none-eabi-
        CPL            = $(CROSS)gcc.exe                # compiler
        CC             = $(CROSS)gcc.exe  -mthumb       # compiler
        CC32           = $(CROSS)gcc.exe  -marm         # compiler
        CPPC           = $(CROSS)g++.exe                # C++ compiler
        CPPC32         = $(CROSS)g++.exe -marm          # compiler
        LINK           = $(CROSS)ld.exe                 # Linker
        DUMP           = $(CROSS)objdump.exe            # Linker
        ASM            = $(CROSS)as                     # ARM assembler
        LIB            = $(CROSS)ar.exe                 # Library tool
        BIN_CREATE     = $(CROSS)objcopy                # Binary tool
        CPLUSFLAGS     = $(CFLAGS)
        MD             = ""
      else
        CROSS          = ${COMMON_ROOT}/tools/GCC/MIPS/4.9.2/linux/bin/mips-mti-elf-
        CPL            = $(CROSS)gcc                    # compiler
        CC             = $(CROSS)gcc                    # compiler
        CC32           = $(CROSS)gcc                    # compiler
        CPPC           = $(CROSS)g++                    # C++ compiler
        CPPC32         = $(CROSS)g++                    # compiler
        LINK           = $(CROSS)ld                     # Linker
        DUMP           = $(CROSS)objdump                # Linker
        ASM            = $(CROSS)as                     # ARM assembler
        LIB            = $(CROSS)ar                     # Library tool
        BIN_CREATE     = $(CROSS)objcopy                # Binary tool
        GDB_CREATE     = $(CROSS)gdb                    # Gdb tool
        CPLUSFLAGS     = $(CFLAGS)
        MD             = ""
      endif
    endif
  endif
endif

# *****************************
# C options COPTION16 for thumb mode and COPTION32 for arm mode
# *****************************
ifeq ($(strip $(COMPILER)),GCC)
  CFLAGS          := -Wno-attributes -Wno-pragmas -fstrict-volatile-bitfields
  ifeq ($(strip $(GCC_WARN_AS_ERROR)),TRUE)
    ifeq ($(strip $(NO_WARNING_AS_ERROR)),FALSE)
      CFLAGS          += -Werror
    endif
  endif
endif

ifneq ($(filter $(strip $(SUPPORT_PLATFORM)), $(strip $(PLATFORM))),)
 ifeq ($(strip $(COMPILER)),GCC)
  ifeq ($(strip $(COMPILER_ARCH)),ARM)
     DWARF_FLAGS     := -gdwarf-2
     PLATFORM_FLAGS  := -march=armv7-r -mcpu=cortex-r4 -mlittle-endian -Wa,-mimplicit-it=always -mabi=aapcs
     PLATFORM_AFLAGS := -march=armv7-r -mcpu=cortex-r4 -mlittle-endian -mimplicit-it=always -mapcs-32
     OFLAGS          := -Os -fno-strict-aliasing -fno-common -fno-exceptions -ffunction-sections -fdata-sections
     OAFLAGS         := $(DWARF_FLAGS)
     CFLAGS          += $(PLATFORM_FLAGS) $(OFLAGS) -fno-delete-null-pointer-checks -Wall -c -mno-unaligned-access -fshort-wchar
   ifeq ($(strip $(OS_VERSION)),MSWin32)
     LINK_SEARCH_PATH = -L "./${COMMON_ROOT}/tools/GCC/ARM/4.9.3/win/arm-none-eabi/lib/armv7-ar/thumb" \
                        -L "./${COMMON_ROOT}/tools/GCC/ARM/4.9.3/win/lib/gcc/arm-none-eabi/4.9.3/armv7-ar/thumb"
   else
     LINK_SEARCH_PATH = -L "./${COMMON_ROOT}/tools/GCC/ARM/4.9.3/linux/arm-none-eabi/lib/armv7-ar/thumb" \
                        -L "./${COMMON_ROOT}/tools/GCC/ARM/4.9.3/linux/lib/gcc/arm-none-eabi/4.9.3/armv7-ar/thumb"
   endif
  else
   ifeq ($(strip $(OS_VERSION)),MSWin32)
     PLATFORM_FLAGS  := -march=armv7-r -mcpu=cortex-r4 -mlittle-endian -Wa,-mimplicit-it=always -mabi=aapcs
     PLATFORM_AFLAGS  := -march=armv7-r -mcpu=cortex-r4 -mlittle-endian -mimplicit-it=always -mapcs-32
     OFLAGS          := -Os -fno-strict-aliasing -fno-common -fno-exceptions -ffunction-sections -fdata-sections
     OAFLAGS         := -gdwarf-2
     CFLAGS          += $(PLATFORM_FLAGS) $(OFLAGS) -fno-delete-null-pointer-checks -Wall -c -mno-unaligned-access -fshort-wchar
     LINK_SEARCH_PATH = -L "./${COMMON_ROOT}/tools/GCC/ARM/4.9.3/win/arm-none-eabi/lib/armv7-ar/thumb" \
                        -L "./${COMMON_ROOT}/tools/GCC/ARM/4.9.3/win/lib/gcc/arm-none-eabi/4.9.3/armv7-ar/thumb"
   else
     DWARF_FLAGS     := -gdwarf-2
     ifeq ($(strip $(COMPILER_ISA)),MIPS16)
       PLATFORM_FLAGS  := -march=interAptiv-mr2 -mips16 -mmips16e2  -EL -mabi=32 -msoft-float -mno-dsp -mmt -mno-gpopt -mno-long-calls -G0 -minterlink-mips16 -mdead-loads -mblockmov-limit=0
       PLATFORM_AFLAGS  := -march=interAptiv-mr2 -mips16 -mmips16e2 -EL -msoft-float -mno-dsp -mmt -G0
     else
       PLATFORM_FLAGS  := -march=interAptiv-mr2 -EL -mabi=32 -msoft-float -mno-dsp -mmt -mno-gpopt -mno-long-calls -G0 -minterlink-compressed -mdead-loads -mblockmov-limit=0
       PLATFORM_AFLAGS  := -march=interAptiv-mr2 -EL -msoft-float -mno-dsp -mmt -G0
     endif
     OFLAGS          := -Os -fno-strict-aliasing -fno-common -fno-exceptions -ffunction-sections -fdata-sections
     OAFLAGS         := $(DWARF_FLAGS)
#     CFLAGS          += $(PLATFORM_FLAGS) $(OFLAGS) -fno-delete-null-pointer-checks -Wall -c -mno-unaligned-access -fshort-wchar
     CFLAGS          += $(PLATFORM_FLAGS) $(OFLAGS) -fno-delete-null-pointer-checks -Wall -c -fshort-wchar -fshort-enums
     LINK_SEARCH_PATH = -L "./${COMMON_ROOT}/tools/GCC/MIPS/4.9.2/linux/mips-mti-elf/lib/mipsel-r2-soft-newlib/lib" \
                        -L "./${COMMON_ROOT}/tools/GCC/MIPS/4.9.2/linux/lib/gcc/mips-mti-elf/4.9.2/mipsel-r2-soft-newlib/lib"
   endif
  endif
 endif
endif

CFLAGS     +=  $(CUSTOM_CFLAGS)
CPLUSFLAGS +=  $(CUSTOM_CFLAGS)

BUILD_WARNING_CFLAGS :=
-include make/${COMMON_ROOT}/build_warning_def.mak
ifeq ($(strip $(NO_WARNING_AS_ERROR)),FALSE)
  ifneq ($(strip $(BUILD_WARNING_CFLAGS)),)
    CFLAGS     +=  $(BUILD_WARNING_CFLAGS)
    CPLUSFLAGS +=  $(BUILD_WARNING_CFLAGS)
  endif
endif

# *****************************
# assembly option AOPTION16 for Thumb mode and AOPTION32 for Arm mode
# *****************************
ifeq ($(strip $(COMPILER)),GCC)
  AFLAGS := $(PLATFORM_AFLAGS) $(OAFLAGS) -g
endif # end of " COMPILER == GCC "

# *****************************
# Macros definition for GCC
# *****************************
ifeq ($(strip $(COMPILER)),GCC)
  ifeq ($(strip $(COMPILER_ARCH)),ARM)
    WRAP_LIST = --wrap=memcpy --wrap=memset --wrap=memclr --wrap=strcmp --wrap=sprintf  --wrap=vsprintf --wrap=snprintf --wrap=vsnprintf --wrap=sscanf --wrap=vsscanf \
  	--wrap=raise --wrap=__aeabi_div0 --wrap=setlocale --wrap=on_exit --wrap=getenv --wrap=clock --wrap=puts \
  	--wrap=putchar --wrap=printf --wrap=vprintf --wrap=malloc --wrap=_malloc_r --wrap=calloc --wrap=_calloc_r --wrap=realloc --wrap=_realloc_r \
  	--wrap=free --wrap=_free_r --wrap=qsort --wrap=fprintf --wrap=fflush --wrap=_fflush_r --wrap=setbuf --wrap=setvbuf --wrap=fscanf \
  	--wrap=scanf --wrap=vfscanf --wrap=vscanf --wrap=vfprintf --wrap=fgetc --wrap=fgets --wrap=getc --wrap=getchar --wrap=gets \
  	--wrap=putc  --wrap=ungetc --wrap=_ungetc_r --wrap=fgetpos --wrap=fseek --wrap=fsetpos --wrap=ftell --wrap=rewind --wrap=clearerr \
  	--wrap=feof --wrap=ferror --wrap=fopen --wrap=freopen --wrap=_fclose_r --wrap=fclose --wrap=fprintf --wrap=fread --wrap=fwrite \
  	--wrap=fputc --wrap=fputs --wrap=perror
  else
    WRAP_LIST = --wrap=memset  --wrap=sprintf  --wrap=vsprintf --wrap=snprintf --wrap=vsnprintf --wrap=sscanf --wrap=vsscanf \
    --wrap=setlocale --wrap=clock --wrap=qsort --wrap=__cxa_atexit
  endif

# *************************
#  Settings for TARGET
# *************************
  ifeq ($(strip $(COMPILER_ARCH)),ARM)
    LNKOPT = $(strip $(WRAP_LIST)) -Bstatic --cref --warn-common --gc-sections --nmagic --emit-relocs \
           -o $(strip $(TARGDIR))\$(IMG_FILE) \
           -Map $(strip $(TARGDIR))\$(MAP_FILE) \
           -dT $(strip $(SCATTERFILE)) \
           $(strip $(LINK_SEARCH_PATH))
  else
    LNKOPT = $(strip $(WRAP_LIST)) -EL -Bstatic --cref --warn-common --gc-sections --nmagic \
           -o $(strip $(TARGDIR))\$(IMG_FILE) \
           -Map $(strip $(TARGDIR))\$(MAP_FILE) \
           -dT $(strip $(SCATTERFILE)) \
           $(strip $(LINK_SEARCH_PATH))
  endif

  ifneq ($(filter $(strip $(SUPPORT_PLATFORM)), $(strip $(PLATFORM))),)
    ifeq ($(strip $(COMPILER_ARCH)),ARM)
      LNKOPT += --thumb-entry=INT_Vectors
    else
      LNKOPT += --entry=INT_Vectors
    endif
  endif

  ifneq ($(filter $(strip $(PLATFORM)),$(SV5X_PLATFORM)),)
    LNKOPT += --undefined=g_maui_gfh
  endif
endif #ifeq ($(strip $(COMPILER)),GCC)
