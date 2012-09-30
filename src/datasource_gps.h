/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * viking -- GPS Data and Topo Analyzer, Explorer, and Manager
 *
 * Copyright (C) 2012, Rob Norris <rw_norris@hotmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#include "viking.h"
#include "gtk/gtk.h"

gpointer datasource_gps_setup ( GtkWidget *dialog, gboolean only_tracks );
void datasource_gps_clean_up ( gpointer user_data );

gchar* datasource_gps_get_protocol ( gpointer user_data );
gchar* datasource_gps_get_descriptor ( gpointer user_data );

gboolean datasource_gps_get_do_tracks ( gpointer user_data );
gboolean datasource_gps_get_do_waypoints ( gpointer user_data );

gboolean datasource_gps_get_off ( gpointer user_data );
