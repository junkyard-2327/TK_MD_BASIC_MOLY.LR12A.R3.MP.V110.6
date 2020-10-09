#ifndef __DSP_EXCEP_DEF_H__
#define __DSP_EXCEP_DEF_H__

#if defined(MT6763) || defined(MT6739) || defined(MT6771) || defined(MT6295M) || defined(MT6765) || defined(MT6761) || defined(MT6768)
typedef enum{
	DSP_COMMON_REGION,
	BRP_LTE_ROCODE,
	BRP_FDD_ROCODE,
	FEC_TX_C2K_ROCODE,
	FEC_TX_WCDMA_ROCODE,
	FEC_TX_LTE_ROCODE,
	FEC_RX_C2K_ROCODE,
	FEC_RX_WCDMA_ROCODE,
	SCQ16_LTE_ROCODE,
	SCQ16_FDD_ROCODE,
	SCQ16_TDD_ROCODE,
	SCQ16_C2K_ROCODE,
	RAKE_FDD_ROCODE,
	RAKE_C2K_ROCODE
}DSP_EX_DDL_MODE;
#else
	#error "Undefined project name..."
#endif

#endif /* __DSP_EXCEP_DEF_H__ */
