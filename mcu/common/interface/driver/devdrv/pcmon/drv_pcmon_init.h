#ifndef __DRV_PCMON_INIT_H__
#define __DRV_PCMON_INIT_H__

#define PC_NULL_ADDR      0x0
#define PC_MATCH_3_ADDR   0xA021088C
#define PDAMON_INIT_MAGIC 0x444F4E45

.section "MCURW_HWRO_DNC_NOINIT"
pdamon_init_flag:
    .word 0
.size pdamon_init_flag,.-pdamon_init_flag

.macro PDAMON_CONFIG
.set push 
.set nomips16
#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
PDAMON_Check_Init_Flag:
    la    t1, pdamon_init_flag
    lw    t0, 0(t1)
    li    t1, PDAMON_INIT_MAGIC
    beq   t0, t1, PDAMON_Init_Done
    nop
PDAMON_PreSet_NULL_Protection:
    la    t1, PC_MATCH_3_ADDR
    li    t0, PC_NULL_ADDR
    sw    t0, 0(t1)
    lw    t0, 0(t1)
PDAMON_PreSet_Event_Mask:
    lui   t1, 0xA021
    addiu t1, t1, 0x800
    lw    t0, 0(t1)
    ins   t0, zero, 0, 8
    ori   t0, t0, 0x22
    sw    t0, 0(t1)
    lw    t0, 0(t1)
    lw    t0, 0x10(t1)
    ori   t0, t0, 0x200
    sw    t0, 0x10(t1)
    lw    t0, 0x10(t1)
    lw    t0, 0(t1)
    ins   t0, zero, 0, 8
    ori   t0, t0, 0x11
    sw    t0, 0(t1)
    lw    t0, 0(t1)
PDAMON_Init_Done:
    la    t1, pdamon_init_flag
    li    t0, PDAMON_INIT_MAGIC
    sw    t0, 0(t1)
    lw    t0, 0(t1)
#endif
.set pop
.endm PDAMON_CONFIG

#endif // __DRV_PCMON_INIT_H__
