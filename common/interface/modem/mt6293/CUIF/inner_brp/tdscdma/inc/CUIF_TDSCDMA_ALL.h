#ifndef __CUIF_TDSCDMA_ALL_H__
#define __CUIF_TDSCDMA_ALL_H__


#include "TDSCDMA_CE_CUIF_CFG.h"
#include "TDSCDMA_CE_CUIF_RPRT.h"
#include "TDSCDMA_CROSS_CUIF_CFG.h"
#include "TDSCDMA_JD_CUIF_CFG.h"
#include "TDSCDMA_MXC_CUIF_CFG.h"
#include "TDSCDMA_MXC_CUIF_RPRT.h"
#include "TDSCDMA_SRP_CUIF_CFG.h"
#include "TDSCDMA_SRP_CUIF_RPRT.h"
#include "TDSCDMA_TOP_CUIF_CFG.h"
#include "TDSCDMA_TOP_CUIF_RPRT.h"
#include "TDSCDMA_TTU_CUIF_CFG.h"
#include "TDSCDMA_TTU_CUIF_RPRT.h"



typedef volatile struct {   
   TDSCDMA_TOP_CUIF_CFG_REGS    TDSCDMA_TOP_CFG;                                
   TDSCDMA_CROSS_CUIF_CFG_REGS  TDSCDMA_CROSS_CFG;                               
   TDSCDMA_CE_CUIF_CFG_REGS     TDSCDMA_CE_CFG;                                
   TDSCDMA_TTU_CUIF_CFG_REGS    TDSCDMA_TTU_CFG;                                
   TDSCDMA_JD_CUIF_CFG_REGS     TDSCDMA_JD_CFG;                                
   TDSCDMA_SRP_CUIF_CFG_REGS    TDSCDMA_SRP_CFG;                                
   TDSCDMA_MXC_CUIF_CFG_REGS    TDSCDMA_MXC_CFG;                                
                                                       
   TDSCDMA_TOP_CUIF_RPRT_REGS   TDSCDMA_TOP_RPRT;                                
   TDSCDMA_CE_CUIF_RPRT_REGS    TDSCDMA_CE_RPRT;                                
   TDSCDMA_TTU_CUIF_RPRT_REGS   TDSCDMA_TTU_RPRT;                                
   TDSCDMA_SRP_CUIF_RPRT_REGS   TDSCDMA_SRP_RPRT;                                
   TDSCDMA_MXC_CUIF_RPRT_REGS   TDSCDMA_MXC_RPRT;                               

} CUIF_TDSCDMA_ALL_REGS;



//TDSCDMA


#endif /*__CUIF_TDSCDMA_ALL_H__*/
