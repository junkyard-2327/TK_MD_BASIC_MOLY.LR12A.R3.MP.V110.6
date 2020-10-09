#ifndef __REG_BASE_ESL_H__
#define __REG_BASE_ESL_H__


#if defined(ELBRUS)
#undef BASE_ADDR_MDCIRQ
#define BASE_ADDR_MDCIRQ    0xF0070000

#undef BASE_MADDR_MDCIRQ
#define BASE_MADDR_MDCIRQ    0xF0070000

#if defined(MDM_BASE_ADDR)
#undef MDM_BASE_ADDR
#endif
#define MDM_BASE_ADDR    0xF1001000


#elif defined(MT6763)
    #undef BASE_ADDR_MDCIRQ
    #undef BASE_MADDR_MDCIRQ

    #undef BASE_NADDR_MML2_QP_APB     
    #undef BASE_NADDR_MML2_QP_MEM     
    #undef BASE_NADDR_MML2_META_APB   
    #undef BASE_NADDR_MML2_META_MEM   
    #undef BASE_NADDR_MML2_VRB_MANAGER
    #undef BASE_NADDR_MML2_MMU        
    #undef BASE_NADDR_MML2_DMA_RD     
    #undef BASE_NADDR_MML2_DMA_WR     
    #undef BASE_NADDR_MML2_LHIF       
    #undef BASE_NADDR_MML2_CIPHER     
    #undef BASE_NADDR_MML2_DL_LMAC    
    #undef BASE_NADDR_MML2_HARQ_CTRL  
    #undef BASE_NADDR_MML2_SRAM_WRAP  
    #undef BASE_NADDR_MML2_CFG_TOP    
    #undef BASE_NADDR_MML2_BYC        
    #undef BASE_MADDR_MML2_QP_APB     
    #undef BASE_MADDR_MML2_QP_MEM     
    #undef BASE_MADDR_MML2_META_APB   
    #undef BASE_MADDR_MML2_META_MEM   
    #undef BASE_MADDR_MML2_VRB_MANAGER
    #undef BASE_MADDR_MML2_MMU        
    #undef BASE_MADDR_MML2_DMA_RD     
    #undef BASE_MADDR_MML2_DMA_WR     
    #undef BASE_MADDR_MML2_LHIF       
    #undef BASE_MADDR_MML2_CIPHER     
    #undef BASE_MADDR_MML2_DL_LMAC    
    #undef BASE_MADDR_MML2_HARQ_CTRL  
    #undef BASE_MADDR_MML2_SRAM_WRAP  
    #undef BASE_MADDR_MML2_CFG_TOP    
    #undef BASE_MADDR_MML2_BYC        

	/* CIRQ 0xF for RTL2C model */
#if defined(__ESL_DBG_UTIL__)
    #define BASE_ADDR_MDCIRQ            (0xE7000000)
    #define BASE_MADDR_MDCIRQ           (0xE7000000)
//  #define BASE_ADDR_MDCIRQ            (0xF0070000)
//	#define BASE_MADDR_MDCIRQ           (0xF0070000)
#else
    #define BASE_ADDR_MDCIRQ            (0xF0070000)
    #define BASE_MADDR_MDCIRQ           (0xF0070000)
#endif /* __ESL_DBG_UTIL__ */

    #define BASE_USCOUNTER              (0xE1000000)
    #define BASE_GLOBAL_TS              (0xE1000010)

    #define BASE_MADDR_MML2_QP_APB      (0xE0600000)
    #define BASE_MADDR_MML2_QP_MEM      (0xE0600800)
    #define BASE_MADDR_MML2_META_APB    (0xE0601000)
    #define BASE_MADDR_MML2_META_MEM    (0xE0601800)
    #define BASE_MADDR_MML2_VRB_MANAGER (0xE0602000)
    #define BASE_MADDR_MML2_MMU         (0xE0603000)
    #define BASE_MADDR_MML2_DMA_RD      (0xE0604000)
    #define BASE_MADDR_MML2_DMA_WR      (0xE0605000)
    #define BASE_MADDR_MML2_LHIF        (0xE0606000)
    #define BASE_MADDR_MML2_CIPHER      (0xE0607000)
    #define BASE_MADDR_MML2_DL_LMAC     (0xE0608000)
    #define BASE_MADDR_MML2_HARQ_CTRL   (0xE0609000)
    #define BASE_MADDR_MML2_SRAM_WRAP   (0xE060A000)
    #define BASE_MADDR_MML2_CFG_TOP     (0xE060B000)
    #define BASE_MADDR_MML2_BYC         (0xE060C000)

    #define BASE_NADDR_MML2_QP_APB       BASE_MADDR_MML2_QP_APB     
    #define BASE_NADDR_MML2_QP_MEM       BASE_MADDR_MML2_QP_MEM     
    #define BASE_NADDR_MML2_META_APB     BASE_MADDR_MML2_META_APB   
    #define BASE_NADDR_MML2_META_MEM     BASE_MADDR_MML2_META_MEM   
    #define BASE_NADDR_MML2_VRB_MANAGER  BASE_MADDR_MML2_VRB_MANAGER
    #define BASE_NADDR_MML2_MMU          BASE_MADDR_MML2_MMU        
    #define BASE_NADDR_MML2_DMA_RD       BASE_MADDR_MML2_DMA_RD     
    #define BASE_NADDR_MML2_DMA_WR       BASE_MADDR_MML2_DMA_WR     
    #define BASE_NADDR_MML2_LHIF         BASE_MADDR_MML2_LHIF       
    #define BASE_NADDR_MML2_CIPHER       BASE_MADDR_MML2_CIPHER     
    #define BASE_NADDR_MML2_DL_LMAC      BASE_MADDR_MML2_DL_LMAC    
    #define BASE_NADDR_MML2_HARQ_CTRL    BASE_MADDR_MML2_HARQ_CTRL  
    #define BASE_NADDR_MML2_SRAM_WRAP    BASE_MADDR_MML2_SRAM_WRAP  
    #define BASE_NADDR_MML2_CFG_TOP      BASE_MADDR_MML2_CFG_TOP    
    #define BASE_NADDR_MML2_BYC          BASE_MADDR_MML2_BYC        




#endif  /* ELBRUS */

#endif	/*	end	of	__REG_BASE_ELBRUS_H__	*/	
