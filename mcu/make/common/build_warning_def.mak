ifneq ($(strip $(CUSTOM_RELEASE)),TRUE)
    WARNING_AS_ERROR := TRUE
else
    ifeq ($(strip $(MTK_SUBSIDIARY)),TRUE)
        WARNING_AS_ERROR := TRUE
    else
        WARNING_AS_ERROR := FALSE
    endif
endif

ifeq ($(strip $(WARNING_AS_ERROR)),TRUE)
    BUILD_WARNING_CFLAGS    +=    -Werror=array-bounds
    BUILD_WARNING_CFLAGS    +=    -Werror=enum-compare
    BUILD_WARNING_CFLAGS    +=    -Werror=implicit-function-declaration
    BUILD_WARNING_CFLAGS    +=    -Werror=implicit-int
    BUILD_WARNING_CFLAGS    +=    -Werror=int-to-pointer-cast
    BUILD_WARNING_CFLAGS    +=    -Werror=maybe-uninitialized
    BUILD_WARNING_CFLAGS    +=    -Werror=overflow
    BUILD_WARNING_CFLAGS    +=    -Werror=pointer-sign
    BUILD_WARNING_CFLAGS    +=    -Werror=pointer-to-int-cast
    BUILD_WARNING_CFLAGS    +=    -Werror=return-type
    BUILD_WARNING_CFLAGS    +=    -Werror=sequence-point
    BUILD_WARNING_CFLAGS    +=    -Werror=sizeof-pointer-memaccess
    BUILD_WARNING_CFLAGS    +=    -Werror=switch
    BUILD_WARNING_CFLAGS    +=    -Werror=uninitialized
    BUILD_WARNING_CFLAGS    +=    -Werror=unknown-pragmas
endif
