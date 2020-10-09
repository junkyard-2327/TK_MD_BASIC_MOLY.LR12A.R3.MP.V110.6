#define ARRAY_ENT_NR(_array)  (sizeof(_array)/sizeof(_array[0]))


const char *g_nvram_white_list_for_multiple_attr[] = 
{
	"NVRAM_EF_SYS_LID",
	"NVRAM_EF_SML_LID",
	"NVRAM_EF_SIM_LOCK_LID"
};
const int g_nr_nvram_white_list_for_multiple_attr = ARRAY_ENT_NR(g_nvram_white_list_for_multiple_attr);

const char *g_nvram_white_list_for_write_protect_attr[] = 
{
	"NVRAM_EF_SYS_LID",
	"NVRAM_EF_IMEI_IMEISV_LID",
	"NVRAM_EF_NVRAM_LOCK_LID"
};
const int g_nr_nvram_white_list_for_write_protect_attr = ARRAY_ENT_NR(g_nvram_white_list_for_write_protect_attr);
