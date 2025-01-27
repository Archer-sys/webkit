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

#ifndef WebKitDOMDocumentFragmentUnstable_h
#define WebKitDOMDocumentFragmentUnstable_h

#ifdef WEBKIT_DOM_USE_UNSTABLE_API

#include <webkitdom/webkitdomdefines-unstable.h>

G_BEGIN_DECLS

/**
 * webkit_dom_document_fragment_get_element_by_id:
 * @self: A #WebKitDOMDocumentFragment
 * @elementId: A #gchar
 *
 * Returns: (transfer none): A #WebKitDOMElement
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMElement*
webkit_dom_document_fragment_get_element_by_id(WebKitDOMDocumentFragment* self, const gchar* elementId);

/**
 * webkit_dom_document_fragment_query_selector:
 * @self: A #WebKitDOMDocumentFragment
 * @selectors: A #gchar
 * @error: #GError
 *
 * Returns: (transfer none): A #WebKitDOMElement
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMElement*
webkit_dom_document_fragment_query_selector(WebKitDOMDocumentFragment* self, const gchar* selectors, GError** error);

/**
 * webkit_dom_document_fragment_query_selector_all:
 * @self: A #WebKitDOMDocumentFragment
 * @selectors: A #gchar
 * @error: #GError
 *
 * Returns: (transfer full): A #WebKitDOMNodeList
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMNodeList*
webkit_dom_document_fragment_query_selector_all(WebKitDOMDocumentFragment* self, const gchar* selectors, GError** error);

/**
 * webkit_dom_document_fragment_get_children:
 * @self: A #WebKitDOMDocumentFragment
 *
 * Returns: (transfer full): A #WebKitDOMHTMLCollection
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMHTMLCollection*
webkit_dom_document_fragment_get_children(WebKitDOMDocumentFragment* self);

/**
 * webkit_dom_document_fragment_get_first_element_child:
 * @self: A #WebKitDOMDocumentFragment
 *
 * Returns: (transfer none): A #WebKitDOMElement
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMElement*
webkit_dom_document_fragment_get_first_element_child(WebKitDOMDocumentFragment* self);

/**
 * webkit_dom_document_fragment_get_last_element_child:
 * @self: A #WebKitDOMDocumentFragment
 *
 * Returns: (transfer none): A #WebKitDOMElement
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMElement*
webkit_dom_document_fragment_get_last_element_child(WebKitDOMDocumentFragment* self);

/**
 * webkit_dom_document_fragment_get_child_element_count:
 * @self: A #WebKitDOMDocumentFragment
 *
 * Returns: A #gulong
 *
 * Stability: Unstable
**/
WEBKIT_API gulong
webkit_dom_document_fragment_get_child_element_count(WebKitDOMDocumentFragment* self);


G_END_DECLS

#endif /* WEBKIT_DOM_USE_UNSTABLE_API */
#endif /* WebKitDOMDocumentFragmentUnstable_h */
