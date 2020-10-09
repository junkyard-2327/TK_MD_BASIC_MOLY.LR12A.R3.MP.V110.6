#include "kal_iram_section_defs.h"
#include "kal_public_api.h"
#include "kal_hrt_api.h"
#include "kal_general_types.h"
#include "kal_internal_api.h"
#include "cache_sw.h"
#include "intrCtrl.h"
#include "drv_comm.h"
#include "sync_data.h"
#include "devdrv_ls.h"
#include "ex_public.h"
#include <boot.h>
#include <mips/mt.h>

#if defined(KAL_ON_NUCLEUS)
#if defined(__NUCLEUS_VERSION_3__)
#include "nucleus.h"
#else
#include "tc_defs.h"
#endif
#endif

kal_uint32 drv_vpe_irq_mask_exception[ESAL_GE_CPU_COUNT];

#define IRQ_CLEAR_EXL() \
        unsigned int status_reg; \
        do { \
		__asm__ __volatile__( \
                        "mfc0 %0, $12\n\t" \
                        "ins %0, $0, 1, 1\n\t" \
                        "mtc0 %0, $12\n\t" \
                        "ehb\n\t" \
                        : "=&d" (status_reg) \
                        : \
		); \
	} while(0)

#define IRQ_SET_EXL() \
        unsigned int status_reg; \
        do { \
		__asm__ __volatile__( \
                        "mfc0 %0, $12\n\t" \
                        "ori %0, 0x2\n\t" \
                        "mtc0 %0, $12\n\t" \
                        "ehb\n\t" \
                        : "=&d" (status_reg) \
                        : \
		); \
	} while(0)


#define IRQ_GET_AND_MASK_INT(ret) \
	do { \
			__asm__ __volatile__( \
				"di %0\n\t" \
				"ehb\n\t" \
				: "=d" (ret) \
				: \
			); \
		} while(0)

#define IRQ_RESTORE_INT(irq) \
	do { \
		if((irq&0x1)==1)\
		{\
			__asm__ __volatile__( \
				"ei\n\t" \
                "ehb\n\t" \
			); \
		}\
	} while(0)

#define IRQ_ENABLE_INT() \
	do { \
		__asm__ __volatile__( \
			"ei\n\t" \
            "ehb\n\t" \
		); \
	} while(0)

#if !defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE 
#endif
kal_uint32 LockIRQ()
{
    kal_uint32 ret;
    IRQ_GET_AND_MASK_INT(ret);
    return ret;
}

#if !defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE 
#endif
void RestoreIRQ(kal_uint32 irq)
{
    IRQ_RESTORE_INT(irq);
}

#if !defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE 
#endif
void ReEnableIRQ(void)
{
    IRQ_ENABLE_INT();
}

#if !defined(GEN93_MDMCU_SYSTEM_IMPROVEMENT_FOR_LOW_POWER)
__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE 
#endif
kal_uint32 DisableIRQ()
{
    kal_uint32 ret;
    IRQ_GET_AND_MASK_INT(ret);
    return ret;
}

__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE void Set_EXL(void)
{
    IRQ_SET_EXL();
}

__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE void Clear_EXL(void)
{
    IRQ_CLEAR_EXL();
}

__MCURW_HWRW_C_ALIGNED_L2CACHE_LOCK_ROCODE kal_uint32 Ibit_Status(void)
{
    unsigned int status_reg;

    __asm__ __volatile__(
        "mfc0 %0, $12\n\t"
        "andi %0, 0x1\n\t"
        : "=&d" (status_reg)
        :
    );

    return status_reg;

}

void VPE_IRQ_MASK(kal_uint32 code)
{
    kal_uint32 mask;
    ASSERT(code <= VPE_IRQID_END);
    mask = ~( 1 << (8+code));

    //$12 = C0_STATUS
    __asm__ __volatile__
    (
        "MFC0 $2, $12\r\n"
        "AND $2, %0\r\n"
        "MTC0 $2, $12\r\n"
        "EHB \r\n"
        :
        :"d"(mask)
        :"$2"
    );
}


void VPE_IRQ_UNMASK(kal_uint32 code)
{
    kal_uint32 umask;
    ASSERT(code <= VPE_IRQID_END);
    umask = ( 1 << (8+code));

    //$12 = C0_STATUS
    __asm__ __volatile__
    (
        "MFC0 $2, $12\r\n"
        "OR $2, %0\r\n"
        "MTC0 $2, $12\r\n"
        "EHB \r\n"
        :
        :"d"(umask)
        :"$2"
    );

}

void drv_vpe_irq_save_and_mask_all(kal_uint32 VPEID)
{
    kal_uint32 interruptMaskAll;
    /* Get C0_STATUS */
    __asm__ __volatile__
    (
        "MFC0 %0, $12\r\n"
        :"=&d"(drv_vpe_irq_mask_exception[VPEID])
        :
        :
    );
    /* Extract IM[15:8] bit from C0_Status */
    drv_vpe_irq_mask_exception[VPEID] = drv_vpe_irq_mask_exception[VPEID] & 0xFF00;
	
    interruptMaskAll = ~(0xFF00);
    /* Set IM[15:8] to mask all interrupt */
    __asm__ __volatile__
    (
        "MFC0 $2, $12\r\n"
        "AND $2, %0\r\n"
        "MTC0 $2, $12\r\n"
        "EHB \r\n"
        :
        :"d"(interruptMaskAll)
        :"$2"
    );
}

void drv_vpe_irq_set_YQMask(kal_uint32 mask)
{
    ASSERT(mask <= 0xffff);

    //$1 4= YQMask
    __asm__ __volatile__( 
                          "MFC0 $2, $1, 4\r\n" 
                          "ANDI $2, 0\r\n" 
                          "OR $2, %0\r\n" 
                          "MTC0 $2, $1, 4\r\n" 
                          "EHB" 
                          : 
                          : "d"(mask) 
                          :"$2" 
                        );
}

void drv_vpe_irq_clear_timer()
{
#if !__mips16
    __asm__ __volatile__( 
                          "MTC0 $0, $9, 0\r\n" 
                          "EHB" 
                          : 
                          : 
                          :"$0" 
                        );
#else
    __asm__ __volatile__( 
                          "LI $2, 0\r\n"
                          "MTC0 $2, $9, 0\r\n" 
                          "EHB" 
                          : 
                          : 
                          :"$2" 
                        );
#endif
}

void drv_vpe_irq_clear_compare()
{
#if !__mips16
    __asm__ __volatile__( 
                          "MTC0 $0, $11, 0\r\n" 
                          "EHB" 
                          : 
                          : 
                          :"$0" 
                        );
#else
    __asm__ __volatile__( 
                          "LI $2, 0\r\n" 
                          "MTC0 $2, $11, 0\r\n"
                          "EHB" 
                          : 
                          : 
                          :"$2" 
                        );
#endif
}


void drv_vpe_irq_reset(void)
{
    kal_uint32 interrupt_vector_enable=0x800000;

//set BEV as 0
    __asm__ __volatile__(
        "mfc0	$2, $12\r\n"
        "lui 	$3, 0xFFBF\r\n"  // Clear bit 22 of C0_STATUS
        "ori 	$3, 0xFFFF\r\n"
        "and 	$2, $3\r\n"
        "mtc0	$2, $12\r\n"
        "EHB\r\n"
        :
        :
        :"$2","$3"
    );


//use special interrupt vector
    __asm__ __volatile__
    (
        "MFC0 $2, $13\r\n"	//$13=C0_CAUSE
        "OR $2, %0\r\n"
        "MTC0 $2, $13\r\n"
        "EHB\r\n"
        :
        :"r"(interrupt_vector_enable)
        :"$2"
    );

//set vector interrupt offset as 32byte
    __asm__ __volatile__
    (
        "MFC0 $2, $12,1\r\n"  //$12,1 = C0_INTCTL
        "ORI $2, 0x20\r\n"
        "MTC0 $2, $12,1\r\n"
        "EHB            \r\n"
        :
        :
        :"$2"
    );

    drv_vpe_irq_clear_timer();
    drv_vpe_irq_clear_compare();

    VPE_IRQ_UNMASK(VPE_IRQID_SI_INT);
}

void initVPEIRQ(void)
{
    drv_vpe_irq_reset();
}


