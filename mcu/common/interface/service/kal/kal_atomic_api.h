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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   kal_atomic_api.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file provides KAL public API prototypes
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 *
 ****************************************************************************/

#ifndef _KAL_ATOMIC_API_H
#define _KAL_ATOMIC_API_H

/*******************************************************************************
 * Common Header File Include
 *******************************************************************************/
#ifndef GEN_FOR_PC
#include <stdio.h>
#include <string.h>
#endif

#include "kal_general_types.h"
#include "kal_public_defs.h"

#ifdef __cplusplus
extern "C" {
#endif

/* DOM-NOT_FOR_SDK-BEGIN */

/* These are atomic primitives that are used to implemented atomic macro api below. 
   These are not intended for normal use */
void kal_atomic_set_int(kal_atomic_int32 *var, int value);
int kal_atomic_read_int(kal_atomic_int32 *var);
void kal_atomic_update(kal_atomic_int32 *var, kal_int32 add_value, kal_int32 and_mask);
int kal_atomic_update_return(kal_atomic_int32 *var, kal_int32 add_value, kal_int32 and_mask);
void kal_atomic_toggle_bitmask_int(kal_atomic_int32 *var, kal_uint32 mask);
int kal_atomic_toggle_bitmask_return_int(kal_atomic_int32 *var, kal_uint32 mask);
int kal_atomic_swap_int(kal_atomic_int32 *var, kal_int32 new_value);
int kal_atomic_cas(kal_atomic_int32 *var, kal_int32 compare_value, kal_int32 new_value);
int kal_atomic_ici(kal_atomic_int32 *idx_var, kal_int32 buff_size);
int kal_atomic_dci(kal_atomic_int32 *idx_var, kal_int32 buff_size);
int kal_atomic_sig(kal_atomic_int32 *var, kal_int32 compare_value);
int kal_atomic_sil(kal_atomic_int32 *var, kal_int32 compare_value);


/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_init
 * DESCRIPTION
 *  Set value to variable. Meant to be used only during init. 
 * PARAMETERS
 *  var_ptr  : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  value    : [IN] value to be set
 * RETURNS
 *  -
 * NOTE
 *  This function will not perform a memory barrier.
 ******************************************************************************/
#define kal_atomic_init(var_ptr, value) do { *(var_ptr) = (value); }while(0)
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_set
 * DESCRIPTION
 *  Set value to a variable atomically. 
 * PARAMETERS
 *  var_ptr  : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  value    : [IN] value to be set
 * RETURNS
 *  -
 * NOTE
 *  This function will perform a memory barrier after setting the value.
 ******************************************************************************/
#define kal_atomic_set(var_ptr, value) kal_atomic_set_int((kal_atomic_int32 *)(var_ptr), (value))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_read
 * DESCRIPTION
 *  Read variable value atomically.
 * PARAMETERS
 *  var_ptr  : [IN] pointer to source (kal_atomic_int32 or kal_atomic_uint32 variable)
 * RETURNS
 *  Success: [OUT] value at var_ptr
 * NOTE
 *  This function will perform a memory barrier before read.
 ******************************************************************************/
#define kal_atomic_read(var_ptr) kal_atomic_read_int((kal_atomic_int32 *)(var_ptr))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_add
 * DESCRIPTION
 *  Add value to a variable atomically.
 * PARAMETERS
 *  var_ptr  : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  value    : [IN] value to be added
 * RETURNS
 *  -
 * NOTE
 *  This function will not perform a memory barrier.
 ******************************************************************************/
#define kal_atomic_add(var_ptr, value) kal_atomic_update((kal_atomic_int32 *)(var_ptr), (value), ~0)
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_add_return
 * DESCRIPTION
 *  Add value to a variable atomically. Return the new value.
 * PARAMETERS
 *  var_ptr  : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  value    : [IN] value to be added
 * RETURNS
 *  Success: [OUT] new value at var_ptr
 * NOTE
 *  This function will perform a memory barrier before and after the add operation.
 ******************************************************************************/
#define kal_atomic_add_return(var_ptr, value) \
    (kal_atomic_update_return((kal_atomic_int32 *)(var_ptr), (value), ~0) + (value))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_sub
 * DESCRIPTION
 *  Subtract value from a variable atomically.
 * PARAMETERS
 *  var_ptr  : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  value    : [IN] value to be subtracted
 * RETURNS
 *  -
 * NOTE
 *  This function will not perform a memory barrier.
 ******************************************************************************/
#define kal_atomic_sub(var_ptr, value) kal_atomic_update((kal_atomic_int32 *)(var_ptr), -(value), ~0)
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_sub_return
 * DESCRIPTION
 *  Subtract value from a variable atomically.
 * PARAMETERS
 *  var_ptr  : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  value    : [IN] value to be subtracted
 * RETURNS
 *  Success: [OUT] new value at var_ptr
 * NOTE
 *  This function will perform a memory barrier before and after the substract operation.
 ******************************************************************************/
#define kal_atomic_sub_return(var_ptr, value) \
    (kal_atomic_update_return((kal_atomic_int32 *)(var_ptr), -(value), ~0) - (value))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_inc
 * DESCRIPTION
 *  Increment variable atomically.
 * PARAMETERS
 *  var_ptr  : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 * RETURNS
 *  -
 * NOTE
 *  This function will not perform a memory barrier.
 ******************************************************************************/
#define kal_atomic_inc(var_ptr) kal_atomic_add((var_ptr), 1)
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_inc_return
 * DESCRIPTION
 *  Increment value atomically. Return the new value.
 * PARAMETERS
 *  var_ptr  : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 * RETURNS
 *  Success: [OUT] new value at var_ptr
 * NOTE
 *  This function will perform a memory barrier before and after the increment operation.
 ******************************************************************************/
#define kal_atomic_inc_return(var_ptr) kal_atomic_add_return((var_ptr), 1)
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_dec
 * DESCRIPTION
 *  Decrement variable atomically.
 * PARAMETERS
 *  var_ptr  : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 * RETURNS
 *  -
 * NOTE
 *  This function will not perform a memory barrier.
 ******************************************************************************/
#define kal_atomic_dec(var_ptr) kal_atomic_sub((var_ptr), 1)
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_dec_return
 * DESCRIPTION
 *  Decrement value atomically. Return the new value.
 * PARAMETERS
 *  var_ptr  : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 * RETURNS
 *  Success: [OUT] new value at var_ptr
 * NOTE
 *  This function will perform a memory barrier before and after the decrement operation.
 ******************************************************************************/
#define kal_atomic_dec_return(var_ptr) kal_atomic_sub_return((var_ptr), 1)
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_add_compare
 * DESCRIPTION
 *  Add value to a variable atomically and compare if result is equal to new_value.
 * PARAMETERS
 *  var_ptr   : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  value     : [IN] value to be added
 *  new_value : [IN] value to be compared with
 * RETURNS
 *  Success: [OUT] KAL_TRUE if new value at var_ptr is equal to new_value, otherwise KAL_FALSE
 * NOTE
 *  This function will perform a memory barrier before and after the add operation.
 ******************************************************************************/
#define kal_atomic_add_compare(var_ptr, value, new_value) \
    (kal_atomic_add_return((var_ptr), (value)) == (new_value))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_inc_compare
 * DESCRIPTION
 *  Increment variable value atomically and compare if result is equal to new_value.
 * PARAMETERS
 *  var_ptr   : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  new_value : [IN] value to be compared with
 * RETURNS
 *  Success: [OUT] KAL_TRUE if new value at var_ptr is equal to new_value, otherwise KAL_FALSE
 * NOTE
 *  This function will perform a memory barrier before and after the increment operation.
 ******************************************************************************/
#define kal_atomic_inc_compare(var_ptr, new_value) \
    (kal_atomic_add_return((var_ptr), 1) == (new_value))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_sub_compare
 * DESCRIPTION
 *  Subtract value from a variable atomically and compare if result is equal to new_value.
 * PARAMETERS
 *  var_ptr   : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  value     : [IN] value to be subtracted
 *  new_value : [IN] value to be compared with
 * RETURNS
 *  Success: [OUT] KAL_TRUE if new value at var_ptr is equal to new_value, otherwise KAL_FALSE
 * NOTE
 *  This function will perform a memory barrier before and after the substract operation.
 ******************************************************************************/
#define kal_atomic_sub_compare(var_ptr, value, new_value) \
    (kal_atomic_sub_return((var_ptr), (value)) == (new_value))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_dec_compare
 * DESCRIPTION
 *  Decrement value from a variable atomically and compare if result is equal to new_value.
 * PARAMETERS
 *  var_ptr   : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  new_value : [IN] value to be compared with
 * RETURNS
 *  Success: [OUT] KAL_TRUE if new value at var_ptr is equal to new_value, otherwise KAL_FALSE
 * NOTE
 *  This function will perform a memory barrier before and after the decrement operation.
 ******************************************************************************/
#define kal_atomic_dec_compare(var_ptr, new_value) \
    (kal_atomic_sub_return((var_ptr), 1) == (new_value))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_set_bitmask
 * DESCRIPTION
 *  Set a mask of bits in a variable atomically.
 * PARAMETERS
 *  var_ptr   : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  mask      : [IN] bit mask to be set
 * RETURNS
 *  -
 * NOTE
 *  This function will not perform a memory barrier.
 ******************************************************************************/
#define kal_atomic_set_bitmask(var_ptr, mask) \
    kal_atomic_update((kal_atomic_int32 *)(var_ptr), (mask), ~(mask))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_set_bitmask_return
 * DESCRIPTION
 *  Set a mask of bits in a variable atomically and return the old variable value.
 * PARAMETERS
 *  var_ptr   : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  mask      : [IN] bit mask to be set
 * RETURNS
 *  Success: [OUT] old value at var_ptr
 * NOTE
 *  This function will perform a memory barrier before and after the bit mask set.
 ******************************************************************************/
#define kal_atomic_set_bitmask_return(var_ptr, mask) \
    kal_atomic_update_return((kal_atomic_int32 *)(var_ptr), (mask), ~(mask))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_set_bit
 * DESCRIPTION
 *  Set a bit in a variable atomically.
 * PARAMETERS
 *  var_ptr    : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  bit_nbr    : [IN] bit number to be set
 * RETURNS
 *  -
 * NOTE
 *  This function will not perform a memory barrier.
 ******************************************************************************/
#define kal_atomic_set_bit(var_ptr, bit_nbr) \
    kal_atomic_set_bitmask((var_ptr), (1<<(bit_nbr)))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_set_bit_return
 * DESCRIPTION
 *  Set bit in a variable atomically and return the old value of bit
 * PARAMETERS
 *  var_ptr    : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  bit_nbr    : [IN] bit number to be set
 * RETURNS
 *  Success: [OUT] old value of bit
 * NOTE
 *  This function will perform a memory barrier before and after the bit set operation.
 ******************************************************************************/
#define kal_atomic_set_bit_return(var_ptr, bit_nbr) \
    ((kal_atomic_set_bitmask_return((var_ptr), (1<<(bit_nbr))) & (1<<(bit_nbr))) != 0)
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_clear_bitmask
 * DESCRIPTION
 *  Clear mask of bits in a variable atomically.
 * PARAMETERS
 *  var_ptr   : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  mask      : [IN] bit mask to be cleared
 * RETURNS
 *  -
 * NOTE
 *  This function will not perform a memory barrier.
 ******************************************************************************/
#define kal_atomic_clear_bitmask(var_ptr, mask) \
    kal_atomic_update((kal_atomic_int32 *)(var_ptr), 0, ~(mask))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_clear_bitmask_return
 * DESCRIPTION
 *  Clear mask of bits in a variable atomically and return the old variable value.
 * PARAMETERS
 *  var_ptr   : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  mask      : [IN] bit mask to be cleared
 * RETURNS
 *  Success: [OUT] old value at var_ptr
 * NOTE
 *  This function will perform a memory barrier before and after the bit mask clear operation.
 ******************************************************************************/
#define kal_atomic_clear_bitmask_return(var_ptr, mask) \
    kal_atomic_update_return((kal_atomic_int32 *)(var_ptr), 0, ~(mask))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_clear_bit
 * DESCRIPTION
 *  Clear a bit in a variable atomically.
 * PARAMETERS
 *  var_ptr    : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  bit_nbr    : [IN] bit number to be cleared
 * RETURNS
 *  -
 * NOTE
 *  This function will not perform a memory barrier.
 ******************************************************************************/
#define kal_atomic_clear_bit(var_ptr, bit_nbr) \
    kal_atomic_clear_bitmask((var_ptr), (1<<(bit_nbr)))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_clear_bit_return
 * DESCRIPTION
 *  Clear a bit in a variable atomically and return the old value of bit
 * PARAMETERS
 *  var_ptr    : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  mask       : [IN] bit number to be cleared
 * RETURNS
 *  Success: [OUT] old value of bit
 * NOTE
 *  This function will perform a memory barrier before and after the bit clear operation.
 ******************************************************************************/
#define kal_atomic_clear_bit_return(var_ptr, bit_nbr) \
    ((kal_atomic_clear_bitmask_return((var_ptr), (1<<(bit_nbr))) & (1<<(bit_nbr))) != 0)
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_toggle_bitmask
 * DESCRIPTION
 *  Toggle mask of bits in a variable atomically.
 * PARAMETERS
 *  var_ptr    : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  mask       : [IN] bit mask to be toggled
 * RETURNS
 *  -
 * NOTE
 *  This function will not perform a memory barrier.
 ******************************************************************************/
#define kal_atomic_toggle_bitmask(var_ptr, mask) \
    kal_atomic_toggle_bitmask_int((kal_atomic_int32 *)(var_ptr), (mask))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_toggle_bitmask_return
 * DESCRIPTION
 *  Toggle mask of bits in a variable atomically and return the old value of bit
 * PARAMETERS
 *  var_ptr    : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  mask       : [IN] bit mask to be toggled
 * RETURNS
 *  Success: [OUT] old value of bit
 * NOTE
 *  This function will perform a memory barrier before and after the bit mask toggle operation.
 ******************************************************************************/
#define kal_atomic_toggle_bitmask_return(var_ptr, bitmask) \
    kal_atomic_toggle_bitmask_return_int((kal_atomic_int32 *)(var_ptr), (bitmask))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_toggle_bit
 * DESCRIPTION
 *  Toggle bit in a variable atomically.
 * PARAMETERS
 *  var_ptr    : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  mask       : [IN] bit number to be toggled
 * RETURNS
 *  -
 * NOTE
 *  This function will not perform a memory barrier.
 ******************************************************************************/
#define kal_atomic_toggle_bit(var_ptr, bit_nbr) \
    kal_atomic_toggle_bitmask((var_ptr), (1<<(bit_nbr)))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_toggle_bit_return
 * DESCRIPTION
 *  Toggle bit in a variable atomically and return the old value of bit
 * PARAMETERS
 *  var_ptr    : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  mask       : [IN] bit number to be toggled
 * RETURNS
 *  Success: [OUT] old value of bit
 * NOTE
 *  This function will perform a memory barrier before and after the bit toggle operation.
 ******************************************************************************/
#define kal_atomic_toggle_bit_return(var_ptr, bit_nbr) \
    ((kal_atomic_toggle_bitmask_return((var_ptr), (1<<(bit_nbr))) & (1<<(bit_nbr))) != 0)
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_clear_set_bitmask
 * DESCRIPTION
 *  Clear a bit mask and then set another bit mask in a variable atomically.
 * PARAMETERS
 *  var_ptr    : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  clear_mask : [IN] bit mask to be cleared
 *  set_mask   : [IN] bit mask to be set
 * RETURNS
 *  -
 * NOTE
 *  This function will not perform a memory barrier.
 ******************************************************************************/
#define kal_atomic_clear_set_bitmask(var_ptr, clear_mask, set_mask) \
    kal_atomic_update((kal_atomic_int32 *)(var_ptr), (set_mask), ~((clear_mask)|(set_mask)))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_clear_set_bitmask_return
 * DESCRIPTION
 *  Clear a bit mask and then set another bit mask in a variable atomically.
 *  Return the old variable value.
 * PARAMETERS
 *  var_ptr    : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  clear_mask : [IN] bit mask to be cleared
 *  set_mask   : [IN] bit mask to be set
 * RETURNS
 *  Success: [OUT] old value at var_ptr
 * NOTE
 *  This function will perform a memory barrier before and after the bitmask set and clear operation.
 ******************************************************************************/
#define kal_atomic_clear_set_bitmask_return(var_ptr, clear_mask, set_mask) \
    kal_atomic_update_return((kal_atomic_int32 *)(var_ptr), (set_mask), ~((clear_mask)|(set_mask)))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_clear_set_bit
 * DESCRIPTION
 *  Clear a bit and then set another bit in a variable atomically.
 * PARAMETERS
 *  var_ptr       : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  clear_bit_nbr : [IN] bit number to be cleared
 *  set_bit_nbr   : [IN] bit number to be set
 * RETURNS
 *  -
 * NOTE
 *  This function will not perform a memory barrier.
 ******************************************************************************/
#define kal_atomic_clear_set_bit(var_ptr, clear_bit_nbr, set_bit_nbr) \
    kal_atomic_clear_set_bitmask((var_ptr), (1<<(clear_bit_nbr)), (1<<(set_bit_nbr)))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_and_bitmask
 * DESCRIPTION
 *  Apply a bitwise AND operation with a given bit mask to a variable atomically.
 * PARAMETERS
 *  var_ptr    : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  mask       : [IN] bit mask to be ANDed
 * RETURNS
 *  -
 * NOTE
 *  This function will not perform a memory barrier.
 ******************************************************************************/
#define kal_atomic_and_bitmask(var_ptr, mask) \
    kal_atomic_update((kal_atomic_int32 *)(var_ptr), 0, (mask))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_and_bitmask_return
 * DESCRIPTION
 *  Apply a bitwise AND operation with a given bit mask to a variable atomically.
 *  Return the old variable value.
 * PARAMETERS
 *  var_ptr    : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  mask       : [IN] bit mask to be ANDed
 * RETURNS
 *  Success: [OUT] old value at var_ptr
 * NOTE
 *  This function will perform a memory barrier before and after the AND operation.
 ******************************************************************************/
#define kal_atomic_and_bitmask_return(var_ptr, mask) \
    kal_atomic_update_return((kal_atomic_int32 *)(var_ptr), 0, (mask))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_swap_return
 * DESCRIPTION
 *  Swap a new value atomically with the value in given variable. Return the old variable value.
 * PARAMETERS
 *  var_ptr    : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  new_value  : [IN] new value to be swapped
 * RETURNS
 *  Success: [OUT] old value at var_ptr
 * NOTE
 *  This function will perform a memory barrier before and after the swap operation.
 ******************************************************************************/
#define kal_atomic_swap_return(var_ptr, new_value) \
    kal_atomic_swap_int((kal_atomic_int32 *)(var_ptr), (new_value))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_compare_and_swap_return
 * DESCRIPTION
 *  Swap a new value atomically with the value in given variable, if the current variable value
 *  is equal to compare_value. Return the old variable value.
 * PARAMETERS
 *  var_ptr    : [IN] pointer to destination (kal_atomic_int32 or kal_atomic_uint32 variable)
 *  value      : [IN] value to be compared with
 *  new_value  : [IN] value to be swapped
 * RETURNS
 *  Success: [OUT] old value at var_ptr
 * NOTE
 *  This function will perform a memory barrier before and after the compare and swap operation.
 ******************************************************************************/
#define kal_atomic_compare_and_swap_return(var_ptr, value, new_value) \
    kal_atomic_cas((kal_atomic_int32 *)(var_ptr), (value), (new_value))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_inc_circular_index
 * DESCRIPTION
 *  Increments index value by one and wraps to 0 if index reaches buffer size.
 *  Return current value of index
 * PARAMETERS
 *  idx_ptr    : [IN] pointer to index variable
 *  buf_size   : [IN] size of buffer (wraparound point)
 * RETURNS
 *  Success: [OUT] current value of index (before inc)
 * NOTE
 *  Does not have memory barrier
 ******************************************************************************/
#define kal_atomic_inc_circular_index(idx_ptr, buff_size)\
    kal_atomic_ici((kal_atomic_int32 *)(idx_ptr), (buff_size))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_dec_circular_index
 * DESCRIPTION
 *  Decrements index value by one and wraps to max vaule (buffer size - 1) if index reaches -1.
 *  Return current value of index
 * PARAMETERS
 *  idx_ptr    : [IN] pointer to index variable
 *  buf_size   : [IN] size of buffer (wraparound point)
 * RETURNS
 *  Success: [OUT] current value of index (before inc)
 * NOTE
 *  Does not have memory barrier
 ******************************************************************************/
#define kal_atomic_dec_circular_index(idx_ptr, buff_size)\
    kal_atomic_dci((kal_atomic_int32 *)(idx_ptr), (buff_size))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_set_if_greater
 * DESCRIPTION
 *  Set new value atomically in to variable if new value is greater than old value.
 *  Return value set to variable
 * PARAMETERS
 *  var_ptr    : [IN] pointer to destination(kal_atomic_int32 or kal_atomic_uint32 variable)
 *  value      : [IN] value to be compared
 * RETURNS
 *  Success: [OUT] final value of variable
 * NOTE
 *  Does not have memory barrier
 ******************************************************************************/
#define kal_atomic_set_if_greater(var_ptr, value)\
    kal_atomic_sig((kal_atomic_int32 *)(var_ptr), (value))
/*******************************************************************************
 * <GROUP Synchronous>
 *
 * FUNCTION
 *  kal_atomic_set_if_less
 * DESCRIPTION
 *  Set new value atomically in to variable if new value is less than old value.
 *  Return value set to variable
 * PARAMETERS
 *  var_ptr    : [IN] pointer to destination(kal_atomic_int32 or kal_atomic_uint32 variable)
 *  value      : [IN] value to be compared
 * RETURNS
 *  Success: [OUT] final value of variable
 * NOTE
 *  Does not have memory barrier
 ******************************************************************************/
#define kal_atomic_set_if_less(var_ptr, value)\
    kal_atomic_sil((kal_atomic_int32 *)(var_ptr), (value))

/* DOM-NOT_FOR_SDK-BEGIN */

#ifdef __cplusplus
}
#endif

#endif  /* _KAL_ATOMIC_API_H */
