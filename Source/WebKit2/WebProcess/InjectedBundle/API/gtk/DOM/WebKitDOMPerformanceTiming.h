/*
 *  This file is part of the WebKit open source project.
 *  This file has been generated by generate-bindings.pl. DO NOT MODIFY!
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public License
 *  along with this library; see the file COPYING.LIB.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301, USA.
 */

#ifndef WebKitDOMPerformanceTiming_h
#define WebKitDOMPerformanceTiming_h

#ifdef WEBKIT_DOM_USE_UNSTABLE_API

#include <glib-object.h>
#include <webkitdom/WebKitDOMObject.h>
#include <webkitdom/webkitdomdefines-unstable.h>

G_BEGIN_DECLS

#define WEBKIT_DOM_TYPE_PERFORMANCE_TIMING            (webkit_dom_performance_timing_get_type())
#define WEBKIT_DOM_PERFORMANCE_TIMING(obj)            (G_TYPE_CHECK_INSTANCE_CAST((obj), WEBKIT_DOM_TYPE_PERFORMANCE_TIMING, WebKitDOMPerformanceTiming))
#define WEBKIT_DOM_PERFORMANCE_TIMING_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass),  WEBKIT_DOM_TYPE_PERFORMANCE_TIMING, WebKitDOMPerformanceTimingClass)
#define WEBKIT_DOM_IS_PERFORMANCE_TIMING(obj)         (G_TYPE_CHECK_INSTANCE_TYPE((obj), WEBKIT_DOM_TYPE_PERFORMANCE_TIMING))
#define WEBKIT_DOM_IS_PERFORMANCE_TIMING_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass),  WEBKIT_DOM_TYPE_PERFORMANCE_TIMING))
#define WEBKIT_DOM_PERFORMANCE_TIMING_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj),  WEBKIT_DOM_TYPE_PERFORMANCE_TIMING, WebKitDOMPerformanceTimingClass))

struct _WebKitDOMPerformanceTiming {
    WebKitDOMObject parent_instance;
};

struct _WebKitDOMPerformanceTimingClass {
    WebKitDOMObjectClass parent_class;
};

WEBKIT_API GType
webkit_dom_performance_timing_get_type(void);

/**
 * webkit_dom_performance_timing_get_navigation_start:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_navigation_start(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_unload_event_start:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_unload_event_start(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_unload_event_end:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_unload_event_end(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_redirect_start:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_redirect_start(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_redirect_end:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_redirect_end(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_fetch_start:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_fetch_start(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_domain_lookup_start:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_domain_lookup_start(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_domain_lookup_end:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_domain_lookup_end(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_connect_start:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_connect_start(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_connect_end:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_connect_end(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_secure_connection_start:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_secure_connection_start(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_request_start:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_request_start(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_response_start:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_response_start(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_response_end:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_response_end(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_dom_loading:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_dom_loading(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_dom_interactive:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_dom_interactive(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_dom_content_loaded_event_start:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_dom_content_loaded_event_start(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_dom_content_loaded_event_end:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_dom_content_loaded_event_end(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_dom_complete:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_dom_complete(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_load_event_start:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_load_event_start(WebKitDOMPerformanceTiming* self);

/**
 * webkit_dom_performance_timing_get_load_event_end:
 * @self: A #WebKitDOMPerformanceTiming
 *
 * Returns: A #guint64
 *
 * Stability: Unstable
**/
WEBKIT_API guint64
webkit_dom_performance_timing_get_load_event_end(WebKitDOMPerformanceTiming* self);

G_END_DECLS

#endif /* WEBKIT_DOM_USE_UNSTABLE_API */
#endif /* WebKitDOMPerformanceTiming_h */
