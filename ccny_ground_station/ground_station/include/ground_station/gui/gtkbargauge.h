/*
*  Gtk Bar Gauge Widget
*  Copyright (C) 2010, CCNY Robotics Lab
*  Gautier Dumonteil <gautier.dumonteil@gmail.com>
*  http://robotics.ccny.cuny.edu
*
*  This program is free software: you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation, either version 3 of the License, or
*  (at your option) any later version.
*
*  This program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*
*  You should have received a copy of the GNU General Public License
*  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef __GTK_BAR_GAUGE_H__
#define __GTK_BAR_GAUGE_H__

#include <gtk/gtk.h>
#include <glib-object.h>
#include <math.h>
#include <time.h>

#define GTK_BAR_GAUGE_MAX_STRING  256       /* Size of a text string */
#define GTK_BAR_GAUGE_MODEL_X 300
#define GTK_BAR_GAUGE_MODEL_Y 300

G_BEGIN_DECLS typedef struct _GtkBarGaugeClass
{
  GtkDrawingAreaClass parent_class;

} GtkBarGaugeClass;

typedef struct _GtkBarGauge
{
  GtkDrawingArea parent;

  /* < private > */
} GtkBarGauge;

#define GTK_BAR_GAUGE_TYPE			(gtk_bar_gauge_get_type ())
#define GTK_BAR_GAUGE(obj)			(G_TYPE_CHECK_INSTANCE_CAST ((obj), GTK_BAR_GAUGE_TYPE, GtkBarGauge))
#define GTK_BAR_GAUGE_CLASS(obj)	(G_TYPE_CHECK_CLASS_CAST ((obj), GTK_BAR_GAUGE, GtkBarGaugeClass))
#define IS_GTK_BAR_GAUGE(obj)		(G_TYPE_CHECK_INSTANCE_TYPE ((obj), GTK_BAR_GAUGE_TYPE))
#define IS_GTK_BAR_GAUGE_CLASS(obj)	(G_TYPE_CHECK_CLASS_TYPE ((obj), GTK_BAR_GAUGE_TYPE))
#define GTK_BAR_GAUGE_GET_CLASS	(G_TYPE_INSTANCE_GET_CLASS ((obj), GTK_BAR_GAUGE_TYPE, GtkBarGaugeClass))

extern GType gtk_bar_gauge_get_type (void) G_GNUC_CONST;
extern GtkWidget *gtk_bar_gauge_new (void);
extern void gtk_bar_gauge_set_value (GtkBarGauge * bg, gint bar_index, gdouble val);
extern void gtk_bar_gauge_redraw (GtkBarGauge * bg);

G_END_DECLS
#endif