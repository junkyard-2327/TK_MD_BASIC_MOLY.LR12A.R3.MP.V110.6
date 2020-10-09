/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

#include <regdef.h> 

#ifndef __mips16
    .type itc_hw_init, %function
    .global itc_hw_init
itc_hw_init:
    .set noreorder
    .set noat

    mfc0    t0, $26
    andi    t1, t1, 0
    lui     t1, 0x0400
    or      t1, t0, t1
    ins     t1, zero, 28, 2 /* clear WST, SPR bit, only ITC bit is set */
    mtc0    t1, $26
    ehb
    /* Cache operations now routed to ITC block */

    mtc0    a0, $28, 2
    ehb
    cache   9, 8($0)
    ehb

    /* Read ITC block configuration */
    cache   5, 8($0)
    ehb
    mfc0    t1, $28, 2
    sw      t1, 0(a2)
	
    mtc0    a1, $28, 2
    ehb
    cache   9, 0($0)
    ehb

    /* Read ITC block base register */
    cache   5, 0($0)
    ehb
    mfc0    t1, $28, 2
    sw      t1, 0(a3)
	
    mtc0    t0, $26
    /* Cache operations now routed normaly */
    jr      ra
    nop

    .set at
    .set reorder
    .size itc_hw_init, .-itc_hw_init


    .section "L2CACHE_LOCK_ROCODE", "ax"
    .type itc_cell_read, %function
    .global itc_cell_read
itc_cell_read:
    .set noreorder
    .set noat

    or      a0, a1, a0
    jr      ra
    lw      v0, 0(a0)

    .set at
    .set reorder
    .size itc_cell_read, .-itc_cell_read

    .type itc_cell_write, %function
    .global itc_cell_write
itc_cell_write:
    .set noreorder
    .set noat

    or      a0, a1, a0
    sync
    jr      ra
    sw      a2, 0(a0)

    .set at
    .set reorder
    .size itc_cell_write, .-itc_cell_write

#else
    .align 2
    .type itc_hw_init, %function
    .global itc_hw_init
itc_hw_init:
    .set noreorder
    .set noat

    save    16, s0-s1
    mfc0    s0, $26
    andi    s1, 0
    lui     s1, 0x0400
    or      s1, s0
    ins     s1, zero, 28, 2 /* clear WST, SPR bit, only ITC bit is set */
    mtc0    s1, $26
    ehb
    /* Cache operations now routed to ITC block */

    mtc0    a0, $28, 2
    ehb
    li      a0, 0
    cache   9, 8(a0)
    ehb

    /* Read ITC block configuration */
    cache   5, 8(a0)
    ehb
    mfc0    s1, $28, 2
    sw      s1, 0(a2)

    mtc0    a1, $28, 2
    ehb
    cache   9, 0(a0)
    ehb

    /* Read ITC block base register */
    cache   5, 0(a0)
    ehb
    mfc0    s1, $28, 2
    sw      s1, 0(a3)

    mtc0    s0, $26
    /* Cache operations now routed normaly */
    restore 16, s0-s1
    jr      ra
    nop

    .set at
    .set reorder
    .size itc_hw_init, .-itc_hw_init


    .section "L2CACHE_LOCK_ROCODE", "ax"
    .align 2
    .type itc_cell_read, %function
    .global itc_cell_read
itc_cell_read:
    .set noreorder
    .set noat

    or      a0, a1
    jr      ra
    lw      v0, 0(a0)

    .set at
    .set reorder
    .size itc_cell_read, .-itc_cell_read

    .align 2
    .type itc_cell_write, %function
    .global itc_cell_write
itc_cell_write:
    .set noreorder
    .set noat

    or      a0, a1
    sync
    jr      ra
    sw      a2, 0(a0)

    .set at
    .set reorder
    .size itc_cell_write, .-itc_cell_write

#endif
