# include "regina_sensor_data.h"
# include "regina/avro_io.h"
# include "regina/encoding.h"
# include "regina/allocator.h"

/*
 * AUTO-GENERATED CODE
 */

# ifndef P176953_T4_UNION_NULL_OR_BYTES_C_
# define P176953_T4_UNION_NULL_OR_BYTES_C_
static void p176953_t4_union_null_or_bytes_destroy(void *data)
{
    if (data) {
        regina_union_t *regina_union = (regina_union_t *)data;

        switch (regina_union->type) {
        case P176953_T4_UNION_NULL_OR_BYTES_BRANCH_1:
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

static size_t p176953_t4_union_null_or_bytes_get_size(void *data)
{
    if (data) {
        regina_union_t *regina_union = (regina_union_t *)data;
        size_t union_size = avro_long_get_size(regina_union->type);

        switch (regina_union->type) {
        case P176953_T4_UNION_NULL_OR_BYTES_BRANCH_1:
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

static void p176953_t4_union_null_or_bytes_serialize(avro_writer_t writer, void *data)
{
    if (data) {
        regina_union_t *regina_union = (regina_union_t *)data;
        avro_binary_encoding.write_long(writer, regina_union->type);

        switch (regina_union->type) {
        case P176953_T4_UNION_NULL_OR_BYTES_BRANCH_1:
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
static regina_union_t *p176953_t4_union_null_or_bytes_create()
{
    regina_union_t *regina_union = regina_calloc(1, sizeof(regina_union_t));

    if (regina_union) {
        regina_union->serialize = p176953_t4_union_null_or_bytes_serialize;
        regina_union->get_size = p176953_t4_union_null_or_bytes_get_size;
        regina_union->destroy = p176953_t4_union_null_or_bytes_destroy;
    }

    return regina_union;
}

regina_union_t *p176953_t4_union_null_or_bytes_branch_0_create()
{
    regina_union_t *regina_union = p176953_t4_union_null_or_bytes_create();
    if (regina_union) {
        regina_union->type = P176953_T4_UNION_NULL_OR_BYTES_BRANCH_0;
    }
    return regina_union;
}

regina_union_t *p176953_t4_union_null_or_bytes_branch_1_create()
{
    regina_union_t *regina_union = p176953_t4_union_null_or_bytes_create();
    if (regina_union) {
        regina_union->type = P176953_T4_UNION_NULL_OR_BYTES_BRANCH_1;
    }
    return regina_union;
}

regina_union_t *p176953_t4_union_null_or_bytes_deserialize(avro_reader_t reader)
{
    regina_union_t *regina_union = p176953_t4_union_null_or_bytes_create();

    if (regina_union) {
        int64_t branch;
        avro_binary_encoding.read_long(reader, &branch);
        regina_union->type = branch;

        switch (regina_union->type) {
        case P176953_T4_UNION_NULL_OR_BYTES_BRANCH_1: {
            regina_union->data = regina_bytes_deserialize(reader);
            break;
        }
        default:
            break;
        }
    }

    return regina_union;
}
# endif /* P176953_T4_UNION_NULL_OR_BYTES_C_ */

static void p176953_t4_v100_destroy(void *data)
{
    if (data) {
        p176953_t4_v100_t *record = (p176953_t4_v100_t *)data;

        if (record->user_data && record->user_data->destroy) {
            record->user_data->destroy(record->user_data);
        }
        regina_string_destroy(record->imei);
        regina_string_destroy(record->temperature);
        regina_string_destroy(record->upload_time);
        regina_data_destroy(record);
    }
}

static void p176953_t4_v100_serialize(avro_writer_t writer, void *data)
{
    if (data) {
        p176953_t4_v100_t *record = (p176953_t4_v100_t *)data;

        regina_int_serialize(writer, &record->lac);
        regina_int_serialize(writer, &record->cell_id);
        regina_int_serialize(writer, &record->signal_level);
        regina_int_serialize(writer, &record->voltage);
        regina_int_serialize(writer, &record->chip_info_time);
        record->user_data->serialize(writer, record->user_data);
        regina_string_serialize(writer, record->imei);
        regina_string_serialize(writer, record->temperature);
        regina_string_serialize(writer, record->upload_time);
    }
}

static size_t p176953_t4_v100_get_size(void *data)
{
    if (data) {
        size_t record_size = 0;
        p176953_t4_v100_t *record = (p176953_t4_v100_t *)data;

        record_size += regina_int_get_size(&record->lac);
        record_size += regina_int_get_size(&record->cell_id);
        record_size += regina_int_get_size(&record->signal_level);
        record_size += regina_int_get_size(&record->voltage);
        record_size += regina_int_get_size(&record->chip_info_time);
        record_size += record->user_data->get_size(record->user_data);
        record_size += regina_string_get_size(record->imei);
        record_size += regina_string_get_size(record->temperature);
        record_size += regina_string_get_size(record->upload_time);

        return record_size;
    }

    return 0;
}

p176953_t4_v100_t *p176953_t4_v100_create()
{
    p176953_t4_v100_t *record = 
            (p176953_t4_v100_t *)regina_calloc(1, sizeof(p176953_t4_v100_t));

    if (record) {
        record->serialize = p176953_t4_v100_serialize;
        record->get_size = p176953_t4_v100_get_size;
        record->destroy = p176953_t4_v100_destroy;
    }

    return record;
}

p176953_t4_v100_t *p176953_t4_v100_deserialize(avro_reader_t reader)
{
    p176953_t4_v100_t *record = 
            (p176953_t4_v100_t *)regina_malloc(sizeof(p176953_t4_v100_t));

    if (record) {

        record->serialize = p176953_t4_v100_serialize;
        record->get_size = p176953_t4_v100_get_size;
        record->destroy = p176953_t4_v100_destroy;

        avro_binary_encoding.read_int(reader, &record->lac);
        avro_binary_encoding.read_int(reader, &record->cell_id);
        avro_binary_encoding.read_int(reader, &record->signal_level);
        avro_binary_encoding.read_int(reader, &record->voltage);
        avro_binary_encoding.read_int(reader, &record->chip_info_time);
        record->user_data = p176953_t4_union_null_or_bytes_deserialize(reader);
        record->imei = regina_string_deserialize(reader);
        record->temperature = regina_string_deserialize(reader);
        record->upload_time = regina_string_deserialize(reader);
    }

    return record;
}

