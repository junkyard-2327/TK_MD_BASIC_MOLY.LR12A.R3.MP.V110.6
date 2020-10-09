/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

#define DRV_MDGDMA

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "intrCtrl.h"
#include "drv_comm.h"
#include "drvpdn.h"
#include "kal_hrt_api.h"
#include "gdma_reg.h"
#include "drv_gdma.h"
#include "drv_gdma_internal.h"
#include "us_timer.h"
#include "drv_mdgdma_impl.inc"
#include "ex_public.h"

#if !defined(DRV_MDGDMA_OFF)

/*****************************************************************************
 * Configuration
 *****************************************************************************/

/**
 * A internal compile option.
 * This option describes PDN operation is used in code or not.
 */
#define MDGDMA_PDN_SUPPORT      (1)
/**
 * A internal compile option.
 * This option decides we use macros as implementation in code or not.
 */
#define MDGDMA_IMPL_USE_MACRO   (1)
/**
 * A internal compile option.
 * When this option is set, driver API will assert when something wrong.
 */
#define MDGDMA_DEBUG_ASSERT     (0)

/*****************************************************************************
 * Function Declaration
 *****************************************************************************/

void drv_gdma_set_priority_int(gdma_channel_type_e chId, gdma_priority_e priority, kal_bool pdn);
void drv_gdma_clear_intr(gdma_channel_type_e chId);

/*****************************************************************************
 * Global Variables
 *****************************************************************************/

static gdma_log_t g_gdma = {0};

/* There are 2 FDMA channels in Gen93 GDMA. */
static kal_uint32 g_fdma_pdn_clr = 0;    /* bit0 indicates channel 0 clock status,  bit1 indicates channel 1 clock status. */

/* There are 4 HDMA channels in Gen93 GDMA. */
static kal_uint32 g_hdma_pdn_clr = 0;

/* g_gdma_is_pdn_clr  = KAL_FALSE    GDMA clock is disabled */
static kal_uint32 g_gdma_is_pdn_clr = KAL_FALSE;

static kal_uint32 g_gdma_clk_sts = 0;
#define MDGDMA_BASE_ADDR 0xA0020000
EX_BBREG_DUMP gdma_dump;
const kal_uint32 gdma_dump_regions[] = {
    MDGDMA_BASE_ADDR, 0x790, 4,
};

/* GDMA driver start/end time log */
#define GDMA_START_TIME  256  //uSIP can start GDMA without GDMA start API. uSIP will record 16 start_times
#define GDMA_END_TIME    272  //256 + 16

volatile kal_uint32 g_gdma_start_timing[GDMA_CH_MAX][GDMA_START_TIME];
volatile kal_uint32 g_gdma_start_idx[GDMA_CH_MAX];

/* (g_gdma_lisr_time1 - g_gdma_end_timing) = GDMA user callback duration */
volatile kal_uint32 g_gdma_end_timing[GDMA_CH_MAX][GDMA_END_TIME];
volatile kal_uint32 g_gdma_end_idx[GDMA_CH_MAX];

/* (g_gdma_lisr_time1 - g_gdma_lisr_time0) = GDMA LISR duration */
volatile kal_uint32 g_gdma_lisr_time0[GDMA_CH_MAX][GDMA_END_TIME];
volatile kal_uint32 g_gdma_lisr_time1[GDMA_CH_MAX][GDMA_END_TIME];

/*****************************************************************************
 * Macros
 *****************************************************************************/
/* MDGDMA Common Queue MACRO*/
#define CQ_RQST_HANDLE_IN_RANGE(handle)    ((handle) >= GDMA_CQ_HANDLE_START && (handle) < GDMA_CQ_MEMSET_HANDLE_END)
#define MGGDMA_CQ_MAX_DATA_SIZE            0xFFFFFF
#define MDGDMA_CQ_CH                       GDMA_CH_00

/* Enable MDGDMA Common Queue: MULTI_USER = 1 */
#define MULTI_USER           1

/*
 * CQ_IS_DECQ == 1. User request has been decq() before DMA copy all data to destination address completely.
 * CQ_IS_DECQ == 0. User request has been processed completely by DMA.
 */
volatile kal_bool CQ_IS_DECQ = 0;

/* 
 * ADT_ACTIVE == 1, ADT is using MDGDMA channel 0.
 * ADT_ACTIVE == 0, ADT do not use MDGDMA channel 0.
 */
volatile kal_bool ADT_ACTIVE = 0;
/* MDGDMA Common Queue global variables */
gdma_cq_t g_gdma_cq;  /* Common queue for memset */
gdma_cq_rqst_t * usr_request;  /* The user request is being processed by DMA */
volatile kal_uint8 g_gdma_cq_rqst_sts[GDMA_CQ_MEMSET_HANDLE_END][GDMA_CQ_RQST_STS];  /* User request status */
volatile kal_uint32 g_gdma_cq_rqst_timing[GDMA_CQ_MEMSET_HANDLE_END][GDMA_CQ_RQST_STS];  /* User request timestamp */

/*
  * Critical section macros
  */
#define DMA_MODULE_ENTER_CRITICAL_SECTION  kal_hrt_take_itc_lock(KAL_ITC_CORE012_GDMA, KAL_INFINITE_WAIT)
#define DMA_MODULE_LEAVE_CRITICAL_SECTION  kal_hrt_give_itc_lock(KAL_ITC_CORE012_GDMA)

/**
 * DMA bus settings
 */
#define FDMA_BST_BUS(bst,src,dst)   (BST_SIZE(bst) | DST_BUS_WIDTH(dst) | SRC_BUS_WIDTH(src))

/**
 * Configure PDN function is ready or not
 */
#if (MDGDMA_PDN_SUPPORT)
    #define MDGDMA_PDN_SET      PDN_SET(PDN_MDGDMA)
    #define MDGDMA_PDN_CLR      PDN_CLR(PDN_MDGDMA)
#else // GDMA_PDN_SUPPORT
    #define MDGDMA_PDN_SET
    #define MDGDMA_PDN_CLR
#endif // PDN_SUPPORT

/**
 * Check if MDGDMA API is initialized or not
 */
#define DMA_MODULE_INIT_CHECK() \
    if (g_gdma.inited == KAL_FALSE) { \
        drv_gdma_init(); \
    }

/**
 * A channel is started by API
 */
#define DMA_MODULE_CHN_SET(channel) \
    kal_atomic_set_bit(&(g_gdma.chn_started), channel);

/**
 * Check if a channel is started by API or not
 */
#define DMA_MODULE_CHN_IS_STARTED(channel) \
    (g_gdma.chn_started & (1 << channel))

/*
 * A channel is stopped by API
 */
#define DMA_MODULE_CHN_CLR(channel) \
    kal_atomic_clear_bit(&(g_gdma.chn_started), channel);

/**
 * Check if a channel h/w is in active state or not
 */
#define DMA_MODULE_CHN_IS_ACTIVE(channel) \
    (DRV_Reg32(GDMA_FDCSR(channel)) & FDMA_STAT)

/**
 * Configure MDGDMA interrupt as unmask
 */
#define DMA_MODULE_INTR_EN(channel) \
    DRV_WriteReg32(GDMA_GIMRKC0, g_gdma.intr_en[0] & FDMA_INT_BITS_MASK); \
    DRV_WriteReg32(GDMA_GIMRKC1, g_gdma.intr_en[1] & FDMA_INT_BITS_MASK);

/**
 * Configure MDGDMA interrupt as mask
 */
#define DMA_MODULE_INTR_DIS(channel) \
    DRV_WriteReg32(GDMA_GIMRKS0, g_gdma.intr_en[0] & FDMA_INT_BITS_MASK); \
    DRV_WriteReg32(GDMA_GIMRKS1, g_gdma.intr_en[1] & FDMA_INT_BITS_MASK);

/**
 * Register interrupt callback function
 */
#define DMA_MODULE_REGISTER_CB() \
    g_gdma.callback[cbType->gdma_int_type + cbType->gdma_channel] = callback; \
    if (cbType->gdma_int_type < GDMA_REGION_ACCESS_ERR) { \
        if (cbType->gdma_channel == GDMA_CH_00) { \
            kal_atomic_set_bit(&(g_gdma.cb_status[0]), cbType->gdma_int_type); \
            kal_atomic_set_bit(&(g_gdma.intr_en[0]), cbType->gdma_int_type); \
        } else { \
            kal_atomic_set_bit(&(g_gdma.cb_status[1]), cbType->gdma_int_type); \
            kal_atomic_set_bit(&(g_gdma.intr_en[1]), cbType->gdma_int_type); \
        } \
    } else { \
        if (cbType->gdma_channel == GDMA_CH_00) { \
            kal_atomic_set_bit(&(g_gdma.cb_status[0]), (cbType->gdma_int_type - 1)); \
            kal_atomic_set_bit(&(g_gdma.intr_en[0]), (cbType->gdma_int_type - 1)); \
        } else { \
            kal_atomic_set_bit(&(g_gdma.cb_status[1]), (cbType->gdma_int_type - 1)); \
            kal_atomic_set_bit(&(g_gdma.intr_en[1]), (cbType->gdma_int_type - 1)); \
        } \
    }

/*
 * Clear a channel's all interrupt status
 */
#define DMA_MODULE_CLR_INTR(channel) \
    drv_gdma_clear_intr(channel);

/*
 * Check GDMA FDMA channel interrupts status
 */
#define GDMA_CHECK_INT_STS(ch_idx, index) \
    (((index < GDMA_REGION_ACCESS_ERR) && \
      (g_gdma.cb_status[ch_idx] & (1 << index)) && \
      (g_gdma.intr_status[ch_idx] & (1 << index))) \
      || \
      ((index >= GDMA_REGION_ACCESS_ERR) && \
      (g_gdma.cb_status[ch_idx] & (1 << (GDMA_REGION_ACCESS_ERR - 1))) && \
      (g_gdma.intr_status[ch_idx] & (1 << (GDMA_REGION_ACCESS_ERR - 1)))))

/*****************************************************************************
 * PDN Implementation
 *****************************************************************************/

/**
 * PDN check and do PDN operation
 */
static void GDMA_PDN_CHK()
{
    if ((g_gdma_is_pdn_clr == KAL_FALSE) && (g_fdma_pdn_clr != 0 || g_hdma_pdn_clr != 0)) {
        MDGDMA_PDN_CLR;
        g_gdma_is_pdn_clr = KAL_TRUE;
    } else if ((g_gdma_is_pdn_clr == KAL_TRUE) && (g_fdma_pdn_clr == 0 && g_hdma_pdn_clr == 0)) {
        MDGDMA_PDN_SET;
        g_gdma_is_pdn_clr = KAL_FALSE;
    }
}

/**
 * Clear PDN of specified channel
 */
static void FDMA_PDN_CHN_CLR(kal_uint32 channel)
{
    /* Enter critical section */
    DMA_MODULE_ENTER_CRITICAL_SECTION;
    
    g_fdma_pdn_clr |= (1<<channel);
    GDMA_PDN_CHK();

    DMA_MODULE_LEAVE_CRITICAL_SECTION;
}

/**
 * Set PDN of specified channel
 */
static void FDMA_PDN_CHN_SET(kal_uint32 channel)
{
    /* Enter critical section */
    DMA_MODULE_ENTER_CRITICAL_SECTION;
    
    g_fdma_pdn_clr &= ~(1<<channel);
    GDMA_PDN_CHK();

    DMA_MODULE_LEAVE_CRITICAL_SECTION;
}

/**
 * Check PDN status of specified HDMA channel
 */
kal_bool HDMA_PDN_STS(kal_uint32 channel)
{
	if (g_hdma_pdn_clr & (1 << channel)) {
		return KAL_FALSE;
	}
	return KAL_TRUE;
}

/**
 * Clear PDN of specified HDMA channel
 */
void HDMA_PDN_CLR(kal_uint32 channel)
{
    /* Enter critical section */
    DMA_MODULE_ENTER_CRITICAL_SECTION;
    
    g_hdma_pdn_clr |= (1<<channel);
    GDMA_PDN_CHK();

    DMA_MODULE_LEAVE_CRITICAL_SECTION;
}

/**
 * Set PDN of specified HDMA channel
 */
void HDMA_PDN_SET(kal_uint32 channel)
{
    /* Enter critical section */
    DMA_MODULE_ENTER_CRITICAL_SECTION;
    
    g_hdma_pdn_clr &= ~(1<<channel);
    GDMA_PDN_CHK();

    DMA_MODULE_LEAVE_CRITICAL_SECTION;
}

/**
 * Wrapper of channel PDN set
 */
#define DMA_MODULE_PDN_SET(chn)     FDMA_PDN_CHN_SET(chn)

/**
 * Wrapper of channel PDN clear
 */
#define DMA_MODULE_PDN_CLR(chn)     FDMA_PDN_CHN_CLR(chn)

/**
 * ASSERT when driver call is error
 */
#if defined(MDGDMA_DEBUG_ASSERT)
    #define DRV_DBG_ASSERT      ASSERT(0)
#else
    #define DRV_DBG_ASSERT
#endif

/**
 * Internal set priority macro
 */
#define DMA_MODULE_SET_PRIORITY_INT_FUNC                drv_gdma_set_priority_int

/*****************************************************************************
 * Implementation
 *****************************************************************************/
kal_bool gdma_bbreg_dump_callback(void)
{
    /* Record GDMA clock status at exception time */
    g_gdma_clk_sts = !PDN_STS(PDN_MDGDMA);

    /* Enable GDMA clock for dump GDMA registers */
    PDN_CLR(PDN_MDGDMA);
    return KAL_TRUE;
}

static void drv_default_callback(gdma_cbParameter_t *gpd_info)
{
    kal_uint32 ASSERT_IN_GDMA_DEFAULT_CALLBACK = 0;
    ASSERT(ASSERT_IN_GDMA_DEFAULT_CALLBACK);
}

void drv_gdma_get_cbinfo(kal_uint32 int_idx)
{
    if (int_idx < GDMA_DST_DONE) {
        g_gdma.cb_info.gdma_channel = int_idx;
        g_gdma.cb_info.gdma_int_type = GDMA_SRC_DONE;
        g_gdma.cb_info.gpd_info.gdma_src_Gpd = DRV_Reg32(GDMA_FDSCPR(int_idx));
        g_gdma.cb_info.gpd_info.gdma_dst_Gpd = DRV_Reg32(GDMA_FDDCPR(int_idx));
    } else if (int_idx < GDMA_SRC_QUE_EMPTY) {
        g_gdma.cb_info.gdma_channel = int_idx - GDMA_DST_DONE;
        g_gdma.cb_info.gdma_int_type = GDMA_DST_DONE;
        g_gdma.cb_info.gpd_info.gdma_src_Gpd = DRV_Reg32(GDMA_FDSCPR((kal_uint32)(int_idx - GDMA_DST_DONE)));
        g_gdma.cb_info.gpd_info.gdma_dst_Gpd = DRV_Reg32(GDMA_FDDCPR((kal_uint32)(int_idx - GDMA_DST_DONE)));
    } else if (int_idx < GDMA_DST_QUE_EMPTY) {
        g_gdma.cb_info.gdma_channel = int_idx - GDMA_SRC_QUE_EMPTY;
        g_gdma.cb_info.gdma_int_type = GDMA_SRC_QUE_EMPTY;
        g_gdma.cb_info.gpd_info.gdma_src_Gpd = DRV_Reg32(GDMA_FDSCPR((kal_uint32)(int_idx - GDMA_SRC_QUE_EMPTY)));
        g_gdma.cb_info.gpd_info.gdma_dst_Gpd = DRV_Reg32(GDMA_FDDCPR((kal_uint32)(int_idx - GDMA_SRC_QUE_EMPTY)));
    } else if (int_idx < GDMA_LEN_ERR) {
        g_gdma.cb_info.gdma_channel = int_idx - GDMA_DST_QUE_EMPTY;
        g_gdma.cb_info.gdma_int_type = GDMA_DST_QUE_EMPTY;
        g_gdma.cb_info.gpd_info.gdma_src_Gpd = DRV_Reg32(GDMA_FDSCPR((kal_uint32)(int_idx - GDMA_DST_QUE_EMPTY)));
        g_gdma.cb_info.gpd_info.gdma_dst_Gpd = DRV_Reg32(GDMA_FDDCPR((kal_uint32)(int_idx - GDMA_DST_QUE_EMPTY)));
    } else if (int_idx < GDMA_ALO_LEN_ERR) {
        g_gdma.cb_info.gdma_channel = int_idx - GDMA_LEN_ERR;
        g_gdma.cb_info.gdma_int_type = GDMA_LEN_ERR;
        g_gdma.cb_info.gpd_info.gdma_src_Gpd = DRV_Reg32(GDMA_FDSCPR((kal_uint32)(int_idx - GDMA_LEN_ERR)));
        g_gdma.cb_info.gpd_info.gdma_dst_Gpd = DRV_Reg32(GDMA_FDDCPR((kal_uint32)(int_idx - GDMA_LEN_ERR)));
    } else if (int_idx < GDMA_BD_CS_ERR) {
        g_gdma.cb_info.gdma_channel = int_idx - GDMA_ALO_LEN_ERR;
        g_gdma.cb_info.gdma_int_type = GDMA_ALO_LEN_ERR;
        g_gdma.cb_info.gpd_info.gdma_src_Gpd = DRV_Reg32(GDMA_FDSCPR((kal_uint32)(int_idx - GDMA_ALO_LEN_ERR)));
        g_gdma.cb_info.gpd_info.gdma_dst_Gpd = DRV_Reg32(GDMA_FDDCPR((kal_uint32)(int_idx - GDMA_ALO_LEN_ERR)));
    } else if (int_idx < GDMA_GPD_CS_ERR) {
        g_gdma.cb_info.gdma_channel = int_idx - GDMA_BD_CS_ERR;
        g_gdma.cb_info.gdma_int_type = GDMA_BD_CS_ERR;
        g_gdma.cb_info.gpd_info.gdma_src_Gpd = DRV_Reg32(GDMA_FDSCPR((kal_uint32)(int_idx - GDMA_BD_CS_ERR)));
        g_gdma.cb_info.gpd_info.gdma_dst_Gpd = DRV_Reg32(GDMA_FDDCPR((kal_uint32)(int_idx - GDMA_BD_CS_ERR)));
    } else if (int_idx < GDMA_REGION_ACCESS_ERR) {
        g_gdma.cb_info.gdma_channel = int_idx - GDMA_GPD_CS_ERR;
        g_gdma.cb_info.gdma_int_type = GDMA_GPD_CS_ERR;
        g_gdma.cb_info.gpd_info.gdma_src_Gpd = DRV_Reg32(GDMA_FDSCPR((kal_uint32)(int_idx - GDMA_GPD_CS_ERR)));
        g_gdma.cb_info.gpd_info.gdma_dst_Gpd = DRV_Reg32(GDMA_FDDCPR((kal_uint32)(int_idx - GDMA_GPD_CS_ERR)));
    } else {
        g_gdma.cb_info.gdma_channel = int_idx - GDMA_REGION_ACCESS_ERR;
        g_gdma.cb_info.gdma_int_type = GDMA_REGION_ACCESS_ERR;
        g_gdma.cb_info.gpd_info.gdma_src_Gpd = DRV_Reg32(GDMA_FDSCPR((kal_uint32)(int_idx - GDMA_REGION_ACCESS_ERR)));
        g_gdma.cb_info.gpd_info.gdma_dst_Gpd = DRV_Reg32(GDMA_FDDCPR((kal_uint32)(int_idx - GDMA_REGION_ACCESS_ERR)));
    }
}

/*-----------------------------------------------------------------------*
 *  Gen93 GDMA channel 1 interrrupt LISR.
 *  Channel 1 user only use Source Queue Empty Interrupt.
 *-----------------------------------------------------------------------*/
void drv_gdma_ch1_lisr(kal_uint32 irq_id)
{
    /* Check interrupt ID is correct */
    ASSERT(GDMA_FDMA1_INTR_ID == irq_id);

    g_gdma_lisr_time0[irq_id-17][g_gdma_end_idx[irq_id-17]] = ust_get_current_time();

    /* Keep interrupt status */
    g_gdma.intr_status[1] = DRV_Reg32(GDMA_GISAR1);

    /* Ack interrupt status */
    DRV_WriteReg32_NPW(GDMA_GISAR1, g_gdma.intr_status[1] & 0x11111111);

    if (GDMA_CHECK_INT_STS(1, GDMA_SRC_QUE_EMPTY)) {
        /* Get information */
        g_gdma.cb_info.gdma_channel = GDMA_CH_01;
        g_gdma.cb_info.gdma_int_type = GDMA_SRC_QUE_EMPTY;
        g_gdma.cb_info.gpd_info.gdma_src_Gpd = DRV_Reg32(GDMA_FDSCPR((kal_uint32)(GDMA_CH_01)));
        g_gdma.cb_info.gpd_info.gdma_dst_Gpd = DRV_Reg32(GDMA_FDDCPR((kal_uint32)(GDMA_CH_01)));

        g_gdma_end_timing[GDMA_CH_01][g_gdma_end_idx[GDMA_CH_01]] = ust_get_current_time();

        g_gdma.callback[GDMA_SRC_QUE_EMPTY + 1](&g_gdma.cb_info);
        g_gdma.intr_cnt[GDMA_SRC_QUE_EMPTY + 1]++;

        /* Record user callback duration */
        g_gdma_lisr_time1[GDMA_CH_01][g_gdma_end_idx[GDMA_CH_01]] = ust_get_current_time();
        g_gdma_end_idx[GDMA_CH_01] = (g_gdma_end_idx[GDMA_CH_01] + 1) % GDMA_END_TIME;

    }
}

/*-----------------------------------------------------------------------*
 *  Gen93 GDMA channel 0 interrrupt LISR.
 *  Channel 0 users: DSM(dsmgr.c) and Common Queue
 *  NOTE:
 *          DSM can preempts Common Queue when Common Queue is using channel 0.
 *-----------------------------------------------------------------------*/
void drv_gdma_ch0_lisr(kal_uint32 irq_id)
{
    kal_uint32 index = 0;
    
    /* Check interrupt ID is correct */
    ASSERT(GDMA_FDMA0_INTR_ID == irq_id);

    g_gdma_lisr_time0[irq_id-17][g_gdma_end_idx[irq_id-17]] = ust_get_current_time();

    /* Keep interrupt status */
    g_gdma.intr_status[0] = DRV_Reg32(GDMA_GISAR0);

    /* Ack interrupt status */
    DRV_WriteReg32_NPW(GDMA_GISAR0, g_gdma.intr_status[0] & 0x11111111);

    /* Log interrupt status and invoke callback function */
    for (index = 0; index < GDMA_INT_TYPE_MAX; index += 4) {
        /* Check GDMA FDMA channel 0 interrupts status */
        if (GDMA_CHECK_INT_STS(0, index)) {
            drv_gdma_get_cbinfo(index);
            /* Record GDMA done FRC */
            g_gdma_end_timing[GDMA_CH_00][g_gdma_end_idx[GDMA_CH_00]] = ust_get_current_time();
            
            g_gdma.callback[index](&g_gdma.cb_info);
            g_gdma.intr_cnt[index]++;

            /* Record user callback duration */
            g_gdma_lisr_time1[GDMA_CH_00][g_gdma_end_idx[GDMA_CH_00]] = ust_get_current_time();
            g_gdma_end_idx[GDMA_CH_00] = (g_gdma_end_idx[GDMA_CH_00] + 1) % GDMA_END_TIME;
        }
    }
}


/*-----------------------------------------------------------------------*
 * FUNCTION
 *   drv_gdma_init
 *
 * DESCRIPTION
 *   This function is to reset the hardware GDMA module.
 *
 * PARAMETERS
 *   None
 *
 * RETURNS
 *   None
 *-----------------------------------------------------------------------*/
kal_bool drv_gdma_init(void)
{
    kal_uint32 i = 0;
    gdma_cbType_t cbType;

    /* Module initialization check */
    if (g_gdma.inited == KAL_TRUE) {
        return KAL_TRUE;
    }
    
    /* Reset all callback function pointer */
    for (i = 0; i < GDMA_INT_TYPE_MAX; i++) {
        g_gdma.callback[i] = drv_default_callback;
    }
    /* Clear channel started flag */
    g_gdma.chn_started = 0;
    /* Setup IRQ */
    IRQ_Register_LISR(GDMA_FDMA0_INTR_ID, drv_gdma_ch0_lisr, "FDMA0 Handler");
    IRQSensitivity(GDMA_FDMA0_INTR_ID, LEVEL_SENSITIVE);
    IRQClearInt(GDMA_FDMA0_INTR_ID);
    IRQUnmask(GDMA_FDMA0_INTR_ID);

    IRQ_Register_LISR(GDMA_FDMA1_INTR_ID, drv_gdma_ch1_lisr, "FDMA1 Handler");
    IRQSensitivity(GDMA_FDMA1_INTR_ID, LEVEL_SENSITIVE);
    IRQClearInt(GDMA_FDMA1_INTR_ID);
    IRQUnmask(GDMA_FDMA1_INTR_ID);

    /* Register MDGDMA common queue interrupt callback function */
    cbType.gdma_channel = MDGDMA_CQ_CH;
    cbType.gdma_int_type = GDMA_DST_DONE;
    ASSERT(drv_gdma_register_callback(&cbType, drv_gdma_cq_cb) == KAL_TRUE);

    /* Init MDGDMA Common Queue */
    memset(&g_gdma_cq, 0, sizeof(g_gdma_cq));

    /* Register BB register dump */
    gdma_dump.regions = (kal_uint32*)gdma_dump_regions;
    gdma_dump.num = sizeof(gdma_dump_regions)/(sizeof(kal_uint32) * 3);
    gdma_dump.bbreg_dump_callback = gdma_bbreg_dump_callback;
    EX_REGISTER_BBREG_DUMP(&gdma_dump);

    g_gdma.inited = KAL_TRUE;

    return KAL_TRUE;
}

/*-----------------------------------------------------------------------*
 * FUNCTION
 *   drv_gdma_set_config
 *
 * DESCRIPTION
 *   This function is to configure the GDMA. (channel tx mode, src address, dst address, tx size, bst/bus width)
 *
 * PARAMETERS
 *   gdma_cfg_t *gdmaCfg_p
 *
 * RETURNS
 *   KAL_TRUE
 *   KAL_FALSE
 *-----------------------------------------------------------------------*/
#if MULTI_USER
kal_bool g_gdma_ADT_cq_sts;
gdma_pcb_f cq_ADT_callback;
#endif

kal_bool drv_gdma_set_config(gdma_cfg_t *gdma_cfg)
{
#if (MDGDMA_IMPL_USE_MACRO)

#if MULTI_USER
    gdma_cbType_t cbType;

    if(gdma_cfg->gdma_sel_channel == GDMA_CH_00)
    {
        /* PDN clear */ 
        DMA_MODULE_PDN_CLR(MDGDMA_CQ_CH); 

        DMA_MODULE_ENTER_CRITICAL_SECTION;
        /* Trigger STOP command */ 
        DRV_WriteReg32_NPW(GDMA_FDCR(MDGDMA_CQ_CH), DRV_Reg32(GDMA_FDCR(MDGDMA_CQ_CH)) | FDMA_STOP);
        /* Wait channel into inactive state */
        while (DMA_MODULE_CHN_IS_ACTIVE(MDGDMA_CQ_CH) > 0) {};
        /* Clear channel interrupt */
        DMA_MODULE_CLR_INTR(MDGDMA_CQ_CH);

        g_gdma_ADT_cq_sts = g_gdma_cq.gdma_cq_active;

        /* MDGDMA channel 0 will be occupied by ADT */
        ADT_ACTIVE = KAL_TRUE;

        DMA_MODULE_LEAVE_CRITICAL_SECTION;

        /* PDN set */
        DMA_MODULE_PDN_SET(MDGDMA_CQ_CH);
        /* Set channel as stopped */
        DMA_MODULE_CHN_CLR(MDGDMA_CQ_CH);
        
        /* Register MDGDMA common queue interrupt callback function */
        cbType.gdma_channel = MDGDMA_CQ_CH;
        cbType.gdma_int_type = GDMA_DST_DONE;
    
        DMA_MODULE_ENTER_CRITICAL_SECTION;
        ASSERT(drv_gdma_register_cq_cb(&cbType, cq_ADT_callback) == KAL_TRUE);
        DMA_MODULE_LEAVE_CRITICAL_SECTION;
    }
#endif

    MDGDMA_SET_CONFIG_IMPL();
#else // MDGDMA_IMPL_USE_MACRO
    return KAL_TRUE;
#endif

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

	return KAL_TRUE;
}

/*-----------------------------------------------------------------------*
 * FUNCTION
 *   drv_gdma_start_cmd
 *
 * DESCRIPTION
 *   This function is to start or resume the assigned GDMA channel.
 *
 * PARAMETERS
 *   gdma_channel_type_e chId
 *   gdma_start_cmd_type_e cmd
 *
 * RETURNS
 *   KAL_TRUE
 *   KAL_FALSE
 *-----------------------------------------------------------------------*/
kal_bool drv_gdma_start_cmd(gdma_channel_type_e chId, gdma_start_cmd_type_e cmd)
{
#if (MDGDMA_IMPL_USE_MACRO)
    /* Record user fire GDMA FRC */
    g_gdma_start_timing[chId][g_gdma_start_idx[chId]] = ust_get_current_time();
    g_gdma_start_idx[chId] = (g_gdma_start_idx[chId] + 1) % GDMA_START_TIME;

    MDGDMA_START_CMD_IMPL();
#else // MDGDMA_IMPL_USE_MACRO
    return KAL_TRUE;
#endif

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
	return KAL_TRUE;
}

/*-----------------------------------------------------------------------*
 * FUNCTION
 *   drv_gdma_stop_cmd
 *
 * DESCRIPTION
 *   This function is to stop the GDMA.
 *
 * PARAMETERS
 *   gdma_channel_type_e chId
 *
 * RETURNS
 *   None
 *-----------------------------------------------------------------------*/
void drv_gdma_stop_cmd(gdma_channel_type_e chId)
{
#if (MDGDMA_IMPL_USE_MACRO)
    MDGDMA_STOP_CMD_IMPL();
#else // MDGDMA_IMPL_USE_MACRO
    return KAL_TRUE;
#endif

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
}

void drv_gdma_set_priority_int(gdma_channel_type_e chId, gdma_priority_e priority, kal_bool pdn)
{
#if (MDGDMA_IMPL_USE_MACRO)
    MDGDMA_SET_PRIORITY_INT_IMPL();
#else // MDGDMA_IMPL_USE_MACRO
    if (pdn == KAL_TRUE) \
        DMA_MODULE_PDN_CLR(chId); \
    \
    switch (priority) \
    { \
        case GDMA_PRI_HIGH: \
        case GDMA_PRI_MEDIAN: \
        case GDMA_PRI_LOW: \
        default: \
            break; \
    } \
    \
    if (pdn == KAL_TRUE) \
        DMA_MODULE_PDN_SET(chId);
#endif // MDGDMA_IMPL_USE_MACRO
}

/*-----------------------------------------------------------------------*
 * FUNCTION
 *  drv_gdma_set_priority
 *
 * DESCRIPTION
 *  This function is to set priority of a channel
 *
 * PARAMETERS
 *   chId [in] Channel ID
 *   Priority [in] Priority ID. Value of gdma_priority_e.
 *
 * RETURNS
 *   None
 *
 *------------------------------------------------------------------------*/
void drv_gdma_set_priority(gdma_channel_type_e chId, gdma_priority_e priority)
{
    /* Set channel priority with PDN operation */
    drv_gdma_set_priority_int(chId, priority, KAL_TRUE);
}

/*-----------------------------------------------------------------------*
 * FUNCTION
 *   drv_gdma_get_curGPD
 *
 * DESCRIPTION
 *   This function is to get current GPD src and dst address.
 *
 * PARAMETERS
 *   gdma_channel_type_e chId
 *   gdma_gpd_addr_t *cur_gpd_addr
 *
 * RETURNS
 *   None
 *-----------------------------------------------------------------------*/
void drv_gdma_get_curGPD(gdma_channel_type_e chId, gdma_gpd_addr_t *cur_gpd_addr)
{
#if (MDGDMA_IMPL_USE_MACRO)
    MDGDMA_GET_CURGPD_IMPL();
#else // MDGDMA_IMPL_USE_MACRO
    return KAL_TRUE;
#endif

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
}

/*-----------------------------------------------------------------------*
 * FUNCTION
 *   drv_gdma_get_status
 *
 * DESCRIPTION
 *   This function is to get GDMA status (active or not).
 *
 * PARAMETERS
 *   gdma_channel_type_e chId
 *
 * RETURNS
 *   GDMA_STARTED
 *   GDMA_STOP
 *-----------------------------------------------------------------------*/
gdma_status_type_e drv_gdma_get_status(gdma_channel_type_e chId)
{
#if (MDGDMA_IMPL_USE_MACRO)
    MDGDMA_GET_STATUS_IMPL();
#else // MDGDMA_IMPL_USE_MACRO
    return KAL_TRUE;
#endif

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
    return GDMA_STOP;
}


/*-----------------------------------------------------------------------*
 * FUNCTION
 *   drv_gdma_register_callback
 *
 * DESCRIPTION
 *   This function is used to register GDMA call back function.
 *
 * PARAMETERS
 *   gdma_cbType_t cbtype
 *   gdma_pcb_f callback
 *
 * RETURNS
 *   KAL_TRUE
 *   KAL_FALSE
 *-----------------------------------------------------------------------*/
kal_bool drv_gdma_register_callback(gdma_cbType_t *cbType, gdma_pcb_f callback)
{
#if (MDGDMA_IMPL_USE_MACRO)

#if MULTI_USER
    if(cbType->gdma_channel == MDGDMA_CQ_CH && callback != drv_gdma_cq_cb)
    {
        cq_ADT_callback = callback;
    }
#endif

    MDGDMA_REGISTER_CB_IMPL();
#else // MDGDMA_IMPL_USE_MACRO
    return KAL_TRUE;
#endif

}

void drv_gdma_lock_sleep()
{
}

void drv_gdma_unlock_sleep()
{
}

void drv_gdma_clear_intr(gdma_channel_type_e chId)
{
    /* Clear channel  interrupt status */
    if(chId == GDMA_CH_00)
    {
        DRV_WriteReg32_NPW(GDMA_GISAR0, FDMA_INT_BITS_MASK);
    }
    else
    {
        DRV_WriteReg32_NPW(GDMA_GISAR1, FDMA_INT_BITS_MASK);
    }

}

void drv_gdma_notify_done(gdma_channel_type_e chId)
{
    DMA_MODULE_CHN_CLR(chId);
    /* PDN set */
    DMA_MODULE_PDN_SET(chId);
    
#if MULTI_USER
    if(chId == GDMA_CH_00)
    {
        gdma_cbType_t cbType;

        /* Register MDGDMA common queue interrupt callback function */
        cbType.gdma_channel = MDGDMA_CQ_CH;
        cbType.gdma_int_type = GDMA_DST_DONE;
        DMA_MODULE_ENTER_CRITICAL_SECTION;
        ASSERT(drv_gdma_register_cq_cb(&cbType, drv_gdma_cq_cb) == KAL_TRUE);
        DMA_MODULE_LEAVE_CRITICAL_SECTION;
    
        /* Trigger Common Queue to process users memset request */
        DMA_MODULE_ENTER_CRITICAL_SECTION;
    
        /* MDGDMA channel 0 will be released by ADT */
        ADT_ACTIVE = KAL_FALSE;
    
        if(g_gdma_ADT_cq_sts == KAL_TRUE)  //Common Queue is working when ADT preemptted channel 0.
        {
            g_gdma_ADT_cq_sts = KAL_FALSE;
            if(g_gdma_cq.gdma_cq_active == KAL_TRUE) //Common Queue current status
            {
                if(CQ_IS_DECQ == KAL_FALSE) 
                {
                    /* There are user requests in Common Queue. */
                    /* Get user request handle */
                    usr_request = drv_gdma_decq();
    
                    CQ_IS_DECQ = KAL_TRUE;
                }
                /* The CQ request is not processed completely by DMA when ADT preempts the DMA channel 0.
                              The CQ request should be rehandled. */
                DMA_MODULE_LEAVE_CRITICAL_SECTION;
            }
            else
            {
                /* There is no request in CQ */
                DMA_MODULE_LEAVE_CRITICAL_SECTION;
                return;
            }   
        }
        else //Common Queue is  NOT  working when ADT preemptted channel 0.
        {
            if((!(g_gdma_cq.gdma_cq_read == g_gdma_cq.gdma_cq_write)) && (CQ_IS_DECQ == KAL_FALSE))
            {
                /* Get user request handle */
                usr_request = drv_gdma_decq();
                CQ_IS_DECQ = KAL_TRUE;
                    
                DMA_MODULE_LEAVE_CRITICAL_SECTION;

            }
            else
            {
                DMA_MODULE_LEAVE_CRITICAL_SECTION;
                /* There is no user requests in Common Queue. 
                              There is no need to trigger Common Queue.  */
                return;
            }
        }
        
        /* PDN clear (enable clock) */
        DMA_MODULE_PDN_CLR(MDGDMA_CQ_CH);
        
        DRV_WriteReg32(GDMA_FDCSR(0), FDMA_MODE_BASIC);
        DRV_WriteReg32(GDMA_FSIZE(0), usr_request->dataSize);
        DRV_WriteReg32(GDMA_FDSAR(0), usr_request->srcAddr);
        DRV_WriteReg32(GDMA_FDDAR(0), usr_request->dstAddr);
        if((usr_request->handle >= GDMA_CQ_MEMSET_HANDLE_START) && (usr_request->handle < GDMA_CQ_MEMSET_HANDLE_END))
            DRV_WriteReg32(GDMA_FDCR(0), FDMA_BST_BUS(GDMA_BST_SIZE_256B, GDMA_BUS_WIDTH_64BITS, GDMA_BUS_WIDTH_64BITS) | SA_FIXED);
        else
            DRV_WriteReg32(GDMA_FDCR(0), FDMA_BST_BUS(GDMA_BST_SIZE_256B, GDMA_BUS_WIDTH_64BITS, GDMA_BUS_WIDTH_64BITS));
        
        /* Chceck channel is active or not */
        if (DMA_MODULE_CHN_IS_ACTIVE(MDGDMA_CQ_CH)) 
        {
            EXT_ASSERT(0, usr_request->handle, usr_request->srcAddr, usr_request->dstAddr);
        }
    
        DMA_MODULE_INTR_EN(MDGDMA_CQ_CH);
        /* Set channel as started */
        DMA_MODULE_CHN_SET(MDGDMA_CQ_CH);
        /* Trigger start command */
        DRV_WriteReg32_NPW(GDMA_FDCR(MDGDMA_CQ_CH), DRV_Reg32(GDMA_FDCR(MDGDMA_CQ_CH)) | FDMA_START);
    }
#endif

}

/*-----------------------------------------------------------------------*
 * FUNCTION
 *  drv_gdma_irq2mcu_config
 *
 * DESCRIPTION
 *  This function is used by user to set MDGDMA FDMA channel 1 irq to IA or uSIP0.
 *
 * PARAMETERS
 *   mcuType [in] gdma_mcu_type_e. FDMA channel 1 irq destination.
 *
 * RETURNS
 *   None
 *
 *------------------------------------------------------------------------*/
void drv_gdma_irq2mcu_config(gdma_irq2mcu_type_e mcuType)
{
    /* Set FDMA channel 1 irq destination */
    if (mcuType == GDMA_MCU_USIP0)
        DRV_WriteReg32(GDMA_IRQCON, FDMA1_IRQ_TO_USIP0);
    else
        DRV_WriteReg32(GDMA_IRQCON, FDMA1_IRQ_TO_IA);
}

void drv_gdma_clk_config(gdma_channel_type_e chId, gdma_clk_type_e cmd)
{
    if(cmd == GDMA_CLK_ENABLE)
    {
        /* Enable GDMA clock */
        DMA_MODULE_PDN_CLR(chId);
    }
    else
    {
        /* Disable GDMA clock */
        DMA_MODULE_PDN_SET(chId);
    }
}


/* MDGDMA Common Queue Code */
kal_bool drv_gdma_cq_is_full(void)
{
    /* Common queue is full: read index > write index  */
    if((g_gdma_cq.gdma_cq_read > g_gdma_cq.gdma_cq_write) && (g_gdma_cq.gdma_cq_write + 1 == g_gdma_cq.gdma_cq_read))
        return KAL_TRUE;
    /* Common queue is full: read index < write index */
    else if((g_gdma_cq.gdma_cq_read < g_gdma_cq.gdma_cq_write) && (g_gdma_cq.gdma_cq_read == 0) && (g_gdma_cq.gdma_cq_write + 1 == MDGDMA_CQ_SIZE))
        return KAL_TRUE;
    /* Common queue is not full */
    else
        return KAL_FALSE;

}

kal_bool drv_gdma_cq_is_empty(void)
{
    /* Enter critical section */
    DMA_MODULE_ENTER_CRITICAL_SECTION;
    
    if(g_gdma_cq.gdma_cq_read == g_gdma_cq.gdma_cq_write)
    {
        /* Set common queue status to inactive */
        g_gdma_cq.gdma_cq_active = KAL_FALSE;
        
        DMA_MODULE_LEAVE_CRITICAL_SECTION;
        return KAL_TRUE;
    }
    else
    {
        DMA_MODULE_LEAVE_CRITICAL_SECTION;
        return KAL_FALSE;
    }
}

void drv_gdma_encq(gdma_cq_rqst_handle_e handle, kal_uint32 srcAddr, kal_uint32 dstAddr, kal_uint32 dataSize)
{
    /* MDGDMA common queue is full */
    if(drv_gdma_cq_is_full())
        EXT_ASSERT(0, handle, srcAddr, dstAddr);
    
    /* Record user request start timestamp */
    g_gdma_cq_rqst_timing[handle][GDMA_CQ_RQST_STS_UNHANDLE] = ust_get_current_time();
    
    /* Put the user request to the common queue */
    g_gdma_cq.gdma_cq[g_gdma_cq.gdma_cq_write].handle   = handle;
    g_gdma_cq.gdma_cq[g_gdma_cq.gdma_cq_write].dataSize = dataSize;
    g_gdma_cq.gdma_cq[g_gdma_cq.gdma_cq_write].srcAddr  = srcAddr;
    g_gdma_cq.gdma_cq[g_gdma_cq.gdma_cq_write].dstAddr  = dstAddr;

    /* Update common queue write index */
    g_gdma_cq.gdma_cq_write = (g_gdma_cq.gdma_cq_write + 1) % MDGDMA_CQ_SIZE;

    /* User[handle] unhandle request count */
    g_gdma_cq_rqst_sts[handle][GDMA_CQ_RQST_STS_UNHANDLE] = (g_gdma_cq_rqst_sts[handle][GDMA_CQ_RQST_STS_UNHANDLE] + 1) % 255;

}

gdma_cq_rqst_t * drv_gdma_decq(void)
{
    gdma_cq_rqst_t * usr_rqst_ptr;

    /*Debug code*/
    if(g_gdma_cq.gdma_cq_read == g_gdma_cq.gdma_cq_write)
        ASSERT(0);
        //while(1);
    
    /* Get user request parameters */
    usr_rqst_ptr = &g_gdma_cq.gdma_cq[g_gdma_cq.gdma_cq_read];
    
    /* Update common queue read index */
    g_gdma_cq.gdma_cq_read = (g_gdma_cq.gdma_cq_read + 1) % MDGDMA_CQ_SIZE;

    return usr_rqst_ptr;
}

gdma_cq_rqst_rtn_e drv_gdma_trigger_cq(void)
{    
    gdma_cbType_t cbType;
    /* Register MDGDMA common queue interrupt callback function */
    cbType.gdma_channel = MDGDMA_CQ_CH;
    cbType.gdma_int_type = GDMA_DST_DONE;
    
    DMA_MODULE_ENTER_CRITICAL_SECTION;
    if(ADT_ACTIVE == KAL_FALSE)
        /* Register callback function */
        ASSERT(drv_gdma_register_cq_cb(&cbType, drv_gdma_cq_cb) == KAL_TRUE);
    DMA_MODULE_LEAVE_CRITICAL_SECTION;
    
    /* PDN clear (enable clock) */
    DMA_MODULE_PDN_CLR(MDGDMA_CQ_CH);
    
    DMA_MODULE_ENTER_CRITICAL_SECTION;
    
    if((!(g_gdma_cq.gdma_cq_read == g_gdma_cq.gdma_cq_write)) && ADT_ACTIVE == KAL_FALSE && CQ_IS_DECQ == KAL_FALSE)
    {
        /* Get user request handle */
        usr_request = drv_gdma_decq();
        CQ_IS_DECQ = KAL_TRUE;
        
        DRV_WriteReg32(GDMA_FDCSR(0), FDMA_MODE_BASIC);
        DRV_WriteReg32(GDMA_FSIZE(0), usr_request->dataSize);
        DRV_WriteReg32(GDMA_FDSAR(0), usr_request->srcAddr);
        DRV_WriteReg32(GDMA_FDDAR(0), usr_request->dstAddr);
        if((usr_request->handle >= GDMA_CQ_MEMSET_HANDLE_START) && (usr_request->handle < GDMA_CQ_MEMSET_HANDLE_END))
            DRV_WriteReg32(GDMA_FDCR(0), FDMA_BST_BUS(GDMA_BST_SIZE_256B, GDMA_BUS_WIDTH_64BITS, GDMA_BUS_WIDTH_64BITS) | SA_FIXED);
        else
            DRV_WriteReg32(GDMA_FDCR(0), FDMA_BST_BUS(GDMA_BST_SIZE_256B, GDMA_BUS_WIDTH_64BITS, GDMA_BUS_WIDTH_64BITS));

        /* Chceck channel is active or not */
        if (DMA_MODULE_CHN_IS_ACTIVE(MDGDMA_CQ_CH)) 
        {
            EXT_ASSERT(0, usr_request->handle, usr_request->srcAddr, usr_request->dstAddr);
        }

        DMA_MODULE_INTR_EN(MDGDMA_CQ_CH);
        /* Set channel as started */
        DMA_MODULE_CHN_SET(MDGDMA_CQ_CH);
    
        /* Trigger start command */
        DRV_WriteReg32_NPW(GDMA_FDCR(MDGDMA_CQ_CH), DRV_Reg32(GDMA_FDCR(MDGDMA_CQ_CH)) | FDMA_START);
        
    }
 
    DMA_MODULE_LEAVE_CRITICAL_SECTION;
    return GDMA_CQ_SUCCESS;
    
}

gdma_cq_rqst_rtn_e drv_gdma_cq_request(gdma_cq_rqst_handle_e handle, kal_uint32 srcAddr, kal_uint32 dstAddr, kal_uint32 dataSize)
{
    kal_bool gdma_cq_current_sts = KAL_FALSE;
        
    /* User request an illagel handle */
    if(!CQ_RQST_HANDLE_IN_RANGE(handle))
        return GDMA_CQ_FAIL_HANDLE_ERROR;
    
    /* Source and Destination address check */
    if((srcAddr == 0x0) || (dstAddr == 0x0))
        return GDMA_CQ_FAIL_ADDR_ERROR;
    if((dataSize >= 257) && (dataSize <= 263) && (0 != (dstAddr % 8)))
        return GDMA_CQ_FAIL_ADDR_ERROR;

    /* User data size over the max allowed data size */
    if((dataSize > MGGDMA_CQ_MAX_DATA_SIZE) || (dataSize == 0))
        return GDMA_CQ_FAIL_SIZE_ERROR;

    /* Enter critical section */
    DMA_MODULE_ENTER_CRITICAL_SECTION;

    /* Save the current common queue status */
    gdma_cq_current_sts = g_gdma_cq.gdma_cq_active;
    
    /* Put the user request to the common queue */
    drv_gdma_encq(handle, srcAddr, dstAddr, dataSize);

    /* Set MDGDMA common queue to active status */
    if(g_gdma_cq.gdma_cq_active == KAL_FALSE)
        g_gdma_cq.gdma_cq_active = KAL_TRUE;

    /* Leave critical section */
    DMA_MODULE_LEAVE_CRITICAL_SECTION;
    
    /* Trigger MDGDMA to copy user data, or return */
    if(gdma_cq_current_sts == KAL_FALSE)
    {
        drv_gdma_trigger_cq();
    }

    /* User request is received by common queue, but it's not mean that user request is processed successful */
    return GDMA_CQ_SUCCESS;

}

kal_bool drv_gdma_cq_rqst_polling(gdma_cq_rqst_handle_e handle)
{
    /* Polling until user(handle) all request done */
    while(g_gdma_cq_rqst_sts[handle][GDMA_CQ_RQST_STS_HANDLED] != g_gdma_cq_rqst_sts[handle][GDMA_CQ_RQST_STS_UNHANDLE]);

    return KAL_TRUE;
}

kal_bool drv_gdma_cq_rqst_done(gdma_cq_rqst_handle_e handle)
{
    /* Check user(handle) all request had been processed */
    if(g_gdma_cq_rqst_sts[handle][GDMA_CQ_RQST_STS_HANDLED] != g_gdma_cq_rqst_sts[handle][GDMA_CQ_RQST_STS_UNHANDLE])
        return KAL_FALSE;
    else
        return KAL_TRUE;

}

/* Global variable for save user memset pattern (kal_uint32 value) */
kal_uint64 saveValue[MDGDMA_CQ_SIZE] __IOCU2_NON_ALLOC_MCURW_HWRW_C_ALIGNED_ZI(64);
kal_uint8 temp_index;

gdma_cq_rqst_rtn_e drv_gdma_cq_memset_request(gdma_cq_rqst_handle_e handle, kal_uint32 value, kal_uint32 dstAddr, kal_uint32 dataSize)
{
    kal_bool gdma_cq_current_sts;
        
    /* User request an illagel handle */
    if(!CQ_RQST_HANDLE_IN_RANGE(handle))
        return GDMA_CQ_FAIL_HANDLE_ERROR;

    /* Destination address must be 8Bytes align */
    if(dstAddr == 0)
        return GDMA_CQ_FAIL_ADDR_ERROR;
    if((dataSize >= 257) && (dataSize <= 263) && (0 != (dstAddr % 8)))
        return GDMA_CQ_FAIL_ADDR_ERROR;

    /* User data size over the max allowed data size */
    if((dataSize > MGGDMA_CQ_MAX_DATA_SIZE) || (dataSize == 0))
        return GDMA_CQ_FAIL_SIZE_ERROR;

    /* Enter critical section */
    DMA_MODULE_ENTER_CRITICAL_SECTION;

    /* Save the current common queue status */
    gdma_cq_current_sts = g_gdma_cq.gdma_cq_active;

    /* Set MDGDMA common queue to active status */
    if(g_gdma_cq.gdma_cq_active == KAL_FALSE)
        g_gdma_cq.gdma_cq_active = KAL_TRUE;

    /* Save the memset pattern */
    value = (value & 0xFF) | ((value & 0xFF)<<8) | ((value & 0xFF)<<16) | ((value & 0xFF)<<24);
    saveValue[temp_index] = (kal_uint64)value | ((kal_uint64)value << 32);
    /* Put the user request to the common queue */
    drv_gdma_encq(handle, (kal_uint32)&saveValue[temp_index], dstAddr, dataSize);
    temp_index = (temp_index + 1) % MDGDMA_CQ_SIZE;

    /* Leave critical section */
    DMA_MODULE_LEAVE_CRITICAL_SECTION;

    /* Trigger MDGDMA to copy user data, or return */
    if(gdma_cq_current_sts == KAL_FALSE)
    {
        drv_gdma_trigger_cq();
    }

    /* User request is received by common queue, but it's not mean that user request is processed successful */
    return GDMA_CQ_SUCCESS;
    
}

void drv_gdma_cq_cb(gdma_cbParameter_t *gpd_info)
{
    DMA_MODULE_ENTER_CRITICAL_SECTION;
    /* The user request is processed completely */
    CQ_IS_DECQ = KAL_FALSE;
    
    /* User[handle] handled request count */
    g_gdma_cq_rqst_sts[usr_request->handle][GDMA_CQ_RQST_STS_HANDLED] = (g_gdma_cq_rqst_sts[usr_request->handle][GDMA_CQ_RQST_STS_HANDLED] + 1) % 255;
    DMA_MODULE_LEAVE_CRITICAL_SECTION;

    /* Record user request end timestamp */
    g_gdma_cq_rqst_timing[usr_request->handle][GDMA_CQ_RQST_STS_HANDLED] = ust_get_current_time();
    
    /* Handle the next user request in the common queue */
    if(!drv_gdma_cq_is_empty())
    {
        DMA_MODULE_ENTER_CRITICAL_SECTION;

        if(ADT_ACTIVE != KAL_TRUE)
        {
            /* Get user request handle */
            usr_request = drv_gdma_decq();

            CQ_IS_DECQ = KAL_TRUE;
    
            DRV_WriteReg32(GDMA_FSIZE(0), usr_request->dataSize);
            DRV_WriteReg32(GDMA_FDSAR(0), usr_request->srcAddr);
            DRV_WriteReg32(GDMA_FDDAR(0), usr_request->dstAddr);

            /* Chceck channel is active or not */
            if (DMA_MODULE_CHN_IS_ACTIVE(MDGDMA_CQ_CH)) 
            {
                EXT_ASSERT(0, usr_request->handle, usr_request->srcAddr, usr_request->dstAddr);
            }

            DMA_MODULE_INTR_EN(MDGDMA_CQ_CH);
            /* Set channel as started */
            DMA_MODULE_CHN_SET(MDGDMA_CQ_CH);
            
            /* Trigger start command */
            DRV_WriteReg32_NPW(GDMA_FDCR(MDGDMA_CQ_CH), DRV_Reg32(GDMA_FDCR(MDGDMA_CQ_CH)) | FDMA_START);
            
            DMA_MODULE_LEAVE_CRITICAL_SECTION;
        }
        else
            DMA_MODULE_LEAVE_CRITICAL_SECTION;
        
    }
    else
        DMA_MODULE_PDN_SET(MDGDMA_CQ_CH);

}

kal_bool drv_gdma_register_cq_cb(gdma_cbType_t *cbType, gdma_pcb_f callback)
{
    DMA_MODULE_REGISTER_CB();
    return KAL_TRUE;
}

kal_bool drv_gdma_cq_memset_rqst_polling(gdma_cq_rqst_handle_e handle)
{
    /* Polling until user(handle) all request done */
    while(g_gdma_cq_rqst_sts[handle][GDMA_CQ_RQST_STS_HANDLED] != g_gdma_cq_rqst_sts[handle][GDMA_CQ_RQST_STS_UNHANDLE]);

    return KAL_TRUE;
}

#else /*!defined(DRV_GDMA_OFF)*/

#endif /*!defined(DRV_GDMA_OFF)*/
