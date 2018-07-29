/*
 * Copyright (C) 2018 Alexander Borisov
 *
 * Author: Alexander Borisov <lex.borisov@gmail.com>
 */

#ifndef LEXBOR_ARRAY_OBJ_H
#define LEXBOR_ARRAY_OBJ_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lexbor/core/base.h"


typedef struct {
    uint8_t *list;
    size_t  size;
    size_t  length;
    size_t  struct_size;
}
lexbor_array_obj_t;


lexbor_array_obj_t *
lexbor_array_obj_create(void);

lxb_status_t
lexbor_array_obj_init(lexbor_array_obj_t *array,
                      size_t size, size_t struct_size);

void
lexbor_array_obj_clean(lexbor_array_obj_t *array);

lexbor_array_obj_t *
lexbor_array_obj_destroy(lexbor_array_obj_t *array, bool self_destroy);


uint8_t *
lexbor_array_obj_expand(lexbor_array_obj_t *array, size_t up_to);


void *
lexbor_array_obj_push(lexbor_array_obj_t *array);

void *
lexbor_array_obj_pop(lexbor_array_obj_t *array);

void
lexbor_array_obj_delete(lexbor_array_obj_t *array, size_t begin, size_t length);


/*
 * Inline functions
 */
lxb_inline void
lexbor_array_obj_erase(lexbor_array_obj_t *array)
{
    memset(array, 0, sizeof(lexbor_array_obj_t));
}

lxb_inline void *
lexbor_array_obj_get(lexbor_array_obj_t *array, size_t idx)
{
    if (idx >= array->length) {
        return NULL;
    }

    return array->list + (idx * array->struct_size);
}

lxb_inline size_t
lexbor_array_obj_length(lexbor_array_obj_t *array)
{
    return array->length;
}

lxb_inline size_t
lexbor_array_obj_size(lexbor_array_obj_t *array)
{
    return array->size;
}

lxb_inline size_t
lexbor_array_obj_struct_size(lexbor_array_obj_t *array)
{
    return array->struct_size;
}


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* LEXBOR_ARRAY_OBJ_H */
