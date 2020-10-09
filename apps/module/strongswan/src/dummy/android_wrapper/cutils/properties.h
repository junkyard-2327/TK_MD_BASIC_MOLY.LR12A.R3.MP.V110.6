#include <stdint.h>
#include <errno.h>


#define PROP_VALUE_MAX 92
#define PROP_NAME_MAX 32
#define PROPERTY_VALUE_MAX PROP_VALUE_MAX
#define PROPERTY_KEY_MAX PROP_NAME_MAX

#if 1
int property_get(const char *key, char *value, const char *default_value);
char property_get_bool(const char *key, char default_value);
int32_t property_get_int32(const char *key, int32_t default_value);
int property_set(const char *key, const char *value);
#endif

