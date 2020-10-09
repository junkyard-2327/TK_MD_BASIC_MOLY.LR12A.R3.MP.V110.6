#ifndef INCLUDE_DSP_HEADER_ENABLE_INNER_BRP
    #error "Please include CUIF_LTE_ALL.h via dsp_header_define.h"
#endif

#ifndef __CUIF_LTE_ALL_H__
#define __CUIF_LTE_ALL_H__


#include "CUIF_LTE_CSI_SF_COMM_CMD.h"
#include "CUIF_LTE_CSI_SF_CC_CMD.h"
#include "CUIF_LTE_RX_SF_COMM_CMD.h"
#include "CUIF_LTE_RX_SF_CC_CMD.h"
#include "CUIF_LTE_RX_SF_OC_CMD.h"
#include "CUIF_LTE_RX_SF_MIB_CMD.h"
#include "CUIF_LTE_RX_STATIC_COMM_CMD.h"
#include "CUIF_LTE_RX_STATIC_CC_CMD.h"
#include "CUIF_LTE_RX_SF_UL_CC_CMD.h"
#include "CUIF_LTE_RX_STATIC_UL_CC_CMD.h"
#include "CUIF_LTE_RSSI_CC_CMD.h"

#include "CUIF_LTE_CSI_CC_RPT.h"
#include "CUIF_LTE_CTRLCH_CC_RPT.h"
#include "CUIF_LTE_RX_COMM_RPT.h"
#include "CUIF_LTE_RX_CC_RPT.h"
#include "CUIF_LTE_RX_BRP_STATIC_COMM_RPT.h"
#include "CUIF_LTE_RX_BRP_DL_CC_RPT.h"
#include "CUIF_LTE_RX_BRP_UL_CC_RPT.h"
#include "CUIF_LTE_RX_BRP_COMM_RPT.h"
#include "CUIF_LTE_RX_BRP_MIB_RPT.h"
#include "CUIF_LTE_RX_OC_RPT.h"

#include "CUIF_LTE_RX_CTRL.h"

#include "CUIF_LTE_NCM_OCC_CC_CFG.h"
#include "CUIF_LTE_NCM_1MS_CC_CFG.h"
#include "CUIF_LTE_NCM_CC_CTRL.h"
#include "CUIF_LTE_NCM_CC_RPT.h"
#include "CUIF_LTE_NCM_FDB_INFO.h"
#include "CUIF_LTE_NCM_ACTIVE_RAT_INFO.h"
#include "CUIF_LTE_NCM_AGC_INFO.h"

#include "CUIF_LTE_POS_T2F_CMD.h"
#include "CUIF_LTE_POS_CELL_CMD.h"
#include "CUIF_LTE_POS_RPT.h"

#include "CUIF_LTE_TEST_CC.h"
#include "CUIF_LTE_TEST_OC.h"

#define CUIF_LTE_CC_NUM         (2)
#define CUIF_LTE_UL_CC_NUM      (2)
#define CUIF_LTE_OC_NUM         (2)
#define CUIF_LTE_MIB_CELL_NUM   (4)

/*  LTE Command: DSP RO, L1 WO */

typedef volatile struct {
    CUIF_LTE_CSI_SF_COMM_CMD_REGS           COMM;
    CUIF_LTE_CSI_SF_CC_CMD_REGS             CC[CUIF_LTE_CC_NUM];
} CUIF_LTE_CSI_SF_CMD_REGS;


typedef volatile struct {
    CUIF_LTE_RX_SF_COMM_CMD_REGS            COMM;
    CUIF_LTE_RX_SF_CC_CMD_REGS              CC[CUIF_LTE_CC_NUM];
    CUIF_LTE_RX_SF_OC_CMD_REGS              OC[CUIF_LTE_OC_NUM];
    CUIF_LTE_RX_SF_MIB_CMD_REGS             MIB[CUIF_LTE_MIB_CELL_NUM];
    CUIF_LTE_RX_SF_UL_CC_CMD_REGS           UL_CC[CUIF_LTE_UL_CC_NUM];
} CUIF_LTE_RX_SF_CMD_REGS;


typedef volatile struct {
    CUIF_LTE_RX_STATIC_COMM_CMD_REGS    COMM;
    CUIF_LTE_RX_STATIC_CC_CMD_REGS      CC[CUIF_LTE_CC_NUM];
    CUIF_LTE_RX_STATIC_UL_CC_CMD_REGS   UL_CC[CUIF_LTE_UL_CC_NUM];
} CUIF_LTE_RX_STATIC_CMD_REGS;

typedef volatile struct {
    CUIF_LTE_RSSI_CC_CMD_REGS           CC[CUIF_LTE_CC_NUM];
} CUIF_LTE_RSSI_CMD_REGS;

typedef volatile struct {
    CUIF_LTE_NCM_OCC_CC_CFG_REGS            CC[CUIF_LTE_CC_NUM];
} CUIF_LTE_NCM_OCC_CFG_REGS;

typedef volatile struct {
    CUIF_LTE_NCM_1MS_CC_CFG_REGS            CC[CUIF_LTE_CC_NUM];
} CUIF_LTE_NCM_1MS_CFG_REGS;

typedef volatile struct {
    CUIF_LTE_NCM_CC_CTRL_REGS               CC[CUIF_LTE_CC_NUM];
} CUIF_LTE_NCM_CTRL_REGS;

typedef volatile struct {
    CUIF_LTE_CSI_SF_CMD_REGS                LTE_CSI_SF_CMD[2];    // ping-pong since L1 cfg time region is too wide
    CUIF_LTE_RX_SF_CMD_REGS                 LTE_RX_SF_CMD[2];     // ping-pong
    CUIF_LTE_RX_STATIC_CMD_REGS             LTE_RX_STATIC_CMD[2]; // ping-pong
    CUIF_LTE_RSSI_CMD_REGS                  LTE_RSSI_CMD[2];      // ping-pong
    
    CUIF_LTE_NCM_FDB_INFO_REGS              LTE_NCM_FDB_INFO;        
    CUIF_LTE_NCM_OCC_CFG_REGS               LTE_NCM_OCC_CFG;
    CUIF_LTE_NCM_1MS_CFG_REGS               LTE_NCM_1MS_CFG[2];   // ping-pong
    CUIF_LTE_POS_T2F_CMD_REGS               LTE_POS_T2F_CMD;
    CUIF_LTE_POS_CELL_CMD_REGS              LTE_POS_CELL_CMD[2];
} CUIF_LTE_DSP_RO_REGS;

/*  LTE Report: DSP WO, L1 RO */

typedef volatile struct {
    CUIF_LTE_CSI_CC_RPT_REGS                CC[CUIF_LTE_CC_NUM];
} CUIF_LTE_CSI_RPT_REGS;

typedef volatile struct {
    CUIF_LTE_CTRLCH_CC_RPT_REGS             CC[CUIF_LTE_UL_CC_NUM];
} CUIF_LTE_CTRLCH_RPT_REGS;

typedef volatile struct {
    CUIF_LTE_RX_COMM_RPT_REGS               COMM;
    CUIF_LTE_RX_CC_RPT_REGS                 CC[CUIF_LTE_CC_NUM];
    CUIF_LTE_RX_OC_RPT_REGS                 OC[CUIF_LTE_OC_NUM];
    CUIF_LTE_TEST_CC_REGS                   TEST_CC[CUIF_LTE_CC_NUM];
    CUIF_LTE_TEST_OC_REGS                   TEST_OC[CUIF_LTE_OC_NUM];
} CUIF_LTE_RX_RPT_REGS;

typedef volatile struct {
    CUIF_LTE_RX_BRP_COMM_RPT_REGS           BRP_COMM;   
    CUIF_LTE_RX_BRP_DL_CC_RPT_REGS          BRP_DL_CC[CUIF_LTE_CC_NUM];     
    CUIF_LTE_RX_BRP_UL_CC_RPT_REGS          BRP_UL_CC[CUIF_LTE_UL_CC_NUM];
    CUIF_LTE_RX_BRP_MIB_RPT_REGS            BRP_MIB_RPT[CUIF_LTE_MIB_CELL_NUM];
} CUIF_LTE_BRP_RPT_REGS;

typedef volatile struct {
    CUIF_LTE_NCM_CC_RPT_REGS                CC[CUIF_LTE_CC_NUM];
} CUIF_LTE_NCM_RPT_REGS;


typedef volatile struct {
    CUIF_LTE_CSI_RPT_REGS                   LTE_CSI_RPT[2]; // ping-pong since L1 read time region is too wide
    CUIF_LTE_RX_RPT_REGS                    LTE_RX_RPT;    
    CUIF_LTE_NCM_RPT_REGS                   LTE_NCM_RPT;
    CUIF_LTE_CTRLCH_RPT_REGS                LTE_CTRLCH_RPT[2]; // ping-pong 
} CUIF_LTE_DSP_WO_REGS;

/* LTE CTRL: DSP/L1 RW, Zero-Init. */

typedef volatile struct {
    CUIF_LTE_RX_CTRL_REGS                   LTE_RX_CTRL; 
    CUIF_LTE_NCM_CTRL_REGS                  LTE_NCM_CTRL;
    CUIF_LTE_NCM_ACTIVE_RAT_INFO_REGS       LTE_NCM_ACTIVE_RAT_INFO;  
    CUIF_LTE_NCM_AGC_INFO_REGS              LTE_NCM_AGC_INFO;  
    CUIF_LTE_POS_RPT_REGS                   LTE_POS_RPT[2]; // ping-pong
    CUIF_LTE_RX_BRP_STATIC_COMM_RPT_REGS    LTE_BRP_STATIC_COMM_RPT;
    CUIF_LTE_BRP_RPT_REGS                   LTE_BRP_RPT[2]; // ping-pong
} CUIF_LTE_RW_ZI_REGS;


/* ---------- */


typedef volatile struct {   
    // DSP RO    
    CUIF_LTE_DSP_RO_REGS    LTE_DSP_RO;

    // DSP WO
    CUIF_LTE_DSP_WO_REGS    LTE_DSP_WO;

    // DSP RW
    CUIF_LTE_RW_ZI_REGS     LTE_RW_ZI;
} CUIF_LTE_ALL_REGS;



/* ---------- */
// This section maintains by EL1D members which describing which CUIF portion to clean
//      In efficient SW design, EL1D will not write all CUIF in all time. 
//      To avoid garbage values in CUIF causing DSP/L1 abnormal function, we define region to ZI here

// Format: 
// [comment]
// {thread(inner/brp), event(bootup/abort/wakeup), base, length}

// [1. Boot up time, ZI to whole CUIF region] (the same as 91 logic)
// [thread=inner, event=bootup, base=&cuif_inner_brp, sizeof(CUIF_LTE_ALL_REGS)]

// [2. Dormant wake-up time, ZI to whole CUIF region] (the same as 91 logic)
// [thread=inner, event=wakeup, base=&cuif_inner_brp, sizeof(CUIF_LTE_ALL_REGS)]

#endif
