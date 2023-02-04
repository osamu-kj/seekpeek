#include "./global.h"

void gui_alert(GtkWindow *window, GtkMessageType text_type, GtkButtonsType buttons, char *text) {
    GtkWidget *dialog = gtk_message_dialog_new (window,
                                    GTK_DIALOG_MODAL,
                                    text_type,
                                    buttons,
                                    text);

    g_signal_connect(dialog, "response", G_CALLBACK(gtk_window_destroy), NULL);

    gtk_widget_show(GTK_DIALOG(dialog));
}