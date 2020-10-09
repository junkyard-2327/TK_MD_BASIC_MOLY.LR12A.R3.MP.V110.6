#ifndef __DRV_PCMON_EX_H__
#define __DRV_PCMON_EX_H__

.macro PDAMON_STOP_ASM
.set noreorder
    lui   k1, 0xA021
    addiu k1, k1, 2048
    lw    k0, 0(k1)
    ins   k0, zero, 0, 8
    ori   k0, k0, 0x22
    sw    k0, 0(k1)
    lw    k0, 0(k1)
.endm PDAMON_STOP_ASM

#endif // __DRV_PCMON_EX_H__
