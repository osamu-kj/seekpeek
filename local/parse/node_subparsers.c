#include "parse.h"
#include "../global/environment.h"

GtkWidget *subparser_p_tag(lxb_dom_node_t *node) {
    GtkWidget *output_node = gtk_text_view_new(); 
    lxb_dom_node_t *child_node = node->first_child;

    if (child_node->local_name != LXB_TAG__TEXT)
        return NULL;
    
    lxb_dom_text_t *child_text_node= lxb_dom_interface_text(child_node);
    lxb_char_t *child_text_data = child_text_node->char_data.data.data;
    size_t child_text_length = child_text_node->char_data.data.length; 

    GtkWidget *text_buffer = gtk_text_buffer_new(NULL); 

    gtk_text_buffer_set_text(text_buffer, child_text_data, child_text_length);
    gtk_text_view_set_buffer(output_node, text_buffer);
    gtk_text_view_set_editable(output_node, (gboolean) FALSE);
    gtk_text_view_set_cursor_visible(output_node, (gboolean) FALSE);
    gtk_text_view_set_wrap_mode(output_node, GTK_WRAP_CHAR); 

    return output_node; 
}

GtkWidget *subparser_h_tag(lxb_dom_node_t *node) {
    GtkWidget *output_node = gtk_text_view_new(); 
    lxb_dom_node_t *child_node = node->first_child;

    if (child_node->local_name != LXB_TAG__TEXT)
        return NULL;
    
    lxb_dom_text_t *child_text_node= lxb_dom_interface_text(child_node);
    lxb_char_t *child_text_data = child_text_node->char_data.data.data;
    size_t child_text_length = child_text_node->char_data.data.length; 

    GtkWidget *text_buffer = gtk_text_buffer_new(NULL); 

    gtk_text_buffer_set_text(GTK_TEXT_BUFFER(text_buffer), child_text_data, child_text_length);
    gtk_text_view_set_buffer(GTK_TEXT_VIEW(output_node), GTK_TEXT_BUFFER(text_buffer));
    gtk_text_view_set_editable(GTK_TEXT_VIEW(output_node), (gboolean) FALSE);
    gtk_text_view_set_cursor_visible(GTK_TEXT_VIEW(output_node), (gboolean) FALSE);
    gtk_text_view_set_wrap_mode(GTK_TEXT_VIEW(output_node), GTK_WRAP_CHAR); 

    gtk_widget_add_css_class(output_node, "header"); 
    switch (node->local_name) {
        case LXB_TAG_H1: 
            gtk_widget_add_css_class(output_node, "header-1"); 
        break; 
        case LXB_TAG_H2:
            gtk_widget_add_css_class(output_node, "header-2");
        break; 
        case LXB_TAG_H3: 
            gtk_widget_add_css_class(output_node, "header-3");
        break; 
        case LXB_TAG_H4: 
            gtk_widget_add_css_class(output_node, "header-4");
        break; 
        case LXB_TAG_H5: 
            gtk_widget_add_css_class(output_node, "header-5"); 
        break; 
        case LXB_TAG_H6: 
            gtk_widget_add_css_class(output_node, "header-6");
        break; 
    } 

    return output_node; 
}

GtkWidget *subparser_b_tag(lxb_dom_node_t *node) {
    GtkWidget *output_node = gtk_text_view_new(); 
    lxb_dom_node_t *child_node = node->first_child;

    if (child_node->local_name != LXB_TAG__TEXT)
        return NULL;
    
    lxb_dom_text_t *child_text_node= lxb_dom_interface_text(child_node);
    lxb_char_t *child_text_data = child_text_node->char_data.data.data;
    size_t child_text_length = child_text_node->char_data.data.length; 

    GtkWidget *text_buffer = gtk_text_buffer_new(NULL); 

    gtk_text_buffer_set_text(GTK_TEXT_BUFFER(text_buffer), child_text_data, child_text_length);
    gtk_text_view_set_buffer(GTK_TEXT_VIEW(output_node), GTK_TEXT_BUFFER(text_buffer));
    gtk_text_view_set_editable(GTK_TEXT_VIEW(output_node), (gboolean) FALSE);
    gtk_text_view_set_cursor_visible(GTK_TEXT_VIEW(output_node), (gboolean) FALSE);
    gtk_text_view_set_wrap_mode(GTK_TEXT_VIEW(output_node), GTK_WRAP_CHAR); 
    gtk_widget_add_css_class(output_node, "bold-text");

    return output_node; 
}

GtkWidget *subparser_i_tag(lxb_dom_node_t *node) {
    GtkWidget *output_node = gtk_text_view_new(); 
    lxb_dom_node_t *child_node = node->first_child;

    if (child_node->local_name != LXB_TAG__TEXT)
        return NULL;
    
    lxb_dom_text_t *child_text_node= lxb_dom_interface_text(child_node);
    lxb_char_t *child_text_data = child_text_node->char_data.data.data;
    size_t child_text_length = child_text_node->char_data.data.length; 

    GtkWidget *text_buffer = gtk_text_buffer_new(NULL); 

    gtk_text_buffer_set_text(GTK_TEXT_BUFFER(text_buffer), child_text_data, child_text_length);
    gtk_text_view_set_buffer(GTK_TEXT_VIEW(output_node), GTK_TEXT_BUFFER(text_buffer));
    gtk_text_view_set_editable(GTK_TEXT_VIEW(output_node), (gboolean) FALSE);
    gtk_text_view_set_cursor_visible(GTK_TEXT_VIEW(output_node), (gboolean) FALSE);
    gtk_widget_add_css_class(output_node, "italic-text");
    gtk_text_buffer_set_text(text_buffer, child_text_data, child_text_length);

    return output_node; 
}

GtkWidget *subparser_a_tag(lxb_dom_node_t *node) {

}

GtkWidget *subparser_img_tag(lxb_dom_node_t *node) {

}

GtkWidget *subparser_div_tag(lxb_dom_node_t *node) {

}