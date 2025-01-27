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

#ifndef WebKitDOMWebKitNamedFlow_h
#define WebKitDOMWebKitNamedFlow_h

#ifdef WEBKIT_DOM_USE_UNSTABLE_API

#include <glib-object.h>
#include <webkitdom/WebKitDOMObject.h>
#include <webkitdom/webkitdomdefines-unstable.h>

G_BEGIN_DECLS

#define WEBKIT_DOM_TYPE_WEBKIT_NAMED_FLOW            (webkit_dom_webkit_named_flow_get_type())
#define WEBKIT_DOM_WEBKIT_NAMED_FLOW(obj)            (G_TYPE_CHECK_INSTANCE_CAST((obj), WEBKIT_DOM_TYPE_WEBKIT_NAMED_FLOW, WebKitDOMWebKitNamedFlow))
#define WEBKIT_DOM_WEBKIT_NAMED_FLOW_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass),  WEBKIT_DOM_TYPE_WEBKIT_NAMED_FLOW, WebKitDOMWebKitNamedFlowClass)
#define WEBKIT_DOM_IS_WEBKIT_NAMED_FLOW(obj)         (G_TYPE_CHECK_INSTANCE_TYPE((obj), WEBKIT_DOM_TYPE_WEBKIT_NAMED_FLOW))
#define WEBKIT_DOM_IS_WEBKIT_NAMED_FLOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass),  WEBKIT_DOM_TYPE_WEBKIT_NAMED_FLOW))
#define WEBKIT_DOM_WEBKIT_NAMED_FLOW_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj),  WEBKIT_DOM_TYPE_WEBKIT_NAMED_FLOW, WebKitDOMWebKitNamedFlowClass))

struct _WebKitDOMWebKitNamedFlow {
    WebKitDOMObject parent_instance;
};

struct _WebKitDOMWebKitNamedFlowClass {
    WebKitDOMObjectClass parent_class;
};

WEBKIT_API GType
webkit_dom_webkit_named_flow_get_type(void);

/**
 * webkit_dom_webkit_named_flow_get_regions_by_content:
 * @self: A #WebKitDOMWebKitNamedFlow
 * @contentNode: A #WebKitDOMNode
 *
 * Returns: (transfer full): A #WebKitDOMNodeList
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMNodeList*
webkit_dom_webkit_named_flow_get_regions_by_content(WebKitDOMWebKitNamedFlow* self, WebKitDOMNode* contentNode);

/**
 * webkit_dom_webkit_named_flow_get_regions:
 * @self: A #WebKitDOMWebKitNamedFlow
 *
 * Returns: (transfer full): A #WebKitDOMNodeList
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMNodeList*
webkit_dom_webkit_named_flow_get_regions(WebKitDOMWebKitNamedFlow* self);

/**
 * webkit_dom_webkit_named_flow_get_content:
 * @self: A #WebKitDOMWebKitNamedFlow
 *
 * Returns: (transfer full): A #WebKitDOMNodeList
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMNodeList*
webkit_dom_webkit_named_flow_get_content(WebKitDOMWebKitNamedFlow* self);

/**
 * webkit_dom_webkit_named_flow_get_name:
 * @self: A #WebKitDOMWebKitNamedFlow
 *
 * Returns: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API gchar*
webkit_dom_webkit_named_flow_get_name(WebKitDOMWebKitNamedFlow* self);

/**
 * webkit_dom_webkit_named_flow_get_overset:
 * @self: A #WebKitDOMWebKitNamedFlow
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_webkit_named_flow_get_overset(WebKitDOMWebKitNamedFlow* self);

/**
 * webkit_dom_webkit_named_flow_get_first_empty_region_index:
 * @self: A #WebKitDOMWebKitNamedFlow
 *
 * Returns: A #glong
 *
 * Stability: Unstable
**/
WEBKIT_API glong
webkit_dom_webkit_named_flow_get_first_empty_region_index(WebKitDOMWebKitNamedFlow* self);

G_END_DECLS

#endif /* WEBKIT_DOM_USE_UNSTABLE_API */
#endif /* WebKitDOMWebKitNamedFlow_h */
