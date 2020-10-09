/*************************************************************
*
* This Software is the property of VIA Telecom, Inc. and may only be used pursuant to a license from VIA Telecom, Inc.
*
* Any unauthorized use inconsistent with the terms of such license is strictly prohibited.
*
* Copyright (c) 1998-2010 VIA Telecom, Inc.  All rights reserved.
*
*************************************************************/
#ifndef SYSDEFS_H
#define SYSDEFS_H
#include "kal_public_defs.h"
#include "c2k_defs.h"
#include "svc_sap.h"
/*****************************************************************************

  FILE NAME:  sysdefs.h

  DESCRIPTION:

    This include file provides system wide global type declarations and
    constants.

*****************************************************************************/

/*---------------------------------------------------------------------
* The structure ExeRspMsgT is used in the command-response paradigm
* for many of the tasks.
*---------------------------------------------------------------------*/


#define HWD_RF_SUB_CLASS_0_SUPPORTED (1<<31)
#define HWD_RF_SUB_CLASS_1_SUPPORTED (1<<30)
#define HWD_RF_SUB_CLASS_2_SUPPORTED (1<<29)
#define HWD_RF_SUB_CLASS_3_SUPPORTED (1<<28)
#define HWD_RF_SUB_CLASS_4_SUPPORTED (1<<27)
#define HWD_RF_SUB_CLASS_5_SUPPORTED (1<<26)
#define HWD_RF_SUB_CLASS_6_SUPPORTED (1<<25)
#define HWD_RF_SUB_CLASS_7_SUPPORTED (1<<24)
#define HWD_RF_SUB_CLASS_8_SUPPORTED (1<<23)
#define HWD_RF_SUB_CLASS_9_SUPPORTED (1<<22)
#define HWD_RF_SUB_CLASS_10_SUPPORTED (1<<21)
#define HWD_RF_SUB_CLASS_11_SUPPORTED (1<<20)
#define HWD_RF_SUB_CLASS_12_SUPPORTED (1<<19)
#define HWD_RF_SUB_CLASS_13_SUPPORTED (1<<18)
#define HWD_RF_SUB_CLASS_14_SUPPORTED (1<<17)
#define HWD_RF_SUB_CLASS_15_SUPPORTED (1<<16)

#define HWD_RF_SUB_CLASS_0_UNSUPPORTED (0<<31)
#define HWD_RF_SUB_CLASS_1_UNSUPPORTED (0<<30)
#define HWD_RF_SUB_CLASS_2_UNSUPPORTED (0<<29)
#define HWD_RF_SUB_CLASS_3_UNSUPPORTED (0<<28)
#define HWD_RF_SUB_CLASS_4_UNSUPPORTED (0<<27)
#define HWD_RF_SUB_CLASS_5_UNSUPPORTED (0<<26)
#define HWD_RF_SUB_CLASS_6_UNSUPPORTED (0<<25)
#define HWD_RF_SUB_CLASS_7_UNSUPPORTED (0<<24)
#define HWD_RF_SUB_CLASS_8_UNSUPPORTED (0<<23)
#define HWD_RF_SUB_CLASS_9_UNSUPPORTED (0<<22)
#define HWD_RF_SUB_CLASS_10_UNSUPPORTED (0<<21)
#define HWD_RF_SUB_CLASS_11_UNSUPPORTED (0<<20)
#define HWD_RF_SUB_CLASS_12_UNSUPPORTED (0<<19)
#define HWD_RF_SUB_CLASS_13_UNSUPPORTED (0<<18)
#define HWD_RF_SUB_CLASS_14_UNSUPPORTED (0<<17)
#define HWD_RF_SUB_CLASS_15_UNSUPPORTED (0<<16)


#define HWD_ST_SYMB_NUM_MASK_26MS       0x000001FF
#define HWD_ST_SYMB_NUM_MASK            0x000007FF

/* System time interrupt mask definitions */
#define HWD_FRAME_CNT_INT_MASK      0x0001 /* Frame counter mask */

#ifdef MTK_PLT_ON_PC
#ifdef MTK_DEV_93M_PREIT
#define HWD_R_MDGPTM_CODA_VERSION (0xBF2A0000)
#define HWD_R_MDGPTM_CNT_VALUE1   (0xBF2A0010)
#define HWD_R_MDGPTM_PRESCALE1    (0xBF2A0014)
#define HWD_R_MDGPTM_CTRL1        (0xBF2A0018)
#define HWD_R_MDGPTM_DATA1        (0xBF2A001C)
#define HWD_R_MDGPTM_CNT_VALUE2   (0xBF2A0020)
#define HWD_R_MDGPTM_PRESCALE2    (0xBF2A0024)
#define HWD_R_MDGPTM_CTRL2        (0xBF2A0028)
#define HWD_R_MDGPTM_DATA2        (0xBF2A002C)
#define HWD_R_DELAY_TIMER1_CTRL   (0xAAAA0000)
#define HWD_R_DELAY_TIMER1_DELAY  (0xAAAA0004)
#define HWD_R_DELAY_TIMER2_CTRL   (0xAAAA0008)
#define HWD_R_DELAY_TIMER2_DELAY  (0xAAAA000C)
#define HWD_R_DELAY_TIMER3_CTRL   (0xAAAA0010)
#define HWD_R_DELAY_TIMER3_DELAY  (0xAAAA0014)
#define HWD_R_DELAY_TIMER4_CTRL   (0xAAAA0018)
#define HWD_R_DELAY_TIMER4_DELAY  (0xAAAA001C)
#define HWD_R_DELAY_TIMER5_CTRL   (0xAAAA0020)
#define HWD_R_DELAY_TIMER5_DELAY  (0xAAAA0024)

/* Bit0: FR_FH_SWI,
   Bit1: DO_CRP_SWI,
   Bit2: BACKUP_SWI */
#define HWD_SWI_TRIGGER           (0xBFFF0000)

#define FR_FH_SWI_ENABLE          (1U << 0)
#define DO_RCP_SWI_ENABLE         (1U << 1)
#define BACKUP_SWI_ENABLE         (1U << 2)

#define FRC_VAL_R                 (0xA00D0830)
#define FRC_VAL_R_H               (0xA00D0834)

#endif
#endif


typedef struct
{
    module_type    dest_mod_id;  /* Destination module ID of response message */
    kal_uint32     MsgId;
}ExeRspMsgT;

typedef kal_uint32 HwdRegT;
/*-----------------**
** Register Access **
**-----------------*/
#if defined (SIM_MT6280) && defined (MTK_PLT_ON_PC_IT) && !defined (GEN_FOR_PC)
#include "simul_public.h"
#elif defined (MTK_PLT_ON_PC)
// Include the software model
// Note: Included here as the HwdRegT type above needs to be defined.
#include "c2k_dma_model_api.h"
#endif

#ifdef MTK_PLT_ON_PC
#if defined (MTK_PLT_ON_PC_IT) && defined (SIM_MT6280)
    #define HwdWrite(REG, VAL) HW_WRITE(((volatile int*)REG),VAL)
    #define HW_WRITE(ptr,data) RegSimSimulateWrite( (int)(ptr), (data), sizeof(*(ptr)), __FILE__, __LINE__ )
#else
    #define HwdWrite(Reg, Data) hwd_write((HwdRegT)(Reg), Data)
#endif
#else
    #define HwdWrite(Reg, Data) \
                   *((volatile HwdRegT*) (Reg)) = (Data)
#endif


#if defined MTK_PLT_ON_PC
#if defined (MTK_PLT_ON_PC_IT) && defined (SIM_MT6280)
    #define HwdRead(REG) HW_READ(((volatile int*)REG))
    #define HW_READ(ptr) RegSimSimulateRead( (int)(ptr), sizeof(*(ptr)), __FILE__, __LINE__ )
#else
    #define HwdRead(Reg) hwd_read((HwdRegT)(Reg))
#endif
#else
    #define HwdRead(Reg) \
                    (*((volatile kal_uint16*) (Reg)))
#endif

#undef HwdClearBit32
#ifdef MTK_PLT_ON_PC
#define HwdClearBit32( Reg, BitMask ) hwd_clear_bit((HwdRegT)Reg, BitMask)
#else
#define    HwdClearBit32( Reg, BitMask ) \
        *( (volatile kal_uint32 *)(Reg) ) = *((volatile kal_uint32 *)(Reg)) & ~((kal_uint32)(BitMask))
#endif

#undef HwdClearBit16
#ifdef MTK_PLT_ON_PC
#define HwdClearBit16( Reg, BitMask ) hwd_clear_bit(Reg, BitMask)
#else
#define    HwdClearBit16( Reg, BitMask ) \
        *( (volatile kal_uint16 *)(Reg) ) = *((volatile kal_uint16 *)(Reg)) & ~((kal_uint16)(BitMask))
#endif

#undef HwdClearBit8
#ifdef MTK_PLT_ON_PC
#define HwdClearBit8( Reg, BitMask ) hwd_clear_bit(Reg, BitMask)
#else
#define    HwdClearBit8( Reg, BitMask ) \
        *( (volatile kal_uint8 *)(Reg) ) = *((volatile kal_uint8 *)(Reg)) & ~((kal_uint8)(BitMask))
#endif

    /* 32-Bit Register MACROS - used by USB */
#undef HwdWrite32
#ifdef MTK_PLT_ON_PC
#define HwdWrite32(Reg, Data) hwd_write_32((HwdRegT)(Reg), Data)
#else
#define HwdWrite32(Reg, Data) \
        *((volatile kal_uint32*)(Reg)) = (kal_uint32)(Data)
#endif

#undef HwdRead32
#if defined MTK_PLT_ON_PC
#if defined (MTK_PLT_ON_PC_IT) && defined (SIM_MT6280)
#define HwdRead32(REG) hwd_read_32((HwdRegT)(REG))
#else
#define HwdRead32(Reg) hwd_read_32((HwdRegT)(Reg))
#endif
#else
#define HwdRead32(Reg) \
               (*((volatile kal_uint32*) (Reg)))
#endif

#undef HwdSetBit32
#ifdef MTK_PLT_ON_PC
#define HwdSetBit32( Reg, BitMask ) hwd_set_bit_32((HwdRegT)Reg, BitMask)
#else
#define    HwdSetBit32( Reg, BitMask )    \
        *( (volatile kal_uint32 *)(Reg) ) = *((volatile kal_uint32 *)(Reg)) | ((kal_uint32)(BitMask))
#endif

#undef HwdResetBit32
#ifdef MTK_PLT_ON_PC
#define HwdResetBit32( Reg, BitMask ) hwd_reset_bit_32(Reg, BitMask)
#else
#define    HwdResetBit32( Reg, BitMask ) \
        *((volatile kal_uint32 *)(Reg)) = *((volatile kal_uint32 *)(Reg)) & ~((kal_uint32)(BitMask))
#endif

    /* 16-Bit Register MACROS  */
#undef HwdWrite16
#ifdef MTK_PLT_ON_PC
#define HwdWrite16(Reg, Data) hwd_write_16(Reg, Data)
#else
#define HwdWrite16(Reg, Data) \
                *((volatile kal_uint16*) (Reg)) = (Data)
#endif

#undef HwdRead16
#ifdef MTK_PLT_ON_PC
#if defined (MTK_PLT_ON_PC_IT) && defined (SIM_MT6280)
#define HwdRead16(rEG) (kal_int16)(HW_READ((volatile kal_uint32*)rEG) & 0xffff)
#else
#define HwdRead16(rEG) hwd_read_16(rEG)
#endif
#else
#define HwdRead16(Reg) \
               (*((volatile kal_uint16*) (Reg)))
#endif

#undef HwdSetBit16
#ifdef MTK_PLT_ON_PC
#define HwdSetBit16( Reg, BitMask ) hwd_set_bit_16(Reg, BitMask)
#else
#define    HwdSetBit16( Reg, BitMask )    \
               *( (volatile kal_uint16 *)(Reg) ) = *((volatile kal_uint16 *)(Reg)) | ((kal_uint16)(BitMask))
#endif

#undef HwdResetBit16
#ifdef MTK_PLT_ON_PC
#define HwdResetBit16( Reg, BitMask ) hwd_reset_bit_16(Reg, BitMask)
#else
#define    HwdResetBit16( Reg, BitMask ) \
               *((volatile kal_uint16 *)(Reg)) = *((volatile kal_uint16 *)(Reg)) & ~((kal_uint16)(BitMask))
#endif


    /* 8-Bit Register MACROS - used by EBI */
#undef HwdWrite8
#ifdef MTK_PLT_ON_PC
#define HwdWrite8(Reg, Data) hwd_write_8(Reg, Data)
#else
#define HwdWrite8(Reg, Data) \
        *((volatile kal_uint8*) (Reg)) = (Data)
#endif

#undef HwdRead8
#ifdef MTK_PLT_ON_PC
#define HwdRead8(Reg) hwd_read_8(Reg)
#else
#define HwdRead8(Reg) \
       (*((volatile kal_uint8*) (Reg)))
#endif

#undef HwdSetBit8
#ifdef MTK_PLT_ON_PC
#define HwdSetBit8( Reg, BitMask ) hwd_set_bit_8(Reg, BitMask)
#else
#define    HwdSetBit8( Reg, BitMask )    \
        *( (volatile kal_uint8 *)(Reg) ) = *((volatile kal_uint8 *)(Reg)) | ((kal_uint8)(BitMask))
#endif

#undef HwdResetBit8
#ifdef MTK_PLT_ON_PC
#define HwdResetBit8( Reg, BitMask ) hwd_reset_bit_8(Reg, BitMask)
#else
#define    HwdResetBit8( Reg, BitMask ) \
        *((volatile kal_uint8 *)(Reg)) = *((volatile kal_uint8 *)(Reg)) & ~((kal_uint8)(BitMask))
#endif
/*--------------------------------------------------------------------
* Define system wide data types
*--------------------------------------------------------------------*/

#if defined (MTK_PLT_ON_PC)
#define __func__ "func not known"
#endif
#define __MODULE__ __FILE__


#include "ottsdefs.h"

typedef double          DOUBLE;       /* Double precision IEEE */

#define CONST const
#define ROM

#define YES     KAL_TRUE
#define NO      KAL_FALSE

#define PASS    1
#define FAIL    0

/* A NULL value is required such that it is not mistaken for a valid */
/* value which includes values in the range of modulo 64. */
#define NULL_VAL  0xFF

#define ENABLED     KAL_TRUE
#define DISABLED    KAL_FALSE

#ifndef BIT0
#define BIT0     0x01
#define BIT1     0x02
#define BIT2     0x04
#define BIT3     0x08
#define BIT4     0x10
#define BIT5     0x20
#define BIT6     0x40
#define BIT7     0x80
#define BIT8     0x100
#define BIT9     0x200
#define BIT10    0x400
#define BIT11    0x800
#define BIT12    0x1000
#define BIT13    0x2000
#define BIT14    0x4000
#define BIT15    0x8000
#define BIT16    0x10000UL
#define BIT17    0x20000UL
#define BIT18    0x40000UL
#define BIT19    0x80000UL
#define BIT20    0x100000UL
#define BIT21    0x200000UL
#define BIT22    0x400000UL
#define BIT23    0x800000UL
#define BIT24    0x1000000UL
#define BIT25    0x2000000UL
#define BIT26    0x4000000UL
#define BIT27    0x8000000UL
#define BIT28    0x10000000UL
#define BIT29    0x20000000UL
#define BIT30    0x40000000UL
#define BIT31    0x80000000UL
#endif

typedef enum
{
   HWD_ENABLE = 0,
   HWD_DISABLE,
   HWD_LOAD
} HwdCtrlModeT;

/* Min and Max macros.
 */
#ifndef MTK_PLT_ON_PC
#ifndef L1_SIM
#ifndef max
#define max(x,y)  (((x) > (y)) ? (x) : (y))
#endif /* max */

#ifndef min
#define min(x,y)  (((x) > (y)) ? (y) : (x))
#endif /* min */
#endif
#endif

#ifndef MAX
#define MAX(x,y)  (((x) > (y)) ? (x) : (y))
#endif

#ifndef MIN
#define MIN(x,y)  (((x) < (y)) ? (x) : (y))
#endif

/* legacy SE1 HISRs */
#define FMP_HW_SLOT_FOUND_HISR  DOSF_DO_SLOT_FOUND_HISR

#endif
/**Log information: \main\CBP80\cbp80_cshen_scbp10098\1 2012-07-26 06:27:47 GMT cshen
** cbp80_cshen_scbp10098**/
