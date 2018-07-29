/*
 * Copyright (C) 2018 Alexander Borisov
 *
 * Author: Alexander Borisov <lex.borisov@gmail.com>
 */

#ifndef LEXBOR_HTML_VIDEO_ELEMENT_H
#define LEXBOR_HTML_VIDEO_ELEMENT_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lexbor/html/interface.h"
#include "lexbor/html/interfaces/media_element.h"


struct lxb_html_video_element {
    lxb_html_media_element_t media_element;
};


lxb_html_video_element_t *
lxb_html_video_element_create(lxb_html_document_t *document);

lxb_html_video_element_t *
lxb_html_video_element_destroy(lxb_html_video_element_t *video_element);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* LEXBOR_HTML_VIDEO_ELEMENT_H */
