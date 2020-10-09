#include "dcl_pmic_features.h"
#include "dcl_pmu_common_sw.h"

#if defined(MT6339)
#include "dcl_pmic6339_sw.h"
#include "dcl_pmic6339_hw.h"
#include "dcl_pmu_hw.h"

#elif defined(MT6331) || defined(MT6332)
#include "dcl_pmic6331_sw.h"
#include "dcl_pmic6331_hw.h"
#include "dcl_pmic6332_sw.h"
#include "dcl_pmic6332_hw.h"
#include "dcl_pmu_hw.h"

#elif defined(MT6325)
#include "dcl_pmic6325_sw.h"
#include "dcl_pmic6325_hw.h"
#include "dcl_pmu_hw.h"

#elif defined(MT6328)
#include "dcl_pmic6328_sw.h"
#include "dcl_pmic6328_hw.h"
#include "dcl_pmu_hw.h"

#elif defined(MT6351)
#include "dcl_pmic6351_sw.h"
#include "dcl_pmic6351_hw.h"
#include "dcl_pmu_hw.h"

#elif defined(MT6353)
#include "dcl_pmic6353_sw.h"
#include "dcl_pmic6353_hw.h"
#include "dcl_pmu_hw.h"

#elif defined(MT6335) || defined(MT6337)
#include "dcl_pmic6335_sw.h"
#include "dcl_pmic6335_hw.h"
#include "dcl_pmic6337_sw.h"
#include "dcl_pmic6337_hw.h"
#include "dcl_pmu_hw.h"

#elif defined(MT6356)
#include "dcl_pmic6356_sw.h"
#include "dcl_pmic6356_hw.h"
#include "dcl_pmu_hw.h"

#elif defined(MT6357)
#include "dcl_pmic6357_sw.h"
#include "dcl_pmic6357_hw.h"
#include "dcl_pmu_hw.h"

#elif defined(MT6358)
#include "dcl_pmic6358_sw.h"
#include "dcl_pmic6358_hw.h"
#include "dcl_pmu_hw.h"

#else
typedef enum
{
FLAGS_LIST_ENUM_MAX
}PMU_FLAGS_LIST_ENUM;
#endif

