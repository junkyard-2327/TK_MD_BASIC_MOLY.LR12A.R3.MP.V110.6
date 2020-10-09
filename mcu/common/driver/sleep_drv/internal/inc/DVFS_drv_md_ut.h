#ifndef __DVFS_DRV_MD_UT_H__
#define __DVFS_DRV_MD_UT_H__

#if defined(DVFS_MD_UT_ENABLE)
/*
 * Unit test public interface.
 */
void DVFS_md_ut_init(void *ctx);
int DVFS_md_ut_basic(void);
int DVFS_md_ut_stress(kal_bool to_start);

/*
 * Private functions in DVFS_drv_mt_ut.c.
 * Declare here for unit test function to access them.
 */
#define DVFS_DRV_MD_UT_STATIC
void change_mips_user_gears(dvfs_md_user_t *it, kal_uint32 gear, kal_bool from_updating);
dvfs_md_user_t *dvfs_drv_md_get_mips_user(DVFS_MD_MIPS_USER_E user);

#else /* !defined(DVFS_MD_UT_ENABLE) */
#define DVFS_DRV_MD_UT_STATIC static
#endif /* defined(DVFS_MD_UT_ENABLE) */

#endif /* __DVFS_DRV_MD_UT_H__ */
