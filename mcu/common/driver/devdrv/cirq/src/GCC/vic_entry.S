#include "drv_mdcirq_reg.h"
#if !defined(__NUCLEUS_VERSION_3__)
#include "esal_ar_isr_defs_gcc.inc"
#include "esal_ar_stk_defs_gcc.inc"
#endif

.equ SVC_MODE  , 0x13         # Supervisor Mode (SVC)
.equ IRQ_MODE  , 0x12         # Interrupt Mode (IRQ)
.equ KERN_MODE , 0x1f         # Kernel Running Mode
.equ SYS_MODE  , 0x1f         # Kernel Running Mode
.data
.extern drv_mdcirq_dispatcher
.extern ESAL_GE_STK_System_SP
.extern ESAL_GE_ISR_OS_Entry
.extern ESAL_GE_ISR_OS_Nested_Entry
.extern ESAL_GE_STK_Unsol_Switch_Req
.extern TP_Update_Preempted_Time
.text
.global ISRRoutine_Default
.global ISRRoutine_1
.global ISRRoutine_2
#.thumb
.section INTSRAM_ROCODE, "ax"
#.syntax unified
#.thumb_func
.align 2
.global ISRRoutines
ISRRoutines:
    sdbbp
    jr $31
ISRRoutine_0:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #0
#    B       ISRCommonRoutine
.align 2
ISRRoutine_1:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #1
#    B       ISRCommonRoutine
.align 2
ISRRoutine_2:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #2
#    B       ISRCommonRoutine
.align 2
ISRRoutine_3:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #3
#    B       ISRCommonRoutine
.align 2
ISRRoutine_4:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #4
#    B       ISRCommonRoutine
.align 2
ISRRoutine_5:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #5
#    B       ISRCommonRoutine
.align 2
ISRRoutine_6:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #6
#    B       ISRCommonRoutine
.align 2
ISRRoutine_7:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #7
#    B       ISRCommonRoutine
.align 2
ISRRoutine_8:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #8
#    B       ISRCommonRoutine
.align 2
ISRRoutine_9:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #9
#    B       ISRCommonRoutine
.align 2
ISRRoutine_10:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #10
#    B       ISRCommonRoutine
.align 2
ISRRoutine_11:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #11
#    B       ISRCommonRoutine
.align 2
ISRRoutine_12:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #12
#    B       ISRCommonRoutine
.align 2
ISRRoutine_13:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #13
#    B       ISRCommonRoutine
.align 2
ISRRoutine_14:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #14
#    B       ISRCommonRoutine
.align 2
ISRRoutine_15:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #15
#    B       ISRCommonRoutine
.align 2
ISRRoutine_16:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #16
#    B       ISRCommonRoutine
.align 2
ISRRoutine_17:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #17
#    B       ISRCommonRoutine
.align 2
ISRRoutine_18:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #18
#    B       ISRCommonRoutine
.align 2
ISRRoutine_19:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #19
#    B       ISRCommonRoutine
.align 2
ISRRoutine_20:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #20
#    B       ISRCommonRoutine
.align 2
ISRRoutine_21:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #21
#    B       ISRCommonRoutine
.align 2
ISRRoutine_22:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #22
#    B       ISRCommonRoutine
.align 2
ISRRoutine_23:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #23
#    B       ISRCommonRoutine
.align 2
ISRRoutine_24:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #24
#    B       ISRCommonRoutine
.align 2
ISRRoutine_25:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #25
#    B       ISRCommonRoutine
.align 2
ISRRoutine_26:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #26
#    B       ISRCommonRoutine
.align 2
ISRRoutine_27:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #27
#    B       ISRCommonRoutine
.align 2
ISRRoutine_28:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #28
#    B       ISRCommonRoutine
.align 2
ISRRoutine_29:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #29
#    B       ISRCommonRoutine
.align 2
ISRRoutine_30:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #30
#    B       ISRCommonRoutine
.align 2
ISRRoutine_31:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #31
#    B       ISRCommonRoutine
.align 2
ISRRoutine_32:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #32
#    B       ISRCommonRoutine
.align 2
ISRRoutine_33:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #33
#    B       ISRCommonRoutine
.align 2
ISRRoutine_34:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #34
#    B       ISRCommonRoutine
.align 2
ISRRoutine_35:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #35
#    B       ISRCommonRoutine
.align 2
ISRRoutine_36:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #36
#    B       ISRCommonRoutine
.align 2
ISRRoutine_37:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #37
#    B       ISRCommonRoutine
.align 2
ISRRoutine_38:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #38
#    B       ISRCommonRoutine
.align 2
ISRRoutine_39:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #39
#    B       ISRCommonRoutine
.align 2
ISRRoutine_40:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #40
#    B       ISRCommonRoutine
.align 2
ISRRoutine_41:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #41
#    B       ISRCommonRoutine
.align 2
ISRRoutine_42:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #42
#    B       ISRCommonRoutine
.align 2
ISRRoutine_43:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #43
#    B       ISRCommonRoutine
.align 2
ISRRoutine_44:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #44
#    B       ISRCommonRoutine
.align 2
ISRRoutine_45:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #45
#    B       ISRCommonRoutine
.align 2
ISRRoutine_46:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #46
#    B       ISRCommonRoutine
.align 2
ISRRoutine_47:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #47
#    B       ISRCommonRoutine
.align 2
ISRRoutine_48:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #48
#    B       ISRCommonRoutine
.align 2
ISRRoutine_49:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #49
#    B       ISRCommonRoutine
.align 2
ISRRoutine_50:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #50
#    B       ISRCommonRoutine
.align 2
ISRRoutine_51:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #51
#    B       ISRCommonRoutine
.align 2
ISRRoutine_52:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #52
#    B       ISRCommonRoutine
.align 2
ISRRoutine_53:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #53
#    B       ISRCommonRoutine
.align 2
ISRRoutine_54:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #54
#    B       ISRCommonRoutine
.align 2
ISRRoutine_55:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #55
#    B       ISRCommonRoutine
.align 2
ISRRoutine_56:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #56
#    B       ISRCommonRoutine
.align 2
ISRRoutine_57:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #57
#    B       ISRCommonRoutine
.align 2
ISRRoutine_58:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #58
#    B       ISRCommonRoutine
.align 2
ISRRoutine_59:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #59
#    B       ISRCommonRoutine
.align 2
ISRRoutine_60:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #60
#    B       ISRCommonRoutine
.align 2
ISRRoutine_61:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #61
#    B       ISRCommonRoutine
.align 2
ISRRoutine_62:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #62
#    B       ISRCommonRoutine
.align 2
ISRRoutine_63:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #63
#    B       ISRCommonRoutine
.align 2
ISRRoutine_64:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #64
#    B       ISRCommonRoutine
.align 2
ISRRoutine_65:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #65
#    B       ISRCommonRoutine
.align 2
ISRRoutine_66:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #66
#    B       ISRCommonRoutine
.align 2
ISRRoutine_67:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #67
#    B       ISRCommonRoutine
.align 2
ISRRoutine_68:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #68
#    B       ISRCommonRoutine
.align 2
ISRRoutine_69:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #69
#    B       ISRCommonRoutine
.align 2
ISRRoutine_70:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #70
#    B       ISRCommonRoutine
.align 2
ISRRoutine_71:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #71
#    B       ISRCommonRoutine
.align 2
ISRRoutine_72:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #72
#    B       ISRCommonRoutine
.align 2
ISRRoutine_73:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #73
#    B       ISRCommonRoutine
.align 2
ISRRoutine_74:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #74
#    B       ISRCommonRoutine
.align 2
ISRRoutine_75:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #75
#    B       ISRCommonRoutine
.align 2
ISRRoutine_76:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #76
#    B       ISRCommonRoutine
.align 2
ISRRoutine_77:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #77
#    B       ISRCommonRoutine
.align 2
ISRRoutine_78:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #78
#    B       ISRCommonRoutine
.align 2
ISRRoutine_79:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #79
#    B       ISRCommonRoutine
.align 2
ISRRoutine_80:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #80
#    B       ISRCommonRoutine
.align 2
ISRRoutine_81:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #81
#    B       ISRCommonRoutine
.align 2
ISRRoutine_82:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #82
#    B       ISRCommonRoutine
.align 2
ISRRoutine_83:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #83
#    B       ISRCommonRoutine
.align 2
ISRRoutine_84:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #84
#    B       ISRCommonRoutine
.align 2
ISRRoutine_85:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #85
#    B       ISRCommonRoutine
.align 2
ISRRoutine_86:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #86
#    B       ISRCommonRoutine
.align 2
ISRRoutine_87:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #87
#    B       ISRCommonRoutine
.align 2
ISRRoutine_88:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #88
#    B       ISRCommonRoutine
.align 2
ISRRoutine_89:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #89
#    B       ISRCommonRoutine
.align 2
ISRRoutine_90:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #90
#    B       ISRCommonRoutine
.align 2
ISRRoutine_91:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #91
#    B       ISRCommonRoutine
.align 2
ISRRoutine_92:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #92
#    B       ISRCommonRoutine
.align 2
ISRRoutine_93:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #93
#    B       ISRCommonRoutine
.align 2
ISRRoutine_94:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #94
#    B       ISRCommonRoutine
.align 2
ISRRoutine_95:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #95
#    B       ISRCommonRoutine
.align 2
ISRRoutine_96:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #96
#    B       ISRCommonRoutine
.align 2
ISRRoutine_97:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #97
#    B       ISRCommonRoutine
.align 2
ISRRoutine_98:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #98
#    B       ISRCommonRoutine
.align 2
ISRRoutine_99:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #99
#    B       ISRCommonRoutine
.align 2
ISRRoutine_100:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #100
#    B       ISRCommonRoutine
.align 2
ISRRoutine_101:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #101
#    B       ISRCommonRoutine
.align 2
ISRRoutine_102:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #102
#    B       ISRCommonRoutine
.align 2
ISRRoutine_103:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #103
#    B       ISRCommonRoutine
.align 2
ISRRoutine_104:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #104
#    B       ISRCommonRoutine
.align 2
ISRRoutine_105:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #105
#    B       ISRCommonRoutine
.align 2
ISRRoutine_106:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #106
#    B       ISRCommonRoutine
.align 2
ISRRoutine_107:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #107
#    B       ISRCommonRoutine
.align 2
ISRRoutine_108:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #108
#    B       ISRCommonRoutine
.align 2
ISRRoutine_109:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #109
#    B       ISRCommonRoutine
.align 2
ISRRoutine_110:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #110
#    B       ISRCommonRoutine
.align 2
ISRRoutine_111:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #111
#    B       ISRCommonRoutine
.align 2
ISRRoutine_112:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #112
#    B       ISRCommonRoutine
.align 2
ISRRoutine_113:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #113
#    B       ISRCommonRoutine
.align 2
ISRRoutine_114:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #114
#    B       ISRCommonRoutine
.align 2
ISRRoutine_115:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #115
#    B       ISRCommonRoutine
.align 2
ISRRoutine_116:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #116
#    B       ISRCommonRoutine
.align 2
ISRRoutine_117:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #117
#    B       ISRCommonRoutine
.align 2
ISRRoutine_118:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #118
#    B       ISRCommonRoutine
.align 2
ISRRoutine_119:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #119
#    B       ISRCommonRoutine
.align 2
ISRRoutine_120:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #120
#    B       ISRCommonRoutine
.align 2
ISRRoutine_121:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #121
#    B       ISRCommonRoutine
.align 2
ISRRoutine_122:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #122
#    B       ISRCommonRoutine
.align 2
ISRRoutine_123:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #123
#    B       ISRCommonRoutine
.align 2
ISRRoutine_124:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #124
#    B       ISRCommonRoutine
.align 2
ISRRoutine_125:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #125
#    B       ISRCommonRoutine
.align 2
ISRRoutine_126:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #126
#    B       ISRCommonRoutine
.align 2
ISRRoutine_127:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    MOV     lr, #127
#    B       ISRCommonRoutine
.align 2
ESAL_AR_ISR_System_SP:
    .long ESAL_GE_STK_System_SP
ESAL_AR_ISR_Executing:
    .long ESAL_GE_ISR_Executing
ESAL_AR_ISR_OS_Entry:
    .long ESAL_GE_ISR_OS_Entry
ESAL_AR_ISR_OS_Nested_Entry:
    .long ESAL_GE_ISR_OS_Nested_Entry
ESAL_AR_ISR_Unsol_Switch_Req:
    .long ESAL_GE_STK_Unsol_Switch_Req
NO_CONTEXT_SWITCH_LOGGING:
    .long No_Context_Switch
ISRCommonRoutine:
    sdbbp
    jr $31
#    ESAL_AR_STK_MIN_INT_SAVE
    
#    CPSID   aif, #IRQ_MODE
#    MOV     r0, lr               # vector ID
#    CPSID   aif, #SYS_MODE
#    MOV     r1, sp               # preempted task SP
    
    # Check if this interrupt occurred during execution of
    # another interrupt (nested)
#    LDR     r2,ESAL_AR_ISR_Executing
#    LDR     r2,[r2]
#    CMP     r2, #0
#    LDREQ   sp,ESAL_AR_ISR_System_SP
#    LDREQ   sp,[sp]
#    LDREQ   r2,ESAL_AR_ISR_OS_Entry
#    LDRNE   r2,ESAL_AR_ISR_OS_Nested_Entry
#    LDR     r2,[r2]
#    ADRNE   lr,ESAL_AR_ISR_Nested_IRQ_Restore
#    ADREQ   lr,ESAL_AR_ISR_NonNested_IRQ_Restore
#if defined(__THUMB2_UNIFIED__)    
#    ORR     lr, lr, #1
#endif    
#    BX      r2
ESAL_AR_ISR_NonNested_IRQ_Restore:
#    LDR     r2,ESAL_AR_ISR_Unsol_Switch_Req
#    LDR     r2,[r2]
#    CMP     r2,#0
    # Perform context switch if required
#    BNE     ESAL_AR_STK_Unsolicited_Switch
    # No context switch required, restore minimal context and
    # return to point of interrupt
    
    # Get system stack pointer in r0
#    LDR     r0,[r0]
    
    # Save the r0 to the stack
#    PUSH    {r0}
#    LDR     r0,NO_CONTEXT_SWITCH_LOGGING
#    BLX     r0
    
    # Restore r0 from the stack
#    POP     {r0}
    
    # Restore minimum registers from stack and return from interrupt
#    ESAL_AR_STK_MIN_INT_RESTORE
    
ESAL_AR_ISR_Nested_IRQ_Restore:
    sdbbp
    jr $31
    # Put the stack pointer in r0
#    MOV   r0,sp
    
    # Restore minimum registers from stack and return from interrupt
#    ESAL_AR_STK_MIN_INT_RESTORE
.size ISRRoutines, .-ISRRoutines

#.thumb
.text
#.syntax unified
#.thumb_func
.align 2
ESAL_AR_ISR_System_SP_Spurious:
    .long ESAL_GE_STK_System_SP
ESAL_AR_ISR_Executing_Spurious:
    .long ESAL_GE_ISR_Executing
ESAL_AR_ISR_OS_Entry_Spurious:
    .long ESAL_GE_ISR_OS_Entry
ESAL_AR_ISR_OS_Nested_Entry_Spurious:
    .long ESAL_GE_ISR_OS_Nested_Entry
ESAL_AR_ISR_Unsol_Switch_Req_Spurious:
    .long ESAL_GE_STK_Unsol_Switch_Req
NO_CONTEXT_SWITCH_LOGGING_Spurious:
    .long No_Context_Switch
ESAL_AR_STK_Unsolicited_Switch_Spurious:
    .long ESAL_AR_STK_Unsolicited_Switch

ISRRoutine_Default:
    sdbbp
    jr $31
#    SUB     lr,lr,#4
#    SRSDB   sp!, #SYS_MODE
#    ESAL_AR_STK_MIN_INT_SAVE
#    MOV     r1, sp               # preempted task SP
#    LDR     r2,=MDCIRQ_INTID_SPUR
#    LDR     r0,[r2]                    
    # Check if this interrupt occurred during execution of
    # another interrupt (nested)
#    LDR     r2,ESAL_AR_ISR_Executing_Spurious
#    LDR     r2,[r2]
#    CMP     r2, #0
#    LDREQ   sp,ESAL_AR_ISR_System_SP_Spurious
#    LDREQ   sp,[sp]
#    LDREQ   r2,ESAL_AR_ISR_OS_Entry_Spurious
#    LDRNE   r2,ESAL_AR_ISR_OS_Nested_Entry_Spurious
#    LDR     r2,[r2]
#    ADRNE   lr,ESAL_AR_ISR_Nested_IRQ_Restore_Spurious
#    ADREQ   lr,ESAL_AR_ISR_NonNested_IRQ_Restore_Spurious
#if defined(__THUMB2_UNIFIED__)    
#    ORR     lr, lr, #1
#endif    
#    BX      r2
ESAL_AR_ISR_NonNested_IRQ_Restore_Spurious:
#    LDR     r2,ESAL_AR_ISR_Unsol_Switch_Req_Spurious
#    LDR     r2,[r2]
#    CMP     r2,#0
    # Perform context switch if required
#    LDRNE   r3,ESAL_AR_STK_Unsolicited_Switch_Spurious
#    BXNE    r3
    # No context switch required, restore minimal context and
    # return to point of interrupt
    
    # Get system stack pointer in r0
#    LDR     r0,[r0]
    
    # Save the r0 to the stack
#    PUSH    {r0}
#    LDR     r0, NO_CONTEXT_SWITCH_LOGGING_Spurious
#    BLX     r0
    
    # Restore r0 from the stack
#    POP     {r0}
    
    # Restore minimum registers from stack and return from interrupt
#    ESAL_AR_STK_MIN_INT_RESTORE
    
ESAL_AR_ISR_Nested_IRQ_Restore_Spurious:
    sdbbp
    jr $31
    # Put the stack pointer in r0
#    MOV   r0,sp
    
    # Restore minimum registers from stack and return from interrupt
#    ESAL_AR_STK_MIN_INT_RESTORE
.size ISRRoutine_Default, .-ISRRoutine_Default

.end

