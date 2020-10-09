
#define MDGDMA_SET_CONFIG_IMPL() \
    kal_uint8 chId; \
    kal_uint32 fixed_mode = 0; \
    kal_uint32 cs_en_value = 0; \
    kal_uint32 bst_size = GDMA_BST_SIZE_256B; \
    \
    /* Check bus width */ \
    if (gdma_cfg->gdma_bus_width.src_bus_width != GDMA_BUS_WIDTH_64BITS || gdma_cfg->gdma_bus_width.dst_bus_width != GDMA_BUS_WIDTH_64BITS) { \
        DRV_DBG_ASSERT; \
        return KAL_FALSE; \
    } \
    chId = gdma_cfg->gdma_sel_channel; \
    /* Check channel ID */ \
    if (chId >= GDMA_CH_MAX) { \
        DRV_DBG_ASSERT; \
        return KAL_FALSE; \
    } \
    /* PDN clear */ \
    DMA_MODULE_PDN_CLR(chId); \
    /* Chceck channel is active or not */ \
    if (DMA_MODULE_CHN_IS_ACTIVE(chId)) { \
        /* No need to set PDN */ \
        DRV_DBG_ASSERT; \
        return KAL_FALSE; \
    } \
    /* Set channel as stopped */ \
    DMA_MODULE_CHN_CLR(chId); \
    /* Check MEMSET mode */ \
    if (gdma_cfg->gdma_mod == GDMA_MOD_MEMSET) \
        fixed_mode = SA_FIXED; \
    /* Specify GPD checksum */ \
    if (gdma_cfg->gdma_cs_en == KAL_TRUE) \
        cs_en_value = FDMA_CS_EN; \
    /* Specify burst size */ \
    if ((gdma_cfg->gdma_bst_size != GDMA_BST_SIZE_1B) && (gdma_cfg->gdma_bst_size != GDMA_BST_SIZE_2B) && (gdma_cfg->gdma_bst_size != GDMA_BST_SIZE_4B)) \
        bst_size = gdma_cfg->gdma_bst_size; \
    /* Configure the channel */ \
    switch (gdma_cfg->gdma_mod) \
    { \
        case GDMA_MOD_LINKLIST: \
            DRV_WriteReg32(GDMA_FDCSR(chId),(DRV_Reg32(GDMA_FDCSR(chId)) & 0xFFFFF0FF) | cs_en_value); \
            DRV_WriteReg32(GDMA_FDSAR(chId), gdma_cfg->gdma_gpd_addr.gdma_src_Gpd); \
            DRV_WriteReg32(GDMA_FDDAR(chId), gdma_cfg->gdma_gpd_addr.gdma_dst_Gpd); \
            DRV_WriteReg32(GDMA_FDCR(chId), \
                FDMA_BST_BUS(bst_size, gdma_cfg->gdma_bus_width.src_bus_width, gdma_cfg->gdma_bus_width.dst_bus_width)); \
            DMA_MODULE_SET_PRIORITY_INT_FUNC(chId, gdma_cfg->gdma_priority, KAL_FALSE); \
            break; \
        case GDMA_MOD_BASIC: \
        case GDMA_MOD_MEMSET: \
            DRV_WriteReg32(GDMA_FDCSR(chId), (DRV_Reg32(GDMA_FDCSR(chId)) & 0xFFFFF0FF) | FDMA_MODE_BASIC); \
            DRV_WriteReg32(GDMA_FSIZE(chId), gdma_cfg->gdma_mod_basic_tx_size);\
            DRV_WriteReg32(GDMA_FDCR(chId), \
                FDMA_BST_BUS(bst_size, gdma_cfg->gdma_bus_width.src_bus_width, gdma_cfg->gdma_bus_width.dst_bus_width)  \
                | fixed_mode); \
            DRV_WriteReg32(GDMA_FDSAR(chId), gdma_cfg->gdma_gpd_addr.gdma_src_Gpd); \
            DRV_WriteReg32(GDMA_FDDAR(chId), gdma_cfg->gdma_gpd_addr.gdma_dst_Gpd); \
            DMA_MODULE_SET_PRIORITY_INT_FUNC(chId, gdma_cfg->gdma_priority, KAL_FALSE); \
            break; \
        case GDMA_MOD_DESCRIPTOR: \
            DRV_WriteReg32(GDMA_FDCSR(chId), (DRV_Reg32(GDMA_FDCSR(chId)) & 0xFFFFF0FF) | FDMA_MODE_DESCRIPTOR | cs_en_value); \
            DRV_WriteReg32(GDMA_FDSAR(chId), gdma_cfg->gdma_gpd_addr.gdma_src_Gpd); \
            DRV_WriteReg32(GDMA_FDDAR(chId), gdma_cfg->gdma_gpd_addr.gdma_dst_Gpd); \
            DRV_WriteReg32(GDMA_FDCR(chId), FDMA_BST_BUS(bst_size, gdma_cfg->gdma_bus_width.src_bus_width, gdma_cfg->gdma_bus_width.dst_bus_width)); \
            DMA_MODULE_SET_PRIORITY_INT_FUNC(chId, gdma_cfg->gdma_priority, KAL_FALSE); \
            break; \
        default: \
            break; \
    } \
    /* PDN set */ \
    DMA_MODULE_PDN_SET(chId); \
    return KAL_TRUE;


#define MDGDMA_START_CMD_IMPL() \
    DMA_MODULE_PDN_CLR(chId); \
    /* Chceck channel is active or not */ \
    if ((cmd == GDMA_START) && DMA_MODULE_CHN_IS_ACTIVE(chId)) { \
        DRV_DBG_ASSERT; \
        return KAL_FALSE; \
    } \
    /* TODO : RESUME command only support for linked list mode */ \
    DMA_MODULE_INTR_EN(chId); \
    /* Set channel as started */ \
    DMA_MODULE_CHN_SET(chId); \
    /* Trigger start command */ \
    DRV_WriteReg32_NPW(GDMA_FDCR(chId), DRV_Reg32(GDMA_FDCR(chId)) | ((cmd == GDMA_START) ? FDMA_START : FDMA_RESUME)); \
    return KAL_TRUE;


#define MDGDMA_STOP_CMD_IMPL() \
    /* PDN clear */ \
    DMA_MODULE_PDN_CLR(chId); \
    /* Trigger STOP command */ \
    DRV_WriteReg32_NPW(GDMA_FDCR(chId), DRV_Reg32(GDMA_FDCR(chId)) | FDMA_STOP); \
    /* Wait channel into inactive state */ \
    while (DMA_MODULE_CHN_IS_ACTIVE(chId) > 0) {}; \
    /* Clear channel interrupt */ \
    DMA_MODULE_CLR_INTR(chId); \
    /* PDN set */ \
    DMA_MODULE_PDN_SET(chId); \
    /* Set channel as stopped */ \
    DMA_MODULE_CHN_CLR(chId);


#define MDGDMA_GET_CURGPD_IMPL() \
    /* PDN clear */ \
    DMA_MODULE_PDN_CLR(chId); \
    /* Get current pointer */ \
    if (cur_gpd_addr != NULL) { \
        cur_gpd_addr->gdma_src_Gpd = DRV_Reg32(GDMA_FDSCPR(chId)); \
        cur_gpd_addr->gdma_dst_Gpd = DRV_Reg32(GDMA_FDDCPR(chId)); \
    } \
    /* PDN set */ \
    if (!DMA_MODULE_CHN_IS_STARTED(chId)) \
        DMA_MODULE_PDN_SET(chId);


#define MDGDMA_GET_STATUS_IMPL() \
    gdma_status_type_e status = GDMA_STOP; \
    \
    /* PDN clear */ \
    DMA_MODULE_PDN_CLR(chId); \
    /* Get channel status */ \
    if (DRV_Reg32(GDMA_FDCSR(chId)) & FDMA_STAT) { \
        status = GDMA_STARTED; \
    } \
    /* PDN set */ \
    if (!DMA_MODULE_CHN_IS_STARTED(chId)) \
        DMA_MODULE_PDN_SET(chId); \
    return status;


#define MDGDMA_REGISTER_CB_IMPL() \
    /* Parameter check */ \
    if (callback == NULL || cbType == NULL) { \
        DRV_DBG_ASSERT; \
        return KAL_FALSE; \
    } \
    /* Interrupt type check */ \
    if ((cbType->gdma_int_type + cbType->gdma_channel) >= GDMA_INT_TYPE_MAX) { \
        DRV_DBG_ASSERT; \
        return KAL_FALSE; \
    } \
    /* Save IRQ */ \
    DMA_MODULE_ENTER_CRITICAL_SECTION; \
    /* Register callback function */ \
    DMA_MODULE_REGISTER_CB(); \
    /* Restore IRQ */ \
    DMA_MODULE_LEAVE_CRITICAL_SECTION; \
    return KAL_TRUE;


#define MDGDMA_SET_PRIORITY_INT_IMPL() \
    switch (priority) \
    { \
        case GDMA_PRI_HIGH: \
        case GDMA_PRI_MEDIAN: \
        case GDMA_PRI_LOW: \
        default: \
            break; \
    }

