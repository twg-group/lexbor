/*
 * Copyright (C) 2018 Alexander Borisov
 *
 * Author: Alexander Borisov <lex.borisov@gmail.com>
 */

#ifndef LEXBOR_DOBJECT_H
#define LEXBOR_DOBJECT_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lexbor/core/base.h"
#include "lexbor/core/mem.h"
#include "lexbor/core/array.h"


typedef struct {
    lexbor_mem_t   *mem;
    lexbor_array_t *cache;

    size_t         allocated;
    size_t         struct_size;
}
lexbor_dobject_t;


lexbor_dobject_t *
lexbor_dobject_create(void);

lxb_status_t
lexbor_dobject_init(lexbor_dobject_t *dobject,
                    size_t chunk_size, size_t struct_size);

void
lexbor_dobject_clean(lexbor_dobject_t *dobject);

lexbor_dobject_t *
lexbor_dobject_destroy(lexbor_dobject_t *dobject, bool destroy_self);


uint8_t *
lexbor_dobject_init_list_entries(lexbor_dobject_t *dobject, size_t pos);


void *
lexbor_dobject_alloc(lexbor_dobject_t *dobject);

void *
lexbor_dobject_calloc(lexbor_dobject_t *dobject);

void *
lexbor_dobject_free(lexbor_dobject_t *dobject, void *data);


void *
lexbor_dobject_by_absolute_position(lexbor_dobject_t *dobject, size_t pos);


/*
 * Inline functions
 */
lxb_inline size_t
lexbor_dobject_allocated(lexbor_dobject_t *dobject)
{
    return dobject->allocated;
}

lxb_inline size_t
lexbor_dobject_cache_length(lexbor_dobject_t *dobject)
{
    return lexbor_array_length(dobject->cache);
}


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* LEXBOR_DOBJECT_H */


