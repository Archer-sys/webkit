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

#ifndef WebKitDOMCharacterDataUnstable_h
#define WebKitDOMCharacterDataUnstable_h

#ifdef WEBKIT_DOM_USE_UNSTABLE_API

#include <webkitdom/webkitdomdefines-unstable.h>

G_BEGIN_DECLS

/**
 * webkit_dom_character_data_remove:
 * @self: A #WebKitDOMCharacterData
 * @error: #GError
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_character_data_remove(WebKitDOMCharacterData* self, GError** error);

/**
 * webkit_dom_character_data_get_previous_element_sibling:
 * @self: A #WebKitDOMCharacterData
 *
 * Returns: (transfer none): A #WebKitDOMElement
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMElement*
webkit_dom_character_data_get_previous_element_sibling(WebKitDOMCharacterData* self);

/**
 * webkit_dom_character_data_get_next_element_sibling:
 * @self: A #WebKitDOMCharacterData
 *
 * Returns: (transfer none): A #WebKitDOMElement
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMElement*
webkit_dom_character_data_get_next_element_sibling(WebKitDOMCharacterData* self);


G_END_DECLS

#endif /* WEBKIT_DOM_USE_UNSTABLE_API */
#endif /* WebKitDOMCharacterDataUnstable_h */
