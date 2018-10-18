# ifndef REGINA_PROFILE_H_
# define REGINA_PROFILE_H_

# include "regina/regina_common_schema.h"

# ifdef __cplusplus
extern "C" {
# endif

typedef struct {
    regina_string_t * sn;

    serialize_fn serialize;
    get_size_fn  get_size;
    destroy_fn   destroy;
} p176953_t0_v100_t;

p176953_t0_v100_t *p176953_t0_v100_create();
p176953_t0_v100_t *p176953_t0_v100_deserialize(avro_reader_t reader);

#ifdef __cplusplus
}      /* extern "C" */
#endif
#endif