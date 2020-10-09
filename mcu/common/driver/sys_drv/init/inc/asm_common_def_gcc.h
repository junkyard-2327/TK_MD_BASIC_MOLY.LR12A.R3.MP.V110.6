
#ifndef _ASM_COMMON_DEF_GCC_
#define _ASM_COMMON_DEF_GCC_


#define GCC_FUNC_LEAF(name)\
    .##text;\
    .##globl    name;\
    .##ent  name;\
name:

#define GCC_FUNC_END(name)\
    .##size name,.-name;\
    .##end  name


#define GCC_ASM_FUNC_LEAF(name)\
    .##text;\
    .##globl    name;\
    .##ent  name;\
name:

#define GCC_ASM_FUNC_END(name)\
    .##size name,.-name;\
    .##end  name

.macro declare_stack name, val=0
   .type \name , %object
   \name :
   .ascii "STACKEND"
   .space \val
   1:
   .size \name , 1b - \name
.endm

#if 0
#ifdef __STACK_ALIGN_MPU__
/* under construction !*/
#else
/* under construction !*/
#endif
#endif

#endif


