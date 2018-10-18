# ifndef REGINA_NOTIFICATION_H_
# define REGINA_NOTIFICATION_H_

# include "regina/regina_common_schema.h"

# ifdef __cplusplus
extern "C" {
# endif

# ifndef P176953_T3_UNION_NULL_OR_BYTES_H_
# define P176953_T3_UNION_NULL_OR_BYTES_H_

# define P176953_T3_UNION_NULL_OR_BYTES_BRANCH_0    0
# define P176953_T3_UNION_NULL_OR_BYTES_BRANCH_1    1

regina_union_t *p176953_t3_union_null_or_bytes_branch_0_create();
regina_union_t *p176953_t3_union_null_or_bytes_branch_1_create();

regina_union_t *p176953_t3_union_null_or_bytes_deserialize(avro_reader_t reader);

# endif /* P176953_T3_UNION_NULL_OR_BYTES_H_ */

# ifndef P176953_T3_UNION_NULL_OR_STRING_H_
# define P176953_T3_UNION_NULL_OR_STRING_H_

# define P176953_T3_UNION_NULL_OR_STRING_BRANCH_0    0
# define P176953_T3_UNION_NULL_OR_STRING_BRANCH_1    1

regina_union_t *p176953_t3_union_null_or_string_branch_0_create();
regina_union_t *p176953_t3_union_null_or_string_branch_1_create();

regina_union_t *p176953_t3_union_null_or_string_deserialize(avro_reader_t reader);

# endif /* P176953_T3_UNION_NULL_OR_STRING_H_ */

typedef struct {
    regina_union_t * server_command;
    regina_union_t * server_data;

    serialize_fn serialize;
    get_size_fn  get_size;
    destroy_fn   destroy;
} p176953_t3_v100_t;

p176953_t3_v100_t *p176953_t3_v100_create();
p176953_t3_v100_t *p176953_t3_v100_deserialize(avro_reader_t reader);

#ifdef __cplusplus
}      /* extern "C" */
#endif
#endif