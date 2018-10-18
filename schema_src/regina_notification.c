# include "regina_notification.h"
# include "regina/avro_io.h"
# include "regina/encoding.h"
# include "regina/allocator.h"

/*
 * AUTO-GENERATED CODE
 */

# ifndef P176953_T3_UNION_NULL_OR_BYTES_C_
# define P176953_T3_UNION_NULL_OR_BYTES_C_
static void p176953_t3_union_null_or_bytes_destroy(void *data)
{
    if (data) {
        regina_union_t *regina_union = (regina_union_t *)data;

        switch (regina_union->type) {
        case P176953_T3_UNION_NULL_OR_BYTES_BRANCH_1:
        {
            if (regina_union->data) {
                regina_bytes_destroy(regina_union->data);
            }
            break;
        }
        default:
            break;
        }

        regina_data_destroy(regina_union);
    }
}

static size_t p176953_t3_union_null_or_bytes_get_size(void *data)
{
    if (data) {
        regina_union_t *regina_union = (regina_union_t *)data;
        size_t union_size = avro_long_get_size(regina_union->type);

        switch (regina_union->type) {
        case P176953_T3_UNION_NULL_OR_BYTES_BRANCH_1:
        {
            if (regina_union->data) {
                union_size += regina_bytes_get_size(regina_union->data);
            }
            break;
        }
        default:
            break;
        }

        return union_size;
    }

    return 0;
}

static void p176953_t3_union_null_or_bytes_serialize(avro_writer_t writer, void *data)
{
    if (data) {
        regina_union_t *regina_union = (regina_union_t *)data;
        avro_binary_encoding.write_long(writer, regina_union->type);

        switch (regina_union->type) {
        case P176953_T3_UNION_NULL_OR_BYTES_BRANCH_1:
        {
            if (regina_union->data) {
                regina_bytes_serialize(writer, regina_union->data);
            }
            break;
        }
        default:
            break;
        }
    }
}
static regina_union_t *p176953_t3_union_null_or_bytes_create()
{
    regina_union_t *regina_union = regina_calloc(1, sizeof(regina_union_t));

    if (regina_union) {
        regina_union->serialize = p176953_t3_union_null_or_bytes_serialize;
        regina_union->get_size = p176953_t3_union_null_or_bytes_get_size;
        regina_union->destroy = p176953_t3_union_null_or_bytes_destroy;
    }

    return regina_union;
}

regina_union_t *p176953_t3_union_null_or_bytes_branch_0_create()
{
    regina_union_t *regina_union = p176953_t3_union_null_or_bytes_create();
    if (regina_union) {
        regina_union->type = P176953_T3_UNION_NULL_OR_BYTES_BRANCH_0;
    }
    return regina_union;
}

regina_union_t *p176953_t3_union_null_or_bytes_branch_1_create()
{
    regina_union_t *regina_union = p176953_t3_union_null_or_bytes_create();
    if (regina_union) {
        regina_union->type = P176953_T3_UNION_NULL_OR_BYTES_BRANCH_1;
    }
    return regina_union;
}

regina_union_t *p176953_t3_union_null_or_bytes_deserialize(avro_reader_t reader)
{
    regina_union_t *regina_union = p176953_t3_union_null_or_bytes_create();

    if (regina_union) {
        int64_t branch;
        avro_binary_encoding.read_long(reader, &branch);
        regina_union->type = branch;

        switch (regina_union->type) {
        case P176953_T3_UNION_NULL_OR_BYTES_BRANCH_1: {
            regina_union->data = regina_bytes_deserialize(reader);
            break;
        }
        default:
            break;
        }
    }

    return regina_union;
}
# endif /* P176953_T3_UNION_NULL_OR_BYTES_C_ */

# ifndef P176953_T3_UNION_NULL_OR_STRING_C_
# define P176953_T3_UNION_NULL_OR_STRING_C_
static void p176953_t3_union_null_or_string_destroy(void *data)
{
    if (data) {
        regina_union_t *regina_union = (regina_union_t *)data;

        switch (regina_union->type) {
        case P176953_T3_UNION_NULL_OR_STRING_BRANCH_1:
        {
            if (regina_union->data) {
                regina_string_destroy(regina_union->data);
            }
            break;
        }
        default:
            break;
        }

        regina_data_destroy(regina_union);
    }
}

static size_t p176953_t3_union_null_or_string_get_size(void *data)
{
    if (data) {
        regina_union_t *regina_union = (regina_union_t *)data;
        size_t union_size = avro_long_get_size(regina_union->type);

        switch (regina_union->type) {
        case P176953_T3_UNION_NULL_OR_STRING_BRANCH_1:
        {
            if (regina_union->data) {
                union_size += regina_string_get_size(regina_union->data);
            }
            break;
        }
        default:
            break;
        }

        return union_size;
    }

    return 0;
}

static void p176953_t3_union_null_or_string_serialize(avro_writer_t writer, void *data)
{
    if (data) {
        regina_union_t *regina_union = (regina_union_t *)data;
        avro_binary_encoding.write_long(writer, regina_union->type);

        switch (regina_union->type) {
        case P176953_T3_UNION_NULL_OR_STRING_BRANCH_1:
        {
            if (regina_union->data) {
                regina_string_serialize(writer, regina_union->data);
            }
            break;
        }
        default:
            break;
        }
    }
}
static regina_union_t *p176953_t3_union_null_or_string_create()
{
    regina_union_t *regina_union = regina_calloc(1, sizeof(regina_union_t));

    if (regina_union) {
        regina_union->serialize = p176953_t3_union_null_or_string_serialize;
        regina_union->get_size = p176953_t3_union_null_or_string_get_size;
        regina_union->destroy = p176953_t3_union_null_or_string_destroy;
    }

    return regina_union;
}

regina_union_t *p176953_t3_union_null_or_string_branch_0_create()
{
    regina_union_t *regina_union = p176953_t3_union_null_or_string_create();
    if (regina_union) {
        regina_union->type = P176953_T3_UNION_NULL_OR_STRING_BRANCH_0;
    }
    return regina_union;
}

regina_union_t *p176953_t3_union_null_or_string_branch_1_create()
{
    regina_union_t *regina_union = p176953_t3_union_null_or_string_create();
    if (regina_union) {
        regina_union->type = P176953_T3_UNION_NULL_OR_STRING_BRANCH_1;
    }
    return regina_union;
}

regina_union_t *p176953_t3_union_null_or_string_deserialize(avro_reader_t reader)
{
    regina_union_t *regina_union = p176953_t3_union_null_or_string_create();

    if (regina_union) {
        int64_t branch;
        avro_binary_encoding.read_long(reader, &branch);
        regina_union->type = branch;

        switch (regina_union->type) {
        case P176953_T3_UNION_NULL_OR_STRING_BRANCH_1: {
            regina_union->data = regina_string_deserialize(reader);
            break;
        }
        default:
            break;
        }
    }

    return regina_union;
}
# endif /* P176953_T3_UNION_NULL_OR_STRING_C_ */

static void p176953_t3_v100_destroy(void *data)
{
    if (data) {
        p176953_t3_v100_t *record = (p176953_t3_v100_t *)data;

        if (record->server_command && record->server_command->destroy) {
            record->server_command->destroy(record->server_command);
        }
        if (record->server_data && record->server_data->destroy) {
            record->server_data->destroy(record->server_data);
        }
        regina_data_destroy(record);
    }
}

static void p176953_t3_v100_serialize(avro_writer_t writer, void *data)
{
    if (data) {
        p176953_t3_v100_t *record = (p176953_t3_v100_t *)data;

        record->server_command->serialize(writer, record->server_command);
        record->server_data->serialize(writer, record->server_data);
    }
}

static size_t p176953_t3_v100_get_size(void *data)
{
    if (data) {
        size_t record_size = 0;
        p176953_t3_v100_t *record = (p176953_t3_v100_t *)data;

        record_size += record->server_command->get_size(record->server_command);
        record_size += record->server_data->get_size(record->server_data);

        return record_size;
    }

    return 0;
}

p176953_t3_v100_t *p176953_t3_v100_create()
{
    p176953_t3_v100_t *record = 
            (p176953_t3_v100_t *)regina_calloc(1, sizeof(p176953_t3_v100_t));

    if (record) {
        record->serialize = p176953_t3_v100_serialize;
        record->get_size = p176953_t3_v100_get_size;
        record->destroy = p176953_t3_v100_destroy;
    }

    return record;
}

p176953_t3_v100_t *p176953_t3_v100_deserialize(avro_reader_t reader)
{
    p176953_t3_v100_t *record = 
            (p176953_t3_v100_t *)regina_malloc(sizeof(p176953_t3_v100_t));

    if (record) {

        record->serialize = p176953_t3_v100_serialize;
        record->get_size = p176953_t3_v100_get_size;
        record->destroy = p176953_t3_v100_destroy;

        record->server_command = p176953_t3_union_null_or_bytes_deserialize(reader);
        record->server_data = p176953_t3_union_null_or_string_deserialize(reader);
    }

    return record;
}

