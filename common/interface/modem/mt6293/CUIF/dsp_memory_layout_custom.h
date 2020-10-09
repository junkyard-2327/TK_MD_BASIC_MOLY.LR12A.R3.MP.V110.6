#ifndef __DSP_MEMORY_LAYOUT_CUSTOM_H__
#define __DSP_MEMORY_LAYOUT_CUSTOM_H__


#if defined(MT6763) || defined(MT6293)
#if defined(__SPEECH_EVS_SUPPORT__) || defined(__EVS_SUPPORT__)
#if defined(__LTE_L1SIM__) || !(defined(__CORE_USIP0__) || defined(__CORE_USIP1__))
    #define EXT_CUIF_FEC_WBRP_BASE ((kal_uint32)(0xF5E8000))
    #define EXT_CUIF_INNER_BRP_BASE ((kal_uint32)(0xF5D0000))
    #define EXT_CUIF_SPEECH_BASE ((kal_uint32)(0xF5F8000))
#endif
    #define EXT_UUIF_NON_BUF_LOCK_ADDR   (0xF59F000)
    #define CC_SPIN_USIP1_BASE             (0xF608000)
#else
#if defined(__LTE_L1SIM__) || !(defined(__CORE_USIP0__) || defined(__CORE_USIP1__))
    #define EXT_CUIF_FEC_WBRP_BASE ((kal_uint32)(0xF2E8000))
    #define EXT_CUIF_INNER_BRP_BASE ((kal_uint32)(0xF2D0000))
    #define EXT_CUIF_SPEECH_BASE ((kal_uint32)(0xF2F8000))
#endif
    #define EXT_UUIF_NON_BUF_LOCK_ADDR   (0xF29F000)
    #define CC_SPIN_USIP1_BASE             (0xF308000)
#endif
#elif defined(MT6739)
#if defined(__MD_LAYOUT_SHRINK__)
#if defined(__SPEECH_EVS_SUPPORT__) || defined(__EVS_SUPPORT__)
    #error "Unsupported Layout, need to do related porting!!!!"
#else
#if defined(__LTE_L1SIM__) || !(defined(__CORE_USIP0__) || defined(__CORE_USIP1__))
    #define EXT_CUIF_FEC_WBRP_BASE ((kal_uint32)(0x4DC8000))
    #define EXT_CUIF_INNER_BRP_BASE ((kal_uint32)(0x4DB0000))
    #define EXT_CUIF_SPEECH_BASE ((kal_uint32)(0x4DD8000))
#endif
    #define EXT_UUIF_NON_BUF_LOCK_ADDR   (0x4DA7000)
    #define CC_SPIN_USIP1_BASE             (0x4DE8000)
#endif
#else
#if defined(__SPEECH_EVS_SUPPORT__) || defined(__EVS_SUPPORT__)
#if defined(__LTE_L1SIM__) || !(defined(__CORE_USIP0__) || defined(__CORE_USIP1__))
    #define EXT_CUIF_FEC_WBRP_BASE ((kal_uint32)(0x7C28000))
    #define EXT_CUIF_INNER_BRP_BASE ((kal_uint32)(0x7C10000))
    #define EXT_CUIF_SPEECH_BASE ((kal_uint32)(0x7C38000))
#endif
    #define EXT_UUIF_NON_BUF_LOCK_ADDR   (0x7BFF000)
    #define CC_SPIN_USIP1_BASE             (0x7C48000)
#else
#if defined(__LTE_L1SIM__) || !(defined(__CORE_USIP0__) || defined(__CORE_USIP1__))
    #define EXT_CUIF_FEC_WBRP_BASE ((kal_uint32)(0x79C8000))
    #define EXT_CUIF_INNER_BRP_BASE ((kal_uint32)(0x79B0000))
    #define EXT_CUIF_SPEECH_BASE ((kal_uint32)(0x79D8000))
#endif
    #define EXT_UUIF_NON_BUF_LOCK_ADDR   (0x79A7000)
    #define CC_SPIN_USIP1_BASE             (0x79E8000)
#endif
#endif
#elif defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#if defined(__SPEECH_EVS_SUPPORT__) || defined(__EVS_SUPPORT__)
#if defined(__LTE_L1SIM__) || !(defined(__CORE_USIP0__) || defined(__CORE_USIP1__))
    #define EXT_CUIF_FEC_WBRP_BASE ((kal_uint32)(0x7DD8000))
    #define EXT_CUIF_INNER_BRP_BASE ((kal_uint32)(0x7DC0000))
    #define EXT_CUIF_SPEECH_BASE ((kal_uint32)(0x7DE8000))
#endif
    #define EXT_UUIF_NON_BUF_LOCK_ADDR   (0x7D9F000)
    #define CC_SPIN_USIP1_BASE             (0x7DF8000)
#else
#if defined(__LTE_L1SIM__) || !(defined(__CORE_USIP0__) || defined(__CORE_USIP1__))
    #define EXT_CUIF_FEC_WBRP_BASE ((kal_uint32)(0x7AD8000))
    #define EXT_CUIF_INNER_BRP_BASE ((kal_uint32)(0x7AC0000))
    #define EXT_CUIF_SPEECH_BASE ((kal_uint32)(0x7AE8000))
#endif
    #define EXT_UUIF_NON_BUF_LOCK_ADDR   (0x7A9F000)
    #define CC_SPIN_USIP1_BASE             (0x7AF8000)
#endif
#elif defined(MT6295) || defined(MT6295M)
    #define CC_SPIN_USIP1_BASE             (0xF7F8000)
#else
    #error "Unsupported project, need to do related porting!!!!"
#endif

#endif
