#ifndef __SST_TEMP_EX_HANDLERS_H__
#define __SST_TEMP_EX_HANDLERS_H__


.macro INSTALL_TEMP_EXCEPTION_VECTOR
.set noreorder
    la      a0, INT_TEMP_general_ex_vector
    ins     a0, zero, 0, 12
    ori     a0, a0, EBASE_WG
    mtc0    a0, C0_EBASE
    ehb

    li      a0, 0
    li      a1, 0x1
    ins     a0, a1, CFG5_CV_SHIFT, 1
    ins     a0, a1, CFG5_K_SHIFT, 1
    mtc0    a0, C0_CONFIG5
    ehb

    li      a0, 0x7
    mtc0    a0, C0_WATCHHI
    mtc0    zero, C0_WATCHLO
    mtc0    a0, C0_WATCHHI, 1
    mtc0    zero, C0_WATCHLO, 1
    mtc0    a0, C0_WATCHHI, 2
    mtc0    zero, C0_WATCHLO, 2
    mtc0    a0, C0_WATCHHI, 3
    mtc0    zero, C0_WATCHLO, 3
    
    mtc0    zero, C0_CAUSE
	mtc0    zero, C0_COMPARE
    mtc0    zero, C0_STATUS       // write C0_STATUS
    ehb
.endm INSTALL_TEMP_EXCEPTION_VECTOR

.macro RESET_EXCEPTION_SP_ARRAY
.set noreorder
    /* Only Core0 VPE0 do exception stack reset. SST_Exception_SP is set to zero for exception vector
     * to know if we are in early boot flow or in dormant flow.
     */
    mfc0    a0, C0_EBASE
    ext     a0, a0, 0, 4
    bgtz    a0, INT_excep_sp_reset_done
    nop

    li      a0, 0xFFFFFFFF
    la      a1, dormant_exception_area_ptr
    sw      a0, 0(a1)


INT_excep_sp_reset_done:
.endm RESET_EXCEPTION_SP_ARRAY

#endif // __SST_TEMP_EX_HANDLERS_H__
