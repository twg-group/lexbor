/*
 * Copyright (C) 2018 Alexander Borisov
 *
 * Author: Alexander Borisov <lex.borisov@gmail.com>
 */

#ifndef LEXBOR_HTML_PARSER_H
#define LEXBOR_HTML_PARSER_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lexbor/html/base.h"
#include "lexbor/html/tree.h"
#include "lexbor/html/interfaces/document.h"


typedef struct {
    lxb_html_tokenizer_t *tkz;
    lxb_html_tree_t      *tree;
    lxb_html_tag_heap_t  *tag_heap;

    lxb_status_t         status;
}
lxb_html_parser_t;


lxb_html_parser_t *
lxb_html_parser_create(void);

lxb_status_t
lxb_html_parser_init(lxb_html_parser_t *parser);

void
lxb_html_parser_clean(lxb_html_parser_t *parser);

lxb_html_parser_t *
lxb_html_parser_destroy(lxb_html_parser_t *parser, bool self_destroy);


lxb_html_document_t *
lxb_html_parse(lxb_html_parser_t *parser, const lxb_char_t *html, size_t size);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* LEXBOR_HTML_PARSER_H */
