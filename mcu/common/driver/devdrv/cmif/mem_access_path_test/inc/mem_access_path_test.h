#ifndef __MEM_ACCESS_PATH_TEST_USIP_H__
#define __MEM_ACCESS_PATH_TEST_USIP_H__

#if defined(MT6763) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
#define usip0_itcm_size     (0xe000)
#elif defined(MT6739)
#define usip0_itcm_size     (0x18000)
#else
#error "no configuration for this project!\n"
#endif

#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6765) || defined(MT6761) || defined(MT6768)
// usip
#define usip0_itcm_base     (0xA1000000)

#define usip1_itcm_base     (0xA1100000)
#define usip1_itcm_size     (0xb000)


#define usip0_dtcm_base     (0xA1040000)
#define usip0_dtcm_size     (0xb000)

#define usip1_dtcm_base     (0xA1140000)
#define usip1_dtcm_size     (0xa000)

// scq16
#define SHARE_PM_base       (0xA9800000)
#define share_pm_size       (0x30000)

#define SHARE_DM_base       (0xA9A00000)
#define share_dm_size       (0x10000)

#define PRIVATE_DM0_base    (0xAA200000)
#define PRIVATE_DM1_base    (0xAA600000)

#define local_dm_size       (0x2000)

#define rake_pm_base        (0xac380000)
#define rake_pm_size        (0x18000)

#define rake_dm_base        (0xac3e0000)
#define rake_dm_size        (0xc000)

#else
#error "no configuration for this project!\n"
#endif



#define access_path_test_size 0x800

// usip
#define usip0_itcm_end  (usip0_itcm_base  + usip0_itcm_size)
#define usip1_itcm_end  (usip1_itcm_base  + usip1_itcm_size)


#define usip0_dtcm_end  (usip0_dtcm_base  + usip0_dtcm_size)
#define usip1_dtcm_end  (usip1_dtcm_base  + usip1_dtcm_size)


// scq16
#define share_pm_end    (SHARE_PM_base + share_pm_size)
#define share_dm_end    (SHARE_DM_base + share_dm_size)


#define PRIVATE_DM0_end (PRIVATE_DM0_base + local_dm_size)
#define PRIVATE_DM1_end (PRIVATE_DM1_base + local_dm_size)

// rake
#define rake_pm_end     (rake_pm_base + rake_pm_size)
#define rake_dm_end     (rake_dm_base + rake_dm_size)

extern ssdvt_uint32 SSDVT_MEM_ACCESS_PATH_TEST(void);

#endif //__MEM_ACCESS_PATH_TEST_USIP_H__
