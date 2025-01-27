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

#ifndef WebKitDOMElementUnstable_h
#define WebKitDOMElementUnstable_h

#ifdef WEBKIT_DOM_USE_UNSTABLE_API

#include <webkitdom/webkitdomdefines-unstable.h>

G_BEGIN_DECLS

/**
 * WEBKIT_DOM_ELEMENT_ALLOW_KEYBOARD_INPUT:
 */
#define WEBKIT_DOM_ELEMENT_ALLOW_KEYBOARD_INPUT 1

/**
 * webkit_dom_element_matches:
 * @self: A #WebKitDOMElement
 * @selectors: A #gchar
 * @error: #GError
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_element_matches(WebKitDOMElement* self, const gchar* selectors, GError** error);

/**
 * webkit_dom_element_closest:
 * @self: A #WebKitDOMElement
 * @selectors: A #gchar
 * @error: #GError
 *
 * Returns: (transfer none): A #WebKitDOMElement
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMElement*
webkit_dom_element_closest(WebKitDOMElement* self, const gchar* selectors, GError** error);

/**
 * webkit_dom_element_webkit_matches_selector:
 * @self: A #WebKitDOMElement
 * @selectors: A #gchar
 * @error: #GError
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_element_webkit_matches_selector(WebKitDOMElement* self, const gchar* selectors, GError** error);

/**
 * webkit_dom_element_webkit_request_full_screen:
 * @self: A #WebKitDOMElement
 * @flags: A #gushort
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_element_webkit_request_full_screen(WebKitDOMElement* self, gushort flags);

/**
 * webkit_dom_element_webkit_request_fullscreen:
 * @self: A #WebKitDOMElement
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_element_webkit_request_fullscreen(WebKitDOMElement* self);

/**
 * webkit_dom_element_insert_adjacent_element:
 * @self: A #WebKitDOMElement
 * @where: A #gchar
 * @element: A #WebKitDOMElement
 * @error: #GError
 *
 * Returns: (transfer none): A #WebKitDOMElement
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMElement*
webkit_dom_element_insert_adjacent_element(WebKitDOMElement* self, const gchar* where, WebKitDOMElement* element, GError** error);

/**
 * webkit_dom_element_insert_adjacent_html:
 * @self: A #WebKitDOMElement
 * @where: A #gchar
 * @html: A #gchar
 * @error: #GError
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_element_insert_adjacent_html(WebKitDOMElement* self, const gchar* where, const gchar* html, GError** error);

/**
 * webkit_dom_element_insert_adjacent_text:
 * @self: A #WebKitDOMElement
 * @where: A #gchar
 * @text: A #gchar
 * @error: #GError
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_element_insert_adjacent_text(WebKitDOMElement* self, const gchar* where, const gchar* text, GError** error);

/**
 * webkit_dom_element_request_pointer_lock:
 * @self: A #WebKitDOMElement
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_element_request_pointer_lock(WebKitDOMElement* self);

/**
 * webkit_dom_element_remove:
 * @self: A #WebKitDOMElement
 * @error: #GError
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_element_remove(WebKitDOMElement* self, GError** error);

/**
 * webkit_dom_element_get_class_list:
 * @self: A #WebKitDOMElement
 *
 * Returns: (transfer full): A #WebKitDOMDOMTokenList
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMDOMTokenList*
webkit_dom_element_get_class_list(WebKitDOMElement* self);

/**
 * webkit_dom_element_get_webkit_region_overset:
 * @self: A #WebKitDOMElement
 *
 * Returns: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API gchar*
webkit_dom_element_get_webkit_region_overset(WebKitDOMElement* self);


G_END_DECLS

#endif /* WEBKIT_DOM_USE_UNSTABLE_API */
#endif /* WebKitDOMElementUnstable_h */
