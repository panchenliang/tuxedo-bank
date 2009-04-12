/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * callbacks.c
 * Copyright (C) panchenliang 2009 <panchenliang@hotmail.com>
 * 
 * callbacks.c is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * callbacks.c is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <glade/glade.h>
#include "callbacks.h"


GladeXML* getXML(){
	return glade_xml_new("tuxedo_client.glade",NULL,NULL);
}
void show_login_dialog(){
	GtkDialog *dialog=GTK_DIALOG(glade_xml_get_widget(getXML(),"login_dialog"));
	int req=gtk_dialog_run(dialog);
	//gtk_main()
	if(req==-5)
	printf("a\n");
	gtk_widget_destroy((GtkWidget*)dialog);	
	
}

void close_login_dialog(){
	printf("1");
}
