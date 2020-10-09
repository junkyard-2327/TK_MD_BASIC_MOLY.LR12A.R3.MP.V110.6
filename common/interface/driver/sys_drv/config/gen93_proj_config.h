#ifndef __GEN93_PROJ_CONFIG_H__
#define __GEN93_PROJ_CONFIG_H__

#if defined(__DSP_CODEBASE_MT6293__)
// gen93
#if defined(MT6763) || defined(MT6293)
#define __CMIF_DRV_SW_WORKAROUND__
#undef __SUPPORT_RAKE_TBUF_MON_PC__
#elif defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#undef __CMIF_DRV_SW_WORKAROUND__
#define __SUPPORT_RAKE_TBUF_MON_PC__
#else
#error "Please porting for this new project !!!!"
#endif

#elif defined(__DSP_CODEBASE_MT6295__)
// gen95
#undef __CMIF_DRV_SW_WORKAROUND__
#define __SUPPORT_RAKE_TBUF_MON_PC__

#endif // defined(__DSP_CODEBASE_MT6295__)

#endif // __GEN93_PROJ_CONFIG_H__

