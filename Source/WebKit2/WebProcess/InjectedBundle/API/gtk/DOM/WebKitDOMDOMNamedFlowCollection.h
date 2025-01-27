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

#ifndef WebKitDOMDOMNamedFlowCollection_h
#define WebKitDOMDOMNamedFlowCollection_h

#ifdef WEBKIT_DOM_USE_UNSTABLE_API

#include <glib-object.h>
#include <webkitdom/WebKitDOMObject.h>
#include <webkitdom/webkitdomdefines-unstable.h>

G_BEGIN_DECLS

#define WEBKIT_DOM_TYPE_DOM_NAMED_FLOW_COLLECTION            (webkit_dom_dom_named_flow_collection_get_type())
#define WEBKIT_DOM_DOM_NAMED_FLOW_COLLECTION(obj)            (G_TYPE_CHECK_INSTANCE_CAST((obj), WEBKIT_DOM_TYPE_DOM_NAMED_FLOW_COLLECTION, WebKitDOMDOMNamedFlowCollection))
#define WEBKIT_DOM_DOM_NAMED_FLOW_COLLECTION_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass),  WEBKIT_DOM_TYPE_DOM_NAMED_FLOW_COLLECTION, WebKitDOMDOMNamedFlowCollectionClass)
#define WEBKIT_DOM_IS_DOM_NAMED_FLOW_COLLECTION(obj)         (G_TYPE_CHECK_INSTANCE_TYPE((obj), WEBKIT_DOM_TYPE_DOM_NAMED_FLOW_COLLECTION))
#define WEBKIT_DOM_IS_DOM_NAMED_FLOW_COLLECTION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass),  WEBKIT_DOM_TYPE_DOM_NAMED_FLOW_COLLECTION))
#define WEBKIT_DOM_DOM_NAMED_FLOW_COLLECTION_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj),  WEBKIT_DOM_TYPE_DOM_NAMED_FLOW_COLLECTION, WebKitDOMDOMNamedFlowCollectionClass))

struct _WebKitDOMDOMNamedFlowCollection {
    WebKitDOMObject parent_instance;
};

struct _WebKitDOMDOMNamedFlowCollectionClass {
    WebKitDOMObjectClass parent_class;
};

WEBKIT_API GType
webkit_dom_dom_named_flow_collection_get_type(void);

/**
 * webkit_dom_dom_named_flow_collection_item:
 * @self: A #WebKitDOMDOMNamedFlowCollection
 * @index: A #gulong
 *
 * Returns: (transfer full): A #WebKitDOMWebKitNamedFlow
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMWebKitNamedFlow*
webkit_dom_dom_named_flow_collection_item(WebKitDOMDOMNamedFlowCollection* self, gulong index);

/**
 * webkit_dom_dom_named_flow_collection_named_item:
 * @self: A #WebKitDOMDOMNamedFlowCollection
 * @name: A #gchar
 *
 * Returns: (transfer full): A #WebKitDOMWebKitNamedFlow
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMWebKitNamedFlow*
webkit_dom_dom_named_flow_collection_named_item(WebKitDOMDOMNamedFlowCollection* self, const gchar* name);

/**
 * webkit_dom_dom_named_flow_collection_get_length:
 * @self: A #WebKitDOMDOMNamedFlowCollection
 *
 * Returns: A #gulong
 *
 * Stability: Unstable
**/
WEBKIT_API gulong
webkit_dom_dom_named_flow_collection_get_length(WebKitDOMDOMNamedFlowCollection* self);

G_END_DECLS

#endif /* WEBKIT_DOM_USE_UNSTABLE_API */
#endif /* WebKitDOMDOMNamedFlowCollection_h */
