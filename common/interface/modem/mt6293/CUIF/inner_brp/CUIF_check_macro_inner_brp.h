#ifndef        __CUIF_CHECK_MACRO_DEFINE_INNER_BRP_H__
#define        __CUIF_CHECK_MACRO_DEFINE_INNER_BRP_H__

#define CUIF_INNER_BRP_SS_REGION_END      ((kal_uint32*) (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, ss_region_end)))

#define CUIF_INNER_BRP_LTE_REGION_END     ((kal_uint32*) (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, lte_cuif_region_end)))
#define CUIF_INNER_BRP_W_INNER_REGION_END ((kal_uint32*) (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, wcdma_inner_cuif_region_end)))
#define CUIF_INNER_BRP_W_BRP_REGION_END   ((kal_uint32*) (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, wcdma_hrxbrp_cuif_region_end)))
#define CUIF_INNER_BRP_TDD_REGION_END     ((kal_uint32*) (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, tdscdma_cuif_region_end)))
#define CUIF_INNER_BRP_C2K_REGION_END     ((kal_uint32*) (CUIF_INNER_BRP_BASE + offsetof(INNER_BRP_CUIF_ALL_REGS, c2k_cuif_region_end)))

#endif
