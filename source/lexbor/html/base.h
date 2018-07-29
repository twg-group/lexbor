/*
 * Copyright (C) 2018 Alexander Borisov
 *
 * Author: Alexander Borisov <lex.borisov@gmail.com>
 */

#ifndef LEXBOR_HTML_BASE_H
#define LEXBOR_HTML_BASE_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lexbor/core/base.h"


#define LXB_HTML_VERSION_MAJOR 0
#define LXB_HTML_VERSION_MINOR 1
#define LXB_HTML_VERSION_PATCH 0

#define LXB_HTML_VERSION_STRING LEXBOR_STRINGIZE(LXB_HTML_VERSION_MAJOR) "."   \
                                LEXBOR_STRINGIZE(LXB_HTML_VERSION_MINOR) "."   \
                                LEXBOR_STRINGIZE(LXB_HTML_VERSION_PATCH)


typedef struct lxb_html_tree lxb_html_tree_t;

/*
 * Please, see lexbor/base.h lexbor_status_t
 */
typedef enum {
    LXB_HTML_STATUS_OK = 0x0000,
}
lxb_html_status_t;



#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* LEXBOR_HTML_BASE_H */
