#ifndef __REG_BASE_USERNAME_H__
#define __REG_BASE_USERNAME_H__

#include "boot.h"

/* This header file only includes product specific header files.
 * Please add your reg base difinitions to correct product specific file. */

#if defined(MT6763)
  #include "reg_base_MT6763_username.h"
#elif defined(MT6739)
  #include "reg_base_MT6739_username.h"
#elif defined(MT6771)
  #include "reg_base_MT6771_username.h"
#elif defined(MT6765)
  #include "reg_base_MT6765_username.h"  
#elif defined(MT6761)
  #include "reg_base_MT6761_username.h"  
#elif defined(MT6768)
  #include "reg_base_MT6768_username.h"  
#endif/* MT6763 */

#endif	/*	end	of	__REG_BASE_USERNAME_H__	*/	
