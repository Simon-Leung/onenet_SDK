# include "regina_profile.h"
# include "regina/avro_io.h"
# include "regina/encoding.h"
# include "regina/allocator.h"

/*
 * AUTO-GENERATED CODE
 */

static void p176953_t0_v100_destroy(void *data)
{
    if (data) {
        p176953_t0_v100_t *record = (p176953_t0_v100_t *)data;

        regina_string_destroy(record->sn);
        regina_data_destroy(record);
    }
}

static void p176953_t0_v100_serialize(avro_writer_t writer, void *data)
{
    if (data) {
        p176953_t0_v100_t *record = (p176953_t0_v100_t *)data;

        regina_string_serialize(writer, record->sn);
    }
}

static size_t p176953_t0_v100_get_size(void *data)
{
    if (data) {
        size_t record_size = 0;
        p176953_t0_v100_t *record = (p176953_t0_v100_t *)data;

        record_size += regina_string_get_size(record->sn);

        return record_size;
    }

    return 0;
}

p176953_t0_v100_t *p176953_t0_v100_create()
{
    p176953_t0_v100_t *record = 
            (p176953_t0_v100_t *)regina_calloc(1, sizeof(p176953_t0_v100_t));

    if (record) {
        record->serialize = p176953_t0_v100_serialize;
        record->get_size = p176953_t0_v100_get_size;
        record->destroy = p176953_t0_v100_destroy;
    }

    return record;
}

p176953_t0_v100_t *p176953_t0_v100_deserialize(avro_reader_t reader)
{
    p176953_t0_v100_t *record = 
            (p176953_t0_v100_t *)regina_malloc(sizeof(p176953_t0_v100_t));

    if (record) {

        record->serialize = p176953_t0_v100_serialize;
        record->get_size = p176953_t0_v100_get_size;
        record->destroy = p176953_t0_v100_destroy;

        record->sn = regina_string_deserialize(reader);
    }

    return record;
}

