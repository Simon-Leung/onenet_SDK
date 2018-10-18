# ifndef REGINA_SENSOR_DATA_H_
# define REGINA_SENSOR_DATA_H_

# include "regina/regina_common_schema.h"

# ifdef __cplusplus
extern "C" {
# endif

# ifndef P176953_T4_UNION_NULL_OR_BYTES_H_
# define P176953_T4_UNION_NULL_OR_BYTES_H_

# define P176953_T4_UNION_NULL_OR_BYTES_BRANCH_0    0
# define P176953_T4_UNION_NULL_OR_BYTES_BRANCH_1    1

regina_union_t *p176953_t4_union_null_or_bytes_branch_0_create();
regina_union_t *p176953_t4_union_null_or_bytes_branch_1_create();

regina_union_t *p176953_t4_union_null_or_bytes_deserialize(avro_reader_t reader);

# endif /* P176953_T4_UNION_NULL_OR_BYTES_H_ */

typedef struct {
    int32_t lac;
    int32_t cell_id;
    int32_t signal_level;
    int32_t voltage;
    int32_t chip_info_time;
    regina_union_t * user_data;
    regina_string_t * imei;
    regina_string_t * temperature;
    regina_string_t * upload_time;

    serialize_fn serialize;
    get_size_fn  get_size;
    destroy_fn   destroy;
} p176953_t4_v100_t;

p176953_t4_v100_t *p176953_t4_v100_create();
p176953_t4_v100_t *p176953_t4_v100_deserialize(avro_reader_t reader);

#ifdef __cplusplus
}      /* extern "C" */
#endif
#endif