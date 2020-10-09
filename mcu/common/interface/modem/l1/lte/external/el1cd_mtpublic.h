#ifndef __EL1CD_MTPUBLIC_H__
#define __EL1CD_MTPUBLIC_H__

#define EL1CD_MT_D_END 1023
#define EL1CD_MT_C_END 2047

#if defined(MT_CONFIG_H) // for codegen enum

#define EL1CD_MT_ENUM_TYPE                                           MT_EL1CD_FUNC_TYPE
#define EL1D_MT_CB_NUM                                               MT_EL1CD_D_NUM
#define EL1C_MT_CB_NUM                                               MT_EL1CD_C_NUM_, MT_EL1CD_C_NUM  = (MT_EL1CD_C_NUM_ - EL1CD_MT_D_END)
#define EL1D_MT_CB_END                                               MT_EL1CD_CB_END = EL1CD_MT_D_END
#define EL1C_MT_CB_END                                               MT_EL1CD_CB_END = EL1CD_MT_C_END
/*EL1D*/
#define EL1D_MT_MOD(mod_id)
#define EL1D_MT_REGISTER(lisr,callback)                              MT_EL1CD_##lisr##_##callback,
#define EL1D_TAILCB_REGISTER(tail_type,callback)                     MT_EL1CD_TAILCB_##tail_type##_##callback,
#define EL1D_SFTMR_REGISTOR_CORE0(callback)                          MT_EL1CD_SFTMR_CORE0_##callback,
#define EL1D_SFTMR_REGISTOR_CORE1(callback)                          MT_EL1CD_SFTMR_CORE1_##callback,
/*EL1C*/
#define EL1C_MT_REGISTER(callback)                                   MT_EL1CD_##callback,

#else                   // for real target enum

#define EL1CD_MT_ENUM_TYPE                                           EL1CD_MT_CB_E
#define EL1C_MT_CB_NUM                                               EL1C_MT_CB_NUM_, EL1C_MT_CB_NUM  = (EL1C_MT_CB_NUM_ - EL1CD_MT_D_END)
#define EL1D_MT_CB_END                                               EL1D_MT_CB_END = EL1CD_MT_D_END
#define EL1C_MT_CB_END                                               EL1C_MT_CB_END = EL1CD_MT_C_END
/*EL1D*/
#define EL1D_MT_MOD(mod_id)
#define EL1D_MT_REGISTER(lisr,callback)                              EL1D_MT_CB_EL1D_MT_LISR_##lisr##_##callback,
#define EL1D_TAILCB_REGISTER(tail_type,callback)                     EL1D_MT_CB_TAILCB_##tail_type##_##callback,
#define EL1D_SFTMR_REGISTOR_CORE0(callback)                          EL1D_MT_CB_SFTMR_CORE0_##callback,
#define EL1D_SFTMR_REGISTOR_CORE1(callback)                          EL1D_MT_CB_SFTMR_CORE1_##callback,
#define EL1D_MT_REGISTER_IDX(lisr,callback)                          EL1D_MT_CB_##lisr##_##callback
#define EL1D_MT_TAILCB_REGISTER_IDX(tail_type,callback)              EL1D_MT_CB_TAILCB_##tail_type##_##callback
#define EL1D_MT_SFTMR_REGISTOR_CORE0_IDX(callback)                   EL1D_MT_CB_SFTMR_CORE0_##callback
#define EL1D_MT_SFTMR_REGISTOR_CORE1_IDX(callback)                   EL1D_MT_CB_SFTMR_CORE1_##callback
/*EL1C*/
#define EL1C_MT_REGISTER(callback)                                   callback##_FUNC_IDX,
#define EL1C_MT_FUNC_IDEX(func_ptr)                                  func_ptr##_FUNC_IDX

#endif

typedef enum{
   #include "lmultithreadregtbl.h"
   #include "ltailcbregtbl.h"
   #include "lsftmrregtbl.h"
   EL1D_MT_CB_NUM,
   EL1D_MT_CB_END,
   #include "el1c_mtregtbl.h"
   EL1C_MT_CB_NUM,
   EL1C_MT_CB_END
} EL1CD_MT_ENUM_TYPE;

#undef EL1D_MT_MOD
#undef EL1D_MT_REGISTER
#undef EL1D_TAILCB_REGISTER
#undef EL1D_SFTMR_REGISTOR_CORE0
#undef EL1D_SFTMR_REGISTOR_CORE1

#undef EL1C_MT_REGISTER

#endif
