/*
 * SYS_STACK_INSTANCE(CORE, VPE, TC, SIZE, SECTION, TYPE)
 */

#ifndef SYS_STACK_INSTANCE
# define SYS_STACK_INSTANCE
#endif

#ifndef SYS_STACK_NAME
# define SYS_STACK_NAME(CORE, VPE, TC) SYS_Stack_Pool_CORE ## CORE ## _VPE ## VPE ## _TC ## TC
#endif

#ifndef SYS_STACK_INSTANCE_BEGIN
# define SYS_STACK_INSTANCE_BEGIN()
#endif

#ifndef SYS_STACK_INSTANCE_END
# define SYS_STACK_INSTANCE_END()
#endif

SYS_STACK_INSTANCE_BEGIN()

SYS_STACK_INSTANCE(0, 0, 0, 8*1024, CACHED_EXTSRAM_ZI, NUv3)
SYS_STACK_INSTANCE(0, 1, 1, 8*1024, DSPRAM_ZI_CORE0.SYS_Stack, HRT)
SYS_STACK_INSTANCE(0, 1, 2, 4*1024, DSPRAM_ZI_CORE0.SYS_Stack, HRT_MT)
SYS_STACK_INSTANCE(0, 1, 3, 4*1024, DSPRAM_ZI_CORE0.SYS_Stack, HRT_MT)

#if !defined(__SINGLE_CORE__)
SYS_STACK_INSTANCE(1, 0, 0, 8*1024, CACHED_EXTSRAM_ZI, NUv3)
SYS_STACK_INSTANCE(1, 1, 1, 8*1024, DSPRAM_ZI_CORE1.SYS_Stack, HRT)
SYS_STACK_INSTANCE(1, 1, 2, 4*1024, DSPRAM_ZI_CORE1.SYS_Stack, HRT_MT)
SYS_STACK_INSTANCE(1, 1, 3, 4*1024, DSPRAM_ZI_CORE1.SYS_Stack, HRT_MT)
#endif

SYS_STACK_INSTANCE_END()

#undef SYS_STACK_INSTANCE
#undef SYS_STACK_NAME
#undef SYS_STACK_INSTANCE_BEGIN
#undef SYS_STACK_INSTANCE_END

