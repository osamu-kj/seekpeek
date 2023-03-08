#ifndef PARSE_H
#define PARSE_H

#include <gtk/gtk.h>
#include <lexbor/html/html.h>
#include <lexbor/dom/interfaces/text.h>
#include "../global/resources.h"

extern GtkWidget *tabs_notebook;

// Subparsers for all the different types of html nodes.
// Those are tipically called straight from the switch
// statement inside the parse_node function.
GtkWidget *node_subparser_p_tag(lxb_dom_node_t *node); 
GtkWidget *node_subparser_h_tag(lxb_dom_node_t *node); 
GtkWidget *node_subparser_b_tag(lxb_dom_node_t *node); 
GtkWidget *node_subparser_i_tag(lxb_dom_node_t *node); 
GtkWidget *node_subparser_a_tag(lxb_dom_node_t *node);
GtkWidget *node_subparser_img_tag(lxb_dom_node_t *node);

GtkWidget *parse_node(lxb_dom_node_t *node); 
void parse_structure(lxb_dom_node_t *node, GtkWidget *container); 

#endif 